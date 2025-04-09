void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49BEFED & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_49BEFED = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.beforeTalkMessageList, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.afterVoiceIdList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v13;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.afterTalkMessageList, (int32_t)v13, v14, v15);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8

  if ( (byte_49BEFEF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_49BEFEF = 1;
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
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    afterVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 4), (int32_t)voiceId, (int32_t)text, method);
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterTalkMessageList;
  if ( !afterVoiceIdList
    || (v14 = afterVoiceIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++afterVoiceIdList->fields._version,
        !v14) )
  {
LABEL_13:
    sub_1B4D1EC(afterVoiceIdList, voiceId);
  }
  v16 = afterVoiceIdList->fields._size;
  if ( (unsigned int)v16 >= v14->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    afterVoiceIdList->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)text;
    sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 4), (int32_t)text, v12, v13);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8

  if ( (byte_49BEFEE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_49BEFEE = 1;
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
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    beforeVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 4), (int32_t)voiceId, (int32_t)text, method);
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeTalkMessageList;
  if ( !beforeVoiceIdList
    || (v14 = beforeVoiceIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++beforeVoiceIdList->fields._version,
        !v14) )
  {
LABEL_13:
    sub_1B4D1EC(beforeVoiceIdList, voiceId);
  }
  v16 = beforeVoiceIdList->fields._size;
  if ( (unsigned int)v16 >= v14->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    beforeVoiceIdList->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)text;
    sub_1B4CF34((CGThumbnailListItem_o *)(v17 + 4), (int32_t)text, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x0

  if ( (byte_49BEFF3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_49BEFF3 = 1;
  }
  afterTalkMessageList = this->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_1B4D1EC(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterTalkMessageList,
                              idx,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_49BEFF2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_49BEFF2 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_1B4D1EC(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterVoiceIdList,
                              idx,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x0

  if ( (byte_49BEFF1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_49BEFF1 = 1;
  }
  beforeTalkMessageList = this->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_1B4D1EC(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeTalkMessageList,
                              idx,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_49BEFF0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_49BEFF0 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_1B4D1EC(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeVoiceIdList,
                              idx,
                              (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_string__get_Item__);
}