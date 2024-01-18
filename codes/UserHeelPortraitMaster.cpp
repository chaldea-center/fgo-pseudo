void __fastcall UserHeelPortraitMaster___ctor(UserHeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4187004 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__, method);
    byte_4187004 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    454,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserHeelPortraitEntity_o *__fastcall UserHeelPortraitMaster__GetEntity(
        UserHeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4187005 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4187005 = 1;
  }
  PK = UserHeelPortraitEntity__CreatePK(eventId, *(const MethodInfo **)&eventId);
  return (UserHeelPortraitEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__GetEntity__);
}


bool __fastcall UserHeelPortraitMaster__TryGetEntity(
        UserHeelPortraitMaster_o *this,
        UserHeelPortraitEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4187006 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__, entity);
    byte_4187006 = 1;
  }
  PK = UserHeelPortraitEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserHeelPortraitMaster__UserHeelPortraitEntity__string__TryGetEntity__);
}