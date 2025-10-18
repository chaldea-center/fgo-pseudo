void EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42EB1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C42EB1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C42EB0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C42EB0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_30E6270 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventCampaignReleaseEntity__CreatePrimaryKey(
        EventCampaignReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignReleaseEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


System_String_o *EventCampaignReleaseEntity__getCreatePrimarykey(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v19; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v20 = target;
  v21 = eventId;
  v19 = idx;
  if ( (byte_4C42EAF & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    byte_4C42EAF = 1;
  }
  v4 = sub_1C37100(string___TypeInfo, 5);
  v5 = System_Int32__ToString((int32_t)&v21, 0);
  if ( !v4 )
    sub_1C372B4(v5);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v6, v7);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v10 = StringLiteral_1457/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1457/*":"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v10, v8, v9);
  v5 = System_Int32__ToString((int32_t)&v20, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v11, v12),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v15 = StringLiteral_1457/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1457/*":"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 56), v15, v13, v14),
        v5 = System_Int32__ToString((int32_t)&v19, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C372BC(v5);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v16, v17);
  return System_String__Concat_63602172((System_String_array *)v4, 0);
}