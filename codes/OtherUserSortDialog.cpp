void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  ListViewSort_o *v16; // x19
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  System_String_o *v21; // x20
  System_String_o *v22; // x19
  ListViewSort_o *v23; // x20
  struct OtherUserSortDialog_StaticFields *v24; // x0
  __int64 v25; // x19
  System_String_o *v26; // x20
  System_String_o *v27; // x19
  ListViewSort_o *v28; // x20
  struct OtherUserSortDialog_StaticFields *v29; // x0
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E6372 & 1) == 0 )
  {
    sub_B5D5C4(&FriendStatus_Kind_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&OtherUserSortDialog_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6811/*"FollowerSelect"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_6888/*"FriendOperation"*/, v13, v14, v15);
    byte_42E6372 = 1;
  }
  v16 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v16, (System_String_o *)StringLiteral_6811/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->supportSortInfo = v16;
  sub_B5D560(static_fields);
  v30 = 4;
  v18 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v30);
  if ( !v18 )
    goto LABEL_6;
  v20 = v18;
  v21 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 360LL))(
                             v18,
                             *(_QWORD *)(*(_QWORD *)v18 + 368LL));
  v30 = *(_DWORD *)j_il2cpp_object_unbox_0(v20);
  v22 = System_String__Concat_44577788((System_String_o *)StringLiteral_6888/*"FriendOperation"*/, v21, 0LL);
  v23 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v23, v22, 3, 0, 0LL);
  v24 = OtherUserSortDialog_TypeInfo->static_fields;
  v24->friendMemberListSortInfo = v23;
  sub_B5D560(&v24->friendMemberListSortInfo);
  v30 = 3;
  v18 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v30);
  if ( !v18 )
LABEL_6:
    sub_B5D69C(v18, v19);
  v25 = v18;
  v26 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 360LL))(
                             v18,
                             *(_QWORD *)(*(_QWORD *)v18 + 368LL));
  v30 = *(_DWORD *)j_il2cpp_object_unbox_0(v25);
  v27 = System_String__Concat_44577788((System_String_o *)StringLiteral_6888/*"FriendOperation"*/, v26, 0LL);
  v28 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34028932(v28, v27, 3, 0, 0LL);
  v29 = OtherUserSortDialog_TypeInfo->static_fields;
  v29->friendRequestListSortInfo = v28;
  sub_B5D560(&v29->friendRequestListSortInfo);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v26; // x20

  if ( (byte_42E6371 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v20, v21, v22);
    byte_42E6371 = 1;
  }
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v23 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    11,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v23;
  sub_B5D560(&this->fields.sortKindList);
  v26 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v26,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v26 )
LABEL_9:
    sub_B5D69C(v24, v25);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    0,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    1,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    2,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    3,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    4,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    5,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    6,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v26;
  sub_B5D560(&this->fields.priorityKindList);
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
    sub_B5D560(p_callbackFunc);
    OtherUserSortDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_42E6360 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_OtherUserSortDialog_EndClose__, v6, v7, v8);
    byte_42E6360 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
    sub_B5D560(p_closeCallbackFunc);
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_42E6364 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E6364 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, v7);
    OtherUserSortDialog__Callback(this, 0, v8);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v10; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v12; // w1

  if ( (byte_42E6363 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickDecide__, (_DWORD)method, v2, v3);
    byte_42E6363 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B5D69C(baseSortInfo, v8);
    }
    v12 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
       || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v12, v10);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636D & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, (_DWORD)method, v2, v3);
    byte_42E636D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636F & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, (_DWORD)method, v2, v3);
    byte_42E636F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636C & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, (_DWORD)method, v2, v3);
    byte_42E636C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636A & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, (_DWORD)method, v2, v3);
    byte_42E636A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636B & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, (_DWORD)method, v2, v3);
    byte_42E636B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6369 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityNone__, (_DWORD)method, v2, v3);
    byte_42E6369 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E636E & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, (_DWORD)method, v2, v3);
    byte_42E636E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6368 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickSortAttack__, (_DWORD)method, v2, v3);
    byte_42E6368 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickSortAttack__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6367 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickSortHp__, (_DWORD)method, v2, v3);
    byte_42E6367 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickSortHp__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6366 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickSortLevel__, (_DWORD)method, v2, v3);
    byte_42E6366 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickSortLevel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42E6365 & 1) == 0 )
  {
    sub_B5D5C4(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, (_DWORD)method, v2, v3);
    byte_42E6365 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, v7);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B5D69C(v8, v9);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v9);
  }
}


