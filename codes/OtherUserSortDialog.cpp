void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *v7; // x19
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  __int64 v9; // x0
  __int64 v10; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  ListViewSort_o *v15; // x20
  struct OtherUserSortDialog_StaticFields *v16; // x0
  __int64 v17; // x19
  System_String_o *v18; // x20
  System_String_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  ListViewSort_o *v22; // x20
  struct OtherUserSortDialog_StaticFields *v23; // x0
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42120D5 & 1) == 0 )
  {
    sub_B0D8A4(&FriendStatus_Kind_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_TypeInfo, v3);
    sub_B0D8A4(&OtherUserSortDialog_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_6748/*"FollowerSelect"*/, v5);
    sub_B0D8A4(&StringLiteral_6825/*"FriendOperation"*/, v6);
    byte_42120D5 = 1;
  }
  v7 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v1, v2);
  ListViewSort___ctor_32823364(v7, (System_String_o *)StringLiteral_6748/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->supportSortInfo = v7;
  sub_B0D840(static_fields, v7);
  v24 = 4;
  v9 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v24);
  if ( !v9 )
    goto LABEL_6;
  v10 = v9;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                             v9,
                             *(_QWORD *)(*(_QWORD *)v9 + 368LL));
  v24 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  v12 = System_String__Concat_43849904((System_String_o *)StringLiteral_6825/*"FriendOperation"*/, v11, 0LL);
  v15 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v13, v14);
  ListViewSort___ctor_32823364(v15, v12, 3, 0, 0LL);
  v16 = OtherUserSortDialog_TypeInfo->static_fields;
  v16->friendMemberListSortInfo = v15;
  sub_B0D840(&v16->friendMemberListSortInfo, v15);
  v24 = 3;
  v9 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v24);
  if ( !v9 )
LABEL_6:
    sub_B0D97C(v9);
  v17 = v9;
  v18 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 360LL))(
                             v9,
                             *(_QWORD *)(*(_QWORD *)v9 + 368LL));
  v24 = *(_DWORD *)j_il2cpp_object_unbox_0(v17);
  v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_6825/*"FriendOperation"*/, v18, 0LL);
  v22 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v20, v21);
  ListViewSort___ctor_32823364(v22, v19, 3, 0, 0LL);
  v23 = OtherUserSortDialog_TypeInfo->static_fields;
  v23->friendRequestListSortInfo = v22;
  sub_B0D840(&v23->friendRequestListSortInfo, v22);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v14; // x20

  if ( (byte_42120D4 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v9);
    byte_42120D4 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   method,
                                                                   v2);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v10 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    11,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    5,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    6,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v10;
  sub_B0D840(&this->fields.sortKindList, v10);
  v14 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v14,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v14 )
