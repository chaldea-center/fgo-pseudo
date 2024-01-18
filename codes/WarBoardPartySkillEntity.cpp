void __fastcall WarBoardPartySkillEntity___ctor(WarBoardPartySkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186585 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186585 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardPartySkillEntity__CreatePK(
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4186583 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4186583 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           target,
           num,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1

  if ( (byte_4186584 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    byte_4186584 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  return (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            Master_WarQuestSelectionMaster,
                            this->fields.skillId,
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


bool __fastcall WarBoardPartySkillEntity__IsMatch(
        WarBoardPartySkillEntity_o *this,
        int32_t checkId,
        int32_t checkTarget,
        const MethodInfo *method)
{
  return this->fields.id == checkId && (this->fields.target == checkTarget || this->fields.target == 0);
}