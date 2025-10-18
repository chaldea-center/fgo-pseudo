void BgResourceData___ctor(BgResourceData_o *this, int32_t bgId, int32_t bgType, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0

  if ( (byte_4C45930 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C45930 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  this->fields = (BgResourceData_Fields)BattleBgMaster__GetBgResourceIdType(
                                          (BattleBgMaster_o *)Master_object,
                                          bgId,
                                          bgType,
                                          0);
}


System_String_o *BgResourceData__get_AssetPath(BgResourceData_o *this, const MethodInfo *method)
{
  int32_t Id_k__BackingField; // w19

  if ( (byte_4C4592F & 1) == 0 )
  {
    sub_1C37058(&BattleDataDefine_TypeInfo);
    byte_4C4592F = 1;
  }
  Id_k__BackingField = this->fields._Id_k__BackingField;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath(Id_k__BackingField, method);
}


int32_t BgResourceData__get_Id(BgResourceData_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


int32_t BgResourceData__get_Type(BgResourceData_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void BgResourceData__set_Id(BgResourceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void BgResourceData__set_Type(BgResourceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}