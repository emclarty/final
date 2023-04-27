import Lake
open Lake DSL

@[default_target]
lean_lib final where
  moreLeanArgs := #["-DwarningAsError=true", "-Dpp.unicode.fun=true"] -- pretty-prints `fun a ↦ b`



require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git"@"master"

meta if get_config? doc = some "on" then -- do not download and build doc-gen4 by default
require «doc-gen4» from git "https://github.com/leanprover/doc-gen4.git" @ "main"