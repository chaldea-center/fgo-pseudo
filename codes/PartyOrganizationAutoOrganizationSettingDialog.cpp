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

  if ( (byte_418B574 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v8);
    sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v9);
    byte_418B574 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16956/*"btn_bg_03"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16956/*"btn_bg_03"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16957/*"btn_bg_04"*/;
  v12->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_16957/*"btn_bg_04"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->DISABLE_BUTTON_SPRITE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ListViewSort_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_418B573 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&ListViewSort_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo, v6);
    byte_418B573 = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v7 )
    sub_B2C434(v8, v9);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    0,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    8,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    9,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    10,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    11,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    12,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.categoryFilterKind,
    (System_Int32_array **)v7,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor(v16, 3, 0, 0LL);
  this->fields.autoOrganizationSortInfo = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.autoOrganizationSortInfo,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_31956836(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_31956836(
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
  System_Action_o *v12; // x20

  if ( (byte_418B566 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_418B566 = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x20
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_418B571 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_1776/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, v3);
    sub_B2C35C(&StringLiteral_1775/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, v4);
    byte_418B571 = 1;
  }
  v5 = (System_String_array *)sub_B2C374(string___TypeInfo, 2LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1776/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_MAIN"*/, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v14 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
      goto LABEL_15;
  }
  if ( !v5->max_length )
    goto LABEL_14;
  v5->m_Items[0] = (System_String_o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)v5->m_Items, v14, v8, v9, v10, v11, v12, v13);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1775/*"AUTO_ORGANIZATION_SETTING_MODE_USE_ENEMY_CLASS_ALL"*/, 0LL);
  v21 = (System_Int32_array **)v6;
  if ( v6 )
  {
    v6 = (System_String_o *)sub_B2C41C(v6, v5->obj.klass->_1.element_class);
    if ( !v6 )
    {
LABEL_15:
      v24 = sub_B2C454(v6);
      sub_B2C400(v24, 0LL);
    }
  }
  if ( v5->max_length <= 1 )
  {
LABEL_14:
    v23 = sub_B2C460(v6);
    sub_B2C400(v23, 0LL);
  }
  v5->m_Items[1] = (System_String_o *)v21;
  sub_B2C2F8((BattleServantConfConponent_o *)&v5->m_Items[1], v21, v15, v16, v17, v18, v19, v20);
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
  if ( (byte_418B56F & 1) == 0 )
  {
    sub_B2C35C(&bool___TypeInfo, sort);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__, v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B2C35C(
                                                                 &Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__,
                                                                 v6);
    byte_418B56F = 1;
  }
  categoryFilterKind = v4->fields.categoryFilterKind;
  if ( !categoryFilterKind )
    goto LABEL_14;
  size = categoryFilterKind->fields._size;
  this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B2C374(bool___TypeInfo, (unsigned int)size);
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !sort )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_33936432(
                                                                   sort,
                                                                   v11->fields._items->m_Items[v10 + 1],
                                                                   0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      v9->m_Items[v10++ + 4] = (unsigned __int8)this & 1;
      if ( (__int64)v10 >= size )
        return v9;
    }
