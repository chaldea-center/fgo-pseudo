void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FD7B & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_string___ctor__, method);
    byte_4A6FD7B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_312C420 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A6FD7A & 1) == 0 )
  {
    sub_1B90010(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4A6FD7A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2E8C8D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v21; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v22; // [xsp+8h] [xbp-28h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v22 = target;
  v23 = eventId;
  v21 = idx;
  if ( (byte_4A6FD79 & 1) == 0 )
  {
    sub_1B90010(&string___TypeInfo, *(_QWORD *)&target);
    sub_1B90010(&StringLiteral_1545/*":"*/, v4);
    byte_4A6FD79 = 1;
  }
  v5 = sub_1B900B8(string___TypeInfo, 5LL);
  v6 = System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !v5 )
    sub_1B9026C(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v8, v9);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_10;
  v12 = StringLiteral_1545/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1545/*":"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 40), v12, v10, v11);
  v6 = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = v6,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 48), (int32_t)v6, v13, v14),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v17 = StringLiteral_1545/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1545/*":"*/,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 56), v17, v15, v16),
        v6 = System_Int32__ToString((int32_t)&v21, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_10:
    sub_1B90274(v6, v7);
  }
  *(_QWORD *)(v5 + 64) = v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v5 + 64), (int32_t)v6, v18, v19);
  return System_String__Concat_61800620((System_String_array *)v5, 0LL);
}