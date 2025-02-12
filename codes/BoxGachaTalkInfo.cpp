void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4BB8723 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4BB8723 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.beforeTalkMessageList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.afterVoiceIdList, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.afterTalkMessageList,
    (int64_t)v25,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *afterVoiceIdList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4BB8725 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4BB8725 = 1;
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    goto LABEL_13;
  items = afterVoiceIdList->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++afterVoiceIdList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = afterVoiceIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)voiceId,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterVoiceIdList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)voiceId;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)(v15 + 4),
      (int64_t)voiceId,
      (int64_t)text,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  afterVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.afterTalkMessageList;
  if ( !afterVoiceIdList
    || (v22 = afterVoiceIdList->fields._items,
        v23 = Method_System_Collections_Generic_List_string__Add__,
        ++afterVoiceIdList->fields._version,
        !v22) )
  {
LABEL_13:
    sub_1C13F80(afterVoiceIdList, voiceId);
  }
  v24 = afterVoiceIdList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    afterVoiceIdList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)text;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)text, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall BoxGachaTalkInfo__SetBeforeGachaTalkInfo(
        BoxGachaTalkInfo_o *this,
        System_String_o *voiceId,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *beforeVoiceIdList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4BB8724 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, voiceId);
    byte_4BB8724 = 1;
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    goto LABEL_13;
  items = beforeVoiceIdList->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++beforeVoiceIdList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = beforeVoiceIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)voiceId,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeVoiceIdList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)voiceId;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)(v15 + 4),
      (int64_t)voiceId,
      (int64_t)text,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  beforeVoiceIdList = (System_Collections_Generic_List_object__o *)this->fields.beforeTalkMessageList;
  if ( !beforeVoiceIdList
    || (v22 = beforeVoiceIdList->fields._items,
        v23 = Method_System_Collections_Generic_List_string__Add__,
        ++beforeVoiceIdList->fields._version,
        !v22) )
  {
LABEL_13:
    sub_1C13F80(beforeVoiceIdList, voiceId);
  }
  v24 = beforeVoiceIdList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    beforeVoiceIdList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)text;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)text, v16, v17, v18, v19, v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x0

  if ( (byte_4BB8729 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4BB8729 = 1;
  }
  afterTalkMessageList = this->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_1C13F80(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterTalkMessageList,
                              idx,
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4BB8728 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4BB8728 = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_1C13F80(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterVoiceIdList,
                              idx,
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x0

  if ( (byte_4BB8727 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4BB8727 = 1;
  }
  beforeTalkMessageList = this->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_1C13F80(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeTalkMessageList,
                              idx,
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4BB8726 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx);
    byte_4BB8726 = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_1C13F80(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeVoiceIdList,
                              idx,
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
}