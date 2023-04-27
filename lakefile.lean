import Lake
open Lake DSL

package final

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git"@"master"

@[default_target]
lean_lib final where
  moreLeanArgs := #["-DwarningAsError=true", "-Dpp.unicode.fun=true"] -- pretty-prints `fun a ↦ b`