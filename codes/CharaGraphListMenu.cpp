void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418A16C & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418A16C = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    CharaGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_29490720(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_29490720(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v13; // x4
  System_Action_o *v14; // x20

  if ( (byte_418A15B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_CharaGraphListMenu_EndClose__, v10);
    byte_418A15B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v13);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v6; // x20
  ServantListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_418A16B & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_418A16B = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v6 = this->fields.servantListViewManager,
        v7 = (ServantListViewManager_CallbackFunc_o *)sub_B2C42C(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_B2C434(servantListViewManager, result);
  }
  ServantListViewManager__SetMode(v6, 2, v7, 0LL);
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
      sub_B2C434(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
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
      sub_B2C434(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
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
      sub_B2C434(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
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
      sub_B2C434(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall CharaGraphListMenu__EndCloseList(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListMenu__EndCloseShowServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_418A168 & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CharaGraphListMenu_OnSelectServant__, v3);
    byte_418A168 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_B2C42C(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_B2C434(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v5, 2, v6, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x21
  System_Action_o *v14; // x0
  bool v15; // cc
  System_Action_o *v16; // x20
  __int64 *v17; // x8

  if ( (byte_418A166 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9);
    sub_B2C35C(&Method_CharaGraphListMenu_EndCloseShowServant__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_418A166 = 1;
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
      sub_B2C434(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v15 = questId < 1;
  v16 = v14;
  if ( v15 )
    v17 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v17 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v14, (Il2CppObject *)this, *v17, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndShowServantEquip(
        CharaGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_418A167 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CharaGraphListMenu_EndCloseShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418A167 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B2C434(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_31555952(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418A169 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A169 = 1;
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
      sub_B2C434(servantListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418A162 & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabChoice__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A162 = 1;
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
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v9, v10);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v5);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_418A15F & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A15F = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B2C434(0LL, method);
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
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v8, v9);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418A161 & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabLock__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A161 = 1;
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
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v9, v10);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v5);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418A163 & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabPush__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A163 = 1;
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
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_418A15D & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabServant__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A15D = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B2C434(0LL, method);
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
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v8, v9);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_418A15E & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A15E = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B2C434(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v6);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v7, v8);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418A160 & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndClickTabStatus__, method);
    sub_B2C35C(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A160 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__OnSelectServant(
        CharaGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x19
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **Item; // x1
  ServantListViewItem_o **v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t tabKind; // w22
  ServantListViewItem_o *v54; // x8
  CommonUI_o *v55; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v57; // x22
  const MethodInfo *v58; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v60; // x8
  __int128 v61; // q1
  ServantListViewManager_o *v62; // x19
  ServantListViewManager_CallbackFunc_o *v63; // x20
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v65; // x22
  ServantStatusDialog_ResultDelegate_o *v66; // x22
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v68; // x21
  __int64 v69; // x22
  __int64 v70; // x23
  ServantEntity_o *v71; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v73; // w22
  int32_t v74; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v75; // x8
  int32_t v76; // w22
  int32_t v77; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v79; // x21
  System_String_o *v80; // x22
  __int64 v81; // x24
  int32_t Rarity; // w26
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x26
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x26
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x25
  int32_t v104; // w0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x25
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x25
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x20
  System_String_o *v126; // x20
  System_String_o *v127; // x22
  System_String_o *v128; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v130; // x25
  __int64 v131; // x0
  __int64 v132; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v133; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v134; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v135; // 0:x0.16

  if ( (byte_418A165 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_CharaGraphListMenu_EndShowServantEquip__, v8);
    sub_B2C35C(&Method_CharaGraphListMenu_EndShowServant__, v9);
    sub_B2C35C(&Method_CharaGraphListMenu_OnSelectServant__, v10);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&object___TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Rarity_TypeInfo, v23);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26);
    sub_B2C35C(&SoundManager_TypeInfo, v27);
    sub_B2C35C(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v28);
    sub_B2C35C(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v29);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v30);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v31);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v32);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v33);
    byte_418A165 = 1;
  }
  v34 = sub_B2C42C(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  CharaGraphListMenu___c__DisplayClass69_0___ctor((CharaGraphListMenu___c__DisplayClass69_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_109;
  *(_QWORD *)(v34 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
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
    *(_QWORD *)(v34 + 24) = Item;
    v50 = (ServantListViewItem_o **)(v34 + 24);
    sub_B2C2F8((BattleServantConfConponent_o *)(v34 + 24), Item, v43, v44, v45, v46, v47, v48);
    if ( kind != 1 )
    {
      CharaGraphListMenu__Callback(this, 0, v51, v52);
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
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v54 = *v50;
        v55 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v54 )
          {
            userCommandCodeEntity = v54->fields.userCommandCodeEntity;
            v57 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v57,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v55 )
            {
              CommonUI__OpenServantStatusDialog_17984316(v55, 0, userCommandCodeEntity, v57, 0LL, 0LL);
              return;
            }
          }
LABEL_109:
          sub_B2C434(servantListViewManager, v36);
        }
        if ( !v54 )
          goto LABEL_109;
        userSvtEntity = v54->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v65 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v65,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v55 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_17982092(v55, 0, userSvtEntity, v65, 0LL);
        }
        else
        {
          v66 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v66,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v55 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_17982572(v55, 0, userSvtEntity, v66, 0LL);
        }
        return;
      case 1:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(11, 0LL);
        servantListViewManager = (ServantListViewManager_o *)*v50;
        if ( !*v50 )
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
        servantListViewManager = (ServantListViewManager_o *)*v50;
        if ( !*v50 )
          goto LABEL_109;
        ServantListViewItem__SwapChoice((ServantListViewItem_o *)servantListViewManager, 0LL);
LABEL_43:
        v62 = this->fields.servantListViewManager;
        this->fields.state = 2;
        goto LABEL_44;
      case 3:
        if ( !*v50 )
          goto LABEL_109;
        if ( (*v50)->fields.isEnabled )
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
          if ( !*v50 )
            goto LABEL_109;
          v60 = (*v50)->fields.userSvtEntity;
          if ( !v60 )
            goto LABEL_109;
          v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
          *(_OWORD *)&v134.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v134.fields.fakeValue = v61;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v133 = v134;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v133, 0LL) )
          {
LABEL_37:
            CharaGraphListMenu__PushRequest(this, *v50, v58);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_109;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_109;
          v68 = (DataMasterBase_WarMaster__WarEntity__int__o *)servantListViewManager;
          v70 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v69 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v135.fields.currentCryptoKey = v70;
          *(_QWORD *)&v135.fields.fakeValue = v69;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 v135,
                                                                 0LL);
          if ( !v68 )
            goto LABEL_109;
          v71 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v68,
                                     (int32_t)servantListViewManager,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v73 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                 Entity->fields.limitCount,
                                                                 0LL);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 Master_WarQuestSelectionMaster,
                                                                 v73,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v50 )
            goto LABEL_109;
          v74 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v50, 0LL);
          if ( !*v50 )
            goto LABEL_109;
          v75 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v50)->fields.userSvtEntity;
          if ( !v75 )
            goto LABEL_109;
          v76 = (int)servantListViewManager;
          v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v75[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v76,
                                         v77,
                                         0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v81 = sub_B2C374(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity(Entity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v81 )
            goto LABEL_109;
          v89 = (System_Int32_array **)servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v81 + 24) )
              goto LABEL_110;
            *(_QWORD *)(v81 + 32) = v89;
            sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 32), v89, v83, v84, v85, v86, v87, v88);
            if ( !v71 )
              goto LABEL_109;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(v71, 0LL);
            v96 = (System_Int32_array **)servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v81 + 24) <= 1u )
                goto LABEL_110;
              *(_QWORD *)(v81 + 40) = v96;
              sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 40), v96, v90, v91, v92, v93, v94, v95);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(v71, v74, -1, 0LL);
              v103 = (System_Int32_array **)servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v81 + 24) <= 2u )
                  goto LABEL_110;
                *(_QWORD *)(v81 + 48) = v103;
                sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 48), v103, v97, v98, v99, v100, v101, v102);
                if ( !*v50 )
                  goto LABEL_109;
                servantListViewManager = (ServantListViewManager_o *)(*v50)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_109;
                v104 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v104, 0LL);
                v111 = (System_Int32_array **)servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v81 + 24) <= 3u )
                    goto LABEL_110;
                  *(_QWORD *)(v81 + 56) = v111;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 56), v111, v105, v106, v107, v108, v109, v110);
                  if ( !*v50 )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)(*v50)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v118 = (System_Int32_array **)servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v81 + 24) <= 4u )
                      goto LABEL_110;
                    *(_QWORD *)(v81 + 64) = v118;
                    sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 64), v118, v112, v113, v114, v115, v116, v117);
                    if ( !*v50 )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)(*v50)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v125 = (System_Int32_array **)servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_B2C41C(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v81 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v81 + 24) > 5u )
                      {
                        *(_QWORD *)(v81 + 72) = v125;
                        sub_B2C2F8((BattleServantConfConponent_o *)(v81 + 72), v125, v119, v120, v121, v122, v123, v124);
                        v126 = System_String__Format_44384256(v80, (System_Object_array *)v81, 0LL);
                        v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v128 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v130,
                          (Il2CppObject *)v34,
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
                        CommonUI__OpenConfirmDialog_17970624(
                          Instance,
                          v79,
                          v126,
                          v127,
                          v128,
                          v130,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_110:
                      v131 = sub_B2C460(servantListViewManager);
                      sub_B2C400(v131, 0LL);
                    }
                  }
                }
              }
            }
          }
          v132 = sub_B2C454(servantListViewManager);
          sub_B2C400(v132, 0LL);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        v62 = this->fields.servantListViewManager;
