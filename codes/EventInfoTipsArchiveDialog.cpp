void __fastcall EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x1
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  void *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1

  if ( (byte_4B17839 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17647/*"btn_bg_08"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17648/*"btn_bg_09"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B17839 = 1;
  }
  v15 = StringLiteral_17648/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_17648/*"btn_bg_09"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onButtonName, v15, v2, v3, v4, v5, v6, v7);
  this->fields.onButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BD2480;
  v16 = StringLiteral_17647/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_17647/*"btn_bg_08"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.offButtonName, v16, v17, v18, v19, v20, v21, v22);
  this->fields.offButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BD20B0;
  v23 = StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tabDisabledText, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v30);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


int32_t __fastcall EventInfoTipsArchiveDialog__GetAllNewDispCount(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
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
          sub_1BCAA44(this, method);
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
                                                   0LL);
          v6 += (int)this;
        }
        max_length = tabDataList->max_length;
        if ( (int)++v5 >= max_length )
          return v6;
      }
LABEL_14:
      sub_1BCAA3C(this, method);
    }
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveDialog__Init(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttonUpdateAction, 0LL, v3, v4, v5, v6, v7, v8);
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
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B17832 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1BCA7E0(
                                             &Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__,
                                             method,
                                             v2);
    byte_4B17832 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind )
  {
    tabDataList = v3->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !tabDataList->max_length )
      sub_1BCAA44(this, method);
    v5 = tabDataList->m_Items[0];
    if ( !v5 )
      goto LABEL_15;
    IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
    v7 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    if ( IsOpened_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
      this = (EventInfoTipsArchiveDialog_o *)v3->fields.mainInfo;
      if ( this )
      {
        EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0LL);
        EventInfoTipsArchiveDialog__SetTabKind(v3, 0, v10);
        return;
      }
LABEL_15:
      sub_1BCAA3C(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__OnClickCloseButton(
        EventInfoTipsArchiveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  EventInfoTipsArchiveListViewItem_o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v17; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t currentTabKind; // w1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20

  if ( (byte_4B17835 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__, v6, v7);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v8, v9);
    byte_4B17835 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v10 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_12;
    eventUiId = mainInfo->fields.eventUiId;
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v17 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->TipsArchiveEventUiId = eventUiId;
    currentTabKind = this->fields.currentTabKind;
    static_fields->TipsArchiveCurrrentTab = currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, currentTabKind, v14);
    v12 = this->fields.mainInfo;
    if ( !v12 )
LABEL_12:
      sub_1BCAA3C(v12, v13);
    EventInfoTipsArchiveListViewItem__SaveData(v12, 0LL);
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
    System_Action___ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
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
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B17833 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__, method, v2);
    byte_4B17833 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind != 1 )
  {
    tabDataList = v3->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 1 )
        sub_1BCAA44(this, method);
      v5 = tabDataList->m_Items[1];
      if ( v5 )
      {
        IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
        v7 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1BCA7F8(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
        this = (EventInfoTipsArchiveDialog_o *)v3->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0LL);
          EventInfoTipsArchiveDialog__SetTabKind(v3, 1, v10);
          return;
        }
      }
    }
    sub_1BCAA3C(this, method);
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
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4B17834 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__, method, v2);
    byte_4B17834 = 1;
  }
  if ( v3->fields.state == 2 && v3->fields.currentTabKind != 2 )
  {
    tabDataList = v3->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 2 )
        sub_1BCAA44(this, method);
      v5 = tabDataList->m_Items[2];
      if ( v5 )
      {
        IsOpened_k__BackingField = v5->fields._IsOpened_k__BackingField;
        v7 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1BCA7F8(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v3, v3->fields.currentTabKind, v9);
        this = (EventInfoTipsArchiveDialog_o *)v3->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, 0LL);
          EventInfoTipsArchiveDialog__SetTabKind(v3, 2, v10);
          return;
        }
      }
    }
    sub_1BCAA3C(this, method);
  }
}


void __fastcall EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  EventInfoTipsArchiveDialog_o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20

  if ( (byte_4B17830 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, updateAction, method);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__, v5, v6);
    byte_4B17830 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttonUpdateAction, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.buttonUpdateAction,
    (int64_t)updateAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v19, 0, v20);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
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

  if ( (byte_4B17837 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab, method);
    byte_4B17837 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    v5 = TerminalPramsManager_TypeInfo;
  }
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_13;
  if ( tabDataList->max_length <= tab )
    goto LABEL_14;
  v7 = tabDataList->m_Items[tab];
  if ( !v7
    || (ViewListManager = v7->fields.ViewListManager) == 0LL
    || (scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar) == 0LL
    || (TipsArchiveScrollValueList = v5->static_fields->TipsArchiveScrollValueList,
        value = UIProgressBar__get_value(scrollBar, 0LL),
        !TipsArchiveScrollValueList) )
  {
LABEL_13:
    sub_1BCAA3C(v5, *(_QWORD *)&tab);
  }
  if ( TipsArchiveScrollValueList->max_length <= tab )
LABEL_14:
    sub_1BCAA44(v5, *(_QWORD *)&tab);
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
  struct System_Reflection_MethodInfo_o *method_info; // x8

  v4 = this;
  if ( (byte_4B17838 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab, method);
    byte_4B17838 = 1;
  }
  tabDataList = v4->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_13;
  if ( tabDataList->max_length <= tab )
    goto LABEL_14;
  v6 = tabDataList->m_Items[tab];
  if ( !v6 )
    goto LABEL_13;
  ViewListManager = v6->fields.ViewListManager;
  if ( !ViewListManager )
    goto LABEL_13;
  scrollBar = (UIProgressBar_o *)ViewListManager->fields.scrollBar;
  this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  }
  method_info = this->fields.buttonUpdateAction[2].fields.method_info;
  if ( !method_info )
LABEL_13:
    sub_1BCAA3C(this, *(_QWORD *)&tab);
  if ( LODWORD(method_info[1].monitor) <= tab )
LABEL_14:
    sub_1BCAA44(this, *(_QWORD *)&tab);
  if ( !scrollBar )
    goto LABEL_13;
  UIProgressBar__set_value(scrollBar, *((float *)&method_info[2].klass + tab), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SetTabKind(
        EventInfoTipsArchiveDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x20
  UIWidget_o *TabSprite; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_b; // x24
  unsigned int v23; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_g; // x21
  float *p_a; // x25
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x28
  EventInfoTipsArchiveDialog_TabData_o *v28; // x29
  float *v29; // x11
  float *v30; // x9
  float *v31; // x10
  float *p_r; // x8
  __int64 v33; // x2
  __int64 v34; // x3
  float *v35; // x28
  struct UnityEngine_Color_o *v36; // x21
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x22
  int32_t v38; // w23
  System_Action_o *v39; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x24
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  bool v47; // w1
  UIWidget_o *NewIcon; // x22
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17831 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__, v6, v7);
    sub_1BCA7E0(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo, v8, v9);
    byte_4B17831 = 1;
  }
  v10 = sub_1BCAA2C(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&kind, method, v3);
  EventInfoTipsArchiveDialog___c__DisplayClass23_0___ctor(
    (EventInfoTipsArchiveDialog___c__DisplayClass23_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_47;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_47;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    v23 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
    while ( 1 )
    {
      if ( v23 >= max_length )
        sub_1BCAA44(TabSprite, v12);
      v28 = tabDataList->m_Items[v23];
      if ( !v28 )
        break;
      TabSprite = (UIWidget_o *)v28->fields.TabSprite;
      if ( v28->fields._IsOpened_k__BackingField )
      {
        if ( !TabSprite )
          break;
        v49.fields.r = 1.0;
        v49.fields.g = 1.0;
        v49.fields.b = 1.0;
        v49.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v49, 0LL);
        TabSprite = (UIWidget_o *)v28->fields.TabLabel;
        if ( !TabSprite )
          break;
        v29 = &this->fields.onButtonOutlineColor.fields.a;
        v31 = &this->fields.onButtonOutlineColor.fields.b;
        v30 = &this->fields.onButtonOutlineColor.fields.g;
        if ( v28->fields.TabKind == this->fields.currentTabKind )
          p_r = &p_onButtonOutlineColor->fields.r;
        else
          p_r = &p_offButtonOutlineColor->fields.r;
        if ( v28->fields.TabKind != this->fields.currentTabKind )
          v29 = p_a;
        if ( v28->fields.TabKind != this->fields.currentTabKind )
          v30 = p_g;
        if ( v28->fields.TabKind != this->fields.currentTabKind )
          v31 = p_b;
        v50.fields.b = *v31;
        v50.fields.g = *v30;
        v50.fields.r = *p_r;
        v50.fields.a = *v29;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v50, 0LL);
        TabSprite = (UIWidget_o *)v28->fields.TabSprite;
        if ( v28->fields.TabKind == *(_DWORD *)(v10 + 24) )
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.onButtonName, 0LL);
          TabSprite = (UIWidget_o *)v28->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 0, 0LL);
          TabSprite = (UIWidget_o *)v28->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0LL);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 1, 0LL);
          if ( !v28->fields._IsCreatedList_k__BackingField )
          {
            v35 = p_g;
            v36 = p_offButtonOutlineColor;
            ViewListManager = v28->fields.ViewListManager;
            v38 = *(_DWORD *)(v10 + 24);
            v39 = *(System_Action_o **)(v10 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v39 )
            {
              v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v33, v34);
              System_Action___ctor(
                v39,
                (Il2CppObject *)v10,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0LL);
              *(_QWORD *)(v10 + 32) = v39;
              sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)v39, v41, v42, v43, v44, v45, v46);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v38, mainInfo, v39, 0LL);
            p_offButtonOutlineColor = v36;
            p_g = v35;
            p_a = &this->fields.offButtonOutlineColor.fields.a;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
            p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
            v28->fields._IsCreatedList_k__BackingField = 1;
          }
          TabSprite = (UIWidget_o *)v28->fields.ViewListManager;
          if ( !TabSprite )
            break;
          EventInfoTipsArchiveListViewManager__SetMode((EventInfoTipsArchiveListViewManager_o *)TabSprite, 1, 0LL, 0LL);
        }
        else
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.offButtonName, 0LL);
          TabSprite = (UIWidget_o *)v28->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 1, 0LL);
          TabSprite = (UIWidget_o *)v28->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0LL);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 0, 0LL);
        }
        TabSprite = (UIWidget_o *)this->fields.mainInfo;
        if ( !TabSprite )
          break;
        NewIcon = (UIWidget_o *)v28->fields.NewIcon;
        TabSprite = (UIWidget_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                    (EventInfoTipsArchiveListViewItem_o *)TabSprite,
                                    v28->fields.TabKind,
                                    0LL);
        if ( !NewIcon )
          break;
        v47 = (unsigned __int8)TabSprite & 1;
        TabSprite = NewIcon;
      }
      else
      {
        if ( !TabSprite )
          break;
        v51.fields.r = 0.5;
        v51.fields.g = 0.5;
        v51.fields.b = 0.5;
        v51.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v51, 0LL);
        TabSprite = (UIWidget_o *)v28->fields.TabLabel;
        if ( !TabSprite )
          break;
        v52.fields.a = *p_a;
        v52.fields.b = *p_b;
        v52.fields.g = *p_g;
        v52.fields.r = p_offButtonOutlineColor->fields.r;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v52, 0LL);
        TabSprite = (UIWidget_o *)v28->fields.NewIcon;
        if ( !TabSprite )
          break;
        v47 = 0;
      }
      ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)TabSprite, v47, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_46;
    }
LABEL_47:
    sub_1BCAA3C(TabSprite, v12);
  }
LABEL_46:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v10 + 24), v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TitleInfoControl_o *v10; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4B17836 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B17836 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, enable, method);
    byte_4B10F83 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, enable);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v10 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v10->fields.mEventBgTexture->klass;
    if ( !klass || (v10 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1BCAA3C(v10, v8);
    TitleInfoControl__SetTouchEnable(v10, enable, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v18; // x24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v29; // w24
  EventInfoTipsArchiveDialog_TabData_o *v30; // x25
  int32_t CondId; // w20
  int32_t CondTypeKind; // w22
  int64_t CondNum; // x21
  UISprite_o *TabSprite; // x8
  __int64 v35; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1782F & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventUiId, atlasList);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B1782F = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v14 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  if ( static_fields->TipsArchiveEventUiId != eventUiId )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14, v11);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    static_fields->TipsArchiveEventUiId = eventUiId;
    static_fields->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0LL);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14, v11);
    v14 = TerminalPramsManager_TypeInfo;
  }
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v14->static_fields->TipsArchiveCurrrentTab;
  v18 = (EventInfoTipsArchiveListViewItem_o *)sub_1BCAA2C(EventInfoTipsArchiveListViewItem_TypeInfo, v11, v12, v13);
  EventInfoTipsArchiveListViewItem___ctor(v18, eventUiId, atlasList, parameterBasePrefab, objectDataList, 0LL);
  this->fields.mainInfo = v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mainInfo, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_43;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, 0LL);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_43;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1BCAA44(mainInfo, v25);
      v30 = tabDataList->m_Items[v29];
      if ( !v30 )
        break;
      v30->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v30->fields.CondTypeKind;
      CondId = v30->fields.CondId;
      CondNum = v30->fields.CondNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v25);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0LL, 0LL);
      TabSprite = v30->fields.TabSprite;
      v30->fields._IsOpened_k__BackingField = (unsigned __int8)mainInfo & 1;
      if ( !TabSprite )
        break;
      v35 = 120LL;
      if ( v30->fields.TabKind == this->fields.currentTabKind )
        v35 = 96LL;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v35), 0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v30->fields.TabKind != this->fields.currentTabKind,
        0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabSprite;
      if ( v30->fields._IsOpened_k__BackingField )
      {
        if ( !mainInfo )
          break;
        v40.fields.r = 1.0;
        v40.fields.g = 1.0;
        v40.fields.b = 1.0;
        v40.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v40, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v30->fields.TabName, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        if ( !mainInfo )
          break;
        v41.fields.r = 1.0;
        v41.fields.g = 1.0;
        v41.fields.b = 1.0;
        v41.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v41, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        if ( v30->fields.TabKind != this->fields.currentTabKind )
          p_b = &this->fields.offButtonOutlineColor.fields.b;
        if ( v30->fields.TabKind != this->fields.currentTabKind )
          p_a = &this->fields.offButtonOutlineColor.fields.a;
        if ( v30->fields.TabKind != this->fields.currentTabKind )
          p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( v30->fields.TabKind != this->fields.currentTabKind )
          p_g = &this->fields.offButtonOutlineColor.fields.g;
      }
      else
      {
        if ( !mainInfo )
          break;
        v42.fields.r = 0.5;
        v42.fields.g = 0.5;
        v42.fields.b = 0.5;
        v42.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v42, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        if ( !mainInfo )
          break;
        v43.fields.r = 0.5;
        v43.fields.g = 0.5;
        v43.fields.b = 0.5;
        v43.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v43, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v30->fields.TabLabel;
        p_a = &this->fields.offButtonOutlineColor.fields.a;
        p_b = &this->fields.offButtonOutlineColor.fields.b;
        p_g = &this->fields.offButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( !mainInfo )
          break;
      }
      v44.fields.a = *p_a;
      v44.fields.b = *p_b;
      v44.fields.g = *p_g;
      v44.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)mainInfo, v44, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v29 >= max_length )
        return;
    }
LABEL_43:
    sub_1BCAA3C(mainInfo, v25);
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
  int v6; // w10
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
        sub_1BCAA44(this, kind);
      v7 = tabDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_15;
      if ( v7->fields.TabKind == kind && v7->fields._IsOpened_k__BackingField )
        break;
      if ( max_length == ++v6 )
        goto LABEL_14;
    }
    this = (EventInfoTipsArchiveDialog_o *)this->fields.mainInfo;
    if ( this )
    {
      NewIcon = v7->fields.NewIcon;
      this = (EventInfoTipsArchiveDialog_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                               (EventInfoTipsArchiveListViewItem_o *)this,
                                               kind,
                                               0LL);
      if ( NewIcon )
      {
        ShiningIconComponent__Set_38945552(NewIcon, (unsigned __int8)this & 1, 0LL);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp((EventInfoTipsArchiveListViewManager_o *)this, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&kind);
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
    sub_1BCAA3C(0LL, method);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(_4__this, this->fields.kind, 0LL);
}