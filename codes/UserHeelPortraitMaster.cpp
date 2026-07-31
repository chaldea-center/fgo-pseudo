void UserHeelPortraitMaster___ctor(UserHeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59395DF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
    byte_59395DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    464,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserHeelPortraitEntity_o *UserHeelPortraitMaster__GetEntity(
        UserHeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59395E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
    byte_59395E0 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserHeelPortraitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
}


bool UserHeelPortraitMaster__TryGetEntity(
        UserHeelPortraitMaster_o *this,
        UserHeelPortraitEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59395E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
    byte_59395E1 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
}