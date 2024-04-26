// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        int32_t kind,
        const MethodInfo_21C07F4 *method)
{
  DataMasterBase_o *v5; // x20

  v5 = (DataMasterBase_o *)this;
  if ( (byte_4357B56 & 1) == 0 )
  {
    this = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)sub_B70694(&DataMasterBase_TypeInfo);
    byte_4357B56 = 1;
  }
  if ( !v5 )
    sub_B7076C(this, *(_QWORD *)&kind);
  if ( (BYTE3(DataMasterBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataMasterBase_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataMasterBase_TypeInfo);
  }
  DataMasterBase___ctor(v5, kind, 0LL);
  ((void (__fastcall *)(_QWORD, struct System_String_o *))method->klass->rgctx_data->_0_DataMasterBase_RegisterKindAndName_TMaster_->methodPointer)(
    (unsigned int)v5->fields._MasterKind_k__BackingField,
    v5->fields._MasterName_k__BackingField);
}


void __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___ForForceDerived(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        const MethodInfo_21C0A10 *method)
{
  ;
}


bool __fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        WarQuestSelectionEntity_o **entity,
        System_String_o *key,
        const MethodInfo_21C08E8 *method)
{
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *v5; // x20

  if ( !key
    || (v5 = this,
        this = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))key->klass->vtable._3_ToString.method)(
                                                                                               key,
                                                                                               key->klass->vtable._4_CompareTo.methodPtr),
        !v5) )
  {
    sub_B7076C(this, entity);
  }
  return ((__int64 (__fastcall *)(DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *, WarQuestSelectionEntity_o **, DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           v5,
           entity,
           this);
}


DataEntityBase_array *__fastcall DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___getList(
        DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *this,
        Il2CppObject *obj,
        const MethodInfo_21C0994 *method)
{
  if ( (byte_4357B57 & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    byte_4357B57 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}