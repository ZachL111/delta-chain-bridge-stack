# delta-chain-bridge-stack

`delta-chain-bridge-stack` keeps a focused C implementation around blockchain tooling. The project goal is to implement a C blockchain tooling project for bridge diagnostic reporting, using negative fixtures and human-readable error snapshots.

## Why This Exists

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Delta Chain Bridge Stack Review Notes

For a quick review, compare `settlement risk` with `nonce pressure` before reading the middle cases.

## Capabilities

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/delta-chain-bridge-walkthrough.md` walks through the case spread.
- The C code includes a review path for `settlement risk` and `nonce pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`.

The added C path is deliberately direct, with fixtures doing most of the explaining.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

The check exercises the source code and the review fixture. `edge` is the high score at 223; `stress` is the low score at 170.

## Roadmap

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
