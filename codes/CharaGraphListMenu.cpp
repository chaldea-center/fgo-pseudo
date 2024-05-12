void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438E2A9 & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438E2A9 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__Callback(
        CharaGraphListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    CharaGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_31003968(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_31003968(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x4
  System_Action_o *v13; // x20

  if ( (byte_438E298 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_EndClose__);
    byte_438E298 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v12);
  v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_438E2A8 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_438E2A8 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_B77694(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_B7769C(servantListViewManager, result);
  }
  ServantListViewManager__SetMode(v5, 2, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndClickTabChoice(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B7769C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClickTabCommandCode(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  CharaGraphListMenu__SetTabKind(this, 2, this->fields.modeKind, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndClickTabLock(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B7769C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndClickTabPush(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B7769C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 3, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClickTabServant(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  CharaGraphListMenu__SetTabKind(this, 0, this->fields.modeKind, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClickTabServantEquip(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  EventTutorialMaster__CheckTutorial(-1, 54, 0LL, 0, 0, 0, 0, 0LL);
  CharaGraphListMenu__SetTabKind(this, 1, this->fields.modeKind, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndClickTabStatus(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B7769C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall CharaGraphListMenu__EndCloseList(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListMenu__EndCloseShowServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v4; // x20
  ServantListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_438E2A5 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_438E2A5 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v4 = this->fields.servantListViewManager,
        v5 = (ServantListViewManager_CallbackFunc_o *)sub_B77694(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v4) )
  {
    sub_B7769C(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v4, 2, v5, 0LL);
}


void __fastcall CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.state = 3;
  CharaGraphListMenu__Callback(this, 2, v2, v3);
}


void __fastcall CharaGraphListMenu__EndOpen(CharaGraphListMenu_o *this, const MethodInfo *method)
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
void __fastcall CharaGraphListMenu__EndShowServant(
        CharaGraphListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x21
  System_Action_o *v11; // x0
  bool v12; // cc
  System_Action_o *v13; // x20
  __int64 *v14; // x8

  if ( (byte_438E2A3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_B775C4(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E2A3 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_15;
    ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL);
    if ( isNeedSort )
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_15;
      ListViewManager__SortItem((ListViewManager_o *)servantListViewManager, -1, 0, -1, 0LL);
    }
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
LABEL_15:
      sub_B7769C(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v14 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)this, *v14, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndShowServantEquip(
        CharaGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_438E2A4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E2A4 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B7769C(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_32863484(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


void __fastcall CharaGraphListMenu__EndStatusSync(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  BattleServantConfConponent_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_B77560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CharaGraphListMenu_RequestCallbackFunc__Invoke(requedstCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CharaGraphListMenu__HidePushButton(
        CharaGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pushTabSprite; // x0

  pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
  if ( !pushTabSprite
    || (pushTabSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pushTabSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pushTabSprite, 0, 0LL),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))pushTabSprite->klass[1]._1.namespaze)(
          pushTabSprite,
          0LL,
          pushTabSprite->klass[1]._1.byval_arg.data),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pushTabSprite, 0, 0LL),
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL) )
  {
    sub_B7769C(pushTabSprite, *(_QWORD *)&modeKind);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)pushTabSprite, 0, !isInit, 0LL);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void __fastcall CharaGraphListMenu__Init(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_B7769C(0LL, method);
  ServantListViewManager__DestroyList(servantListViewManager, 0LL);
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  *(_QWORD *)&this->fields.tabKind = 0LL;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenu__Callback(this, 0, v2, v3);
  }
}


void __fastcall CharaGraphListMenu__OnClickDecide(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenu__Callback(this, 1, v2, v3);
  }
}


void __fastcall CharaGraphListMenu__OnClickScaleChange(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_438E2A6 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E2A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ChangeIconScale(servantListViewManager, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantListViewManager = (ServantListViewManager_o *)ServantListViewManager__GetScaleButtonSpriteName(
                                                                 servantListViewManager,
                                                                 0LL),
          !scaleChangeTabSprite) )
    {
      sub_B7769C(servantListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438E29F & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v7, v8);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v3);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v4; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_438E29C & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29C = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B7769C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v4);
    }
    else
    {
      v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v6, v7);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438E29E & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v7, v8);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v3);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E2A0 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E2A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v3, v4);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v4; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_438E29A & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29A = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B7769C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v4);
    }
    else
    {
      v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v6, v7);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v4; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_438E29B & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29B = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B7769C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v4);
    }
    else
    {
      v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v5, v6);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E29D & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_B775C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E29D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v3, v4);
  }
}


void __fastcall CharaGraphListMenu__OnSelectServant(
        CharaGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x19
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **Item; // x1
  ServantListViewItem_o **v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t tabKind; // w22
  ServantListViewItem_o *v27; // x8
  CommonUI_o *v28; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x22
  const MethodInfo *v31; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q1
  ServantListViewManager_o *v35; // x19
  ServantListViewManager_CallbackFunc_o *v36; // x20
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v38; // x22
  ServantStatusDialog_ResultDelegate_o *v39; // x22
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  __int64 v42; // x22
  __int64 v43; // x23
  ServantEntity_o *v44; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v46; // w22
  int32_t v47; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v48; // x8
  int32_t v49; // w22
  int32_t v50; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v52; // x21
  System_String_o *v53; // x22
  __int64 v54; // x24
  int32_t Rarity; // w26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x25
  int32_t v77; // w0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x25
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x25
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x20
  System_String_o *v99; // x20
  System_String_o *v100; // x22
  System_String_o *v101; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v103; // x25
  __int64 v104; // x0
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v106; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v107; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  if ( (byte_438E2A2 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_B775C4(&Method_CharaGraphListMenu_EndShowServant__);
    sub_B775C4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_B775C4(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438E2A2 = 1;
  }
  v7 = sub_B77694(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  CharaGraphListMenu___c__DisplayClass69_0___ctor((CharaGraphListMenu___c__DisplayClass69_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_109;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    this->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_109;
      Item = (System_Int32_array **)ServantListViewManager__GetItem(servantListViewManager, n, 0LL);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (ServantListViewItem_o **)(v7 + 24);
    sub_B77560((BattleServantConfConponent_o *)(v7 + 24), Item, v16, v17, v18, v19, v20, v21);
    if ( kind != 1 )
    {
      CharaGraphListMenu__Callback(this, 0, v24, v25);
      return;
    }
    switch ( this->fields.modeKind )
    {
      case 0:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = *v23;
        v28 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v27 )
          {
            userCommandCodeEntity = v27->fields.userCommandCodeEntity;
            v30 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v30,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v28 )
            {
              CommonUI__OpenServantStatusDialog_18069176(v28, 0, userCommandCodeEntity, v30, 0LL, 0LL);
              return;
            }
          }
LABEL_109:
          sub_B7769C(servantListViewManager, v9);
        }
        if ( !v27 )
          goto LABEL_109;
        userSvtEntity = v27->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v28 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18066864(v28, 0, userSvtEntity, v38, 0LL);
        }
        else
        {
          v39 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v39,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v28 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18067360(v28, 0, userSvtEntity, v39, 0, 0LL);
        }
        return;
      case 1:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(11, 0LL);
        servantListViewManager = (ServantListViewManager_o *)*v23;
        if ( !*v23 )
          goto LABEL_109;
        ServantListViewItem__SwapLock((ServantListViewItem_o *)servantListViewManager, 0LL);
        goto LABEL_43;
      case 2:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        servantListViewManager = (ServantListViewManager_o *)*v23;
        if ( !*v23 )
          goto LABEL_109;
        ServantListViewItem__SwapChoice((ServantListViewItem_o *)servantListViewManager, 0LL);
LABEL_43:
        v35 = this->fields.servantListViewManager;
        this->fields.state = 2;
        goto LABEL_44;
      case 3:
        if ( !*v23 )
          goto LABEL_109;
        if ( (*v23)->fields.isEnabled )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_109;
          dropList = (int64_t)servantListViewManager->fields.dropList;
          if ( !dropList )
            goto LABEL_37;
          if ( !*v23 )
            goto LABEL_109;
          v33 = (*v23)->fields.userSvtEntity;
          if ( !v33 )
            goto LABEL_109;
          v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
          *(_OWORD *)&v107.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v107.fields.fakeValue = v34;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v106 = v107;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v106, 0LL) )
          {
LABEL_37:
            CharaGraphListMenu__PushRequest(this, *v23, v31);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_109;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_109;
          v41 = (DataMasterBase_WarMaster__WarEntity__int__o *)servantListViewManager;
          v43 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v42 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v108.fields.currentCryptoKey = v43;
          *(_QWORD *)&v108.fields.fakeValue = v42;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v108,
                                                                 0LL);
          if ( !v41 )
            goto LABEL_109;
          v44 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v41,
                                     (int32_t)servantListViewManager,
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.svtId, 0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 Entity->fields.limitCount,
                                                                 0LL);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 Master_WarQuestSelectionMaster,
                                                                 v46,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v23 )
            goto LABEL_109;
          v47 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v23, 0LL);
          if ( !*v23 )
            goto LABEL_109;
          v48 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
          if ( !v48 )
            goto LABEL_109;
          v49 = (int)servantListViewManager;
          v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v48[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v49,
                                         v50,
                                         0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v54 = sub_B775DC(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity(Entity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v54 )
            goto LABEL_109;
          v62 = (System_Int32_array **)servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v54 + 24) )
              goto LABEL_110;
            *(_QWORD *)(v54 + 32) = v62;
            sub_B77560((BattleServantConfConponent_o *)(v54 + 32), v62, v56, v57, v58, v59, v60, v61);
            if ( !v44 )
              goto LABEL_109;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(v44, 0LL);
            v69 = (System_Int32_array **)servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v54 + 24) <= 1u )
                goto LABEL_110;
              *(_QWORD *)(v54 + 40) = v69;
              sub_B77560((BattleServantConfConponent_o *)(v54 + 40), v69, v63, v64, v65, v66, v67, v68);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(v44, v47, -1, 0LL);
              v76 = (System_Int32_array **)servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v54 + 24) <= 2u )
                  goto LABEL_110;
                *(_QWORD *)(v54 + 48) = v76;
                sub_B77560((BattleServantConfConponent_o *)(v54 + 48), v76, v70, v71, v72, v73, v74, v75);
                if ( !*v23 )
                  goto LABEL_109;
                servantListViewManager = (ServantListViewManager_o *)(*v23)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_109;
                v77 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v77, 0LL);
                v84 = (System_Int32_array **)servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v54 + 24) <= 3u )
                    goto LABEL_110;
                  *(_QWORD *)(v54 + 56) = v84;
                  sub_B77560((BattleServantConfConponent_o *)(v54 + 56), v84, v78, v79, v80, v81, v82, v83);
                  if ( !*v23 )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)(*v23)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v91 = (System_Int32_array **)servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v54 + 24) <= 4u )
                      goto LABEL_110;
                    *(_QWORD *)(v54 + 64) = v91;
                    sub_B77560((BattleServantConfConponent_o *)(v54 + 64), v91, v85, v86, v87, v88, v89, v90);
                    if ( !*v23 )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)(*v23)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v98 = (System_Int32_array **)servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_B77684(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v54 + 24) > 5u )
                      {
                        *(_QWORD *)(v54 + 72) = v98;
                        sub_B77560((BattleServantConfConponent_o *)(v54 + 72), v98, v92, v93, v94, v95, v96, v97);
                        v99 = System_String__Format_44980660(v53, (System_Object_array *)v54, 0LL);
                        v100 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v103 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v103,
                          (Il2CppObject *)v7,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        }
                        if ( !Instance )
                          goto LABEL_109;
                        CommonUI__OpenConfirmDialog_18055364(
                          Instance,
                          v52,
                          v99,
                          v100,
                          v101,
                          v103,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_110:
                      v104 = sub_B776C8(servantListViewManager);
                      sub_B77668(v104, 0LL);
                    }
                  }
                }
              }
            }
          }
          v105 = sub_B776BC(servantListViewManager);
          sub_B77668(v105, 0LL);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        v35 = this->fields.servantListViewManager;
