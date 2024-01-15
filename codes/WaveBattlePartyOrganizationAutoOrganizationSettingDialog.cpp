void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6747 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16891/*"btn_bg_04"*/, v8);
    sub_B16FFC(&StringLiteral_16890/*"btn_bg_03"*/, v9);
    byte_40F6747 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16890/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16890/*"btn_bg_03"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16891/*"btn_bg_04"*/;
  v12->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_16891/*"btn_bg_04"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->DISABLE_BUTTON_SPRITE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ListViewSort_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F6746 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&ListViewSort_TypeInfo, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__,
      v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__,
      v8);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo, v9);
    byte_40F6746 = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v10 )
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    0,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKind,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v17, v18, v19, v20);
  ListViewSort___ctor(v21, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.autoOrganizationSortInfo,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_18338832(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_18338832(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_40F673C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_40F673C = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
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
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndClose(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Boolean_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x23
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *v11; // x25
  _BOOL8 Filter_30230284; // x0
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_40F6743 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, sort);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
      v6);
    byte_40F6743 = 1;
  }
  categoryFilterKind = this->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  v9 = (System_Boolean_array *)sub_B17014(bool___TypeInfo, (unsigned int)size, method);
  if ( size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = this->fields.categoryFilterKind;
      if ( !v11 )
        break;
      if ( v10 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !sort )
        break;
      Filter_30230284 = ListViewSort__GetFilter_30230284(sort, v11->fields._items->m_Items[v10 + 1], 0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
        sub_B17100(Filter_30230284, v13, v14);
        sub_B170A0();
      }
      v9->m_Items[v10++ + 4] = Filter_30230284;
      if ( (__int64)v10 >= size )
        return v9;
    }
LABEL_14:
    sub_B170D4();
  }
  return v9;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Init(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40F6740 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_40F6740 = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  unsigned int v5; // w20
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F6741 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_40F6741 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B170D4();
      ListViewSort__SetFilter_30231164(operationSortInfo, ++v5, 0, 0LL);
    }
    while ( v5 < 6 );
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v4; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v6; // x2
  float value; // s0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v11; // x2

  if ( (byte_40F673F & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, method);
    byte_40F673F = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_12;
    v4 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
    if ( !v4 )
      goto LABEL_12;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v4, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v6);
    this->fields.state = 3;
    v8 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_B16FE0(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
LABEL_12:
      sub_B170D4();
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(this, 1, v11);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  unsigned int v5; // w20
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_40F6742 & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_40F6742 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B170D4();
      ListViewSort__SetFilter_30231164(operationSortInfo, ++v5, 1, 0LL);
    }
    while ( v5 < 6 );
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_40F673E & 1) == 0 )
  {
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_40F673E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    ListViewSort__SwitchFilter_30232320(operationSortInfo, kind, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v8);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v37; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  ListViewSort_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  ListViewSort_o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v60; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v62; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v64; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v66; // x0
  UILabel_o *initializeLabel; // x21
  System_String_o *v68; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v70; // x0
  UILabel_o *kindTitleLabel; // x21
  System_String_o *v72; // x0
  UILabel_o *rarityTitleLabel; // x21
  System_String_o *v74; // x0
  UILabel_o *kindServantLabel; // x21
  System_String_o *v76; // x0
  UILabel_o *kindServantEquipLabel; // x21
  System_String_o *v78; // x0
  UILabel_o *rarity1Label; // x21
  System_String_o *v80; // x0
  UILabel_o *rarity2Label; // x21
  System_String_o *v82; // x0
  UILabel_o *rarity3Label; // x21
  System_String_o *v84; // x0
  UILabel_o *rarity4Label; // x21
  System_String_o *v86; // x0
  UILabel_o *rarity5Label; // x21
  System_String_o *v88; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v91; // x1
  struct UIScrollView_o *v92; // x0
  UIScrollView_o *v93; // x0
  struct UIScrollView_o *v94; // x9
  UIProgressBar_o *v95; // x0
  const MethodInfo *v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  System_Action_o *v101; // x20

  if ( (byte_40F673B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, sort);
    sub_B16FFC(&ListViewSort_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v14);
    sub_B16FFC(&StringLiteral_11890/*"SERVANT_SORT_RESET"*/, v15);
    sub_B16FFC(&StringLiteral_1770/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v16);
    sub_B16FFC(&StringLiteral_11841/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v17);
    sub_B16FFC(&StringLiteral_11677/*"SERVANT_EQUIP_TAKE"*/, v18);
    sub_B16FFC(&StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, v19);
    sub_B16FFC(&StringLiteral_1769/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v20);
    sub_B16FFC(&StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, v21);
    sub_B16FFC(&StringLiteral_11840/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v22);
    sub_B16FFC(&StringLiteral_11839/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v23);
    sub_B16FFC(&StringLiteral_11837/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v24);
    sub_B16FFC(&StringLiteral_1771/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v25);
    sub_B16FFC(&StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, v26);
    sub_B16FFC(&StringLiteral_1772/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v27);
    sub_B16FFC(&StringLiteral_12003/*"SERVANT_TAKE"*/, v28);
    sub_B16FFC(&StringLiteral_11838/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v29);
    byte_40F673B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_38;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v37);
    this->fields.oldSettingStatus = SettingState;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v47 = this->fields.baseSortInfo;
    v52 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v48, v49, v50, v51);
    ListViewSort___ctor_30209040(v52, v47, 0LL);
    this->fields.operationSortInfo = v52;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v60, 0LL);
      decideLabel = this->fields.decideLabel;
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, v62, 0LL);
        clearLabel = this->fields.clearLabel;
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11760/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, v64, 0LL);
          cancelLabel = this->fields.cancelLabel;
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11759/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, v66, 0LL);
            initializeLabel = this->fields.initializeLabel;
            v68 = LocalizationManager__Get((System_String_o *)StringLiteral_11890/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, v68, 0LL);
              explanationLabel = this->fields.explanationLabel;
              v70 = LocalizationManager__Get((System_String_o *)StringLiteral_1769/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, v70, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                v72 = LocalizationManager__Get((System_String_o *)StringLiteral_1770/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, v72, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, v74, 0LL);
                    kindServantLabel = this->fields.kindServantLabel;
                    v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12003/*"SERVANT_TAKE"*/, 0LL);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, v76, 0LL);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11677/*"SERVANT_EQUIP_TAKE"*/, 0LL);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, v78, 0LL);
                        rarity1Label = this->fields.rarity1Label;
                        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, 0LL);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, v80, 0LL);
                          rarity2Label = this->fields.rarity2Label;
                          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, 0LL);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, v82, 0LL);
                            rarity3Label = this->fields.rarity3Label;
                            v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, 0LL);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, v84, 0LL);
                              rarity4Label = this->fields.rarity4Label;
                              v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, 0LL);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, v86, 0LL);
                                rarity5Label = this->fields.rarity5Label;
                                v88 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, 0LL);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, v88, 0LL);
                                  gameObject = UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
                                  if ( gameObject )
                                  {
                                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                    {
                                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                    }
                                    if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                      goto LABEL_37;
                                    v92 = this->fields.scrollView;
                                    if ( v92 )
                                    {
                                      ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v92->klass->vtable._8_UpdateScrollbars.method)(
                                        v92,
                                        1LL,
                                        v92->klass->vtable._9_SetDragAmount.methodPtr);
                                      v93 = this->fields.scrollView;
                                      if ( v93 )
                                      {
                                        UIScrollView__ResetPosition(v93, 0LL);
                                        v94 = this->fields.scrollView;
                                        if ( v94 )
                                        {
                                          if ( *p_baseSortInfo )
                                          {
                                            v95 = *(UIProgressBar_o **)&v94->fields.showScrollBars;
                                            if ( v95 )
                                            {
                                              UIProgressBar__set_value(
                                                v95,
                                                (*p_baseSortInfo)->fields.scrollBarValue,
                                                0LL);
LABEL_37:
                                              WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                this,
                                                v91);
                                              WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                this,
                                                1,
                                                v96);
                                              this->fields.state = 1;
                                              v101 = (System_Action_o *)sub_B170CC(
                                                                          System_Action_TypeInfo,
                                                                          v97,
                                                                          v98,
                                                                          v99,
                                                                          v100);
                                              System_Action___ctor(
                                                v101,
                                                (Il2CppObject *)this,
                                                Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                0LL);
                                              BaseDialog__Open((BaseDialog_o *)this, v101, 0, 0LL);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UICommonButton_o *decideButton; // x0
  UICommonButton_o *cancelButton; // x0
  UICommonButton_o *clearButton; // x0
  UICommonButton_o *initializeButton; // x0
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F673D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_40F673D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_17;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  cancelButton = this->fields.cancelButton;
  if ( !cancelButton
    || (UICommonButton__SetButtonEnableWithCollider(cancelButton, isEnable, 0LL),
        (clearButton = this->fields.clearButton) == 0LL)
    || (UICommonButton__SetButtonEnableWithCollider(clearButton, isEnable, 0LL),
        (initializeButton = this->fields.initializeButton) == 0LL)
    || (UICommonButton__SetButtonEnableWithCollider(initializeButton, isEnable, 0LL),
        (buttonList = this->fields.buttonList) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttonList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B170D4();
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v15.fields.current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v8; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v11; // x20
  bool Filter_30230284; // w0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v13; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8

  if ( (byte_40F6744 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__,
      v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v5);
    byte_40F6744 = 1;
  }
  buttonList = this->fields.buttonList;
  if ( !buttonList )
    goto LABEL_25;
  size = buttonList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      spriteList = this->fields.spriteList;
      if ( !spriteList )
        break;
      if ( spriteList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      categoryFilterKind = this->fields.categoryFilterKind;
      if ( !categoryFilterKind )
        break;
      v11 = spriteList->fields._items->m_Items[v8];
      if ( categoryFilterKind->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !this->fields.operationSortInfo )
        break;
      Filter_30230284 = ListViewSort__GetFilter_30230284(
                          this->fields.operationSortInfo,
                          categoryFilterKind->fields._items->m_Items[v8 + 1],
                          0LL);
      v13 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( Filter_30230284 )
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v13 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v13->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v11 )
          break;
      }
      else
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v13 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v13->static_fields->DISABLE_BUTTON_SPRITE;
        if ( !v11 )
          break;
      }
      UISprite__set_spriteName(v11, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( (int)++v8 >= size )
        return;
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40F6739 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_40F6739 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B173C8(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F6745 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414/*"Window/CancelButton"*/, method);
    byte_40F6745 = 1;
  }
  return (System_String_o *)StringLiteral_15414/*"Window/CancelButton"*/;
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40F673A & 1) == 0 )
  {
    sub_B16FFC(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_40F673A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B173C8(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F789A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F789A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v7; // x25
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v18; // x8
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
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v3 + 32);
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