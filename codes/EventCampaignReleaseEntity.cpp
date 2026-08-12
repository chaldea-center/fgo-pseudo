void EventCampaignReleaseEntity___ctor(EventCampaignReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970735 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970735 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventCampaignReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_5970734 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5970734 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           eventId,
           target,
           idx,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v40; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-28h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  v41 = target;
  v42 = eventId;
  v40 = idx;
  if ( (byte_5970733 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    byte_5970733 = 1;
  }
  v4 = sub_2213B20(string___TypeInfo, 5);
  v5 = System_Int32__ToString((int32_t)&v42, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  *(_QWORD *)(v4 + 32) = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_10;
  v19 = StringLiteral_1533/*":"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_1533/*":"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), v19, v13, v14, v15, v16, v17, v18);
  v5 = System_Int32__ToString((int32_t)&v41, 0);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (*(_QWORD *)(v4 + 48) = v5,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 48), (int32_t)v5, v20, v21, v22, v23, v24, v25),
        (*(_DWORD *)(v4 + 24) & 0xFFFFFFFC) == 0)
    || (v32 = StringLiteral_1533/*":"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_1533/*":"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 56), v32, v26, v27, v28, v29, v30, v31),
        v5 = System_Int32__ToString((int32_t)&v40, 0),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_2213CE4(v5);
  }
  *(_QWORD *)(v4 + 64) = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 64), (int32_t)v5, v33, v34, v35, v36, v37, v38);
  return System_String__Concat_75697120((System_String_array *)v4, 0);
}