LABEL_44:
        v63 = (ServantListViewManager_CallbackFunc_o *)sub_B2C42C(ServantListViewManager_CallbackFunc_TypeInfo);
        ServantListViewManager_CallbackFunc___ctor(
          v63,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v62 )
          goto LABEL_109;
        ServantListViewManager__SetMode(v62, 2, v63, 0LL);
        break;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x1
  int32_t state; // w8
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_418A15A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_CharaGraphListMenu_EndOpen__, v11);
    byte_418A15A = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(
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
        sub_B2C434(0LL, v16);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v17);
      this->fields.state = 1;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v18, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v13);
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v14);
  }
}


void __fastcall CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  __int64 v14; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  const MethodInfo *v42; // [xsp+40h] [xbp-120h]
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  __int64 v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_418A16A & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418A16A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userSvtEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v20;
  *(_QWORD *)&v54.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v22;
  v49 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v52, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v48 = v25;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v26;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.imageLimitCount, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.dispLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(userSvtEntity->fields.iconLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v55.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v55, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v44,
    v43,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v46,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != v48,
    v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__SetTabKind(
        CharaGraphListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  bool v40; // w28
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  __int64 v43; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v45; // w25
  __int64 v46; // x1
  LocalizationManager_c *v47; // x0
  float *static_fields; // x8
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s11
  float *v53; // x8
  float v54; // s12
  float v55; // s13
  float v56; // s14
  float v57; // s15
  bool v58; // w24
  System_Int32_array *EventValUpEventIdList; // x22
  UILabel_o *servantTabLabel; // x27
  System_String_o *v61; // x28
  Il2CppObject *v62; // x22
  Il2CppObject *v63; // x0
  float v64; // s3
  float v65; // s2
  float v66; // s1
  float v67; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v69; // x22
  Il2CppObject *v70; // x28
  Il2CppObject *v71; // x0
  float v72; // s3
  float v73; // s2
  float v74; // s1
  float v75; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v77; // x27
  __int64 v78; // x1
  Il2CppObject *v79; // x25
  BalanceConfig_c *v80; // x0
  Il2CppObject *v81; // x0
  float v82; // s3
  float v83; // s2
  float v84; // s1
  float v85; // s0
  System_String_o **v86; // x8
  System_String_o **v87; // x8
  bool v88; // w25
  UICommonButton_o *servantTabButton; // x22
  bool enabled; // w0
  System_String_o **v91; // x8
  System_String_o **v92; // x8
  UICommonButton_o *servantEquipTabButton; // x22
  bool v94; // w0
  System_String_o **v95; // x8
  System_String_o **v96; // x8
  UICommonButton_o *commandCodeTabButton; // x22
  bool v98; // w0
  int32_t v99; // w1
  const MethodInfo *v100; // x3
  System_String_o **v101; // x8
  UICommonButton_o *statusTabButton; // x22
  bool v103; // w0
  System_String_o **v104; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v106; // w0
  System_String_o **v107; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v109; // w0
  System_String_o **v110; // x8
  UICommonButton_o *pushTabButton; // x22
  bool v112; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v114; // x21
  UILabel_o *v115; // x21
  UILabel_o *v116; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v118; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-B0h]
  bool v121; // [xsp+Ch] [xbp-A4h]
  int32_t svtKeep; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v123; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_418A15C & 1) == 0 )
  {
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_B2C35C(&Method_CharaGraphListMenu_OnSelectServant__, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B2C35C(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&StringLiteral_17047/*"btn_txt_craftessence_off"*/, v17);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v18);
    sub_B2C35C(&StringLiteral_17086/*"btn_txt_servant_off"*/, v19);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v20);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v21);
    sub_B2C35C(&StringLiteral_17044/*"btn_txt_cc_off"*/, v22);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v23);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v24);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v25);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v26);
    sub_B2C35C(&StringLiteral_11741/*"SERVANT_LIST_EXPLANATION_STATUS"*/, v27);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v28);
    sub_B2C35C(&StringLiteral_17045/*"btn_txt_cc_on"*/, v29);
    sub_B2C35C(&StringLiteral_17087/*"btn_txt_servant_on"*/, v30);
    sub_B2C35C(&StringLiteral_17132/*"button_infocheck_unreg"*/, v31);
    sub_B2C35C(&StringLiteral_16964/*"btn_bg_19"*/, v32);
    sub_B2C35C(&StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v33);
    sub_B2C35C(&StringLiteral_17048/*"btn_txt_craftessence_on"*/, v34);
    sub_B2C35C(&StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, v35);
    sub_B2C35C(&StringLiteral_17131/*"button_infocheck_reg"*/, v36);
    sub_B2C35C(&StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v37);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v38);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v39);
    byte_418A15C = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v40 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_188;
  v45 = Instance;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v46);
    byte_4184963 = 1;
  }
  v47 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v47->static_fields;
  v49 = static_fields[20];
  v50 = static_fields[21];
  v51 = static_fields[22];
  v52 = static_fields[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v46);
    v47 = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v47);
    v47 = LocalizationManager_TypeInfo;
  }
  v53 = (float *)v47->static_fields;
  v54 = v53[24];
  v55 = v53[25];
  v56 = v53[26];
  v57 = v53[27];
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  v121 = v40;
  v58 = isInit;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_188;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList((EventMaster_o *)Instance, 0, 0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B2C42C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_26087716(setupInfo, EventValUpEventIdList, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v123 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v123);
  if ( !SelfUserGame )
    goto LABEL_188;
  v62 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44301068(v61, v62, v63, 0LL);
  if ( !servantTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind )
    v64 = v52;
  else
    v64 = v57;
  if ( tabKind )
    v65 = v51;
  else
    v65 = v56;
  if ( tabKind )
    v66 = v50;
  else
    v66 = v55;
  if ( tabKind )
    v67 = v49;
  else
    v67 = v54;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v64 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v123 = servantEquipSum[0];
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44301068(v69, v70, v71, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind == 1 )
    v72 = v57;
  else
    v72 = v52;
  if ( tabKind == 1 )
    v73 = v56;
  else
    v73 = v51;
  if ( tabKind == 1 )
    v74 = v55;
  else
    v74 = v50;
  if ( tabKind == 1 )
    v75 = v54;
  else
    v75 = v49;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v72 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v123 = v45;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  if ( !byte_4183CB7 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v78);
    byte_4183CB7 = 1;
  }
  v80 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v80 = BalanceConfig_TypeInfo;
  }
  svtKeep = v80->static_fields->CommandCodeFrameMax;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44301068(v77, v79, v81, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_188;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_188;
  v82 = tabKind == 2 ? v57 : v52;
  v83 = tabKind == 2 ? v56 : v51;
  v84 = tabKind == 2 ? v55 : v50;
  v85 = tabKind == 2 ? v54 : v49;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v82 - 3), 0LL);
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
  v86 = (System_String_o **)&StringLiteral_17086/*"btn_txt_servant_off"*/;
  if ( !tabKind )
    v86 = (System_String_o **)&StringLiteral_17087/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v86, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v87 = (System_String_o **)(tabKind ? &StringLiteral_16962/*"btn_bg_12"*/ : &StringLiteral_16964/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v87, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_188;
  v88 = !v121 && !v58;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v88,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_188;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v88, 0LL);
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
  v91 = (System_String_o **)&StringLiteral_17048/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v91 = (System_String_o **)&StringLiteral_17047/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v91, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v92 = (System_String_o **)(tabKind == 1 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v92, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_188;
  v94 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v94, v88, 0LL);
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
  v95 = (System_String_o **)&StringLiteral_17045/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v95 = (System_String_o **)&StringLiteral_17044/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v95, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v96 = (System_String_o **)(tabKind == 2 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v96, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_188;
  v98 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v98, v88, 0LL);
  if ( !v121 && !v58 && this->fields.tabKind == tabKind )
    goto LABEL_130;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
    v99 = 3;
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
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v88, 0LL);
      }
      if ( v121 || v58 )
        goto LABEL_131;
