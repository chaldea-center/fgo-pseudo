// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_WarMaster__WarEntity__int____ctor(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        int32_t kind,
        const MethodInfo_266F2EC *method)
{
  if ( (byte_41039C7 & 1) == 0 )
  {
    sub_B16FFC(&DataMasterBase_TypeInfo, *(_QWORD *)&kind);
    byte_41039C7 = 1;
  }
  if ( !this )
    sub_B170D4();
  if ( (BYTE3(DataMasterBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataMasterBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataMasterBase_TypeInfo);
  }
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  ((void (__fastcall *)(_QWORD, struct System_String_o *))method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_->methodPointer)(
    (unsigned int)this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField);
}


void __fastcall DataMasterBase_WarMaster__WarEntity__int___ForForceDerived(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        const MethodInfo_266F510 *method)
{
  ;
}


WarEntity_o *__fastcall DataMasterBase_WarMaster__WarEntity__int___GetEntity(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        int32_t key,
        const MethodInfo_266F388 *method)
{
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = key;
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  if ( !this )
    sub_B170D4();
  return (WarEntity_o *)((__int64 (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, System_String_o *))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                          this,
                          v5);
}


bool __fastcall DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        WarEntity_o **entity,
        int32_t key,
        const MethodInfo_266F3E4 *method)
{
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = key;
  v7 = System_Int32__ToString((int32_t)&v9, 0LL);
  if ( !this )
    sub_B170D4();
  return ((__int64 (__fastcall *)(DataMasterBase_WarMaster__WarEntity__int__o *, WarEntity_o **, System_String_o *))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           this,
           entity,
           v7) & 1;
}


DataEntityBase_array *__fastcall DataMasterBase_WarMaster__WarEntity__int___getList(
        DataMasterBase_WarMaster__WarEntity__int__o *this,
        Il2CppObject *obj,
        const MethodInfo_266F494 *method)
{
  if ( (byte_41039C8 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, obj);
    byte_41039C8 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}