void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3D05 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42B3D05 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17074/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17074/*"btn_bg_03"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17075/*"btn_bg_04"*/;
  v9->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17075/*"btn_bg_04"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->DISABLE_BUTTON_SPRITE, v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42B3D04 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
    byte_42B3D04 = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    0,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    7,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    8,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    9,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    10,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    11,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    12,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v3;
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Awake(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Callback(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_32299448(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_32299448(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42B3CF7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__);
    byte_42B3CF7 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__ConvertAutoOrganizationModeToViewIndex(
        int32_t mode,
        const MethodInfo *method)
{
  return mode == 1;
}


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__ConvertViewIndexToAutoOrganizationMode(
        int32_t index,
        const MethodInfo *method)
{
  return index == 1;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndClose(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels(
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

  if ( (byte_42B3D02 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1797/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/);
    sub_B52984(&StringLiteral_1796/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/);
    byte_42B3D02 = 1;
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


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v7; // x21
  unsigned __int64 v8; // x23
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *v9; // x25
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42B3D00 & 1) == 0 )
  {
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    byte_42B3D00 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B5299C(bool___TypeInfo, (unsigned int)size);
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
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34021472(
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


int32_t __fastcall PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w19
  ListViewSort_o *operationSortInfo; // x0

  v3 = 6;
  while ( 1 )
  {
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(0LL, method);
    if ( ListViewSort__GetFilter_34021472(operationSortInfo, v3 + 6, 0LL) )
      break;
    if ( --v3 <= 0 )
      return 0;
  }
  return v3;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Init(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickCancel(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42B3CFD & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    byte_42B3CFD = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickClear(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  unsigned int v6; // w20
  ListViewSort_o *operationSortInfo; // x0
  struct ListViewSort_o *v8; // x8

  if ( (byte_42B3CFE & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    byte_42B3CFE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_34022356(operationSortInfo, ++v6, 0, 0LL);
    }
    while ( v6 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
        goto LABEL_17;
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    if ( !this->fields.preQuest )
    {
LABEL_15:
      PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
      return;
    }
    v8 = this->fields.operationSortInfo;
    if ( v8 )
    {
      v8->fields.autoOrganizationMode = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B52A5C(operationSortInfo, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v5; // x2
  float value; // s0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct System_Int32_array *eventIdList; // x21
  __int64 v10; // x8
  System_String_o *v11; // x20
  unsigned __int64 v12; // x22
  int v13; // w26
  Il2CppObject *v14; // x0
  ListViewSort_o *v15; // x20
  const MethodInfo *v16; // x2
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_42B3CFC & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    sub_B52984(&StringLiteral_2230/*"AutoOrganizationBonusFilterEventId"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3CFC = 1;
  }
  if ( v2->fields.state == 2 )
  {
    scrollView = v2->fields.scrollView;
    if ( !scrollView )
      goto LABEL_26;
    this = *(PartyOrganizationAutoOrganizationSettingDialog_o **)&scrollView->fields.showScrollBars;
    if ( !this )
      goto LABEL_26;
    operationSortInfo = v2->fields.operationSortInfo;
    value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v5);
    v2->fields.state = 3;
    v7 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v8 = (System_Reflection_MethodBase_o *)sub_B52968(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      v10 = *(_QWORD *)&eventIdList->max_length;
      v11 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v10 >= 1 )
      {
        v12 = 0LL;
        while ( 1 )
        {
          if ( v12 >= (unsigned int)v10 )
          {
            v17 = sub_B52A88(this);
            sub_B52A28(v17, 0LL);
          }
          if ( !v11 )
            break;
          v13 = eventIdList->m_Items[v12 + 1];
          if ( v11->fields.m_stringLength >= 1 )
            v11 = System_String__Concat_44568316(v11, (System_String_o *)StringLiteral_709/*","*/, 0LL);
          v18 = v13;
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v11,
                                                                       v14,
                                                                       0LL);
          LODWORD(v10) = eventIdList->max_length;
          ++v12;
          v11 = (System_String_o *)this;
          if ( (__int64)v12 >= (int)v10 )
            goto LABEL_17;
        }
