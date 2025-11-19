void CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CB22B1 & 1) == 0 )
  {
    sub_1C6BA08(&BaseMenu_TypeInfo);
    byte_4CB22B1 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void CharaGraphListMenu__Callback(CharaGraphListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, n, method);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


void CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_35180664(this, 0, v2);
}


void CharaGraphListMenu__Close_35180664(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_4CB22A0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClose__);
    byte_4CB22A0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v8);
  v9 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0);
}


void CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  struct ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4CB22B0 & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4CB22B0 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, method),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1C6BC54(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1C6BC60(servantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8);
  ServantListViewManager__SetMode_35184364(v5, 2, v9);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabChoice(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_1C6BC60(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v6);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v3);
}


void CharaGraphListMenu__EndClickTabCommandCode(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  CharaGraphListMenu__SetTabKind(this, 2, this->fields.modeKind, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabLock(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_1C6BC60(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v6);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabPush(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_1C6BC60(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v6);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 3, 0, v3);
}


void CharaGraphListMenu__EndClickTabServant(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  CharaGraphListMenu__SetTabKind(this, 0, this->fields.modeKind, 0, v3);
}


void CharaGraphListMenu__EndClickTabServantEquip(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  EventTutorialMaster__CheckTutorial(-1, 54, 0, 0, 0, 0, 0, 0);
  CharaGraphListMenu__SetTabKind(this, 1, this->fields.modeKind, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabStatus(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_1C6BC60(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v6);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void CharaGraphListMenu__EndCloseList(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void CharaGraphListMenu__EndCloseShowServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  struct ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4CB22AD & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4CB22AD = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, v2),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1C6BC54(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1C6BC60(servantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8);
  ServantListViewManager__SetMode_35184364(v5, 2, v9);
}


void CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C6B9AC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      callbackFunc->fields.method);
  }
}


void CharaGraphListMenu__EndOpen(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2

  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndShowServant(
        CharaGraphListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x21
  System_Action_o *v12; // x0
  bool v13; // cc
  System_Action_o *v14; // x20
  intptr_t *v15; // x8

  if ( (byte_4CB22AB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22AB = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_15;
    ServantListViewManager__ModifyList(servantListViewManager, 0, (const MethodInfo *)isNeedSort);
    if ( isNeedSort )
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_15;
      ListViewManager__SortItem((ListViewManager_o *)servantListViewManager, -1, 0, -1, 0);
    }
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
LABEL_15:
      sub_1C6BC60(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  v13 = questId < 1;
  v14 = v12;
  if ( v13 )
    v15 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v15 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v12, (Il2CppObject *)this, *v15, 0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndShowServantEquip(CharaGraphListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CB22AC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB22AC = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C6BC60(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_35184364(servantListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void CharaGraphListMenu__EndStatusSync(CharaGraphListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  CGThumbnailListItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (CGThumbnailListItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0;
    sub_1C6B9AC(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requedstCallback->fields.invoke_impl)(
      requedstCallback->fields.method_code,
      1,
      requedstCallback->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t CharaGraphListMenu__HidePushButton(
        CharaGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pushTabSprite; // x0

  pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
  if ( !pushTabSprite
    || (pushTabSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushTabSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pushTabSprite, 0, 0),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))pushTabSprite->klass[1]._1.name)(
          pushTabSprite,
          0,
          pushTabSprite->klass[1]._1.namespaze),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pushTabSprite, 0, 0),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0) )
  {
    sub_1C6BC60(pushTabSprite, *(_QWORD *)&modeKind);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)pushTabSprite, 0, !isInit, 0);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void CharaGraphListMenu__Init(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v4; // x0
  const MethodInfo *v5; // x1

  servantListViewManager = (ListViewManager_o *)this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_1C6BC60(0, method);
  ListViewManager__DestroyList(servantListViewManager, 0);
  ServantListViewManager__SaveSortInfo(v4, v5);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  CGThumbnailListItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0;
      sub_1C6B9AC(p_callbackFunc, 0, v2, v3);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        0,
        callbackFunc->fields.method);
    }
  }
}


void CharaGraphListMenu__OnClickDecide(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  CGThumbnailListItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0;
      sub_1C6B9AC(p_callbackFunc, 0, v2, v3);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        1,
        callbackFunc->fields.method);
    }
  }
}


void CharaGraphListMenu__OnClickScaleChange(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4CB22AE & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_4CB22AE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ChangeIconScale(servantListViewManager, v5),
          (servantListViewManager = this->fields.servantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantListViewManager = (ServantListViewManager_o *)ServantListViewManager__GetScaleButtonSpriteName(
                                                                 servantListViewManager,
                                                                 v5),
          !scaleChangeTabSprite) )
    {
      sub_1C6BC60(servantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0);
  }
}


void CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4CB22A7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        v11);
      CharaGraphListMenu__StatusRequest(this, v10, v12);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v5);
  }
}


void CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4CB22A4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    this = (CharaGraphListMenu_o *)sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A4 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C6BC60(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 2, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v8);
      CharaGraphListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4CB22A6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        v11);
      CharaGraphListMenu__StatusRequest(this, v10, v12);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v5);
  }
}


void CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4CB22A8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      v6);
    CharaGraphListMenu__StatusRequest(this, v5, v7);
  }
}


void CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4CB22A2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabServant__);
    this = (CharaGraphListMenu_o *)sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A2 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C6BC60(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 0, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v8);
      CharaGraphListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4CB22A3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    this = (CharaGraphListMenu_o *)sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A3 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C6BC60(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(v2, 0, v5);
    }
    else
    {
      v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v7);
      CharaGraphListMenu__StatusRequest(v2, v6, v8);
    }
  }
}


void CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4CB22A5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_1C6BA08(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4CB22A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C6BC54(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      v6);
    CharaGraphListMenu__StatusRequest(this, v5, v7);
  }
}


void CharaGraphListMenu__OnSelectServant(CharaGraphListMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  __int64 v7; // x19
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  int32_t tabKind; // w22
  ServantListViewItem_o *v21; // x8
  CommonUI_o *v22; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v24; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct ServantListViewManager_o *v30; // x19
  ServantListViewManager_CallbackFunc_c *v31; // x0
  ServantListViewManager_CallbackFunc_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  _BOOL4 isEnabled; // w23
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  const MethodInfo *v39; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v44; // x22
  ServantStatusDialog_ResultDelegate_o *v45; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v47; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v50; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v52; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v54; // w26
  System_String_o *v55; // x21
  System_String_o *v56; // x23
  __int64 v57; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  ServantListViewManager_o *v60; // x28
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ServantListViewManager_o *v63; // x27
  int32_t v64; // w0
  Il2CppClass *v65; // x8
  int32_t v66; // w25
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  ServantListViewManager_o *v69; // x25
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  ServantListViewManager_o *v72; // x25
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  ServantListViewManager_o *v75; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  int32_t v77; // w20
  int32_t v78; // w0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  ServantListViewManager_o *v81; // x20
  System_String_o *v82; // x20
  System_String_o *v83; // x22
  System_String_o *v84; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v86; // x25
  __int64 v87; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4CB22AA & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndShowServant__);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C6BA08(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&Rarity_TypeInfo);
    sub_1C6BA08(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_1C6BA08(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4CB22AA = 1;
  }
  v7 = sub_1C6BC54(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    this->fields.selectNum = n;
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_97;
      Item = ServantListViewManager__GetItem(servantListViewManager, n, v12);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v15 = (ServantListViewItem_o **)(v7 + 24);
    sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v12, v13);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v16, v17);
        ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          0,
          callbackFunc->fields.method);
      }
      return;
    }
    switch ( this->fields.modeKind )
    {
      case 0:
        v18 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnSelectServant__);
        v19 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = *v15;
        v22 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v21 )
          {
            userCommandCodeEntity = v21->fields.userCommandCodeEntity;
            v24 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_31430244(v22, 0, userCommandCodeEntity, v24, 0, 0);
              return;
            }
          }
LABEL_97:
          sub_1C6BC60(servantListViewManager, v9);
        }
        if ( !v21 )
          goto LABEL_97;
        userSvtEntity = v21->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_1C6BC54(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v44,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0);
          if ( !v22 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31428020(v22, 0, userSvtEntity, v44, 0);
        }
        else
        {
          v45 = (ServantStatusDialog_ResultDelegate_o *)sub_1C6BC54(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v45,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0);
          if ( !v22 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31428496(v22, 0, userSvtEntity, v45, 0, 0, 0);
        }
        return;
      case 1:
        v26 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v26 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnSelectServant__);
        v27 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v26, v26[4]);
        OverwriteAssetSoundName__PlaySystemSe(v27, 11, 0, 0);
        if ( !*v15 )
          goto LABEL_97;
        (*v15)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v28 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnSelectServant__);
        v29 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v28, v28[4]);
        OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0, 0);
        if ( !*v15 )
          goto LABEL_97;
        (*v15)->fields.isSwapChoice ^= 1u;
