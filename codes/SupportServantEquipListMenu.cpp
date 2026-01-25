void SupportServantEquipListMenu___ctor(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEAC99 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseMenu_TypeInfo);
    byte_4CEAC99 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void SupportServantEquipListMenu__Callback(
        SupportServantEquipListMenu_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, int32_t, int32_t, SupportServantEquipListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      result,
      classPos,
      item,
      callbackFunc->fields.method);
}


void SupportServantEquipListMenu__Close(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportServantEquipListMenu__Close_36183836(this, 0, v2);
}


void SupportServantEquipListMenu__Close_36183836(
        SupportServantEquipListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4CEAC8C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndClose__);
    byte_4CEAC8C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  SupportServantEquipListMenu__SetListManagerStatus(this, v10);
  v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


void SupportServantEquipListMenu__Decide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4CEAC8E & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_Decide__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndDecide__);
    byte_4CEAC8E = 1;
  }
  v3 = Method_SupportServantEquipListMenu_Decide__;
  if ( (*((_BYTE *)Method_SupportServantEquipListMenu_Decide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_Decide__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
  SupportServantEquipListMenu_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SupportServantEquipListMenu_EndDecide__,
    v6);
  SupportServantEquipListMenu__StatusRequest(this, v5, v7);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__EndClickTabChoice(
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
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C7BD40(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 2, method);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__EndClickTabLock(
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
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C7BD40(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 1, method);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__EndClickTabNormal(
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
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
      sub_1C7BD40(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__setModeTabKind(this, 0, method);
}


void SupportServantEquipListMenu__EndClose(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportServantEquipListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SupportServantEquipListMenu__EndCloseEventServantWarning(
        SupportServantEquipListMenu_o *this,
        const MethodInfo *method)
{
  struct SupportServantEquipListMenu_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      (unsigned int)this->fields.classPos,
      0,
      callbackFunc->fields.method);
}


void SupportServantEquipListMenu__EndCloseList(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  ;
}


void SupportServantEquipListMenu__EndCloseShowServantEquip(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4CEAC92 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4CEAC92 = 1;
  }
  this->fields.state = 2;
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  v4 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1C7BD34(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v5);
  if ( !supportServantEquipListViewManager )
    sub_1C7BD40(v6, v7);
  supportServantEquipListViewManager->fields.callbackFunc = v4;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__EndDecide(
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
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v5);
  }
  *(_QWORD *)&isRequest = (unsigned int)this->fields.selectNum;
  this->fields.state = 3;
  if ( isRequest < 0 )
  {
    Item = 0;
LABEL_10:
    if ( this->fields.isSelectedSvt )
      goto LABEL_13;
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( supportServantEquipListViewManager )
    {
      ListViewManager__SetScrollBarValue((ListViewManager_o *)supportServantEquipListViewManager, 0);
      goto LABEL_13;
    }
LABEL_16:
    sub_1C7BD40(supportServantEquipListViewManager, isRequest);
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
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, SupportServantEquipListViewItem_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      (unsigned int)this->fields.classPos,
      Item,
      callbackFunc->fields.method);
}


void SupportServantEquipListMenu__EndOpen(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *Instance; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // w8

  if ( (byte_4CEAC8B & 1) == 0 )
  {
    sub_1C7BAE8(&TutorialFlag_ImageId___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&TutorialFlag_TypeInfo);
    byte_4CEAC8B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_40989036(110, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = sub_1C7BB90(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !v5 )
      goto LABEL_13;
    v7 = *(_DWORD *)(v5 + 24);
    v6 = v5;
    if ( !v7 || (*(_DWORD *)(v5 + 32) = 4, v7 == 1) )
      sub_1C7BD48(v5);
    *(_DWORD *)(v5 + 36) = 5;
    if ( !Instance )
LABEL_13:
      sub_1C7BD40(v5, v6);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, (TutorialFlag_ImageId_array *)v5, 110, 0, 0, 0, 0);
  }
  this->fields.state = 2;
  SupportServantEquipListMenu__SetListManagerStatus(this, v3);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__EndShowServantEquip(
        SupportServantEquipListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CEAC91 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndCloseShowServantEquip__);
    byte_4CEAC91 = 1;
  }
  if ( isDecide )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ModifyList(supportServantEquipListViewManager, 0, method),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_1C7BD40(supportServantEquipListViewManager, isDecide);
    }
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void SupportServantEquipListMenu__EndStatusSync(
        SupportServantEquipListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *v9; // x19
  struct SupportServantEquipListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0;
    sub_1C7BA8C(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      1,
      v9->fields.method);
  }
}


void SupportServantEquipListMenu__Init(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UILabel_o *explanationLabel; // x20
  UnityEngine_Behaviour_o *normalTabButton; // x20
  bool enabled; // w0
  const MethodInfo *v7; // x2

  if ( (byte_4CEAC89 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11676/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4CEAC89 = 1;
  }
  supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  SupportServantEquipListViewManager__DestroyList(supportServantEquipListViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11676/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/,
                                                                                 0);
  if ( !explanationLabel
    || (UILabel__set_text(explanationLabel, (System_String_o *)supportServantEquipListViewManager, 0),
        normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton,
        this->fields.state = 0,
        !normalTabButton) )
  {
LABEL_9:
    sub_1C7BD40(supportServantEquipListViewManager, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled(normalTabButton, 0);
  UICommonButton__SetColliderEnable((UICommonButton_o *)normalTabButton, enabled, 1, 0);
  SupportServantEquipListMenu__setModeTabKind(this, 0, v7);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void SupportServantEquipListMenu__OnClickCancel(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *supportServantEquipListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4CEAC8F & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_OnClickCancel__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_endCancelButton__);
    byte_4CEAC8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      supportServantEquipListViewManager = (ListViewManager_o *)this->fields.supportServantEquipListViewManager;
      if ( !supportServantEquipListViewManager )
        sub_1C7BD40(0, method);
      ListViewManager__SetScrollBarValue(supportServantEquipListViewManager, 0);
    }
    this->fields.state = 3;
    v4 = Method_SupportServantEquipListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    v6 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_endCancelButton__,
      v7);
    SupportServantEquipListMenu__StatusRequest(this, v6, v8);
  }
}


void SupportServantEquipListMenu__OnClickDecide(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  SupportServantEquipListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      sub_1C7BD40(0, method);
    SelectItem = SupportServantEquipListViewManager__GetSelectItem(supportServantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    SupportServantEquipListMenu__Decide(this, v5);
  }
}


void SupportServantEquipListMenu__OnClickScaleChange(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4CEAC98 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_OnClickScaleChange__);
    byte_4CEAC98 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager
      || (SupportServantEquipListViewManager__ChangeIconScale(supportServantEquipListViewManager, v5),
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                                                         supportServantEquipListViewManager,
                                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1C7BD40(supportServantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)supportServantEquipListViewManager, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__OnSelectServantEquip(
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
  void *v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct SupportServantEquipListViewManager_o *v30; // x8
  SupportServantEquipServantItem_o *servantItemInfo; // x21
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x22
  _BOOL4 isBase; // w23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  SupportServantEquipServantItem_o *v36; // x0
  SupportServantEquipListMenu_o *v37; // x1
  SupportServantEquipListViewManager_CallbackFunc_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  const MethodInfo *v45; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v47; // x23
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q1
  struct SupportServantEquipListViewManager_o *v50; // x20
  SupportServantEquipListViewManager_CallbackFunc_o *v51; // x21
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  const MethodInfo *v59; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-50h]

  v6 = this;
  if ( (byte_4CEAC90 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndShowServantEquip__);
    this = (SupportServantEquipListMenu_o *)sub_1C7BAE8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4CEAC90 = 1;
  }
  if ( v6->fields.state == 2 )
  {
    v6->fields.selectNum = n;
    if ( n < 0 )
    {
      v7 = 0;
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
          v11 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v11, v11[4]);
        if ( v7 )
        {
          OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
          v6->fields.state = 5;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = v7->fields.isUse || v7->fields.isBase;
          userSvtEntity = v7->fields.userSvtEntity;
          v47 = (ServantStatusDialog_EndDelegate_o *)sub_1C7BD34(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v47,
            (Il2CppObject *)v6,
            Method_SupportServantEquipListMenu_EndShowServantEquip__,
            0);
          if ( Instance )
          {
            CommonUI__OpenServantEquipStatusDialog_31497664((CommonUI_o *)Instance, 0, userSvtEntity, v14, v47, 0, 0);
            return;
          }
        }
        else
        {
          OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0);
          v6->fields.state = 2;
          supportServantEquipListViewManager = v6->fields.supportServantEquipListViewManager;
          v25 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1C7BD34(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
          v27 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
LABEL_50:
          v38 = v25;
          SupportServantEquipListViewManager_CallbackFunc___ctor(v25, (Il2CppObject *)v6, (intptr_t)v27, v26);
          if ( supportServantEquipListViewManager )
          {
            supportServantEquipListViewManager->fields.callbackFunc = v38;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
              (int32_t)v38,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 2, v45);
            return;
          }
        }
LABEL_68:
        sub_1C7BD40(this, *(_QWORD *)&kind);
      case 3:
        tabModeKind = v6->fields.tabModeKind;
        if ( tabModeKind == 2 )
        {
          v28 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v29 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
          if ( !v7 )
            goto LABEL_68;
          v7->fields.isSwapChoice ^= 1u;
        }
        else if ( tabModeKind == 1 )
        {
          v16 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v16 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v17 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v16, v16[4]);
          OverwriteAssetSoundName__PlaySystemSe(v17, 11, 0, 0);
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
            v34 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v35 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v34, v34[4]);
          OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0);
          if ( isBase )
          {
            v7->fields.isBase = 0;
            if ( !servantItemInfo )
              goto LABEL_68;
            v36 = servantItemInfo;
            v37 = 0;
          }
          else
          {
            this = (SupportServantEquipListMenu_o *)v6->fields.supportServantEquipListViewManager;
            if ( !this )
              goto LABEL_68;
            SupportServantEquipListViewManager__resetEquipItemBaseFlag(
              (SupportServantEquipListViewManager_o *)this,
              *(const MethodInfo **)&kind);
            v48 = v7->fields.userSvtEntity;
            v7->fields.isBase = 1;
            if ( !v48 )
              goto LABEL_68;
            v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
            *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v61.fields.fakeValue = v49;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v60 = v61;
            this = (SupportServantEquipListMenu_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(
                                                      &v60,
                                                      0);
            if ( !servantItemInfo )
              goto LABEL_68;
            v37 = this;
            v36 = servantItemInfo;
          }
          SupportServantEquipServantItem__SetEquipTarget(v36, (int64_t)v37, 0);
          if ( !servantItemDraw )
            goto LABEL_68;
          SupportServantEquipServantItemDraw__SetItem(servantItemDraw, servantItemInfo, 0, 0, 0);
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
        v50 = v6->fields.supportServantEquipListViewManager;
        v51 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1C7BD34(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        SupportServantEquipListViewManager_CallbackFunc___ctor(
          v51,
          (Il2CppObject *)v6,
          (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
          v52);
        if ( !v50 )
          goto LABEL_68;
        v50->fields.callbackFunc = v51;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v50->fields.callbackFunc,
          (int32_t)v51,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        SupportServantEquipListViewManager__SetMode_36184324(v50, 2, v59);
        return;
      case 4:
        v18 = v6->fields.tabModeKind;
        if ( v18 == 1 )
        {
          v19 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v20 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 11, 0, 0);
          if ( !v7 )
            goto LABEL_68;
          v7->fields.isSwapLock ^= 1u;
        }
        else
        {
          v21 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
          v22 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
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
        v25 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1C7BD34(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
        v27 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        goto LABEL_50;
      default:
        v8 = Method_SupportServantEquipListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_SupportServantEquipListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_OnSelectServantEquip__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
        callbackFunc = v6->fields.callbackFunc;
        v6->fields.state = 3;
        if ( callbackFunc )
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            1,
            (unsigned int)v6->fields.classPos,
            0,
            callbackFunc->fields.method);
        return;
    }
  }
}


