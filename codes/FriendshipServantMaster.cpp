void FriendshipServantMaster___ctor(FriendshipServantMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939A80 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__);
    byte_5939A80 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    532,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FriendshipServantEntity_o *FriendshipServantMaster__GetEntity(
        FriendshipServantMaster_o *this,
        int32_t svtId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939A81 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__);
    byte_5939A81 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&rank);
  return (FriendshipServantEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool FriendshipServantMaster__TryGetEntity(
        FriendshipServantMaster_o *this,
        FriendshipServantEntity_o **entity,
        int32_t svtId,
        int32_t rank,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939A82 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__);
    byte_5939A82 = 1;
  }
  PK = (Il2CppObject *)FriendshipServantEntity__CreatePK(svtId, rank, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_FriendshipServantMaster__FriendshipServantEntity__string__TryGetEntity__);
}