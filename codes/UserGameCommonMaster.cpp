void __fastcall UserGameCommonMaster___ctor(UserGameCommonMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C250 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
    byte_4A5C250 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    481,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserGameCommonEntity_o *__fastcall UserGameCommonMaster__GetEntity(
        UserGameCommonMaster_o *this,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C251 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
    byte_4A5C251 = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, *(const MethodInfo **)&no);
  return (UserGameCommonEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_311DC8C *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__GetEntity__);
}


bool __fastcall UserGameCommonMaster__TryGetEntity(
        UserGameCommonMaster_o *this,
        UserGameCommonEntity_o **entity,
        int64_t userId,
        int32_t no,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C252 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
    byte_4A5C252 = 1;
  }
  PK = (Il2CppObject *)UserGameCommonEntity__CreatePK(userId, no, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserGameCommonMaster__UserGameCommonEntity__string__TryGetEntity__);
}