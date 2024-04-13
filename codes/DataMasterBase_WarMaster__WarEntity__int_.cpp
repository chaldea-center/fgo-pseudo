// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_WarMaster__WarEntity__int____ctor(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        int32_t kind,
        const MethodInfo_23FAD74 *method)
{
  __int64 v3; // x3
  DataMasterBase_o *v6; // x20

  v6 = (DataMasterBase_o *)this;
  if ( (byte_42F09CD & 1) == 0 )
  {
    this = (DataMasterBase_WarMaster__WarEntity__int__o *)sub_B5D5C4(&DataMasterBase_TypeInfo, kind, (_DWORD)method, v3);
    byte_42F09CD = 1;
  }
  if ( !v6 )
    sub_B5D69C(this, *(_QWORD *)&kind);
  if ( (BYTE3(DataMasterBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataMasterBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataMasterBase_TypeInfo);
  }
  DataMasterBase___ctor(v6, kind, 0LL);
  ((void (__fastcall *)(_QWORD, struct System_String_o *))method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_->methodPointer)(
    (unsigned int)v6->fields._MasterKind_k__BackingField,
    v6->fields._MasterName_k__BackingField);
}


void __fastcall DataMasterBase_WarMaster__WarEntity__int___ForForceDerived(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        const MethodInfo_23FAF98 *method)
{
  ;
}


WarEntity_o *__fastcall DataMasterBase_WarMaster__WarEntity__int___GetEntity(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        int32_t key,
        const MethodInfo_23FAE10 *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = key;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  if ( !this )
    sub_B5D69C(v5, v6);
  return (WarEntity_o *)((__int64 (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                          this,
                          v5);
}


bool __fastcall DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        WarEntity_o **entity,
        int32_t key,
        const MethodInfo_23FAE6C *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = key;
  v7 = System_Int32__ToString((int32_t)&v10, 0LL);
  if ( !this )
    sub_B5D69C(v7, v8);
  return ((__int64 (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, WarEntity_o **, System_String_o *))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           this,
           entity,
           v7) & 1;
}


DataEntityBase_array *__fastcall DataMasterBase_WarMaster__WarEntity__int___getList(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        Il2CppObject *obj,
        const MethodInfo_23FAF1C *method)
{
  __int64 v3; // x3

  if ( (byte_42F09CE & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42F09CE = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}