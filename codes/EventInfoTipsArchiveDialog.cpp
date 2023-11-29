void __fastcall EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA199 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16894, v9);
    sub_B16FFC(&StringLiteral_16895, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FA199 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16895;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_16895;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onButtonName, v12, v2, v3, v4, v5, v6, v7);
  v36.fields.g = 0.20784;
  v36.fields.b = 0.20392;
  v36.fields.r = 1.0;
  v36.fields.a = 0.25098;
  var40.name = 0LL;
  var40.klass = 0LL;
  UnityEngine_Color___ctor(v36, v13, v14, v15, v16, (const MethodInfo *)&var40.name);
  this->fields.onButtonOutlineColor = *(struct UnityEngine_Color_o *)&var40.name;
  v17 = (System_Int32_array **)StringLiteral_16894;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_16894;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.offButtonName, v17, v18, v19, v20, v21, v22, v23);
  v37.fields.r = 0.0;
  v37.fields.g = 0.0;
  v37.fields.b = 0.0;
  v37.fields.a = 0.25098;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v37, v24, v25, v26, v27, &var40);
  this->fields.offButtonOutlineColor = *(struct UnityEngine_Color_o *)&var40.methodPointer;
  v28 = (System_Int32_array **)StringLiteral_1;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tabDisabledText, v28, v29, v30, v31, v32, v33, v34);
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
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0

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
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v8 = tabDataList->m_Items[v6];
        if ( !v8 )
          break;
        if ( v8->fields._IsOpened_k__BackingField )
        {
          mainInfo = v4->fields.mainInfo;
          if ( !mainInfo )
            break;
          this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
                                                   mainInfo,
                                                   v8->fields.TabKind,
                                                   v2);
          v7 += (int)this;
        }
        max_length = tabDataList->max_length;
        if ( (int)++v6 >= max_length )
          return v7;
      }
