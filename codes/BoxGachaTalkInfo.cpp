void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5EF98 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A5EF98 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.beforeTalkMessageList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterVoiceIdList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.afterTalkMessageList, (int32_t)v12, v13, v14);
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
  int32_t v13; // w3
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4A5EF9A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4A5EF9A = 1;
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    afterVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)voiceId, (int32_t)text, (int32_t)method);
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterTalkMessageList;
  if ( !afterVoiceIdList
    || (v14 = afterVoiceIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++afterVoiceIdList->fields._version,
        !v14) )
  {
LABEL_13:
    sub_1B8880C(afterVoiceIdList, voiceId);
  }
  v16 = afterVoiceIdList->fields._size;
  if ( (unsigned int)v16 >= v14->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    afterVoiceIdList->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)text;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)text, v12, v13);
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
  int32_t v13; // w3
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4A5EF99 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    byte_4A5EF99 = 1;
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    beforeVoiceIdList->fields._size = size + 1;
    v11[4] = (Il2CppClass *)voiceId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)voiceId, (int32_t)text, (int32_t)method);
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeTalkMessageList;
  if ( !beforeVoiceIdList
    || (v14 = beforeVoiceIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_string__Add__,
        ++beforeVoiceIdList->fields._version,
        !v14) )
  {
LABEL_13:
    sub_1B8880C(beforeVoiceIdList, voiceId);
  }
  v16 = beforeVoiceIdList->fields._size;
  if ( (unsigned int)v16 >= v14->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    beforeVoiceIdList->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)text;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)text, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x0

  if ( (byte_4A5EF9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5EF9E = 1;
  }
  afterTalkMessageList = this->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_1B8880C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterTalkMessageList,
                              idx,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4A5EF9D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5EF9D = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_1B8880C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterVoiceIdList,
                              idx,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x0

  if ( (byte_4A5EF9C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5EF9C = 1;
  }
  beforeTalkMessageList = this->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_1B8880C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeTalkMessageList,
                              idx,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4A5EF9B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4A5EF9B = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_1B8880C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeVoiceIdList,
                              idx,
                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
}