LABEL_14:
    sub_B2C434(this, sort);
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
      sub_B2C434(0LL, method);
    if ( ListViewSort__GetFilter_33936432(operationSortInfo, v3 + 6, 0LL) )
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

  if ( (byte_418B56C & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_418B56C = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
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

  if ( (byte_418B56D & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_418B56D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_17;
      ListViewSort__SetFilter_33937316(operationSortInfo, ++v6, 0, 0LL);
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
    sub_B2C434(operationSortInfo, v5);
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
  if ( (byte_418B56B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v3);
    sub_B2C35C(&StringLiteral_2206/*"AutoOrganizationBonusFilterEventId"*/, v4);
    sub_B2C35C(&StringLiteral_699/*","*/, v5);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418B56B = 1;
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
      v11 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_B2C340(v11, v11[3]);
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
            v21 = sub_B2C460(this);
            sub_B2C400(v21, 0LL);
          }
          if ( !v15 )
            break;
          v17 = eventIdList->m_Items[v16 + 1];
          if ( v15->fields.m_stringLength >= 1 )
            v15 = System_String__Concat_44305532(v15, (System_String_o *)StringLiteral_699/*","*/, 0LL);
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
        sub_B2C434(this, method);
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2206/*"AutoOrganizationBonusFilterEventId"*/, v15, 0LL);
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
  const MethodInfo *v5; // x1
  unsigned int v6; // w20
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_418B56E & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_418B56E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_33937316(operationSortInfo, ++v6, 1, 0LL);
    }
    while ( v6 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      operationSortInfo = (ListViewSort_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !operationSortInfo )
LABEL_14:
        sub_B2C434(operationSortInfo, v5);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418B568 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_418B568 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(0LL, v7);
    ListViewSort__SwitchFilter_33938476(operationSortInfo, kind, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v9);
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
  const MethodInfo *v7; // x1
  unsigned int v8; // w21
  ListViewSort_o *operationSortInfo; // x0

  if ( (byte_418B56A & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, *(_QWORD *)&unit);
    byte_418B56A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v8 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B2C434(0LL, v7);
      ListViewSort__SetFilter_33937316(operationSortInfo, v8 + 8, (int)(v8 + 1) < unit, 0LL);
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

  if ( (byte_418B569 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, method);
    byte_418B569 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v7 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B2C434(0LL, v6);
      ListViewSort__SetFilter_33937316(operationSortInfo, v7 + 8, 0, 0LL);
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
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  const MethodInfo *v57; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  const MethodInfo *v59; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  ListViewSort_o *v68; // x22
  ListViewSort_o *v69; // x23
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
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
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **unit1Label; // x23
  ListViewSort_o *v101; // x22
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **unit2Label; // x23
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **unit3Label; // x23
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **unit4Label; // x23
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **unit5Label; // x23
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **unit6Label; // x23
  __int64 v137; // x8
  __int64 v138; // x26
  UILabel_o *v139; // x23
  System_String_o *v140; // x24
  Il2CppObject *v141; // x0
  UILabel_o *unitExplanationLabel; // x22
  UILabel_o *organizationModeLabel; // x22
  UILabel_o *organizationModeDetail; // x22
  GameOptionRadioButtonGroup_o *organizationModeGroup; // x21
  PartyOrganizationAutoOrganizationSettingDialog_c *v146; // x0
  struct GameOptionRadioButtonGroup_o *v147; // x21
  System_Action_int__o *v148; // x22
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  bool v155; // w1
  int32_t isServantEquipBonusFilterEnable; // w8
  struct System_Int32_array *EventValUpEventIdList; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  struct System_Int32_array *eventIdList; // x0
  System_Int32_array *v165; // x21
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  UnityEngine_Transform_o *v167; // x21
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *eventBonusObject; // x21
  UnityEngine_Object_o *scrollView; // x21
  struct UIScrollView_o *v171; // x9
  const MethodInfo *v172; // x2
  System_Action_o *v173; // x20
  __int64 v174; // x0
  __int64 v175; // x0
  struct ListViewSort_o **p_baseSortInfo; // [xsp+0h] [xbp-90h]
  UnityEngine_Bounds_o v177; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Bounds_o v178; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Vector3_o min; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B565 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, sort);
    sub_B2C35C(&System_Action_int__TypeInfo, v13);
    sub_B2C35C(&System_Action_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v18);
    sub_B2C35C(&int___TypeInfo, v19);
    sub_B2C35C(&int_TypeInfo, v20);
    sub_B2C35C(&ListViewSort_TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v22);
    sub_B2C35C(&LocalizationManager_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v25);
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, v26);
    sub_B2C35C(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v27);
    sub_B2C35C(&UILabel___TypeInfo, v28);
    sub_B2C35C(&StringLiteral_11940/*"SERVANT_SORT_RESET"*/, v29);
    sub_B2C35C(&StringLiteral_1769/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/, v30);
    sub_B2C35C(&StringLiteral_1774/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/, v31);
    sub_B2C35C(&StringLiteral_1780/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/, v32);
    sub_B2C35C(&StringLiteral_1772/*"AUTO_ORGANIZATION_SETTING_KIND"*/, v33);
    sub_B2C35C(&StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/, v34);
    sub_B2C35C(&StringLiteral_11716/*"SERVANT_EQUIP_TAKE"*/, v35);
    sub_B2C35C(&StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, v36);
    sub_B2C35C(&StringLiteral_1770/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/, v37);
    sub_B2C35C(&StringLiteral_1771/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, v38);
    sub_B2C35C(&StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, v39);
    sub_B2C35C(&StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/, v40);
    sub_B2C35C(&StringLiteral_1773/*"AUTO_ORGANIZATION_SETTING_MODE"*/, v41);
    sub_B2C35C(&StringLiteral_12055/*"SERVANT_UNIT"*/, v42);
    sub_B2C35C(&StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/, v43);
    sub_B2C35C(&StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/, v44);
    sub_B2C35C(&StringLiteral_1777/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, v45);
    sub_B2C35C(&StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, v46);
    sub_B2C35C(&StringLiteral_1778/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, v47);
    sub_B2C35C(&StringLiteral_12054/*"SERVANT_TAKE"*/, v48);
    sub_B2C35C(&StringLiteral_1779/*"AUTO_ORGANIZATION_SETTING_UNIT"*/, v49);
    sub_B2C35C(&StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/, v50);
    byte_418B565 = 1;
  }
  memset(&v178, 0, sizeof(v178));
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_115;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v57);
    this->fields.oldSettingStatus = SettingState;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields.baseSortInfo;
    v69 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
    ListViewSort___ctor_33914748(v69, v68, 0LL);
    this->fields.operationSortInfo = v69;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1778/*"AUTO_ORGANIZATION_SETTING_TITLE"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)baseSortInfo, 0LL);
      decideLabel = this->fields.decideLabel;
      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SERVANT_SORT_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)baseSortInfo, 0LL);
        clearLabel = this->fields.clearLabel;
        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11810/*"SERVANT_SORT_CLEAR"*/, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, (System_String_o *)baseSortInfo, 0LL);
          cancelLabel = this->fields.cancelLabel;
          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_SORT_CANCEL"*/, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)baseSortInfo, 0LL);
            initializeLabel = this->fields.initializeLabel;
            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11940/*"SERVANT_SORT_RESET"*/, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, (System_String_o *)baseSortInfo, 0LL);
              explanationLabel = this->fields.explanationLabel;
              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1771/*"AUTO_ORGANIZATION_SETTING_EXPLATION"*/, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, (System_String_o *)baseSortInfo, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1772/*"AUTO_ORGANIZATION_SETTING_KIND"*/, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get((System_String_o *)StringLiteral_1777/*"AUTO_ORGANIZATION_SETTING_RARITY"*/, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                    unitTitleLabel = this->fields.unitTitleLabel;
                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_1779/*"AUTO_ORGANIZATION_SETTING_UNIT"*/,
                                                       0LL);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_1769/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS"*/,
                                                         0LL);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, (System_String_o *)baseSortInfo, 0LL);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_1770/*"AUTO_ORGANIZATION_SETTING_EVENT_BONUS_EXPLATION"*/,
                                                           0LL);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, (System_String_o *)baseSortInfo, 0LL);
                          kindServantLabel = this->fields.kindServantLabel;
                          baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_12054/*"SERVANT_TAKE"*/,
                                                             0LL);
                          if ( kindServantLabel )
                          {
                            UILabel__set_text(kindServantLabel, (System_String_o *)baseSortInfo, 0LL);
                            kindServantEquipLabel = this->fields.kindServantEquipLabel;
                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11716/*"SERVANT_EQUIP_TAKE"*/,
                                                               0LL);
                            if ( kindServantEquipLabel )
                            {
                              UILabel__set_text(kindServantEquipLabel, (System_String_o *)baseSortInfo, 0LL);
                              rarity1Label = this->fields.rarity1Label;
                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_11887/*"SERVANT_SORT_FILTER_RARITY_COMMON"*/,
                                                                 0LL);
                              if ( rarity1Label )
                              {
                                UILabel__set_text(rarity1Label, (System_String_o *)baseSortInfo, 0LL);
                                rarity2Label = this->fields.rarity2Label;
                                baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_11891/*"SERVANT_SORT_FILTER_RARITY_UNCOMMON"*/,
                                                                   0LL);
                                if ( rarity2Label )
                                {
                                  UILabel__set_text(rarity2Label, (System_String_o *)baseSortInfo, 0LL);
                                  rarity3Label = this->fields.rarity3Label;
                                  baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_11888/*"SERVANT_SORT_FILTER_RARITY_RARE"*/,
                                                                     0LL);
                                  if ( rarity3Label )
                                  {
                                    UILabel__set_text(rarity3Label, (System_String_o *)baseSortInfo, 0LL);
                                    rarity4Label = this->fields.rarity4Label;
                                    baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11889/*"SERVANT_SORT_FILTER_RARITY_SRARE"*/,
                                                                       0LL);
                                    if ( rarity4Label )
                                    {
                                      UILabel__set_text(rarity4Label, (System_String_o *)baseSortInfo, 0LL);
                                      rarity5Label = this->fields.rarity5Label;
                                      baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11890/*"SERVANT_SORT_FILTER_RARITY_SSRARE"*/,
                                                                         0LL);
                                      if ( rarity5Label )
                                      {
                                        UILabel__set_text(rarity5Label, (System_String_o *)baseSortInfo, 0LL);
                                        baseSortInfo = (ListViewSort_o *)sub_B2C374(UILabel___TypeInfo, 6LL);
                                        if ( baseSortInfo )
                                        {
                                          unit1Label = (System_Int32_array **)this->fields.unit1Label;
                                          v101 = baseSortInfo;
                                          if ( unit1Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit1Label,
                                                                               baseSortInfo->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( !*(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE )
                                            goto LABEL_116;
                                          v101->fields.manager = (struct ListViewManager_o *)unit1Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.manager,
                                            unit1Label,
                                            v94,
                                            v95,
                                            v96,
                                            v97,
                                            v98,
                                            v99);
                                          unit2Label = (System_Int32_array **)this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit2Label,
                                                                               v101->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE <= 1u )
                                            goto LABEL_116;
                                          v101->fields.saveKey = (struct System_String_o *)unit2Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.saveKey,
                                            unit2Label,
                                            v102,
                                            v103,
                                            v104,
                                            v105,
                                            v106,
                                            v107);
                                          unit3Label = (System_Int32_array **)this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit3Label,
                                                                               v101->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE <= 2u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v101->fields.defaultSortKind = unit3Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.defaultSortKind,
                                            unit3Label,
                                            v109,
                                            v110,
                                            v111,
                                            v112,
                                            v113,
                                            v114);
                                          unit4Label = (System_Int32_array **)this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit4Label,
                                                                               v101->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE <= 3u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v101->fields.sortKind = unit4Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.sortKind,
                                            unit4Label,
                                            v116,
                                            v117,
                                            v118,
                                            v119,
                                            v120,
                                            v121);
                                          unit5Label = (System_Int32_array **)this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit5Label,
                                                                               v101->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                              goto LABEL_117;
                                          }
                                          if ( *(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE <= 4u )
                                            goto LABEL_116;
                                          *(_QWORD *)&v101->fields.bonusKind = unit5Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.bonusKind,
                                            unit5Label,
                                            v123,
                                            v124,
                                            v125,
                                            v126,
                                            v127,
                                            v128);
                                          unit6Label = (System_Int32_array **)this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            baseSortInfo = (ListViewSort_o *)sub_B2C41C(
                                                                               this->fields.unit6Label,
                                                                               v101->klass->_1.element_class);
                                            if ( !baseSortInfo )
                                            {
LABEL_117:
                                              v175 = sub_B2C454(baseSortInfo);
                                              sub_B2C400(v175, 0LL);
                                            }
                                          }
                                          if ( *(_DWORD *)&v101->fields.FILTER_DEFAULT_VALUE <= 5u )
                                          {
LABEL_116:
                                            v174 = sub_B2C460(baseSortInfo);
                                            sub_B2C400(v174, 0LL);
                                          }
                                          *(_QWORD *)&v101->fields.bonusKind2 = unit6Label;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)&v101->fields.bonusKind2,
                                            unit6Label,
                                            v130,
                                            v131,
                                            v132,
                                            v133,
                                            v134,
                                            v135);
                                          v137 = *(_QWORD *)&v101->fields.FILTER_DEFAULT_VALUE;
                                          if ( (int)v137 >= 1 )
                                          {
                                            v138 = 0LL;
                                            while ( (unsigned int)v138 < (unsigned int)v137 )
                                            {
                                              v139 = (UILabel_o *)*((_QWORD *)&v101->fields.manager + v138);
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v140 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12055/*"SERVANT_UNIT"*/,
                                                       0LL);
                                              LODWORD(v177.fields.m_Center.fields.x) = v138 + 1;
                                              v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
                                              baseSortInfo = (ListViewSort_o *)System_String__Format(v140, v141, 0LL);
                                              if ( !v139 )
                                                goto LABEL_115;
                                              UILabel__set_text(v139, (System_String_o *)baseSortInfo, 0LL);
                                              v137 = *(_QWORD *)&v101->fields.FILTER_DEFAULT_VALUE;
                                              if ( (int)++v138 >= (int)v137 )
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
                                                                             (System_String_o *)StringLiteral_1780/*"AUTO_ORGANIZATION_SETTING_UNIT_EXPLATION"*/,
                                                                             0LL);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(
                                              unitExplanationLabel,
                                              (System_String_o *)baseSortInfo,
                                              0LL);
                                            organizationModeLabel = this->fields.organizationModeLabel;
                                            baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1773/*"AUTO_ORGANIZATION_SETTING_MODE"*/,
                                                                               0LL);
                                            if ( organizationModeLabel )
                                            {
                                              UILabel__set_text(
                                                organizationModeLabel,
                                                (System_String_o *)baseSortInfo,
                                                0LL);
                                              organizationModeDetail = this->fields.organizationModeDetail;
                                              baseSortInfo = (ListViewSort_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_1774/*"AUTO_ORGANIZATION_SETTING_MODE_EXPLANATION"*/,
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
                                                    v146 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
                                                    if ( (BYTE3(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                      && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
                                                    {
                                                      j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
                                                    }
                                                    baseSortInfo = (ListViewSort_o *)PartyOrganizationAutoOrganizationSettingDialog__GetAutoOrganizationModeLabels((const MethodInfo *)v146);
                                                    if ( !organizationModeGroup )
                                                      goto LABEL_115;
                                                    GameOptionRadioButtonGroup__SetLabels(
                                                      organizationModeGroup,
                                                      (System_String_array *)baseSortInfo,
                                                      0LL);
                                                    v147 = this->fields.organizationModeGroup;
                                                    v148 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
                                                    System_Action_int____ctor(
                                                      v148,
                                                      (Il2CppObject *)this,
                                                      (intptr_t)Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__,
                                                      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
                                                    if ( !v147 )
                                                      goto LABEL_115;
                                                    v147->fields.selectedCallback = v148;
                                                    sub_B2C2F8(
                                                      (BattleServantConfConponent_o *)&v147->fields.selectedCallback,
                                                      (System_Int32_array **)v148,
                                                      v149,
                                                      v150,
                                                      v151,
                                                      v152,
                                                      v153,
                                                      v154);
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v155 = 1;
                                                  }
                                                  else
                                                  {
                                                    baseSortInfo = (ListViewSort_o *)this->fields.organizationModeObject;
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    v155 = 0;
                                                  }
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)baseSortInfo,
                                                    v155,
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
                                                    baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
                                                    if ( !baseSortInfo )
                                                      goto LABEL_115;
                                                    EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(
                                                                              (EventMaster_o *)baseSortInfo,
                                                                              0,
                                                                              0LL);
                                                    this->fields.eventIdList = EventValUpEventIdList;
                                                    sub_B2C2F8(
                                                      (BattleServantConfConponent_o *)&this->fields.eventIdList,
                                                      (System_Int32_array **)EventValUpEventIdList,
                                                      v158,
                                                      v159,
                                                      v160,
                                                      v161,
                                                      v162,
                                                      v163);
                                                    eventIdList = this->fields.eventIdList;
                                                    if ( eventIdList
                                                      && (int)eventIdList->max_length >= 1
                                                      && System_Linq_Enumerable__Contains_int_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                           this->fields.eventId,
                                                           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
                                                    {
                                                      baseSortInfo = (ListViewSort_o *)sub_B2C374(int___TypeInfo, 1LL);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      v165 = (System_Int32_array *)baseSortInfo;
                                                      if ( !*(_DWORD *)&baseSortInfo->fields.FILTER_DEFAULT_VALUE )
                                                        goto LABEL_116;
                                                      LODWORD(baseSortInfo->fields.manager) = this->fields.eventId;
                                                      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                        && !DataManager_TypeInfo->_2.cctor_finished )
                                                      {
                                                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                      }
                                                      baseSortInfo = (ListViewSort_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                      if ( !baseSortInfo )
                                                        goto LABEL_115;
                                                      FilterList = EventBonusFilterMaster__GetFilterList(
                                                                     (EventBonusFilterMaster_o *)baseSortInfo,
                                                                     v165,
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
                                                          v165,
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
                                                    v167 = (UnityEngine_Transform_o *)baseSortInfo;
                                                    parent = UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)baseSortInfo,
                                                               0LL);
                                                    NGUIMath__CalculateRelativeWidgetBounds_45718524(
                                                      &v177,
                                                      parent,
                                                      v167,
                                                      0LL);
                                                    v178 = v177;
                                                    eventBonusObject = this->fields.eventBonusObject;
                                                    min = UnityEngine_Bounds__get_min(&v178, 0LL);
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
                                                      v171 = this->fields.scrollView;
                                                      if ( v171 )
                                                      {
                                                        if ( *p_baseSortInfo )
                                                        {
                                                          baseSortInfo = *(ListViewSort_o **)&v171->fields.showScrollBars;
                                                          if ( baseSortInfo )
                                                          {
                                                            UIProgressBar__set_value(
                                                              (UIProgressBar_o *)baseSortInfo,
                                                              (*p_baseSortInfo)->fields.scrollBarValue,
                                                              0LL);
LABEL_113:
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                              this,
                                                              v59);
                                                            PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                              this,
                                                              1,
                                                              v172);
                                                            this->fields.state = 1;
                                                            v173 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                                            System_Action___ctor(
                                                              v173,
                                                              (Il2CppObject *)this,
                                                              Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                              0LL);
                                                            BaseDialog__Open((BaseDialog_o *)this, v173, 0, 0LL);
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
    sub_B2C434(baseSortInfo, v59);
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
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418B567 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_418B567 = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)decideButton,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__);
    if ( !v9 )
      break;
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B2C434(v9, v10);
    UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)v15.fields.current, isEnable, 0LL);
    if ( isEnable )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
      if ( !gameObject )
        sub_B2C434(0LL, v13);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__);
  decideButton = (UICommonButton_o *)this->fields.organizationModeGroup;
  if ( !decideButton )
LABEL_18:
    sub_B2C434(decideButton, isEnable);
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
  if ( (byte_418B570 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B2C35C(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_418B570 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      categoryFilterKind = v2->fields.categoryFilterKind;
      if ( !categoryFilterKind )
        break;
      v11 = spriteList->fields._items->m_Items[v8];
      if ( categoryFilterKind->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v2->fields.operationSortInfo )
        break;
      this = (PartyOrganizationAutoOrganizationSettingDialog_o *)ListViewSort__GetFilter_33936432(
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
    sub_B2C434(this, method);
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
  if ( (byte_418B575 & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__, *(_QWORD *)&selectedIndex);
    this = (PartyOrganizationAutoOrganizationSettingDialog_o *)sub_B2C35C(
                                                                 &PartyOrganizationAutoOrganizationSettingDialog_TypeInfo,
                                                                 v5);
    byte_418B575 = 1;
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
    sub_B2C434(this, *(_QWORD *)&selectedIndex);
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
    v7 = (_QWORD *)sub_B2C364(Method_PartyOrganizationAutoOrganizationSettingDialog__Open_b__60_0__);
  v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
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

  if ( (byte_418B563 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_418B563 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B572 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_418B572 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
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

  if ( (byte_418B564 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_418B564 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185284 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4185284 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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