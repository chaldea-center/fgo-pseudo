void __fastcall EventBoostItemUsedMaster___ctor(EventBoostItemUsedMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC796E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__, method);
    byte_4BC796E = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    304,
    (const MethodInfo_32488B0 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long___ctor__);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC796F & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC796F = 1;
  }
  entity = 0LL;
  v9 = DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         eventId,
         (const MethodInfo_324AC20 *)Method_DataMasterBase_EventBoostItemUsedMaster__EventBoostItemUsedEntity__long__TryGetEntity__);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1C1AE30(0LL, v7);
    return EventBoostItemUsedEntity__GetUsedCount((EventBoostItemUsedEntity_o *)entity, userId, v8);
  }
  return result;
}