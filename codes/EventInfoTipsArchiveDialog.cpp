void EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3980F & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    sub_1C32C20(&StringLiteral_17440/*"btn_bg_08"*/);
    sub_1C32C20(&StringLiteral_17441/*"btn_bg_09"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3980F = 1;
  }
  v5 = StringLiteral_17441/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_17441/*"btn_bg_09"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onButtonName, v5, v2, v3);
  this->fields.onButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_C0C670;
  v6 = StringLiteral_17440/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_17440/*"btn_bg_08"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.offButtonName, v6, v7, v8);
  this->fields.offButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_C0C260;
  v9 = StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tabDisabledText, v9, v10, v11);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


int32_t EventInfoTipsArchiveDialog__GetAllNewDispCount(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
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
          sub_1C32E84(this);
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
      sub_1C32E7C(this);
    }
  }
  return 0;
}


void EventInfoTipsArchiveDialog__Init(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.buttonUpdateAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonUpdateAction, 0, v3, v4);
}


void EventInfoTipsArchiveDialog__OnClickCharacterTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4C39808 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1C32C20(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    byte_4C39808 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind )
  {
    tabDataList = v2->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !LODWORD(tabDataList->max_length) )
      sub_1C32E84(this);
    v4 = tabDataList->m_Items[0];
    if ( !v4 )
      goto LABEL_15;
    IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    if ( IsOpened_k__BackingField )
    {
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
      this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
      if ( this )
      {
        EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, v9);
        EventInfoTipsArchiveDialog__SetTabKind(v2, 0, v10);
        return;
      }
LABEL_15:
      sub_1C32E7C(this);
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
}


void EventInfoTipsArchiveDialog__OnClickCloseButton(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  EventInfoTipsArchiveListViewItem_o *v5; // x0
  const MethodInfo *v6; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t currentTabKind; // w1
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4C3980B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    sub_1C32C20(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3980B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_12;
    eventUiId = mainInfo->fields.eventUiId;
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->TipsArchiveEventUiId = eventUiId;
    currentTabKind = this->fields.currentTabKind;
    static_fields->TipsArchiveCurrrentTab = currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, currentTabKind, v6);
    v5 = this->fields.mainInfo;
    if ( !v5 )
LABEL_12:
      sub_1C32E7C(v5);
    EventInfoTipsArchiveListViewItem__SaveData(v5, v12);
    v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0);
  }
}


void EventInfoTipsArchiveDialog__OnClickTermsTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4C39809 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1C32C20(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
    byte_4C39809 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 1 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( LODWORD(tabDataList->max_length) <= 1 )
        sub_1C32E84(this);
      v4 = tabDataList->m_Items[1];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C32C38(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, v9);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 1, v10);
          return;
        }
      }
    }
    sub_1C32E7C(this);
  }
}


void EventInfoTipsArchiveDialog__OnClickWorldTab(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  EventInfoTipsArchiveDialog_o *v2; // x19
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x8
  EventInfoTipsArchiveDialog_TabData_o *v4; // x8
  _BOOL4 IsOpened_k__BackingField; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4C3980A & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1C32C20(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
    byte_4C3980A = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 2 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( LODWORD(tabDataList->max_length) <= 2 )
        sub_1C32E84(this);
      v4 = tabDataList->m_Items[2];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C32C38(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
        if ( !IsOpened_k__BackingField )
        {
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
          return;
        }
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
        EventInfoTipsArchiveDialog__UpdateNewIconDisp(v2, v2->fields.currentTabKind, v8);
        this = (EventInfoTipsArchiveDialog_o *)v2->fields.mainInfo;
        if ( this )
        {
          EventInfoTipsArchiveListViewItem__SaveData((EventInfoTipsArchiveListViewItem_o *)this, v9);
          EventInfoTipsArchiveDialog__SetTabKind(v2, 2, v10);
          return;
        }
      }
    }
    sub_1C32E7C(this);
  }
}


void EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  EventInfoTipsArchiveDialog_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_4C39806 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__);
    byte_4C39806 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.buttonUpdateAction = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonUpdateAction, 0, v5, v6);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.buttonUpdateAction, (int32_t)updateAction, v7, v8);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v9, 0, v10);
  v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
}


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

  if ( (byte_4C3980D & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3980D = 1;
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
    sub_1C32E7C(v5);
  }
  if ( LODWORD(TipsArchiveScrollValueList->max_length) <= tab )
LABEL_14:
    sub_1C32E84(v5);
  TipsArchiveScrollValueList->m_Items[tab] = value;
}


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
  if ( (byte_4C3980E & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3980E = 1;
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
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (EventInfoTipsArchiveDialog_o *)TerminalPramsManager_TypeInfo;
  }
  v9 = this->fields.objectDataList->m_Items[27];
  if ( !v9 )
LABEL_13:
    sub_1C32E7C(this);
  if ( LODWORD(v9->fields.IndexDataList) <= tab )
LABEL_14:
    sub_1C32E84(this);
  if ( !scrollBar )
    goto LABEL_13;
  UIProgressBar__set_value(scrollBar, *((float *)&v9[1].klass + tab), 0);
}


void EventInfoTipsArchiveDialog__SetTabKind(EventInfoTipsArchiveDialog_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x25
  UIWidget_o *TabSprite; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_b; // x24
  unsigned int v13; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_g; // x21
  float *p_a; // x20
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x28
  EventInfoTipsArchiveDialog_TabData_o *v18; // x29
  float *v19; // x11
  float *v20; // x9
  float *v21; // x10
  float *p_r; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  struct UnityEngine_Color_o *v26; // x21
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x22
  int32_t v28; // w23
  Il2CppObject *v29; // x28
  System_Action_o *v30; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct EventInfoTipsArchiveListViewManager_o *v34; // x22
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  bool v37; // w1
  UIWidget_o *NewIcon; // x22
  CGThumbnailListItem_o *v39; // [xsp+0h] [xbp-A0h]
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C39807 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__);
    sub_1C32C20(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
    byte_4C39807 = 1;
  }
  v5 = sub_1C32E6C(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_43;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_43;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    v13 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
    v39 = (CGThumbnailListItem_o *)(v5 + 32);
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C32E84(TabSprite);
      v18 = tabDataList->m_Items[v13];
      if ( !v18 )
        break;
      TabSprite = (UIWidget_o *)v18->fields.TabSprite;
      if ( v18->fields._IsOpened_k__BackingField )
      {
        if ( !TabSprite )
          break;
        v40.fields.r = 1.0;
        v40.fields.g = 1.0;
        v40.fields.b = 1.0;
        v40.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v40, 0);
        TabSprite = (UIWidget_o *)v18->fields.TabLabel;
        if ( !TabSprite )
          break;
        v19 = &this->fields.onButtonOutlineColor.fields.a;
        v21 = &this->fields.onButtonOutlineColor.fields.b;
        v20 = &this->fields.onButtonOutlineColor.fields.g;
        if ( v18->fields.TabKind == this->fields.currentTabKind )
          p_r = &p_onButtonOutlineColor->fields.r;
        else
          p_r = &p_offButtonOutlineColor->fields.r;
        if ( v18->fields.TabKind != this->fields.currentTabKind )
        {
          v19 = p_a;
          v20 = p_g;
          v21 = p_b;
        }
        v41.fields.b = *v21;
        v41.fields.g = *v20;
        v41.fields.r = *p_r;
        v41.fields.a = *v19;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v41, 0);
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
            v26 = p_offButtonOutlineColor;
            ViewListManager = v18->fields.ViewListManager;
            v28 = *(_DWORD *)(v5 + 24);
            v29 = (Il2CppObject *)v5;
            v30 = *(System_Action_o **)(v5 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v30 )
            {
              v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              System_Action___ctor(
                v30,
                v29,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0);
              p_a = &this->fields.offButtonOutlineColor.fields.a;
              v29[2].klass = (Il2CppClass *)v30;
              sub_1C32BC4(v39, (int32_t)v30, v32, v33);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v28, mainInfo, v30, v25);
            p_offButtonOutlineColor = v26;
            p_g = &this->fields.offButtonOutlineColor.fields.g;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
            v5 = (__int64)v29;
            p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
            v18->fields._IsCreatedList_k__BackingField = 1;
          }
          v34 = v18->fields.ViewListManager;
          if ( !v34 )
            break;
          v34->fields.callbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&v34->fields.callbackFunc, 0, v23, v24);
          EventInfoTipsArchiveListViewManager__SetMode_44611784(v34, 1, v35);
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
                                    v36);
        if ( !NewIcon )
          break;
        v37 = (unsigned __int8)TabSprite & 1;
        TabSprite = NewIcon;
      }
      else
      {
        if ( !TabSprite )
          break;
        v42.fields.r = 0.5;
        v42.fields.g = 0.5;
        v42.fields.b = 0.5;
        v42.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v42, 0);
        TabSprite = (UIWidget_o *)v18->fields.TabLabel;
        if ( !TabSprite )
          break;
        v43.fields.a = *p_a;
        v43.fields.b = *p_b;
        v43.fields.g = *p_g;
        v43.fields.r = p_offButtonOutlineColor->fields.r;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v43, 0);
        TabSprite = (UIWidget_o *)v18->fields.NewIcon;
        if ( !TabSprite )
          break;
        v37 = 0;
      }
      ShiningIconComponent__Set_40922520((ShiningIconComponent_o *)TabSprite, v37, 0);
      max_length = tabDataList->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_42;
    }
LABEL_43:
    sub_1C32E7C(TabSprite);
  }
LABEL_42:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v5 + 24), v9);
}


void EventInfoTipsArchiveDialog__SetTerminalTouchEnable(
        EventInfoTipsArchiveDialog_o *this,
        bool enable,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v4; // x0
  UnityEngine_Object_o *mInstance; // x20
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4C3980C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C3980C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
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
  if ( !UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.mEventBgSp->klass;
    if ( !klass || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0 )
      sub_1C32E7C(genericContainerHandle);
    TitleInfoControl__SetTouchEnable(genericContainerHandle, enable, 0);
  }
}


void EventInfoTipsArchiveDialog__Setup(
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
  const MethodInfo *v14; // x3
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

  if ( (byte_4C39805 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&EventInfoTipsArchiveListViewItem_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C39805 = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0);
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
    TerminalPramsManager__InitTipsArchiveScrollValueList(0);
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
  v11 = (EventInfoTipsArchiveListViewItem_o *)sub_1C32E6C(EventInfoTipsArchiveListViewItem_TypeInfo);
  EventInfoTipsArchiveListViewItem___ctor(v11, eventUiId, atlasList, parameterBasePrefab, objectDataList, v12);
  this->fields.mainInfo = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)v11, v13, v14);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_36;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, v15);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_36;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1C32E84(mainInfo);
      v20 = tabDataList->m_Items[v19];
      if ( !v20 )
        break;
      v20->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v20->fields.CondTypeKind;
      CondId = v20->fields.CondId;
      CondNum = v20->fields.CondNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0, 0);
      TabSprite = v20->fields.TabSprite;
      v20->fields._IsOpened_k__BackingField = (unsigned __int8)mainInfo & 1;
      if ( !TabSprite )
        break;
      v25 = 128;
      if ( v20->fields.TabKind == this->fields.currentTabKind )
        v25 = 104;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v25), 0);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v20->fields.TabKind != this->fields.currentTabKind,
        0);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabSprite;
      if ( v20->fields._IsOpened_k__BackingField )
      {
        if ( !mainInfo )
          break;
        v30.fields.r = 1.0;
        v30.fields.g = 1.0;
        v30.fields.b = 1.0;
        v30.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v30, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v20->fields.TabName, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        v31.fields.r = 1.0;
        v31.fields.g = 1.0;
        v31.fields.b = 1.0;
        v31.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v31, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        if ( v20->fields.TabKind != this->fields.currentTabKind )
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
        v32.fields.r = 0.5;
        v32.fields.g = 0.5;
        v32.fields.b = 0.5;
        v32.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v32, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v20->fields.TabLabel;
        if ( !mainInfo )
          break;
        v33.fields.r = 0.5;
        v33.fields.g = 0.5;
        v33.fields.b = 0.5;
        v33.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v33, 0);
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
      UILabel__set_effectColor((UILabel_o *)mainInfo, v34, 0);
      max_length = tabDataList->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_36:
    sub_1C32E7C(mainInfo);
  }
}


void EventInfoTipsArchiveDialog__UpdateNewIconDisp(
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
  const MethodInfo *v9; // x1

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
        sub_1C32E84(this);
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
        ShiningIconComponent__Set_40922520(NewIcon, (unsigned __int8)this & 1, 0);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp((EventInfoTipsArchiveListViewManager_o *)this, v9);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_1C32E7C(this);
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
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(this->fields.__4__this, this->fields.kind, v2);
}