LABEL_130:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_180;
      goto LABEL_131;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
    v99 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v99, setupInfo, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_188;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v121 || v58, v100);
  if ( !v121 && !v58 )
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
  v101 = (System_String_o **)&StringLiteral_17131/*"button_infocheck_reg"*/;
  if ( modeKind )
    v101 = (System_String_o **)&StringLiteral_17132/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v101, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_188;
  v103 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v103, v88, 0LL);
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
  v104 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v104 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v104, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_188;
  v106 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v106, v88, 0LL);
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
  v107 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v107 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v107, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_188;
  v109 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v109, v88, 0LL);
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
  v110 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v110 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v110, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !v58,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_188;
  v112 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v112, v88, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11741/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_188;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v114 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v114 )
        goto LABEL_188;
      UILabel__set_text(v114, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v115 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v115 )
        goto LABEL_188;
      UILabel__set_text(v115, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v116 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v116 )
        goto LABEL_188;
      UILabel__set_text(v116, (System_String_o *)Instance, 0LL);
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
    v118 = (ServantListViewManager_CallbackFunc_o *)sub_B2C42C(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v118,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_188;
    ServantListViewManager__SetMode(servantListViewManager, 2, v118, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_31555952((ServantListViewManager_o *)Instance, 1, 0LL);
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
    sub_B2C434(Instance, v43);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
}


void __fastcall CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t v17; // w21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x1
  bool v21; // w3
  bool v22; // w4
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  const MethodInfo *v31; // x6
  System_Int64_array *v32; // x2
  System_Int64_array *v33; // x1
  bool v34; // w4
  bool v35; // w5
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418A164 & 1) == 0 )
  {
    sub_B2C35C(&Method_CharaGraphListMenu_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418A164 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      tabKind = this->fields.tabKind;
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v30,
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
                                                               v30,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v19 = unchoiceList;
          v20 = choiceList;
          v22 = 1;
          v21 = 0;
          goto LABEL_21;
        }
LABEL_36:
        sub_B2C434(servantListViewManager, callback);
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v30,
                                                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v32 = unchoiceList;
      v33 = choiceList;
      v35 = 1;
      v34 = 0;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = this->fields.tabKind;
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( v17 == 2 )
      {
        if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v18,
                                                               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v19 = unlockList;
          v20 = lockList;
          v21 = 1;
          v22 = 0;
LABEL_21:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v20,
            v19,
            v21,
            v22,
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
                                                             v18,
                                                             (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v32 = unlockList;
      v33 = lockList;
      v34 = 1;
      v35 = 0;
LABEL_34:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v33, v32, 0, v34, v35, v31);
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

  if ( (byte_418A158 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_418A158 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A159 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_418A159 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184EC6 & 1) == 0 )
  {
    sub_B2C35C(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4184EC6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_CallbackFunc__Invoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  CharaGraphListMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  CharaGraphListMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (CharaGraphListMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184EC7 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184EC7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_RequestCallbackFunc__Invoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CharaGraphListMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CharaGraphListMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CharaGraphListMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___ctor(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__0(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  struct CharaGraphListMenu_o *_4__this; // x8
  Il2CppObject *v14; // x20
  ServantListViewManager_o *monitor; // x19
  ServantListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_4184EC5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&ServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_CharaGraphListMenu_OnSelectServant__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v8);
    byte_4184EC5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_17971588(v11, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v14 = (Il2CppObject *)this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  monitor = (ServantListViewManager_o *)v14[5].monitor;
  v16 = (ServantListViewManager_CallbackFunc_o *)sub_B2C42C(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(v16, v14, Method_CharaGraphListMenu_OnSelectServant__, 0LL);
  if ( !monitor )
    goto LABEL_13;
  ServantListViewManager__SetMode(monitor, 2, v16, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  CharaGraphListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}