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

  if ( (byte_40FDDEC & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16891, v8);
    sub_B16FFC(&StringLiteral_16890, v9);
    byte_40FDDEC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16890;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16890;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16891;
  v12->DISABLE_BUTTON_SPRITE = (struct System_String_o *)StringLiteral_16891;
  sub_B16F98((BattleServantConfConponent_o *)&v12->DISABLE_BUTTON_SPRITE, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
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

  if ( (byte_40FDDEB & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&ListViewSort_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo, v9);
    byte_40FDDEB = 1;
  }
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind___ctor__);
  if ( !v10 )
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    0,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    1,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    2,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    3,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    4,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    5,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    6,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    7,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    8,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    9,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    10,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    11,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v10,
    12,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__Add__);
  this->fields.categoryFilterKind = (struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *)v10;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationAutoOrganizationSettingDialog__Close_32504764(this, 0LL, v2);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__Close_32504764(
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_40FDDDF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, v5);
    byte_40FDDDF = 1;
  }
  PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, method);
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
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyOrganizationAutoOrganizationSettingDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__EndOpen(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_Boolean_array *__fastcall PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x8
  int size; // w22
  System_Boolean_array *v9; // x21
  unsigned __int64 v10; // x23
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *v11; // x25
  _BOOL8 Filter_30230224; // x0
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_40FDDE8 & 1) == 0 )
  {
    sub_B16FFC(&bool___TypeInfo, sort);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__, v6);
    byte_40FDDE8 = 1;
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
      Filter_30230224 = ListViewSort__GetFilter_30230224(sort, v11->fields._items->m_Items[v10 + 1], 0LL);
      if ( !v9 )
        break;
      if ( v10 >= v9->max_length )
      {
        sub_B17100(Filter_30230224, v13, v14);
        sub_B170A0();
      }
      v9->m_Items[v10++ + 4] = Filter_30230224;
      if ( (__int64)v10 >= size )
        return v9;
    }
