void __fastcall DataMasterBase_object__object__object____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_30D41BC *method)
{
  __int64 v5; // x0

  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  if ( !this )
    sub_1B64324(v5);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_2E39804 *)method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_);
}


void __fastcall DataMasterBase_object__object__object___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_30D434C *method)
{
  ;
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *key,
        const MethodInfo_30D41FC *method)
{
  DataMasterBase_o *v3; // x19

  if ( !key
    || (v3 = (DataMasterBase_o *)this,
        this = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                                                               key,
                                                               key->klass->vtable[4].methodPtr),
        !v3) )
  {
    sub_1B64324(this);
  }
  return DataMasterBase__getEntityFromKey_object_(
           v3,
           (System_String_o *)this,
           (const MethodInfo_2E39B64 *)method->klass->rgctx_data->_4_TEntity);
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_30D42A0 *method)
{
  if ( !this )
    sub_1B64324(0LL);
  return DataMasterBase__GetSingleEntity_object_(
           (DataMasterBase_o *)this,
           (const MethodInfo_2E39724 *)method->klass->rgctx_data->_8_DataMasterBase_TryGetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__object___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Il2CppObject *key,
        const MethodInfo_30D424C *method)
{
  DataMasterBase_o *v5; // x20

  if ( !key
    || (v5 = (DataMasterBase_o *)this,
        this = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                                                               key,
                                                               key->klass->vtable[4].methodPtr),
        !v5) )
  {
    sub_1B64324(this);
  }
  return DataMasterBase__TryGetEntityFromId_object_(
           v5,
           entity,
           (System_String_o *)this,
           (const MethodInfo_2E3988C *)method->klass->rgctx_data->_7_DataMasterBase_GetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__object___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_30D42C0 *method)
{
  if ( !this )
    sub_1B64324(0LL);
  return DataMasterBase__TryGetSingleEntity_object_(
           (DataMasterBase_o *)this,
           entity,
           (const MethodInfo_2E39A14 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


DataEntityBase_array *__fastcall DataMasterBase_object__object__object___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_30D42E0 *method)
{
  if ( (byte_4A021A8 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, obj);
    byte_4A021A8 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2E9EEC0 *)method->klass->rgctx_data->_10_TEntity__);
}