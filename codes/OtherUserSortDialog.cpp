void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewSort_o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x19
  System_String_o *v19; // x20
  System_String_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  ListViewSort_o *v25; // x20
  struct OtherUserSortDialog_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x19
  System_String_o *v35; // x20
  System_String_o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  ListViewSort_o *v41; // x20
  struct OtherUserSortDialog_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F8006 & 1) == 0 )
  {
    sub_B16FFC(&FriendStatus_Kind_TypeInfo, v1);
    sub_B16FFC(&ListViewSort_TypeInfo, v5);
    sub_B16FFC(&OtherUserSortDialog_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_6707/*"FollowerSelect"*/, v7);
    sub_B16FFC(&StringLiteral_6778/*"FriendOperation"*/, v8);
    byte_40F8006 = 1;
  }
  v9 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v1, v2, v3, v4);
  ListViewSort___ctor_30208480(v9, (System_String_o *)StringLiteral_6707/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B16F98(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  v49 = 4;
  v17 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v49);
  if ( !v17 )
    goto LABEL_6;
  v18 = v17;
  v19 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 360LL))(
                             v17,
                             *(_QWORD *)(*(_QWORD *)v17 + 368LL));
  v49 = *(_DWORD *)j_il2cpp_object_unbox_0(v18);
  v20 = System_String__Concat_43743732((System_String_o *)StringLiteral_6778/*"FriendOperation"*/, v19, 0LL);
  v25 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v21, v22, v23, v24);
  ListViewSort___ctor_30208480(v25, v20, 3, 0, 0LL);
  v26 = OtherUserSortDialog_TypeInfo->static_fields;
  v26->friendMemberListSortInfo = v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->friendMemberListSortInfo,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v49 = 3;
  v33 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v49);
  if ( !v33 )
