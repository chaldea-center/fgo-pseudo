void __fastcall UserServantAppendPassiveSkillMaster___ctor(
        UserServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF8B7 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__,
      method);
    byte_49FF8B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *__fastcall UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF8B5 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__,
      userId);
    byte_49FF8B5 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


bool __fastcall UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF8B6 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_49FF8B6 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}