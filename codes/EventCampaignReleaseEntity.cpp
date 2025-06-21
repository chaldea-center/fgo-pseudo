void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C419 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C419 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B1C418 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4B1C418 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePrimaryKey(
        EventCampaignReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignReleaseEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__getCreatePrimarykey(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v18 = target;
  v19 = eventId;
  v17 = idx;
  if ( (byte_4B1C417 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, *(_QWORD *)&target);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v4);
    byte_4B1C417 = 1;
  }
  v5 = sub_1BCB0A0(string___TypeInfo, 5LL);
  v6 = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_10;
  v11 = StringLiteral_1448/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1448/*":"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), v11, v8, v10);
  v6 = System_Int32__ToString((int32_t)&v18, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = v6,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 48), (int32_t)v6, v8, v12),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v14 = StringLiteral_1448/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1448/*":"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 56), v14, v8, v13),
        v6 = System_Int32__ToString((int32_t)&v17, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_10:
    sub_1BCB25C(v6, v7, v8);
  }
  *(_QWORD *)(v5 + 64) = v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 64), (int32_t)v6, v8, v15);
  return System_String__Concat_62490940((System_String_array *)v5, 0LL);
}