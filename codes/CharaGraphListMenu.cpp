void CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59344C3 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_59344C3 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__Callback(CharaGraphListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      *(System_String_o **)&n,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


void CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_41699660(this, 0, v2);
}


void CharaGraphListMenu__Close_41699660(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x4
  System_Action_o *v13; // x20

  if ( (byte_59344B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_EndClose__);
    byte_59344B2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v12);
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0);
}


void CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  struct ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_59344C2 & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_59344C2 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, method),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_21FFEBC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_21FFECC(servantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  ServantListViewManager__SetMode_41703176(v5, 2, v13);
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
      sub_21FFECC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v6);
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
      sub_21FFECC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v6);
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
      sub_21FFECC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v6);
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
      sub_21FFECC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v6);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_59344BF & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_59344BF = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, v2),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_21FFEBC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_21FFECC(servantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  ServantListViewManager__SetMode_41703176(v5, 2, v13);
}


void CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_59344BD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_21FFC50(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344BD = 1;
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
      sub_21FFECC(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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

  if ( (byte_59344BE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344BE = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_9:
      sub_21FFECC(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_41703176(servantListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
}


void CharaGraphListMenu__EndStatusSync(CharaGraphListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    this->fields.requedstCallback = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    sub_21FFECC(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_21FFECC(0, method);
  ListViewManager__DestroyList(servantListViewManager, 0);
  ServantListViewManager__SaveSortInfo(v4, v5);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        0,
        callbackFunc->fields.method);
    }
  }
}


void CharaGraphListMenu__OnClickDecide(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      this->fields.callbackFunc = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_59344C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_59344C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
      sub_21FFECC(servantListViewManager, v5);
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

  if ( (byte_59344B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_59344B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    this = (CharaGraphListMenu_o *)sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B6 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_21FFECC(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 2, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_59344B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_59344BA & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_59344B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabServant__);
    this = (CharaGraphListMenu_o *)sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B4 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_21FFECC(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 0, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_59344B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    this = (CharaGraphListMenu_o *)sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B5 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_21FFECC(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(v2, 0, v5);
    }
    else
    {
      v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_59344B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_21FFC50(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_59344B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_21FFEBC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 v7; // x20
  __int64 servantListViewManager; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  MethodInfo *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  int32_t modeKind; // w8
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  struct ServantListViewManager_o *v33; // x20
  ServantListViewManager_CallbackFunc_c *v34; // x0
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  const MethodInfo *v38; // x2
  int64_t v39; // x22
  struct UserServantEntity_o *userSvtEntity; // x8
  __int128 v41; // q1
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  int32_t tabKind; // w22
  ServantListViewItem_o *v45; // x8
  CommonUI_o *v46; // x20
  UserCommandCodeEntity_o *userCommandCodeEntity; // x21
  ServantStatusDialog_EndDelegate_o *v48; // x22
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  ServantListViewManager_CallbackFunc_o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  const MethodInfo *v58; // x2
  System_Reflection_MethodBase_o *v59; // x0
  UserServantEntity_o *v60; // x21
  ServantStatusDialog_EndDelegate_o *v61; // x22
  UserServantEntity_o *v62; // x21
  ServantStatusDialog_ResultDelegate_o *v63; // x22
  __int64 v64; // x25
  __int64 v65; // x1
  __int64 v66; // x2
  ServantEntity_o *ServantEntity; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v69; // x8
  int32_t v70; // w28
  __int64 v71; // x2
  int32_t v72; // w26
  System_String_o *v73; // x19
  System_String_o *v74; // x23
  __int64 v75; // x1
  __int64 v76; // x2
  System_Object_array *v77; // x24
  __int64 v78; // x28
  System_String_o *ClassName; // x28
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x27
  __int64 v83; // x28
  int32_t v84; // w0
  __int64 v85; // x8
  int32_t v86; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v89; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v90; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v91; // x8
  int32_t v92; // w21
  int32_t v93; // w0
  System_String_o *v94; // x21
  System_String_o *v95; // x21
  System_String_o *v96; // x22
  System_String_o *v97; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v99; // x25
  __int64 v100; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_59344BC & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_21FFC50(&Method_CharaGraphListMenu_EndShowServant__);
    sub_21FFC50(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Rarity_TypeInfo);
    sub_21FFC50(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_21FFC50(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_59344BC = 1;
  }
  v7 = sub_21FFEBC(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_85;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state == 2 )
  {
    this->fields.selectNum = n;
    this->fields.state = 3;
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_85;
      Item = ServantListViewManager__GetItem((ServantListViewManager_o *)servantListViewManager, n, v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (ServantListViewItem_o **)(v7 + 24);
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v7 + 24),
      (int32_t)Item,
      (System_String_o *)v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( kind == 1 )
    {
      modeKind = this->fields.modeKind;
      if ( modeKind > 1 )
      {
        if ( modeKind == 2 )
        {
          v49 = Method_CharaGraphListMenu_OnSelectServant__;
          if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
            v49 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnSelectServant__);
          v50 = (System_Reflection_MethodBase_o *)sub_21FFC34(v49, v49[4]);
          OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0);
          if ( !*v23 )
            goto LABEL_85;
          v33 = this->fields.servantListViewManager;
          v34 = ServantListViewManager_CallbackFunc_TypeInfo;
          (*v23)->fields.isSwapChoice ^= 1u;
          goto LABEL_44;
        }
        if ( modeKind == 3 )
        {
          if ( !*v23 )
            goto LABEL_85;
          v36 = Method_CharaGraphListMenu_OnSelectServant__;
          if ( !(*v23)->fields.isEnabled )
          {
            if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
              v36 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnSelectServant__);
            v59 = (System_Reflection_MethodBase_o *)sub_21FFC34(v36, v36[4]);
            OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0, 0);
            v33 = this->fields.servantListViewManager;
            this->fields.state = 2;
            v34 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_45:
            v51 = (ServantListViewManager_CallbackFunc_o *)sub_21FFEBC(v34);
            ServantListViewManager_CallbackFunc___ctor(
              v51,
              (Il2CppObject *)this,
              (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
              0);
            if ( v33 )
            {
              v33->fields.callbackFunc = v51;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v33->fields.callbackFunc,
                (int32_t)v51,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57);
              ServantListViewManager__SetMode_41703176(v33, 2, v58);
              return;
            }
            goto LABEL_85;
          }
          if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
            v36 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnSelectServant__);
          v37 = (System_Reflection_MethodBase_o *)sub_21FFC34(v36, v36[4]);
          OverwriteAssetSoundName__PlaySystemSe(v37, 0, 0, 0);
          servantListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
          if ( !servantListViewManager )
            goto LABEL_85;
          v39 = *(_QWORD *)(servantListViewManager + 128);
          if ( !v39 )
            goto LABEL_32;
          if ( !*v23 )
            goto LABEL_85;
          userSvtEntity = (*v23)->fields.userSvtEntity;
          if ( !userSvtEntity )
            goto LABEL_85;
          v41 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
          *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v102.fields.fakeValue = v41;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v38);
          v101 = v102;
          if ( v39 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v101, 0) )
          {
LABEL_32:
            CharaGraphListMenu__PushRequest(this, *v23, v38);
            return;
          }
          servantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_85;
          servantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_85;
          servantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                                              v39,
                                              (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !servantListViewManager )
            goto LABEL_85;
          v64 = servantListViewManager;
          ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)servantListViewManager, -1, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65, v66);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          servantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v64, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_85;
          if ( !*v23 )
            goto LABEL_85;
          v69 = (*v23)->fields.userSvtEntity;
          if ( !v69 )
            goto LABEL_85;
          v70 = *(_DWORD *)(servantListViewManager + 24);
          servantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v69, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_85;
          v72 = *(_DWORD *)(servantListViewManager + 24);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v71);
          v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v77 = (System_Object_array *)sub_21FFD10(object___TypeInfo, 6);
          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v75, v76);
          servantListViewManager = (__int64)Rarity__getRarityType(v70, 0);
          if ( !v77 )
            goto LABEL_85;
          v78 = servantListViewManager;
          sub_1FEB8A8(v77, servantListViewManager);
          servantListViewManager = sub_1FEB274(v77, 0, v78);
          if ( !ServantEntity )
            goto LABEL_85;
          ClassName = ServantEntity__getClassName(ServantEntity, 0);
          sub_1FEB8A8(v77, ClassName);
          sub_1FEB274(v77, 1, ClassName);
          v83 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
          v82 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v80, v81);
          *(_QWORD *)&v103.fields.currentCryptoKey = v83;
          *(_QWORD *)&v103.fields.fakeValue = v82;
          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v103, 0);
          v85 = *(_QWORD *)(v64 + 96);
          *(_QWORD *)&v104.fields.fakeValue = *(_QWORD *)(v64 + 104);
          v86 = v84;
          *(_QWORD *)&v104.fields.currentCryptoKey = v85;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v104, 0);
          if ( !Master_object )
            goto LABEL_85;
          LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v86,
                                          servantListViewManager,
                                          1,
                                          1,
                                          0);
          sub_1FEB8A8(v77, LimitCountSealedServantName);
          sub_1FEB274(v77, 2, LimitCountSealedServantName);
          RarityType = Rarity__getRarityType(v72, 0);
          sub_1FEB8A8(v77, RarityType);
          servantListViewManager = sub_1FEB274(v77, 3, RarityType);
          if ( !*v23 )
            goto LABEL_85;
          servantListViewManager = (__int64)(*v23)->fields.servantEntity;
          if ( !servantListViewManager )
            goto LABEL_85;
          v89 = ServantEntity__getClassName((ServantEntity_o *)servantListViewManager, 0);
          sub_1FEB8A8(v77, v89);
          servantListViewManager = sub_1FEB274(v77, 4, v89);
          if ( !*v23 )
            goto LABEL_85;
          v90 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
          if ( !v90 )
            goto LABEL_85;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v90[1], 0);
          if ( !*v23 )
            goto LABEL_85;
          v91 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
          if ( !v91 )
            goto LABEL_85;
          v92 = servantListViewManager;
          v93 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v91[6], 0);
          v94 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                  (ServantLimitImageMaster_o *)Master_object,
                  v92,
                  v93,
                  1,
                  1,
                  0);
          sub_1FEB8A8(v77, v94);
          sub_1FEB274(v77, 5, v94);
          v95 = System_String__Format_75484712(v74, v77, 0);
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12437/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v99 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v99,
            (Il2CppObject *)v7,
            Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
            0);
          servantListViewManager = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v100);
          if ( !Instance )
