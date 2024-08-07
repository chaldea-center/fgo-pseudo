void __fastcall UserBoxGachaMaster___ctor(UserBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF5DF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__, method);
    byte_49FF5DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    127,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserBoxGachaEntity_o *__fastcall UserBoxGachaMaster__GetEntity(
        UserBoxGachaMaster_o *this,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF5DD & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__, userId);
    byte_49FF5DD = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, *(const MethodInfo **)&boxGachaId);
  return (UserBoxGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
}


bool __fastcall UserBoxGachaMaster__TryGetEntity(
        UserBoxGachaMaster_o *this,
        UserBoxGachaEntity_o **entity,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF5DE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__, entity);
    byte_49FF5DE = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
}