LABEL_14:
    sub_B170D4();
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
      sub_B170D4();
    if ( ListViewSort__GetFilter_30230224(operationSortInfo, v3 + 6, 0LL) )
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

  if ( (byte_40FDDE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__, method);
    byte_40FDDE5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v2);
    this->fields.state = 3;
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
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
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_40FDDE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__, method);
    byte_40FDDE6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_30231100(operationSortInfo, ++v5, 0, 0LL);
    }
    while ( v5 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      servantBonusFilterEquipComponent = (ServantBonusFilterEquipComponent_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !servantBonusFilterEquipComponent )
LABEL_14:
        sub_B170D4();
      ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, 0LL);
    }
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(this, v7);
  }
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__OnClickDecide(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UIScrollView_o *scrollView; // x8
  UIProgressBar_o *v8; // x0
  struct ListViewSort_o *operationSortInfo; // x20
  const MethodInfo *v10; // x2
  float value; // s0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *eventIdList; // x21
  __int64 v18; // x8
  System_String_o *v19; // x20
  unsigned __int64 v20; // x22
  int v21; // w26
  Il2CppObject *v22; // x0
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0
  ListViewSort_o *v24; // x20
  bool IsSetIndividualFilter; // w0
  ServantBonusFilterEquipComponent_o *v26; // x0
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v28; // x2
  int v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FDDE4 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__, v3);
    sub_B16FFC(&StringLiteral_2200, v4);
    sub_B16FFC(&StringLiteral_698, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FDDE4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_26;
    v8 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
    if ( !v8 )
      goto LABEL_26;
    operationSortInfo = this->fields.operationSortInfo;
    value = UIProgressBar__get_value(v8, 0LL);
    if ( !operationSortInfo )
      goto LABEL_26;
    operationSortInfo->fields.scrollBarValue = value;
    PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(this, 0, v10);
    this->fields.state = 3;
    v12 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickDecide__);
    v13 = (System_Reflection_MethodBase_o *)sub_B16FE0(v12, v12[3]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    eventIdList = this->fields.eventIdList;
    if ( eventIdList )
    {
      v18 = *(_QWORD *)&eventIdList->max_length;
      v19 = (System_String_o *)StringLiteral_1;
      if ( (int)v18 >= 1 )
      {
        v20 = 0LL;
        while ( 1 )
        {
          if ( v20 >= (unsigned int)v18 )
          {
            sub_B17100(v14, v15, v16);
            sub_B170A0();
          }
          if ( !v19 )
            break;
          v21 = eventIdList->m_Items[v20 + 1];
          if ( v19->fields.m_stringLength >= 1 )
            v19 = System_String__Concat_43743732(v19, (System_String_o *)StringLiteral_698, 0LL);
          v29 = v21;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
          v14 = System_String__Concat((Il2CppObject *)v19, v22, 0LL);
          LODWORD(v18) = eventIdList->max_length;
          ++v20;
          v19 = v14;
          if ( (__int64)v20 >= (int)v18 )
            goto LABEL_17;
        }
LABEL_26:
        sub_B170D4();
      }
LABEL_17:
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_2200, v19, 0LL);
    }
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      servantBonusFilterEquipComponent = (ServantBonusFilterEquipComponent_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !servantBonusFilterEquipComponent )
        goto LABEL_26;
      v24 = this->fields.operationSortInfo;
      IsSetIndividualFilter = ServantBonusFilterEquipComponent__IsSetIndividualFilter(
                                servantBonusFilterEquipComponent,
                                0LL);
      if ( !v24 )
        goto LABEL_26;
      ListViewSort__SetFilter(v24, 41, !IsSetIndividualFilter, 0LL);
      v26 = (ServantBonusFilterEquipComponent_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !v26 )
        goto LABEL_26;
      ServantBonusFilterEquipComponent__UpdateFilterSave(v26, 0LL);
    }
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo )
      goto LABEL_26;
    ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL);
    PartyOrganizationAutoOrganizationSettingDialog__Callback(this, 1, v28);
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
  ServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0

  if ( (byte_40FDDE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__, method);
    byte_40FDDE7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickInitialize__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_14;
      ListViewSort__SetFilter_30231100(operationSortInfo, ++v5, 1, 0LL);
    }
    while ( v5 < 0xC );
    if ( this->fields.isServantEquipBonusFilterEnable )
    {
      servantBonusFilterEquipComponent = (ServantBonusFilterEquipComponent_o *)this->fields.servantBonusFilterEquipComponent;
      if ( !servantBonusFilterEquipComponent )
LABEL_14:
        sub_B170D4();
      ServantBonusFilterEquipComponent__ResetIndividualFilter(servantBonusFilterEquipComponent, 0LL);
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

  if ( (byte_40FDDE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__, *(_QWORD *)&kind);
    byte_40FDDE1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickSetting__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B170D4();
    ListViewSort__SwitchFilter_30232252(operationSortInfo, kind, 0LL);
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

  if ( (byte_40FDDE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__, *(_QWORD *)&unit);
    byte_40FDDE3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B170D4();
      ListViewSort__SetFilter_30231100(operationSortInfo, v7 + 8, (int)(v7 + 1) < unit, 0LL);
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

  if ( (byte_40FDDE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__, method);
    byte_40FDDE2 = 1;
  }
  if ( PartyOrganizationAutoOrganizationSettingDialog__GetUnitNum(this, method) < 1 )
  {
    PartyOrganizationAutoOrganizationSettingDialog__OnClickUnit(this, 1, v3);
  }
  else
  {
    v4 = Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__;
    if ( (*((_BYTE *)Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_PartyOrganizationAutoOrganizationSettingDialog_OnClickUnit1__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    v6 = -1;
    do
    {
      operationSortInfo = this->fields.operationSortInfo;
      if ( !operationSortInfo )
        sub_B170D4();
      ListViewSort__SetFilter_30231100(operationSortInfo, v6 + 8, 0, 0LL);
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
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *callback,
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
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct ListViewSort_o **p_baseSortInfo; // x20
  const MethodInfo *v51; // x2
  struct ListViewSort_o *autoOrganizationSortInfo; // x1
  ListViewSort_o *baseSortInfo; // x0
  struct System_Boolean_array *SettingState; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  ListViewSort_o *v61; // x21
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  ListViewSort_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v74; // x0
  UILabel_o *decideLabel; // x21
  System_String_o *v76; // x0
  UILabel_o *clearLabel; // x21
  System_String_o *v78; // x0
  UILabel_o *cancelLabel; // x21
  System_String_o *v80; // x0
  UILabel_o *initializeLabel; // x21
  System_String_o *v82; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v84; // x0
  UILabel_o *kindTitleLabel; // x21
  System_String_o *v86; // x0
  UILabel_o *rarityTitleLabel; // x21
  System_String_o *v88; // x0
  UILabel_o *unitTitleLabel; // x21
  System_String_o *v90; // x0
  UILabel_o *eventEquipTitleLabel; // x21
  System_String_o *v92; // x0
  UILabel_o *eventEquipExplanationLabel; // x21
  System_String_o *v94; // x0
  UILabel_o *kindServantLabel; // x21
  System_String_o *v96; // x0
  UILabel_o *kindServantEquipLabel; // x21
  System_String_o *v98; // x0
  UILabel_o *rarity1Label; // x21
  System_String_o *v100; // x0
  UILabel_o *rarity2Label; // x21
  System_String_o *v102; // x0
  UILabel_o *rarity3Label; // x21
  System_String_o *v104; // x0
  UILabel_o *rarity4Label; // x21
  System_String_o *v106; // x0
  UILabel_o *rarity5Label; // x21
  System_String_o *v108; // x0
  __int64 v109; // x2
  System_Int32_array *v110; // x0
  __int64 v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **unit1Label; // x22
  System_Int32_array *v119; // x21
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **unit2Label; // x22
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **unit3Label; // x22
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **unit4Label; // x22
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **unit5Label; // x22
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Int32_array **unit6Label; // x22
  __int64 v150; // x8
  __int64 v151; // x25
  UILabel_o *v152; // x22
  System_String_o *v153; // x23
  Il2CppObject *v154; // x0
  System_String_o *v155; // x0
  UILabel_o *unitExplanationLabel; // x21
  System_String_o *v157; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t isServantEquipBonusFilterEnable; // w8
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *EventValUpEventIdList; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  struct System_Int32_array *eventIdList; // x0
  __int64 v169; // x2
  System_Int32_array *v170; // x21
  EventBonusFilterMaster_o *v171; // x0
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  AutoOrganizationServantBonusFilterEquipComponent_o *servantBonusFilterEquipComponent; // x0
  ServantBonusFilterEquipComponent_o *v174; // x0
  UnityEngine_GameObject_o *eventBonusObject; // x0
  UnityEngine_GameObject_o *unitLineObject; // x0
  bool v177; // w1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v179; // x1
  struct UIScrollView_o *v180; // x0
  UIScrollView_o *v181; // x0
  struct UIScrollView_o *v182; // x9
  UIProgressBar_o *v183; // x0
  const MethodInfo *v184; // x2
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  System_Action_o *v189; // x20
  int v190; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FDDDE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, sort);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v15);
    sub_B16FFC(&int___TypeInfo, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&ListViewSort_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__, v22);
    sub_B16FFC(&UILabel___TypeInfo, v23);
    sub_B16FFC(&StringLiteral_11890, v24);
    sub_B16FFC(&StringLiteral_1767, v25);
    sub_B16FFC(&StringLiteral_1774, v26);
    sub_B16FFC(&StringLiteral_1770, v27);
    sub_B16FFC(&StringLiteral_11841, v28);
    sub_B16FFC(&StringLiteral_11677, v29);
    sub_B16FFC(&StringLiteral_11759, v30);
    sub_B16FFC(&StringLiteral_1768, v31);
    sub_B16FFC(&StringLiteral_1769, v32);
    sub_B16FFC(&StringLiteral_11763, v33);
    sub_B16FFC(&StringLiteral_11840, v34);
    sub_B16FFC(&StringLiteral_12004, v35);
    sub_B16FFC(&StringLiteral_11839, v36);
    sub_B16FFC(&StringLiteral_11837, v37);
    sub_B16FFC(&StringLiteral_1771, v38);
    sub_B16FFC(&StringLiteral_11760, v39);
    sub_B16FFC(&StringLiteral_1772, v40);
    sub_B16FFC(&StringLiteral_12003, v41);
    sub_B16FFC(&StringLiteral_1773, v42);
    sub_B16FFC(&StringLiteral_11838, v43);
    byte_40FDDDE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&eventId,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.eventId = eventId;
    if ( sort )
    {
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = sort;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)sort,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
    }
    else
    {
      autoOrganizationSortInfo = this->fields.autoOrganizationSortInfo;
      p_baseSortInfo = &this->fields.baseSortInfo;
      this->fields.baseSortInfo = autoOrganizationSortInfo;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.baseSortInfo,
        (System_Int32_array **)autoOrganizationSortInfo,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      baseSortInfo = this->fields.baseSortInfo;
      if ( !baseSortInfo )
        goto LABEL_99;
      ListViewSort__Load(baseSortInfo, 0LL);
    }
    SettingState = PartyOrganizationAutoOrganizationSettingDialog__GetSettingState(this, sort, v51);
    this->fields.oldSettingStatus = SettingState;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.oldSettingStatus,
      (System_Int32_array **)SettingState,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v61 = this->fields.baseSortInfo;
    v66 = (ListViewSort_o *)sub_B170CC(ListViewSort_TypeInfo, v62, v63, v64, v65);
    ListViewSort___ctor_30209040(v66, v61, 0LL);
    this->fields.operationSortInfo = v66;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.operationSortInfo,
      (System_Int32_array **)v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v74 = LocalizationManager__Get((System_String_o *)StringLiteral_1772, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v74, 0LL);
      decideLabel = this->fields.decideLabel;
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11763, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, v76, 0LL);
        clearLabel = this->fields.clearLabel;
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_11760, 0LL);
        if ( clearLabel )
        {
          UILabel__set_text(clearLabel, v78, 0LL);
          cancelLabel = this->fields.cancelLabel;
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11759, 0LL);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, v80, 0LL);
            initializeLabel = this->fields.initializeLabel;
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11890, 0LL);
            if ( initializeLabel )
            {
              UILabel__set_text(initializeLabel, v82, 0LL);
              explanationLabel = this->fields.explanationLabel;
              v84 = LocalizationManager__Get((System_String_o *)StringLiteral_1769, 0LL);
              if ( explanationLabel )
              {
                UILabel__set_text(explanationLabel, v84, 0LL);
                kindTitleLabel = this->fields.kindTitleLabel;
                v86 = LocalizationManager__Get((System_String_o *)StringLiteral_1770, 0LL);
                if ( kindTitleLabel )
                {
                  UILabel__set_text(kindTitleLabel, v86, 0LL);
                  rarityTitleLabel = this->fields.rarityTitleLabel;
                  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_1771, 0LL);
                  if ( rarityTitleLabel )
                  {
                    UILabel__set_text(rarityTitleLabel, v88, 0LL);
                    unitTitleLabel = this->fields.unitTitleLabel;
                    v90 = LocalizationManager__Get((System_String_o *)StringLiteral_1773, 0LL);
                    if ( unitTitleLabel )
                    {
                      UILabel__set_text(unitTitleLabel, v90, 0LL);
                      eventEquipTitleLabel = this->fields.eventEquipTitleLabel;
                      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_1767, 0LL);
                      if ( eventEquipTitleLabel )
                      {
                        UILabel__set_text(eventEquipTitleLabel, v92, 0LL);
                        eventEquipExplanationLabel = this->fields.eventEquipExplanationLabel;
                        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_1768, 0LL);
                        if ( eventEquipExplanationLabel )
                        {
                          UILabel__set_text(eventEquipExplanationLabel, v94, 0LL);
                          kindServantLabel = this->fields.kindServantLabel;
                          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12003, 0LL);
                          if ( kindServantLabel )
                          {
                            UILabel__set_text(kindServantLabel, v96, 0LL);
                            kindServantEquipLabel = this->fields.kindServantEquipLabel;
                            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11677, 0LL);
                            if ( kindServantEquipLabel )
                            {
                              UILabel__set_text(kindServantEquipLabel, v98, 0LL);
                              rarity1Label = this->fields.rarity1Label;
                              v100 = LocalizationManager__Get((System_String_o *)StringLiteral_11837, 0LL);
                              if ( rarity1Label )
                              {
                                UILabel__set_text(rarity1Label, v100, 0LL);
                                rarity2Label = this->fields.rarity2Label;
                                v102 = LocalizationManager__Get((System_String_o *)StringLiteral_11841, 0LL);
                                if ( rarity2Label )
                                {
                                  UILabel__set_text(rarity2Label, v102, 0LL);
                                  rarity3Label = this->fields.rarity3Label;
                                  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_11838, 0LL);
                                  if ( rarity3Label )
                                  {
                                    UILabel__set_text(rarity3Label, v104, 0LL);
                                    rarity4Label = this->fields.rarity4Label;
                                    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11839, 0LL);
                                    if ( rarity4Label )
                                    {
                                      UILabel__set_text(rarity4Label, v106, 0LL);
                                      rarity5Label = this->fields.rarity5Label;
                                      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11840, 0LL);
                                      if ( rarity5Label )
                                      {
                                        UILabel__set_text(rarity5Label, v108, 0LL);
                                        v110 = (System_Int32_array *)sub_B17014(UILabel___TypeInfo, 6LL, v109);
                                        if ( v110 )
                                        {
                                          unit1Label = (System_Int32_array **)this->fields.unit1Label;
                                          v119 = v110;
                                          if ( unit1Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit1Label,
                                                                           v110->obj.klass->_1.element_class);
                                            if ( !v110 )
                                              goto LABEL_101;
                                          }
                                          if ( !v119->max_length )
                                            goto LABEL_100;
                                          *(_QWORD *)&v119->m_Items[1] = unit1Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[1],
                                            unit1Label,
                                            v112,
                                            v113,
                                            v114,
                                            v115,
                                            v116,
                                            v117);
                                          unit2Label = (System_Int32_array **)this->fields.unit2Label;
                                          if ( unit2Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit2Label,
                                                                           v119->obj.klass->_1.element_class);
                                            if ( !v110 )
                                              goto LABEL_101;
                                          }
                                          if ( v119->max_length <= 1 )
                                            goto LABEL_100;
                                          *(_QWORD *)&v119->m_Items[3] = unit2Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[3],
                                            unit2Label,
                                            v112,
                                            v120,
                                            v121,
                                            v122,
                                            v123,
                                            v124);
                                          unit3Label = (System_Int32_array **)this->fields.unit3Label;
                                          if ( unit3Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit3Label,
                                                                           v119->obj.klass->_1.element_class);
                                            if ( !v110 )
                                              goto LABEL_101;
                                          }
                                          if ( v119->max_length <= 2 )
                                            goto LABEL_100;
                                          *(_QWORD *)&v119->m_Items[5] = unit3Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[5],
                                            unit3Label,
                                            v112,
                                            v126,
                                            v127,
                                            v128,
                                            v129,
                                            v130);
                                          unit4Label = (System_Int32_array **)this->fields.unit4Label;
                                          if ( unit4Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit4Label,
                                                                           v119->obj.klass->_1.element_class);
                                            if ( !v110 )
                                              goto LABEL_101;
                                          }
                                          if ( v119->max_length <= 3 )
                                            goto LABEL_100;
                                          *(_QWORD *)&v119->m_Items[7] = unit4Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[7],
                                            unit4Label,
                                            v112,
                                            v132,
                                            v133,
                                            v134,
                                            v135,
                                            v136);
                                          unit5Label = (System_Int32_array **)this->fields.unit5Label;
                                          if ( unit5Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit5Label,
                                                                           v119->obj.klass->_1.element_class);
                                            if ( !v110 )
                                              goto LABEL_101;
                                          }
                                          if ( v119->max_length <= 4 )
                                            goto LABEL_100;
                                          *(_QWORD *)&v119->m_Items[9] = unit5Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[9],
                                            unit5Label,
                                            v112,
                                            v138,
                                            v139,
                                            v140,
                                            v141,
                                            v142);
                                          unit6Label = (System_Int32_array **)this->fields.unit6Label;
                                          if ( unit6Label )
                                          {
                                            v110 = (System_Int32_array *)sub_B170BC(
                                                                           this->fields.unit6Label,
                                                                           v119->obj.klass->_1.element_class);
                                            if ( !v110 )
                                            {
LABEL_101:
                                              sub_B170F4(v110);
                                              sub_B170A0();
                                            }
                                          }
                                          if ( v119->max_length <= 5 )
                                          {
LABEL_100:
                                            sub_B17100(v110, v111, v112);
                                            sub_B170A0();
                                          }
                                          *(_QWORD *)&v119->m_Items[11] = unit6Label;
                                          sub_B16F98(
                                            (BattleServantConfConponent_o *)&v119->m_Items[11],
                                            unit6Label,
                                            v112,
                                            v144,
                                            v145,
                                            v146,
                                            v147,
                                            v148);
                                          v150 = *(_QWORD *)&v119->max_length;
                                          if ( (int)v150 >= 1 )
                                          {
                                            v151 = 0LL;
                                            while ( (unsigned int)v151 < (unsigned int)v150 )
                                            {
                                              v152 = *(UILabel_o **)&v119->m_Items[2 * v151 + 1];
                                              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                              }
                                              v153 = LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12004,
                                                       0LL);
                                              v190 = v151 + 1;
                                              v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v190);
                                              v155 = System_String__Format(v153, v154, 0LL);
                                              if ( !v152 )
                                                goto LABEL_99;
                                              UILabel__set_text(v152, v155, 0LL);
                                              v150 = *(_QWORD *)&v119->max_length;
                                              if ( (int)++v151 >= (int)v150 )
                                                goto LABEL_56;
                                            }
                                            goto LABEL_100;
                                          }
