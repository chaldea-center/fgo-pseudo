void EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C271C5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C271C5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4C271C4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C271C4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v16; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v17 = target;
  v18 = eventId;
  v16 = idx;
  if ( (byte_4C271C3 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C271C3 = 1;
  }
  v4 = sub_1C2D538(string___TypeInfo, 5);
  v5 = System_Int32__ToString((int32_t)&v18, 0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v10 = StringLiteral_1456/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1456/*":"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), v10, v7, v9);
  v5 = System_Int32__ToString((int32_t)&v17, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 48), (int32_t)v5, v7, v11),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v13 = StringLiteral_1456/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1456/*":"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v4 + 56), v13, v7, v12),
        v5 = System_Int32__ToString((int32_t)&v16, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C2D6F4(v5, v6, v7);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 64), (int32_t)v5, v7, v14);
  return System_String__Concat_63498380((System_String_array *)v4, 0);
}