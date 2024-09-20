void __fastcall EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B003 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
    byte_4A5B003 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *__fastcall EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B001 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
    byte_4A5B001 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipSkillMaster__TryGetEntity(
        EquipSkillMaster_o *this,
        EquipSkillEntity_o **entity,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B002 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
    byte_4A5B002 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}