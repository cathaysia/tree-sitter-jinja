# Changelog

## [0.11.0](https://github.com/cathaysia/tree-sitter-jinja/compare/v0.10.0...v0.11.0) (2025-09-01)


### Features

* **block:** support required blocks ([5c0fd73](https://github.com/cathaysia/tree-sitter-jinja/commit/5c0fd73d4ac539afec90517e951c7a4c7cac9e34)), closes [#41](https://github.com/cathaysia/tree-sitter-jinja/issues/41)

## [0.10.0](https://github.com/cathaysia/tree-sitter-jinja/compare/v0.9.0...v0.10.0) (2025-07-23)


### Features

* expose words token, fix [#12](https://github.com/cathaysia/tree-sitter-jinja/issues/12) ([ca416c9](https://github.com/cathaysia/tree-sitter-jinja/commit/ca416c9a38619a1332b0a7255ead529846979fa7))
* **expression:** better expression ([b87b468](https://github.com/cathaysia/tree-sitter-jinja/commit/b87b468c3a9c97f90c21dd70f598993d1acd20a3))
* **expression:** support builtin_test ([26b5db9](https://github.com/cathaysia/tree-sitter-jinja/commit/26b5db9608e966d2c4181ec35fa9913c22bb0f2a))
* **grammar:** better words ([f3fcc88](https://github.com/cathaysia/tree-sitter-jinja/commit/f3fcc882f45e7f0cf855d42bb51a526996135f20))
* **inline:** add more highlight ([0e73373](https://github.com/cathaysia/tree-sitter-jinja/commit/0e73373adb10ce63b1398515fdb60082f318e14f))
* **inline:** allow ends with colon ([5e57cd1](https://github.com/cathaysia/tree-sitter-jinja/commit/5e57cd13c8d02cfee0fa9fb760910ba706770d1f))
* **inline:** complete inline ([975e23f](https://github.com/cathaysia/tree-sitter-jinja/commit/975e23f5731c66dbbabce1c55845fcb545331143))
* **inline:** complete inline ([17c9ded](https://github.com/cathaysia/tree-sitter-jinja/commit/17c9ded0b9b8576297bd7b13afcc756408e93e61))
* **j2:** impl lstrip_blocks ([b32ce52](https://github.com/cathaysia/tree-sitter-jinja/commit/b32ce52e00811e3911799625212d49ff3867a352))
* **jinja2:** add space after inline statement ([c47945b](https://github.com/cathaysia/tree-sitter-jinja/commit/c47945bac6863de5438a05ceb3e608b26f05e392))
* **jinja2:** better inline block and inline raw ([bebb669](https://github.com/cathaysia/tree-sitter-jinja/commit/bebb66923ec33be7cc89b1f5875eddac77726fb7))
* **jinja2:** better inline parse ([ad08771](https://github.com/cathaysia/tree-sitter-jinja/commit/ad08771723d82ce6eea509113f569faab8c583e2))
* **jinja2:** first commit ([ee5c406](https://github.com/cathaysia/tree-sitter-jinja/commit/ee5c406b702b8820304c38cd19c0dbd3baa9b558))
* **jinja2:** support line raw ([14afcc9](https://github.com/cathaysia/tree-sitter-jinja/commit/14afcc9052ac9047e7f317a82403fd434fd66029))
* **literal:** better literal ([8458367](https://github.com/cathaysia/tree-sitter-jinja/commit/84583676fd01ac80ec01f8e05d0d1ff302d822cc))
* make '=' as binary_operator ([6ee7c48](https://github.com/cathaysia/tree-sitter-jinja/commit/6ee7c483d353c94737c8000ffbb745f6cce5021b))
* **pnpm:** add workspace ([4b368b9](https://github.com/cathaysia/tree-sitter-jinja/commit/4b368b9392dba020d93541ea6694282e3ab580bf))
* **queires:** add queries ([2a06ac6](https://github.com/cathaysia/tree-sitter-jinja/commit/2a06ac63326f3ac1c2fe31144be6de9feef7e474))
* **queries:** fix https://github.com/nvim-treesitter/nvim-treesitter/pull/7573#discussion_r1925536337 ([bb32de4](https://github.com/cathaysia/tree-sitter-jinja/commit/bb32de45f82484bd18d4093dc125dc74ae6816a9))
* **queries:** update queries ([01c1b56](https://github.com/cathaysia/tree-sitter-jinja/commit/01c1b5676d1b0240646a64d05bc2a2d32e502477))
* **queries:** update queries ([5f01ee8](https://github.com/cathaysia/tree-sitter-jinja/commit/5f01ee81993e15d5f6300d53a1426570ac76e937))
* **queries:** update queries ([9a27290](https://github.com/cathaysia/tree-sitter-jinja/commit/9a27290ec895057098b04ea2416f02d6370a80d6))
* **queries:** update queries ([735194b](https://github.com/cathaysia/tree-sitter-jinja/commit/735194bc7c6ff75504393563ae46d458ca320f28))
* **query:** update queries ([1722645](https://github.com/cathaysia/tree-sitter-jinja/commit/1722645860a7e877fa096f7a243edd39d91f8326))
* **raw:** parse raw block ([d1f9f50](https://github.com/cathaysia/tree-sitter-jinja/commit/d1f9f5006879f121beb8a252e2bee8988730ed57))
* rebuild and remove all 'jinja2' ([f101bfb](https://github.com/cathaysia/tree-sitter-jinja/commit/f101bfbdbc8125ab19e26ff59a5e92a5d857326a))
* remove symlinks ([9331e21](https://github.com/cathaysia/tree-sitter-jinja/commit/9331e21b421d833755e5c752d237f003c31b1b6b))
* rename jinja2 to jinja ([3555a77](https://github.com/cathaysia/tree-sitter-jinja/commit/3555a7713894389ac66e85900457964650098a40))
* rename words to content ([d8dd27a](https://github.com/cathaysia/tree-sitter-jinja/commit/d8dd27af2fb4d5e76057aed8e71e573d895c473e))
* **set:** allow inline if behand set ([dbe9571](https://github.com/cathaysia/tree-sitter-jinja/commit/dbe95715142a1f9383ee17eb78d36f5106bd5a00))
* support with ([ea91748](https://github.com/cathaysia/tree-sitter-jinja/commit/ea91748e01fbe256847f6eff05f17754b57872f7))
* update highlights ([cdb4ffc](https://github.com/cathaysia/tree-sitter-jinja/commit/cdb4ffcd9a537827c5dfa66986b6b528b649f914))


### Bug Fixes

* **expression:** fix builtin_test ([af5b2e3](https://github.com/cathaysia/tree-sitter-jinja/commit/af5b2e39776cf1783069362a60290f8c827fb78a))
* fix [#11](https://github.com/cathaysia/tree-sitter-jinja/issues/11) ([27c85fc](https://github.com/cathaysia/tree-sitter-jinja/commit/27c85fcdd749f93f75cabb626a73780a69bd6282))
* fix symbol problem ([501b3e3](https://github.com/cathaysia/tree-sitter-jinja/commit/501b3e3fee62cf025b8dbb2af024e1fda8121c74))
* **inline:** fix inline function call ([3b6d9df](https://github.com/cathaysia/tree-sitter-jinja/commit/3b6d9dfeac8fb095ee516e9f323b6a6cd38ee422))
* **jinja_inline:** fix [#37](https://github.com/cathaysia/tree-sitter-jinja/issues/37) ([1d98ec9](https://github.com/cathaysia/tree-sitter-jinja/commit/1d98ec9753805a933a2d766976b91437d956419d))
* **jinja2:** fix [#1](https://github.com/cathaysia/tree-sitter-jinja/issues/1) ([0114c30](https://github.com/cathaysia/tree-sitter-jinja/commit/0114c305cdd67321529335637d832f64a4dba651))
* **jinja2:** fix [#2](https://github.com/cathaysia/tree-sitter-jinja/issues/2) ([830e719](https://github.com/cathaysia/tree-sitter-jinja/commit/830e7196073972f52a78d8dada24215679d4a4e7))
* **jinja2:** fix [#4](https://github.com/cathaysia/tree-sitter-jinja/issues/4) ([d70ea40](https://github.com/cathaysia/tree-sitter-jinja/commit/d70ea40e1317749fd4d52c54b93cc9a38c8cc088))
* **jinja:** fix [#3](https://github.com/cathaysia/tree-sitter-jinja/issues/3) ([df35595](https://github.com/cathaysia/tree-sitter-jinja/commit/df355959962a30c5940720f82bb803dab7e80118))
* **jinja:** fix [#30](https://github.com/cathaysia/tree-sitter-jinja/issues/30) ([9cd3a94](https://github.com/cathaysia/tree-sitter-jinja/commit/9cd3a94a18a7b40033559a14b735f0fda41eee9a))
* **jinja:** fix some errors ([d0f8f46](https://github.com/cathaysia/tree-sitter-jinja/commit/d0f8f468a39baa60dc9a61429755ed77fe2f591f))
* **jinja:** fix statement behind line statement ([981cebb](https://github.com/cathaysia/tree-sitter-jinja/commit/981cebb973046083e847b20e15c46610dbf47da3))
* python package name ([dd2c42e](https://github.com/cathaysia/tree-sitter-jinja/commit/dd2c42ea360b7e4b6c6fb809494203ae251e1c87))
* **queries:** fix https://github.com/nvim-treesitter/nvim-treesitter/pull/7573#discussion_r1925513647 ([2c977a3](https://github.com/cathaysia/tree-sitter-jinja/commit/2c977a3b040717f036a5b498ac3e0c6958b278f2))
* remove unnecessary definition node ([25a8f4a](https://github.com/cathaysia/tree-sitter-jinja/commit/25a8f4a5959479ab0c4228206a10540a7d9af4bd))
* **rs:** fix cargo ([b228b97](https://github.com/cathaysia/tree-sitter-jinja/commit/b228b97372a26a81e4966b32e7c3171363bb2f85))
* **rs:** fix rust publish ([fdf596c](https://github.com/cathaysia/tree-sitter-jinja/commit/fdf596ccc720ba9419b0fab5cfc3dc05d5bf14c1))