LABEL_85:
            sub_21FFECC(servantListViewManager, v9);
          CommonUI__OpenConfirmDialog_37292168(
            (CommonUI_o *)Instance,
            v73,
            v95,
            v96,
            v97,
            v99,
            BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
            BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
        }
      }
      else if ( modeKind )
      {
        if ( modeKind == 1 )
        {
          v31 = Method_CharaGraphListMenu_OnSelectServant__;
          if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
            v31 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnSelectServant__);
          v32 = (System_Reflection_MethodBase_o *)sub_21FFC34(v31, v31[4]);
          OverwriteAssetSoundName__PlaySystemSe(v32, 11, 0, 0);
          if ( !*v23 )
            goto LABEL_85;
          v33 = this->fields.servantListViewManager;
          v34 = ServantListViewManager_CallbackFunc_TypeInfo;
          (*v23)->fields.isSwapLock ^= 1u;
LABEL_44:
          this->fields.state = 2;
          goto LABEL_45;
        }
      }
      else
      {
        v42 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_21FFC68(Method_CharaGraphListMenu_OnSelectServant__);
        v43 = (System_Reflection_MethodBase_o *)sub_21FFC34(v42, v42[4]);
        OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0);
        tabKind = this->fields.tabKind;
        this->fields.state = 6;
        servantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v45 = *v23;
        v46 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 1 )
        {
          if ( !v45 )
            goto LABEL_85;
          v60 = v45->fields.userSvtEntity;
          v61 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v61,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0);
          if ( !v46 )
            goto LABEL_85;
          CommonUI__OpenServantStatusDialog_37302172(v46, 0, v60, v61, 0);
        }
        else
        {
          if ( tabKind == 2 )
          {
            if ( v45 )
            {
              userCommandCodeEntity = v45->fields.userCommandCodeEntity;
              v48 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v48,
                (Il2CppObject *)this,
                Method_CharaGraphListMenu_EndShowServantEquip__,
                0);
              if ( v46 )
              {
                CommonUI__OpenServantStatusDialog_37304416(v46, 0, userCommandCodeEntity, v48, 0, 0);
                return;
              }
            }
            goto LABEL_85;
          }
          if ( !v45 )
            goto LABEL_85;
          v62 = v45->fields.userSvtEntity;
          v63 = (ServantStatusDialog_ResultDelegate_o *)sub_21FFEBC(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v63,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0);
          if ( !v46 )
            goto LABEL_85;
          CommonUI__OpenServantStatusDialog_37302652(v46, 0, v62, v63, 0, 0, 0);
        }
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v24, v25, v26, v27, v28, v29);
        ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          0,
          callbackFunc->fields.method);
      }
    }
  }
}


