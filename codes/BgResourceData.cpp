// local variable allocation has failed, the output may be wrong!
void __fastcall BgResourceData___ctor(BgResourceData_o *this, int32_t bgId, int32_t bgType, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1

  if ( (byte_4B186FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleBgMaster___, *(_QWORD *)&bgId, *(_QWORD *)&bgType);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B186FD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v11);
  this->fields = (BgResourceData_Fields)BattleBgMaster__GetBgResourceIdType(
                                          (BattleBgMaster_o *)Master_object,
                                          bgId,
                                          bgType,
                                          0LL);
}


System_String_o *__fastcall BgResourceData__get_AssetPath(BgResourceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Id_k__BackingField; // w19

  if ( (byte_4B186FC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B186FC = 1;
  }
  Id_k__BackingField = this->fields._Id_k__BackingField;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
  return BattleDataDefine__MakeBgPath(Id_k__BackingField, method);
}


int32_t __fastcall BgResourceData__get_Id(BgResourceData_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


int32_t __fastcall BgResourceData__get_Type(BgResourceData_o *this, const MethodInfo *method)
{
  return this->fields._Type_k__BackingField;
}


void __fastcall BgResourceData__set_Id(BgResourceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void __fastcall BgResourceData__set_Type(BgResourceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Type_k__BackingField = value;
}