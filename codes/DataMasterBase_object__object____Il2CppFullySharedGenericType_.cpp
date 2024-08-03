void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_30D4350 *method)
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


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_30D4680 *method)
{
  ;
}


Il2CppObject *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_30D4390 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v6; // x9
  __int64 v7; // x8
  __int16 v8; // w10
  __int64 v9; // x0
  char *v10; // x22
  int v11; // w0
  __int64 *v12; // x3
  __int64 v13; // x0
  __int64 v16[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v16[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v16[0] = (__int64)key.klass;
  v6 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_WORD *)(v7 + 309);
  if ( (v8 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v9 = sub_1BB5FA4(*(_QWORD *)(v6 + 8));
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_WORD *)(v7 + 309);
  }
  v10 = (char *)&v16[-1] - (((unsigned int)(*(_DWORD *)(v9 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v8 & 1) != 0 )
  {
    v11 = v7;
  }
  else
  {
    v11 = sub_1BB5FA4(v7);
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 8);
  }
  if ( *(int *)(v7 + 40) >= 0 )
    v12 = v16;
  else
    v12 = (__int64 *)klass;
  v13 = sub_1B64B30(v11, *(_QWORD *)(v6 + 16), (int)v10, v12);
  if ( !this )
    sub_1B64324(v13);
  return DataMasterBase__getEntityFromKey_object_(
           (DataMasterBase_o *)this,
           (System_String_o *)v16[1],
           *(const MethodInfo_2E39B64 **)(*(_QWORD *)(monitor[4] + 192LL) + 24LL));
}


Il2CppObject *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_30D45D4 *method)
{
  if ( !this )
    sub_1B64324(0LL);
  return DataMasterBase__GetSingleEntity_object_(
           (DataMasterBase_o *)this,
           (const MethodInfo_2E39724 *)method->klass->rgctx_data->_8_DataMasterBase_TryGetSingleEntity_TEntity_);
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_30D44AC *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  __int64 v8; // x9
  __int64 v9; // x8
  __int16 v10; // w10
  __int64 v11; // x0
  char *v12; // x23
  int v13; // w0
  __int64 *v14; // x3
  __int64 v15; // x0
  __int64 v18[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v18[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v18[0] = (__int64)key.klass;
  v8 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_WORD *)(v9 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 8);
  }
  else
  {
    v11 = sub_1BB5FA4(*(_QWORD *)(v8 + 8));
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 8);
    v10 = *(_WORD *)(v9 + 309);
  }
  v12 = (char *)&v18[-1] - (((unsigned int)(*(_DWORD *)(v11 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v10 & 1) != 0 )
  {
    v13 = v9;
  }
  else
  {
    v13 = sub_1BB5FA4(v9);
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 8);
  }
  if ( *(int *)(v9 + 40) >= 0 )
    v14 = v18;
  else
    v14 = (__int64 *)klass;
  v15 = sub_1B64B30(v13, *(_QWORD *)(v8 + 16), (int)v12, v14);
  if ( !this )
    sub_1B64324(v15);
  return DataMasterBase__TryGetEntityFromId_object_(
           (DataMasterBase_o *)this,
           entity,
           (System_String_o *)v18[1],
           *(const MethodInfo_2E3988C **)(*(_QWORD *)(monitor[4] + 192LL) + 48LL));
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_30D45F4 *method)
{
  if ( !this )
    sub_1B64324(0LL);
  return DataMasterBase__TryGetSingleEntity_object_(
           (DataMasterBase_o *)this,
           entity,
           (const MethodInfo_2E39A14 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


DataEntityBase_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_30D4614 *method)
{
  if ( (byte_4A021A9 & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, obj);
    byte_4A021A9 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2E9EEC0 *)method->klass->rgctx_data->_10_TEntity__);
}