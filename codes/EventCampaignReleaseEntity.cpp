void EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C763 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C763 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4D2C762 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2C762 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v40; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-28h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  v41 = target;
  v42 = eventId;
  v40 = idx;
  if ( (byte_4D2C761 & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2C761 = 1;
  }
  v4 = sub_1C94140(string___TypeInfo, 5);
  v5 = System_Int32__ToString((int32_t)&v42, 0);
  if ( !v4 )
    sub_1C942F0(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v19 = StringLiteral_1450/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1450/*":"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
  v5 = System_Int32__ToString((int32_t)&v41, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 48), (int32_t)v5, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v32 = StringLiteral_1450/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1450/*":"*/,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 56), v32, v26, v27, v28, v29, v30, v31),
        v5 = System_Int32__ToString((int32_t)&v40, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C942F8(v5);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 64), (int32_t)v5, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_64458276((System_String_array *)v4, 0);
}