LABEL_44:
        v36 = (ServantListViewManager_CallbackFunc_o *)sub_B77694(ServantListViewManager_CallbackFunc_TypeInfo);
        ServantListViewManager_CallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v35 )
          goto LABEL_109;
        ServantListViewManager__SetMode(v35, 2, v36, 0LL);
        break;
      default:
        return;
    }
  }
}


void __fastcall CharaGraphListMenu__Open(
        CharaGraphListMenu_o *this,
        int32_t kind,
        CharaGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t state; // w8
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_438E297 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_EndOpen__);
    byte_438E297 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)callback,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        sub_B7769C(0LL, v15);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v16);
      this->fields.state = 1;
      v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v17, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v12);
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v13);
  }
}


void __fastcall CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438E2A7 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E2A7 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userSvtEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.imageLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.dispLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(userSvtEntity->fields.iconLimitCount, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__SetTabKind(
        CharaGraphListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  bool v9; // w28
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  __int64 v12; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v14; // w25
  LocalizationManager_c *v15; // x0
  float *static_fields; // x8
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  float *v21; // x8
  float v22; // s12
  float v23; // s13
  float v24; // s14
  float v25; // s15
  bool v26; // w24
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v28; // x22
  UILabel_o *servantTabLabel; // x27
  System_String_o *v30; // x28
  __int64 v31; // x2
  __int64 v32; // x2
  Il2CppObject *v33; // x22
  Il2CppObject *v34; // x0
  float v35; // s3
  float v36; // s2
  float v37; // s1
  float v38; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v40; // x22
  __int64 v41; // x2
  Il2CppObject *v42; // x28
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  float v45; // s3
  float v46; // s2
  float v47; // s1
  float v48; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v50; // x27
  __int64 v51; // x2
  __int64 v52; // x2
  Il2CppObject *v53; // x25
  BalanceConfig_c *v54; // x0
  Il2CppObject *v55; // x0
  float v56; // s3
  float v57; // s2
  float v58; // s1
  float v59; // s0
  __int64 *v60; // x8
  System_String_o **v61; // x8
  bool v62; // w25
  UICommonButton_o *servantTabButton; // x22
  bool enabled; // w0
  __int64 *v65; // x8
  System_String_o **v66; // x8
  UICommonButton_o *servantEquipTabButton; // x22
  bool v68; // w0
  __int64 *v69; // x8
  System_String_o **v70; // x8
  UICommonButton_o *commandCodeTabButton; // x22
  bool v72; // w0
  int32_t v73; // w1
  const MethodInfo *v74; // x3
  System_String_o **v75; // x8
  UICommonButton_o *statusTabButton; // x22
  bool v77; // w0
  __int64 *v78; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v80; // w0
  __int64 *v81; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v83; // w0
  __int64 *v84; // x8
  UICommonButton_o *pushTabButton; // x22
  bool v86; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v88; // x21
  UILabel_o *v89; // x21
  UILabel_o *v90; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v92; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-B0h]
  bool v95; // [xsp+Ch] [xbp-A4h]
  int32_t svtKeep; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v97; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_438E299 & 1) == 0 )
  {
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_17386/*"btn_txt_craftessence_off"*/);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_17426/*"btn_txt_servant_off"*/);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17383/*"btn_txt_cc_off"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17301/*"btn_bg_12"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11965/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17384/*"btn_txt_cc_on"*/);
    sub_B775C4(&StringLiteral_17427/*"btn_txt_servant_on"*/);
    sub_B775C4(&StringLiteral_17472/*"button_infocheck_unreg"*/);
    sub_B775C4(&StringLiteral_17303/*"btn_bg_19"*/);
    sub_B775C4(&StringLiteral_3086/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_B775C4(&StringLiteral_17387/*"btn_txt_craftessence_on"*/);
    sub_B775C4(&StringLiteral_3087/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_B775C4(&StringLiteral_17471/*"button_infocheck_reg"*/);
    sub_B775C4(&StringLiteral_3088/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438E299 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v9 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_188;
  v14 = Instance;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCE )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCE = 1;
  }
  v15 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v15->static_fields;
  v17 = static_fields[20];
  v18 = static_fields[21];
  v19 = static_fields[22];
  v20 = static_fields[23];
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
    byte_4387FCF = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = LocalizationManager_TypeInfo;
  }
  v21 = (float *)v15->static_fields;
  v22 = v21[24];
  v23 = v21[25];
  v24 = v21[26];
  v25 = v21[27];
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  v95 = v9;
  v26 = isInit;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_188;
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                 (EventMaster_o *)Instance,
                                                                                 0,
                                                                                 0LL,
                                                                                 0LL);
  v28 = System_Linq_Enumerable__ToArray_int_(
          EventValUpEventIdHash,
          (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24075556(setupInfo, v28, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v97 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v97, v31);
  if ( !SelfUserGame )
    goto LABEL_188;
  v33 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v32);
  Instance = (__int64)System_String__Format_44897472(v30, v33, v34, 0LL);
  if ( !servantTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind )
    v35 = v20;
  else
    v35 = v25;
  if ( tabKind )
    v36 = v19;
  else
    v36 = v24;
  if ( tabKind )
    v37 = v18;
  else
    v37 = v23;
  if ( tabKind )
    v38 = v17;
  else
    v38 = v22;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v35 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3088/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v97 = servantEquipSum[0];
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v41);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v43);
  Instance = (__int64)System_String__Format_44897472(v40, v42, v44, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind == 1 )
    v45 = v25;
  else
    v45 = v20;
  if ( tabKind == 1 )
    v46 = v24;
  else
    v46 = v19;
  if ( tabKind == 1 )
    v47 = v23;
  else
    v47 = v18;
  if ( tabKind == 1 )
    v48 = v22;
  else
    v48 = v17;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v45 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3086/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v97 = v14;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v51);
  if ( !byte_43874B8 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_43874B8 = 1;
  }
  v54 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v54 = BalanceConfig_TypeInfo;
  }
  svtKeep = v54->static_fields->CommandCodeFrameMax;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v52);
  Instance = (__int64)System_String__Format_44897472(v50, v53, v55, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_188;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_188;
  v56 = tabKind == 2 ? v25 : v20;
  v57 = tabKind == 2 ? v24 : v19;
  v58 = tabKind == 2 ? v23 : v18;
  v59 = tabKind == 2 ? v22 : v17;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v56 - 3), 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0LL);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_188;
  v60 = &StringLiteral_17426/*"btn_txt_servant_off"*/;
  if ( !tabKind )
    v60 = &StringLiteral_17427/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v60, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v61 = (System_String_o **)(tabKind ? &StringLiteral_17301/*"btn_bg_12"*/ : &StringLiteral_17303/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v61, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_188;
  v62 = !v95 && !v26;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v62,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_188;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v62, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0LL);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_188;
  v65 = &StringLiteral_17387/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v65 = &StringLiteral_17386/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v65, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v66 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v66, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_188;
  v68 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v68, v62, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0LL);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_188;
  v69 = &StringLiteral_17384/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v69 = &StringLiteral_17383/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v69, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v70 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v70, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_188;
  v72 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v72, v62, 0LL);
  if ( !v95 && !v26 && this->fields.tabKind == tabKind )
    goto LABEL_130;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
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
          goto LABEL_188;
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, setupInfo, 0LL);
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_188;
        ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
        Instance = (__int64)this->fields.pushTabSprite;
        if ( !Instance )
          goto LABEL_188;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_188;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_188;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          1LL,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_188;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_188;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v62, 0LL);
      }
      if ( v95 || v26 )
        goto LABEL_131;
