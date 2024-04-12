void __fastcall WarBoardPartySkillEntity___ctor(WarBoardPartySkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEAB3 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEAB3 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardPartySkillEntity__CreatePK(
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_42AEAB1 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AEAB1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           target,
           num,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardPartySkillEntity__CreatePrimaryKey(
        WarBoardPartySkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardPartySkillEntity__CreatePK(this->fields.id, this->fields.target, this->fields.num, v2);
}


SkillEntity_o *__fastcall WarBoardPartySkillEntity__GetSkillEntity(
        WarBoardPartySkillEntity_o *this,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_42AEAB2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_42AEAB2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v4);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            Master_WarQuestSelectionMaster,
                            this->fields.skillId,
                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


bool __fastcall WarBoardPartySkillEntity__IsMatch(
        WarBoardPartySkillEntity_o *this,
        int32_t checkId,
        int32_t checkTarget,
        const MethodInfo *method)
{
  return this->fields.id == checkId && (this->fields.target == checkTarget || this->fields.target == 0);
}