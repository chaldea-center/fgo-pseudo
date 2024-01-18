void __fastcall EventBoostItemUsedMaster___ctor(EventBoostItemUsedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A238 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__, method);
    byte_418A238 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    298,
    (const MethodInfo_24E425C *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UsedCount_o *__fastcall EventBoostItemUsedMaster__GetUsedCount(
        EventBoostItemUsedMaster_o *this,
        int32_t eventId,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  bool v9; // w8
  UsedCount_o *result; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A239 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__,
      *(_QWORD *)&eventId);
    byte_418A239 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
         &entity,
         eventId,
         (const MethodInfo_24E4354 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B2C434(0LL, v7);
    return EventBoostItemUsedEntity__GetUsedCount((EventBoostItemUsedEntity_o *)entity, userId, v8);
  }
  return result;
}