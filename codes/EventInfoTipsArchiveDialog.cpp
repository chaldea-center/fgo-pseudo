void EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1

  if ( (byte_593A4B6 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_18166/*"btn_bg_08"*/);
    sub_21FFC50(&StringLiteral_18167/*"btn_bg_09"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A4B6 = 1;
  }
  v9 = StringLiteral_18167/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_18167/*"btn_bg_09"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onButtonName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_18166/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_18166/*"btn_bg_08"*/;
  this->fields.onButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_E92A00;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.offButtonName, v10, v11, v12, v13, v14, v15, v16);
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.offButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_E92BB0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.tabDisabledText, v17, v18, v19, v20, v21, v22, v23);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v24);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t EventInfoTipsArchiveDialog__GetAllNewDispCount(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x21
  EventInfoTipsArchiveDialog_o *v3; // x19
  int max_length; // w8
  unsigned int v5; // w22
  int32_t v6; // w20
  EventInfoTipsArchiveDialog_TabData_o *v7; // x8

  if ( this->fields.mainInfo )
  {
    tabDataList = this->fields.tabDataList;
    v3 = this;
    if ( !tabDataList )
      goto LABEL_14;
    max_length = tabDataList->max_length;
    if ( max_length >= 1 )
    {
      v5 = 0;
      v6 = 0;
      while ( 1 )
      {
        if ( v5 >= max_length )
          sub_21FFED4(this);
        v7 = tabDataList->m_Items[v5];
        if ( !v7 )
          break;
        if ( v7->fields._IsOpened_k__BackingField )
        {
          this = (EventInfoTipsArchiveDialog_o *)v3->fields.mainInfo;
          if ( !this )
            break;
          this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
                                                   (EventInfoTipsArchiveListViewItem_o *)this,
                                                   v7->fields.TabKind,
                                                   0);
          v6 += (int)this;
        }
        max_length = tabDataList->max_length;
        if ( (int)++v5 >= max_length )
          return v6;
      }
LABEL_14:
      sub_21FFECC(this, method);
    }
  }
  return 0;
}


void EventInfoTipsArchiveDialog__Init(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.buttonUpdateAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.buttonUpdateAction, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoTipsArchiveDialog__OnClickCharacterTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_593A4AF & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_21FFC50(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    byte_593A4AF = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind )
  {
    tabDataList = v2->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_17;
    if ( !LODWORD(tabDataList->max_length) )
      sub_21FFED4(this);
    v4 = tabDataList->m_Items[0];
    if ( !v4 )
      goto LABEL_17;
    v5 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( v4->fields._IsOpened_k__BackingField )
    {
      if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v7);
      this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
      if ( this )
      {
        EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0);
        EventInfoTipsArchiveDialog__SetTabKind(v2, 0, v8);
        return;
      }
LABEL_17:
      sub_21FFECC(this, method);
    }
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
}


void EventInfoTipsArchiveDialog__OnClickCloseButton(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventInfoTipsArchiveListViewItem_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t currentTabKind; // w1
  System_Action_o *v13; // x20

  if ( (byte_593A4B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A4B2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_12;
    eventUiId = mainInfo->fields.eventUiId;
    v10 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    currentTabKind = this->fields.currentTabKind;
    static_fields->TipsArchiveEventUiId = eventUiId;
    static_fields->TipsArchiveCurrrentTab = currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, currentTabKind, v7);
    v5 = this->fields.mainInfo;
    if ( !v5 )
LABEL_12:
      sub_21FFECC(v5, v6);
    EventInfoTipsArchiveListViewItem__SaveData(v5, 0);
    v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void EventInfoTipsArchiveDialog__OnClickTermsTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_593A4B0 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_21FFC50(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
    byte_593A4B0 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 1 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( (tabDataList->max_length & 0xFFFFFFFE) == 0 )
        sub_21FFED4(this);
      v4 = tabDataList->m_Items[1];
      if ( v4 )
      {
        v5 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( !v4->fields._IsOpened_k__BackingField )
        {
          if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
            v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
          v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
          return;
        }
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v7);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 1, v8);
          return;
        }
      }
    }
    sub_21FFECC(this, method);
  }
}


void EventInfoTipsArchiveDialog__OnClickWorldTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  System_Reflection_MethodBase_o *v9; // x0

  v2 = this;
  if ( (byte_593A4B1 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_21FFC50(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
    byte_593A4B1 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 2 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( LODWORD(tabDataList->max_length) <= 2 )
        sub_21FFED4(this);
      v4 = tabDataList->m_Items[2];
      if ( v4 )
      {
        v5 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( !v4->fields._IsOpened_k__BackingField )
        {
          if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
            v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
          v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
          return;
        }
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_21FFC68(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v7);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 2, v8);
          return;
        }
      }
    }
    sub_21FFECC(this, method);
  }
}


void EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  EventInfoTipsArchiveDialog_o *v17; // x0
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_593A4AD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__);
    byte_593A4AD = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.buttonUpdateAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.buttonUpdateAction, 0, v5, v6, v7, v8, v9, v10);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buttonUpdateAction,
    (int32_t)updateAction,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v17, 0, v18);
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveDialog__SaveScrollBarValue(
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

  if ( (byte_593A4B4 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A4B4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    v5 = TerminalPramsManager_TypeInfo;
  }
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_13;
  if ( LODWORD(tabDataList->max_length) <= tab )
    goto LABEL_14;
  v7 = tabDataList->m_Items[tab];
  if ( !v7
    || (ViewListManager = v7->fields.ViewListManager) == 0
    || (scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar) == 0
    || (TipsArchiveScrollValueList = v5->static_fields->TipsArchiveScrollValueList,
        value = UIProgressBar__get_value(scrollBar, 0),
        !TipsArchiveScrollValueList) )
  {
LABEL_13:
    sub_21FFECC(v5, *(_QWORD *)&tab);
  }
  if ( LODWORD(TipsArchiveScrollValueList->max_length) <= tab )
LABEL_14:
    sub_21FFED4(v5);
  TipsArchiveScrollValueList->m_Items[tab] = value;
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveDialog__SetScrollBarValue(
        EventInfoTipsArchiveDialog_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v4; // x20
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v6; // x8
  struct EventInfoTipsArchiveListViewManager_o *ViewListManager; // x8
  UIProgressBar_o *scrollBar; // x20
  EventInfoTipsArchiveDialog_ObjectData_o *v9; // x8

  v4 = this;
  if ( (byte_593A4B5 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A4B5 = 1;
  }
  tabDataList = v4->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_13;
  if ( LODWORD(tabDataList->max_length) <= tab )
    goto LABEL_14;
  v6 = tabDataList->m_Items[tab];
  if ( !v6 )
    goto LABEL_13;
  ViewListManager = v6->fields.ViewListManager;
  if ( !ViewListManager )
    goto LABEL_13;
  scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar;
  this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = this->fields.objectDataList->m_Items[29];
  if ( !v9 )
LABEL_13:
    sub_21FFECC(this, *(_QWORD *)&tab);
  if ( LODWORD(v9->fields.IndexDataList) <= tab )
LABEL_14:
    sub_21FFED4(this);
  if ( !scrollBar )
    goto LABEL_13;
  UIProgressBar__set_value(scrollBar, *((float *)&v9[1].klass + tab), 0);
}


void EventInfoTipsArchiveDialog__SetTabKind(EventInfoTipsArchiveDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x20
  UIWidget_o *TabSprite; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x25
  int max_length; // w8
  unsigned int v17; // w26
  EventInfoTipsArchiveDialog_TabData_o *v18; // x28
  int32_t TabKind; // w8
  int32_t currentTabKind; // w9
  __int64 v21; // x10
  __int64 v22; // x11
  bool v23; // zf
  __int64 v24; // x8
  __int64 v25; // x9
  System_Action_o *v26; // x24
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x21
  int32_t v28; // w22
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x23
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  bool v36; // w1
  UIWidget_o *NewIcon; // x21
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A4AE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__);
    sub_21FFC50(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
    byte_593A4AE = 1;
  }
  v5 = sub_21FFEBC(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
  EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor((EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  tabDataList = this->fields.tabDataList;
  *(_DWORD *)(v5 + 24) = kind;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_47;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_21FFED4(TabSprite);
      v18 = tabDataList->m_Items[v17];
      if ( !v18 )
        break;
      TabSprite = (UIWidget_o *)v18->fields.TabSprite;
      if ( v18->fields._IsOpened_k__BackingField )
      {
        if ( !TabSprite )
          break;
        v38.fields.r = 1.0;
        v38.fields.g = 1.0;
        v38.fields.b = 1.0;
        v38.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v38, 0);
        TabSprite = (UIWidget_o *)v18->fields.TabLabel;
        if ( !TabSprite )
          break;
        TabKind = v18->fields.TabKind;
        currentTabKind = this->fields.currentTabKind;
        v21 = 116;
        v22 = 144;
        v23 = TabKind == currentTabKind;
        if ( TabKind == currentTabKind )
          v24 = 112;
        else
          v24 = 136;
        if ( v23 )
          v25 = 124;
        else
          v25 = 148;
        if ( v23 )
          v22 = 120;
        else
          v21 = 140;
        v39.fields.a = *(float *)((char *)&this->klass + v25);
        v39.fields.g = *(float *)((char *)&this->klass + v21);
        v39.fields.b = *(float *)((char *)&this->klass + v22);
        v39.fields.r = *(float *)((char *)&this->klass + v24);
        UILabel__set_effectColor((UILabel_o *)TabSprite, v39, 0);
        TabSprite = (UIWidget_o *)v18->fields.TabSprite;
        if ( v18->fields.TabKind == *(_DWORD *)(v5 + 24) )
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.onButtonName, 0);
          TabSprite = (UIWidget_o *)v18->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 0, 0);
          TabSprite = (UIWidget_o *)v18->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 1, 0);
          if ( !v18->fields._IsCreatedList_k__BackingField )
          {
            v26 = *(System_Action_o **)(v5 + 32);
            ViewListManager = v18->fields.ViewListManager;
            v28 = *(_DWORD *)(v5 + 24);
            mainInfo = this->fields.mainInfo;
            if ( !v26 )
            {
              v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v26,
                (Il2CppObject *)v5,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0);
              *(_QWORD *)(v5 + 32) = v26;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v26, v30, v31, v32, v33, v34, v35);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v28, mainInfo, v26, 0);
            v18->fields._IsCreatedList_k__BackingField = 1;
          }
          TabSprite = (UIWidget_o *)v18->fields.ViewListManager;
          if ( !TabSprite )
            break;
          EventInfoTipsArchiveListViewManager__SetMode((EventInfoTipsArchiveListViewManager_o *)TabSprite, 1, 0, 0);
        }
        else
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.offButtonName, 0);
          TabSprite = (UIWidget_o *)v18->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 1, 0);
          TabSprite = (UIWidget_o *)v18->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 0, 0);
        }
        TabSprite = (UIWidget_o *)this->fields.mainInfo;
        if ( !TabSprite )
          break;
        NewIcon = (UIWidget_o *)v18->fields.NewIcon;
        TabSprite = (UIWidget_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                    (EventInfoTipsArchiveListViewItem_o *)TabSprite,
                                    v18->fields.TabKind,
                                    0);
        if ( !NewIcon )
          break;
        v36 = (unsigned __int8)TabSprite & 1;
        TabSprite = NewIcon;
      }
      else
      {
        if ( !TabSprite )
          break;
        v40.fields.r = 0.5;
        v40.fields.g = 0.5;
        v40.fields.b = 0.5;
        v40.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v40, 0);
        TabSprite = (UIWidget_o *)v18->fields.TabLabel;
        if ( !TabSprite )
          break;
        UILabel__set_effectColor((UILabel_o *)TabSprite, this->fields.offButtonOutlineColor, 0);
        TabSprite = (UIWidget_o *)v18->fields.NewIcon;
        if ( !TabSprite )
          break;
        v36 = 0;
      }
      ShiningIconComponent__Set_48035012((ShiningIconComponent_o *)TabSprite, v36, 0);
      max_length = tabDataList->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_46;
    }
