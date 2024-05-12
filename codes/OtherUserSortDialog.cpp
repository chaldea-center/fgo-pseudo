void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_o *v13; // x20
  System_String_o *v14; // x19
  ListViewSort_o *v15; // x20
  struct OtherUserSortDialog_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x19
  System_String_o *v25; // x20
  System_String_o *v26; // x19
  ListViewSort_o *v27; // x20
  struct OtherUserSortDialog_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438A317 & 1) == 0 )
  {
    sub_B775C4(&FriendStatus_Kind_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&OtherUserSortDialog_TypeInfo);
    sub_B775C4(&StringLiteral_6880/*"FollowerSelect"*/);
    sub_B775C4(&StringLiteral_6957/*"FriendOperation"*/);
    byte_438A317 = 1;
  }
  v1 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v1, (System_String_o *)StringLiteral_6880/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v35 = 4;
  v10 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v35, v9);
  if ( !v10 )
    goto LABEL_6;
  v12 = v10;
  v13 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 360LL))(
                             v10,
                             *(_QWORD *)(*(_QWORD *)v10 + 368LL));
  v35 = *(_DWORD *)j_il2cpp_object_unbox_0(v12);
  v14 = System_String__Concat_44901936((System_String_o *)StringLiteral_6957/*"FriendOperation"*/, v13, 0LL);
  v15 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v15, v14, 3, 0, 0LL);
  v16 = OtherUserSortDialog_TypeInfo->static_fields;
  v16->friendMemberListSortInfo = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&v16->friendMemberListSortInfo,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v35 = 3;
  v10 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v35, v23);
  if ( !v10 )
LABEL_6:
    sub_B7769C(v10, v11);
  v24 = v10;
  v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 360LL))(
                             v10,
                             *(_QWORD *)(*(_QWORD *)v10 + 368LL));
  v35 = *(_DWORD *)j_il2cpp_object_unbox_0(v24);
  v26 = System_String__Concat_44901936((System_String_o *)StringLiteral_6957/*"FriendOperation"*/, v25, 0LL);
  v27 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
  ListViewSort___ctor_34308400(v27, v26, 3, 0, 0LL);
  v28 = OtherUserSortDialog_TypeInfo->static_fields;
  v28->friendRequestListSortInfo = v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&v28->friendRequestListSortInfo,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438A316 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
    byte_438A316 = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    11,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    5,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    6,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sortKindList,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v12 )
