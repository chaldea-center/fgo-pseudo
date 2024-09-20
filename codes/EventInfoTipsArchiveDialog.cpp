void __fastcall EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5C82C & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_17474/*"btn_bg_08"*/);
    sub_1B885B0(&StringLiteral_17475/*"btn_bg_09"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C82C = 1;
  }
  v5 = StringLiteral_17475/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_17475/*"btn_bg_09"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onButtonName, v5, v2, v3);
  this->fields.onButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BB42B0;
  v6 = StringLiteral_17474/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_17474/*"btn_bg_08"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.offButtonName, v6, v7, v8);
  this->fields.offButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BB3EE0;
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tabDisabledText, v9, v10, v11);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
          sub_1B88814(this, method);
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
      sub_1B8880C(this, method);
    }
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveDialog__Init(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, 0, v3, v4);
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

  v2 = this;
  if ( (byte_4A5C825 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B885B0(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    byte_4A5C825 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind )
  {
    tabDataList = v2->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !tabDataList->max_length )
      sub_1B88814(this, method);
    v4 = tabDataList->m_Items[0];
    if ( !v4 )
      goto LABEL_15;
    IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B885C8(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
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
      sub_1B8880C(this, method);
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
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t currentTabKind; // w1
  System_Action_o *v13; // x20

  if ( (byte_4A5C828 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C828 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_12;
    eventUiId = mainInfo->fields.eventUiId;
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->TipsArchiveEventUiId = eventUiId;
    currentTabKind = this->fields.currentTabKind;
    static_fields->TipsArchiveCurrrentTab = currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, currentTabKind, v7);
    v5 = this->fields.mainInfo;
    if ( !v5 )
LABEL_12:
      sub_1B8880C(v5, v6);
    EventInfoTipsArchiveListViewItem__SaveData(v5, v6);
    v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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

  v2 = this;
  if ( (byte_4A5C826 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B885B0(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
    byte_4A5C826 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 1 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 1 )
        sub_1B88814(this, method);
      v4 = tabDataList->m_Items[1];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1B885C8(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
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
    sub_1B8880C(this, method);
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

  v2 = this;
  if ( (byte_4A5C827 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B885B0(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
    byte_4A5C827 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 2 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 2 )
        sub_1B88814(this, method);
      v4 = tabDataList->m_Items[2];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1B885C8(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
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
    sub_1B8880C(this, method);
  }
}


void __fastcall EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  EventInfoTipsArchiveDialog_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_4A5C823 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__);
    byte_4A5C823 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, 0, v5, v6);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, (int32_t)updateAction, v7, v8);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v9, 0, v10);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
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

  if ( (byte_4A5C82A & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C82A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
    sub_1B8880C(v5, *(_QWORD *)&tab);
  }
  if ( TipsArchiveScrollValueList->max_length <= tab )
LABEL_14:
    sub_1B88814(v5, *(_QWORD *)&tab);
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
  if ( (byte_4A5C82B & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C82B = 1;
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  }
  method_info = this->fields.buttonUpdateAction[2].fields.method_info;
  if ( !method_info )
LABEL_13:
    sub_1B8880C(this, *(_QWORD *)&tab);
  if ( LODWORD(method_info[1].monitor) <= tab )
LABEL_14:
    sub_1B88814(this, *(_QWORD *)&tab);
  if ( !scrollBar )
    goto LABEL_13;
  UIProgressBar__set_value(scrollBar, *((float *)&method_info[2].klass + tab), 0LL);
}


void __fastcall EventInfoTipsArchiveDialog__SetTabKind(
        EventInfoTipsArchiveDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UIWidget_o *TabSprite; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_b; // x24
  unsigned int v14; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_g; // x21
  float *p_a; // x25
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x28
  EventInfoTipsArchiveDialog_TabData_o *v19; // x29
  float *v20; // x11
  float *v21; // x9
  float *v22; // x10
  float *p_r; // x8
  float *v24; // x28
  struct UnityEngine_Color_o *v25; // x21
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x22
  int32_t v27; // w23
  System_Action_o *v28; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  bool v33; // w1
  UIWidget_o *NewIcon; // x22
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5C824 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__);
    sub_1B885B0(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
    byte_4A5C824 = 1;
  }
  v5 = sub_1B887FC(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_47;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_47;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    v14 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1B88814(TabSprite, v7);
      v19 = tabDataList->m_Items[v14];
      if ( !v19 )
        break;
      TabSprite = (UIWidget_o *)v19->fields.TabSprite;
      if ( v19->fields._IsOpened_k__BackingField )
      {
        if ( !TabSprite )
          break;
        v35.fields.r = 1.0;
        v35.fields.g = 1.0;
        v35.fields.b = 1.0;
        v35.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v35, 0LL);
        TabSprite = (UIWidget_o *)v19->fields.TabLabel;
        if ( !TabSprite )
          break;
        v20 = &this->fields.onButtonOutlineColor.fields.a;
        v22 = &this->fields.onButtonOutlineColor.fields.b;
        v21 = &this->fields.onButtonOutlineColor.fields.g;
        if ( v19->fields.TabKind == this->fields.currentTabKind )
          p_r = &p_onButtonOutlineColor->fields.r;
        else
          p_r = &p_offButtonOutlineColor->fields.r;
        if ( v19->fields.TabKind != this->fields.currentTabKind )
          v20 = p_a;
        if ( v19->fields.TabKind != this->fields.currentTabKind )
          v21 = p_g;
        if ( v19->fields.TabKind != this->fields.currentTabKind )
          v22 = p_b;
        v36.fields.b = *v22;
        v36.fields.g = *v21;
        v36.fields.r = *p_r;
        v36.fields.a = *v20;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v36, 0LL);
        TabSprite = (UIWidget_o *)v19->fields.TabSprite;
        if ( v19->fields.TabKind == *(_DWORD *)(v5 + 24) )
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.onButtonName, 0LL);
          TabSprite = (UIWidget_o *)v19->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 0, 0LL);
          TabSprite = (UIWidget_o *)v19->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0LL);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 1, 0LL);
          if ( !v19->fields._IsCreatedList_k__BackingField )
          {
            v24 = p_g;
            v25 = p_offButtonOutlineColor;
            ViewListManager = v19->fields.ViewListManager;
            v27 = *(_DWORD *)(v5 + 24);
            v28 = *(System_Action_o **)(v5 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v28 )
            {
              v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v28,
                (Il2CppObject *)v5,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0LL);
              *(_QWORD *)(v5 + 32) = v28;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v28, v30, v31);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v27, mainInfo, v28, 0LL);
            p_offButtonOutlineColor = v25;
            p_g = v24;
            p_a = &this->fields.offButtonOutlineColor.fields.a;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
            p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
            v19->fields._IsCreatedList_k__BackingField = 1;
          }
          TabSprite = (UIWidget_o *)v19->fields.ViewListManager;
          if ( !TabSprite )
            break;
          EventInfoTipsArchiveListViewManager__SetMode((EventInfoTipsArchiveListViewManager_o *)TabSprite, 1, 0LL, 0LL);
        }
        else
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.offButtonName, 0LL);
          TabSprite = (UIWidget_o *)v19->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 1, 0LL);
          TabSprite = (UIWidget_o *)v19->fields.ViewListManager;
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
        NewIcon = (UIWidget_o *)v19->fields.NewIcon;
        TabSprite = (UIWidget_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                    (EventInfoTipsArchiveListViewItem_o *)TabSprite,
                                    v19->fields.TabKind,
                                    v32);
        if ( !NewIcon )
          break;
        v33 = (unsigned __int8)TabSprite & 1;
        TabSprite = NewIcon;
      }
      else
      {
        if ( !TabSprite )
          break;
        v37.fields.r = 0.5;
        v37.fields.g = 0.5;
        v37.fields.b = 0.5;
        v37.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v37, 0LL);
        TabSprite = (UIWidget_o *)v19->fields.TabLabel;
        if ( !TabSprite )
          break;
        v38.fields.a = *p_a;
        v38.fields.b = *p_b;
        v38.fields.g = *p_g;
        v38.fields.r = p_offButtonOutlineColor->fields.r;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v38, 0LL);
        TabSprite = (UIWidget_o *)v19->fields.NewIcon;
        if ( !TabSprite )
          break;
        v33 = 0;
      }
      ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)TabSprite, v33, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_46;
    }
LABEL_47:
    sub_1B8880C(TabSprite, v7);
  }
LABEL_46:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v5 + 24), v10);
}


void __fastcall EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v6; // x1
  TitleInfoControl_o *v7; // x0
  ExUITexture_c *klass; // x8

  if ( (byte_4A5C829 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5C829 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v4->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.mEventBgTexture->klass;
    if ( !klass || (v7 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B8880C(v7, v6);
    TitleInfoControl__SetTouchEnable(v7, enable, 0LL);
  }
}


void __fastcall EventInfoTipsArchiveDialog__Setup(
        EventInfoTipsArchiveDialog_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v11; // x24
  const MethodInfo *v12; // x5
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v19; // w24
  EventInfoTipsArchiveDialog_TabData_o *v20; // x25
  int32_t CondId; // w20
  int32_t CondTypeKind; // w22
  int64_t CondNum; // x21
  UISprite_o *TabSprite; // x8
  __int64 v25; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5C822 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&EventInfoTipsArchiveListViewItem_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C822 = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->TipsArchiveEventUiId != eventUiId )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    static_fields->TipsArchiveEventUiId = eventUiId;
    static_fields->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0LL);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v7->static_fields->TipsArchiveCurrrentTab;
  v11 = (EventInfoTipsArchiveListViewItem_o *)sub_1B887FC(EventInfoTipsArchiveListViewItem_TypeInfo);
  EventInfoTipsArchiveListViewItem___ctor(v11, eventUiId, atlasList, parameterBasePrefab, objectDataList, v12);
  this->fields.mainInfo = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v11, v13, v14);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_43;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, v15);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_43;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1B88814(mainInfo, v15);
      v20 = tabDataList->m_Items[v19];
      if ( !v20 )
        break;
      v20->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v20->fields.CondTypeKind;
      CondId = v20->fields.CondId;
      CondNum = v20->fields.CondNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0LL, 0LL);
      TabSprite = v20->fields.TabSprite;
      v20->fields._IsOpened_k__BackingField = (unsigned __int8)mainInfo & 1;
      if ( !TabSprite )
        break;
      v25 = 120LL;
      if ( v20->fields.TabKind == this->fields.currentTabKind )
        v25 = 96LL;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v25), 0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v20->fields.TabKind != this->fields.currentTabKind,
        0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabSprite;
      if ( v20->fields._IsOpened_k__BackingField )
      {
        if ( !mainInfo )
          break;
        v30.fields.r = 1.0;
        v30.fields.g = 1.0;
        v30.fields.b = 1.0;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v30, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v20->fields.TabName, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        v31.fields.r = 1.0;
        v31.fields.g = 1.0;
        v31.fields.b = 1.0;
        v31.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v31, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        if ( v20->fields.TabKind != this->fields.currentTabKind )
          p_b = &this->fields.offButtonOutlineColor.fields.b;
        if ( v20->fields.TabKind != this->fields.currentTabKind )
          p_a = &this->fields.offButtonOutlineColor.fields.a;
        if ( v20->fields.TabKind != this->fields.currentTabKind )
          p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( v20->fields.TabKind != this->fields.currentTabKind )
          p_g = &this->fields.offButtonOutlineColor.fields.g;
      }
      else
      {
        if ( !mainInfo )
          break;
        v32.fields.r = 0.5;
        v32.fields.g = 0.5;
        v32.fields.b = 0.5;
        v32.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v32, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        v33.fields.r = 0.5;
        v33.fields.g = 0.5;
        v33.fields.b = 0.5;
        v33.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v33, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        p_a = &this->fields.offButtonOutlineColor.fields.a;
        p_b = &this->fields.offButtonOutlineColor.fields.b;
        p_g = &this->fields.offButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( !mainInfo )
          break;
      }
      v34.fields.a = *p_a;
      v34.fields.b = *p_b;
      v34.fields.g = *p_g;
      v34.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)mainInfo, v34, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_43:
    sub_1B8880C(mainInfo, v15);
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
        sub_1B88814(this, kind);
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
                                               method);
      if ( NewIcon )
      {
        ShiningIconComponent__Set_38233872(NewIcon, (unsigned __int8)this & 1, 0LL);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp((EventInfoTipsArchiveListViewManager_o *)this, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_1B8880C(this, *(_QWORD *)&kind);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(this->fields.__4__this, this->fields.kind, v2);
}