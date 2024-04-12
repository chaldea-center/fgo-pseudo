void __fastcall EquipAddEntity___ctor(EquipAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B4691 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B4691 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipAddEntity__CreatePK(int32_t id, int32_t equipId, const MethodInfo *method)
{
  if ( (byte_42B468F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B468F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           equipId,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_42B4690 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B4690 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
  return CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, this->fields.commonReleaseId, 0LL, 0, 0LL);
}