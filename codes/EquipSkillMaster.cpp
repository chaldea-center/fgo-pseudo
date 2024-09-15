void __fastcall EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DDE5 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__, method);
    byte_4A2DDE5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_30FFA98 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *__fastcall EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A2DDE3 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__, *(_QWORD *)&equipId);
    byte_4A2DDE3 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30FFAD8 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
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

  if ( (byte_4A2DDE4 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__, entity);
    byte_4A2DDE4 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30FFB28 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}