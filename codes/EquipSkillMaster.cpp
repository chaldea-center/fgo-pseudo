void EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6EA & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
    byte_4D2C6EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    53,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C6E8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
    byte_4D2C6E8 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_345FF78 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EquipSkillMaster__TryGetEntity(
        EquipSkillMaster_o *this,
        EquipSkillEntity_o **entity,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C6E9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
    byte_4D2C6E9 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}