void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UILabel_o *sortTitleLabel; // x21
  System_String_o *SortKindText; // x0
  const MethodInfo *v47; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  struct ListViewSort_o **p_baseSortInfo; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v55; // x0
  struct ListViewSort_o *friendMemberListSortInfo; // x1
  OtherUserSortDialog_c *v57; // x0
  OtherUserSortDialog_c *v58; // x0
  ListViewSort_o *v59; // x20
  ListViewSort_o *v60; // x21
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v62; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v65; // x20
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v67; // x22
  int v68; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v70; // x20
  const MethodInfo *v71; // x2
  System_Action_o *v72; // x20
  __int64 v73; // x0

  if ( (byte_42E635F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)sort, callback);
    sub_B5D5C4(&ListViewSort_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_OtherUserSortDialog_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&OtherUserSortDialog_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_9953/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_9951/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_9948/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_9950/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_9949/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_9952/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v42, v43, v44);
    byte_42E635F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B5D560(&this->fields.callbackFunc);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9953/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_59;
    UILabel__set_text(sortTitleLabel, SortKindText, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9952/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(sortExplanationLabel, SortKindText, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9951/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_59;
    UILabel__set_text(priorityTitleLabel, SortKindText, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9950/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(priorityExplanationLabel, SortKindText, 0LL);
    decideLabel = this->fields.decideLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9949/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_59;
    UILabel__set_text(decideLabel, SortKindText, 0LL);
    cancelLabel = this->fields.cancelLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9948/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_59;
    UILabel__set_text(cancelLabel, SortKindText, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B5D560(&this->fields.baseSortInfo);
LABEL_34:
      v59 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v59->fields.sortKind;
        this->fields.openedPriorityKind = v59->fields.priorityKind;
        v60 = (ListViewSort_o *)sub_B5D694(ListViewSort_TypeInfo);
        ListViewSort___ctor_34029496(v60, v59, 0LL);
        this->fields.operationSortInfo = v60;
        sub_B5D560(&this->fields.operationSortInfo);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v62 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v62 >= max_length )
              break;
            if ( (unsigned int)v62 >= max_length )
            {
LABEL_60:
              v73 = sub_B5D6C8(SortKindText);
              sub_B5D668(v73, 0LL);
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v65 = sortButtonLabels->m_Items[v62];
              if ( sortKindList->fields._size <= (unsigned int)v62 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( this->fields.operationSortInfo )
              {
                SortKindText = ListViewSort__GetSortKindText(
                                 this->fields.operationSortInfo,
                                 sortKindList->fields._items->m_Items[v62 + 1],
                                 0LL);
                if ( v65 )
                {
                  UILabel__set_text(v65, SortKindText, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v62;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_59;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v47);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v67 = 0LL;
            while ( 1 )
            {
              v68 = priorityButtonLabels->max_length;
              if ( (int)v67 >= v68 )
                break;
              if ( (unsigned int)v67 >= v68 )
                goto LABEL_60;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v70 = priorityButtonLabels->m_Items[v67];
                if ( priorityKindList->fields._size <= (unsigned int)v67 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
                if ( this->fields.operationSortInfo )
                {
                  SortKindText = ListViewSort__GetOtherUserPriorityKindText(
                                   this->fields.operationSortInfo,
                                   priorityKindList->fields._items->m_Items[v67 + 1],
                                   0LL);
                  if ( v70 )
                  {
                    UILabel__set_text(v70, SortKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v67;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_59;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v47);
            SortKindText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( SortKindText )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortKindText, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v71);
              this->fields.state = 1;
              v72 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(v72, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_B5D69C(SortKindText, v47);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v58 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v58 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v58->static_fields->friendMemberListSortInfo;
      }
      else
      {
        if ( modeKind != 2 )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          goto LABEL_32;
        }
        v55 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v55 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v55->static_fields->friendRequestListSortInfo;
      }
    }
    else
    {
      v57 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v57 = OtherUserSortDialog_TypeInfo;
      }
      friendMemberListSortInfo = v57->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendMemberListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B5D560(&this->fields.baseSortInfo);
LABEL_32:
    SortKindText = (System_String_o *)*p_baseSortInfo;
    if ( !*p_baseSortInfo )
      goto LABEL_59;
    ListViewSort__Load((ListViewSort_o *)SortKindText, 0LL);
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
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
        v9 = sub_B5D6C8(this);
        sub_B5D668(v9, 0LL);
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
    sub_B5D69C(this, isEnable);
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
  int v2; // w2
  __int64 v3; // x3
  OtherUserSortDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v12; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6362 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (OtherUserSortDialog_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6362 = 1;
  }
  priorityButtons = v4->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( (int)v12 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v4->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v12 >= prioritySprites->max_length )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      operationSortInfo = v4->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v4->fields.priorityKindList;
        if ( priorityKindList )
        {
          v16 = &prioritySprites->obj.klass + v12;
          if ( priorityKindList->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( v16[4] )
          {
            v17 = (UISprite_o *)v16[4];
            v18 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v12 + 1]
                                     ? &StringLiteral_17165/*"btn_bg_03"*/
                                     : &StringLiteral_17166/*"btn_bg_04"*/);
            UISprite__set_spriteName(v17, *v18, 0LL);
            priorityButtons = v4->fields.priorityButtons;
            ++v12;
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
  int v2; // w2
  __int64 v3; // x3
  OtherUserSortDialog_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UICommonButton_array *sortButtons; // x8
  __int64 v12; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v16; // x8
  UISprite_o *v17; // x0
  System_String_o **v18; // x8
  __int64 v19; // x0

  v4 = this;
  if ( (byte_42E6361 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17166/*"btn_bg_04"*/, v5, v6, v7);
    this = (OtherUserSortDialog_o *)sub_B5D5C4(&StringLiteral_17165/*"btn_bg_03"*/, v8, v9, v10);
    byte_42E6361 = 1;
  }
  sortButtons = v4->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B5D69C(this, method);
  v12 = 0LL;
  while ( (int)v12 < (signed int)sortButtons->max_length )
  {
    sortSprites = v4->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v12 >= sortSprites->max_length )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      operationSortInfo = v4->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v4->fields.sortKindList;
        if ( sortKindList )
        {
          v16 = &sortSprites->obj.klass + v12;
          if ( sortKindList->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( v16[4] )
          {
            v17 = (UISprite_o *)v16[4];
            v18 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v12 + 1]
                                     ? &StringLiteral_17165/*"btn_bg_03"*/
                                     : &StringLiteral_17166/*"btn_bg_04"*/);
            UISprite__set_spriteName(v17, *v18, 0LL);
            sortButtons = v4->fields.sortButtons;
            ++v12;
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
  __int64 v3; // x3
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  OtherUserSortDialog_o *v12; // x0
  OtherUserSortDialog_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E635D & 1) == 0 )
  {
    sub_B5D5C4(&OtherUserSortDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E635D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v9->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (OtherUserSortDialog_o *)sub_B5D990(v9);
  OtherUserSortDialog__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6370 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E6370 = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
}


void __fastcall OtherUserSortDialog__remove_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  OtherUserSortDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E635E & 1) == 0 )
  {
    sub_B5D5C4(&OtherUserSortDialog_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E635E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v9->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (OtherUserSortDialog_o *)sub_B5D990(v9);
  OtherUserSortDialog__Awake(v12, v13);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5A6D & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A6D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc__Invoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  OtherUserSortDialog_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  OtherUserSortDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (OtherUserSortDialog_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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