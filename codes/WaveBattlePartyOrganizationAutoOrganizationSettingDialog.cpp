void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WaveBattlePartyOrganizationAutoOrganizationSettingDialog_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AF94E & 1) == 0 )
  {
    sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42AF94E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17074/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17074/*"btn_bg_03"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17075/*"btn_bg_04"*/;
  v9->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17075/*"btn_bg_04"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->DISABLE_BUTTON_SPRITE, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
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
  ListViewSort_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42AF94D & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
    byte_42AF94D = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    0,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKind,
    (System_Int32_array **)v3,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor(v12, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.autoOrganizationSortInfo,
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_24382364(this, 0LL, v2);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Close_24382364(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42AF942 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_42AF942 = 1;
  }
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndClose__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


int32_t __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
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
    sub_B52920((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
        const MethodInfo *method)
{
  System_String_array *v1; // x19
  System_String_o *v2; // x0
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x20
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_42AF94B & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_B52984(&StringLiteral_1796/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_42AF94B = 1;
  }
  v1 = (System_String_array *)sub_B5299C(string___TypeInfo, 2LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  v10 = (System_Int32_array **)v2;
  if ( v2 )
  {
    v2 = (System_String_o *)sub_B52A44(v2, v1->obj.klass->_1.element_class);
    if ( !v2 )
      goto LABEL_15;
  }
  if ( !v1->max_length )
    goto LABEL_14;
  v1->m_Items[0] = (System_String_o *)v10;
  sub_B52920((BattleServantConfConponent_o *)v1->m_Items, v10, v4, v5, v6, v7, v8, v9);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1796/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL);
  v17 = (System_Int32_array **)v2;
  if ( v2 )
  {
    v2 = (System_String_o *)sub_B52A44(v2, v1->obj.klass->_1.element_class);
    if ( !v2 )
    {
LABEL_15:
      v20 = sub_B52A7C(v2);
      sub_B52A28(v20, 0LL);
    }
  }
  if ( v1->max_length <= 1 )
  {
LABEL_14:
    v19 = sub_B52A88(v2);
    sub_B52A28(v19, 0LL);
  }
  v1->m_Items[1] = (System_String_o *)v17;
  sub_B52920((BattleServantConfConponent_o *)&v1->m_Items[1], v17, v11, v12, v13, v14, v15, v16);
  return v1;
}


System_Boolean_array *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v7; // x21
  unsigned __int64 v8; // x23
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *v9; // x25
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42AF949 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Count__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    byte_42AF949 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5299C(bool___TypeInfo, (unsigned int)size);
  v7 = (System_Boolean_array *)this;
  if ( size >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = v4->fields.categoryFilterKind;
      if ( !v9 )
        break;
      if ( v8 >= (unsigned int)v9->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !sort )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34021532(
                                                                             sort,
                                                                             v9->fields._items->m_Items[v8 + 1],
                                                                             0LL);
      if ( !v7 )
        break;
      if ( v8 >= v7->max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v7->m_Items[v8++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v8 >= size )
        return v7;
    }
LABEL_14:
    sub_B52A5C(this, sort);
  }
  return v7;
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

  if ( (byte_42AF946 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_42AF946 = 1;
  }
  if ( this->fields.state == 2 )
  {
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
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
  const MethodInfo *v5; // x1
  struct ListViewSort_o *operationSortInfo; // x0
  unsigned int v7; // w20

  if ( (byte_42AF947 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_42AF947 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
LABEL_10:
      sub_B52A5C(operationSortInfo, v5);
    v7 = 0;
    while ( v7 < 7 )
    {
      ListViewSort__SetFilter_34022420(operationSortInfo, v7, 0, 0LL);
      operationSortInfo = this->fields.operationSortInfo;
      ++v7;
      if ( !operationSortInfo )
        goto LABEL_10;
    }
    operationSortInfo->fields.autoOrganizationMode = 0;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_42AF945 & 1) == 0 )
  {
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    byte_42AF945 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_12;
    this = *(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_12;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_12;
    operationSortInfo->fields.scrollBarValue = value;
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_B52968(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
LABEL_12:
      sub_B52A5C(this, method);
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v9);
  }
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  unsigned int v6; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42AF948 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_42AF948 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B52A5C(0LL, v5);
      ListViewSort__SetFilter_34022420(operationSortInfo, ++v6, 1, 0LL);
    }
    while ( v6 < 6 );
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
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


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42AF944 & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_42AF944 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(0LL, v7);
    ListViewSort__SwitchFilter_34023508(operationSortInfo, kind, 0LL);
    WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v18; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v20; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ListViewSort_o *v29; // x21
  ListViewSort_o *v30; // x22
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *initializeLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *kindTitleLabel; // x21
  UILabel_o *rarityTitleLabel; // x21
  UILabel_o *kindServantLabel; // x21
  UILabel_o *kindServantEquipLabel; // x21
  UILabel_o *rarity1Label; // x21
  UILabel_o *rarity2Label; // x21
  UILabel_o *rarity3Label; // x21
  UILabel_o *rarity4Label; // x21
  UILabel_o *rarity5Label; // x21
  UILabel_o *organizationModeLabel; // x21
  UILabel_o *organizationModeDetail; // x21
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v55; // x0
  struct GameOptionRadioButtonGroup_o *v56; // x21
  System_Action_int__o *v57; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Object_o *scrollView; // x21
  struct UIScrollView_o *v65; // x9
  const MethodInfo *v66; // x2
  System_Action_o *v67; // x20

  if ( (byte_42AF941 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_B52984(&StringLiteral_12032/*"SERVANT_SORT_RESET"*/);
    sub_B52984(&StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_B52984(&StringLiteral_1793/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_B52984(&StringLiteral_11967/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_B52984(&StringLiteral_11801/*"SERVANT_EQUIP_TAKE"*/);
    sub_B52984(&StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/);
    sub_B52984(&StringLiteral_1792/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_B52984(&StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/);
    sub_B52984(&StringLiteral_11966/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_B52984(&StringLiteral_1794/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_B52984(&StringLiteral_11965/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_B52984(&StringLiteral_11963/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_B52984(&StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_B52984(&StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/);
    sub_B52984(&StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_B52984(&StringLiteral_12143/*"SERVANT_TAKE"*/);
    sub_B52984(&StringLiteral_11964/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_42AF941 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
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
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_46;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v18);
    this->fields.oldSettingStatus = SettingState;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = this->fields.baseSortInfo;
    v30 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
    ListViewSort___ctor_33999772(v30, v29, 0LL);
    this->fields.operationSortInfo = v30;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1792/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1793/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    kindServantLabel = this->fields.kindServantLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12143/*"SERVANT_TAKE"*/,
                                                       0LL);
                    if ( kindServantLabel )
                    {
                      UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                      kindServantEquipLabel = this->fields.kindServantEquipLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_11801/*"SERVANT_EQUIP_TAKE"*/,
                                                         0LL);
                      if ( kindServantEquipLabel )
                      {
                        UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                        rarity1Label = this->fields.rarity1Label;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_11963/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                           0LL);
                        if ( rarity1Label )
                        {
                          UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                          rarity2Label = this->fields.rarity2Label;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11967/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                             0LL);
                          if ( rarity2Label )
                          {
                            UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                            rarity3Label = this->fields.rarity3Label;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11964/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                               0LL);
                            if ( rarity3Label )
                            {
                              UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                              rarity4Label = this->fields.rarity4Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11965/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                 0LL);
                              if ( rarity4Label )
                              {
                                UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity5Label = this->fields.rarity5Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11966/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                   0LL);
                                if ( rarity5Label )
                                {
                                  UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                  organizationModeLabel = this->fields.organizationModeLabel;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_1794/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                     0LL);
                                  if ( organizationModeLabel )
                                  {
                                    UILabel__set_text(organizationModeLabel, (System_String_o *)baseSortInfo, 0LL);
                                    organizationModeDetail = this->fields.organizationModeDetail;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                       0LL);
                                    if ( organizationModeDetail )
                                    {
                                      UILabel__set_text(organizationModeDetail, (System_String_o *)baseSortInfo, 0LL);
                                      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                      if ( baseSortInfo )
                                      {
                                        GameOptionRadioButtonGroup__Init(
                                          (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                          0LL);
                                        organizationModeGroup = this->fields.organizationModeGroup;
                                        v55 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                        if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                        }
                                        baseSortInfo = (ListViewSort_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v55);
                                        if ( organizationModeGroup )
                                        {
                                          GameOptionRadioButtonGroup__SetLabels(
                                            organizationModeGroup,
                                            (System_String_array *)baseSortInfo,
                                            0LL);
                                          v56 = this->fields.organizationModeGroup;
                                          v57 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v57,
                                            (Il2CppObject *)this,
                                            (intptr_t)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__,
                                            (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
                                          if ( v56 )
                                          {
                                            v56->fields.selectedCallback = v57;
                                            sub_B52920(
                                              (BattleServantConfConponent_o *)&v56->fields.selectedCallback,
                                              (System_Int32_array **)v57,
                                              v58,
                                              v59,
                                              v60,
                                              v61,
                                              v62,
                                              v63);
                                            baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
                                            if ( baseSortInfo )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)baseSortInfo,
                                                1,
                                                0LL);
                                              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              }
                                              if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                goto LABEL_45;
                                              baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                                              if ( baseSortInfo )
                                              {
                                                ((void (__fastcall *)(ListViewSort_o *, __int64, Il2CppClass *))baseSortInfo->klass[1]._1.castClass)(
                                                  baseSortInfo,
                                                  1LL,
                                                  baseSortInfo->klass[1]._1.declaringType);
                                                baseSortInfo = (ListViewSort_o *)this->fields.scrollView;
                                                if ( baseSortInfo )
                                                {
                                                  UIScrollView__ResetPosition((UIScrollView_o *)baseSortInfo, 0LL);
                                                  v65 = this->fields.scrollView;
                                                  if ( v65 )
                                                  {
                                                    if ( *p_baseSortInfo )
                                                    {
                                                      baseSortInfo = *(ListViewSort_o **)&v65->fields.showScrollBars;
                                                      if ( baseSortInfo )
                                                      {
                                                        UIProgressBar__set_value(
                                                          (UIProgressBar_o *)baseSortInfo,
                                                          (*p_baseSortInfo)->fields.scrollBarValue,
                                                          0LL);
LABEL_45:
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v20);
                                                        WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v66);
                                                        this->fields.state = 1;
                                                        v67 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                                        System_Action___ctor(
                                                          v67,
                                                          (Il2CppObject *)this,
                                                          Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0LL);
                                                        BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
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
            }
          }
        }
      }
    }
LABEL_46:
    sub_B52A5C(baseSortInfo, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *decideButton; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42AF943 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_42AF943 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.cancelButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.clearButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = this->fields.initializeButton;
  if ( !decideButton )
    goto LABEL_18;
  UICommonButton__SetButtonEnableWithCollider(decideButton, isEnable, 0LL);
  decideButton = (UICommonButton_o *)this->fields.buttonList;
  if ( !decideButton )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current )
      sub_B52A5C(v6, v7);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v12.fields.current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B52A5C(0LL, v10);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_B52A5C(decideButton, isEnable);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v5; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v8; // x20
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_c *v9; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_42AF94A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_WaveBattleAutoOrganizationCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_42AF94A = 1;
  }
  buttonList = v2->fields.buttonList;
  if ( !buttonList )
    goto LABEL_30;
  size = buttonList->fields._size;
  if ( size > 0 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      spriteList = v2->fields.spriteList;
      if ( !spriteList )
        break;
      if ( spriteList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      categoryFilterKind = v2->fields.categoryFilterKind;
      if ( !categoryFilterKind )
        break;
      v8 = spriteList->fields._items->m_Items[v5];
      if ( categoryFilterKind->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v2->fields.operationSortInfo )
        break;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34021532(
                                                                             v2->fields.operationSortInfo,
                                                                             categoryFilterKind->fields._items->m_Items[v5 + 1],
                                                                             0LL);
      v9 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v9 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v9->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v8 )
          break;
      }
      else
      {
        if ( (WORD1(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v9 = WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v9->static_fields->DISABLE_BUTTON_SPRITE;
        if ( !v8 )
          break;
      }
      UISprite__set_spriteName(v8, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( (int)++v5 >= size )
        goto LABEL_24;
    }
LABEL_30:
    sub_B52A5C(this, method);
  }
LABEL_24:
  operationSortInfo = v2->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_30;
  organizationModeGroup = v2->fields.organizationModeGroup;
  autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !organizationModeGroup )
    goto LABEL_30;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog___Open_b__42_0(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct ListViewSort_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_42AF94F & 1) == 0 )
  {
    sub_B52984(&Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
    this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_42AF94F = 1;
  }
  if ( v4->fields.state != 2 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      organizationModeGroup = v4->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
      }
      if ( organizationModeGroup )
      {
        GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
        return;
      }
    }
LABEL_17:
    sub_B52A5C(this, *(_QWORD *)&selectedIndex);
  }
  v5 = v4->fields.operationSortInfo;
  this = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattlePartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_17;
  v5->fields.autoOrganizationMode = selectedIndex == 1;
  v6 = Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__;
  if ( (*((_BYTE *)Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5298C(Method_WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Open_b__42_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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

  if ( (byte_42AF93F & 1) == 0 )
  {
    sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_42AF93F = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52D50(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AF94C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42AF94C = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
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

  if ( (byte_42AF940 & 1) == 0 )
  {
    sub_B52984(&WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_42AF940 = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52D50(v7);
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


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
  if ( (byte_42AD77D & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD77D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (WaveBattlePartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}