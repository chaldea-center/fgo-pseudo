void CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C5F2 & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596C5F2 = 1;
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
    sub_2213A04(
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

  CharaGraphListMenu__Close_41714552(this, 0, v2);
}


void CharaGraphListMenu__Close_41714552(
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

  if ( (byte_596C5E1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_EndClose__);
    byte_596C5E1 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
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
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0);
}


void CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_596C5F1 & 1) == 0 )
  {
    sub_2213A60(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_596C5F1 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_2213CCC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_2213CDC(servantListViewManager, result);
  }
  ServantListViewManager__SetMode(v5, 2, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabChoice(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_2213CDC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
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

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_2213CDC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndClickTabPush(CharaGraphListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_2213CDC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
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

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
      sub_2213CDC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v4; // x20
  ServantListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_596C5EE & 1) == 0 )
  {
    sub_2213A60(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_596C5EE = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0),
        v4 = this->fields.servantListViewManager,
        v5 = (ServantListViewManager_CallbackFunc_o *)sub_2213CCC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v4) )
  {
    sub_2213CDC(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v4, 2, v5, 0);
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x0
  bool v12; // cc
  System_Action_o *v13; // x20
  intptr_t *v14; // x8

  if ( (byte_596C5EC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_2213A60(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C5EC = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_15;
    ServantListViewManager__ModifyList(servantListViewManager, 0, 0);
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
      sub_2213CDC(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v14 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)this, *v14, 0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenu__EndShowServantEquip(CharaGraphListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_596C5ED & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C5ED = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_9:
      sub_2213CDC(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_41746280(servantListViewManager, 3, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
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
    sub_2213A04(
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
    sub_2213CDC(pushTabSprite, *(_QWORD *)&modeKind);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)pushTabSprite, 0, !isInit, 0);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void CharaGraphListMenu__Init(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_2213CDC(0, method);
  ServantListViewManager__DestroyList(servantListViewManager, 0);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_596C5EF & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_596C5EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ChangeIconScale(servantListViewManager, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantListViewManager = (ServantListViewManager_o *)ServantListViewManager__GetScaleButtonSpriteName(
                                                                 servantListViewManager,
                                                                 0),
          !scaleChangeTabSprite) )
    {
      sub_2213CDC(servantListViewManager, v5);
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

  if ( (byte_596C5E8 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_596C5E5 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_2213CDC(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v9);
      CharaGraphListMenu__StatusRequest(this, v8, v10);
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

  if ( (byte_596C5E7 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596C5E9 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_596C5E3 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabServant__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_2213CDC(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v9);
      CharaGraphListMenu__StatusRequest(this, v8, v10);
    }
  }
}


void CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_596C5E4 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_2213CDC(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v6);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v8);
      CharaGraphListMenu__StatusRequest(this, v7, v9);
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

  if ( (byte_596C5E6 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_2213A60(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_2213A60(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_596C5E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  System_String_o *v16; // x2
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
  ServantListViewManager_o *v33; // x20
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
  System_Reflection_MethodBase_o *v52; // x0
  UserServantEntity_o *v53; // x21
  ServantStatusDialog_EndDelegate_o *v54; // x22
  UserServantEntity_o *v55; // x21
  ServantStatusDialog_ResultDelegate_o *v56; // x22
  __int64 v57; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  ServantEntity_o *ServantEntity; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v62; // x8
  int32_t v63; // w28
  __int64 v64; // x2
  int32_t v65; // w26
  System_String_o *v66; // x19
  System_String_o *v67; // x23
  __int64 v68; // x1
  __int64 v69; // x2
  System_Object_array *v70; // x24
  __int64 v71; // x28
  System_String_o *ClassName; // x28
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x27
  __int64 v76; // x28
  int32_t v77; // w0
  __int64 v78; // x8
  int32_t v79; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v82; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v84; // x8
  int32_t v85; // w21
  int32_t v86; // w0
  System_String_o *v87; // x21
  System_String_o *v88; // x21
  System_String_o *v89; // x22
  System_String_o *v90; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v92; // x25
  __int64 v93; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v95; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v96; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_596C5EB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_2213A60(&Method_CharaGraphListMenu_EndShowServant__);
    sub_2213A60(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_2213A60(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596C5EB = 1;
  }
  v7 = sub_2213CCC(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_85;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
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
      Item = ServantListViewManager__GetItem((ServantListViewManager_o *)servantListViewManager, n, 0);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (ServantListViewItem_o **)(v7 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
    if ( kind == 1 )
    {
      modeKind = this->fields.modeKind;
      if ( modeKind > 1 )
      {
        if ( modeKind == 2 )
        {
          v49 = Method_CharaGraphListMenu_OnSelectServant__;
          if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
            v49 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnSelectServant__);
          v50 = (System_Reflection_MethodBase_o *)sub_2213A44(v49, v49[4]);
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
              v36 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnSelectServant__);
            v52 = (System_Reflection_MethodBase_o *)sub_2213A44(v36, v36[4]);
            OverwriteAssetSoundName__PlaySystemSe(v52, 2, 0, 0);
            v33 = this->fields.servantListViewManager;
            this->fields.state = 2;
            v34 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_45:
            v51 = (ServantListViewManager_CallbackFunc_o *)sub_2213CCC(v34);
            ServantListViewManager_CallbackFunc___ctor(
              v51,
              (Il2CppObject *)this,
              (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
              0);
            if ( v33 )
            {
              ServantListViewManager__SetMode(v33, 2, v51, 0);
              return;
            }
            goto LABEL_85;
          }
          if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
            v36 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnSelectServant__);
          v37 = (System_Reflection_MethodBase_o *)sub_2213A44(v36, v36[4]);
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
          *(_OWORD *)&v95.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v95.fields.fakeValue = v41;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v38);
          v94 = v95;
          if ( v39 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v94, 0) )
          {
LABEL_32:
            CharaGraphListMenu__PushRequest(this, *v23, v38);
            return;
          }
          servantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_85;
          servantListViewManager = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_85;
          servantListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                                              v39,
                                              (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( !servantListViewManager )
            goto LABEL_85;
          v57 = servantListViewManager;
          ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)servantListViewManager, -1, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58, v59);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          servantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v57, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_85;
          if ( !*v23 )
            goto LABEL_85;
          v62 = (*v23)->fields.userSvtEntity;
          if ( !v62 )
            goto LABEL_85;
          v63 = *(_DWORD *)(servantListViewManager + 24);
          servantListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v62, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_85;
          v65 = *(_DWORD *)(servantListViewManager + 24);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v64);
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v70 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
          if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v68, v69);
          servantListViewManager = (__int64)Rarity__getRarityType(v63, 0);
          if ( !v70 )
            goto LABEL_85;
          v71 = servantListViewManager;
          sub_1FFE8F8(v70, servantListViewManager);
          servantListViewManager = sub_1FFE2C4(v70, 0, v71);
          if ( !ServantEntity )
            goto LABEL_85;
          ClassName = ServantEntity__getClassName(ServantEntity, 0);
          sub_1FFE8F8(v70, ClassName);
          sub_1FFE2C4(v70, 1, ClassName);
          v76 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
          v75 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v73, v74);
          *(_QWORD *)&v96.fields.currentCryptoKey = v76;
          *(_QWORD *)&v96.fields.fakeValue = v75;
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v96, 0);
          v78 = *(_QWORD *)(v57 + 96);
          *(_QWORD *)&v97.fields.fakeValue = *(_QWORD *)(v57 + 104);
          v79 = v77;
          *(_QWORD *)&v97.fields.currentCryptoKey = v78;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v97, 0);
          if ( !Master_object )
            goto LABEL_85;
          LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                          (ServantLimitImageMaster_o *)Master_object,
                                          v79,
                                          servantListViewManager,
                                          1,
                                          1,
                                          0);
          sub_1FFE8F8(v70, LimitCountSealedServantName);
          sub_1FFE2C4(v70, 2, LimitCountSealedServantName);
          RarityType = Rarity__getRarityType(v65, 0);
          sub_1FFE8F8(v70, RarityType);
          servantListViewManager = sub_1FFE2C4(v70, 3, RarityType);
          if ( !*v23 )
            goto LABEL_85;
          servantListViewManager = (__int64)(*v23)->fields.servantEntity;
          if ( !servantListViewManager )
            goto LABEL_85;
          v82 = ServantEntity__getClassName((ServantEntity_o *)servantListViewManager, 0);
          sub_1FFE8F8(v70, v82);
          servantListViewManager = sub_1FFE2C4(v70, 4, v82);
          if ( !*v23 )
            goto LABEL_85;
          v83 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.servantEntity;
          if ( !v83 )
            goto LABEL_85;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v83[1], 0);
          if ( !*v23 )
            goto LABEL_85;
          v84 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
          if ( !v84 )
            goto LABEL_85;
          v85 = servantListViewManager;
          v86 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v84[6], 0);
          v87 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                  (ServantLimitImageMaster_o *)Master_object,
                  v85,
                  v86,
                  1,
                  1,
                  0);
          sub_1FFE8F8(v70, v87);
          sub_1FFE2C4(v70, 5, v87);
          v88 = System_String__Format_75698016(v67, v70, 0);
          v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v92,
            (Il2CppObject *)v7,
            Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
            0);
          servantListViewManager = (__int64)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v93);
          if ( !Instance )
LABEL_85:
            sub_2213CDC(servantListViewManager, v9);
          CommonUI__OpenConfirmDialog_37373584(
            (CommonUI_o *)Instance,
            v66,
            v88,
            v89,
            v90,
            v92,
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
            v31 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnSelectServant__);
          v32 = (System_Reflection_MethodBase_o *)sub_2213A44(v31, v31[4]);
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
          v42 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenu_OnSelectServant__);
        v43 = (System_Reflection_MethodBase_o *)sub_2213A44(v42, v42[4]);
        OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0, 0);
        tabKind = this->fields.tabKind;
        this->fields.state = 6;
        servantListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v45 = *v23;
        v46 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 1 )
        {
          if ( !v45 )
            goto LABEL_85;
          v53 = v45->fields.userSvtEntity;
          v54 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v54,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0);
          if ( !v46 )
            goto LABEL_85;
          CommonUI__OpenServantStatusDialog_37383588(v46, 0, v53, v54, 0);
        }
        else
        {
          if ( tabKind == 2 )
          {
            if ( v45 )
            {
              userCommandCodeEntity = v45->fields.userCommandCodeEntity;
              v48 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
              ServantStatusDialog_EndDelegate___ctor(
                v48,
                (Il2CppObject *)this,
                Method_CharaGraphListMenu_EndShowServantEquip__,
                0);
              if ( v46 )
              {
                CommonUI__OpenServantStatusDialog_37385832(v46, 0, userCommandCodeEntity, v48, 0, 0);
                return;
              }
            }
            goto LABEL_85;
          }
          if ( !v45 )
            goto LABEL_85;
          v55 = v45->fields.userSvtEntity;
          v56 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v56,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0);
          if ( !v46 )
            goto LABEL_85;
          CommonUI__OpenServantStatusDialog_37384068(v46, 0, v55, v56, 0, 0, 0);
        }
      }
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_596C5E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_EndOpen__);
    byte_596C5E0 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_2213A04(
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
        sub_2213CDC(0, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v18);
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v19, 0);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_2213A04(
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

  if ( (byte_596C5F0 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C5F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  __int64 v13; // x1
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
  int32_t v73; // w1
  const MethodInfo *v74; // x3
  System_String_o **v75; // x8
  UICommonButton_o *statusTabButton; // x23
  bool v77; // w0
  __int64 *v78; // x8
  UICommonButton_o *lockTabButton; // x23
  bool v80; // w0
  __int64 *v81; // x8
  UICommonButton_o *choiceTabButton; // x23
  bool v83; // w0
  __int64 *v84; // x8
  UICommonButton_o *pushTabButton; // x23
  bool v86; // w0
  __int64 v87; // x2
  UILabel_o *v88; // x21
  UILabel_o *v89; // x21
  UILabel_o *v90; // x21
  UILabel_o *explanationLabel; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v93; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v95; // [xsp+8h] [xbp-B8h]
  bool v96; // [xsp+Ch] [xbp-B4h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v98; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C5E2 & 1) == 0 )
  {
    sub_2213A60(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_18330/*"btn_txt_craftessence_off"*/);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18371/*"btn_txt_servant_off"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18326/*"btn_txt_cc_off"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18206/*"btn_bg_12"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12167/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18327/*"btn_txt_cc_on"*/);
    sub_2213A60(&StringLiteral_18372/*"btn_txt_servant_on"*/);
    sub_2213A60(&StringLiteral_18426/*"button_infocheck_unreg"*/);
    sub_2213A60(&StringLiteral_18208/*"btn_bg_19"*/);
    sub_2213A60(&StringLiteral_3480/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_18331/*"btn_txt_craftessence_on"*/);
    sub_2213A60(&StringLiteral_3481/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_2213A60(&StringLiteral_18425/*"button_infocheck_reg"*/);
    sub_2213A60(&StringLiteral_3482/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596C5E2 = 1;
  }
  isInitTab = this->fields.isInitTab;
  *(_QWORD *)servantEquipSum = 0;
  v10 = !isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_153;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_153;
  v15 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
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
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    v18 = LocalizationManager_TypeInfo;
    byte_596ABD6 = 1;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_153;
  v95 = v10;
  v96 = isInit;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_153;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v30 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  v31 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48741124(v31, v30, 0, 0, 0, 0);
  servantTabLabel = this->fields.servantTabLabel;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3481/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v98 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(qword_5984348, &v98);
  if ( !SelfUserGame )
    goto LABEL_153;
  v34 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (__int64)System_String__Format_75697880(v33, v34, v35, 0);
  if ( !servantTabLabel )
    goto LABEL_153;
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
    goto LABEL_153;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v39, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3482/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v98 = servantEquipSum[0];
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v98);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (__int64)System_String__Format_75697880(v43, v44, v45, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_153;
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
    goto LABEL_153;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v49, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v98 = v15;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v98);
  if ( !byte_596A5C7 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596A5C7 = 1;
  }
  v57 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54, v55);
    v57 = BalanceConfig_TypeInfo;
  }
  svtKeep = v57->static_fields->CommandCodeFrameMax;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (__int64)System_String__Format_75697880(v53, v56, v58, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_153;
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
    goto LABEL_153;
  v100.fields.r = v21;
  v100.fields.g = v20;
  v100.fields.b = v23;
  v100.fields.a = v22;
  UILabel__set_effectColor((UILabel_o *)Instance, v100, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_153;
  v59 = &StringLiteral_18372/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v59 = &StringLiteral_18371/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v59, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v60 = (System_String_o **)(tabKind ? &StringLiteral_18206/*"btn_bg_12"*/ : &StringLiteral_18208/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v60, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_153;
  v61 = v95 || isInit;
  v62 = !v95 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v62,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_153;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v62, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_153;
  v65 = &StringLiteral_18330/*"btn_txt_craftessence_off"*/;
  if ( tabKind == 1 )
    v65 = &StringLiteral_18331/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v65, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v66 = (System_String_o **)(tabKind == 1 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v66, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_153;
  v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v68, v62, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_153;
  v69 = &StringLiteral_18326/*"btn_txt_cc_off"*/;
  if ( tabKind == 2 )
    v69 = &StringLiteral_18327/*"btn_txt_cc_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v69, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v70 = (System_String_o **)(tabKind == 2 ? &StringLiteral_18208/*"btn_bg_19"*/ : &StringLiteral_18206/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v70, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_153;
  v72 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v72, v62, 0);
  if ( !v95 && !v96 && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_153;
    v73 = 3;
  }
  else
  {
    if ( tabKind != 1 )
    {
      if ( !tabKind )
      {
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_153;
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v31, 0);
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_153;
        ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0);
        Instance = (__int64)this->fields.pushTabSprite;
        if ( !Instance )
          goto LABEL_153;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_153;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_153;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          1,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_153;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_153;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v62, 0);
      }
      if ( v95 || v96 )
        goto LABEL_95;
LABEL_94:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_144;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_153;
    v73 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v73, v31, 0);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_153;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v61, v74);
  if ( !v95 && !v96 )
    goto LABEL_94;
LABEL_95:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v75 = (System_String_o **)&StringLiteral_18425/*"button_infocheck_reg"*/;
  if ( modeKind )
    v75 = (System_String_o **)&StringLiteral_18426/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v75, 0);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_153;
  v77 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v77, v62, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v78 = &StringLiteral_18420/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v78 = &StringLiteral_18419/*"button_alllock_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v78, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_153;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v80, v62, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v81 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v81 = &StringLiteral_18417/*"button_allchoice_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v81, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_153;
  v83 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v83, v62, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_153;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_153;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_153;
  v84 = &StringLiteral_18432/*"button_push_unreg"*/;
  if ( modeKind == 3 )
    v84 = &StringLiteral_18431/*"button_push_reg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v84, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_153;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v95 && !v96,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_153;
  v86 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v86, v62, 0);
  if ( modeKind > 1 )
  {
    if ( modeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v87);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0);
      if ( !explanationLabel )
        goto LABEL_153;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0);
      modeKind = 2;
    }
    else if ( modeKind == 3 )
    {
      v89 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v87);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0);
      if ( !v89 )
        goto LABEL_153;
      UILabel__set_text(v89, (System_String_o *)Instance, 0);
      modeKind = 3;
    }
  }
  else if ( modeKind )
  {
    if ( modeKind == 1 )
    {
      v88 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v87);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0);
      if ( !v88 )
        goto LABEL_153;
      UILabel__set_text(v88, (System_String_o *)Instance, 0);
      modeKind = 1;
    }
  }
  else
  {
    v90 = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v87);
    Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12167/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0);
    if ( !v90 )
      goto LABEL_153;
    UILabel__set_text(v90, (System_String_o *)Instance, 0);
    modeKind = 0;
  }
LABEL_144:
  Instance = (__int64)this->fields.servantListViewManager;
  if ( this->fields.state == 2 )
  {
    if ( Instance )
    {
      ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, 0);
      servantListViewManager = this->fields.servantListViewManager;
      v93 = (ServantListViewManager_CallbackFunc_o *)sub_2213CCC(ServantListViewManager_CallbackFunc_TypeInfo);
      ServantListViewManager_CallbackFunc___ctor(
        v93,
        (Il2CppObject *)this,
        (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
        0);
      if ( servantListViewManager )
      {
        ServantListViewManager__SetMode(servantListViewManager, 2, v93, 0);
        goto LABEL_150;
      }
    }
LABEL_153:
    sub_2213CDC(Instance, v13);
  }
  if ( !Instance )
    goto LABEL_153;
  ServantListViewManager__SetMode_41746280((ServantListViewManager_o *)Instance, 1, 0);
LABEL_150:
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.tabKind = tabKind;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( !Instance )
    goto LABEL_153;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, 0);
  if ( !scaleChangeTabSprite )
    goto LABEL_153;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
}


void CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w8
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w3
  bool v21; // w4
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  int v32; // w8
  System_Int64_array *v33; // x1
  System_Int64_array *v34; // x2
  bool v35; // w4
  bool v36; // w5
  System_Int64_array *v37; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C5EA & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596C5EA = 1;
  }
  modeKind = this->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v37 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_32;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v37, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      tabKind = this->fields.tabKind;
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v29, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      v32 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
      if ( tabKind == 2 )
      {
        if ( !v32 )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30, v31);
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v29,
                                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v19 = v37;
          v18 = choiceList;
          v20 = 0;
          v21 = 1;
          goto LABEL_19;
        }
LABEL_32:
        sub_2213CDC(servantListViewManager, callback);
      }
      if ( !v32 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30, v31);
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v29,
                                                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_32;
      v34 = v37;
      v33 = choiceList;
      v35 = 0;
      v36 = 1;
      goto LABEL_30;
    }
  }
  else if ( modeKind == 1 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_32;
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = this->fields.tabKind;
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      v17 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
      if ( v13 == 2 )
      {
        if ( !v17 )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v14,
                                                               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v19 = unlockList;
          v18 = lockList;
          v20 = 1;
          v21 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v18,
            v19,
            v20,
            v21,
            0);
          return;
        }
        goto LABEL_32;
      }
      if ( !v17 )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v14,
                                                             (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_32;
      v34 = unlockList;
      v33 = lockList;
      v35 = 1;
      v36 = 0;
LABEL_30:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v33, v34, 0, v35, v36, 0);
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

  if ( (byte_596C5DE & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_596C5DE = 1;
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
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_221405C(v6, CharaGraphListMenu_CallbackFunc_TypeInfo, v7, v8);
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

  if ( (byte_596C5DF & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_596C5DF = 1;
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
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_221405C(v6, CharaGraphListMenu_CallbackFunc_TypeInfo, v7, v8);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2005904;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20058BC;
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
  if ( (byte_596C5F3 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_596C5F3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2005968;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2005920;
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
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_596C5F4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_596C5F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  servantListViewManager = _4__this->fields.servantListViewManager;
  _4__this->fields.state = 2;
  v17 = (ServantListViewManager_CallbackFunc_o *)sub_2213CCC(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0);
  if ( !servantListViewManager )
    goto LABEL_12;
  ServantListViewManager__SetMode(servantListViewManager, 2, v17, 0);
}


void CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}