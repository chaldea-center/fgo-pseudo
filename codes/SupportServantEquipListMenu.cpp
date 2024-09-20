void __fastcall SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A57BB1 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57BB1 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__Callback(
        SupportServantEquipListMenu_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, SupportServantEquipListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      result,
      classPos,
      item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__Close(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantEquipListMenu__Close_33326636(this, 0LL, v2);
}


void __fastcall SupportServantEquipListMenu__Close_33326636(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A57BA4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndClose__);
    byte_4A57BA4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v6);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57BA6 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_Decide__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndDecide__);
    byte_4A57BA6 = 1;
  }
  v3 = Method_SupportServantEquipListMenu_Decide__;
  if ( (*((_BYTE *)Method_SupportServantEquipListMenu_Decide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_Decide__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    v6);
  SupportServantEquipListMenu__StatusRequest(this, v5, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabChoice(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabLock(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndClickTabNormal(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void __fastcall SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListMenu__EndCloseEventServantWarning(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.classPos,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__EndCloseList(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SupportServantEquipListMenu__EndCloseShowServantEquip(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A57BAA & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4A57BAA = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v4 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v5);
  if ( !supportServantEquipListViewManager )
    sub_1B8880C(v6, v7);
  supportServantEquipListViewManager->fields.callbackFunc = v4;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9);
  SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 2, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndDecide(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  SupportServantEquipListViewItem_o *Item; // x20
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_16;
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v5);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( (isRequest & 0x80000000) != 0 )
  {
    Item = 0LL;
LABEL_10:
    if ( this->fields.isSelectedSvt )
      goto LABEL_13;
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( supportServantEquipListViewManager )
    {
      ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0LL);
      goto LABEL_13;
    }
LABEL_16:
    sub_1B8880C(supportServantEquipListViewManager, isRequest);
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_16;
  Item = SupportServantEquipListViewManager__GetItem(supportServantEquipListViewManager, isRequest, method);
  if ( !Item )
    goto LABEL_10;
LABEL_13:
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, SupportServantEquipListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.classPos,
      Item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__EndOpen(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v5; // x0
  TutorialFlag_ImageId_array *v6; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A57BA3 & 1) == 0 )
  {
    sub_1B885B0(&TutorialFlag_ImageId___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A57BA3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_37688364(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (TutorialFlag_ImageId_array *)sub_1B88658(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v5 )
      goto LABEL_13;
    max_length = v5->max_length;
    v6 = v5;
    if ( !max_length || (v5->m_Items[1] = 4, max_length == 1) )
      sub_1B88814(v5, v5);
    v5->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1B8880C(v5, v6);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v5, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  SupportServantEquipListMenu__SetListManagerStatus(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__EndShowServantEquip(
        SupportServantEquipListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A57BA9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__);
    byte_4A57BA9 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(supportServantEquipListViewManager, isDecide);
    }
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_requedstCallback; // x0
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback;
  v5 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1B88554(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      1LL,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4A57BA1 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4A57BA1 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0LL);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0LL),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1B8880C(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0LL);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall SupportServantEquipListMenu__OnClickCancel(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A57BA7 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_OnClickCancel__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_endCancelButton__);
    byte_4A57BA7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1B8880C(0LL, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v4 = Method_SupportServantEquipListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    v6 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      v7);
    SupportServantEquipListMenu__StatusRequest(this, v6, v8);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickDecide(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      sub_1B8880C(0LL, method);
    SelectItem = SupportServantEquipListViewManager__GetSelectItem(supportServantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    SupportServantEquipListMenu__Decide(this, v5);
  }
}


void __fastcall SupportServantEquipListMenu__OnClickScaleChange(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A57BB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportServantEquipListMenu_OnClickScaleChange__);
    byte_4A57BB0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, v5),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1B8880C(supportServantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__OnSelectServantEquip(
        SupportServantEquipListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  SupportServantEquipListMenu_o *v6; // x19
  SupportServantEquipListViewItem_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x21
  char v14; // w22
  int32_t tabModeKind; // w8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  int32_t v18; // w21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v25; // x0
  const MethodInfo *v26; // x3
  intptr_t v27; // w2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct SupportServantEquipListViewManager_o *v30; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _BOOL4 isBase; // w23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  SupportServantEquipServantItem_o *v37; // x0
  SupportServantEquipListMenu_o *v38; // x1
  SupportServantEquipListViewManager_CallbackFunc_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v44; // x23
  struct UserServantEntity_o *v45; // x8
  __int128 v46; // q1
  const MethodInfo *v47; // x2
  struct SupportServantEquipListViewManager_o *v48; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v49; // x21
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  int32_t v52; // w3
  const MethodInfo *v53; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4A57BA8 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndShowServantEquip__);
    this = (SupportServantEquipListMenu_o *)sub_1B885B0(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4A57BA8 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      v7 = 0LL;
    }
    else
    {
      this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
      if ( !this )
        goto LABEL_68;
      this = (SupportServantEquipListMenu_o *)SupportServantEquipListViewManager__GetItem(
                                                (SupportServantEquipListViewManager_o *)this,
                                                n,
                                                *(const MethodInfo **)&n);
      v7 = (SupportServantEquipListViewItem_o *)this;
    }
    switch ( kind )
    {
      case 1:
        SupportServantEquipListMenu__Decide(v6, *(const MethodInfo **)&kind);
        return;
      case 2:
        v11 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v12 = (System_Reflection_MethodBase_o *)sub_1B88594(v11, v11[4]);
        if ( v7 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = v7->fields.isUse || v7->fields.isBase;
          userSvtEntity = v7->fields.userSvtEntity;
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v44,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0LL);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog_30509280(
              (CommonUI_o *)Instance,
              0,
              userSvtEntity,
              v14,
              v44,
              0LL,
              0LL);
            return;
          }
        }
        else
        {
          OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0LL);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
          v25 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
          v27 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
LABEL_50:
          v39 = v25;
          SupportServantEquipListViewManager_CallbackFunc___ctor(v25, (Il2CppObject *)v6, v27, v26);
          if ( supportServantEquipListViewManager )
          {
            supportServantEquipListViewManager->fields.callbackFunc = v39;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
              (int32_t)v39,
              v40,
              v41);
            SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 2, v42);
            return;
          }
        }
LABEL_68:
        sub_1B8880C(this, *(_QWORD *)&kind);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          v28 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          if ( !v7 )
            goto LABEL_68;
          v7->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          v16 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 11, 0LL);
          if ( !v7 )
            goto LABEL_68;
          v7->fields.isSwapLock ^= 1u;
        }
        else
        {
          v30 = v6->fields.supportServantEquipListViewManager;
          if ( !v30 || !v7 )
            goto LABEL_68;
          servantItemInfo = v30->fields.servantItemInfo;
          servantItemDraw = v30->fields.servantItemDraw;
          isBase = v7->fields.isBase;
          v34 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v34 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
          if ( isBase )
          {
            v7->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_68;
            v37 = servantItemInfo;
            v38 = 0LL;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              *(const MethodInfo **)&kind);
            v45 = v7->fields.userSvtEntity;
            v7->fields.isBase = 1;
            if ( !v45 )
              goto LABEL_68;
            v46 = *(_OWORD *)&v45->fields.id.fields.fakeValue;
            *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v45->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v55.fields.fakeValue = v46;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v54 = v55;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(
                                                      &v54,
                                                      0LL);
            if ( !servantItemInfo )
              goto LABEL_68;
            v38 = this;
            v37 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v37, (int64_t)v38, v36);
          if ( !servantItemDraw )
            goto LABEL_68;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, v47);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshEquipped(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
          this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
          if ( !this )
            goto LABEL_68;
          SupportServantEquipListViewManager__RefreshListDisp(
            (SupportServantEquipListViewManager_o *)this,
            *(const MethodInfo **)&kind);
        }
        v6->fields.state = 2;
        v48 = v6->fields.supportServantEquipListViewManager;
        v49 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v49,
          (Il2CppObject *)v6,
          (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          v50);
        if ( !v48 )
          goto LABEL_68;
        v48->fields.callbackFunc = v49;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v48->fields.callbackFunc, (int32_t)v49, v51, v52);
        SupportServantEquipListViewManager__SetMode_33327124(v48, 2, v53);
        return;
      case 4:
        v18 = v6->fields.tabModeKind;
        if ( v18 == 1 )
        {
          v19 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v20 = (System_Reflection_MethodBase_o *)sub_1B88594(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 11, 0LL);
          if ( !v7 )
            goto LABEL_68;
          v7->fields.isSwapLock ^= 1u;
        }
        else
        {
          v21 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
          if ( v18 == 2 )
          {
            if ( !v7 )
              goto LABEL_68;
            v7->fields.isSwapChoice ^= 1u;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__checkEquipChange((SupportServantEquipListViewManager_o *)this, v7, v23);
          }
        }
        v6->fields.state = 2;
        supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
        v25 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        v27 = (int)Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        goto LABEL_50;
      default:
        v8 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.state = 3;
        if ( callbackFunc )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            1LL,
            (unsigned int)v6->fields.classPos,
            0LL,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        return;
    }
  }
}


