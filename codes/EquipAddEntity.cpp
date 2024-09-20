void __fastcall EquipAddEntity___ctor(EquipAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AFF0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EquipAddEntity__CreatePK(int32_t id, int32_t equipId, const MethodInfo *method)
{
  if ( (byte_4A5AFEE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AFEE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           equipId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_4A5AFEF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AFEF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, this->fields.commonReleaseId, 0LL, 0, v5);
}