void SupportServantEquipListMenu__Open(
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
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct SupportServantData_o *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t state; // w8
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v41; // x20
  const MethodInfo *v42; // [xsp+0h] [xbp-70h]

  if ( (byte_4CEAC8A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndOpen__);
    byte_4CEAC8A = 1;
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)supportServantDatas);
  if ( !supportServantDatas )
    goto LABEL_18;
  if ( LODWORD(supportServantDatas->max_length) <= nowDeckNum )
    goto LABEL_19;
  v21 = &supportServantDatas->obj.klass + nowDeckNum;
  v23 = (SupportServantData_o *)v21[4];
  v22 = (struct SupportServantData_o **)(v21 + 4);
  Equip = v23;
  if ( !v23 )
    goto LABEL_18;
  Equip = (SupportServantData_o *)SupportServantData__getEquip(Equip, classPos, v20);
  this->fields.isSelectedSvt = (__int64)Equip > 0;
  if ( LODWORD(supportServantDatas->max_length) <= nowDeckNum )
LABEL_19:
    sub_1C7BD48(Equip);
  v30 = *v22;
  this->fields.supportServantData = *v22;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.supportServantData,
    (int32_t)v30,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.state = 2;
    SupportServantEquipListMenu__SetListManagerStatus(this, v38);
    return;
  }
  if ( !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.classPos = classPos;
    Equip = (SupportServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( Equip )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Equip, 1, 0);
      Equip = (SupportServantData_o *)this->fields.titleInfo;
      if ( Equip )
      {
        TitleInfoControl__setTitleInfo((TitleInfoControl_o *)Equip, 0, 1, 0, 24, 1, 0);
        Equip = (SupportServantData_o *)this->fields.titleInfo;
        if ( Equip )
        {
          TitleInfoControl__setBackBtnSprite_40473788((TitleInfoControl_o *)Equip, 1, 0, 0, 0);
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
              v42);
            this->fields.state = 1;
            SupportServantEquipListMenu__SetListManagerStatus(this, v39);
            Equip = (SupportServantData_o *)this->fields.supportServantEquipListViewManager;
            if ( Equip )
            {
              scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
              Equip = (SupportServantData_o *)SupportServantEquipListViewManager__GetScaleButtonSpriteName(
                                                (SupportServantEquipListViewManager_o *)Equip,
                                                v19);
              if ( scaleChangeTabSprite )
              {
                UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Equip, 0);
                v41 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportServantEquipListMenu_EndOpen__, 0);
                BaseMenu__Open((BaseMenu_o *)this, v41, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_1C7BD40(Equip, v19);
  }
}


void SupportServantEquipListMenu__SetListManagerStatus(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SupportServantEquipListMenu_o *v3; // x20
  struct SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x19
  SupportServantEquipListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w1

  v3 = this;
  if ( (byte_4CEAC8D & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
    this = (SupportServantEquipListMenu_o *)sub_1C7BAE8(&Method_SupportServantEquipListMenu_OnSelectServantEquip__);
    byte_4CEAC8D = 1;
  }
  supportServantEquipListViewManager = v3->fields.supportServantEquipListViewManager;
  if ( v3->fields.state != 2 )
  {
    if ( supportServantEquipListViewManager )
    {
      v13 = 1;
      goto LABEL_8;
    }
LABEL_9:
    sub_1C7BD40(this, method);
  }
  v5 = (SupportServantEquipListViewManager_CallbackFunc_o *)sub_1C7BD34(SupportServantEquipListViewManager_CallbackFunc_TypeInfo);
  SupportServantEquipListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)v3,
    (intptr_t)Method_SupportServantEquipListMenu_OnSelectServantEquip__,
    v6);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  supportServantEquipListViewManager->fields.callbackFunc = v5;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&supportServantEquipListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = 2;
LABEL_8:
  SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, v13, v2);
}