void __fastcall SupportServantEquipListMenu__Open(
        SupportServantEquipListMenu_o *this,
        SupportServantData_array *supportServantDatas,
        int32_t nowDeckNum,
        int32_t classPos,
        EventUpValSetupInfo_o *eventSetupInfo,
        int32_t nowDeckId,
        System_Int32_array *fixMainDeckIds,
        System_Int32_array *fixEventDeckIds,
        SupportServantEquipListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  SupportServantData_o *Equip; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  Il2CppClass **v21; // x28
  struct SupportServantData_o **v22; // x28
  SupportServantData_o *v23; // t1
  int32_t v24; // w2
  int32_t v25; // w3
  struct SupportServantData_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t state; // w8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v33; // x20
  const MethodInfo *v34; // [xsp+0h] [xbp-70h]

  if ( (byte_4A57BA2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndOpen__);
    byte_4A57BA2 = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( supportServantDatas->max_length <= nowDeckNum )
    goto LABEL_19;
  v21 = &supportServantDatas->obj.klass + nowDeckNum;
  v23 = (SupportServantData_o *)v21[4];
  v22 = (struct SupportServantData_o **)(v21 + 4);
  Equip = v23;
  if ( !v23 )
    goto LABEL_18;
  Equip = (SupportServantData_o *)SupportServantData__getEquip(Equip, classPos, v20);
  this->fields.isSelectedSvt = (__int64)Equip > 0;
  if ( supportServantDatas->max_length <= nowDeckNum )
LABEL_19:
    sub_1B88814(Equip, v19);
  v26 = *v22;
  this->fields.supportServantData = *v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.supportServantData, (int32_t)v26, v24, v25);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v27, v28);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v30);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v27, v28);
    this->fields.classPos = classPos;
    Equip = (SupportServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( Equip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Equip, 1, 0LL);
      Equip = (SupportServantData_o *)this->fields.titleInfo;
      if ( Equip )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Equip, 0LL, 1, 0LL, 23, 0LL);
        Equip = (SupportServantData_o *)this->fields.titleInfo;
        if ( Equip )
        {
          TitleInfoControl__setBackBtnSprite_37184884((TitleInfoControl_o *)Equip, 1, 0, 0, 0LL);
          Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
          if ( Equip )
          {
            SupportServantEquipListViewManager__CreateList(
              (SupportServantEquipListViewManager_o *)Equip,
              supportServantDatas,
              nowDeckNum,
              classPos,
              eventSetupInfo,
              nowDeckId,
              fixMainDeckIds,
              fixEventDeckIds,
              v34);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v31);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                v19);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0LL);
                v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0LL);
                BaseMenu__Open((BaseMenu_o *)this, v33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1B8880C(Equip, v19);
  }
}


