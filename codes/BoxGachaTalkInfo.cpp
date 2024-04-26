void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4353EE1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    byte_4353EE1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.beforeTalkMessageList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.afterVoiceIdList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.afterTalkMessageList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall BoxGachaTalkInfo__SetAfterGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4353EE3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    byte_4353EE3 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        (afterVoiceIdList = this->fields.afterTalkMessageList) == 0LL) )
  {
    sub_B7076C(afterVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4353EE2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    byte_4353EE2 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        (beforeVoiceIdList = this->fields.beforeTalkMessageList) == 0LL) )
  {
    sub_B7076C(beforeVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
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
  if ( (byte_4353EE7 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4353EE7 = 1;
  }
  afterTalkMessageList = v4->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_B7076C(this, *(_QWORD *)&idx);
  if ( afterTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
  if ( (byte_4353EE6 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4353EE6 = 1;
  }
  afterVoiceIdList = v4->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_B7076C(this, *(_QWORD *)&idx);
  if ( afterVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
  if ( (byte_4353EE5 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4353EE5 = 1;
  }
  beforeTalkMessageList = v4->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_B7076C(this, *(_QWORD *)&idx);
  if ( beforeTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
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
  if ( (byte_4353EE4 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4353EE4 = 1;
  }
  beforeVoiceIdList = v4->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_B7076C(this, *(_QWORD *)&idx);
  if ( beforeVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  return beforeVoiceIdList->fields._items->m_Items[idx];
}