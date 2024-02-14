Il2CppObject *__fastcall DataMasterBase_object__object__int___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_2669C98 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  return (Il2CppObject *)((__int64 (*)(void))method->klass->rgctx_data->_4_DataMasterBase_GetSingleEntity_TEntity_->methodPointer)();
}


bool __fastcall DataMasterBase_object__object__int___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_2669CBC *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject **))method->klass->rgctx_data->_5_DataMasterBase_TryGetSingleEntity_TEntity_->methodPointer)(
           this,
           entity);
}