LABEL_27:
        this->fields.state = 2;
        v30 = this->fields.servantListViewManager;
        v31 = ServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_28;
      case 3:
        if ( !*v15 )
          goto LABEL_97;
        isEnabled = (*v15)->fields.isEnabled;
        v37 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v37 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListMenu_OnSelectServant__);
        v38 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v37, v37[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0, 0);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0);
          if ( !servantListViewManager )
            goto LABEL_97;
          dropList = (int64_t)servantListViewManager->fields.dropList;
          if ( !dropList )
            goto LABEL_41;
          if ( !*v15 )
            goto LABEL_97;
          v41 = (*v15)->fields.userSvtEntity;
          if ( !v41 )
            goto LABEL_97;
          v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
          *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v89.fields.fakeValue = v42;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v88 = v89;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v88, 0) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v15, v39);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v47 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v90.fields.currentCryptoKey = klass;
          *(_QWORD *)&v90.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                 v90,
                                                                 0);
          if ( !v47 )
            goto LABEL_97;
          v50 = DataMasterBase_object__object__int___GetEntity(
                  v47,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                 (UserServantEntity_o *)Entity,
                                                                 0,
                                                                 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          if ( !*v15 )
            goto LABEL_97;
          v52 = (*v15)->fields.userSvtEntity;
          if ( !v52 )
            goto LABEL_97;
          m_CancellationTokenSource = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(v52, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          v54 = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11950/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11949/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v57 = sub_1C6BAB0(object___TypeInfo, 6);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
          if ( !v57 )
            goto LABEL_97;
          v60 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v57 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v57 + 32) = v60;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 32), (int32_t)v60, v58, v59);
            if ( !v50 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName((ServantEntity_o *)v50, 0);
            v63 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v57 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v57 + 40) = v63;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 40), (int32_t)v63, v61, v62);
              v64 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0);
              v65 = Entity[6].klass;
              *(_QWORD *)&v91.fields.fakeValue = Entity[6].monitor;
              v66 = v64;
              *(_QWORD *)&v91.fields.currentCryptoKey = v65;
              servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                     v91,
                                                                     0);
              if ( !Master_object )
                goto LABEL_97;
              servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                     (ServantLimitImageMaster_o *)Master_object,
                                                                     v66,
                                                                     (int32_t)servantListViewManager,
                                                                     1,
                                                                     0);
              v69 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v57 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v57 + 48) = v69;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 48), (int32_t)v69, v67, v68);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v54, 0);
                v72 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v57 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v57 + 56) = v72;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 56), (int32_t)v72, v70, v71);
                  if ( !*v15 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v15)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0);
                  v75 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v57 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v57 + 64) = v75;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 64), (int32_t)v75, v73, v74);
                    servantListViewManager = (ServantListViewManager_o *)*v15;
                    if ( !*v15 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(
                                                                           (ServantListViewItem_o *)servantListViewManager,
                                                                           v9);
                    if ( !*v15 )
                      goto LABEL_97;
                    v76 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v15)->fields.userSvtEntity;
                    if ( !v76 )
                      goto LABEL_97;
                    v77 = (int)servantListViewManager;
                    v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v76[6], 0);
                    servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v77,
                                                                           v78,
                                                                           1,
                                                                           0);
                    v81 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1C6BB44(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v57 + 24) > 5u )
                      {
                        *(_QWORD *)(v57 + 72) = v81;
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v57 + 72), (int32_t)v81, v79, v80);
                        v82 = System_String__Format_64008236(v56, (System_Object_array *)v57, 0);
                        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_11948/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                        v84 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v86 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C6BC54(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v86,
                          (Il2CppObject *)v7,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0);
                        servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        }
                        if ( !Instance )
                          goto LABEL_97;
                        CommonUI__OpenConfirmDialog_31417724(
                          (CommonUI_o *)Instance,
                          v55,
                          v82,
                          v83,
                          v84,
                          v86,
                          (int32_t)servantListViewManager->fields.sort[2].fields.isPresentBoxFilterList,
                          HIDWORD(servantListViewManager->fields.sort[2].fields.isPresentBoxRarityFilterList),
                          15.0,
                          700,
                          0,
                          480,
                          -162.5,
                          0,
                          0,
                          240,
                          0,
                          0);
                        return;
                      }