LABEL_26:
        sub_B52A5C(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2230/*"AutoOrganizationBonusFilterEventId"*/, v11, 0LL);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v15 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v15 )
        goto LABEL_26;
      ListViewSort__SetFilter(v15, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v16);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  unsigned int v6; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42B3CFF & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    byte_42B3CFF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_34022356(operationSortInfo, ++v6, 1, 0LL);
    }
    while ( v6 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_B52A5C(operationSortInfo, v5);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v5);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServant(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 0, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickKindServantEquip(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 1, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 2, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 3, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 4, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 5, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickRarity5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(this, 6, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42B3CF9 & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    byte_42B3CF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(0LL, v7);
    ListViewSort__SwitchFilter_34023440(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t unit,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  unsigned int v8; // w21
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42B3CFB & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    byte_42B3CFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_B52968(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B52A5C(0LL, v7);
      ListViewSort__SetFilter_34022356(operationSortInfo, v8 + 8, (int)(v8 + 1) < unit, 0LL);
      ++v8;
    }
    while ( v8 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  unsigned int v7; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_42B3CFA & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    byte_42B3CFA = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v7 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B52A5C(0LL, v6);
      ListViewSort__SetFilter_34022356(operationSortInfo, v7 + 8, 0, 0LL);
      ++v7;
    }
    while ( v7 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v6);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit2(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 2 )
    v4 = 2;
  else
    v4 = 1;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit3(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 3 )
    v4 = 3;
  else
    v4 = 2;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit4(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 4 )
    v4 = 4;
  else
    v4 = 3;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit5(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 5 )
    v4 = 5;
  else
    v4 = 4;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit6(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t v4; // w1

  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 6 )
    v4 = 6;
  else
    v4 = 5;
  PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, v4, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Open(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        int32_t eventId,
        bool preQuest,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v21; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ListViewSort_o *v30; // x22
  ListViewSort_o *v31; // x23
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *titleLabel; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *clearLabel; // x22
  UILabel_o *cancelLabel; // x22
  UILabel_o *initializeLabel; // x22
  UILabel_o *explanationLabel; // x22
  UILabel_o *kindTitleLabel; // x22
  UILabel_o *rarityTitleLabel; // x22
  UILabel_o *unitTitleLabel; // x22
  UILabel_o *eventEquipTitleLabel; // x22
  UILabel_o *eventEquipExplanationLabel; // x22
  UILabel_o *kindServantLabel; // x22
  UILabel_o *kindServantEquipLabel; // x22
  UILabel_o *rarity1Label; // x22
  UILabel_o *rarity2Label; // x22
  UILabel_o *rarity3Label; // x22
  UILabel_o *rarity4Label; // x22
  UILabel_o *rarity5Label; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **unit1Label; // x23
  ListViewSort_o *v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **unit2Label; // x23
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **unit3Label; // x23
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **unit4Label; // x23
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **unit5Label; // x23
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **unit6Label; // x23
  __int64 v99; // x8
  __int64 v100; // x26
  UILabel_o *v101; // x23
  System_String_o *v102; // x24
  Il2CppObject *v103; // x0
  UILabel_o *unitExplanationLabel; // x22
  UILabel_o *organizationModeLabel; // x22
  UILabel_o *organizationModeDetail; // x22
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v108; // x0
  struct GameOptionRadioButtonGroup_o *v109; // x21
  System_Action_int__o *v110; // x22
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  bool v117; // w1
  int32_t isServantEquipBonusFilterEnable; // w8
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v120; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v128; // x21
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v130; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *eventBonusObject; // x21
  UnityEngine_Object_o *scrollView; // x21
  struct UIScrollView_o *v134; // x9
  const MethodInfo *v135; // x2
  System_Action_o *v136; // x20
  __int64 v137; // x0
  __int64 v138; // x0
  struct ListViewSort_o **p_baseSortInfo; // [xsp+0h] [xbp-90h]
  UnityEngine_Bounds_o v140; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v141; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o min; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B3CF6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventBonusFilterMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__);
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    sub_B52984(&UILabel___TypeInfo);
    sub_B52984(&StringLiteral_12032/*"SERVANT_SORT_RESET"*/);
    sub_B52984(&StringLiteral_1790/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/);
    sub_B52984(&StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/);
    sub_B52984(&StringLiteral_1801/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/);
    sub_B52984(&StringLiteral_1793/*"AUTO_ORGANIZATION_SETTING_KIND"*/);
    sub_B52984(&StringLiteral_11967/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/);
    sub_B52984(&StringLiteral_11801/*"SERVANT_EQUIP_TAKE"*/);
    sub_B52984(&StringLiteral_11883/*"SERVANT_SORT_CANCEL"*/);
    sub_B52984(&StringLiteral_1791/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/);
    sub_B52984(&StringLiteral_1792/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/);
    sub_B52984(&StringLiteral_11887/*"SERVANT_SORT_DECIDE"*/);
    sub_B52984(&StringLiteral_11966/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/);
    sub_B52984(&StringLiteral_1794/*"AUTO_ORGANIZATION_SETTING_MODE"*/);
    sub_B52984(&StringLiteral_12144/*"SERVANT_UNIT"*/);
    sub_B52984(&StringLiteral_11965/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/);
    sub_B52984(&StringLiteral_11963/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/);
    sub_B52984(&StringLiteral_1798/*"AUTO_ORGANIZATION_SETTING_RARITY"*/);
    sub_B52984(&StringLiteral_11884/*"SERVANT_SORT_CLEAR"*/);
    sub_B52984(&StringLiteral_1799/*"AUTO_ORGANIZATION_SETTING_TITLE"*/);
    sub_B52984(&StringLiteral_12143/*"SERVANT_TAKE"*/);
    sub_B52984(&StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_UNIT"*/);
    sub_B52984(&StringLiteral_11964/*"SERVANT_SORT_FILTER_RARITY_RARE"*/);
    byte_42B3CF6 = 1;
  }
  memset(&v141, 0, sizeof(v141));
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&eventId,
      (System_String_array **)preQuest,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.eventId = eventId;
    this->fields.preQuest = preQuest;
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_115;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v19);
    this->fields.oldSettingStatus = SettingState;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = this->fields.baseSortInfo;
    v31 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
    ListViewSort___ctor_33999772(v31, v30, 0LL);
    this->fields.operationSortInfo = v31;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
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
                    unitTitleLabel = this->fields.unitTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_1800/*"AUTO_ORGANIZATION_SETTING_UNIT"*/,
                                                       0LL);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_1790/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/,
                                                         0LL);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1791/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/,
                                                           0LL);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
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
                                        baseSortInfo = (ListViewSort_o *)sub_B5299C(UILabel___TypeInfo, 6LL);
                                        if ( baseSortInfo )
                                        {
                                          unit1Label = (System_Int32_array **)this->fields.unit1Label;
                                          v63 = baseSortInfo;
                                          if ( unit1Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit1Label,
                                                                               baseSortInfo->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( !*(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE )
                                            goto LABEL_116;
                                          v63->fields.manager = (struct ListViewManager_o *)unit1Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.manager,
                                            unit1Label,
                                            v56,
                                            v57,
                                            v58,
                                            v59,
                                            v60,
                                            v61);
                                          unit2Label = (System_Int32_array **)this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit2Label,
                                                                               v63->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE <= 1u )
                                            goto LABEL_116;
                                          v63->fields.saveKey = (struct System_String_o *)unit2Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.saveKey,
                                            unit2Label,
                                            v64,
                                            v65,
                                            v66,
                                            v67,
                                            v68,
                                            v69);
                                          unit3Label = (System_Int32_array **)this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit3Label,
                                                                               v63->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE <= 2u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v63->fields.defaultSortKind = unit3Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.defaultSortKind,
                                            unit3Label,
                                            v71,
                                            v72,
                                            v73,
                                            v74,
                                            v75,
                                            v76);
                                          unit4Label = (System_Int32_array **)this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit4Label,
                                                                               v63->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE <= 3u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v63->fields.sortKind = unit4Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.sortKind,
                                            unit4Label,
                                            v78,
                                            v79,
                                            v80,
                                            v81,
                                            v82,
                                            v83);
                                          unit5Label = (System_Int32_array **)this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit5Label,
                                                                               v63->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE <= 4u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v63->fields.bonusKind = unit5Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.bonusKind,
                                            unit5Label,
                                            v85,
                                            v86,
                                            v87,
                                            v88,
                                            v89,
                                            v90);
                                          unit6Label = (System_Int32_array **)this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B52A44(
                                                                               this->fields.unit6Label,
                                                                               v63->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                            {
LABEL_117:
                                              v138 = sub_B52A7C(baseSortInfo);
                                              sub_B52A28(v138, 0LL);
                                            }
                                          }
                                          if ( *(_DWORD *)&v63->fields.FILTER_DEFAULT_VALUE <= 5u )
                                          {
LABEL_116:
                                            v137 = sub_B52A88(baseSortInfo);
                                            sub_B52A28(v137, 0LL);
                                          }
                                          *(_QWORD *)&v63->fields.bonusKind2 = unit6Label;
                                          sub_B52920(
                                            (BattleServantConfConponent_o *)&v63->fields.bonusKind2,
                                            unit6Label,
                                            v92,
                                            v93,
                                            v94,
                                            v95,
                                            v96,
                                            v97);
                                          v99 = *(_QWORD *)&v63->fields.FILTER_DEFAULT_VALUE;
                                          if ( (int)v99 >= 1 )
                                          {
                                            v100 = 0LL;
                                            while ( (unsigned int)v100 < (unsigned int)v99 )
                                            {
                                              v101 = (UILabel_o *)*((_QWORD *)&v63->fields.manager + v100);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v102 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12144/*"SERVANT_UNIT"*/,
                                                       0LL);
                                              LODWORD(v140.fields.m_Center.fields.x) = v100 + 1;
                                              v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
                                              baseSortInfo = (ListViewSort_o *)System_String__Format(v102, v103, 0LL);
                                              if ( !v101 )
                                                goto LABEL_115;
                                              UILabel__set_text(v101, (System_String_o *)baseSortInfo, 0LL);
                                              v99 = *(_QWORD *)&v63->fields.FILTER_DEFAULT_VALUE;
                                              if ( (int)++v100 >= (int)v99 )
                                                goto LABEL_56;
                                            }
                                            goto LABEL_116;
                                          }
