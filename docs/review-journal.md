# Review Journal

The repository goal stays the same: implement a C blockchain tooling project for bridge diagnostic reporting, using negative fixtures and human-readable error snapshots. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 209, lane `ship`
- `stress`: `nonce pressure`, score 170, lane `ship`
- `edge`: `settlement risk`, score 223, lane `ship`
- `recovery`: `proof depth`, score 207, lane `ship`
- `stale`: `event finality`, score 218, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
