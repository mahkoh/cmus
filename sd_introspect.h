#ifndef _SD_INTROSPECT_H_
#define _SD_INTROSPECT_H_

#define MULTILINE(...) #__VA_ARGS__

const char *SD_INTROSPECT = MULTILINE(
<!DOCTYPE node PUBLIC "-//freedesktop//DTD D-BUS Object Introspection 1.0//EN" "http://www.freedesktop.org/standards/dbus/1.0/introspect.dtd">
<node><interface name="net.sourceforge.cmus">
	<method  name="has_track">      <arg  type="b"  direction="out"/></method>
	<method  name="pos">            <arg  type="i"  direction="out"/></method>
	<method  name="repeat">         <arg  type="b"  direction="out"/></method>
	<method  name="shuffle">        <arg  type="b"  direction="out"/></method>
	<method  name="status">         <arg  type="s"  direction="out"/></method>
	<method  name="version">        <arg  type="s"  direction="out"/></method>
	<method  name="volume">         <arg  type="i"  direction="out"/></method>
	<method  name="albumartist">    <arg  type="s"  direction="out"/></method>
	<method  name="album">          <arg  type="s"  direction="out"/></method>
	<method  name="artist">         <arg  type="s"  direction="out"/></method>
	<method  name="compilation">    <arg  type="b"  direction="out"/></method>
	<method  name="date">           <arg  type="i"  direction="out"/></method>
	<method  name="discnumber">     <arg  type="i"  direction="out"/></method>
	<method  name="duration">       <arg  type="i"  direction="out"/></method>
	<method  name="filename">       <arg  type="s"  direction="out"/></method>
	<method  name="original_date">  <arg  type="i"  direction="out"/></method>
	<method  name="title">          <arg  type="s"  direction="out"/></method>
	<method  name="tracknumber">    <arg  type="i"  direction="out"/></method>
	<method  name="next">            </method>
	<method  name="pause">           </method>
	<method  name="prev">            </method>
	<method  name="play">            </method>
	<method  name="stop">            </method>
	<method  name="toggle_repeat">   </method>
	<method  name="toggle_shuffle">  </method>
	<method  name="load">        <arg  type="s"/></method>
	<method  name="seek">        <arg  type="s"/></method>
	<method  name="set_volume">  <arg  type="s"/></method>
	<method  name="cmd">         <arg  type="s"/></method>

	<signal  name="status_change">  </signal>
	<signal  name="track_change">   </signal>
	<signal  name="vol_change">     </signal>
</interface></node>
);

#endif