LABEL_14:
      sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.buttonUpdateAction, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall EventInfoTipsArchiveDialog__OnClickCharacterTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveDialog_o *v3; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v5; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_40FA192 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B16FFC(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__, method);
    byte_40FA192 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind )
  {
    tabDataList = v3->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !tabDataList->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v5 = tabDataList->m_Items[0];
    if ( !v5 )
      goto LABEL_15;
    IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
    v7 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    if ( IsOpened_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
      mainInfo = v3->fields.mainInfo;
      if ( mainInfo )
      {
        EventInfoTipsArchiveListViewItem__SaveData(mainInfo, v10);
        EventInfoTipsArchiveDialog__SetTabKind(v3, 0, v12);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickCloseButton(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v11; // x0
  const MethodInfo *v12; // x1
  EventInfoTipsArchiveListViewItem_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FA195 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__, v3);
    sub_B16FFC(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40FA195 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B17004(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_13;
    eventUiId = mainInfo->fields.eventUiId;
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->TipsArchiveEventUiId = eventUiId;
    v11->static_fields->TipsArchiveCurrrentTab = this->fields.currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, this->fields.currentTabKind, v8);
    v13 = this->fields.mainInfo;
    if ( !v13 )
LABEL_13:
      sub_B170D4();
    EventInfoTipsArchiveListViewItem__SaveData(v13, v12);
    v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickTermsTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveDialog_o *v3; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v5; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_40FA193 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B16FFC(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__, method);
    byte_40FA193 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind != 1 )
  {
    tabDataList = v3->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 1 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v5 = tabDataList->m_Items[1];
      if ( v5 )
      {
        IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
        v7 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B17004(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
        mainInfo = v3->fields.mainInfo;
        if ( mainInfo )
        {
          EventInfoTipsArchiveListViewItem__SaveData(mainInfo, v10);
          EventInfoTipsArchiveDialog__SetTabKind(v3, 1, v12);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickWorldTab(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveDialog_o *v3; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v5; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  const MethodInfo *v12; // x2

  v3 = this;
  if ( (byte_40FA194 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B16FFC(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__, method);
    byte_40FA194 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind != 2 )
  {
    tabDataList = v3->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 2 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v5 = tabDataList->m_Items[2];
      if ( v5 )
      {
        IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
        v7 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B17004(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
        mainInfo = v3->fields.mainInfo;
        if ( mainInfo )
        {
          EventInfoTipsArchiveListViewItem__SaveData(mainInfo, v10);
          EventInfoTipsArchiveDialog__SetTabKind(v3, 2, v12);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  EventInfoTipsArchiveDialog_o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x20

  if ( (byte_40FA190 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, updateAction);
    sub_B16FFC(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__, v5);
    byte_40FA190 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.buttonUpdateAction, 0LL, v6, v7, v8, v9, v10, v11);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buttonUpdateAction,
    (System_Int32_array **)updateAction,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v18, 0, v19);
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
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

  if ( (byte_40FA197 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    byte_40FA197 = 1;
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
    sub_B170D4();
  }
  if ( TipsArchiveScrollValueList->max_length <= tab )
  {
LABEL_15:
    sub_B17100(v5, *(_QWORD *)&tab, method);
    sub_B170A0();
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

  v4 = this;
  if ( (byte_40FA198 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    byte_40FA198 = 1;
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
  v9 = *(_QWORD *)(*(_QWORD *)&this->fields.state + 224LL);
  if ( !v9 )
LABEL_14:
    sub_B170D4();
  if ( *(_DWORD *)(v9 + 24) <= (unsigned int)tab )
  {
LABEL_15:
    sub_B17100(this, *(_QWORD *)&tab, method);
    sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_g; // x21
  unsigned int v22; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_b; // x24
  float *p_a; // x25
  EventInfoTipsArchiveDialog_TabData_o *v26; // x28
  UIWidget_o *TabSprite; // x22
  int v28; // s0
  UILabel_o *TabLabel; // x0
  float *v33; // x10
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x11
  float *v35; // x8
  float *v36; // x9
  UISprite_o *v37; // x0
  UnityEngine_Collider_o *TabCollider; // x0
  UnityEngine_Component_o *ViewListManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  MethodInfo *v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  EventInfoTipsArchiveListViewManager_o *v48; // x22
  int32_t v49; // w23
  System_Action_o *v50; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct EventInfoTipsArchiveListViewManager_o *v58; // x22
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x2
  int v61; // s0
  UILabel_o *v65; // x0
  ShiningIconComponent_o *v66; // x0
  bool v67; // w1
  UnityEngine_Collider_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  EventInfoTipsArchiveListViewItem_o *v71; // x0
  ShiningIconComponent_o *NewIcon; // x22
  bool IsNewDispTab; // w0
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA191 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__, v7);
    sub_B16FFC(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo, v8);
    byte_40FA191 = 1;
  }
  v9 = sub_B170CC(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&kind, method, v3, v4);
  EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor((EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_46;
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_46;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    v22 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        sub_B17100(v16, v17, v18);
        sub_B170A0();
      }
      v26 = tabDataList->m_Items[v22];
      if ( !v26 )
        break;
      TabSprite = (UIWidget_o *)v26->fields.TabSprite;
      if ( v26->fields._IsOpened_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
        if ( !TabSprite )
          break;
        UIWidget__set_color(TabSprite, *(UnityEngine_Color_o *)&v28, 0LL);
        TabLabel = v26->fields.TabLabel;
        if ( !TabLabel )
          break;
        v33 = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        v35 = &this->fields.onButtonOutlineColor.fields.a;
        v36 = &this->fields.onButtonOutlineColor.fields.b;
        if ( v26->fields.TabKind != this->fields.currentTabKind )
          v33 = p_g;
        if ( v26->fields.TabKind != this->fields.currentTabKind )
          p_onButtonOutlineColor = p_offButtonOutlineColor;
        if ( v26->fields.TabKind != this->fields.currentTabKind )
          v35 = p_a;
        if ( v26->fields.TabKind != this->fields.currentTabKind )
          v36 = p_b;
        v74.fields.b = *v36;
        v74.fields.r = p_onButtonOutlineColor->fields.r;
        v74.fields.a = *v35;
        v74.fields.g = *v33;
        UILabel__set_effectColor(TabLabel, v74, 0LL);
        v37 = v26->fields.TabSprite;
        if ( v26->fields.TabKind == *(_DWORD *)(v9 + 24) )
        {
          if ( !v37 )
            break;
          UISprite__set_spriteName(v37, this->fields.onButtonName, 0LL);
          TabCollider = (UnityEngine_Collider_o *)v26->fields.TabCollider;
          if ( !TabCollider )
            break;
          UnityEngine_Collider__set_enabled(TabCollider, 0, 0LL);
          ViewListManager = (UnityEngine_Component_o *)v26->fields.ViewListManager;
          if ( !ViewListManager )
            break;
          gameObject = UnityEngine_Component__get_gameObject(ViewListManager, 0LL);
          if ( !gameObject )
            break;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          if ( !v26->fields._IsCreatedList_k__BackingField )
          {
            v48 = v26->fields.ViewListManager;
            v49 = *(_DWORD *)(v9 + 24);
            v50 = *(System_Action_o **)(v9 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v50 )
            {
              v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
              System_Action___ctor(
                v50,
                (Il2CppObject *)v9,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0LL);
              *(_QWORD *)(v9 + 32) = v50;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v9 + 32),
                (System_Int32_array **)v50,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57);
            }
            if ( !v48 )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(v48, v49, mainInfo, v50, v44);
            v26->fields._IsCreatedList_k__BackingField = 1;
            p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
            p_g = &this->fields.offButtonOutlineColor.fields.g;
            p_a = &this->fields.offButtonOutlineColor.fields.a;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
          }
          v58 = v26->fields.ViewListManager;
          if ( !v58 )
            break;
          v58->fields.callbackFunc = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v58->fields.callbackFunc,
            0LL,
            v42,
            v43,
            (System_Boolean_array **)v44,
            v45,
            v46,
            v47);
          EventInfoTipsArchiveListViewManager__SetMode_25389800(v58, 1, v59);
        }
        else
        {
          if ( !v37 )
            break;
          UISprite__set_spriteName(v37, this->fields.offButtonName, 0LL);
          v68 = (UnityEngine_Collider_o *)v26->fields.TabCollider;
          if ( !v68 )
            break;
          UnityEngine_Collider__set_enabled(v68, 1, 0LL);
          v69 = (UnityEngine_Component_o *)v26->fields.ViewListManager;
          if ( !v69 )
            break;
          v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
          if ( !v70 )
            break;
          UnityEngine_GameObject__SetActive(v70, 0, 0LL);
        }
        v71 = this->fields.mainInfo;
        if ( !v71 )
          break;
        NewIcon = v26->fields.NewIcon;
        IsNewDispTab = EventInfoTipsArchiveListViewItem__IsNewDispTab(v71, v26->fields.TabKind, v60);
        if ( !NewIcon )
          break;
        v67 = IsNewDispTab;
        v66 = NewIcon;
      }
      else
      {
        *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_gray(0LL);
        if ( !TabSprite )
          break;
        UIWidget__set_color(TabSprite, *(UnityEngine_Color_o *)&v61, 0LL);
        v65 = v26->fields.TabLabel;
        if ( !v65 )
          break;
        v75.fields.r = p_offButtonOutlineColor->fields.r;
        v75.fields.g = *p_g;
        v75.fields.b = *p_b;
        v75.fields.a = *p_a;
        UILabel__set_effectColor(v65, v75, 0LL);
        v66 = v26->fields.NewIcon;
        if ( !v66 )
          break;
        v67 = 0;
      }
      ShiningIconComponent__Set_33652660(v66, v67, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_45;
    }
LABEL_46:
    sub_B170D4();
  }
LABEL_45:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v9 + 24), v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v7; // x1
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *v9; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40FA196 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, enable);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v4);
    byte_40FA196 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, enable);
    byte_40F6042 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
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
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
      byte_40F6042 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    v9 = v8->static_fields->mInstance;
    if ( !v9 || (mTitleInfo = v9->fields.mTitleInfo) == 0LL )
      sub_B170D4();
    TitleInfoControl__SetTouchEnable(mTitleInfo, enable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__Setup(
        EventInfoTipsArchiveDialog_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x9
  int32_t *p_TipsArchiveEventUiId; // x9
  int32_t TipsArchiveEventUiId; // t1
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v20; // x24
  const MethodInfo *v21; // x5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v35; // w24
  EventInfoTipsArchiveDialog_TabData_o *v36; // x25
  int32_t CondId; // w20
  int32_t CondTypeKind; // w22
  int64_t CondNum; // x21
  bool IsOpen; // w0
  UISprite_o *TabSprite; // x8
  __int64 v42; // x9
  UnityEngine_Collider_o *TabCollider; // x0
  UIWidget_o *v44; // x20
  int v45; // s0
  UILabel_o *TabLabel; // x0
  UIWidget_o *v50; // x20
  int v51; // s0
  UILabel_o *v55; // x0
  float *p_g; // x10
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x11
  float *p_a; // x8
  float *p_b; // x9
  float g; // s1
  float b; // s2
  float r; // s0
  float a; // s3
  int v64; // s0
  UILabel_o *v68; // x0
  UIWidget_o *v69; // x20
  int v70; // s0

  if ( (byte_40FA18F & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&eventUiId);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40FA18F = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  p_static_fields = &v13->static_fields;
  static_fields = v13->static_fields;
  TipsArchiveEventUiId = static_fields->TipsArchiveEventUiId;
  p_TipsArchiveEventUiId = &static_fields->TipsArchiveEventUiId;
  if ( TipsArchiveEventUiId != eventUiId )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      p_TipsArchiveEventUiId = &TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId;
    }
    *p_TipsArchiveEventUiId = eventUiId;
    (*p_static_fields)->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0LL);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v13->static_fields->TipsArchiveCurrrentTab;
  v20 = (EventInfoTipsArchiveListViewItem_o *)sub_B170CC(EventInfoTipsArchiveListViewItem_TypeInfo, v9, v10, v11, v12);
  EventInfoTipsArchiveListViewItem___ctor(v20, eventUiId, atlasList, parameterBasePrefab, objectDataList, v21);
  this->fields.mainInfo = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mainInfo,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_48;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, v28);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_48;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= max_length )
      {
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      v36 = tabDataList->m_Items[v35];
      if ( !v36 )
        break;
      v36->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v36->fields.CondTypeKind;
      CondId = v36->fields.CondId;
      CondNum = v36->fields.CondNum;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0LL);
      TabSprite = v36->fields.TabSprite;
      v36->fields._IsOpened_k__BackingField = IsOpen;
      if ( !TabSprite )
        break;
      v42 = 112LL;
      if ( v36->fields.TabKind == this->fields.currentTabKind )
        v42 = 88LL;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v42), 0LL);
      TabCollider = (UnityEngine_Collider_o *)v36->fields.TabCollider;
      if ( !TabCollider )
        break;
      UnityEngine_Collider__set_enabled(TabCollider, v36->fields.TabKind != this->fields.currentTabKind, 0LL);
      v44 = (UIWidget_o *)v36->fields.TabSprite;
      if ( v36->fields._IsOpened_k__BackingField )
      {
        *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
        if ( !v44 )
          break;
        UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v45, 0LL);
        TabLabel = v36->fields.TabLabel;
        if ( !TabLabel )
          break;
        UILabel__set_text(TabLabel, v36->fields.TabName, 0LL);
        v50 = (UIWidget_o *)v36->fields.TabLabel;
        *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
        if ( !v50 )
          break;
        UIWidget__set_color(v50, *(UnityEngine_Color_o *)&v51, 0LL);
        v55 = v36->fields.TabLabel;
        if ( !v55 )
          break;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        if ( v36->fields.TabKind != this->fields.currentTabKind )
          p_g = &this->fields.offButtonOutlineColor.fields.g;
        if ( v36->fields.TabKind == this->fields.currentTabKind )
          p_offButtonOutlineColor = &this->fields.onButtonOutlineColor;
        g = *p_g;
        if ( v36->fields.TabKind != this->fields.currentTabKind )
          p_a = &this->fields.offButtonOutlineColor.fields.a;
        if ( v36->fields.TabKind != this->fields.currentTabKind )
          p_b = &this->fields.offButtonOutlineColor.fields.b;
        b = *p_b;
        r = p_offButtonOutlineColor->fields.r;
        a = *p_a;
      }
      else
      {
        *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_gray(0LL);
        if ( !v44 )
          break;
        UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v64, 0LL);
        v68 = v36->fields.TabLabel;
        if ( !v68 )
          break;
        UILabel__set_text(v68, this->fields.tabDisabledText, 0LL);
        v69 = (UIWidget_o *)v36->fields.TabLabel;
        *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_gray(0LL);
        if ( !v69 )
          break;
        UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
        v55 = v36->fields.TabLabel;
        if ( !v55 )
          break;
        g = this->fields.offButtonOutlineColor.fields.g;
        b = this->fields.offButtonOutlineColor.fields.b;
        a = this->fields.offButtonOutlineColor.fields.a;
        r = this->fields.offButtonOutlineColor.fields.r;
      }
      UILabel__set_effectColor(v55, *(UnityEngine_Color_o *)(&g - 1), 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v35 >= max_length )
        return;
    }
LABEL_48:
    sub_B170D4();
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
  unsigned int v6; // w10
  EventInfoTipsArchiveDialog_TabData_o *v7; // x21
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  ShiningIconComponent_o *NewIcon; // x20
  bool IsNewDispTab; // w0
  const MethodInfo *v11; // x1
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x0

  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_16;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&kind, method);
        sub_B170A0();
      }
      v7 = tabDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_16;
      if ( v7->fields.TabKind == kind && v7->fields._IsOpened_k__BackingField )
        break;
      if ( (int)++v6 >= max_length )
        goto LABEL_14;
    }
    mainInfo = this->fields.mainInfo;
    if ( mainInfo )
    {
      NewIcon = v7->fields.NewIcon;
      IsNewDispTab = EventInfoTipsArchiveListViewItem__IsNewDispTab(mainInfo, kind, method);
      if ( NewIcon )
      {
        ShiningIconComponent__Set_33652660(NewIcon, IsNewDispTab, 0LL);
        ViewListManager = v7->fields.ViewListManager;
        if ( ViewListManager )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp(ViewListManager, v11);
          goto LABEL_14;
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  ActionExtensions__Call(this->fields.buttonUpdateAction, 0LL);
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
    sub_B170D4();
  EventInfoTipsArchiveDialog__SaveScrollBarValue(_4__this, this->fields.kind, 0LL);
}