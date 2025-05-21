void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B3EFFD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4B3EFFD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1BDB81C(&this->fields);
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1BDB81C(&this->fields.beforeTalkMessageList);
  v6 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1BDB81C(&this->fields.afterVoiceIdList);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1BDB81C(&this->fields.afterTalkMessageList);
}


void __fastcall BoxGachaTalkInfo__SetAfterGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *afterVoiceIdList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4B3EFFF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4B3EFFF = 1;
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    goto LABEL_13;
  items = afterVoiceIdList->fields._items;
  v9 = Method_System_Collections_Generic_List_string__Add__;
  ++afterVoiceIdList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = afterVoiceIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)voiceId,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    afterVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1BDB81C(v11 + 4);
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterTalkMessageList;
  if ( !afterVoiceIdList
    || (v12 = afterVoiceIdList->fields._items,
        v13 = Method_System_Collections_Generic_List_string__Add__,
        ++afterVoiceIdList->fields._version,
        !v12) )
  {
LABEL_13:
    sub_1BDBAD4(afterVoiceIdList, voiceId);
  }
  v14 = afterVoiceIdList->fields._size;
  if ( (unsigned int)v14 >= v12->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + v14;
    afterVoiceIdList->fields._size = v14 + 1;
    v15[4] = (Il2CppClass *)text;
    sub_1BDB81C(v15 + 4);
  }
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *beforeVoiceIdList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x8
  struct System_Object_array *v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4B3EFFE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4B3EFFE = 1;
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_13;
  items = beforeVoiceIdList->fields._items;
  v9 = Method_System_Collections_Generic_List_string__Add__;
  ++beforeVoiceIdList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = beforeVoiceIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)voiceId,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    beforeVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1BDB81C(v11 + 4);
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeTalkMessageList;
  if ( !beforeVoiceIdList
    || (v12 = beforeVoiceIdList->fields._items,
        v13 = Method_System_Collections_Generic_List_string__Add__,
        ++beforeVoiceIdList->fields._version,
        !v12) )
  {
LABEL_13:
    sub_1BDBAD4(beforeVoiceIdList, voiceId);
  }
  v14 = beforeVoiceIdList->fields._size;
  if ( (unsigned int)v14 >= v12->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &v12->obj.klass + v14;
    beforeVoiceIdList->fields._size = v14 + 1;
    v15[4] = (Il2CppClass *)text;
    sub_1BDB81C(v15 + 4);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x0

  if ( (qword_4B3F000 & 0x1000000) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    BYTE3(qword_4B3F000) = 1;
  }
  afterTalkMessageList = this->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_1BDBAD4(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterTalkMessageList,
                              idx,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (qword_4B3F000 & 0x10000) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    BYTE2(qword_4B3F000) = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_1BDBAD4(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterVoiceIdList,
                              idx,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x0

  if ( (qword_4B3F000 & 0x100) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    BYTE1(qword_4B3F000) = 1;
  }
  beforeTalkMessageList = this->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_1BDBAD4(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeTalkMessageList,
                              idx,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (qword_4B3F000 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    LOBYTE(qword_4B3F000) = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_1BDBAD4(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeVoiceIdList,
                              idx,
                              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
}