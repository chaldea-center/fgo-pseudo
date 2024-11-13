void __fastcall UserAccessaryMaster___ctor(UserAccessaryMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16DBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__, method, v2);
    byte_4B16DBE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    40,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserAccessaryEntity_o *__fastcall UserAccessaryMaster__GetEntity(
        UserAccessaryMaster_o *this,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16DBC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&accessaryId);
    byte_4B16DBC = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, *(const MethodInfo **)&accessaryId);
  return (UserAccessaryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
}


bool __fastcall UserAccessaryMaster__TryGetEntity(
        UserAccessaryMaster_o *this,
        UserAccessaryEntity_o **entity,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16DBD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__, entity, userId);
    byte_4B16DBD = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
}