void __fastcall EquipAddEntity___ctor(EquipAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FAB7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438FAB7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipAddEntity__CreatePK(int32_t id, int32_t equipId, const MethodInfo *method)
{
  if ( (byte_438FAB5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438FAB5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           equipId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_438FAB6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438FAB6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v4);
  return CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, this->fields.commonReleaseId, 0LL, 0, 0LL);
}