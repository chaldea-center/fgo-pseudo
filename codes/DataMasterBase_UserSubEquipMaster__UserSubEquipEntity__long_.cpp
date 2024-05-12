// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        int32_t kind,
        const MethodInfo_21FBA20 *method)
{
  DataMasterBase_o *v5; // x20

  v5 = (DataMasterBase_o *)this;
  if ( (byte_43911D2 & 1) == 0 )
  {
    this = (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)sub_B775C4(&DataMasterBase_TypeInfo);
    byte_43911D2 = 1;
  }
  if ( !v5 )
    sub_B7769C(this, *(_QWORD *)&kind);
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


void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ForForceDerived(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        const MethodInfo_21FBC44 *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___getList(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        Il2CppObject *obj,
        const MethodInfo_21FBBC8 *method)
{
  if ( (byte_43911D3 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    byte_43911D3 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}