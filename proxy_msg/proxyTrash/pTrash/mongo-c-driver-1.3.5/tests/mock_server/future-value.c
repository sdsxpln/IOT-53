#include "future-value.h"

/**************************************************
 *
 * Generated by build/generate-future-functions.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/

future_value_t *
future_value_new ()
{
   return (future_value_t *) bson_malloc0 (sizeof (future_value_t));
}

void
future_value_set_void (future_value_t *future_value)
{
    future_value->type = future_value_void_type;
}

void
future_value_get_void (future_value_t *future_value)
{
    assert (future_value->type == future_value_void_type);
}


void
future_value_set_bool(future_value_t *future_value, bool value)
{
  future_value->type = future_value_bool_type;
  future_value->bool_value = value;
}

bool
future_value_get_bool (future_value_t *future_value)
{
  assert (future_value->type == future_value_bool_type);
  return future_value->bool_value;
}

void
future_value_set_char_ptr(future_value_t *future_value, char_ptr value)
{
  future_value->type = future_value_char_ptr_type;
  future_value->char_ptr_value = value;
}

char_ptr
future_value_get_char_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_char_ptr_type);
  return future_value->char_ptr_value;
}

void
future_value_set_char_ptr_ptr(future_value_t *future_value, char_ptr_ptr value)
{
  future_value->type = future_value_char_ptr_ptr_type;
  future_value->char_ptr_ptr_value = value;
}

char_ptr_ptr
future_value_get_char_ptr_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_char_ptr_ptr_type);
  return future_value->char_ptr_ptr_value;
}

void
future_value_set_int(future_value_t *future_value, int value)
{
  future_value->type = future_value_int_type;
  future_value->int_value = value;
}

int
future_value_get_int (future_value_t *future_value)
{
  assert (future_value->type == future_value_int_type);
  return future_value->int_value;
}

void
future_value_set_int64_t(future_value_t *future_value, int64_t value)
{
  future_value->type = future_value_int64_t_type;
  future_value->int64_t_value = value;
}

int64_t
future_value_get_int64_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_int64_t_type);
  return future_value->int64_t_value;
}

void
future_value_set_size_t(future_value_t *future_value, size_t value)
{
  future_value->type = future_value_size_t_type;
  future_value->size_t_value = value;
}

size_t
future_value_get_size_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_size_t_type);
  return future_value->size_t_value;
}

void
future_value_set_ssize_t(future_value_t *future_value, ssize_t value)
{
  future_value->type = future_value_ssize_t_type;
  future_value->ssize_t_value = value;
}

ssize_t
future_value_get_ssize_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_ssize_t_type);
  return future_value->ssize_t_value;
}

void
future_value_set_uint32_t(future_value_t *future_value, uint32_t value)
{
  future_value->type = future_value_uint32_t_type;
  future_value->uint32_t_value = value;
}

uint32_t
future_value_get_uint32_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_uint32_t_type);
  return future_value->uint32_t_value;
}

void
future_value_set_const_char_ptr(future_value_t *future_value, const_char_ptr value)
{
  future_value->type = future_value_const_char_ptr_type;
  future_value->const_char_ptr_value = value;
}

const_char_ptr
future_value_get_const_char_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_char_ptr_type);
  return future_value->const_char_ptr_value;
}

void
future_value_set_bson_error_ptr(future_value_t *future_value, bson_error_ptr value)
{
  future_value->type = future_value_bson_error_ptr_type;
  future_value->bson_error_ptr_value = value;
}

bson_error_ptr
future_value_get_bson_error_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_bson_error_ptr_type);
  return future_value->bson_error_ptr_value;
}

void
future_value_set_bson_ptr(future_value_t *future_value, bson_ptr value)
{
  future_value->type = future_value_bson_ptr_type;
  future_value->bson_ptr_value = value;
}

bson_ptr
future_value_get_bson_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_bson_ptr_type);
  return future_value->bson_ptr_value;
}

void
future_value_set_const_bson_ptr(future_value_t *future_value, const_bson_ptr value)
{
  future_value->type = future_value_const_bson_ptr_type;
  future_value->const_bson_ptr_value = value;
}

const_bson_ptr
future_value_get_const_bson_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_bson_ptr_type);
  return future_value->const_bson_ptr_value;
}

void
future_value_set_const_bson_ptr_ptr(future_value_t *future_value, const_bson_ptr_ptr value)
{
  future_value->type = future_value_const_bson_ptr_ptr_type;
  future_value->const_bson_ptr_ptr_value = value;
}

const_bson_ptr_ptr
future_value_get_const_bson_ptr_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_bson_ptr_ptr_type);
  return future_value->const_bson_ptr_ptr_value;
}

void
future_value_set_mongoc_bulk_operation_ptr(future_value_t *future_value, mongoc_bulk_operation_ptr value)
{
  future_value->type = future_value_mongoc_bulk_operation_ptr_type;
  future_value->mongoc_bulk_operation_ptr_value = value;
}

mongoc_bulk_operation_ptr
future_value_get_mongoc_bulk_operation_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_bulk_operation_ptr_type);
  return future_value->mongoc_bulk_operation_ptr_value;
}

void
future_value_set_mongoc_client_ptr(future_value_t *future_value, mongoc_client_ptr value)
{
  future_value->type = future_value_mongoc_client_ptr_type;
  future_value->mongoc_client_ptr_value = value;
}

mongoc_client_ptr
future_value_get_mongoc_client_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_client_ptr_type);
  return future_value->mongoc_client_ptr_value;
}

void
future_value_set_mongoc_collection_ptr(future_value_t *future_value, mongoc_collection_ptr value)
{
  future_value->type = future_value_mongoc_collection_ptr_type;
  future_value->mongoc_collection_ptr_value = value;
}

mongoc_collection_ptr
future_value_get_mongoc_collection_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_collection_ptr_type);
  return future_value->mongoc_collection_ptr_value;
}

void
future_value_set_mongoc_cursor_ptr(future_value_t *future_value, mongoc_cursor_ptr value)
{
  future_value->type = future_value_mongoc_cursor_ptr_type;
  future_value->mongoc_cursor_ptr_value = value;
}

mongoc_cursor_ptr
future_value_get_mongoc_cursor_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_cursor_ptr_type);
  return future_value->mongoc_cursor_ptr_value;
}

void
future_value_set_mongoc_database_ptr(future_value_t *future_value, mongoc_database_ptr value)
{
  future_value->type = future_value_mongoc_database_ptr_type;
  future_value->mongoc_database_ptr_value = value;
}

mongoc_database_ptr
future_value_get_mongoc_database_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_database_ptr_type);
  return future_value->mongoc_database_ptr_value;
}

void
future_value_set_mongoc_gridfs_file_ptr(future_value_t *future_value, mongoc_gridfs_file_ptr value)
{
  future_value->type = future_value_mongoc_gridfs_file_ptr_type;
  future_value->mongoc_gridfs_file_ptr_value = value;
}

mongoc_gridfs_file_ptr
future_value_get_mongoc_gridfs_file_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_gridfs_file_ptr_type);
  return future_value->mongoc_gridfs_file_ptr_value;
}

void
future_value_set_mongoc_gridfs_ptr(future_value_t *future_value, mongoc_gridfs_ptr value)
{
  future_value->type = future_value_mongoc_gridfs_ptr_type;
  future_value->mongoc_gridfs_ptr_value = value;
}

mongoc_gridfs_ptr
future_value_get_mongoc_gridfs_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_gridfs_ptr_type);
  return future_value->mongoc_gridfs_ptr_value;
}

void
future_value_set_mongoc_insert_flags_t(future_value_t *future_value, mongoc_insert_flags_t value)
{
  future_value->type = future_value_mongoc_insert_flags_t_type;
  future_value->mongoc_insert_flags_t_value = value;
}

mongoc_insert_flags_t
future_value_get_mongoc_insert_flags_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_insert_flags_t_type);
  return future_value->mongoc_insert_flags_t_value;
}

void
future_value_set_mongoc_iovec_ptr(future_value_t *future_value, mongoc_iovec_ptr value)
{
  future_value->type = future_value_mongoc_iovec_ptr_type;
  future_value->mongoc_iovec_ptr_value = value;
}

mongoc_iovec_ptr
future_value_get_mongoc_iovec_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_iovec_ptr_type);
  return future_value->mongoc_iovec_ptr_value;
}

void
future_value_set_mongoc_query_flags_t(future_value_t *future_value, mongoc_query_flags_t value)
{
  future_value->type = future_value_mongoc_query_flags_t_type;
  future_value->mongoc_query_flags_t_value = value;
}

mongoc_query_flags_t
future_value_get_mongoc_query_flags_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_query_flags_t_type);
  return future_value->mongoc_query_flags_t_value;
}

void
future_value_set_mongoc_server_description_ptr(future_value_t *future_value, mongoc_server_description_ptr value)
{
  future_value->type = future_value_mongoc_server_description_ptr_type;
  future_value->mongoc_server_description_ptr_value = value;
}

mongoc_server_description_ptr
future_value_get_mongoc_server_description_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_server_description_ptr_type);
  return future_value->mongoc_server_description_ptr_value;
}

void
future_value_set_mongoc_ss_optype_t(future_value_t *future_value, mongoc_ss_optype_t value)
{
  future_value->type = future_value_mongoc_ss_optype_t_type;
  future_value->mongoc_ss_optype_t_value = value;
}

mongoc_ss_optype_t
future_value_get_mongoc_ss_optype_t (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_ss_optype_t_type);
  return future_value->mongoc_ss_optype_t_value;
}

void
future_value_set_mongoc_topology_ptr(future_value_t *future_value, mongoc_topology_ptr value)
{
  future_value->type = future_value_mongoc_topology_ptr_type;
  future_value->mongoc_topology_ptr_value = value;
}

mongoc_topology_ptr
future_value_get_mongoc_topology_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_mongoc_topology_ptr_type);
  return future_value->mongoc_topology_ptr_value;
}

void
future_value_set_const_mongoc_find_and_modify_opts_ptr(future_value_t *future_value, const_mongoc_find_and_modify_opts_ptr value)
{
  future_value->type = future_value_const_mongoc_find_and_modify_opts_ptr_type;
  future_value->const_mongoc_find_and_modify_opts_ptr_value = value;
}

const_mongoc_find_and_modify_opts_ptr
future_value_get_const_mongoc_find_and_modify_opts_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_mongoc_find_and_modify_opts_ptr_type);
  return future_value->const_mongoc_find_and_modify_opts_ptr_value;
}

void
future_value_set_const_mongoc_read_prefs_ptr(future_value_t *future_value, const_mongoc_read_prefs_ptr value)
{
  future_value->type = future_value_const_mongoc_read_prefs_ptr_type;
  future_value->const_mongoc_read_prefs_ptr_value = value;
}

const_mongoc_read_prefs_ptr
future_value_get_const_mongoc_read_prefs_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_mongoc_read_prefs_ptr_type);
  return future_value->const_mongoc_read_prefs_ptr_value;
}

void
future_value_set_const_mongoc_write_concern_ptr(future_value_t *future_value, const_mongoc_write_concern_ptr value)
{
  future_value->type = future_value_const_mongoc_write_concern_ptr_type;
  future_value->const_mongoc_write_concern_ptr_value = value;
}

const_mongoc_write_concern_ptr
future_value_get_const_mongoc_write_concern_ptr (future_value_t *future_value)
{
  assert (future_value->type == future_value_const_mongoc_write_concern_ptr_type);
  return future_value->const_mongoc_write_concern_ptr_value;
}