LABEL_56:
                                          unitExplanationLabel = this->fields.unitExplanationLabel;
                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                          }
                                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1801/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/,
                                                                             0LL);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              unitExplanationLabel,
                                              (System_String_o *)baseSortInfo,
                                              0LL);
                                            organizationModeLabel = this->fields.organizationModeLabel;
                                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1794/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                               0LL);
                                            if ( organizationModeLabel )
                                            {
                                              UILabel__set_text(
                                                organizationModeLabel,
                                                (System_String_o *)baseSortInfo,
                                                0LL);
                                              organizationModeDetail = this->fields.organizationModeDetail;
                                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_1795/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
                                                                                 0LL);
                                              if ( organizationModeDetail )
                                              {
                                                UILabel__set_text(
                                                  organizationModeDetail,
                                                  (System_String_o *)baseSortInfo,
                                                  0LL);
                                                baseSortInfo = (ListViewSort_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                                                if ( baseSortInfo )
                                                {
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    1,
                                                    0LL);
                                                  if ( preQuest )
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeGroup;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__Init(
                                                      (GameOptionRadioButtonGroup_o *)baseSortInfo,
                                                      0LL);
                                                    organizationModeGroup = this->fields.organizationModeGroup;
                                                    v108 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                                    if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v108);
                                                    if ( !organizationModeGroup )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__SetLabels(
                                                      organizationModeGroup,
                                                      (System_String_array *)baseSortInfo,
                                                      0LL);
                                                    v109 = this->fields.organizationModeGroup;
                                                    v110 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
                                                    System_Action_int____ctor(
                                                      v110,
                                                      (Il2CppObject *)this,
                                                      (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
                                                      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
                                                    if ( !v109 )
                                                      goto LABEL_115;
                                                    v109->fields.selectedCallback = v110;
                                                    sub_B52920(
                                                      (BattleServantConfConponent_o *)&v109->fields.selectedCallback,
                                                      (System_Int32_array **)v110,
                                                      v111,
                                                      v112,
                                                      v113,
                                                      v114,
                                                      v115,
                                                      v116);
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v117 = 1;
                                                  }
                                                  else
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v117 = 0;
                                                  }
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    v117,
                                                    0LL);
                                                  isServantEquipBonusFilterEnable = this->fields.eventId;
                                                  this->fields.isServantEquipBonusFilterEnable = 0;
                                                  if ( isServantEquipBonusFilterEnable )
                                                  {
                                                    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !DataManager_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL);
                                                    v120 = System_Linq_Enumerable__ToArray_int_(
                                                             EventValUpEventIdHash,
                                                             (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
                                                    this->fields.eventIdList = v120;
                                                    sub_B52920(
                                                      (BattleServantConfConponent_o *)&this->fields.eventIdList,
                                                      (System_Int32_array **)v120,
                                                      v121,
                                                      v122,
                                                      v123,
                                                      v124,
                                                      v125,
                                                      v126);
                                                    eventIdList = this->fields.eventIdList;
                                                    if ( eventIdList
                                                      && (int)eventIdList->max_length >= 1
                                                      && System_Linq_Enumerable__Contains_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                           this->fields.eventId,
                                                           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___) )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)sub_B5299C(int___TypeInfo, 1LL);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      v128 = (System_Int32_array *)baseSortInfo;
                                                      if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
                                                        goto LABEL_116;
                                                      LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
                                                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !DataManager_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                      }
                                                      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      FilterList = EventBonusFilterMaster__GetFilterList(
                                                                     (EventBonusFilterMaster_o *)baseSortInfo,
                                                                     v128,
                                                                     1,
                                                                     0LL);
                                                      if ( FilterList && FilterList->fields._size >= 1 )
                                                      {
                                                        baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                        this->fields.isServantEquipBonusFilterEnable = 1;
                                                        if ( !baseSortInfo )
                                                          goto LABEL_115;
                                                        AutoOrganizationServantBonusFilterEquipComponent__CreateList(
                                                          (AutoOrganizationServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                          v128,
                                                          0LL);
                                                        baseSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
                                                        if ( !baseSortInfo )
                                                          goto LABEL_115;
                                                        ServantBonusFilterEquipComponent__SetInitButtonSelect(
                                                          (ServantBonusFilterEquipComponent_o *)baseSortInfo,
                                                          0LL);
                                                      }
                                                    }
                                                    isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
                                                  }
                                                  baseSortInfo = (ListViewSort_o *)this->fields.eventBonusObject;
                                                  if ( !baseSortInfo )
                                                    goto LABEL_115;
                                                  if ( isServantEquipBonusFilterEnable )
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      1,
                                                      0LL);
                                                    if ( this->fields.preQuest )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                    }
                                                    else
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)this->fields.unitFilterObject;
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)UnityEngine_GameObject__get_transform(
                                                                                       (UnityEngine_GameObject_o *)baseSortInfo,
                                                                                       0LL);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v130 = (UnityEngine_Transform_o *)baseSortInfo;
                                                    parent = UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)baseSortInfo,
                                                               0LL);
                                                    NGUIMath__CalculateRelativeWidgetBounds_46035588(
                                                      &v140,
                                                      parent,
                                                      v130,
                                                      0LL);
                                                    v141 = v140;
                                                    eventBonusObject = this->fields.eventBonusObject;
                                                    min = UnityEngine_Bounds__get_min(&v141, 0LL);
                                                    GameObjectExtensions__SetLocalPositionY(
                                                      eventBonusObject,
                                                      min.fields.y,
                                                      0LL);
                                                  }
                                                  else
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)baseSortInfo,
                                                      0,
                                                      0LL);
                                                  }
                                                  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                                  }
                                                  if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                    goto LABEL_113;
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
                                                      v134 = this->fields.scrollView;
                                                      if ( v134 )
                                                      {
                                                        if ( *p_baseSortInfo )
                                                        {
                                                          baseSortInfo = *(ListViewSort_o **)&v134->fields.showScrollBars;
                                                          if ( baseSortInfo )
                                                          {
                                                            UIProgressBar__set_value(
                                                              (UIProgressBar_o *)baseSortInfo,
                                                              (*p_baseSortInfo)->fields.scrollBarValue,
                                                              0LL);
LABEL_113:
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                              this,
                                                              v21);
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                              this,
                                                              1,
                                                              v135);
                                                            this->fields.state = 1;
                                                            v136 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                                            System_Action___ctor(
                                                              v136,
                                                              (Il2CppObject *)this,
                                                              Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                              0LL);
                                                            BaseDialog__Open((BaseDialog_o *)this, v136, 0, 0LL);
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
      }
    }
