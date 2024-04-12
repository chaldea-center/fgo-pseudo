WarMessageEntity_o *__fastcall DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
        DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *this,
        System_String_o *key,
        const MethodInfo_23E2728 *method)
{
  DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *v3; // x19

  if ( !key
    || (v3 = this,
        this = (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))key->klass->vtable._3_ToString.method)(
                                                                                 key,
                                                                                 key->klass->vtable._4_CompareTo.methodPtr),
        !v3) )
  {
    sub_B52A5C(this, key);
  }
  return (WarMessageEntity_o *)((__int64 (__fastcall *)(DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *, DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                                 v3,
                                 this);
}