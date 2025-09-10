void UserGameCommonMaster___ctor(UserGameCommonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C285B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
    byte_4C285B8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    487,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGameCommonEntity_o *UserGameCommonMaster__GetEntity(
        UserGameCommonMaster_o *this,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C285B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
    byte_4C285B9 = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, *(const MethodInfo **)&no);
  return (UserGameCommonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_338C850 *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
}


bool UserGameCommonMaster__TryGetEntity(
        UserGameCommonMaster_o *this,
        UserGameCommonEntity_o **entity,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C285BA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
    byte_4C285BA = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
}