LABEL_115:
    sub_B52A5C(baseSortInfo, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_42B3CF8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
    byte_42B3CF8 = 1;
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v5; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v8; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v9; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_42B3D01 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UICommonButton__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_42B3D01 = 1;
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
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_34021472(
                                                                   v2->fields.operationSortInfo,
                                                                   categoryFilterKind->fields._items->m_Items[v5 + 1],
                                                                   0LL);
      v9 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v9 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v9->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v8 )
          break;
      }
      else
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v9 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
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
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !organizationModeGroup )
    goto LABEL_30;
  GameOptionRadioButtonGroup__SelectButtonByIndex(organizationModeGroup, autoOrganizationMode == 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog___Open_b__60_0(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t selectedIndex,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  struct ListViewSort_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_42B3D06 & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
    byte_42B3D06 = 1;
  }
  if ( v4->fields.state != 2 )
  {
    operationSortInfo = v4->fields.operationSortInfo;
    if ( operationSortInfo )
    {
      organizationModeGroup = v4->fields.organizationModeGroup;
      autoOrganizationMode = operationSortInfo->fields.autoOrganizationMode;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
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
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !v5 )
    goto LABEL_17;
  v5->fields.autoOrganizationMode = selectedIndex == 1;
  v6 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5298C(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__add_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42B3CF4 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_42B3CF4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3D03 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42B3D03 = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyOrganizationAutoOrganizationSettingDialog_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_42B3CF5 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo);
    byte_42B3CF5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_c *)v7->klass != PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__BeginInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AD407 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD407 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v8; // x25
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v20; // x8
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v4 + 32);
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