LABEL_9:
    sub_B0D97C(v11);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    0,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    1,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    4,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    5,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v14,
    6,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v14;
  sub_B0D840(&this->fields.priorityKindList, v14);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Awake(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Callback(OtherUserSortDialog_o *this, bool result, const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x0
  OtherUserSortDialog_CallbackFunc_o *v4; // x19
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B0D840(p_callbackFunc, 0LL);
    OtherUserSortDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_42120C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_OtherUserSortDialog_EndClose__, v5);
    byte_42120C3 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall OtherUserSortDialog__EndOpen(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall OtherUserSortDialog__Init(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__OnClickCancel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42120C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickCancel__, method);
    byte_42120C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, v5);
    OtherUserSortDialog__Callback(this, 0, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v7; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v9; // w1

  if ( (byte_42120C6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickDecide__, method);
    byte_42120C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B0D97C(baseSortInfo);
    }
    v9 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
      || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v9, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method);
    byte_42120D0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120D2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method);
    byte_42120D2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method);
    byte_42120CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CD & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method);
    byte_42120CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method);
    byte_42120CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityNone__, method);
    byte_42120CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120D1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method);
    byte_42120D1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickSortAttack__, method);
    byte_42120CB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickSortHp__, method);
    byte_42120CA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickSortLevel__, method);
    byte_42120C9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42120C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method);
    byte_42120C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(v6);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UILabel_o *sortTitleLabel; // x21
  System_String_o *SortKindText; // x0
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  struct ListViewSort_o **p_baseSortInfo; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v32; // x0
  struct ListViewSort_o *friendMemberListSortInfo; // x1
  OtherUserSortDialog_c *v34; // x0
  OtherUserSortDialog_c *v35; // x0
  ListViewSort_o *v36; // x20
  ListViewSort_o *v37; // x21
  const MethodInfo *v38; // x1
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v40; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v43; // x20
  const MethodInfo *v44; // x1
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v46; // x22
  int v47; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v49; // x20
  const MethodInfo *v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x20
  __int64 v54; // x0

  if ( (byte_42120C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&ListViewSort_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&Method_OtherUserSortDialog_EndOpen__, v13);
    sub_B0D8A4(&OtherUserSortDialog_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_9871/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v15);
    sub_B0D8A4(&StringLiteral_9869/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v16);
    sub_B0D8A4(&StringLiteral_9866/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v17);
    sub_B0D8A4(&StringLiteral_9868/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v18);
    sub_B0D8A4(&StringLiteral_9867/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v19);
    sub_B0D8A4(&StringLiteral_9870/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v20);
    byte_42120C2 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B0D840(&this->fields.callbackFunc, callback);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9871/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_59;
    UILabel__set_text(sortTitleLabel, SortKindText, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9870/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(sortExplanationLabel, SortKindText, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9869/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_59;
    UILabel__set_text(priorityTitleLabel, SortKindText, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9868/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(priorityExplanationLabel, SortKindText, 0LL);
    decideLabel = this->fields.decideLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9867/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_59;
    UILabel__set_text(decideLabel, SortKindText, 0LL);
    cancelLabel = this->fields.cancelLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9866/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_59;
    UILabel__set_text(cancelLabel, SortKindText, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B0D840(&this->fields.baseSortInfo, sort);
LABEL_34:
      v36 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v36->fields.sortKind;
        this->fields.openedPriorityKind = v36->fields.priorityKind;
        v37 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v29, v30);
        ListViewSort___ctor_32823928(v37, v36, 0LL);
        this->fields.operationSortInfo = v37;
        sub_B0D840(&this->fields.operationSortInfo, v37);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v40 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v40 >= max_length )
              break;
            if ( (unsigned int)v40 >= max_length )
            {
LABEL_60:
              v54 = sub_B0D9A8(SortKindText);
              sub_B0D948(v54, 0LL);
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v43 = sortButtonLabels->m_Items[v40];
              if ( sortKindList->fields._size <= (unsigned int)v40 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              if ( this->fields.operationSortInfo )
              {
                SortKindText = ListViewSort__GetSortKindText(
                                 this->fields.operationSortInfo,
                                 sortKindList->fields._items->m_Items[v40 + 1],
                                 0LL);
                if ( v43 )
                {
                  UILabel__set_text(v43, SortKindText, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v40;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_59;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v38);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v46 = 0LL;
            while ( 1 )
            {
              v47 = priorityButtonLabels->max_length;
              if ( (int)v46 >= v47 )
                break;
              if ( (unsigned int)v46 >= v47 )
                goto LABEL_60;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v49 = priorityButtonLabels->m_Items[v46];
                if ( priorityKindList->fields._size <= (unsigned int)v46 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
                if ( this->fields.operationSortInfo )
                {
                  SortKindText = ListViewSort__GetOtherUserPriorityKindText(
                                   this->fields.operationSortInfo,
                                   priorityKindList->fields._items->m_Items[v46 + 1],
                                   0LL);
                  if ( v49 )
                  {
                    UILabel__set_text(v49, SortKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v46;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_59;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v44);
            SortKindText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( SortKindText )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortKindText, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v50);
              this->fields.state = 1;
              v53 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
              System_Action___ctor(v53, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_B0D97C(SortKindText);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v35 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v35 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v35->static_fields->friendMemberListSortInfo;
      }
      else
      {
        if ( modeKind != 2 )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          goto LABEL_32;
        }
        v32 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v32 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v32->static_fields->friendRequestListSortInfo;
      }
    }
    else
    {
      v34 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v34 = OtherUserSortDialog_TypeInfo;
      }
      friendMemberListSortInfo = v34->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendMemberListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B0D840(&this->fields.baseSortInfo, friendMemberListSortInfo);
LABEL_32:
    SortKindText = (System_String_o *)*p_baseSortInfo;
    if ( !*p_baseSortInfo )
      goto LABEL_59;
    ListViewSort__Load((ListViewSort_o *)SortKindText, 0LL);
    goto LABEL_34;
  }
}


void __fastcall OtherUserSortDialog__SetEnableButtons(
        OtherUserSortDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *sortButtons; // x21
  int max_length; // w8
  OtherUserSortDialog_o *v5; // x19
  unsigned int v7; // w22
  bool v8; // w20
  __int64 v9; // x0

  sortButtons = this->fields.sortButtons;
  if ( !sortButtons )
    goto LABEL_10;
  max_length = sortButtons->max_length;
  v5 = this;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v9 = sub_B0D9A8(this);
        sub_B0D948(v9, 0LL);
      }
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_B0D97C(this);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v5->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  v8 = isEnable;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
  this = (OtherUserSortDialog_o *)v5->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
}


void __fastcall OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v6; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_42120C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v4);
    byte_42120C5 = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( (int)v6 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v6 >= prioritySprites->max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v2->fields.priorityKindList;
        if ( priorityKindList )
        {
          v10 = &prioritySprites->obj.klass + v6;
          if ( priorityKindList->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( v10[4] )
          {
            v11 = (UISprite_o *)v10[4];
            v12 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v6 + 1]
                                     ? &StringLiteral_17007/*"btn_bg_03"*/
                                     : &StringLiteral_17008/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            priorityButtons = v2->fields.priorityButtons;
            ++v6;
            if ( priorityButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
}


void __fastcall OtherUserSortDialog__SetSortButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *sortButtons; // x8
  __int64 v6; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_42120C4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v4);
    byte_42120C4 = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B0D97C(this);
  v6 = 0LL;
  while ( (int)v6 < (signed int)sortButtons->max_length )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v6 >= sortSprites->max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v2->fields.sortKindList;
        if ( sortKindList )
        {
          v10 = &sortSprites->obj.klass + v6;
          if ( sortKindList->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( v10[4] )
          {
            v11 = (UISprite_o *)v10[4];
            v12 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v6 + 1]
                                     ? &StringLiteral_17007/*"btn_bg_03"*/
                                     : &StringLiteral_17008/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            sortButtons = v2->fields.sortButtons;
            ++v6;
            if ( sortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
}


void __fastcall OtherUserSortDialog__add_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  OtherUserSortDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42120C0 & 1) == 0 )
  {
    sub_B0D8A4(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_42120C0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B0DC70(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42120D3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_42120D3 = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
}


void __fastcall OtherUserSortDialog__remove_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42120C1 & 1) == 0 )
  {
    sub_B0D8A4(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_42120C1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B0DC70(v8);
  OtherUserSortDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall OtherUserSortDialog_CallbackFunc__BeginInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_4212168 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212168 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc__Invoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  OtherUserSortDialog_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  OtherUserSortDialog_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  OtherUserSortDialog_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (OtherUserSortDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}