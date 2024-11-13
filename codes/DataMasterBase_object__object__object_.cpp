void __fastcall DataMasterBase_object__object__object____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_31B3158 *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  if ( !this )
    sub_1BCAA3C(v5, v6);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_2F130A8 *)method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_);
}


void __fastcall DataMasterBase_object__object__object___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B32E8 *method)
{
  ;
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *key,
        const MethodInfo_31B3198 *method)
{
  DataMasterBase_o *v3; // x19

  if ( !key
    || (v3 = (DataMasterBase_o *)this,
        this = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                                                               key,
                                                               key->klass->vtable[4].methodPtr),
        !v3) )
  {
    sub_1BCAA3C(this, key);
  }
  return DataMasterBase__getEntityFromKey_object_(
           v3,
           (System_String_o *)this,
           (const MethodInfo_2F13408 *)method->klass->rgctx_data->_4_TEntity);
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31B323C *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, method);
  return DataMasterBase__GetSingleEntity_object_(
           (DataMasterBase_o *)this,
           (const MethodInfo_2F12FC8 *)method->klass->rgctx_data->_8_DataMasterBase_TryGetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__object___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Il2CppObject *key,
        const MethodInfo_31B31E8 *method)
{
  DataMasterBase_o *v5; // x20

  if ( !key
    || (v5 = (DataMasterBase_o *)this,
        this = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                                                               key,
                                                               key->klass->vtable[4].methodPtr),
        !v5) )
  {
    sub_1BCAA3C(this, entity);
  }
  return DataMasterBase__TryGetEntityFromId_object_(
           v5,
           entity,
           (System_String_o *)this,
           (const MethodInfo_2F13130 *)method->klass->rgctx_data->_7_DataMasterBase_GetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__object___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_31B325C *method)
{
  if ( !this )
    sub_1BCAA3C(0LL, entity);
  return DataMasterBase__TryGetSingleEntity_object_(
           (DataMasterBase_o *)this,
           entity,
           (const MethodInfo_2F132B8 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


DataEntityBase_array *__fastcall DataMasterBase_object__object__object___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_31B327C *method)
{
  if ( (byte_4B1BF57 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, obj, method);
    byte_4B1BF57 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, obj);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2F79784 *)method->klass->rgctx_data->_10_TEntity__);
}