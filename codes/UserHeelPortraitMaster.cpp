void __fastcall UserHeelPortraitMaster___ctor(UserHeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE9A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
    byte_4A5BE9A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserHeelPortraitEntity_o *__fastcall UserHeelPortraitMaster__GetEntity(
        UserHeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BE9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
    byte_4A5BE9B = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserHeelPortraitEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
}


bool __fastcall UserHeelPortraitMaster__TryGetEntity(
        UserHeelPortraitMaster_o *this,
        UserHeelPortraitEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BE9C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
    byte_4A5BE9C = 1;
  }
  PK = (Il2CppObject *)UserHeelPortraitEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
}