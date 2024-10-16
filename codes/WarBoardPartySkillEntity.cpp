void __fastcall WarBoardPartySkillEntity___ctor(WarBoardPartySkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6D3F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6D3F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardPartySkillEntity__CreatePK(
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4AB6D3D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4AB6D3D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           target,
           num,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_4AB6D3E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_SkillMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    byte_4AB6D3E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !Master_object )
    sub_1BAB678(0LL, v6);
  return (SkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            this->fields.skillId,
                            (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
}


bool __fastcall WarBoardPartySkillEntity__IsMatch(
        WarBoardPartySkillEntity_o *this,
        int32_t checkId,
        int32_t checkTarget,
        const MethodInfo *method)
{
  return this->fields.id == checkId && (this->fields.target == checkTarget || this->fields.target == 0);
}