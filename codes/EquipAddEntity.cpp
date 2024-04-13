void __fastcall EquipAddEntity___ctor(EquipAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED01A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42ED01A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipAddEntity__CreatePK(int32_t id, int32_t equipId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED018 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, equipId, (_DWORD)method, v3);
    byte_42ED018 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           equipId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EquipAddEntity__CreatePrimaryKey(EquipAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EquipAddEntity__CreatePK(this->fields.id, this->fields.equipId, v2);
}


int32_t __fastcall EquipAddEntity__GetImageId(EquipAddEntity_o *this, int32_t genderType, const MethodInfo *method)
{
  if ( genderType == 2 )
    return this->fields.femaleImageId;
  if ( genderType == 1 )
    return this->fields.maleImageId;
  return 0;
}


bool __fastcall EquipAddEntity__IsOpen(EquipAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42ED019 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42ED019 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, this->fields.commonReleaseId, 0LL, 0, 0LL);
}