LABEL_98:
                      sub_1C6BC68(servantListViewManager);
                    }
                  }
                }
              }
            }
          }
          v87 = sub_1C6BC84();
          sub_1C6BB30(v87, 0);
        }
        OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0);
        this->fields.state = 2;
        v30 = this->fields.servantListViewManager;
        v31 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v32 = (ServantListViewManager_CallbackFunc_o *)sub_1C6BC54(v31);
        ServantListViewManager_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0);
        if ( !v30 )
          goto LABEL_97;
        v30->fields.callbackFunc = v32;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v30->fields.callbackFunc, (int32_t)v32, v33, v34);
        ServantListViewManager__SetMode_35184364(v30, 2, v35);
        break;
      default:
        return;
    }
  }
}


void CharaGraphListMenu__Open(
        CharaGraphListMenu_o *this,
        int32_t kind,
        CharaGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t state; // w8
  const MethodInfo *v8; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v11; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_4CB229F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_EndOpen__);
    byte_4CB229F = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        sub_1C6BC60(0, v13);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v14);
      this->fields.state = 1;
      v15 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v15, 0);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v8);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v11);
  }
}


void CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t m_CachedPtr; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v17; // x0
  __int128 v18; // q1
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  Il2CppObject *Request_object; // x0
  __int128 v21; // q1
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w26
  int32_t v24; // w27
  int32_t v25; // w28
  int32_t v26; // w29
  bool IsLock; // w21
  char v28; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v32; // w0
  __int64 v33; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4CB22AF & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C6BA08(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB22AF = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  m_CachedPtr = v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C6BC60(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    context == (struct System_Threading_SynchronizationContext_o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_Thread_o *)v39,
    0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__SetTabKind(
        CharaGraphListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  bool v9; // w29
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v14; // w25
  LocalizationManager_c *v15; // x0
  float *static_fields; // x8
  float v17; // s10
  float v18; // s11
  float v19; // s8
  float v20; // s9
  struct LocalizationManager_StaticFields *v21; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v27; // x27
  EventUpValSetupInfo_o *v28; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v30; // x28
  Il2CppObject *v31; // x29
  Il2CppObject *v32; // x0
  float v33; // s3
  float v34; // s2
  float v35; // s1
  float v36; // s0 OVERLAPPED
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v38; // x28
  Il2CppObject *v39; // x29
  Il2CppObject *v40; // x0
  float v41; // s3
  float v42; // s2
  float v43; // s1
  float v44; // s0 OVERLAPPED
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v46; // x27
  Il2CppObject *v47; // x25
  BalanceConfig_c *v48; // x0
  Il2CppObject *v49; // x0
  __int64 *v50; // x8
  System_String_o **v51; // x8
  bool v52; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v55; // x8
  System_String_o **v56; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v58; // w0
  __int64 *v59; // x8
  System_String_o **v60; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v62; // w0
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x3
  struct ServantListViewManager_o *v65; // x8
  int32_t v66; // w1
  struct ServantListViewManager_o *servantListViewManager; // x8
  const MethodInfo *v68; // x3
  System_String_o **v69; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v71; // w0
  __int64 *v72; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v74; // w0
  __int64 *v75; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v77; // w0
  __int64 *v78; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v80; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v82; // x21
  UILabel_o *v83; // x21
  UILabel_o *v84; // x21
  CGThumbnailListItem_o *v85; // x22
  ServantListViewManager_CallbackFunc_o *v86; // x23
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  int32_t v89; // w1
  UISprite_o *scaleChangeTabSprite; // x19
  bool v91; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v93; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB22A1 & 1) == 0 )
  {
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&EventUpValSetupInfo_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_17573/*"btn_txt_craftessence_off"*/);
    sub_1C6BA08(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C6BA08(&StringLiteral_17613/*"btn_txt_servant_off"*/);
    sub_1C6BA08(&StringLiteral_17669/*"button_push_reg"*/);
    sub_1C6BA08(&StringLiteral_17670/*"button_push_unreg"*/);
    sub_1C6BA08(&StringLiteral_17569/*"btn_txt_cc_off"*/);
    sub_1C6BA08(&StringLiteral_17655/*"button_allchoice_reg"*/);
    sub_1C6BA08(&StringLiteral_17459/*"btn_bg_12"*/);
    sub_1C6BA08(&StringLiteral_17658/*"button_alllock_unreg"*/);
    sub_1C6BA08(&StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C6BA08(&StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_1C6BA08(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C6BA08(&StringLiteral_17570/*"btn_txt_cc_on"*/);
    sub_1C6BA08(&StringLiteral_17614/*"btn_txt_servant_on"*/);
    sub_1C6BA08(&StringLiteral_17664/*"button_infocheck_unreg"*/);
    sub_1C6BA08(&StringLiteral_17461/*"btn_bg_19"*/);
    sub_1C6BA08(&StringLiteral_3333/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C6BA08(&StringLiteral_17574/*"btn_txt_craftessence_on"*/);
    sub_1C6BA08(&StringLiteral_3334/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C6BA08(&StringLiteral_17663/*"button_infocheck_reg"*/);
    sub_1C6BA08(&StringLiteral_3335/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_1C6BA08(&StringLiteral_17657/*"button_alllock_reg"*/);
    sub_1C6BA08(&StringLiteral_17656/*"button_allchoice_unreg"*/);
    byte_4CB22A1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_150;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_150;
  v14 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CB0A46 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    byte_4CB0A46 = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v15->static_fields;
  v18 = static_fields[20];
  v17 = static_fields[21];
  v20 = static_fields[22];
  v19 = static_fields[23];
  if ( !byte_4CB0A47 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
    byte_4CB0A47 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = LocalizationManager_TypeInfo;
  }
  v21 = v15->static_fields;
  r = v21->selectEffectColor.fields.r;
  g = v21->selectEffectColor.fields.g;
  b = v21->selectEffectColor.fields.b;
  a = v21->selectEffectColor.fields.a;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  v91 = v9;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_150;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v27 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (EventUpValSetupInfo_o *)sub_1C6BC54(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41972564(v28, v27, 0, 0, 0, 0);
  servantTabLabel = this->fields.servantTabLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3334/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v93 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v93);
  if ( !SelfUserGame )
    goto LABEL_150;
  v31 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64008100(v30, v31, v32, 0);
  if ( !servantTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantTabLabel;
  v33 = v19;
  v34 = v20;
  v35 = v17;
  v36 = v18;
  if ( !tabKind )
  {
    v33 = a;
    v34 = b;
    v35 = g;
    v36 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v36, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3335/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v93 = servantEquipSum[0];
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64008100(v38, v39, v40, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v41 = v19;
  v42 = v20;
  v43 = v17;
  v44 = v18;
  if ( tabKind == 1 )
  {
    v41 = a;
    v42 = b;
    v43 = g;
    v44 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v44, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v93 = v14;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  if ( !byte_4CB05AC )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB05AC = 1;
  }
  v48 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  svtKeep = v48->static_fields->CommandCodeFrameMax;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64008100(v46, v47, v49, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_150;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v19 = a;
    v20 = b;
    v17 = g;
    v18 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  v95.fields.r = v18;
  v95.fields.g = v17;
  v95.fields.b = v20;
  v95.fields.a = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, v95, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v50 = &StringLiteral_17614/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v50 = &StringLiteral_17613/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v51 = (System_String_o **)(tabKind ? &StringLiteral_17459/*"btn_bg_12"*/ : &StringLiteral_17461/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v51, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  v52 = !v91 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v52,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_150;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v52, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v55 = &StringLiteral_17574/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v55 = &StringLiteral_17573/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v55, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v56 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17461/*"btn_bg_19"*/ : &StringLiteral_17459/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v56, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_150;
  v58 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v58, v52, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v59 = &StringLiteral_17570/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v59 = &StringLiteral_17569/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v59, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v60 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17461/*"btn_bg_19"*/ : &StringLiteral_17459/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v60, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_150;
  v62 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v62, v52, 0);
  if ( !v91 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_96;
  switch ( tabKind )
  {
    case 2:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v66 = 3;
      goto LABEL_93;
    case 1:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v66 = 1;
LABEL_93:
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v66, v28, v64);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_150;
      Instance = (__int64)servantListViewManager->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v91 || isInit, v68);
      if ( v91 || isInit )
        goto LABEL_97;
LABEL_96:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_142;
      goto LABEL_97;
    case 0:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v28, v64);
      v65 = this->fields.servantListViewManager;
      if ( !v65 )
        goto LABEL_150;
      Instance = (__int64)v65->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      Instance = (__int64)this->fields.pushTabSprite;
      if ( !Instance )
        goto LABEL_150;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
        Instance,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v52, 0);
      break;
  }
  if ( !v91 && !isInit )
    goto LABEL_96;
LABEL_97:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v69 = (System_String_o **)&StringLiteral_17663/*"button_infocheck_reg"*/;
  if ( modeKind )
    v69 = (System_String_o **)&StringLiteral_17664/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v69, 0);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_150;
  v71 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v71, v52, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v72 = &StringLiteral_17657/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v72 = &StringLiteral_17658/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v72, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_150;
  v74 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v74, v52, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v75 = &StringLiteral_17655/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v75 = &StringLiteral_17656/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v75, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_150;
  v77 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v77, v52, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v78 = &StringLiteral_17669/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v78 = &StringLiteral_17670/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v78, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v91 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_150;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v80, v52, 0);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0);
      if ( !explanationLabel )
        goto LABEL_150;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0);
      modeKind = 0;
      break;
    case 1:
      v82 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0);
      if ( !v82 )
        goto LABEL_150;
      UILabel__set_text(v82, (System_String_o *)Instance, 0);
      modeKind = 1;
      break;
    case 2:
      v83 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0);
      if ( !v83 )
        goto LABEL_150;
      UILabel__set_text(v83, (System_String_o *)Instance, 0);
      modeKind = 2;
      break;
    case 3:
      v84 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0);
      if ( !v84 )
        goto LABEL_150;
      UILabel__set_text(v84, (System_String_o *)Instance, 0);
      modeKind = 3;
      break;
    default:
      break;
  }
LABEL_142:
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_150;
  if ( this->fields.state == 2 )
  {
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, v63);
    v85 = (CGThumbnailListItem_o *)this->fields.servantListViewManager;
    v86 = (ServantListViewManager_CallbackFunc_o *)sub_1C6BC54(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v86,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0);
    if ( !v85 )
      goto LABEL_150;
    v85[3].klass = (CGThumbnailListItem_c *)v86;
    sub_1C6B9AC(v85 + 3, (int32_t)v86, v87, v88);
    v89 = 2;
    Instance = (__int64)v85;
  }
  else
  {
    v89 = 1;
  }
  ServantListViewManager__SetMode_35184364((ServantListViewManager_o *)Instance, v89, v63);
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, v12),
        !scaleChangeTabSprite) )
  {
LABEL_150:
    sub_1C6BC60(Instance, v12);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
}


void CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w3
  bool v15; // w4
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // x1
  System_Int64_array *v21; // x2
  bool v22; // w4
  bool v23; // w5
  System_Int64_array *v24; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CB22A9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C6BA08(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB22A9 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v24 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v24, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v16, v17);
      tabKind = this->fields.tabKind;
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v19,
                                                               (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v13 = v24;
          v12 = choiceList;
          v15 = 1;
          v14 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1C6BC60(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v19,
                                                             (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v21 = v24;
      v20 = choiceList;
      v23 = 1;
      v22 = 0;
      goto LABEL_26;
    }
  }
  else if ( modeKind == 1 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = this->fields.tabKind;
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v10 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v11,
                                                               (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v13 = unlockList;
          v12 = lockList;
          v14 = 1;
          v15 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v12,
            v13,
            v14,
            v15,
            0);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v11,
                                                             (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v21 = unlockList;
      v20 = lockList;
      v22 = 1;
      v23 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v20, v21, 0, v22, v23, 0);
      return;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void CharaGraphListMenu__add_callbackFunc(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CharaGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListMenu_o *v10; // x0
  CharaGraphListMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB229D & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4CB229D = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v7->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C6BFFC(v7);
  CharaGraphListMenu__remove_callbackFunc(v10, v11, v12);
}


void CharaGraphListMenu__remove_callbackFunc(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CharaGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB229E & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4CB229E = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v7->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C6BFFC(v7);
  CharaGraphListMenu__Init(v10, v11);
}


void CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9CDFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9CDB4;
}


System_IAsyncResult_o *CharaGraphListMenu_CallbackFunc__BeginInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CB22B2 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_4CB22B2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void CharaGraphListMenu_CallbackFunc__Invoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void CharaGraphListMenu_RequestCallbackFunc___ctor(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9CE60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9CE18;
}


System_IAsyncResult_o *CharaGraphListMenu_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4CB22B3 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB22B3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void CharaGraphListMenu_RequestCallbackFunc__Invoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void CharaGraphListMenu___c__DisplayClass69_0___ctor(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__0(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CharaGraphListMenu_o *_4__this; // x20
  struct ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4CB22B4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_4CB22B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31417952(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C6BC60(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v13 = (ServantListViewManager_CallbackFunc_o *)sub_1C6BC54(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v13, v14, v15);
  ServantListViewManager__SetMode_35184364(servantListViewManager, 2, v16);
}


void CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}