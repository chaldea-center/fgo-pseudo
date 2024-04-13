// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        int32_t kind,
        const MethodInfo_23FAF9C *method)
{
  __int64 v3; // x3
  DataMasterBase_o *v6; // x20

  v6 = (DataMasterBase_o *)this;
  if ( (byte_42F09CF & 1) == 0 )
  {
    this = (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)sub_B5D5C4(
                                                                               &DataMasterBase_TypeInfo,
                                                                               kind,
                                                                               (_DWORD)method,
                                                                               v3);
    byte_42F09CF = 1;
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


void __fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___ForForceDerived(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        const MethodInfo_23FB1C0 *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long___getList(
        DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *this,
        Il2CppObject *obj,
        const MethodInfo_23FB144 *method)
{
  __int64 v3; // x3

  if ( (byte_42F09D0 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42F09D0 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)((__int64 (__fastcall *)(Il2CppObject *))method->klass->rgctx_data->_6_JsonManager_DeserializeArray_TEntity_->methodPointer)(obj);
}