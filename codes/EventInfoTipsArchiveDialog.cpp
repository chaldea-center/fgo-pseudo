void __fastcall EventInfoTipsArchiveDialog___ctor(EventInfoTipsArchiveDialog_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A00376 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    sub_1B64A00(&StringLiteral_17407/*"btn_bg_08"*/, v5);
    sub_1B64A00(&StringLiteral_17408/*"btn_bg_09"*/, v6);
    sub_1B64A00(&StringLiteral_1/*""*/, v7);
    byte_4A00376 = 1;
  }
  v8 = StringLiteral_17408/*"btn_bg_09"*/;
  this->fields.onButtonName = (struct System_String_o *)StringLiteral_17408/*"btn_bg_09"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.onButtonName, v8, v2, v3);
  this->fields.onButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BA2E70;
  v9 = StringLiteral_17407/*"btn_bg_08"*/;
  this->fields.offButtonName = (struct System_String_o *)StringLiteral_17407/*"btn_bg_08"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.offButtonName, v9, v10, v11);
  this->fields.offButtonOutlineColor = (struct UnityEngine_Color_o)xmmword_BA2AB0;
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.tabDisabledText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tabDisabledText, v12, v13, v14);
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
          sub_1B64C64(this, method);
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
      sub_1B64C5C(this, method);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, 0, v3, v4);
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
  if ( (byte_4A0036F & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B64A00(&Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__, method);
    byte_4A0036F = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind )
  {
    tabDataList = v2->fields.tabDataList;
    if ( !tabDataList )
      goto LABEL_15;
    if ( !tabDataList->max_length )
      sub_1B64C64(this, method);
    v4 = tabDataList->m_Items[0];
    if ( !v4 )
      goto LABEL_15;
    IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventInfoTipsArchiveDialog_OnClickCharacterTab__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
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
      sub_1B64C5C(this, method);
    }
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
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
  EventInfoTipsArchiveListViewItem_o *v8; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct EventInfoTipsArchiveListViewItem_o *mainInfo; // x8
  int32_t eventUiId; // w20
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t currentTabKind; // w1
  System_Action_o *v16; // x20

  if ( (byte_4A00372 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_EventInfoTipsArchiveDialog_OnClickCloseButton__, v3);
    sub_1B64A00(&Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__, v4);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v5);
    byte_4A00372 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_EventInfoTipsArchiveDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64A18(Method_EventInfoTipsArchiveDialog_OnClickCloseButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    mainInfo = this->fields.mainInfo;
    this->fields.state = 3;
    if ( !mainInfo )
      goto LABEL_12;
    eventUiId = mainInfo->fields.eventUiId;
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->TipsArchiveEventUiId = eventUiId;
    currentTabKind = this->fields.currentTabKind;
    static_fields->TipsArchiveCurrrentTab = currentTabKind;
    EventInfoTipsArchiveDialog__UpdateNewIconDisp(this, currentTabKind, v10);
    v8 = this->fields.mainInfo;
    if ( !v8 )
LABEL_12:
      sub_1B64C5C(v8, v9);
    EventInfoTipsArchiveListViewItem__SaveData(v8, v9);
    v16 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_EventInfoTipsArchiveDialog__OnClickCloseButton_b__28_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
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
  if ( (byte_4A00370 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B64A00(&Method_EventInfoTipsArchiveDialog_OnClickTermsTab__, method);
    byte_4A00370 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 1 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 1 )
        sub_1B64C64(this, method);
      v4 = tabDataList->m_Items[1];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickTermsTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickTermsTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1B64A18(Method_EventInfoTipsArchiveDialog_OnClickTermsTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
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
    sub_1B64C5C(this, method);
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
  if ( (byte_4A00371 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B64A00(&Method_EventInfoTipsArchiveDialog_OnClickWorldTab__, method);
    byte_4A00371 = 1;
  }
  if ( v2->fields.state == 2 && v2->fields.currentTabKind != 2 )
  {
    tabDataList = v2->fields.tabDataList;
    if ( tabDataList )
    {
      if ( tabDataList->max_length <= 2 )
        sub_1B64C64(this, method);
      v4 = tabDataList->m_Items[2];
      if ( v4 )
      {
        IsOpened_k__BackingField = v4->fields._IsOpened_k__BackingField;
        v6 = Method_EventInfoTipsArchiveDialog_OnClickWorldTab__;
        if ( (*((_BYTE *)Method_EventInfoTipsArchiveDialog_OnClickWorldTab__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1B64A18(Method_EventInfoTipsArchiveDialog_OnClickWorldTab__);
        v7 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
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
    sub_1B64C5C(this, method);
  }
}


void __fastcall EventInfoTipsArchiveDialog__Open(
        EventInfoTipsArchiveDialog_o *this,
        System_Action_o *updateAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  EventInfoTipsArchiveDialog_o *v10; // x0
  const MethodInfo *v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_4A0036D & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, updateAction);
    sub_1B64A00(&Method_EventInfoTipsArchiveDialog__Open_b__22_0__, v5);
    byte_4A0036D = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.buttonUpdateAction = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, 0, v6, v7);
  this->fields.state = 1;
  this->fields.buttonUpdateAction = updateAction;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.buttonUpdateAction, (int32_t)updateAction, v8, v9);
  EventInfoTipsArchiveDialog__SetTerminalTouchEnable(v10, 0, v11);
  v12 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventInfoTipsArchiveDialog__Open_b__22_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
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

  if ( (byte_4A00374 & 1) == 0 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    byte_4A00374 = 1;
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
    sub_1B64C5C(v5, *(_QWORD *)&tab);
  }
  if ( TipsArchiveScrollValueList->max_length <= tab )
LABEL_14:
    sub_1B64C64(v5, *(_QWORD *)&tab);
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
  if ( (byte_4A00375 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveDialog_o *)sub_1B64A00(&TerminalPramsManager_TypeInfo, *(_QWORD *)&tab);
    byte_4A00375 = 1;
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
    sub_1B64C5C(this, *(_QWORD *)&tab);
  if ( LODWORD(method_info[1].monitor) <= tab )
LABEL_14:
    sub_1B64C64(this, *(_QWORD *)&tab);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  UIWidget_o *TabSprite; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x26
  int max_length; // w8
  float *p_b; // x24
  unsigned int v16; // w27
  struct UnityEngine_Color_o *p_offButtonOutlineColor; // x23
  float *p_g; // x21
  float *p_a; // x25
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x28
  EventInfoTipsArchiveDialog_TabData_o *v21; // x29
  float *v22; // x11
  float *v23; // x9
  float *v24; // x10
  float *p_r; // x8
  float *v26; // x28
  struct UnityEngine_Color_o *v27; // x21
  EventInfoTipsArchiveListViewManager_o *ViewListManager; // x22
  int32_t v29; // w23
  System_Action_o *v30; // x25
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x24
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x2
  bool v35; // w1
  UIWidget_o *NewIcon; // x22
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0036E & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__, v5);
    sub_1B64A00(&EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo, v6);
    byte_4A0036E = 1;
  }
  v7 = sub_1B64C4C(EventInfoTipsArchiveDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_47;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = kind;
  tabDataList = this->fields.tabDataList;
  this->fields.currentTabKind = kind;
  if ( !tabDataList )
    goto LABEL_47;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    p_b = &this->fields.offButtonOutlineColor.fields.b;
    v16 = 0;
    p_offButtonOutlineColor = &this->fields.offButtonOutlineColor;
    p_g = &this->fields.offButtonOutlineColor.fields.g;
    p_a = &this->fields.offButtonOutlineColor.fields.a;
    p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1B64C64(TabSprite, v9);
      v21 = tabDataList->m_Items[v16];
      if ( !v21 )
        break;
      TabSprite = (UIWidget_o *)v21->fields.TabSprite;
      if ( v21->fields._IsOpened_k__BackingField )
      {
        if ( !TabSprite )
          break;
        v37.fields.r = 1.0;
        v37.fields.g = 1.0;
        v37.fields.b = 1.0;
        v37.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v37, 0LL);
        TabSprite = (UIWidget_o *)v21->fields.TabLabel;
        if ( !TabSprite )
          break;
        v22 = &this->fields.onButtonOutlineColor.fields.a;
        v24 = &this->fields.onButtonOutlineColor.fields.b;
        v23 = &this->fields.onButtonOutlineColor.fields.g;
        if ( v21->fields.TabKind == this->fields.currentTabKind )
          p_r = &p_onButtonOutlineColor->fields.r;
        else
          p_r = &p_offButtonOutlineColor->fields.r;
        if ( v21->fields.TabKind != this->fields.currentTabKind )
          v22 = p_a;
        if ( v21->fields.TabKind != this->fields.currentTabKind )
          v23 = p_g;
        if ( v21->fields.TabKind != this->fields.currentTabKind )
          v24 = p_b;
        v38.fields.b = *v24;
        v38.fields.g = *v23;
        v38.fields.r = *p_r;
        v38.fields.a = *v22;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v38, 0LL);
        TabSprite = (UIWidget_o *)v21->fields.TabSprite;
        if ( v21->fields.TabKind == *(_DWORD *)(v7 + 24) )
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.onButtonName, 0LL);
          TabSprite = (UIWidget_o *)v21->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 0, 0LL);
          TabSprite = (UIWidget_o *)v21->fields.ViewListManager;
          if ( !TabSprite )
            break;
          TabSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TabSprite, 0LL);
          if ( !TabSprite )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)TabSprite, 1, 0LL);
          if ( !v21->fields._IsCreatedList_k__BackingField )
          {
            v26 = p_g;
            v27 = p_offButtonOutlineColor;
            ViewListManager = v21->fields.ViewListManager;
            v29 = *(_DWORD *)(v7 + 24);
            v30 = *(System_Action_o **)(v7 + 32);
            mainInfo = this->fields.mainInfo;
            if ( !v30 )
            {
              v30 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
              System_Action___ctor(
                v30,
                (Il2CppObject *)v7,
                Method_EventInfoTipsArchiveDialog___c__DisplayClass23_0__SetTabKind_b__0__,
                0LL);
              *(_QWORD *)(v7 + 32) = v30;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v30, v32, v33);
            }
            if ( !ViewListManager )
              break;
            EventInfoTipsArchiveListViewManager__CreateList(ViewListManager, v29, mainInfo, v30, 0LL);
            p_offButtonOutlineColor = v27;
            p_g = v26;
            p_a = &this->fields.offButtonOutlineColor.fields.a;
            p_b = &this->fields.offButtonOutlineColor.fields.b;
            p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
            v21->fields._IsCreatedList_k__BackingField = 1;
          }
          TabSprite = (UIWidget_o *)v21->fields.ViewListManager;
          if ( !TabSprite )
            break;
          EventInfoTipsArchiveListViewManager__SetMode((EventInfoTipsArchiveListViewManager_o *)TabSprite, 1, 0LL, 0LL);
        }
        else
        {
          if ( !TabSprite )
            break;
          UISprite__set_spriteName((UISprite_o *)TabSprite, this->fields.offButtonName, 0LL);
          TabSprite = (UIWidget_o *)v21->fields.TabCollider;
          if ( !TabSprite )
            break;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)TabSprite, 1, 0LL);
          TabSprite = (UIWidget_o *)v21->fields.ViewListManager;
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
        NewIcon = (UIWidget_o *)v21->fields.NewIcon;
        TabSprite = (UIWidget_o *)EventInfoTipsArchiveListViewItem__IsNewDispTab(
                                    (EventInfoTipsArchiveListViewItem_o *)TabSprite,
                                    v21->fields.TabKind,
                                    v34);
        if ( !NewIcon )
          break;
        v35 = (unsigned __int8)TabSprite & 1;
        TabSprite = NewIcon;
      }
      else
      {
        if ( !TabSprite )
          break;
        v39.fields.r = 0.5;
        v39.fields.g = 0.5;
        v39.fields.b = 0.5;
        v39.fields.a = 1.0;
        UIWidget__set_color(TabSprite, v39, 0LL);
        TabSprite = (UIWidget_o *)v21->fields.TabLabel;
        if ( !TabSprite )
          break;
        v40.fields.a = *p_a;
        v40.fields.b = *p_b;
        v40.fields.g = *p_g;
        v40.fields.r = p_offButtonOutlineColor->fields.r;
        UILabel__set_effectColor((UILabel_o *)TabSprite, v40, 0LL);
        TabSprite = (UIWidget_o *)v21->fields.NewIcon;
        if ( !TabSprite )
          break;
        v35 = 0;
      }
      ShiningIconComponent__Set_37924600((ShiningIconComponent_o *)TabSprite, v35, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_46;
    }
LABEL_47:
    sub_1B64C5C(TabSprite, v9);
  }
LABEL_46:
  EventInfoTipsArchiveDialog__SetScrollBarValue(this, *(_DWORD *)(v7 + 24), v12);
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
  TitleInfoControl_o *v8; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A00373 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, enable);
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, v4);
    byte_4A00373 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F9DCD )
  {
    sub_1B64A00(&TerminalSceneComponent_TypeInfo, enable);
    byte_49F9DCD = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mInstance, 0LL, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F9DCD )
    {
      sub_1B64A00(&TerminalSceneComponent_TypeInfo, v7);
      byte_49F9DCD = 1;
    }
    v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.mEventRoot->klass;
    if ( !klass || (v8 = *(TitleInfoControl_o **)&klass->_2.instance_size) == 0LL )
      sub_1B64C5C(v8, v7);
    TitleInfoControl__SetTouchEnable(v8, enable, 0LL);
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
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *parameterBasePrefab; // x22
  EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x23
  EventInfoTipsArchiveListViewItem_o *v13; // x24
  const MethodInfo *v14; // x5
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  EventInfoTipsArchiveListViewItem_o *mainInfo; // x0
  struct EventInfoTipsArchiveDialog_TabData_array *tabDataList; // x23
  int max_length; // w8
  unsigned int v21; // w24
  EventInfoTipsArchiveDialog_TabData_o *v22; // x25
  int32_t CondId; // w20
  int32_t CondTypeKind; // w22
  int64_t CondNum; // x21
  UISprite_o *TabSprite; // x8
  __int64 v27; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UnityEngine_Color_o *p_onButtonOutlineColor; // x8
  float *p_g; // x9
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0036C & 1) == 0 )
  {
    sub_1B64A00(&CondType_TypeInfo, *(_QWORD *)&eventUiId);
    sub_1B64A00(&EventInfoTipsArchiveListViewItem_TypeInfo, v7);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v8);
    byte_4A0036C = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->TipsArchiveEventUiId != eventUiId )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = TerminalPramsManager_TypeInfo->static_fields;
    }
    static_fields->TipsArchiveEventUiId = eventUiId;
    static_fields->TipsArchiveCurrrentTab = 0;
    TerminalPramsManager__InitTipsArchiveScrollValueList(0LL);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  parameterBasePrefab = this->fields.parameterBasePrefab;
  objectDataList = this->fields.objectDataList;
  this->fields.currentTabKind = v9->static_fields->TipsArchiveCurrrentTab;
  v13 = (EventInfoTipsArchiveListViewItem_o *)sub_1B64C4C(EventInfoTipsArchiveListViewItem_TypeInfo);
  EventInfoTipsArchiveListViewItem___ctor(v13, eventUiId, atlasList, parameterBasePrefab, objectDataList, v14);
  this->fields.mainInfo = v13;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)v13, v15, v16);
  mainInfo = this->fields.mainInfo;
  if ( !mainInfo )
    goto LABEL_43;
  EventInfoTipsArchiveListViewItem__LoadData(mainInfo, v17);
  tabDataList = this->fields.tabDataList;
  if ( !tabDataList )
    goto LABEL_43;
  max_length = tabDataList->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1B64C64(mainInfo, v17);
      v22 = tabDataList->m_Items[v21];
      if ( !v22 )
        break;
      v22->fields._IsCreatedList_k__BackingField = 0;
      CondTypeKind = v22->fields.CondTypeKind;
      CondId = v22->fields.CondId;
      CondNum = v22->fields.CondNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(CondTypeKind, CondId, CondNum, 0, 0LL);
      TabSprite = v22->fields.TabSprite;
      v22->fields._IsOpened_k__BackingField = (unsigned __int8)mainInfo & 1;
      if ( !TabSprite )
        break;
      v27 = 120LL;
      if ( v22->fields.TabKind == this->fields.currentTabKind )
        v27 = 96LL;
      UISprite__set_spriteName(TabSprite, *(System_String_o **)((char *)&this->klass + v27), 0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabCollider;
      if ( !mainInfo )
        break;
      UnityEngine_Collider__set_enabled(
        (UnityEngine_Collider_o *)mainInfo,
        v22->fields.TabKind != this->fields.currentTabKind,
        0LL);
      mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabSprite;
      if ( v22->fields._IsOpened_k__BackingField )
      {
        if ( !mainInfo )
          break;
        v32.fields.r = 1.0;
        v32.fields.g = 1.0;
        v32.fields.b = 1.0;
        v32.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v32, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, v22->fields.TabName, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        if ( !mainInfo )
          break;
        v33.fields.r = 1.0;
        v33.fields.g = 1.0;
        v33.fields.b = 1.0;
        v33.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v33, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        if ( !mainInfo )
          break;
        p_a = &this->fields.onButtonOutlineColor.fields.a;
        p_b = &this->fields.onButtonOutlineColor.fields.b;
        p_g = &this->fields.onButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.onButtonOutlineColor;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          p_b = &this->fields.offButtonOutlineColor.fields.b;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          p_a = &this->fields.offButtonOutlineColor.fields.a;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( v22->fields.TabKind != this->fields.currentTabKind )
          p_g = &this->fields.offButtonOutlineColor.fields.g;
      }
      else
      {
        if ( !mainInfo )
          break;
        v34.fields.r = 0.5;
        v34.fields.g = 0.5;
        v34.fields.b = 0.5;
        v34.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v34, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        if ( !mainInfo )
          break;
        UILabel__set_text((UILabel_o *)mainInfo, this->fields.tabDisabledText, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        if ( !mainInfo )
          break;
        v35.fields.r = 0.5;
        v35.fields.g = 0.5;
        v35.fields.b = 0.5;
        v35.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)mainInfo, v35, 0LL);
        mainInfo = (EventInfoTipsArchiveListViewItem_o *)v22->fields.TabLabel;
        p_a = &this->fields.offButtonOutlineColor.fields.a;
        p_b = &this->fields.offButtonOutlineColor.fields.b;
        p_g = &this->fields.offButtonOutlineColor.fields.g;
        p_onButtonOutlineColor = &this->fields.offButtonOutlineColor;
        if ( !mainInfo )
          break;
      }
      v36.fields.a = *p_a;
      v36.fields.b = *p_b;
      v36.fields.g = *p_g;
      v36.fields.r = p_onButtonOutlineColor->fields.r;
      UILabel__set_effectColor((UILabel_o *)mainInfo, v36, 0LL);
      max_length = tabDataList->max_length;
      if ( (int)++v21 >= max_length )
        return;
    }
LABEL_43:
    sub_1B64C5C(mainInfo, v17);
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
        sub_1B64C64(this, *(_QWORD *)&kind);
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
        ShiningIconComponent__Set_37924600(NewIcon, (unsigned __int8)this & 1, 0LL);
        this = (EventInfoTipsArchiveDialog_o *)v7->fields.ViewListManager;
        if ( this )
        {
          EventInfoTipsArchiveListViewManager__UpdateNewIconDisp((EventInfoTipsArchiveListViewManager_o *)this, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_1B64C5C(this, *(_QWORD *)&kind);
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
    sub_1B64C5C(this, method);
  EventInfoTipsArchiveDialog__SaveScrollBarValue(this->fields.__4__this, this->fields.kind, v2);
}