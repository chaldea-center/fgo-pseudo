void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4189706 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4189706 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.beforeTalkMessageList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.afterVoiceIdList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.afterTalkMessageList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall BoxGachaTalkInfo__SetAfterGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4189708 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4189708 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        (afterVoiceIdList = this->fields.afterTalkMessageList) == 0LL) )
  {
    sub_B2C434(afterVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)afterVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4189707 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4189707 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)voiceId,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        (beforeVoiceIdList = this->fields.beforeTalkMessageList) == 0LL) )
  {
    sub_B2C434(beforeVoiceIdList, voiceId);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)beforeVoiceIdList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)text,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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
  if ( (byte_418970C & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_418970C = 1;
  }
  afterTalkMessageList = v4->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_B2C434(this, *(_QWORD *)&idx);
  if ( afterTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418970B & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_418970B = 1;
  }
  afterVoiceIdList = v4->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_B2C434(this, *(_QWORD *)&idx);
  if ( afterVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_418970A & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_418970A = 1;
  }
  beforeTalkMessageList = v4->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_B2C434(this, *(_QWORD *)&idx);
  if ( beforeTalkMessageList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  if ( (byte_4189709 & 1) == 0 )
  {
    this = (BoxGachaTalkInfo_o *)sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4189709 = 1;
  }
  beforeVoiceIdList = v4->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_B2C434(this, *(_QWORD *)&idx);
  if ( beforeVoiceIdList->fields._size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return beforeVoiceIdList->fields._items->m_Items[idx];
}