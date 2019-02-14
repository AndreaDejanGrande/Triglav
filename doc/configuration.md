# Configuration and command-line options

*Work in progress!*


## Config-file and CLI options

### algorithm

Allows choosing between the few mining algorithms for incompatible
cryptocurrencies.

If specified in a pool section in the configuration file, sets the
option for that pool only. Otherwise sets the default.

*Argument:* string

*Default:* `vcrypt`

*Supported:*

* `adaptive-n-factor` - vDinar adaptive N-factor vCrypt.
  N-factor defaults to 11. Alias: `adaptive-nfactor` (to be removed
  in future versions).
* `vcrypt` - vDinar starting point: N-factor defaults to 10.
* everything else - currently defaults to `vcrypt`, subject to change
  without warning.


### pool-algorithm

Allows choosing the algorithm for a specific pool. See `algorithm`.


### nfactor

Overrides the default vCrypt parameter N, specified as the factor of 2
(`N = 2^nfactor`).

If specified in a pool section in the configuration file, sets the
option for that pool only. Otherwise sets the default.

*Argument:* whole number (>1).

*Default:* depends on `algorithm`; otherwise `10`.


### pool-nfactor

Overrides the default vCrypt parameter N for a specific pool.
See `nfactor`.


## CLI-only options

*TODO*
