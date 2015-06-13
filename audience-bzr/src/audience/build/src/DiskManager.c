/* DiskManager.c generated by valac 0.28.0, the Vala compiler
 * generated from DiskManager.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2013-2014 Audience Developers (http://launchpad.net/pantheon-chat)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Corentin Noël <corentin@elementaryos.org>
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>


#define AUDIENCE_TYPE_DISK_MANAGER (audience_disk_manager_get_type ())
#define AUDIENCE_DISK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), AUDIENCE_TYPE_DISK_MANAGER, AudienceDiskManager))
#define AUDIENCE_DISK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), AUDIENCE_TYPE_DISK_MANAGER, AudienceDiskManagerClass))
#define AUDIENCE_IS_DISK_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), AUDIENCE_TYPE_DISK_MANAGER))
#define AUDIENCE_IS_DISK_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), AUDIENCE_TYPE_DISK_MANAGER))
#define AUDIENCE_DISK_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), AUDIENCE_TYPE_DISK_MANAGER, AudienceDiskManagerClass))

typedef struct _AudienceDiskManager AudienceDiskManager;
typedef struct _AudienceDiskManagerClass AudienceDiskManagerClass;
typedef struct _AudienceDiskManagerPrivate AudienceDiskManagerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _AudienceDiskManager {
	GObject parent_instance;
	AudienceDiskManagerPrivate * priv;
};

struct _AudienceDiskManagerClass {
	GObjectClass parent_class;
};

struct _AudienceDiskManagerPrivate {
	GVolumeMonitor* monitor;
	GList* volumes;
};


static gpointer audience_disk_manager_parent_class = NULL;
static AudienceDiskManager* audience_disk_manager_disk_manager;
static AudienceDiskManager* audience_disk_manager_disk_manager = NULL;

GType audience_disk_manager_get_type (void) G_GNUC_CONST;
#define AUDIENCE_DISK_MANAGER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), AUDIENCE_TYPE_DISK_MANAGER, AudienceDiskManagerPrivate))
enum  {
	AUDIENCE_DISK_MANAGER_DUMMY_PROPERTY
};
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
AudienceDiskManager* audience_disk_manager_get_default (void);
static AudienceDiskManager* audience_disk_manager_new (void);
static AudienceDiskManager* audience_disk_manager_construct (GType object_type);
static void __lambda33_ (AudienceDiskManager* self, GDrive* drive);
static void ___lambda33__g_volume_monitor_drive_changed (GVolumeMonitor* _sender, GDrive* drive, gpointer self);
static void __lambda34_ (AudienceDiskManager* self, GDrive* drive);
static void ___lambda34__g_volume_monitor_drive_connected (GVolumeMonitor* _sender, GDrive* drive, gpointer self);
static void __lambda35_ (AudienceDiskManager* self, GDrive* drive);
static void ___lambda35__g_volume_monitor_drive_disconnected (GVolumeMonitor* _sender, GDrive* drive, gpointer self);
static void __lambda36_ (AudienceDiskManager* self, GDrive* drive);
static void ___lambda36__g_volume_monitor_drive_eject_button (GVolumeMonitor* _sender, GDrive* drive, gpointer self);
static void __lambda37_ (AudienceDiskManager* self, GDrive* drive);
static void ___lambda37__g_volume_monitor_drive_stop_button (GVolumeMonitor* _sender, GDrive* drive, gpointer self);
static void __lambda38_ (AudienceDiskManager* self, GVolume* volume);
static void audience_disk_manager_check_for_volume (AudienceDiskManager* self, GVolume* volume);
static void ___lambda38__g_volume_monitor_volume_added (GVolumeMonitor* _sender, GVolume* volume, gpointer self);
static void __lambda39_ (AudienceDiskManager* self, GVolume* volume);
static void ___lambda39__g_volume_monitor_volume_changed (GVolumeMonitor* _sender, GVolume* volume, gpointer self);
static void __lambda40_ (AudienceDiskManager* self, GVolume* volume);
static void ___lambda40__g_volume_monitor_volume_removed (GVolumeMonitor* _sender, GVolume* volume, gpointer self);
GList* audience_disk_manager_get_volumes (AudienceDiskManager* self);
GList* audience_disk_manager_get_media_volumes (AudienceDiskManager* self);
static gboolean audience_disk_manager_has_dvd_media (AudienceDiskManager* self, GVolume* volume);
gboolean audience_disk_manager_has_media_volumes (AudienceDiskManager* self);
static void audience_disk_manager_finalize (GObject* obj);


static void _g_object_unref0_ (gpointer var) {
#line 35 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
#line 100 "DiskManager.c"
}


static void _g_list_free__g_object_unref0_ (GList* self) {
#line 35 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
#line 35 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_list_free (self);
#line 109 "DiskManager.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 31 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return self ? g_object_ref (self) : NULL;
#line 116 "DiskManager.c"
}


AudienceDiskManager* audience_disk_manager_get_default (void) {
	AudienceDiskManager* result = NULL;
	AudienceDiskManager* _tmp0_ = NULL;
	AudienceDiskManager* _tmp2_ = NULL;
	AudienceDiskManager* _tmp3_ = NULL;
#line 27 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = audience_disk_manager_disk_manager;
#line 27 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	if (_tmp0_ == NULL) {
#line 129 "DiskManager.c"
		AudienceDiskManager* _tmp1_ = NULL;
#line 28 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp1_ = audience_disk_manager_new ();
#line 28 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_g_object_unref0 (audience_disk_manager_disk_manager);
#line 28 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		audience_disk_manager_disk_manager = _tmp1_;
#line 137 "DiskManager.c"
	}
#line 31 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = audience_disk_manager_disk_manager;
#line 31 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 31 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	result = _tmp3_;
#line 31 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return result;
#line 147 "DiskManager.c"
}


static void __lambda33_ (AudienceDiskManager* self, GDrive* drive) {
	GDrive* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 41 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (drive != NULL);
#line 42 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = drive;
#line 42 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_drive_get_name (_tmp0_);
#line 42 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 42 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:42: Drive changed: %s\n", _tmp2_);
#line 42 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 167 "DiskManager.c"
}


static void ___lambda33__g_volume_monitor_drive_changed (GVolumeMonitor* _sender, GDrive* drive, gpointer self) {
#line 41 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda33_ ((AudienceDiskManager*) self, drive);
#line 174 "DiskManager.c"
}


static void __lambda34_ (AudienceDiskManager* self, GDrive* drive) {
	GDrive* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 45 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (drive != NULL);
#line 46 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = drive;
#line 46 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_drive_get_name (_tmp0_);
#line 46 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 46 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:46: Drive connected: %s", _tmp2_);
#line 46 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 194 "DiskManager.c"
}


static void ___lambda34__g_volume_monitor_drive_connected (GVolumeMonitor* _sender, GDrive* drive, gpointer self) {
#line 45 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda34_ ((AudienceDiskManager*) self, drive);
#line 201 "DiskManager.c"
}


static void __lambda35_ (AudienceDiskManager* self, GDrive* drive) {
	GDrive* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 49 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (drive != NULL);
#line 50 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = drive;
#line 50 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_drive_get_name (_tmp0_);
#line 50 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 50 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:50: Drive disconnected: %s", _tmp2_);
#line 50 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 221 "DiskManager.c"
}


static void ___lambda35__g_volume_monitor_drive_disconnected (GVolumeMonitor* _sender, GDrive* drive, gpointer self) {
#line 49 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda35_ ((AudienceDiskManager*) self, drive);
#line 228 "DiskManager.c"
}


static void __lambda36_ (AudienceDiskManager* self, GDrive* drive) {
	GDrive* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 53 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (drive != NULL);
#line 54 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = drive;
#line 54 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_drive_get_name (_tmp0_);
#line 54 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 54 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:54: Drive eject-button: %s", _tmp2_);
#line 54 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 248 "DiskManager.c"
}


static void ___lambda36__g_volume_monitor_drive_eject_button (GVolumeMonitor* _sender, GDrive* drive, gpointer self) {
#line 53 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda36_ ((AudienceDiskManager*) self, drive);
#line 255 "DiskManager.c"
}


static void __lambda37_ (AudienceDiskManager* self, GDrive* drive) {
	GDrive* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 57 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (drive != NULL);
#line 58 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = drive;
#line 58 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_drive_get_name (_tmp0_);
#line 58 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 58 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:58: Drive stop-button:%s", _tmp2_);
#line 58 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 275 "DiskManager.c"
}


static void ___lambda37__g_volume_monitor_drive_stop_button (GVolumeMonitor* _sender, GDrive* drive, gpointer self) {
#line 57 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda37_ ((AudienceDiskManager*) self, drive);
#line 282 "DiskManager.c"
}


static void __lambda38_ (AudienceDiskManager* self, GVolume* volume) {
	GVolume* _tmp0_ = NULL;
	GVolume* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 61 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (volume != NULL);
#line 62 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = volume;
#line 62 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	audience_disk_manager_check_for_volume (self, _tmp0_);
#line 63 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = volume;
#line 63 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = g_volume_get_name (_tmp1_);
#line 63 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = _tmp2_;
#line 63 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:63: Volume added: %s", _tmp3_);
#line 63 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp3_);
#line 307 "DiskManager.c"
}


static void ___lambda38__g_volume_monitor_volume_added (GVolumeMonitor* _sender, GVolume* volume, gpointer self) {
#line 61 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda38_ ((AudienceDiskManager*) self, volume);
#line 314 "DiskManager.c"
}


static void __lambda39_ (AudienceDiskManager* self, GVolume* volume) {
	GVolume* _tmp0_ = NULL;
	GVolume* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 66 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (volume != NULL);
#line 67 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = volume;
#line 67 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	audience_disk_manager_check_for_volume (self, _tmp0_);
#line 68 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = volume;
#line 68 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = g_volume_get_name (_tmp1_);
#line 68 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = _tmp2_;
#line 68 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:68: Volume changed: %s", _tmp3_);
#line 68 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp3_);
#line 339 "DiskManager.c"
}


static void ___lambda39__g_volume_monitor_volume_changed (GVolumeMonitor* _sender, GVolume* volume, gpointer self) {
#line 66 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda39_ ((AudienceDiskManager*) self, volume);
#line 346 "DiskManager.c"
}


static void __lambda40_ (AudienceDiskManager* self, GVolume* volume) {
	GVolume* _tmp0_ = NULL;
	GVolume* _tmp1_ = NULL;
	GVolume* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
#line 71 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (volume != NULL);
#line 72 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = volume;
#line 72 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self->priv->volumes = g_list_remove (self->priv->volumes, _tmp0_);
#line 73 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = volume;
#line 73 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_emit_by_name (self, "volume-removed", _tmp1_);
#line 74 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = volume;
#line 74 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = g_volume_get_name (_tmp2_);
#line 74 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp4_ = _tmp3_;
#line 74 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:74: Volume removed: %s", _tmp4_);
#line 74 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp4_);
#line 376 "DiskManager.c"
}


static void ___lambda40__g_volume_monitor_volume_removed (GVolumeMonitor* _sender, GVolume* volume, gpointer self) {
#line 71 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__lambda40_ ((AudienceDiskManager*) self, volume);
#line 383 "DiskManager.c"
}


static AudienceDiskManager* audience_disk_manager_construct (GType object_type) {
	AudienceDiskManager * self = NULL;
	GVolumeMonitor* _tmp0_ = NULL;
	GVolumeMonitor* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	GVolumeMonitor* _tmp3_ = NULL;
	GVolumeMonitor* _tmp4_ = NULL;
	GVolumeMonitor* _tmp5_ = NULL;
	GVolumeMonitor* _tmp6_ = NULL;
	GVolumeMonitor* _tmp7_ = NULL;
	GVolumeMonitor* _tmp8_ = NULL;
	GVolumeMonitor* _tmp9_ = NULL;
	GVolumeMonitor* _tmp10_ = NULL;
#line 37 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self = (AudienceDiskManager*) g_object_new (object_type, NULL);
#line 38 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = g_volume_monitor_get ();
#line 38 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_object_unref0 (self->priv->monitor);
#line 38 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self->priv->monitor = _tmp0_;
#line 39 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = self->priv->monitor;
#line 39 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = g_volume_monitor_get_volumes (_tmp1_);
#line 39 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__g_list_free__g_object_unref0_0 (self->priv->volumes);
#line 39 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self->priv->volumes = _tmp2_;
#line 41 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = self->priv->monitor;
#line 41 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp3_, "drive-changed", (GCallback) ___lambda33__g_volume_monitor_drive_changed, self, 0);
#line 45 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp4_ = self->priv->monitor;
#line 45 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp4_, "drive-connected", (GCallback) ___lambda34__g_volume_monitor_drive_connected, self, 0);
#line 49 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp5_ = self->priv->monitor;
#line 49 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp5_, "drive-disconnected", (GCallback) ___lambda35__g_volume_monitor_drive_disconnected, self, 0);
#line 53 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp6_ = self->priv->monitor;
#line 53 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp6_, "drive-eject-button", (GCallback) ___lambda36__g_volume_monitor_drive_eject_button, self, 0);
#line 57 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp7_ = self->priv->monitor;
#line 57 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp7_, "drive-stop-button", (GCallback) ___lambda37__g_volume_monitor_drive_stop_button, self, 0);
#line 61 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp8_ = self->priv->monitor;
#line 61 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp8_, "volume-added", (GCallback) ___lambda38__g_volume_monitor_volume_added, self, 0);
#line 66 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp9_ = self->priv->monitor;
#line 66 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp9_, "volume-changed", (GCallback) ___lambda39__g_volume_monitor_volume_changed, self, 0);
#line 71 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp10_ = self->priv->monitor;
#line 71 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_connect_object (_tmp10_, "volume-removed", (GCallback) ___lambda40__g_volume_monitor_volume_removed, self, 0);
#line 37 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return self;
#line 450 "DiskManager.c"
}


static AudienceDiskManager* audience_disk_manager_new (void) {
#line 37 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return audience_disk_manager_construct (AUDIENCE_TYPE_DISK_MANAGER);
#line 457 "DiskManager.c"
}


GList* audience_disk_manager_get_volumes (AudienceDiskManager* self) {
	GList* result = NULL;
	GList* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
#line 78 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 79 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = self->priv->volumes;
#line 79 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_list_copy (_tmp0_);
#line 79 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	result = _tmp1_;
#line 79 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return result;
#line 475 "DiskManager.c"
}


GList* audience_disk_manager_get_media_volumes (AudienceDiskManager* self) {
	GList* result = NULL;
	GList* returnValue = NULL;
	GList* _tmp0_ = NULL;
#line 82 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 83 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	returnValue = NULL;
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = audience_disk_manager_get_volumes (self);
#line 489 "DiskManager.c"
	{
		GList* volume_collection = NULL;
		GList* volume_it = NULL;
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		volume_collection = _tmp0_;
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		for (volume_it = volume_collection; volume_it != NULL; volume_it = volume_it->next) {
#line 497 "DiskManager.c"
			GVolume* _tmp1_ = NULL;
			GVolume* volume = NULL;
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp1_ = _g_object_ref0 ((GVolume*) volume_it->data);
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			volume = _tmp1_;
#line 504 "DiskManager.c"
			{
				GVolume* _tmp2_ = NULL;
				gboolean _tmp3_ = FALSE;
#line 85 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp2_ = volume;
#line 85 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp3_ = audience_disk_manager_has_dvd_media (self, _tmp2_);
#line 85 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				if (_tmp3_) {
#line 514 "DiskManager.c"
					GVolume* _tmp4_ = NULL;
					GVolume* _tmp5_ = NULL;
#line 86 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
					_tmp4_ = volume;
#line 86 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
					_tmp5_ = _g_object_ref0 (_tmp4_);
#line 86 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
					returnValue = g_list_append (returnValue, _tmp5_);
#line 523 "DiskManager.c"
				}
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_g_object_unref0 (volume);
#line 527 "DiskManager.c"
			}
		}
#line 84 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		__g_list_free__g_object_unref0_0 (volume_collection);
#line 532 "DiskManager.c"
	}
#line 88 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	result = returnValue;
#line 88 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return result;
#line 538 "DiskManager.c"
}


gboolean audience_disk_manager_has_media_volumes (AudienceDiskManager* self) {
	gboolean result = FALSE;
	GList* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
	guint _tmp2_ = 0U;
	gboolean _tmp3_ = FALSE;
#line 91 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = audience_disk_manager_get_media_volumes (self);
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = _tmp0_;
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = g_list_length (_tmp1_);
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp3_ = _tmp2_ > ((guint) 0);
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__g_list_free__g_object_unref0_0 (_tmp1_);
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	result = _tmp3_;
#line 92 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return result;
#line 564 "DiskManager.c"
}


static void audience_disk_manager_check_for_volume (AudienceDiskManager* self, GVolume* volume) {
	GVolume* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 95 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (self != NULL);
#line 95 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_if_fail (volume != NULL);
#line 96 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = volume;
#line 96 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = audience_disk_manager_has_dvd_media (self, _tmp0_);
#line 96 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	if (_tmp1_) {
#line 581 "DiskManager.c"
		GVolume* _tmp2_ = NULL;
		GVolume* _tmp3_ = NULL;
		GVolume* _tmp4_ = NULL;
#line 97 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp2_ = volume;
#line 97 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp3_ = _g_object_ref0 (_tmp2_);
#line 97 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		self->priv->volumes = g_list_append (self->priv->volumes, _tmp3_);
#line 98 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp4_ = volume;
#line 98 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		g_signal_emit_by_name (self, "volume-found", _tmp4_);
#line 595 "DiskManager.c"
	}
}


static gboolean audience_disk_manager_has_dvd_media (AudienceDiskManager* self, GVolume* volume) {
	gboolean result = FALSE;
	GVolume* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GVolume* _tmp4_ = NULL;
	GDrive* _tmp5_ = NULL;
	GDrive* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
#line 102 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 102 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_return_val_if_fail (volume != NULL, FALSE);
#line 103 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp0_ = volume;
#line 103 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp1_ = g_volume_get_name (_tmp0_);
#line 103 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp2_ = _tmp1_;
#line 103 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_debug ("DiskManager.vala:103: Check DVD media for: %s", _tmp2_);
#line 103 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_free0 (_tmp2_);
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp4_ = volume;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp5_ = g_volume_get_drive (_tmp4_);
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp6_ = _tmp5_;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_tmp7_ = _tmp6_ != NULL;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_object_unref0 (_tmp6_);
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	if (_tmp7_) {
#line 636 "DiskManager.c"
		GVolume* _tmp8_ = NULL;
		GDrive* _tmp9_ = NULL;
		GDrive* _tmp10_ = NULL;
		gboolean _tmp11_ = FALSE;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp8_ = volume;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp9_ = g_volume_get_drive (_tmp8_);
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp10_ = _tmp9_;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp11_ = g_drive_has_media (_tmp10_);
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp3_ = _tmp11_;
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_g_object_unref0 (_tmp10_);
#line 653 "DiskManager.c"
	} else {
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp3_ = FALSE;
#line 657 "DiskManager.c"
	}
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	if (_tmp3_) {
#line 661 "DiskManager.c"
		GFile* root = NULL;
		GVolume* _tmp12_ = NULL;
		GMount* _tmp13_ = NULL;
		GMount* _tmp14_ = NULL;
		GFile* _tmp15_ = NULL;
		GFile* _tmp16_ = NULL;
		GFile* _tmp17_ = NULL;
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp12_ = volume;
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp13_ = g_volume_get_mount (_tmp12_);
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp14_ = _tmp13_;
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp15_ = g_mount_get_default_location (_tmp14_);
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp16_ = _tmp15_;
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_g_object_unref0 (_tmp14_);
#line 105 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		root = _tmp16_;
#line 106 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_tmp17_ = root;
#line 106 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		if (_tmp17_ != NULL) {
#line 687 "DiskManager.c"
			GFile* _tmp18_ = NULL;
			gchar* _tmp19_ = NULL;
			gchar* _tmp20_ = NULL;
			GFile* video = NULL;
			GFile* _tmp21_ = NULL;
			GFile* _tmp22_ = NULL;
			GFile* bdmv = NULL;
			GFile* _tmp23_ = NULL;
			GFile* _tmp24_ = NULL;
			gboolean _tmp25_ = FALSE;
			GFile* _tmp26_ = NULL;
			gboolean _tmp27_ = FALSE;
#line 107 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp18_ = root;
#line 107 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp19_ = g_file_get_uri (_tmp18_);
#line 107 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp20_ = _tmp19_;
#line 107 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			g_debug ("DiskManager.vala:107: Activation root: %s", _tmp20_);
#line 107 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_g_free0 (_tmp20_);
#line 108 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp21_ = root;
#line 108 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp22_ = g_file_get_child (_tmp21_, "VIDEO_TS");
#line 108 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			video = _tmp22_;
#line 109 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp23_ = root;
#line 109 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp24_ = g_file_get_child (_tmp23_, "BDMV");
#line 109 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			bdmv = _tmp24_;
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp26_ = video;
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_tmp27_ = g_file_query_exists (_tmp26_, NULL);
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			if (_tmp27_) {
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp25_ = TRUE;
#line 730 "DiskManager.c"
			} else {
				GFile* _tmp28_ = NULL;
				gboolean _tmp29_ = FALSE;
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp28_ = bdmv;
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp29_ = g_file_query_exists (_tmp28_, NULL);
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_tmp25_ = _tmp29_;
#line 740 "DiskManager.c"
			}
#line 110 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			if (_tmp25_) {
#line 111 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				result = TRUE;
#line 111 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_g_object_unref0 (bdmv);
#line 111 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_g_object_unref0 (video);
#line 111 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				_g_object_unref0 (root);
#line 111 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
				return result;
#line 754 "DiskManager.c"
			}
#line 106 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_g_object_unref0 (bdmv);
#line 106 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
			_g_object_unref0 (video);
#line 760 "DiskManager.c"
		}
#line 104 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
		_g_object_unref0 (root);
#line 764 "DiskManager.c"
	}
#line 115 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	result = FALSE;
#line 115 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	return result;
#line 770 "DiskManager.c"
}


static void audience_disk_manager_class_init (AudienceDiskManagerClass * klass) {
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	audience_disk_manager_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_type_class_add_private (klass, sizeof (AudienceDiskManagerPrivate));
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	G_OBJECT_CLASS (klass)->finalize = audience_disk_manager_finalize;
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_new ("volume_found", AUDIENCE_TYPE_DISK_MANAGER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, g_volume_get_type ());
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	g_signal_new ("volume_removed", AUDIENCE_TYPE_DISK_MANAGER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__OBJECT, G_TYPE_NONE, 1, g_volume_get_type ());
#line 785 "DiskManager.c"
}


static void audience_disk_manager_instance_init (AudienceDiskManager * self) {
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self->priv = AUDIENCE_DISK_MANAGER_GET_PRIVATE (self);
#line 792 "DiskManager.c"
}


static void audience_disk_manager_finalize (GObject* obj) {
	AudienceDiskManager * self;
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, AUDIENCE_TYPE_DISK_MANAGER, AudienceDiskManager);
#line 34 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	_g_object_unref0 (self->priv->monitor);
#line 35 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	__g_list_free__g_object_unref0_0 (self->priv->volumes);
#line 21 "/home/stefano/Package/pantheon/audience-bzr/src/audience/src/DiskManager.vala"
	G_OBJECT_CLASS (audience_disk_manager_parent_class)->finalize (obj);
#line 806 "DiskManager.c"
}


GType audience_disk_manager_get_type (void) {
	static volatile gsize audience_disk_manager_type_id__volatile = 0;
	if (g_once_init_enter (&audience_disk_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AudienceDiskManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) audience_disk_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AudienceDiskManager), 0, (GInstanceInitFunc) audience_disk_manager_instance_init, NULL };
		GType audience_disk_manager_type_id;
		audience_disk_manager_type_id = g_type_register_static (G_TYPE_OBJECT, "AudienceDiskManager", &g_define_type_info, 0);
		g_once_init_leave (&audience_disk_manager_type_id__volatile, audience_disk_manager_type_id);
	}
	return audience_disk_manager_type_id__volatile;
}


