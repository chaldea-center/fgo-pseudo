void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_4216375 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4216375 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 v4,
                                                                                                 v5);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.beforeTalkMessageList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.afterVoiceIdList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.afterTalkMessageList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall BoxGachaTalkInfo__SetAfterGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4216377 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4216377 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        (afterVoiceIdList = this->fields.afterTalkMessageList) == 0LL) )
  {
    sub_B0D97C(afterVoiceIdList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4216376 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4216376 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        (beforeVoiceIdList = this->fields.beforeTalkMessageList) == 0LL) )
  {
    sub_B0D97C(beforeVoiceIdList);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v4; // x20
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x20

  v4 = this;
  if ( (byte_421637B & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_421637B = 1;
  }
  afterTalkMessageList = v4->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_B0D97C(this);
  if ( afterTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return afterTalkMessageList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v4; // x20
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x20

  v4 = this;
  if ( (byte_421637A & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_421637A = 1;
  }
  afterVoiceIdList = v4->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_B0D97C(this);
  if ( afterVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return afterVoiceIdList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v4; // x20
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x20

  v4 = this;
  if ( (byte_4216379 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4216379 = 1;
  }
  beforeTalkMessageList = v4->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_B0D97C(this);
  if ( beforeTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return beforeTalkMessageList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  BoxGachaTalkInfo_o *v4; // x20
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x20

  v4 = this;
  if ( (byte_4216378 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4216378 = 1;
  }
  beforeVoiceIdList = v4->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_B0D97C(this);
  if ( beforeVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return beforeVoiceIdList->fields._items->m_Items[idx];
}