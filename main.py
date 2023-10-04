"""
This is a simple program that will take input from the Novation Launchpad Pro Mk3 and output sound based on the grid MIDI input.
"""

from tkinter import *
from tkinter import ttk

# Define the size of each square
square_size = 50

# Create the root window
root = Tk()
root.title("My Application")

# Create the frame to hold the grid
frame = ttk.Frame(root)
frame.grid(row=0, column=0, sticky="nsew")

# Set the size of the rows and columns
for i in range(10):
    frame.rowconfigure(i, minsize=square_size)
for i in range(11):
    frame.columnconfigure(i, minsize=square_size)

# Define the colors for the squares
colors = ["red", "orange", "yellow", "green", "blue", "purple", "pink", "brown", "gray", "black"]

# Draw the squares
for row in range(10):
    for col in range(11):
        color = colors[row]
        square = ttk.Frame(frame, width=square_size, height=square_size, relief="solid", borderwidth=1, style="Square.TFrame")
        square.grid(row=row, column=col, padx=0, pady=0)
        square.configure(style="Square.TFrame", background=color)

# Define the style for the frames
style = ttk.Style()
style.configure("Square.TFrame", background="white")

# Center the frame in the middle of the screen
root.rowconfigure(0, weight=1)
root.columnconfigure(0, weight=1)
frame.grid(sticky="nsew")

# Start the main loop
root.mainloop()