LABEL_6:
    sub_B170D4();
  v34 = v33;
  v35 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 360LL))(
                             v33,
                             *(_QWORD *)(*(_QWORD *)v33 + 368LL));
  v49 = *(_DWORD *)j_il2cpp_object_unbox_0(v34);
  v36 = System_String__Concat_43743732((System_String_o *)StringLiteral_6778/*"FriendOperation"*/, v35, 0LL);
  v41 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v37, v38, v39, v40);
  ListViewSort___ctor_30208480(v41, v36, 3, 0, 0LL);
  v42 = OtherUserSortDialog_TypeInfo->static_fields;
  v42->friendRequestListSortInfo = v41;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v42->friendRequestListSortInfo,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_40F8005 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v11);
    byte_40F8005 = 1;
  }
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v12 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    11,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sortKindList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo,
                                                                   v19,
                                                                   v20,
                                                                   v21,
                                                                   v22);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v23,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v23 )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    0,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v23,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.priorityKindList,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    OtherUserSortDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40F7FF4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_OtherUserSortDialog_EndClose__, v5);
    byte_40F7FF4 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_40F7FF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickCancel__, method);
    byte_40F7FF8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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

  if ( (byte_40F7FF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickDecide__, method);
    byte_40F7FF7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B170D4();
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
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F8001 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method);
    byte_40F8001 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F8003 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method);
    byte_40F8003 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F8000 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method);
    byte_40F8000 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFE & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method);
    byte_40F7FFE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFF & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method);
    byte_40F7FFF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFD & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityNone__, method);
    byte_40F7FFD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F8002 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method);
    byte_40F8002 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFC & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickSortAttack__, method);
    byte_40F7FFC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFB & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickSortHp__, method);
    byte_40F7FFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FFA & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickSortLevel__, method);
    byte_40F7FFA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_40F7FF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method);
    byte_40F7FF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v6);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  UILabel_o *sortTitleLabel; // x21
  System_String_o *v25; // x0
  UILabel_o *sortExplanationLabel; // x21
  System_String_o *v27; // x0
  UILabel_o *priorityTitleLabel; // x21
  System_String_o *v29; // x0
  UILabel_o *priorityExplanationLabel; // x21
  System_String_o *v31; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v33; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  ListViewSort_o **p_baseSortInfo; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v48; // x0
  struct ListViewSort_o *friendMemberListSortInfo; // x1
  OtherUserSortDialog_c *v50; // x0
  OtherUserSortDialog_c *v51; // x0
  ListViewSort_o *v52; // x20
  ListViewSort_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x0
  const MethodInfo *v61; // x1
  __int64 v62; // x2
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v64; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v67; // x20
  System_String_o *SortKindText; // x0
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v70; // x22
  int v71; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v73; // x20
  System_String_o *OtherUserPriorityKindText; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Action_o *v81; // x20

  if ( (byte_40F7FF3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ListViewSort_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_OtherUserSortDialog_EndOpen__, v16);
    sub_B16FFC(&OtherUserSortDialog_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_9815/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v18);
    sub_B16FFC(&StringLiteral_9813/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v19);
    sub_B16FFC(&StringLiteral_9810/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v20);
    sub_B16FFC(&StringLiteral_9812/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v21);
    sub_B16FFC(&StringLiteral_9811/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_9814/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v23);
    byte_40F7FF3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B16F98(
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9815/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_59;
    UILabel__set_text(sortTitleLabel, v25, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9814/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(sortExplanationLabel, v27, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9813/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_59;
    UILabel__set_text(priorityTitleLabel, v29, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9812/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(priorityExplanationLabel, v31, 0LL);
    decideLabel = this->fields.decideLabel;
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9811/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_59;
    UILabel__set_text(decideLabel, v33, 0LL);
    cancelLabel = this->fields.cancelLabel;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9810/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_59;
    UILabel__set_text(cancelLabel, v35, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
LABEL_34:
      v52 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v52->fields.sortKind;
        this->fields.openedPriorityKind = v52->fields.priorityKind;
        v53 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v43, v44, v45, v46);
        ListViewSort___ctor_30209040(v53, v52, 0LL);
        this->fields.operationSortInfo = v53;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
          (System_Int32_array **)v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v64 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v64 >= max_length )
              break;
            if ( (unsigned int)v64 >= max_length )
            {
LABEL_60:
              sub_B17100(v60, v61, v62);
              sub_B170A0();
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v67 = sortButtonLabels->m_Items[v64];
              if ( sortKindList->fields._size <= (unsigned int)v64 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              if ( this->fields.operationSortInfo )
              {
                SortKindText = ListViewSort__GetSortKindText(
                                 this->fields.operationSortInfo,
                                 sortKindList->fields._items->m_Items[v64 + 1],
                                 0LL);
                if ( v67 )
                {
                  UILabel__set_text(v67, SortKindText, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v64;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_59;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v61);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v70 = 0LL;
            while ( 1 )
            {
              v71 = priorityButtonLabels->max_length;
              if ( (int)v70 >= v71 )
                break;
              if ( (unsigned int)v70 >= v71 )
                goto LABEL_60;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v73 = priorityButtonLabels->m_Items[v70];
                if ( priorityKindList->fields._size <= (unsigned int)v70 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                if ( this->fields.operationSortInfo )
                {
                  OtherUserPriorityKindText = ListViewSort__GetOtherUserPriorityKindText(
                                                this->fields.operationSortInfo,
                                                priorityKindList->fields._items->m_Items[v70 + 1],
                                                0LL);
                  if ( v73 )
                  {
                    UILabel__set_text(v73, OtherUserPriorityKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v70;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_59;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v61);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v76);
              this->fields.state = 1;
              v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v77, v78, v79, v80);
              System_Action___ctor(v81, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_B170D4();
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v51 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v51 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v51->static_fields->friendMemberListSortInfo;
      }
      else
      {
        if ( modeKind != 2 )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          goto LABEL_32;
        }
        v48 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v48 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v48->static_fields->friendRequestListSortInfo;
      }
    }
    else
    {
      v50 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v50 = OtherUserSortDialog_TypeInfo;
      }
      friendMemberListSortInfo = v50->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendMemberListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
      (System_Int32_array **)friendMemberListSortInfo,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
LABEL_32:
    if ( !*p_baseSortInfo )
      goto LABEL_59;
    ListViewSort__Load(*p_baseSortInfo, 0LL);
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
  unsigned int v7; // w22
  UICommonButton_o *v8; // x0
  UICommonButton_o *decideButton; // x0
  bool v10; // w20
  UICommonButton_o *cancelButton; // x0

  sortButtons = this->fields.sortButtons;
  if ( !sortButtons )
    goto LABEL_10;
  max_length = sortButtons->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        sub_B17100(this, isEnable, method);
        sub_B170A0();
      }
      v8 = sortButtons->m_Items[v7];
      if ( !v8 )
        break;
      UICommonButton__SetButtonEnableWithCollider(v8, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_B170D4();
  }
LABEL_7:
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_10;
  v10 = isEnable;
  UICommonButton__SetButtonEnableWithCollider(decideButton, v10, 0LL);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider(cancelButton, v10, 0LL);
}


void __fastcall OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  OtherUserSortDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v7; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F7FF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (OtherUserSortDialog_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F7FF6 = 1;
  }
  priorityButtons = v3->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B170D4();
  v7 = 0LL;
  while ( (int)v7 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v3->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v7 >= prioritySprites->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v3->fields.priorityKindList;
        if ( priorityKindList )
        {
          v11 = &prioritySprites->obj.klass + v7;
          if ( priorityKindList->fields._size <= (unsigned int)v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( v11[4] )
          {
            v12 = (UISprite_o *)v11[4];
            v13 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v7 + 1]
                                     ? &StringLiteral_16890/*"btn_bg_03"*/
                                     : &StringLiteral_16891/*"btn_bg_04"*/);
            UISprite__set_spriteName(v12, *v13, 0LL);
            priorityButtons = v3->fields.priorityButtons;
            ++v7;
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
  __int64 v2; // x2
  OtherUserSortDialog_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UICommonButton_array *sortButtons; // x8
  __int64 v7; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v11; // x8
  UISprite_o *v12; // x0
  System_String_o **v13; // x8

  v3 = this;
  if ( (byte_40F7FF5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v4);
    this = (OtherUserSortDialog_o *)sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v5);
    byte_40F7FF5 = 1;
  }
  sortButtons = v3->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B170D4();
  v7 = 0LL;
  while ( (int)v7 < (signed int)sortButtons->max_length )
  {
    sortSprites = v3->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v7 >= sortSprites->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      operationSortInfo = v3->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v3->fields.sortKindList;
        if ( sortKindList )
        {
          v11 = &sortSprites->obj.klass + v7;
          if ( sortKindList->fields._size <= (unsigned int)v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( v11[4] )
          {
            v12 = (UISprite_o *)v11[4];
            v13 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v7 + 1]
                                     ? &StringLiteral_16890/*"btn_bg_03"*/
                                     : &StringLiteral_16891/*"btn_bg_04"*/);
            UISprite__set_spriteName(v12, *v13, 0LL);
            sortButtons = v3->fields.sortButtons;
            ++v7;
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

  if ( (byte_40F7FF1 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_40F7FF1 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B173C8(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8004 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40F8004 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
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

  if ( (byte_40F7FF2 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_40F7FF2 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B173C8(v8);
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
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F8364 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F8364 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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