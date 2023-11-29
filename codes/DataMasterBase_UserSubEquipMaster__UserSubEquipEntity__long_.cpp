// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        int32_t kind,
        const MethodInfo_266F514 *method)
{
  if ( (byte_41039C9 & 1) == 0 )
  {
    sub_B16FFC(&DataMasterBase_TypeInfo, *(_QWORD *)&kind);
    byte_41039C9 = 1;
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


void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ForForceDerived(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        const MethodInfo_266F738 *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___getList(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        Il2CppObject *obj,
        const MethodInfo_266F6BC *method)
{
  if ( (byte_41039CA & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, obj);
    byte_41039CA = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}