LABEL_9:
    sub_B7769C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    0,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    1,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    2,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    4,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    5,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    6,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.priorityKindList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  OtherUserSortDialog_CallbackFunc_o *v9; // x19
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    OtherUserSortDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *v11; // x20

  if ( (byte_438A305 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_OtherUserSortDialog_EndClose__);
    byte_438A305 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
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

  if ( (byte_438A309 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickCancel__);
    byte_438A309 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, v5);
    OtherUserSortDialog__Callback(this, 0, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v8; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v10; // w1

  if ( (byte_438A308 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickDecide__);
    byte_438A308 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B7769C(baseSortInfo, v6);
    }
    v10 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
       || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v10, v8);
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

  if ( (byte_438A312 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    byte_438A312 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A314 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    byte_438A314 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A311 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    byte_438A311 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30F & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    byte_438A30F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A310 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    byte_438A310 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30E & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityNone__);
    byte_438A30E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A313 & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    byte_438A313 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30D & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickSortAttack__);
    byte_438A30D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30C & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickSortHp__);
    byte_438A30C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30B & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickSortLevel__);
    byte_438A30B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
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

  if ( (byte_438A30A & 1) == 0 )
  {
    sub_B775C4(&Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    byte_438A30A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B7769C(v6, v7);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UILabel_o *sortTitleLabel; // x21
  System_String_o *SortKindText; // x0
  const MethodInfo *v14; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ListViewSort_o **p_baseSortInfo; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v28; // x0
  struct ListViewSort_o *friendRequestListSortInfo; // x1
  OtherUserSortDialog_c *v30; // x0
  ListViewSort_o *v31; // x20
  ListViewSort_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v40; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v43; // x20
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v45; // x22
  int v46; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v48; // x20
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x20
  __int64 v51; // x0

  if ( (byte_438A304 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_OtherUserSortDialog_EndOpen__);
    sub_B775C4(&OtherUserSortDialog_TypeInfo);
    sub_B775C4(&StringLiteral_10028/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/);
    sub_B775C4(&StringLiteral_10026/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/);
    sub_B775C4(&StringLiteral_10023/*"OTHER_USER_SORT_DIALOG_CANCEL"*/);
    sub_B775C4(&StringLiteral_10025/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/);
    sub_B775C4(&StringLiteral_10024/*"OTHER_USER_SORT_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_10027/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/);
    byte_438A304 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)sort,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10028/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_56;
    UILabel__set_text(sortTitleLabel, SortKindText, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10027/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_56;
    UILabel__set_text(sortExplanationLabel, SortKindText, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10026/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_56;
    UILabel__set_text(priorityTitleLabel, SortKindText, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10025/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_56;
    UILabel__set_text(priorityExplanationLabel, SortKindText, 0LL);
    decideLabel = this->fields.decideLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10024/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_56;
    UILabel__set_text(decideLabel, SortKindText, 0LL);
    cancelLabel = this->fields.cancelLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_10023/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_56;
    UILabel__set_text(cancelLabel, SortKindText, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
LABEL_31:
      v31 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v31->fields.sortKind;
        this->fields.openedPriorityKind = v31->fields.priorityKind;
        v32 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
        ListViewSort___ctor_34308964(v32, v31, 0LL);
        this->fields.operationSortInfo = v32;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
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
LABEL_57:
              v51 = sub_B776C8(SortKindText);
              sub_B77668(v51, 0LL);
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v43 = sortButtonLabels->m_Items[v40];
              if ( sortKindList->fields._size <= (unsigned int)v40 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
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
            goto LABEL_56;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v14);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v45 = 0LL;
            while ( 1 )
            {
              v46 = priorityButtonLabels->max_length;
              if ( (int)v45 >= v46 )
                break;
              if ( (unsigned int)v45 >= v46 )
                goto LABEL_57;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v48 = priorityButtonLabels->m_Items[v45];
                if ( priorityKindList->fields._size <= (unsigned int)v45 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
                if ( this->fields.operationSortInfo )
                {
                  SortKindText = ListViewSort__GetOtherUserPriorityKindText(
                                   this->fields.operationSortInfo,
                                   priorityKindList->fields._items->m_Items[v45 + 1],
                                   0LL);
                  if ( v48 )
                  {
                    UILabel__set_text(v48, SortKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v45;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_56;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v14);
            SortKindText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( SortKindText )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortKindText, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v49);
              this->fields.state = 1;
              v50 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
              System_Action___ctor(v50, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_56:
      sub_B7769C(SortKindText, v14);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
        JUMPOUT(0x169B11CLL);
      if ( modeKind != 2 )
      {
        p_baseSortInfo = &this->fields.baseSortInfo;
        goto LABEL_29;
      }
      v28 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v28 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v28->static_fields->friendRequestListSortInfo;
    }
    else
    {
      v30 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v30 = OtherUserSortDialog_TypeInfo;
      }
      friendRequestListSortInfo = v30->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendRequestListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)friendRequestListSortInfo,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
LABEL_29:
    SortKindText = (System_String_o *)*p_baseSortInfo;
    if ( !*p_baseSortInfo )
      goto LABEL_56;
    ListViewSort__Load((ListViewSort_o *)SortKindText, 0LL);
    goto LABEL_31;
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
        v9 = sub_B776C8(this);
        sub_B77668(v9, 0LL);
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
    sub_B7769C(this, isEnable);
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
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v4; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_438A307 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_B775C4(&StringLiteral_17296/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_B775C4(&StringLiteral_17295/*"btn_bg_03"*/);
    byte_438A307 = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v4 >= prioritySprites->max_length )
      {
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v2->fields.priorityKindList;
        if ( priorityKindList )
        {
          v8 = &prioritySprites->obj.klass + v4;
          if ( priorityKindList->fields._size <= (unsigned int)v4 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( v8[4] )
          {
            v9 = (UISprite_o *)v8[4];
            v10 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v4 + 1]
                                     ? &StringLiteral_17295/*"btn_bg_03"*/
                                     : &StringLiteral_17296/*"btn_bg_04"*/);
            UISprite__set_spriteName(v9, *v10, 0LL);
            priorityButtons = v2->fields.priorityButtons;
            ++v4;
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
  struct UICommonButton_array *sortButtons; // x8
  __int64 v4; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_438A306 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B775C4(&StringLiteral_17296/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_B775C4(&StringLiteral_17295/*"btn_bg_03"*/);
    byte_438A306 = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)sortButtons->max_length )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v4 >= sortSprites->max_length )
      {
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v2->fields.sortKindList;
        if ( sortKindList )
        {
          v8 = &sortSprites->obj.klass + v4;
          if ( sortKindList->fields._size <= (unsigned int)v4 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          if ( v8[4] )
          {
            v9 = (UISprite_o *)v8[4];
            v10 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v4 + 1]
                                     ? &StringLiteral_17295/*"btn_bg_03"*/
                                     : &StringLiteral_17296/*"btn_bg_04"*/);
            UISprite__set_spriteName(v9, *v10, 0LL);
            sortButtons = v2->fields.sortButtons;
            ++v4;
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

  if ( (byte_438A302 & 1) == 0 )
  {
    sub_B775C4(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_438A302 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B77990(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438A315 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15768/*"Window/CancelButton"*/);
    byte_438A315 = 1;
  }
  return (System_String_o *)StringLiteral_15768/*"Window/CancelButton"*/;
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

  if ( (byte_438A303 & 1) == 0 )
  {
    sub_B775C4(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_438A303 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B77990(v8);
  OtherUserSortDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_438A0A3 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0A3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  OtherUserSortDialog_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  OtherUserSortDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}