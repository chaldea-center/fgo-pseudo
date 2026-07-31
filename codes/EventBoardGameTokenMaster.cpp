void EventBoardGameTokenMaster___ctor(EventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938519 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
    byte_5938519 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    315,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenEntity_o *EventBoardGameTokenMaster__GetEntity(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938517 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
    byte_5938517 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (EventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventBoardGameTokenMaster__TryGetEntity(
        EventBoardGameTokenMaster_o *this,
        EventBoardGameTokenEntity_o **entity,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938518 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
    byte_5938518 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
}