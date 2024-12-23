void __fastcall UserHeelPortraitMaster___ctor(UserHeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67947 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__, method);
    byte_4B67947 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    460,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserHeelPortraitEntity_o *__fastcall UserHeelPortraitMaster__GetEntity(
        UserHeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67948 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B67948 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserHeelPortraitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
}


bool __fastcall UserHeelPortraitMaster__TryGetEntity(
        UserHeelPortraitMaster_o *this,
        UserHeelPortraitEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67949 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__, entity);
    byte_4B67949 = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
}