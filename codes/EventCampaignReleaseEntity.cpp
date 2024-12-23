void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66AC3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66AC3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B66AC2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target);
    byte_4B66AC2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2F577C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v41; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v42; // [xsp+8h] [xbp-28h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-24h] BYREF

  v42 = target;
  v43 = eventId;
  v41 = idx;
  if ( (byte_4B66AC1 & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, *(_QWORD *)&target);
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, v4);
    byte_4B66AC1 = 1;
  }
  v5 = sub_1BE4B74(string___TypeInfo, 5LL);
  v6 = System_Int32__ToString((int32_t)&v43, 0LL);
  if ( !v5 )
    sub_1BE4D28(v6, v7);
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v5 + 32) = v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v8, v9, v10, v11, v12, v13);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_10;
  v20 = StringLiteral_1542/*":"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_1542/*":"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 40), v20, v14, v15, v16, v17, v18, v19);
  v6 = System_Int32__ToString((int32_t)&v42, 0LL);
  if ( *(_DWORD *)(v5 + 24) <= 2u
    || (*(_QWORD *)(v5 + 48) = v6,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)v6, v21, v22, v23, v24, v25, v26),
        *(_DWORD *)(v5 + 24) <= 3u)
    || (v33 = StringLiteral_1542/*":"*/,
        *(_QWORD *)(v5 + 56) = StringLiteral_1542/*":"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 56), v33, v27, v28, v29, v30, v31, v32),
        v6 = System_Int32__ToString((int32_t)&v41, 0LL),
        *(_DWORD *)(v5 + 24) <= 4u) )
  {
LABEL_10:
    sub_1BE4D30(v6, v7);
  }
  *(_QWORD *)(v5 + 64) = v6;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 64), (int64_t)v6, v34, v35, v36, v37, v38, v39);
  return System_String__Concat_62712336((System_String_array *)v5, 0LL);
}