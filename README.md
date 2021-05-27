# Automate Compile Run Organize

**Using `sh run.sh`**

## Compile and Run

**Compile and run single root-level C++ file**

```bash
sh run.sh
```

<br>

---

<br><br>

## Save Notes (complete) -> Next Topic

**Move to next topic**

```bash
sh run.sh next nextTopic
```

- moves `currentTopic.cpp` and `currentTopic_notes.md` to `./complete`
- registers `nextTopic.cpp` and `nextTopic_notes.md`

<br>

---

<br><br>

## Save Notes (keep) -> Next Topic

**Save current root files in special folder (./keep)**

```bash
sh run.sh keep nextTopic
```

- moves `currentTopic.cpp` and `currentTopic_notes.md` to `./keep`
- registers `nextTopic.cpp` and `nextTopic_notes.md`