LABEL_56:
                                          unitExplanationLabel = this->fields.unitExplanationLabel;
                                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                          }
                                          v157 = LocalizationManager__Get((System_String_o *)StringLiteral_1774, 0LL);
                                          if ( unitExplanationLabel )
                                          {
                                            UILabel__set_text(unitExplanationLabel, v157, 0LL);
                                            gameObject = UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
                                            if ( gameObject )
                                            {
                                              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                                              isServantEquipBonusFilterEnable = this->fields.eventId;
                                              this->fields.isServantEquipBonusFilterEnable = 0;
                                              if ( isServantEquipBonusFilterEnable )
                                              {
                                                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                  && !DataManager_TypeInfo->_2.cctor_finished )
                                                {
                                                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                }
                                                Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
                                                if ( !Master_WarQuestSelectionMaster )
                                                  goto LABEL_99;
                                                EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(
                                                                          Master_WarQuestSelectionMaster,
                                                                          0,
                                                                          0LL);
                                                this->fields.eventIdList = EventValUpEventIdList;
                                                sub_B16F98(
                                                  (BattleServantConfConponent_o *)&this->fields.eventIdList,
                                                  (System_Int32_array **)EventValUpEventIdList,
                                                  v162,
                                                  v163,
                                                  v164,
                                                  v165,
                                                  v166,
                                                  v167);
                                                eventIdList = this->fields.eventIdList;
                                                if ( eventIdList
                                                  && (int)eventIdList->max_length >= 1
                                                  && System_Linq_Enumerable__Contains_int_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)eventIdList,
                                                       this->fields.eventId,
                                                       (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
                                                {
                                                  v110 = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v169);
                                                  if ( !v110 )
                                                    goto LABEL_99;
                                                  v170 = v110;
                                                  if ( !v110->max_length )
                                                    goto LABEL_100;
                                                  v110->m_Items[1] = this->fields.eventId;
                                                  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                    && !DataManager_TypeInfo->_2.cctor_finished )
                                                  {
                                                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                                                  }
                                                  v171 = (EventBonusFilterMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
                                                  if ( !v171 )
                                                    goto LABEL_99;
                                                  FilterList = EventBonusFilterMaster__GetFilterList(v171, v170, 1, 0LL);
                                                  if ( FilterList && FilterList->fields._size >= 1 )
                                                  {
                                                    servantBonusFilterEquipComponent = this->fields.servantBonusFilterEquipComponent;
                                                    this->fields.isServantEquipBonusFilterEnable = 1;
                                                    if ( !servantBonusFilterEquipComponent )
                                                      goto LABEL_99;
                                                    AutoOrganizationServantBonusFilterEquipComponent__CreateList(
                                                      servantBonusFilterEquipComponent,
                                                      v170,
                                                      0LL);
                                                    v174 = (ServantBonusFilterEquipComponent_o *)this->fields.servantBonusFilterEquipComponent;
                                                    if ( !v174 )
                                                      goto LABEL_99;
                                                    ServantBonusFilterEquipComponent__SetInitButtonSelect(v174, 0LL);
                                                  }
                                                }
                                                isServantEquipBonusFilterEnable = this->fields.isServantEquipBonusFilterEnable;
                                              }
                                              eventBonusObject = this->fields.eventBonusObject;
                                              if ( !eventBonusObject )
                                                goto LABEL_99;
                                              if ( isServantEquipBonusFilterEnable )
                                              {
                                                UnityEngine_GameObject__SetActive(eventBonusObject, 1, 0LL);
                                                unitLineObject = this->fields.unitLineObject;
                                                if ( !unitLineObject )
                                                  goto LABEL_99;
                                                v177 = 1;
                                              }
                                              else
                                              {
                                                UnityEngine_GameObject__SetActive(eventBonusObject, 0, 0LL);
                                                unitLineObject = this->fields.unitLineObject;
                                                if ( !unitLineObject )
                                                  goto LABEL_99;
                                                v177 = 0;
                                              }
                                              UnityEngine_GameObject__SetActive(unitLineObject, v177, 0LL);
                                              scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
                                              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              {
                                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                              }
                                              if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
                                                goto LABEL_97;
                                              v180 = this->fields.scrollView;
                                              if ( v180 )
                                              {
                                                ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v180->klass->vtable._8_UpdateScrollbars.method)(
                                                  v180,
                                                  1LL,
                                                  v180->klass->vtable._9_SetDragAmount.methodPtr);
                                                v181 = this->fields.scrollView;
                                                if ( v181 )
                                                {
                                                  UIScrollView__ResetPosition(v181, 0LL);
                                                  v182 = this->fields.scrollView;
                                                  if ( v182 )
                                                  {
                                                    if ( *p_baseSortInfo )
                                                    {
                                                      v183 = *(UIProgressBar_o **)&v182->fields.showScrollBars;
                                                      if ( v183 )
                                                      {
                                                        UIProgressBar__set_value(
                                                          v183,
                                                          (*p_baseSortInfo)->fields.scrollBarValue,
                                                          0LL);
LABEL_97:
                                                        PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
                                                          this,
                                                          v179);
                                                        PartyOrganizationAutoOrganizationSettingDialog__SetButtonEnable(
                                                          this,
                                                          1,
                                                          v184);
                                                        this->fields.state = 1;
                                                        v189 = (System_Action_o *)sub_B170CC(
                                                                                    System_Action_TypeInfo,
                                                                                    v185,
                                                                                    v186,
                                                                                    v187,
                                                                                    v188);
                                                        System_Action___ctor(
                                                          v189,
                                                          (Il2CppObject *)this,
                                                          Method_PartyOrganizationAutoOrganizationSettingDialog_EndOpen__,
                                                          0LL);
                                                        BaseDialog__Open((BaseDialog_o *)this, v189, 0, 0LL);
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
LABEL_99:
    sub_B170D4();
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
  UICommonButton_o *cancelButton; // x0
  UICommonButton_o *clearButton; // x0
  UICommonButton_o *initializeButton; // x0
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FDDE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__Dispose__, isEnable);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UICommonButton__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__GetEnumerator__, v7);
    byte_40FDDE0 = 1;
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


void __fastcall PartyOrganizationAutoOrganizationSettingDialog__SetButtonSelect(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_UICommonButton__o *buttonList; // x8
  int size; // w22
  __int64 v8; // x23
  struct System_Collections_Generic_List_UISprite__o *spriteList; // x20
  struct System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__o *categoryFilterKind; // x25
  UISprite_o *v11; // x20
  bool Filter_30230224; // w0
  PartyOrganizationAutoOrganizationSettingDialog_c *v13; // x8
  System_String_o **p_ENABLE_BUTTON_SPRITE; // x8

  if ( (byte_40FDDE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UICommonButton__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewSort_AutoOrganizationCategoryFilterKind__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v4);
    sub_B16FFC(&PartyOrganizationAutoOrganizationSettingDialog_TypeInfo, v5);
    byte_40FDDE9 = 1;
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
      Filter_30230224 = ListViewSort__GetFilter_30230224(
                          this->fields.operationSortInfo,
                          categoryFilterKind->fields._items->m_Items[v8 + 1],
                          0LL);
      v13 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
      if ( Filter_30230224 )
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v13 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
        }
        p_ENABLE_BUTTON_SPRITE = &v13->static_fields->ENABLE_BUTTON_SPRITE;
        if ( !v11 )
          break;
      }
      else
      {
        if ( (WORD1(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationAutoOrganizationSettingDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationAutoOrganizationSettingDialog_TypeInfo);
          v13 = PartyOrganizationAutoOrganizationSettingDialog_TypeInfo;
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

  if ( (byte_40FDDDC & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_40FDDDC = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationAutoOrganizationSettingDialog__remove_callbackFunc(v10, v11, v12);
}


System_String_o *__fastcall PartyOrganizationAutoOrganizationSettingDialog__get_closeBtnPath(
        PartyOrganizationAutoOrganizationSettingDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FDDEA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15414, method);
    byte_40FDDEA = 1;
  }
  return (System_String_o *)StringLiteral_15414;
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

  if ( (byte_40FDDDD & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_TypeInfo, value);
    byte_40FDDDD = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  PartyOrganizationAutoOrganizationSettingDialog__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc___ctor(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
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
  if ( (byte_40F836E & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F836E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__EndInvoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc__Invoke(
        PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **v7; // x25
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v18; // x8
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
  PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PartyOrganizationAutoOrganizationSettingDialog_CallbackFunc_o **)(v3 + 32);
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