LABEL_130:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_180;
      goto LABEL_131;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
    v73 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v73, setupInfo, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_188;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v95 || v26, v74);
  if ( !v95 && !v26 )
    goto LABEL_130;
LABEL_131:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0LL);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v75 = (System_String_o **)&StringLiteral_17471/*"button_infocheck_reg"*/;
  if ( modeKind )
    v75 = (System_String_o **)&StringLiteral_17472/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v75, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_188;
  v77 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v77, v62, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0LL);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v78 = &StringLiteral_17465/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v78 = &StringLiteral_17466/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v78, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_188;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v80, v62, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0LL);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v81 = &StringLiteral_17463/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v81 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v81, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_188;
  v83 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v83, v62, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_188;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0LL);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v84 = &StringLiteral_17477/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v84 = &StringLiteral_17478/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v84, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v95 && !v26,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_188;
  v86 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v86, v62, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11965/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_188;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v88 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v88 )
        goto LABEL_188;
      UILabel__set_text(v88, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v89 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v89 )
        goto LABEL_188;
      UILabel__set_text(v89, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v90 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v90 )
        goto LABEL_188;
      UILabel__set_text(v90, (System_String_o *)Instance, 0LL);
      modeKind = 3;
      break;
    default:
      break;
  }
LABEL_180:
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_188;
  if ( this->fields.state == 2 )
  {
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    v92 = (ServantListViewManager_CallbackFunc_o *)sub_B77694(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v92,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_188;
    ServantListViewManager__SetMode(servantListViewManager, 2, v92, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_32863484((ServantListViewManager_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, 0LL),
        !scaleChangeTabSprite) )
  {
LABEL_188:
    sub_B7769C(Instance, v12);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
}


void __fastcall CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  int32_t v13; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x2
  System_Int64_array *v16; // x1
  bool v17; // w3
  bool v18; // w4
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // x2
  System_Int64_array *v28; // x1
  bool v29; // w4
  bool v30; // w5
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438E2A1 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438E2A1 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_36;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &unchoiceList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      tabKind = this->fields.tabKind;
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( tabKind == 2 )
      {
        if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v26,
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v15 = unchoiceList;
          v16 = choiceList;
          v18 = 1;
          v17 = 0;
          goto LABEL_21;
        }
LABEL_36:
        sub_B7769C(servantListViewManager, callback);
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v26,
                                                             (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v27 = unchoiceList;
      v28 = choiceList;
      v30 = 1;
      v29 = 0;
      goto LABEL_34;
    }
  }
  else if ( modeKind == 1 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_36;
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = this->fields.tabKind;
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( v13 == 2 )
      {
        if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v14,
                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v15 = unlockList;
          v16 = lockList;
          v17 = 1;
          v18 = 0;
LABEL_21:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v16,
            v15,
            v17,
            v18,
            0LL);
          return;
        }
        goto LABEL_36;
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v14,
                                                             (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v27 = unlockList;
      v28 = lockList;
      v29 = 1;
      v30 = 0;
LABEL_34:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v28, v27, 0, v29, v30, 0LL);
      return;
    }
  }
  if ( callback )
    CharaGraphListMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall CharaGraphListMenu__add_callbackFunc(
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

  if ( (byte_438E295 & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_438E295 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v7->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CharaGraphListMenu__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CharaGraphListMenu__remove_callbackFunc(
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

  if ( (byte_438E296 & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_438E296 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v7->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CharaGraphListMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CharaGraphListMenu_CallbackFunc__BeginInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_4388558 & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_4388558 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_CallbackFunc__Invoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  CharaGraphListMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  CharaGraphListMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (CharaGraphListMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_RequestCallbackFunc___ctor(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CharaGraphListMenu_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_4388559 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4388559 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_RequestCallbackFunc__Invoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CharaGraphListMenu_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CharaGraphListMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CharaGraphListMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___ctor(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__0(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  struct CharaGraphListMenu_o *_4__this; // x8
  Il2CppObject *v10; // x20
  ServantListViewManager_o *monitor; // x19
  ServantListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_4388557 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_4388557 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(&this->fields.__9__1);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v10 = (Il2CppObject *)this->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  monitor = (ServantListViewManager_o *)v10[5].monitor;
  v12 = (ServantListViewManager_CallbackFunc_o *)sub_B77694(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(v12, v10, Method_CharaGraphListMenu_OnSelectServant__, 0LL);
  if ( !monitor )
    goto LABEL_13;
  ServantListViewManager__SetMode(monitor, 2, v12, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  CharaGraphListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}