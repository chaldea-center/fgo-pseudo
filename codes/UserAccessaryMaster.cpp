void __fastcall UserAccessaryMaster___ctor(UserAccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB690B & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__, method);
    byte_4AB690B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    40,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserAccessaryEntity_o *__fastcall UserAccessaryMaster__GetEntity(
        UserAccessaryMaster_o *this,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6909 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__, userId);
    byte_4AB6909 = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, *(const MethodInfo **)&accessaryId);
  return (UserAccessaryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31640E8 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__GetEntity__);
}


bool __fastcall UserAccessaryMaster__TryGetEntity(
        UserAccessaryMaster_o *this,
        UserAccessaryEntity_o **entity,
        int64_t userId,
        int32_t accessaryId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB690A & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__, entity);
    byte_4AB690A = 1;
  }
  PK = (Il2CppObject *)UserAccessaryEntity__CreatePK(userId, accessaryId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserAccessaryMaster__UserAccessaryEntity__string__TryGetEntity__);
}