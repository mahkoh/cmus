# D-Bus interface documentation

This file describes the D-Bus interface of cmus.  cmus is reachable on the
session bus under the name `net.sourceforge.cmus` and exposes the object
`/net/sourceforge/cmus` with the interface `net.sourceforge.cmus`.

## Functions

### Info functions

The following functions take no arguments and return one value.  If the function
is not applicable (e.g. `artist()` if no track is selected or if the `artist`
tag isn't set in the playing file,) a default value of `""` for strings, `0`
for integers, or `false` for booleans is returned.

* **`bool has_track()`** Whether a track is selected.
* **`int32 pos()`** The seek position of the current track.
* **`bool repeat()`** Whether repeat is on.
* **`bool shuffle()`** Whether shuffle is on.
* **`string status()`** `playing`, `stopped`, or `paused`.
* **`string version()`** The cmus version.
* **`int32 volume()`** The volume.

The following functions return the corresponding tags of the current file.

* **`string albumartist()`**
* **`string album()`**
* **`string artist()`**
* **`bool compilation()`**
* **`int32 date()`**
* **`int32 discnumber()`**
* **`int32 duration()`**
* **`string filename()`**
* **`string genre()`**
* **`int32 original_date()`**
* **`string title()`**
* **`int32 tracknumber()`**

### Action functions.

The following functions take zero or one argument and perform an action inside
cmus.  If the request is malformatted an error might be returned.  Otherwise the
functions respond with an empty reply.  See `man cmus` for the documentation of
the cmus commands.

* **`next()`** `:player-next`
* **`pause()`** `:player-pause`
* **`play()`** `:player-play`
* **`prev()`** `:player-prev`
* **`stop()`** `:player-stop`
* **`toggle_repeat()`** `:toggle repeat`
* **`toggle_shuffle()`** `:toggle shuffle`
* **`load(string file)`** `:load $file`
* **`seek(string pos)`** `:seek $pos`
* **`set_volume(string vol)`** `:vol $vol`
* **`cmd(string cmd)`** `:$cmd`

## Signals

cmus emits the following signals.

* **`status_change()`** When the player starts playing, stops playing, or pauses.
* **`track_change()`** When the track changes.
* **`vol_change()`** When the volume changes.
