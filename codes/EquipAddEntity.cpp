void __fastcall EquipAddEntity___ctor(EquipAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418BDB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418BDB2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EquipAddEntity__CreatePK(int32_t id, int32_t equipId, const MethodInfo *method)
{
  if ( (byte_418BDB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&equipId);
    byte_418BDB0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           equipId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x1
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_418BDB1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_418BDB1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
  return CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, this->fields.commonReleaseId, 0LL, 0, 0LL);
}