void CharaGraphListMenu__Open(
        CharaGraphListMenu_o *this,
        int32_t kind,
        CharaGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  const MethodInfo *v12; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v15; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_59344B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_EndOpen__);
    byte_59344B1 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)callback,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        sub_21FFECC(0, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v18);
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v19, 0);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v12);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v15);
  }
}


void CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_59344C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_21FFC50(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59344C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_21FFECC(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userSvtEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__SetTabKind(
        CharaGraphListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL4 isInitTab; // w8
  bool v10; // w29
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v15; // w25
  __int64 v16; // x1
  __int64 v17; // x2
  LocalizationManager_c *v18; // x0
  float *static_fields; // x8
  float v20; // s10
  float v21; // s11
  float v22; // s8
  float v23; // s9
  struct LocalizationManager_StaticFields *v24; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v30; // x27
  EventUpValSetupInfo_o *v31; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v33; // x28
  Il2CppObject *v34; // x29
  Il2CppObject *v35; // x0
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0 OVERLAPPED
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v43; // x28
  Il2CppObject *v44; // x29
  Il2CppObject *v45; // x0
  float v46; // s3
  float v47; // s2
  float v48; // s1
  float v49; // s0 OVERLAPPED
  __int64 v50; // x1
  __int64 v51; // x2
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v53; // x27
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *v56; // x25
  BalanceConfig_c *v57; // x0
  Il2CppObject *v58; // x0
  __int64 *v59; // x8
  System_String_o **v60; // x8
  bool v61; // w26
  bool v62; // w25
  UICommonButton_o *servantTabButton; // x23
  bool enabled; // w0
  __int64 *v65; // x8
  System_String_o **v66; // x8
  UICommonButton_o *servantEquipTabButton; // x23
  bool v68; // w0
  __int64 *v69; // x8
  System_String_o **v70; // x8
  UICommonButton_o *commandCodeTabButton; // x23
  bool v72; // w0
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x3
  struct ServantListViewManager_o *v75; // x8
  int32_t v76; // w1
  struct ServantListViewManager_o *servantListViewManager; // x8
  const MethodInfo *v78; // x3
  System_String_o **v79; // x8
  UICommonButton_o *statusTabButton; // x23
  bool v81; // w0
  __int64 *v82; // x8
  UICommonButton_o *lockTabButton; // x23
  bool v84; // w0
  __int64 *v85; // x8
  UICommonButton_o *choiceTabButton; // x23
  bool v87; // w0
  __int64 *v88; // x8
  UICommonButton_o *pushTabButton; // x23
  bool v90; // w0
  UILabel_o *v91; // x21
  UILabel_o *v92; // x21
  UILabel_o *v93; // x21
  UILabel_o *explanationLabel; // x21
  struct ServantListViewManager_o *v95; // x22
  ServantListViewManager_CallbackFunc_o *v96; // x23
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  int32_t v103; // w1
  UISprite_o *scaleChangeTabSprite; // x19
  bool v105; // [xsp+8h] [xbp-B8h]
  bool v106; // [xsp+Ch] [xbp-B4h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v108; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59344B3 & 1) == 0 )
  {
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&EventUpValSetupInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18292/*"btn_txt_craftessence_off"*/);
    sub_21FFC50(&StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_21FFC50(&StringLiteral_18333/*"btn_txt_servant_off"*/);
    sub_21FFC50(&StringLiteral_18393/*"button_push_reg"*/);
    sub_21FFC50(&StringLiteral_18394/*"button_push_unreg"*/);
    sub_21FFC50(&StringLiteral_18288/*"btn_txt_cc_off"*/);
    sub_21FFC50(&StringLiteral_18379/*"button_allchoice_reg"*/);
    sub_21FFC50(&StringLiteral_18168/*"btn_bg_12"*/);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_21FFC50(&StringLiteral_12144/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_21FFC50(&StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_21FFC50(&StringLiteral_18289/*"btn_txt_cc_on"*/);
    sub_21FFC50(&StringLiteral_18334/*"btn_txt_servant_on"*/);
    sub_21FFC50(&StringLiteral_18388/*"button_infocheck_unreg"*/);
    sub_21FFC50(&StringLiteral_18170/*"btn_bg_19"*/);
    sub_21FFC50(&StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_21FFC50(&StringLiteral_18293/*"btn_txt_craftessence_on"*/);
    sub_21FFC50(&StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_21FFC50(&StringLiteral_18387/*"button_infocheck_reg"*/);
    sub_21FFC50(&StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    sub_21FFC50(&StringLiteral_18380/*"button_allchoice_unreg"*/);
    byte_59344B3 = 1;
  }
  isInitTab = this->fields.isInitTab;
  *(_QWORD *)servantEquipSum = 0;
  v10 = !isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_155;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_155;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_155;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_155;
  v15 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  v18 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    v18 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v18->static_fields;
  v21 = static_fields[20];
  v20 = static_fields[21];
  v23 = static_fields[22];
  v22 = static_fields[23];
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    v18 = LocalizationManager_TypeInfo;
    byte_5932AD4 = 1;
  }
  if ( !*(&v18->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v18, v16, v17);
    v18 = LocalizationManager_TypeInfo;
  }
  v24 = v18->static_fields;
  r = v24->selectEffectColor.fields.r;
  g = v24->selectEffectColor.fields.g;
  b = v24->selectEffectColor.fields.b;
  a = v24->selectEffectColor.fields.a;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_155;
  v105 = v10;
  v106 = isInit;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_155;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v30 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  v31 = (EventUpValSetupInfo_o *)sub_21FFEBC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48687632(v31, v30, 0, 0, 0, 0);
  servantTabLabel = this->fields.servantTabLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v108 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(qword_594C070, &v108);
  if ( !SelfUserGame )
    goto LABEL_155;
  v34 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  Instance = (__int64)System_String__Format_75484576(v33, v34, v35, 0);
  if ( !servantTabLabel )
    goto LABEL_155;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  v36 = v22;
  v37 = v23;
  Instance = (__int64)this->fields.servantTabLabel;
  v38 = v20;
  v39 = v21;
  if ( !tabKind )
  {
    v36 = a;
    v37 = b;
    v38 = g;
    v39 = r;
  }
  if ( !Instance )
    goto LABEL_155;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v39, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v108 = servantEquipSum[0];
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v108);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  Instance = (__int64)System_String__Format_75484576(v43, v44, v45, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_155;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  v46 = v22;
  v47 = v23;
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v48 = v20;
  v49 = v21;
  if ( tabKind == 1 )
  {
    v46 = a;
    v47 = b;
    v48 = g;
    v49 = r;
  }
  if ( !Instance )
    goto LABEL_155;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v49, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v108 = v15;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v108);
  if ( !byte_59324C8 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59324C8 = 1;
  }
  v57 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54, v55);
    v57 = BalanceConfig_TypeInfo;
  }
  svtKeep = v57->static_fields->CommandCodeFrameMax;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &svtKeep);
  Instance = (__int64)System_String__Format_75484576(v53, v56, v58, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_155;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v22 = a;
    v23 = b;
    v20 = g;
    v21 = r;
  }
  if ( !Instance )
    goto LABEL_155;
  v110.fields.r = v21;
  v110.fields.g = v20;
  v110.fields.b = v23;
  v110.fields.a = v22;
  UILabel__set_effectColor((UILabel_o *)Instance, v110, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_155;
  v59 = &StringLiteral_18334/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v59 = &StringLiteral_18333/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v59, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v60 = (System_String_o **)(tabKind ? &StringLiteral_18168/*"btn_bg_12"*/ : &StringLiteral_18170/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v60, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_155;
  v61 = v105 || isInit;
  v62 = !v105 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v62,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_155;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v62, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_155;
  v65 = &StringLiteral_18292/*"btn_txt_craftessence_off"*/;
  if ( tabKind == 1 )
    v65 = &StringLiteral_18293/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v65, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v66 = (System_String_o **)(tabKind == 1 ? &StringLiteral_18170/*"btn_bg_19"*/ : &StringLiteral_18168/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v66, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_155;
  v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v68, v62, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_155;
  v69 = &StringLiteral_18288/*"btn_txt_cc_off"*/;
  if ( tabKind == 2 )
    v69 = &StringLiteral_18289/*"btn_txt_cc_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v69, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v70 = (System_String_o **)(tabKind == 2 ? &StringLiteral_18170/*"btn_bg_19"*/ : &StringLiteral_18168/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v70, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_155;
  v72 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v72, v62, 0);
  if ( !v105 && !v106 && this->fields.tabKind == tabKind )
    goto LABEL_96;
  switch ( tabKind )
  {
    case 2:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_155;
      v76 = 3;
LABEL_93:
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v76, v31, v74);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_155;
      Instance = (__int64)servantListViewManager->fields.filterButton;
      if ( !Instance )
        goto LABEL_155;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v61, v78);
      if ( v105 || v106 )
        goto LABEL_97;
LABEL_96:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_146;
      goto LABEL_97;
    case 1:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_155;
      v76 = 1;
      goto LABEL_93;
    case 0:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_155;
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v31, v74);
      v75 = this->fields.servantListViewManager;
      if ( !v75 )
        goto LABEL_155;
      Instance = (__int64)v75->fields.filterButton;
      if ( !Instance )
        goto LABEL_155;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      Instance = (__int64)this->fields.pushTabSprite;
      if ( !Instance )
        goto LABEL_155;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_155;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_155;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
        Instance,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_155;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_155;
      UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v62, 0);
      break;
  }
  if ( !v105 && !v106 )
    goto LABEL_96;
LABEL_97:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v79 = (System_String_o **)&StringLiteral_18387/*"button_infocheck_reg"*/;
  if ( modeKind )
    v79 = (System_String_o **)&StringLiteral_18388/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v79, 0);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_155;
  v81 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v81, v62, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v82 = &StringLiteral_18382/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v82 = &StringLiteral_18381/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v82, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_155;
  v84 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v84, v62, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v85 = &StringLiteral_18380/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v85 = &StringLiteral_18379/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v85, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_155;
  v87 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v87, v62, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_155;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_155;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_155;
  v88 = &StringLiteral_18394/*"button_push_unreg"*/;
  if ( modeKind == 3 )
    v88 = &StringLiteral_18393/*"button_push_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v88, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_155;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v105 && !v106,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_155;
  v90 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v90, v62, 0);
  if ( modeKind > 1 )
  {
    if ( modeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v73);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12141/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0);
      if ( !explanationLabel )
        goto LABEL_155;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0);
      modeKind = 2;
    }
    else if ( modeKind == 3 )
    {
      v92 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v73);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0);
      if ( !v92 )
        goto LABEL_155;
      UILabel__set_text(v92, (System_String_o *)Instance, 0);
      modeKind = 3;
    }
  }
  else if ( modeKind )
  {
    if ( modeKind == 1 )
    {
      v91 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v73);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12142/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0);
      if ( !v91 )
        goto LABEL_155;
      UILabel__set_text(v91, (System_String_o *)Instance, 0);
      modeKind = 1;
    }
  }
  else
  {
    v93 = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v73);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0);
    if ( !v93 )
      goto LABEL_155;
    UILabel__set_text(v93, (System_String_o *)Instance, 0);
    modeKind = 0;
  }
LABEL_146:
  Instance = (__int64)this->fields.servantListViewManager;
  if ( this->fields.state == 2 )
  {
    if ( Instance )
    {
      ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, v73);
      v95 = this->fields.servantListViewManager;
      v96 = (ServantListViewManager_CallbackFunc_o *)sub_21FFEBC(ServantListViewManager_CallbackFunc_TypeInfo);
      ServantListViewManager_CallbackFunc___ctor(
        v96,
        (Il2CppObject *)this,
        (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
        0);
      if ( v95 )
      {
        v95->fields.callbackFunc = v96;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v95->fields.callbackFunc,
          (int32_t)v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        Instance = (__int64)v95;
        v103 = 2;
        goto LABEL_152;
      }
    }
LABEL_155:
    sub_21FFECC(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_155;
  v103 = 1;
LABEL_152:
  ServantListViewManager__SetMode_41703176((ServantListViewManager_o *)Instance, v103, v73);
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.tabKind = tabKind;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( !Instance )
    goto LABEL_155;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, v13);
  if ( !scaleChangeTabSprite )
    goto LABEL_155;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // w21
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w8
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w3
  bool v22; // w4
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  int v33; // w8
  System_Int64_array *v34; // x1
  System_Int64_array *v35; // x2
  bool v36; // w4
  bool v37; // w5
  System_Int64_array *v38; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_59344BB & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_21FFC50(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_21FFC50(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59344BB = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v38 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_32;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v38, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      tabKind = this->fields.tabKind;
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v30, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      v33 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
      if ( tabKind == 2 )
      {
        if ( !v33 )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31, v32);
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v30,
                                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v20 = v38;
          v19 = choiceList;
          v21 = 0;
          v22 = 1;
          goto LABEL_19;
        }
LABEL_32:
        sub_21FFECC(servantListViewManager, callback);
      }
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31, v32);
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v30,
                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_32;
      v35 = v38;
      v34 = choiceList;
      v36 = 0;
      v37 = 1;
      goto LABEL_30;
    }
  }
  else if ( modeKind == 1 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_32;
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = this->fields.tabKind;
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      v18 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
      if ( v14 == 2 )
      {
        if ( !v18 )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v15,
                                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v20 = unlockList;
          v19 = lockList;
          v21 = 1;
          v22 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v19,
            v20,
            v21,
            v22,
            0);
          return;
        }
        goto LABEL_32;
      }
      if ( !v18 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v15,
                                                             (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_32;
      v35 = unlockList;
      v34 = lockList;
      v36 = 1;
      v37 = 0;
LABEL_30:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v34, v35, 0, v36, v37, 0);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenu_o *v11; // x0
  CharaGraphListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59344AF & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_59344AF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v6->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_220024C(v6, CharaGraphListMenu_CallbackFunc_TypeInfo, v7, v8);
  CharaGraphListMenu__remove_callbackFunc(v11, v12, v13);
}


void CharaGraphListMenu__remove_callbackFunc(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59344B0 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_59344B0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v6->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_220024C(v6, CharaGraphListMenu_CallbackFunc_TypeInfo, v7, v8);
  CharaGraphListMenu__Init(v11, v12);
}


void CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2928;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF28E0;
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
  if ( (byte_59344C4 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_59344C4 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF298C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF2944;
}


System_IAsyncResult_o *CharaGraphListMenu_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct CharaGraphListMenu_o *_4__this; // x20
  struct ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x2

  if ( (byte_59344C5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_59344C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37292452(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  servantListViewManager = _4__this->fields.servantListViewManager;
  _4__this->fields.state = 2;
  v17 = (ServantListViewManager_CallbackFunc_o *)sub_21FFEBC(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ServantListViewManager__SetMode_41703176(servantListViewManager, 2, v24);
}


void CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}