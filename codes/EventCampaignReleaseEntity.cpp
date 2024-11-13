void __fastcall EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B160FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4B160FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&target, *(_QWORD *)&idx);
    byte_4B160FC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v5; // x2
  __int64 v6; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t v42; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v43; // [xsp+8h] [xbp-28h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-24h] BYREF

  v43 = target;
  v44 = eventId;
  v42 = idx;
  if ( (byte_4B160FB & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, *(_QWORD *)&target, *(_QWORD *)&idx);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v4, v5);
    byte_4B160FB = 1;
  }
  v6 = sub_1BCA888(string___TypeInfo, 5LL);
  v7 = System_Int32__ToString((int32_t)&v44, 0LL);
  if ( !v6 )
    sub_1BCAA3C(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v6 + 32) = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)v7, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_10;
  v21 = StringLiteral_1541/*":"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_1541/*":"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), v21, v15, v16, v17, v18, v19, v20);
  v7 = System_Int32__ToString((int32_t)&v43, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 2u
    || (*(_QWORD *)(v6 + 48) = v7,
        sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)v7, v22, v23, v24, v25, v26, v27),
        *(_DWORD *)(v6 + 24) <= 3u)
    || (v34 = StringLiteral_1541/*":"*/,
        *(_QWORD *)(v6 + 56) = StringLiteral_1541/*":"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 56), v34, v28, v29, v30, v31, v32, v33),
        v7 = System_Int32__ToString((int32_t)&v42, 0LL),
        *(_DWORD *)(v6 + 24) <= 4u) )
  {
LABEL_10:
    sub_1BCAA44(v7, v8);
  }
  *(_QWORD *)(v6 + 64) = v7;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 64), (int64_t)v7, v35, v36, v37, v38, v39, v40);
  return System_String__Concat_62414748((System_String_array *)v6, 0LL);
}