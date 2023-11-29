// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        int32_t kind,
        const MethodInfo_266F73C *method)
{
  if ( (byte_41039CB & 1) == 0 )
  {
    sub_B16FFC(&DataMasterBase_TypeInfo, *(_QWORD *)&kind);
    byte_41039CB = 1;
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


void __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ForForceDerived(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        const MethodInfo_266F958 *method)
{
  ;
}


bool __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        WarQuestSelectionEntity_o **entity,
        System_String_o *key,
        const MethodInfo_266F830 *method)
{
  __int64 v7; // x0

  if ( !key
    || (v7 = ((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))key->klass->vtable._3_ToString.method)(
               key,
               key->klass->vtable._4_CompareTo.methodPtr),
        !this) )
  {
    sub_B170D4();
  }
  return ((__int64 (__fastcall *)(DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *, WarQuestSelectionEntity_o **, __int64))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           this,
           entity,
           v7);
}


DataEntityBase_array *__fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___getList(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        Il2CppObject *obj,
        const MethodInfo_266F8DC *method)
{
  if ( (byte_41039CC & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, obj);
    byte_41039CC = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}