void SupportServantEquipListMenu__StatusRequest(
        SupportServantEquipListMenu_o *this,
        SupportServantEquipListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabModeKind; // w8
  SupportServantEquipListViewManager_o *supportServantEquipListViewManager; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  System_Int64_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CEAC97 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndStatusSync__);
    byte_4CEAC97 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v26 = 0;
  choiceList = 0;
  tabModeKind = this->fields.tabModeKind;
  if ( tabModeKind == 2 )
  {
    supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager;
    if ( !supportServantEquipListViewManager )
      goto LABEL_21;
    if ( SupportServantEquipListViewManager__GetSwapChoiceList(
           supportServantEquipListViewManager,
           &choiceList,
           &v26,
           v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v25,
                                                                                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v16 = v26;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C7BD40(supportServantEquipListViewManager, callback);
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
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_SupportServantEquipListMenu_EndStatusSync__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                     v14,
                                                                                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( supportServantEquipListViewManager )
      {
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)supportServantEquipListViewManager,
          v15,
          v16,
          0,
          v17,
          v18,
          0);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void SupportServantEquipListMenu__add_callbackFunc(
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

  if ( (byte_4CEAC87 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    byte_4CEAC87 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  SupportServantEquipListMenu__remove_callbackFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__endCancelButton(
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
          (supportServantEquipListViewManager = this->fields.supportServantEquipListViewManager) == 0) )
    {
LABEL_9:
      sub_1C7BD40(supportServantEquipListViewManager, isRequest);
    }
    SupportServantEquipListViewManager__SetMode_36184324(supportServantEquipListViewManager, 3, v5);
  }
  SupportServantEquipListMenu__Init(this, (const MethodInfo *)isRequest);
  supportServantEquipListViewManager = (SupportServantEquipListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0);
  if ( !supportServantEquipListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantEquipListViewManager, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      0,
      (unsigned int)this->fields.classPos,
      0,
      callbackFunc->fields.method);
}


void SupportServantEquipListMenu__onClickChoiceTabButton(SupportServantEquipListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4CEAC95 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndClickTabChoice__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    byte_4CEAC95 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickChoiceTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickChoiceTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_onClickChoiceTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 2 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabChoice__,
          v8);
        SupportServantEquipListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
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


void SupportServantEquipListMenu__onClickLockTabButton(SupportServantEquipListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4CEAC94 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndClickTabLock__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_onClickLockTabButton__);
    byte_4CEAC94 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickLockTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickLockTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_onClickLockTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind )
    {
      if ( tabModeKind == 1 )
      {
        v7 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
        SupportServantEquipListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_SupportServantEquipListMenu_EndClickTabLock__,
          v8);
        SupportServantEquipListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
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


void SupportServantEquipListMenu__onClickNormalTabButton(SupportServantEquipListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  SupportServantEquipListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4CEAC93 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_EndClickTabNormal__);
    sub_1C7BAE8(&Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    byte_4CEAC93 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportServantEquipListMenu_onClickNormalTabButton__;
    if ( (*((_BYTE *)Method_SupportServantEquipListMenu_onClickNormalTabButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportServantEquipListMenu_onClickNormalTabButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (SupportServantEquipListMenu_RequestCallbackFunc_o *)sub_1C7BD34(SupportServantEquipListMenu_RequestCallbackFunc_TypeInfo);
    SupportServantEquipListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SupportServantEquipListMenu_EndClickTabNormal__,
      v6);
    SupportServantEquipListMenu__StatusRequest(this, v5, v7);
  }
}


void SupportServantEquipListMenu__remove_callbackFunc(
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

  if ( (byte_4CEAC88 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportServantEquipListMenu_CallbackFunc_TypeInfo);
    byte_4CEAC88 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportServantEquipListMenu_CallbackFunc_c *)v8->klass != SupportServantEquipListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  SupportServantEquipListMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void SupportServantEquipListMenu__setModeTabKind(
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

  if ( (byte_4CEAC96 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11674/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_1C7BAE8(&StringLiteral_17730/*"button_allchoice_reg"*/);
    sub_1C7BAE8(&StringLiteral_17733/*"button_alllock_unreg"*/);
    sub_1C7BAE8(&StringLiteral_11676/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_1C7BAE8(&StringLiteral_11675/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_1C7BAE8(&StringLiteral_17746/*"button_select_reg"*/);
    sub_1C7BAE8(&StringLiteral_17747/*"button_select_unreg"*/);
    sub_1C7BAE8(&StringLiteral_17732/*"button_alllock_reg"*/);
    sub_1C7BAE8(&StringLiteral_17731/*"button_allchoice_unreg"*/);
    byte_4CEAC96 = 1;
  }
  if ( this->fields.tabModeKind != modeKind )
  {
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabButton;
    this->fields.tabModeKind = modeKind;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, modeKind != 0, 0);
    v6 = this->fields.normalTabButton;
    if ( !v6 )
      goto LABEL_39;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.normalTabButton, 0);
    UICommonButton__SetColliderEnable(v6, enabled, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.normalTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v8 = (System_String_o **)(this->fields.tabModeKind ? &StringLiteral_17747/*"button_select_unreg"*/ : &StringLiteral_17746/*"button_select_reg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v8, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 1, 0);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_39;
    v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
    UICommonButton__SetColliderEnable(lockTabButton, v10, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    v11 = (System_String_o **)(this->fields.tabModeKind == 1 ? &StringLiteral_17732/*"button_alllock_reg"*/ : &StringLiteral_17733/*"button_alllock_unreg"*/);
    UISprite__set_spriteName((UISprite_o *)normalTabButton, *v11, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !normalTabButton )
      goto LABEL_39;
    UnityEngine_Behaviour__set_enabled(normalTabButton, this->fields.tabModeKind != 2, 0);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_39;
    v13 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
    UICommonButton__SetColliderEnable(choiceTabButton, v13, 1, 0);
    normalTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabSprite;
    if ( !normalTabButton )
      goto LABEL_39;
    if ( this->fields.tabModeKind == 2 )
      v14 = &StringLiteral_17730/*"button_allchoice_reg"*/;
    else
      v14 = &StringLiteral_17731/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)normalTabButton, (System_String_o *)*v14, 0);
    tabModeKind = this->fields.tabModeKind;
    if ( tabModeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11674/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( tabModeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11675/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
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
        sub_1C7BD40(normalTabButton, *(_QWORD *)&modeKind);
      }
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = &StringLiteral_11676/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    normalTabButton = (UnityEngine_Behaviour_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
    if ( !explanationLabel )
      goto LABEL_39;
    UILabel__set_text(explanationLabel, (System_String_o *)normalTabButton, 0);
    goto LABEL_36;
  }
}


void SupportServantEquipListMenu_CallbackFunc___ctor(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAE024;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AADFC4;
}


System_IAsyncResult_o *SupportServantEquipListMenu_CallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v12[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v13; // [xsp+10h] [xbp-60h]
  int32_t v14; // [xsp+28h] [xbp-48h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF

  v14 = classPos;
  v15 = result;
  if ( (byte_4CEAC9A & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&SupportSelectRootComponent_ResultKind_TypeInfo);
    byte_4CEAC9A = 1;
  }
  v13 = 0u;
  v12[0] = j_il2cpp_value_box_0(SupportSelectRootComponent_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v13 = item;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v12, callback, object);
}


void SupportServantEquipListMenu_CallbackFunc__EndInvoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SupportServantEquipListMenu_CallbackFunc__Invoke(
        SupportServantEquipListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t classPos,
        SupportServantEquipListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, SupportServantEquipListViewItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    classPos,
    item,
    this->fields.method);
}


void SupportServantEquipListMenu_RequestCallbackFunc___ctor(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAE084;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAE03C;
}


System_IAsyncResult_o *SupportServantEquipListMenu_RequestCallbackFunc__BeginInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4CEAC9B & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEAC9B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void SupportServantEquipListMenu_RequestCallbackFunc__EndInvoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SupportServantEquipListMenu_RequestCallbackFunc__Invoke(
        SupportServantEquipListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}