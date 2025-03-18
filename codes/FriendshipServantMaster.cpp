void __fastcall FriendshipServantMaster___ctor(FriendshipServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C230DF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__, method);
    byte_4C230DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    530,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipServantEntity_o *__fastcall FriendshipServantMaster__GetEntity(
        FriendshipServantMaster_o *this,
        int32_t svtId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C230E0 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4C230E0 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&rank);
  return (FriendshipServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_329F900 *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FriendshipServantMaster__TryGetEntity(
        FriendshipServantMaster_o *this,
        FriendshipServantEntity_o **entity,
        int32_t svtId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C230E1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__, entity);
    byte_4C230E1 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__);
}