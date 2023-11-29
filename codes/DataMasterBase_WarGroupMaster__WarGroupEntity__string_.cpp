WarGroupEntity_o *__fastcall DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
        DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *this,
        System_String_o *key,
        const MethodInfo_266F7D8 *method)
{
  __int64 v5; // x0

  if ( !key
    || (v5 = ((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))key->klass->vtable._3_ToString.method)(
               key,
               key->klass->vtable._4_CompareTo.methodPtr),
        !this) )
  {
    sub_B170D4();
  }
  return (WarGroupEntity_o *)((__int64 (__fastcall *)(DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *, __int64))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                               this,
                               v5);
}