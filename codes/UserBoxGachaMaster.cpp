void UserBoxGachaMaster___ctor(UserBoxGachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593945A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
    byte_593945A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    133,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserBoxGachaEntity_o *UserBoxGachaMaster__GetEntity(
        UserBoxGachaMaster_o *this,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939458 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
    byte_5939458 = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, *(const MethodInfo **)&boxGachaId);
  return (UserBoxGachaEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__GetEntity__);
}


bool UserBoxGachaMaster__TryGetEntity(
        UserBoxGachaMaster_o *this,
        UserBoxGachaEntity_o **entity,
        int64_t userId,
        int32_t boxGachaId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939459 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
    byte_5939459 = 1;
  }
  PK = (Il2CppObject *)UserBoxGachaEntity__CreatePK(userId, boxGachaId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserBoxGachaMaster__UserBoxGachaEntity__string__TryGetEntity__);
}