void __fastcall SupportServantEquipListMenu__SetListManagerStatus(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantEquipListMenu_o *v3; // x20
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1

  v3 = this;
  if ( (byte_4A57BA5 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    this = (SupportServantEquipListMenu_o *)sub_1B885B0(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4A57BA5 = 1;
  }
  supportServantEquipListViewManager = v3->fields.supportServantEquipListViewManager;
  if ( v3->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v9 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1B8880C(this, method);
  }
  v5 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1B887FC(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)v3,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v6);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v5;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8);
  v9 = 2;
LABEL_8:
  SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, v9, v2);
}


void __fastcall SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w4
  bool v14; // w5
  int32_t v15; // w2
  int32_t v16; // w3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A57BAF & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndStatusSync__);
    byte_4A57BAF = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v18 = 0LL;
  choiceList = 0LL;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( SupportServantEquipListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v18,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v15, v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v17,
                                                                                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v12 = v18;
        v11 = choiceList;
        v14 = 1;
        v13 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1B8880C(supportServantEquipListViewManager, callback);
    }
  }
  else if ( tabModeKind == 1 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( SupportServantEquipListViewManager__GetSwapLockList(
           supportServantEquipListViewManager,
           &lockList,
           &unlockList,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v10,
                                                                                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v12 = unlockList;
        v11 = lockList;
        v13 = 1;
        v14 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v11,
          v12,
          0,
          v13,
          v14,
          0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__add_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListMenu_o *v11; // x0
  SupportServantEquipListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A57B9F & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    byte_4A57B9F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  SupportServantEquipListMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__endCancelButton(
        SupportServantEquipListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v5; // x2
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  if ( isRequest )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_33327124(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      0LL,
      (unsigned int)this->fields.classPos,
      0LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall SupportServantEquipListMenu__onClickChoiceTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A57BAD & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    byte_4A57BAD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          v8);
        SupportServantEquipListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabChoice__,
        v11);
      SupportServantEquipListMenu__StatusRequest(this, v10, v12);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 2, v5);
  }
}