LABEL_47:
    sub_21FFECC(TabSprite, v7);
  }
LABEL_46:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v5 + 24), v14);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_593A4B3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593A4B3 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_21FFECC(genericContainerHandle, v6);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoTipsArchiveDialog__Setup(
        EventInfoTipsArchiveDialog_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v10; // x8
  EventInfoTipsArchiveListViewItem_c *v11; // x0
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v14; // x24
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v25; // w24
  EventInfoTipsArchiveDialog_TabData_o *v26; // x25
  int64_t CondNum; // x22
  int32_t CondTypeKind; // w20
  int32_t CondId; // w21
  bool IsOpen; // w8
  __int64 v31; // x8
  float *p_b; // x10
  float *p_a; // x11
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593A4AC & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&EventInfoTipsArchiveListViewItem_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593A4AC = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0);
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->TipsArchiveEventUiId != eventUiId )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    static_fields->TipsArchiveEventUiId = eventUiId;
    static_fields->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v10 = v8->static_fields;
  v11 = EventInfoTipsArchiveListViewItem_TypeInfo;
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v10->TipsArchiveCurrrentTab;
  v14 = (EventInfoTipsArchiveListViewItem_o *)sub_21FFEBC(v11);
  EventInfoTipsArchiveListViewItem___ctor(v14, eventUiId, atlasList, parameterBasePrefab, objectDataList, 0);
  this->fields.mainInfo = v14;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_36;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, 0);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_36;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_21FFED4(mainInfo);
      v26 = tabDataList->m_Items[v25];
      if ( !v26 )
        break;
      CondNum = v26->fields.CondNum;
      v26->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v26->fields.CondTypeKind;
      CondId = v26->fields.CondId;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v21);
      IsOpen = CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0, 0);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabSprite;
      v26->fields._IsOpened_k__BackingField = IsOpen;
      if ( !mainInfo )
        break;
      v31 = 128;
      if ( v26->fields.TabKind == this->fields.currentTabKind )
        v31 = 104;
      UISprite__set_spriteName((UISprite_o *)mainInfo, *(System_String_o **)((char *)&this->klass + v31), 0);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v26->fields.TabKind != this->fields.currentTabKind,
        0);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabSprite;
      if ( v26->fields._IsOpened_k__BackingField )
      {
        if ( !mainInfo )
          break;
        v36.fields.r = 1.0;
        v36.fields.g = 1.0;
        v36.fields.b = 1.0;
        v36.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v36, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v26->fields.TabName, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        if ( !mainInfo )
          break;
        v37.fields.r = 1.0;
        v37.fields.g = 1.0;
        v37.fields.b = 1.0;
        v37.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v37, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        if ( v26->fields.TabKind != this->fields.currentTabKind )
        {
          p_b = &this->fields.offButtonOutlineColor.fields.b;
          p_a = &this->fields.offButtonOutlineColor.fields.a;
          p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
          p_g = &this->fields.offButtonOutlineColor.fields.g;
        }
      }
      else
      {
        if ( !mainInfo )
          break;
        v38.fields.r = 0.5;
        v38.fields.g = 0.5;
        v38.fields.b = 0.5;
        v38.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v38, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        if ( !mainInfo )
          break;
        v39.fields.r = 0.5;
        v39.fields.g = 0.5;
        v39.fields.b = 0.5;
        v39.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v39, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v26->fields.TabLabel;
        p_a = &this->fields.offButtonOutlineColor.fields.a;
        p_b = &this->fields.offButtonOutlineColor.fields.b;
        p_g = &this->fields.offButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( !mainInfo )
          break;
      }
      v40.fields.a = *p_a;
      v40.fields.b = *p_b;
      v40.fields.g = *p_g;
      v40.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)mainInfo, v40, 0);
      max_length = tabDataList->max_length;
      if ( (int)++v25 >= max_length )
        return;
    }
