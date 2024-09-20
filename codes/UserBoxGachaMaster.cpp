void __fastcall UserBoxGachaMaster___ctor(UserBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
    byte_4A5BD19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    127,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserBoxGachaEntity_o *__fastcall UserBoxGachaMaster__GetEntity(
        UserBoxGachaMaster_o *this,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BD17 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
    byte_4A5BD17 = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, *(const MethodInfo **)&boxGachaId);
  return (UserBoxGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_311DC8C *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
}


bool __fastcall UserBoxGachaMaster__TryGetEntity(
        UserBoxGachaMaster_o *this,
        UserBoxGachaEntity_o **entity,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BD18 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
    byte_4A5BD18 = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
}