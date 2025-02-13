void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC442 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC442 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BDC441 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4BDC441 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2FAE4B8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int32_t v40; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-28h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  v41 = target;
  v42 = eventId;
  v40 = idx;
  if ( (byte_4BDC440 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    byte_4BDC440 = 1;
  }
  v4 = sub_1C21EE0(string___TypeInfo, 5LL);
  v5 = System_Int32__ToString((int32_t)&v42, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)v5, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v19 = StringLiteral_1546/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1546/*":"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
  v5 = System_Int32__ToString((int32_t)&v41, 0LL);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 48), (int64_t)v5, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v32 = StringLiteral_1546/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1546/*":"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 56), v32, v26, v27, v28, v29, v30, v31),
        v5 = System_Int32__ToString((int32_t)&v40, 0LL),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C2209C(v5, v6);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 64), (int64_t)v5, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_63129004((System_String_array *)v4, 0LL);
}