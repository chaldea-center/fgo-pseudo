void __fastcall UserGameCommonMaster___ctor(UserGameCommonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D26 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__, method);
    byte_4B67D26 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    485,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGameCommonEntity_o *__fastcall UserGameCommonMaster__GetEntity(
        UserGameCommonMaster_o *this,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67D27 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__, userId);
    byte_4B67D27 = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, *(const MethodInfo **)&no);
  return (UserGameCommonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
}


bool __fastcall UserGameCommonMaster__TryGetEntity(
        UserGameCommonMaster_o *this,
        UserGameCommonEntity_o **entity,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67D28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__, entity);
    byte_4B67D28 = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
}