void UserHeelPortraitMaster___ctor(UserHeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28195 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
    byte_4C28195 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    462,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserHeelPortraitEntity_o *UserHeelPortraitMaster__GetEntity(
        UserHeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28196 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
    byte_4C28196 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserHeelPortraitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
}


bool UserHeelPortraitMaster__TryGetEntity(
        UserHeelPortraitMaster_o *this,
        UserHeelPortraitEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28197 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
    byte_4C28197 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
}