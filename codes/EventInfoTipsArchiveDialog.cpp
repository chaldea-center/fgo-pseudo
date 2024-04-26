void __fastcall EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352E57 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    sub_B70694(&StringLiteral_17216/*"btn_bg_08"*/);
    sub_B70694(&StringLiteral_17217/*"btn_bg_09"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352E57 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_17217/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_17217/*"btn_bg_09"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.onButtonName, v9, v2, v3, v4, v5, v6, v7);
  v33.fields.g = 0.20784;
  v33.fields.b = 0.20392;
  v33.fields.r = 1.0;
  v33.fields.a = 0.25098;
  var40.name = 0LL;
  var40.klass = 0LL;
  UnityEngine_Color___ctor(v33, v10, v11, v12, v13, (const MethodInfo *)&var40.name);
  this->fields.onButtonOutlineColor = *(struct UnityEngine_Color_o *)&var40.name;
  v14 = (System_Int32_array **)StringLiteral_17216/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_17216/*"btn_bg_08"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.offButtonName, v14, v15, v16, v17, v18, v19, v20);
  v34.fields.r = 0.0;
  v34.fields.g = 0.0;
  v34.fields.b = 0.0;
  v34.fields.a = 0.25098;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v34, v21, v22, v23, v24, &var40);
  this->fields.offButtonOutlineColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.tabDisabledText, v25, v26, v27, v28, v29, v30, v31);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventInfoTipsArchiveDialog__GetAllNewDispCount(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x21
  EventInfoTipsArchiveDialog_o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w22
  int32_t v7; // w20
  EventInfoTipsArchiveDialog_TabData_o *v8; // x8
  __int64 v10; // x0

  if ( this->fields.mainInfo )
  {
    tabDataList = this->fields.tabDataList;
    v4 = this;
    if ( !tabDataList )
      goto LABEL_14;
    max_length = tabDataList->max_length;
    if ( max_length >= 1 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        if ( v6 >= max_length )
        {
          v10 = sub_B70798(this);
          sub_B70738(v10, 0LL);
        }
        v8 = tabDataList->m_Items[v6];
        if ( !v8 )
          break;
        if ( v8->fields._IsOpened_k__BackingField )
        {
          this = (EventInfoTipsArchiveDialog_o *)v4->fields.mainInfo;
          if ( !this )
            break;
          this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
                                                   (EventInfoTipsArchiveListViewItem_o *)this,
                                                   v8->fields.TabKind,
                                                   v2);
          v7 += (int)this;
        }
        max_length = tabDataList->max_length;
        if ( (int)++v6 >= max_length )
          return v7;
      }
LABEL_14:
      sub_B7076C(this, method);
    }
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveDialog__Init(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.buttonUpdateAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall EventInfoTipsArchiveDialog__OnClickCharacterTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4352E50 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B70694(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    byte_4352E50 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind )
  {
    tabDataList = v2->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !tabDataList->max_length )
    {
      v10 = sub_B70798(this);
      sub_B70738(v10, 0LL);
    }
    v4 = tabDataList->m_Items[0];
    if ( !v4 )
      goto LABEL_15;
    IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B7069C(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v7 = (System_Reflection_MethodBase_o *)sub_B70678(v6, v6[3]);
    if ( IsOpened_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
      EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
      this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
      if ( this )
      {
        EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, method);
        EventInfoTipsArchiveDialog__SetTabKind(v2, 0, v9);
        return;
      }
LABEL_15:
      sub_B7076C(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickCloseButton(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventInfoTipsArchiveListViewItem_o *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_4352E53 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    sub_B70694(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352E53 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_13;
    eventUiId = mainInfo->fields.eventUiId;
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v10->static_fields->TipsArchiveEventUiId = eventUiId;
    v10->static_fields->TipsArchiveCurrrentTab = this->fields.currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, this->fields.currentTabKind, v7);
    v5 = this->fields.mainInfo;
    if ( !v5 )
LABEL_13:
      sub_B7076C(v5, v6);
    EventInfoTipsArchiveListViewItem__SaveData(v5, v6);
    v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickTermsTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4352E51 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B70694(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
    byte_4352E51 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 1 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 1 )
      {
        v10 = sub_B70798(this);
        sub_B70738(v10, 0LL);
      }
      v4 = tabDataList->m_Items[1];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 75) & 2) != 0 )
          v6 = (_QWORD *)sub_B7069C(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_B70678(v6, v6[3]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, method);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 1, v9);
          return;
        }
      }
    }
    sub_B7076C(this, method);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickWorldTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  v2 = this;
  if ( (byte_4352E52 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B70694(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
    byte_4352E52 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 2 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 2 )
      {
        v10 = sub_B70798(this);
        sub_B70738(v10, 0LL);
      }
      v4 = tabDataList->m_Items[2];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 75) & 2) != 0 )
          v6 = (_QWORD *)sub_B7069C(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_B70678(v6, v6[3]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, method);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 2, v9);
          return;
        }
      }
    }
    sub_B7076C(this, method);
  }
}


void __fastcall EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventInfoTipsArchiveDialog_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_4352E4E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__);
    byte_4352E4E = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.buttonUpdateAction, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.buttonUpdateAction,
    (System_Int32_array **)updateAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v17, 0, v18);
  v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SaveScrollBarValue(
        EventInfoTipsArchiveDialog_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v7; // x8
  struct EventInfoTipsArchiveListViewManager_o *ViewListManager; // x8
  UIProgressBar_o *scrollBar; // x8
  struct System_Single_array *TipsArchiveScrollValueList; // x21
  float value; // s0
  __int64 v12; // x0

  if ( (byte_4352E55 & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352E55 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_14;
  if ( tabDataList->max_length <= tab )
    goto LABEL_15;
  v7 = tabDataList->m_Items[tab];
  if ( !v7
    || (ViewListManager = v7->fields.ViewListManager) == 0LL
    || (scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar) == 0LL
    || (TipsArchiveScrollValueList = v5->static_fields->TipsArchiveScrollValueList,
        value = UIProgressBar__get_value(scrollBar, 0LL),
        !TipsArchiveScrollValueList) )
  {
LABEL_14:
    sub_B7076C(v5, *(_QWORD *)&tab);
  }
  if ( TipsArchiveScrollValueList->max_length <= tab )
  {
LABEL_15:
    v12 = sub_B70798(v5);
    sub_B70738(v12, 0LL);
  }
  TipsArchiveScrollValueList->m_Items[tab + 1] = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SetScrollBarValue(
        EventInfoTipsArchiveDialog_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v4; // x20
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v6; // x8
  struct EventInfoTipsArchiveListViewManager_o *ViewListManager; // x8
  UIProgressBar_o *scrollBar; // x20
  __int64 v9; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_4352E56 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352E56 = 1;
  }
  tabDataList = v4->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_14;
  if ( tabDataList->max_length <= tab )
    goto LABEL_15;
  v6 = tabDataList->m_Items[tab];
  if ( !v6 )
    goto LABEL_14;
  ViewListManager = v6->fields.ViewListManager;
  if ( !ViewListManager )
    goto LABEL_14;
  scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar;
  this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = *(_QWORD *)(*(_QWORD *)&this->fields.state + 240LL);
  if ( !v9 )
LABEL_14:
    sub_B7076C(this, *(_QWORD *)&tab);
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)tab )
  {
LABEL_15:
    v10 = sub_B70798(this);
    sub_B70738(v10, 0LL);
  }
  if ( !scrollBar )
    goto LABEL_14;
  UIProgressBar__set_value(scrollBar, *(float *)(v9 + 4LL * tab + 32), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SetTabKind(
        EventInfoTipsArchiveDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UILabel_o *TabLabel; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_g; // x21
  unsigned int v18; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_b; // x24
  float *p_a; // x25
  EventInfoTipsArchiveDialog_TabData_o *v22; // x28
  UIWidget_o *TabSprite; // x22
  int v24; // s0
  float *v28; // x10
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x11
  float *v30; // x8
  float *v31; // x9
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  MethodInfo *v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x22
  int32_t v39; // w23
  System_Action_o *v40; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct EventInfoTipsArchiveListViewManager_o *v48; // x22
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  int v51; // s0
  bool v55; // w1
  UILabel_o *NewIcon; // x22
  __int64 v57; // x0
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4352E4F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__);
    sub_B70694(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
    byte_4352E4F = 1;
  }
  v5 = sub_B70764(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
  EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor((EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_46;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_46;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    v18 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v57 = sub_B70798(TabLabel);
        sub_B70738(v57, 0LL);
      }
      v22 = tabDataList->m_Items[v18];
      if ( !v22 )
        break;
      TabSprite = (UIWidget_o *)v22->fields.TabSprite;
      if ( v22->fields._IsOpened_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
        if ( !TabSprite )
          break;
        UIWidget__set_color(TabSprite, *(UnityEngine_Color_o *)&v24, 0LL);
        TabLabel = v22->fields.TabLabel;
        if ( !TabLabel )
          break;
        v28 = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        v30 = &this->fields.onButtonOutlineColor.fields.a;
        v31 = &this->fields.onButtonOutlineColor.fields.b;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          v28 = p_g;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          p_onButtonOutlineColor = p_offButtonOutlineColor;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          v30 = p_a;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          v31 = p_b;
        v58.fields.b = *v31;
        v58.fields.r = p_onButtonOutlineColor->fields.r;
        v58.fields.a = *v30;
        v58.fields.g = *v28;
        UILabel__set_effectColor(TabLabel, v58, 0LL);
        TabLabel = (UILabel_o *)v22->fields.TabSprite;
        if ( v22->fields.TabKind == *(_DWORD *)(v5 + 24) )
        {
          if ( !TabLabel )
            break;
          UISprite__set_spriteName((UISprite_o *)TabLabel, this->fields.onButtonName, 0LL);
          TabLabel = (UILabel_o *)v22->fields.TabCollider;
          if ( !TabLabel )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabLabel, 0, 0LL);
          TabLabel = (UILabel_o *)v22->fields.ViewListManager;
          if ( !TabLabel )
            break;
          TabLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabLabel, 0LL);
          if ( !TabLabel )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabLabel, 1, 0LL);
          if ( !v22->fields._IsCreatedList_k__BackingField )
          {
            ViewListManager = v22->fields.ViewListManager;
            v39 = *(_DWORD *)(v5 + 24);
            v40 = *(System_Action_o **)(v5 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v40 )
            {
              v40 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
              System_Action___ctor(
                v40,
                (Il2CppObject *)v5,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0LL);
              *(_QWORD *)(v5 + 32) = v40;
              sub_B70630(
                (BattleServantConfConponent_o *)(v5 + 32),
                (System_Int32_array **)v40,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v39, mainInfo, v40, v34);
            v22->fields._IsCreatedList_k__BackingField = 1;
            p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
            p_g = &this->fields.offButtonOutlineColor.fields.g;
            p_a = &this->fields.offButtonOutlineColor.fields.a;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
          }
          v48 = v22->fields.ViewListManager;
          if ( !v48 )
            break;
          v48->fields.callbackFunc = 0LL;
          sub_B70630(
            (BattleServantConfConponent_o *)&v48->fields.callbackFunc,
            0LL,
            v32,
            v33,
            (System_Boolean_array **)v34,
            v35,
            v36,
            v37);
          EventInfoTipsArchiveListViewManager__SetMode_27327296(v48, 1, v49);
        }
        else
        {
          if ( !TabLabel )
            break;
          UISprite__set_spriteName((UISprite_o *)TabLabel, this->fields.offButtonName, 0LL);
          TabLabel = (UILabel_o *)v22->fields.TabCollider;
          if ( !TabLabel )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabLabel, 1, 0LL);
          TabLabel = (UILabel_o *)v22->fields.ViewListManager;
          if ( !TabLabel )
            break;
          TabLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabLabel, 0LL);
          if ( !TabLabel )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabLabel, 0, 0LL);
        }
        TabLabel = (UILabel_o *)this->fields.mainInfo;
        if ( !TabLabel )
          break;
        NewIcon = (UILabel_o *)v22->fields.NewIcon;
        TabLabel = (UILabel_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                  (EventInfoTipsArchiveListViewItem_o *)TabLabel,
                                  v22->fields.TabKind,
                                  v50);
        if ( !NewIcon )
          break;
        v55 = (unsigned __int8)TabLabel & 1;
        TabLabel = NewIcon;
      }
      else
      {
        *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_gray(0LL);
        if ( !TabSprite )
          break;
        UIWidget__set_color(TabSprite, *(UnityEngine_Color_o *)&v51, 0LL);
        TabLabel = v22->fields.TabLabel;
        if ( !TabLabel )
          break;
        v59.fields.r = p_offButtonOutlineColor->fields.r;
        v59.fields.g = *p_g;
        v59.fields.b = *p_b;
        v59.fields.a = *p_a;
        UILabel__set_effectColor(TabLabel, v59, 0LL);
        TabLabel = (UILabel_o *)v22->fields.NewIcon;
        if ( !TabLabel )
          break;
        v55 = 0;
      }
      ShiningIconComponent__Set_33848384((ShiningIconComponent_o *)TabLabel, v55, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_45;
    }
LABEL_46:
    sub_B7076C(TabLabel, v7);
  }
LABEL_45:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v5 + 24), v14);
}


void __fastcall EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4352E54 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4352E54 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL )
      sub_B7076C(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__Setup(
        EventInfoTipsArchiveDialog_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t *p_TipsArchiveEventUiId; // x9
  int32_t TipsArchiveEventUiId; // t1
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v14; // x24
  const MethodInfo *v15; // x5
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v26; // w24
  EventInfoTipsArchiveDialog_TabData_o *v27; // x25
  int32_t CondId; // w20
  int32_t CondTypeKind; // w22
  int64_t CondNum; // x21
  UISprite_o *TabSprite; // x8
  __int64 v32; // x9
  UIWidget_o *v33; // x20
  int v34; // s0
  UIWidget_o *TabLabel; // x20
  int v39; // s0
  float *p_g; // x10
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x11
  float *p_a; // x8
  float *p_b; // x9
  float g; // s1
  float b; // s2
  float r; // s0
  float a; // s3
  int v51; // s0
  UIWidget_o *v55; // x20
  int v56; // s0
  __int64 v60; // x0

  if ( (byte_4352E4D & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&EventInfoTipsArchiveListViewItem_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4352E4D = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_static_fields = &v7->static_fields;
  static_fields = v7->static_fields;
  TipsArchiveEventUiId = static_fields->TipsArchiveEventUiId;
  p_TipsArchiveEventUiId = &static_fields->TipsArchiveEventUiId;
  if ( TipsArchiveEventUiId != eventUiId )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      p_TipsArchiveEventUiId = &TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId;
    }
    *p_TipsArchiveEventUiId = eventUiId;
    (*p_static_fields)->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0LL);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v7->static_fields->TipsArchiveCurrrentTab;
  v14 = (EventInfoTipsArchiveListViewItem_o *)sub_B70764(EventInfoTipsArchiveListViewItem_TypeInfo);
  EventInfoTipsArchiveListViewItem___ctor(v14, eventUiId, atlasList, parameterBasePrefab, objectDataList, v15);
  this->fields.mainInfo = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_48;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, v22);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_48;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        v60 = sub_B70798(mainInfo);
        sub_B70738(v60, 0LL);
      }
      v27 = tabDataList->m_Items[v26];
      if ( !v27 )
        break;
      v27->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v27->fields.CondTypeKind;
      CondId = v27->fields.CondId;
      CondNum = v27->fields.CondNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0LL);
      TabSprite = v27->fields.TabSprite;
      v27->fields._IsOpened_k__BackingField = (unsigned __int8)mainInfo & 1;
      if ( !TabSprite )
        break;
      v32 = 112LL;
      if ( v27->fields.TabKind == this->fields.currentTabKind )
        v32 = 88LL;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v32), 0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v27->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v27->fields.TabKind != this->fields.currentTabKind,
        0LL);
      v33 = (UIWidget_o *)v27->fields.TabSprite;
      if ( v27->fields._IsOpened_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
        if ( !v33 )
          break;
        UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v27->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v27->fields.TabName, 0LL);
        TabLabel = (UIWidget_o *)v27->fields.TabLabel;
        *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
        if ( !TabLabel )
          break;
        UIWidget__set_color(TabLabel, *(UnityEngine_Color_o *)&v39, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v27->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        if ( v27->fields.TabKind != this->fields.currentTabKind )
          p_g = &this->fields.offButtonOutlineColor.fields.g;
        if ( v27->fields.TabKind == this->fields.currentTabKind )
          p_offButtonOutlineColor = &this->fields.onButtonOutlineColor;
        g = *p_g;
        if ( v27->fields.TabKind != this->fields.currentTabKind )
          p_a = &this->fields.offButtonOutlineColor.fields.a;
        if ( v27->fields.TabKind != this->fields.currentTabKind )
          p_b = &this->fields.offButtonOutlineColor.fields.b;
        b = *p_b;
        r = p_offButtonOutlineColor->fields.r;
        a = *p_a;
      }
      else
      {
        *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_gray(0LL);
        if ( !v33 )
          break;
        UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v51, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v27->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0LL);
        v55 = (UIWidget_o *)v27->fields.TabLabel;
        *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_gray(0LL);
        if ( !v55 )
          break;
        UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v27->fields.TabLabel;
        if ( !mainInfo )
          break;
        g = this->fields.offButtonOutlineColor.fields.g;
        b = this->fields.offButtonOutlineColor.fields.b;
        a = this->fields.offButtonOutlineColor.fields.a;
        r = this->fields.offButtonOutlineColor.fields.r;
      }
      UILabel__set_effectColor((UILabel_o *)mainInfo, *(UnityEngine_Color_o *)(&g - 1), 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_48:
    sub_B7076C(mainInfo, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__UpdateNewIconDisp(
        EventInfoTipsArchiveDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  int max_length; // w9
  EventInfoTipsArchiveDialog_o *v5; // x19
  unsigned int v6; // w10
  EventInfoTipsArchiveDialog_TabData_o *v7; // x21
  ShiningIconComponent_o *NewIcon; // x20
  __int64 v9; // x0

  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_16;
  max_length = tabDataList->max_length;
  v5 = this;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v9 = sub_B70798(this);
        sub_B70738(v9, 0LL);
      }
      v7 = tabDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_16;
      if ( v7->fields.TabKind == kind && v7->fields._IsOpened_k__BackingField )
        break;
      if ( (int)++v6 >= max_length )
        goto LABEL_14;
    }
    this = (EventInfoTipsArchiveDialog_o *)this->fields.mainInfo;
    if ( this )
    {
      NewIcon = v7->fields.NewIcon;
      this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                               (EventInfoTipsArchiveListViewItem_o *)this,
                                               kind,
                                               method);
      if ( NewIcon )
      {
        ShiningIconComponent__Set_33848384(NewIcon, (unsigned __int8)this & 1, 0LL);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(
            (EventInfoTipsArchiveListViewManager_o *)this,
            *(const MethodInfo **)&kind);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&kind);
  }
LABEL_14:
  ActionExtensions__Call(v5->fields.buttonUpdateAction, 0LL);
}


void __fastcall EventInfoTipsArchiveDialog___OnClickCloseButton_b__28_0(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(this, 1, v2);
}


void __fastcall EventInfoTipsArchiveDialog___Open_b__22_0(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentTabKind; // w1

  currentTabKind = this->fields.currentTabKind;
  this->fields.state = 2;
  EventInfoTipsArchiveDialog__SetTabKind(this, currentTabKind, v2);
}


UnityEngine_GameObject_o *__fastcall EventInfoTipsArchiveDialog__get_closeBtnObject(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObject;
}


void __fastcall EventInfoTipsArchiveDialog_IndexData___ctor(
        EventInfoTipsArchiveDialog_IndexData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveDialog_ObjectData___ctor(
        EventInfoTipsArchiveDialog_ObjectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveDialog_TabData___ctor(
        EventInfoTipsArchiveDialog_TabData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveDialog_TabData__get_IsCreatedList(
        EventInfoTipsArchiveDialog_TabData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCreatedList_k__BackingField;
}


bool __fastcall EventInfoTipsArchiveDialog_TabData__get_IsOpened(
        EventInfoTipsArchiveDialog_TabData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


void __fastcall EventInfoTipsArchiveDialog_TabData__set_IsCreatedList(
        EventInfoTipsArchiveDialog_TabData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCreatedList_k__BackingField = value;
}


void __fastcall EventInfoTipsArchiveDialog_TabData__set_IsOpened(
        EventInfoTipsArchiveDialog_TabData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void __fastcall EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoTipsArchiveDialog___c__DisplayClass23_0___SetTabKind_b__0(
        EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(_4__this, this->fields.kind, 0LL);
}