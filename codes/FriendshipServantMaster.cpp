void __fastcall FriendshipServantMaster___ctor(FriendshipServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67CD2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__, method);
    byte_4B67CD2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    527,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipServantEntity_o *__fastcall FriendshipServantMaster__GetEntity(
        FriendshipServantMaster_o *this,
        int32_t svtId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67CD3 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B67CD3 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&rank);
  return (FriendshipServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31FDB1C *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__);
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

  if ( (byte_4B67CD4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__, entity);
    byte_4B67CD4 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__);
}