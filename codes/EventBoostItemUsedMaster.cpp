void __fastcall EventBoostItemUsedMaster___ctor(EventBoostItemUsedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B26A6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
    byte_42B26A6 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    299,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
}


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

  if ( (byte_42B26A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
    byte_42B26A7 = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
         &entity,
         eventId,
         (const MethodInfo_23E255C *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v7);
    return EventBoostItemUsedEntity__GetUsedCount((EventBoostItemUsedEntity_o *)entity, userId, v8);
  }
  return result;
}