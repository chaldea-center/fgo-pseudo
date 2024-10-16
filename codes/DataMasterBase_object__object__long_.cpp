void __fastcall DataMasterBase_object__object__long____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_3163EFC *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  if ( !this )
    sub_1BAB678(v5, v6);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_2EC59E0 *)method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_);
}


void __fastcall DataMasterBase_object__object__long___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_31640A4 *method)
{
  ;
}


Il2CppObject *__fastcall DataMasterBase_object__object__long___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int64_t key,
        const MethodInfo_3163F3C *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = key;
  v5 = System_Int64__ToString((int64_t)&v8, method->klass->rgctx_data->_3_DataMasterBase_getEntityFromKey_TEntity_);
  if ( !this )
    sub_1BAB678(v5, v6);
  return DataMasterBase__getEntityFromKey_object_(
           (DataMasterBase_o *)this,
           v5,
           (const MethodInfo_2EC5D40 *)method->klass->rgctx_data->_4_TEntity);
}


Il2CppObject *__fastcall DataMasterBase_object__object__long___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3163FF8 *method)
{
  if ( !this )
    sub_1BAB678(0LL, method);
  return DataMasterBase__GetSingleEntity_object_(
           (DataMasterBase_o *)this,
           (const MethodInfo_2EC5900 *)method->klass->rgctx_data->_8_DataMasterBase_TryGetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__long___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        int64_t key,
        const MethodInfo_3163F90 *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = key;
  v7 = System_Int64__ToString((int64_t)&v10, method->klass->rgctx_data->_3_DataMasterBase_getEntityFromKey_TEntity_);
  if ( !this )
    sub_1BAB678(v7, v8);
  return DataMasterBase__TryGetEntityFromId_object_(
           (DataMasterBase_o *)this,
           entity,
           v7,
           (const MethodInfo_2EC5A68 *)method->klass->rgctx_data->_7_DataMasterBase_GetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object__long___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_3164018 *method)
{
  if ( !this )
    sub_1BAB678(0LL, entity);
  return DataMasterBase__TryGetSingleEntity_object_(
           (DataMasterBase_o *)this,
           entity,
           (const MethodInfo_2EC5BF0 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


DataEntityBase_array *__fastcall DataMasterBase_object__object__long___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3164038 *method)
{
  if ( (byte_4ABBA74 & 1) == 0 )
  {
    sub_1BAB41C(&JsonManager_TypeInfo, obj);
    byte_4ABBA74 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2F2AABC *)method->klass->rgctx_data->_10_TEntity__);
}