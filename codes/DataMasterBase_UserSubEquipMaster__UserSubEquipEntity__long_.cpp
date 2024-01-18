// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        int32_t kind,
        const MethodInfo_24E425C *method)
{
  DataMasterBase_o *v5; // x20

  v5 = (DataMasterBase_o *)this;
  if ( (byte_41904D7 & 1) == 0 )
  {
    this = (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)sub_B2C35C(
                                                                               &DataMasterBase_TypeInfo,
                                                                               *(_QWORD *)&kind);
    byte_41904D7 = 1;
  }
  if ( !v5 )
    sub_B2C434(this, *(_QWORD *)&kind);
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
        const MethodInfo_24E4480 *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___getList(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        Il2CppObject *obj,
        const MethodInfo_24E4404 *method)
{
  if ( (byte_41904D8 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, obj);
    byte_41904D8 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}