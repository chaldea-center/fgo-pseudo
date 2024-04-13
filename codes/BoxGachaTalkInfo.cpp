void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42EA5BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v5, v6, v7);
    byte_42EA5BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.beforeTalkMessageList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.afterVoiceIdList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.afterTalkMessageList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall BoxGachaTalkInfo__SetAfterGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_42EA5C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)voiceId, (_DWORD)text, method);
    byte_42EA5C1 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        (afterVoiceIdList = this->fields.afterTalkMessageList) == 0LL) )
  {
    sub_B5D69C(afterVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_42EA5C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)voiceId, (_DWORD)text, method);
    byte_42EA5C0 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        (beforeVoiceIdList = this->fields.beforeTalkMessageList) == 0LL) )
  {
    sub_B5D69C(beforeVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BoxGachaTalkInfo_o *v5; // x20
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x20

  v5 = this;
  if ( (byte_42EA5C5 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                   idx,
                                   (_DWORD)method,
                                   v3);
    byte_42EA5C5 = 1;
  }
  afterTalkMessageList = v5->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_B5D69C(this, *(_QWORD *)&idx);
  if ( afterTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return afterTalkMessageList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BoxGachaTalkInfo_o *v5; // x20
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x20

  v5 = this;
  if ( (byte_42EA5C4 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                   idx,
                                   (_DWORD)method,
                                   v3);
    byte_42EA5C4 = 1;
  }
  afterVoiceIdList = v5->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_B5D69C(this, *(_QWORD *)&idx);
  if ( afterVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return afterVoiceIdList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BoxGachaTalkInfo_o *v5; // x20
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x20

  v5 = this;
  if ( (byte_42EA5C3 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                   idx,
                                   (_DWORD)method,
                                   v3);
    byte_42EA5C3 = 1;
  }
  beforeTalkMessageList = v5->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_B5D69C(this, *(_QWORD *)&idx);
  if ( beforeTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return beforeTalkMessageList->fields._items->m_Items[idx];
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BoxGachaTalkInfo_o *v5; // x20
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x20

  v5 = this;
  if ( (byte_42EA5C2 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B5D5C4(
                                   &Method_System_Collections_Generic_List_string__get_Item__,
                                   idx,
                                   (_DWORD)method,
                                   v3);
    byte_42EA5C2 = 1;
  }
  beforeVoiceIdList = v5->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_B5D69C(this, *(_QWORD *)&idx);
  if ( beforeVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return beforeVoiceIdList->fields._items->m_Items[idx];
}