LABEL_36:
    sub_21FFECC(mainInfo, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoTipsArchiveDialog__UpdateNewIconDisp(
        EventInfoTipsArchiveDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  int max_length; // w9
  EventInfoTipsArchiveDialog_o *v5; // x19
  int v6; // w11
  EventInfoTipsArchiveDialog_TabData_o *v7; // x21
  ShiningIconComponent_o *NewIcon; // x20

  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_15;
  max_length = tabDataList->max_length;
  v5 = this;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_21FFED4(this);
      v7 = tabDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_15;
      if ( v7->fields.TabKind == kind && v7->fields._IsOpened_k__BackingField )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v6 )
        goto LABEL_14;
    }
    this = (EventInfoTipsArchiveDialog_o *)this->fields.mainInfo;
    if ( this )
    {
      NewIcon = v7->fields.NewIcon;
      this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                               (EventInfoTipsArchiveListViewItem_o *)this,
                                               kind,
                                               0);
      if ( NewIcon )
      {
        ShiningIconComponent__Set_48035012(NewIcon, (unsigned __int8)this & 1, 0);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp((EventInfoTipsArchiveListViewManager_o *)this, 0);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&kind);
  }
LABEL_14:
  ActionExtensions__Call(v5->fields.buttonUpdateAction, 0);
}


void EventInfoTipsArchiveDialog___OnClickCloseButton_b__28_0(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(this, 1, v2);
}


void EventInfoTipsArchiveDialog___Open_b__22_0(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentTabKind; // w1

  currentTabKind = this->fields.currentTabKind;
  this->fields.state = 2;
  EventInfoTipsArchiveDialog__SetTabKind(this, currentTabKind, v2);
}


UnityEngine_GameObject_o *EventInfoTipsArchiveDialog__get_closeBtnObject(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeButtonObject;
}


void EventInfoTipsArchiveDialog_IndexData___ctor(
        EventInfoTipsArchiveDialog_IndexData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTipsArchiveDialog_ObjectData___ctor(
        EventInfoTipsArchiveDialog_ObjectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTipsArchiveDialog_TabData___ctor(EventInfoTipsArchiveDialog_TabData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoTipsArchiveDialog_TabData__get_IsCreatedList(
        EventInfoTipsArchiveDialog_TabData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCreatedList_k__BackingField;
}


bool EventInfoTipsArchiveDialog_TabData__get_IsOpened(
        EventInfoTipsArchiveDialog_TabData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsOpened_k__BackingField;
}


void EventInfoTipsArchiveDialog_TabData__set_IsCreatedList(
        EventInfoTipsArchiveDialog_TabData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCreatedList_k__BackingField = value;
}


void EventInfoTipsArchiveDialog_TabData__set_IsOpened(
        EventInfoTipsArchiveDialog_TabData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsOpened_k__BackingField = value;
}


void EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor(
        EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoTipsArchiveDialog___c__DisplayClass23_0___SetTabKind_b__0(
        EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(_4__this, this->fields.kind, 0);
}