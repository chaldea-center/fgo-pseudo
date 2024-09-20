void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B070 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B070 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4A5B06F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B06F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePrimaryKey(
        EventCampaignReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventCampaignReleaseEntity__CreatePK(this->fields.eventId, this->fields.target, this->fields.idx, v2);
}


System_String_o *__fastcall EventCampaignReleaseEntity__getCreatePrimarykey(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v20; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v21; // [xsp+8h] [xbp-28h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v21 = target;
  v22 = eventId;
  v20 = idx;
  if ( (byte_4A5B06E & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B06E = 1;
  }
  v4 = sub_1B88658(string___TypeInfo, 5LL);
  v5 = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)v5, v7, v8);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v11 = StringLiteral_1544/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1544/*":"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), v11, v9, v10);
  v5 = System_Int32__ToString((int32_t)&v21, 0LL);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 48), (int32_t)v5, v12, v13),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v16 = StringLiteral_1544/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1544/*":"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 56), v16, v14, v15),
        v5 = System_Int32__ToString((int32_t)&v20, 0LL),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1B88814(v5, v6);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)v5, v17, v18);
  return System_String__Concat_61720560((System_String_array *)v4, 0LL);
}