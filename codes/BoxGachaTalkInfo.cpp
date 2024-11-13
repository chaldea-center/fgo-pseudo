void __fastcall BoxGachaTalkInfo___ctor(BoxGachaTalkInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B1A188 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v4, v5);
    byte_4B1A188 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeVoiceIdList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.beforeTalkMessageList = (struct System_Collections_Generic_List_string__o *)v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.beforeTalkMessageList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterVoiceIdList = (struct System_Collections_Generic_List_string__o *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterVoiceIdList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.afterTalkMessageList = (struct System_Collections_Generic_List_string__o *)v39;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.afterTalkMessageList,
    (int64_t)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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

  if ( (byte_4B1A18A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, voiceId, text);
    byte_4B1A18A = 1;
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
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    afterVoiceIdList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)voiceId;
    sub_1BCA784(
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
    sub_1BCAA3C(afterVoiceIdList, voiceId);
  }
  v24 = afterVoiceIdList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      afterVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    afterVoiceIdList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)text;
    sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)text, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4B1A189 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, voiceId, text);
    byte_4B1A189 = 1;
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
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    beforeVoiceIdList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)voiceId;
    sub_1BCA784(
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
    sub_1BCAA3C(beforeVoiceIdList, voiceId);
  }
  v24 = beforeVoiceIdList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      beforeVoiceIdList,
      (Il2CppObject *)text,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    beforeVoiceIdList->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)text;
    sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)text, v16, v17, v18, v19, v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterTalkMessageList; // x0

  if ( (byte_4B1A18E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx, method);
    byte_4B1A18E = 1;
  }
  afterTalkMessageList = this->fields.afterTalkMessageList;
  if ( !afterTalkMessageList )
    sub_1BCAA3C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterTalkMessageList,
                              idx,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getAfterVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *afterVoiceIdList; // x0

  if ( (byte_4B1A18D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx, method);
    byte_4B1A18D = 1;
  }
  afterVoiceIdList = this->fields.afterVoiceIdList;
  if ( !afterVoiceIdList )
    sub_1BCAA3C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)afterVoiceIdList,
                              idx,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeTalkMessage(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeTalkMessageList; // x0

  if ( (byte_4B1A18C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx, method);
    byte_4B1A18C = 1;
  }
  beforeTalkMessageList = this->fields.beforeTalkMessageList;
  if ( !beforeTalkMessageList )
    sub_1BCAA3C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeTalkMessageList,
                              idx,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BoxGachaTalkInfo__getBeforeVoiceId(
        BoxGachaTalkInfo_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *beforeVoiceIdList; // x0

  if ( (byte_4B1A18B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, *(_QWORD *)&idx, method);
    byte_4B1A18B = 1;
  }
  beforeVoiceIdList = this->fields.beforeVoiceIdList;
  if ( !beforeVoiceIdList )
    sub_1BCAA3C(0LL, *(_QWORD *)&idx);
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)beforeVoiceIdList,
                              idx,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}