void __fastcall SupportServantEquipListMenu__onClickLockTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t tabModeKind; // w8
  SupportServantEquipListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  SupportServantEquipListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A57BAC & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndClickTabLock__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_onClickLockTabButton__);
    byte_4A57BAC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          v8);
        SupportServantEquipListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
      SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndClickTabLock__,
        v11);
      SupportServantEquipListMenu__StatusRequest(this, v10, v12);
    }
    SupportServantEquipListMenu__setModeTabKind(this, 1, v5);
  }
}


void __fastcall SupportServantEquipListMenu__onClickNormalTabButton(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57BAB & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SupportServantEquipListMenu_EndClickTabNormal__);
    sub_1B885B0(&Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    byte_4A57BAB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1B887FC(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      v6);
    SupportServantEquipListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall SupportServantEquipListMenu__remove_callbackFunc(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportServantEquipListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A57BA0 & 1) == 0 )
  {
    sub_1B885B0(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    byte_4A57BA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  SupportServantEquipListMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu__setModeTabKind(
        SupportServantEquipListMenu_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *normalTabButton; // x0
  UICommonButton_o *v6; // x20
  bool enabled; // w0
  System_String_o **v8; // x8
  UICommonButton_o *lockTabButton; // x20
  bool v10; // w0
  System_String_o **v11; // x8
  UICommonButton_o *choiceTabButton; // x20
  bool v13; // w0
  __int64 *v14; // x8
  const MethodInfo *v15; // x1
  int32_t tabModeKind; // w8
  UILabel_o *explanationLabel; // x20
  __int64 *v18; // x8
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x8

  if ( (byte_4A57BAE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11591/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_1B885B0(&StringLiteral_11592/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A57BAE = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0LL);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0LL);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17664/*"button_select_unreg"*/ : &StringLiteral_17663/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17649/*"button_alllock_reg"*/ : &StringLiteral_17650/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0LL);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v14 = &StringLiteral_17647/*"button_allchoice_reg"*/;
    else
      v14 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v14, 0LL);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11591/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11592/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( tabModeKind )
      {
LABEL_36:
        SupportServantEquipListMenu__SetListManagerStatus(this, v15);
        supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
        if ( supportServantEquipListViewManager )
        {
          supportServantEquipListViewManager->fields.isCanNotLongPush = this->fields.tabModeKind != 0;
          return;
        }
LABEL_39:
        sub_1B8880C(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11593/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v18, 0LL);
    if ( !explanationLabel )
      goto LABEL_39;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0LL);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_CallbackFunc___ctor(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CB380;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB320;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_CallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  _QWORD v15[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v16; // [xsp+10h] [xbp-60h]
  int32_t v17; // [xsp+28h] [xbp-48h] BYREF
  int32_t v18; // [xsp+2Ch] [xbp-44h] BYREF

  v17 = classPos;
  v18 = result;
  if ( (byte_4A57BB2 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_4A57BB2 = 1;
  }
  v16 = 0u;
  v15[0] = j_il2cpp_value_box_0(
             SupportSelectRootComponent_ResultKind_TypeInfo,
             &v18,
             *(_QWORD *)&classPos,
             item,
             callback);
  v15[1] = j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  *(_QWORD *)&v16 = item;
  return (System_IAsyncResult_o *)sub_1B88564(this, v15, callback, object);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SupportServantEquipListMenu_CallbackFunc__Invoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, SupportServantEquipListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    classPos,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CB3E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB398;
}


System_IAsyncResult_o *__fastcall SupportServantEquipListMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A57BB3 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A57BB3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}