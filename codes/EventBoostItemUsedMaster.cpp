void __fastcall EventBoostItemUsedMaster___ctor(EventBoostItemUsedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438E84D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
    byte_438E84D = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    299,
    (const MethodInfo_21FBA20 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
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

  if ( (byte_438E84E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
    byte_438E84E = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
         &entity,
         eventId,
         (const MethodInfo_21FBB18 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B7769C(0LL, v7);
    return EventBoostItemUsedEntity__GetUsedCount((EventBoostItemUsedEntity_o *)entity, userId, v8);
  }
  return result;
}