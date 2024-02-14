void __fastcall PartyOrganizationAutoOrganizationSettingDialog___cctor(const MethodInfo *method)
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
  struct PartyOrganizationAutoOrganizationSettingDialog_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_421824C & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17008/*"btn_bg_04"*/, v8);
    sub_B0D8A4(&StringLiteral_17007/*"btn_bg_03"*/, v9);
    byte_421824C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17007/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17007/*"btn_bg_03"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17008/*"btn_bg_04"*/;
  v12->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_17008/*"btn_bg_04"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->DISABLE_BUTTON_SPRITE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  ListViewSort_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_421824B & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    sub_B0D8A4(&ListViewSort_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo, v7);
    byte_421824B = 1;
  }
  v8 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v8,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v8 )
    sub_B0D97C(v9);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    0,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    1,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    4,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    5,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    6,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    7,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    8,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    9,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    10,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    11,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v8,
    12,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKind,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v16, v17);
  ListViewSort___ctor(v18, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.autoOrganizationSortInfo,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
    sub_B0D840(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_31394356(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_31394356(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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
  System_Action_o *v14; // x20

  if ( (byte_421823E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_421823E = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *v5; // x19
  System_String_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x20
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_4218249 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v1);
    sub_B0D8A4(&string___TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_1784/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v3);
    sub_B0D8A4(&StringLiteral_1783/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v4);
    byte_4218249 = 1;
  }
  v5 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 2LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1784/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v13 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_15;
  }
  if ( !v5->max_length )
    goto LABEL_14;
  v5->m_Items[0] = (System_String_o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)v5->m_Items, v13, v7, v8, v9, v10, v11, v12);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1783/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL);
  v20 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B0D964(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_15:
      v23 = sub_B0D99C(v6);
      sub_B0D948(v23, 0LL);
    }
  }
  if ( v5->max_length <= 1 )
  {
LABEL_14:
    v22 = sub_B0D9A8(v6);
    sub_B0D948(v22, 0LL);
  }
  v5->m_Items[1] = (System_String_o *)v20;
  sub_B0D840((BattleServantConfConponent_o *)&v5->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  return v5;
}


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x23
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *v11; // x25
  __int64 v13; // x0

  v4 = this;
  if ( (byte_4218247 & 1) == 0 )
  {
    sub_B0D8A4(&bool___TypeInfo, sort);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__, v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B0D8A4(
                                                                 &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
                                                                 v6);
    byte_4218247 = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B0D8BC(bool___TypeInfo, (unsigned int)size);
  v9 = (System_Boolean_array *)this;
  if ( size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v4->fields.categoryFilterKind;
      if ( !v11 )
        break;
      if ( v10 >= (unsigned int)v11->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_32845628(
                                                                   sort,
                                                                   v11->fields._items->m_Items[v10 + 1],
                                                                   0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
        v13 = sub_B0D9A8(this);
        sub_B0D948(v13, 0LL);
      }
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v10 >= size )
        return v9;
    }
LABEL_14:
    sub_B0D97C(this);
  }
  return v9;
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
      sub_B0D97C(0LL);
    if ( ListViewSort__GetFilter_32845628(operationSortInfo, v3 + 6, 0LL) )
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

  if ( (byte_4218244 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_4218244 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
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
  unsigned int v5; // w20
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *v8; // x8

  if ( (byte_4218245 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_4218245 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_32846512(operationSortInfo, ++v5, 0, 0LL);
    }
    while ( v5 < 0xC );
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
      PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
      return;
    }
    v8 = this->fields.operationSortInfo;
    if ( v8 )
    {
      v8->fields.autoOrganizationMode = 0;
      goto LABEL_15;
    }
LABEL_17:
    sub_B0D97C(operationSortInfo);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIScrollView_o *scrollView; // x8
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v9; // x2
  float value; // s0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Int32_array *eventIdList; // x21
  __int64 v14; // x8
  System_String_o *v15; // x20
  unsigned __int64 v16; // x22
  int v17; // w26
  Il2CppObject *v18; // x0
  ListViewSort_o *v19; // x20
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  int v22; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4218243 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v3);
    sub_B0D8A4(&StringLiteral_2216/*"AutoOrganizationBonusFilterEventId"*/, v4);
    sub_B0D8A4(&StringLiteral_705/*","*/, v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4218243 = 1;
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
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(v2, 0, v9);
    v2->fields.state = 3;
    v11 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_B0D888(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    eventIdList = v2->fields.eventIdList;
    if ( eventIdList )
    {
      v14 = *(_QWORD *)&eventIdList->max_length;
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      if ( (int)v14 >= 1 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          if ( v16 >= (unsigned int)v14 )
          {
            v21 = sub_B0D9A8(this);
            sub_B0D948(v21, 0LL);
          }
          if ( !v15 )
            break;
          v17 = eventIdList->m_Items[v16 + 1];
          if ( v15->fields.m_stringLength >= 1 )
            v15 = System_String__Concat_43849904(v15, (System_String_o *)StringLiteral_705/*","*/, 0LL);
          v22 = v17;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
          this = (PartyOrganizationAutoOrganizationSettingDialog_o *)System_String__Concat(
                                                                       (Il2CppObject *)v15,
                                                                       v18,
                                                                       0LL);
          LODWORD(v14) = eventIdList->max_length;
          ++v16;
          v15 = (System_String_o *)this;
          if ( (__int64)v16 >= (int)v14 )
            goto LABEL_17;
        }
LABEL_26:
        sub_B0D97C(this);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2216/*"AutoOrganizationBonusFilterEventId"*/, v15, 0LL);
    }
    if ( v2->fields.isServantEquipBonusFilterEnable )
    {
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      v19 = v2->fields.operationSortInfo;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                                                   (ServantBonusFilterEquipComponent_o *)this,
                                                                   0LL);
      if ( !v19 )
        goto LABEL_26;
      ListViewSort__SetFilter(v19, 41, ((unsigned __int8)this & 1) == 0, 0LL);
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.servantBonusFilterEquipComponent;
      if ( !this )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave((ServantBonusFilterEquipComponent_o *)this, 0LL);
    }
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)v2->fields.baseSortInfo;
    if ( !this )
      goto LABEL_26;
    ListViewSort__Set((ListViewSort_o *)this, v2->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(v2, 1, v20);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickInitialize(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  unsigned int v5; // w20
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4218246 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_4218246 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_32846512(operationSortInfo, ++v5, 1, 0LL);
    }
    while ( v5 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_B0D97C(operationSortInfo);
      ServantBonusFilterEquipComponent__ResetIndividualFilter(
        (ServantBonusFilterEquipComponent_o *)operationSortInfo,
        0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickSetting(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4218240 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_4218240 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B0D97C(0LL);
    ListViewSort__SwitchFilter_32847672(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        int32_t unit,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  unsigned int v7; // w21
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4218242 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, *(_QWORD *)&unit);
    byte_4218242 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B0D97C(0LL);
      ListViewSort__SetFilter_32846512(operationSortInfo, v7 + 8, (int)(v7 + 1) < unit, 0LL);
      ++v7;
    }
    while ( v7 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit1(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  unsigned int v6; // w20
  ListViewSort_o *operationSortInfo; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4218241 & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, method);
    byte_4218241 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B0D97C(0LL);
      ListViewSort__SetFilter_32846512(operationSortInfo, v6 + 8, 0, 0LL);
      ++v6;
    }
    while ( v6 < 5 );
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v8);
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ListViewSort_o *v68; // x22
  __int64 v69; // x1
  __int64 v70; // x2
  ListViewSort_o *v71; // x23
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
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
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **unit1Label; // x23
  ListViewSort_o *v103; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **unit2Label; // x23
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **unit3Label; // x23
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **unit4Label; // x23
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **unit5Label; // x23
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **unit6Label; // x23
  __int64 v139; // x8
  __int64 v140; // x26
  UILabel_o *v141; // x23
  System_String_o *v142; // x24
  Il2CppObject *v143; // x0
  UILabel_o *unitExplanationLabel; // x22
  UILabel_o *organizationModeLabel; // x22
  UILabel_o *organizationModeDetail; // x22
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v148; // x0
  struct GameOptionRadioButtonGroup_o *v149; // x21
  __int64 v150; // x1
  __int64 v151; // x2
  System_Action_int__o *v152; // x22
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  bool v159; // w1
  int32_t isServantEquipBonusFilterEnable; // w8
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  struct System_Int32_array *v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v170; // x21
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v172; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *eventBonusObject; // x21
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v176; // x1
  struct UIScrollView_o *v177; // x9
  const MethodInfo *v178; // x2
  __int64 v179; // x1
  __int64 v180; // x2
  System_Action_o *v181; // x20
  __int64 v182; // x0
  __int64 v183; // x0
  struct ListViewSort_o **p_baseSortInfo; // [xsp+0h] [xbp-90h]
  UnityEngine_Bounds_o v185; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v186; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o min; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421823D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, sort);
    sub_B0D8A4(&System_Action_int__TypeInfo, v13);
    sub_B0D8A4(&System_Action_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&ListViewSort_TypeInfo, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v23);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v24);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v25);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v26);
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, v27);
    sub_B0D8A4(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v28);
    sub_B0D8A4(&UILabel___TypeInfo, v29);
    sub_B0D8A4(&StringLiteral_11977/*"SERVANT_SORT_RESET"*/, v30);
    sub_B0D8A4(&StringLiteral_1777/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, v31);
    sub_B0D8A4(&StringLiteral_1782/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v32);
    sub_B0D8A4(&StringLiteral_1788/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, v33);
    sub_B0D8A4(&StringLiteral_1780/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v34);
    sub_B0D8A4(&StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v35);
    sub_B0D8A4(&StringLiteral_11744/*"SERVANT_EQUIP_TAKE"*/, v36);
    sub_B0D8A4(&StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/, v37);
    sub_B0D8A4(&StringLiteral_1778/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, v38);
    sub_B0D8A4(&StringLiteral_1779/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v39);
    sub_B0D8A4(&StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/, v40);
    sub_B0D8A4(&StringLiteral_11911/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v41);
    sub_B0D8A4(&StringLiteral_1781/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v42);
    sub_B0D8A4(&StringLiteral_12093/*"SERVANT_UNIT"*/, v43);
    sub_B0D8A4(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v44);
    sub_B0D8A4(&StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v45);
    sub_B0D8A4(&StringLiteral_1785/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v46);
    sub_B0D8A4(&StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/, v47);
    sub_B0D8A4(&StringLiteral_1786/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v48);
    sub_B0D8A4(&StringLiteral_12092/*"SERVANT_TAKE"*/, v49);
    sub_B0D8A4(&StringLiteral_1787/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, v50);
    sub_B0D8A4(&StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v51);
    byte_421823D = 1;
  }
  memset(&v186, 0, sizeof(v186));
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B0D840(
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_115;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v58);
    this->fields.oldSettingStatus = SettingState;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields.baseSortInfo;
    v71 = (ListViewSort_o *)sub_B0D974(ListViewSort_TypeInfo, v69, v70);
    ListViewSort___ctor_32823928(v71, v68, 0LL);
    this->fields.operationSortInfo = v71;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1786/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11829/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11828/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11977/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1779/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1780/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1785/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    unitTitleLabel = this->fields.unitTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_1787/*"AUTO_ORGANIZATION_SETTING_UNIT"*/,
                                                       0LL);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_1777/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/,
                                                         0LL);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1778/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/,
                                                           0LL);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                          kindServantLabel = this->fields.kindServantLabel;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12092/*"SERVANT_TAKE"*/,
                                                             0LL);
                          if ( kindServantLabel )
                          {
                            UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                            kindServantEquipLabel = this->fields.kindServantEquipLabel;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11744/*"SERVANT_EQUIP_TAKE"*/,
                                                               0LL);
                            if ( kindServantEquipLabel )
                            {
                              UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                              rarity1Label = this->fields.rarity1Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11908/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                                 0LL);
                              if ( rarity1Label )
                              {
                                UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity2Label = this->fields.rarity2Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11912/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                                   0LL);
                                if ( rarity2Label )
                                {
                                  UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                                  rarity3Label = this->fields.rarity3Label;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11909/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                                     0LL);
                                  if ( rarity3Label )
                                  {
                                    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                                    rarity4Label = this->fields.rarity4Label;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                       0LL);
                                    if ( rarity4Label )
                                    {
                                      UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                      rarity5Label = this->fields.rarity5Label;
                                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11911/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                         0LL);
                                      if ( rarity5Label )
                                      {
                                        UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                        baseSortInfo = (ListViewSort_o *)sub_B0D8BC(UILabel___TypeInfo, 6LL);
                                        if ( baseSortInfo )
                                        {
                                          unit1Label = (System_Int32_array **)this->fields.unit1Label;
                                          v103 = baseSortInfo;
                                          if ( unit1Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit1Label,
                                                                               baseSortInfo->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( !*(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE )
                                            goto LABEL_116;
                                          v103->fields.manager = (struct ListViewManager_o *)unit1Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.manager,
                                            unit1Label,
                                            v96,
                                            v97,
                                            v98,
                                            v99,
                                            v100,
                                            v101);
                                          unit2Label = (System_Int32_array **)this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit2Label,
                                                                               v103->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE <= 1u )
                                            goto LABEL_116;
                                          v103->fields.saveKey = (struct System_String_o *)unit2Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.saveKey,
                                            unit2Label,
                                            v104,
                                            v105,
                                            v106,
                                            v107,
                                            v108,
                                            v109);
                                          unit3Label = (System_Int32_array **)this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit3Label,
                                                                               v103->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE <= 2u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v103->fields.defaultSortKind = unit3Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.defaultSortKind,
                                            unit3Label,
                                            v111,
                                            v112,
                                            v113,
                                            v114,
                                            v115,
                                            v116);
                                          unit4Label = (System_Int32_array **)this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit4Label,
                                                                               v103->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE <= 3u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v103->fields.sortKind = unit4Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.sortKind,
                                            unit4Label,
                                            v118,
                                            v119,
                                            v120,
                                            v121,
                                            v122,
                                            v123);
                                          unit5Label = (System_Int32_array **)this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit5Label,
                                                                               v103->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE <= 4u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v103->fields.bonusKind = unit5Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.bonusKind,
                                            unit5Label,
                                            v125,
                                            v126,
                                            v127,
                                            v128,
                                            v129,
                                            v130);
                                          unit6Label = (System_Int32_array **)this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B0D964(
                                                                               this->fields.unit6Label,
                                                                               v103->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                            {
LABEL_117:
                                              v183 = sub_B0D99C(baseSortInfo);
                                              sub_B0D948(v183, 0LL);
                                            }
                                          }
                                          if ( *(_DWORD *)&v103->fields.FILTER_DEFAULT_VALUE <= 5u )
                                          {
LABEL_116:
                                            v182 = sub_B0D9A8(baseSortInfo);
                                            sub_B0D948(v182, 0LL);
                                          }
                                          *(_QWORD *)&v103->fields.bonusKind2 = unit6Label;
                                          sub_B0D840(
                                            (BattleServantConfConponent_o *)&v103->fields.bonusKind2,
                                            unit6Label,
                                            v132,
                                            v133,
                                            v134,
                                            v135,
                                            v136,
                                            v137);
                                          v139 = *(_QWORD *)&v103->fields.FILTER_DEFAULT_VALUE;
                                          if ( (int)v139 >= 1 )
                                          {
                                            v140 = 0LL;
                                            while ( (unsigned int)v140 < (unsigned int)v139 )
                                            {
                                              v141 = (UILabel_o *)*((_QWORD *)&v103->fields.manager + v140);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v142 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12093/*"SERVANT_UNIT"*/,
                                                       0LL);
                                              LODWORD(v185.fields.m_Center.fields.x) = v140 + 1;
                                              v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185);
                                              baseSortInfo = (ListViewSort_o *)System_String__Format(v142, v143, 0LL);
                                              if ( !v141 )
                                                goto LABEL_115;
                                              UILabel__set_text(v141, (System_String_o *)baseSortInfo, 0LL);
                                              v139 = *(_QWORD *)&v103->fields.FILTER_DEFAULT_VALUE;
                                              if ( (int)++v140 >= (int)v139 )
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
                                                                             (System_String_o *)StringLiteral_1788/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/,
                                                                             0LL);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              unitExplanationLabel,
                                              (System_String_o *)baseSortInfo,
                                              0LL);
                                            organizationModeLabel = this->fields.organizationModeLabel;
                                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1781/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                               0LL);
                                            if ( organizationModeLabel )
                                            {
                                              UILabel__set_text(
                                                organizationModeLabel,
                                                (System_String_o *)baseSortInfo,
                                                0LL);
                                              organizationModeDetail = this->fields.organizationModeDetail;
                                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_1782/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
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
                                                    v148 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                                    if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v148);
                                                    if ( !organizationModeGroup )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__SetLabels(
                                                      organizationModeGroup,
                                                      (System_String_array *)baseSortInfo,
                                                      0LL);
                                                    v149 = this->fields.organizationModeGroup;
                                                    v152 = (System_Action_int__o *)sub_B0D974(
                                                                                     System_Action_int__TypeInfo,
                                                                                     v150,
                                                                                     v151);
                                                    System_Action_int____ctor(
                                                      v152,
                                                      (Il2CppObject *)this,
                                                      (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
                                                      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
                                                    if ( !v149 )
                                                      goto LABEL_115;
                                                    v149->fields.selectedCallback = v152;
                                                    sub_B0D840(
                                                      (BattleServantConfConponent_o *)&v149->fields.selectedCallback,
                                                      (System_Int32_array **)v152,
                                                      v153,
                                                      v154,
                                                      v155,
                                                      v156,
                                                      v157,
                                                      v158);
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v159 = 1;
                                                  }
                                                  else
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v159 = 0;
                                                  }
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    v159,
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
                                                    baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash((EventMaster_o *)baseSortInfo, 0, 0LL);
                                                    v162 = System_Linq_Enumerable__ToArray_int_(
                                                             EventValUpEventIdHash,
                                                             (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
                                                    this->fields.eventIdList = v162;
                                                    sub_B0D840(
                                                      (BattleServantConfConponent_o *)&this->fields.eventIdList,
                                                      (System_Int32_array **)v162,
                                                      v163,
                                                      v164,
                                                      v165,
                                                      v166,
                                                      v167,
                                                      v168);
                                                    eventIdList = this->fields.eventIdList;
                                                    if ( eventIdList
                                                      && (int)eventIdList->max_length >= 1
                                                      && System_Linq_Enumerable__Contains_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                           this->fields.eventId,
                                                           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)sub_B0D8BC(int___TypeInfo, 1LL);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      v170 = (System_Int32_array *)baseSortInfo;
                                                      if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
                                                        goto LABEL_116;
                                                      LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
                                                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !DataManager_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                      }
                                                      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      FilterList = EventBonusFilterMaster__GetFilterList(
                                                                     (EventBonusFilterMaster_o *)baseSortInfo,
                                                                     v170,
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
                                                          v170,
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
                                                    v172 = (UnityEngine_Transform_o *)baseSortInfo;
                                                    parent = UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)baseSortInfo,
                                                               0LL);
                                                    NGUIMath__CalculateRelativeWidgetBounds_45553184(
                                                      &v185,
                                                      parent,
                                                      v172,
                                                      0LL);
                                                    v186 = v185;
                                                    eventBonusObject = this->fields.eventBonusObject;
                                                    min = UnityEngine_Bounds__get_min(&v186, 0LL);
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
                                                      v177 = this->fields.scrollView;
                                                      if ( v177 )
                                                      {
                                                        if ( *p_baseSortInfo )
                                                        {
                                                          baseSortInfo = *(ListViewSort_o **)&v177->fields.showScrollBars;
                                                          if ( baseSortInfo )
                                                          {
                                                            UIProgressBar__set_value(
                                                              (UIProgressBar_o *)baseSortInfo,
                                                              (*p_baseSortInfo)->fields.scrollBarValue,
                                                              0LL);
LABEL_113:
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                              this,
                                                              v176);
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                              this,
                                                              1,
                                                              v178);
                                                            this->fields.state = 1;
                                                            v181 = (System_Action_o *)sub_B0D974(
                                                                                        System_Action_TypeInfo,
                                                                                        v179,
                                                                                        v180);
                                                            System_Action___ctor(
                                                              v181,
                                                              (Il2CppObject *)this,
                                                              Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                              0LL);
                                                            BaseDialog__Open((BaseDialog_o *)this, v181, 0, 0LL);
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
    sub_B0D97C(baseSortInfo);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UICommonButton_o *decideButton; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_421823F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_421823F = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v9 )
      break;
    current = v13.fields.current;
    if ( !v13.fields.current )
      sub_B0D97C(v9);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v13.fields.current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B0D97C(0LL);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_B0D97C(decideButton);
  GameOptionRadioButtonGroup__SetButtonEnableWithCollider((GameOptionRadioButtonGroup_o *)decideButton, isEnable, 0LL);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationSettingDialog_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v8; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v11; // x20
  PartyOrganizationAutoOrganizationSettingDialog_c *v12; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v2 = this;
  if ( (byte_4218248 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B0D8A4(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_4218248 = 1;
  }
  buttonList = v2->fields.buttonList;
  if ( !buttonList )
    goto LABEL_30;
  size = buttonList->fields._size;
  if ( size > 0 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      spriteList = v2->fields.spriteList;
      if ( !spriteList )
        break;
      if ( spriteList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      categoryFilterKind = v2->fields.categoryFilterKind;
      if ( !categoryFilterKind )
        break;
      v11 = spriteList->fields._items->m_Items[v8];
      if ( categoryFilterKind->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v2->fields.operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_32845628(
                                                                   v2->fields.operationSortInfo,
                                                                   categoryFilterKind->fields._items->m_Items[v8 + 1],
                                                                   0LL);
      v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v12->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v11 )
          break;
      }
      else
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v12->static_fields->DISABLE_BUTTON_SPRITE;
        if ( !v11 )
          break;
      }
      UISprite__set_spriteName(v11, *p_ENABLE_BUTTON_SPRITE, 0LL);
      if ( (int)++v8 >= size )
        goto LABEL_24;
    }
LABEL_30:
    sub_B0D97C(this);
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
  __int64 v5; // x1
  struct ListViewSort_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct ListViewSort_o *operationSortInfo; // x8
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x19
  int32_t autoOrganizationMode; // w20

  v4 = this;
  if ( (byte_421824D & 1) == 0 )
  {
    sub_B0D8A4(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, *(_QWORD *)&selectedIndex);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B0D8A4(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_421824D = 1;
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
    sub_B0D97C(this);
  }
  v6 = v4->fields.operationSortInfo;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
  if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
  }
  if ( !v6 )
    goto LABEL_17;
  v6->fields.autoOrganizationMode = selectedIndex == 1;
  v7 = Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__;
  if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B0D8AC(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
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

  if ( (byte_421823B & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_421823B = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_421824A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_421824A = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
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

  if ( (byte_421823C & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_421823C = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B0DC70(v7);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4212172 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, result);
    byte_4212172 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v19; // x8
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v4 + 32);
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