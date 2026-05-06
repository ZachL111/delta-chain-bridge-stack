# Delta Chain Bridge Stack Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 209 | ship |
| stress | nonce pressure | 170 | ship |
| edge | settlement risk | 223 | ship |
| recovery | proof depth | 207 | ship |
| stale | event finality | 218 | ship |

Start with `edge` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `stress` becomes less cautious without a clear reason, I would inspect the drag input first.
