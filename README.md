# D.eSystem-5-
D.eSystem 5+ — Modular C‑Based Mini Operating System
D.eSystem 5+ is the enhanced, optimized, and more modular evolution of D.eSystem 5.
It is written entirely in C and designed to behave like a lightweight, console‑based operating environment with multiple built‑in system apps, a stable core loop, and a clean UI flow.

D.eSystem 5+ focuses on structure, performance, and expandability, making it the most polished version of D.eSystem to date.

Features:
Modular architecture with clean separation between apps and core

Stable input handling (no leftover buffer issues)

Multiple built‑in system applications

Consistent UI design across all modules

Easy to extend with new apps

Lightweight and fast (pure C, no dependencies)

Structured system variables and data models


System Architecture:
D.eSystem 5+ is divided into several logical components:

Core Loop — main shell, command handler

UI Layer — all menu screens and app interfaces

System Apps — Calculator, Notes, Clock, Calendar, Max Chatbot, System Info

Data Models — structs for system info, notes, commands

Input Handler — safe and consistent input processing

Included Applications:#


1: D.Note
A simple note‑taking module with clean input handling.

Create notes

Display notes

99‑character buffer

Newline trimming for clean output

Uses a dedicated v_note struct


2: Clock
Shows the current system time using time.h.

Live time display

Loop‑based navigation

Clean UI


3: D.Calendar
Displays the current date.

Day / Month / Year

Simple navigation

Recursion‑based return to main menu



4: D.eSystem Info
Shows system metadata stored in a SystemInfo struct.

OS version

UI version

UX version

Brand name



5: Max Chatbot
A simple rule‑based chatbot.

Responds to predefined commands

Case‑insensitive input

Clean UI refresh after each message



6: Calculator
A basic arithmetic calculator.

Addition

Subtraction

Multiplication

Division

Safe input handling





Technical Details:

Language: C

Standard Library: stdio, string, time

Input Handling:

fgets() for strings

scanf() with buffer clearing

newline trimming using strcspn()

Data Structures:

SystemInfo

v_note

Architecture:

Modular functions

Clean switch‑based command routing

Reusable UI components




How It Works:

You can use the files in a local installed compiler,or you can use the .exe file in windows

The system boots into the main shell

User selects a module

The module runs in its own loop

Returning exits back to the shell

System continues until shutdown

This creates a simple but realistic OS‑like experience.
