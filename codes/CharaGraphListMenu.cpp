void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A5750D & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A5750D = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenu__Callback(
        CharaGraphListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, n, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_32586644(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_32586644(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_4A574FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_EndClose__);
    byte_4A574FC = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v8);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4A5750C & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4A5750C = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1B887FC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_1B8880C(servantListViewManager, result);
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
      sub_1B8880C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
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
      sub_1B8880C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
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
      sub_1B8880C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
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
      sub_1B8880C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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

  if ( (byte_4A57509 & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4A57509 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v4 = this->fields.servantListViewManager,
        v5 = (ServantListViewManager_CallbackFunc_o *)sub_1B887FC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v4) )
  {
    sub_1B8880C(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v4, 2, v5, 0LL);
}


void __fastcall CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
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
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x0
  bool v12; // cc
  System_Action_o *v13; // x20
  __int64 *v14; // x8

  if ( (byte_4A57507 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_1B885B0(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57507 = 1;
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
      sub_1B8880C(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v14 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)this, *v14, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndShowServantEquip(
        CharaGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_4A57508 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57508 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_32684524(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall CharaGraphListMenu__EndStatusSync(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  ServantStatusBattleListViewItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1B88554(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requedstCallback->fields.m_target)(
      requedstCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requedstCallback->fields.extra_arg);
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
    sub_1B8880C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1B8880C(0LL, method);
  ServantListViewManager__DestroyList(servantListViewManager, 0LL);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0LL;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_1B88554(p_callbackFunc, 0, v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickDecide(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_1B88554(p_callbackFunc, 0, v2, v3);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickScaleChange(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4A5750A & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_4A5750A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
      sub_1B8880C(servantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4A57503 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57503 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4A57500 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57500 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B8880C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v4 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v9);
      CharaGraphListMenu__StatusRequest(this, v8, v10);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4A57502 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57502 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57504 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57504 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      v6);
    CharaGraphListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4A574FE & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabServant__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A574FE = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B8880C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v4 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v9);
      CharaGraphListMenu__StatusRequest(this, v8, v10);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A574FF & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A574FF = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B8880C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v4 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v6);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v8);
      CharaGraphListMenu__StatusRequest(this, v7, v9);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A57501 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_1B885B0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4A57501 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B887FC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      v6);
    CharaGraphListMenu__StatusRequest(this, v5, v7);
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
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
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
  ServantListViewManager_o *v30; // x19
  ServantListViewManager_CallbackFunc_c *v31; // x0
  ServantListViewManager_CallbackFunc_o *v32; // x20
  _BOOL4 isEnabled; // w23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *v38; // x8
  __int128 v39; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v41; // x22
  ServantStatusDialog_ResultDelegate_o *v42; // x22
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v47; // x25
  Il2CppObject *Master_object; // x21
  int32_t v49; // w22
  int32_t v50; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v51; // x8
  int32_t v52; // w22
  int32_t v53; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  __int64 v57; // x23
  int32_t Rarity; // w26
  int32_t v59; // w2
  int32_t v60; // w3
  ServantListViewManager_o *v61; // x26
  int32_t v62; // w2
  int32_t v63; // w3
  ServantListViewManager_o *v64; // x26
  int32_t v65; // w2
  int32_t v66; // w3
  ServantListViewManager_o *v67; // x25
  int32_t v68; // w0
  int32_t v69; // w2
  int32_t v70; // w3
  ServantListViewManager_o *v71; // x25
  int32_t v72; // w2
  int32_t v73; // w3
  ServantListViewManager_o *v74; // x25
  int32_t v75; // w2
  int32_t v76; // w3
  ServantListViewManager_o *v77; // x20
  System_String_o *v78; // x20
  System_String_o *v79; // x22
  System_String_o *v80; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v82; // x25
  __int64 v83; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4A57506 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_1B885B0(&Method_CharaGraphListMenu_EndShowServant__);
    sub_1B885B0(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_1B885B0(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A57506 = 1;
  }
  v7 = sub_1B887FC(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
        goto LABEL_97;
      Item = ServantListViewManager__GetItem(servantListViewManager, n, 0LL);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v15 = (ServantListViewItem_o **)(v7 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Item, v12, v13);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v16, v17);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          0LL,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
      }
      return;
    }
    switch ( this->fields.modeKind )
    {
      case 0:
        v18 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnSelectServant__);
        v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = *v15;
        v22 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v21 )
          {
            userCommandCodeEntity = v21->fields.userCommandCodeEntity;
            v24 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_30506660(v22, 0, userCommandCodeEntity, v24, 0LL, 0LL);
              return;
            }
          }
LABEL_97:
          sub_1B8880C(servantListViewManager, v9);
        }
        if ( !v21 )
          goto LABEL_97;
        userSvtEntity = v21->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v41 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v41,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v22 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30504496(v22, 0, userSvtEntity, v41, 0LL);
        }
        else
        {
          v42 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v42,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v22 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30504960(v22, 0, userSvtEntity, v42, 0, 0LL);
        }
        return;
      case 1:
        v26 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v26 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnSelectServant__);
        v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v26, v26[4]);
        OverwriteAssetSoundName__PlaySystemSe(v27, 11, 0LL);
        if ( !*v15 )
          goto LABEL_97;
        (*v15)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v28 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnSelectServant__);
        v29 = (System_Reflection_MethodBase_o *)sub_1B88594(v28, v28[4]);
        OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
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
        v34 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1B885C8(Method_CharaGraphListMenu_OnSelectServant__);
        v35 = (System_Reflection_MethodBase_o *)sub_1B88594(v34, v34[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0LL);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_97;
          dragParentObject = (int64_t)servantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_41;
          if ( !*v15 )
            goto LABEL_97;
          v38 = (*v15)->fields.userSvtEntity;
          if ( !v38 )
            goto LABEL_97;
          v39 = *(_OWORD *)&v38->fields.id.fields.fakeValue;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&v38->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v85.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v84 = v85;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v84, 0LL) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v15, v36);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dragParentObject,
                     (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v86.fields.currentCryptoKey = klass;
          *(_QWORD *)&v86.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 v86,
                                                                 0LL);
          if ( !v44 )
            goto LABEL_97;
          v47 = DataMasterBase_object__object__int___GetEntity(
                  v44,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                 0LL);
          if ( !Master_object )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 v49,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v15 )
            goto LABEL_97;
          v50 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v15, v9);
          if ( !*v15 )
            goto LABEL_97;
          v51 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v15)->fields.userSvtEntity;
          if ( !v51 )
            goto LABEL_97;
          v52 = (int)servantListViewManager;
          v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v51[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v52,
                                         v53,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v57 = sub_1B88658(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v57 )
            goto LABEL_97;
          v61 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v57 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v57 + 32) = v61;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 32), (int32_t)v61, v59, v60);
            if ( !v47 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                   (ServantEntity_o *)v47,
                                                                   0LL);
            v64 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v57 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v57 + 40) = v64;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 40), (int32_t)v64, v62, v63);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                     (ServantEntity_o *)v47,
                                                                     v50,
                                                                     -1,
                                                                     0LL);
              v67 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v57 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v57 + 48) = v67;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 48), (int32_t)v67, v65, v66);
                if ( !*v15 )
                  goto LABEL_97;
                servantListViewManager = (ServantListViewManager_o *)(*v15)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_97;
                v68 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v68, 0LL);
                v71 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v57 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v57 + 56) = v71;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 56), (int32_t)v71, v69, v70);
                  if ( !*v15 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v15)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v74 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v57 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v57 + 64) = v74;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 64), (int32_t)v74, v72, v73);
                    if ( !*v15 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)(*v15)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v77 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1B886EC(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v57 + 24) > 5u )
                      {
                        *(_QWORD *)(v57 + 72) = v77;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 72), (int32_t)v77, v75, v76);
                        v78 = System_String__Format_61721540(v56, (System_Object_array *)v57, 0LL);
                        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v82 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v82,
                          (Il2CppObject *)v7,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( !Instance )
                          goto LABEL_97;
                        CommonUI__OpenConfirmDialog_30493912(
                          (CommonUI_o *)Instance,
                          v55,
                          v78,
                          v79,
                          v80,
                          v82,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_98:
                      sub_1B88814(servantListViewManager, v9);
                    }
                  }
                }
              }
            }
          }
          v83 = sub_1B88830();
          sub_1B886D8(v83, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0LL);
        this->fields.state = 2;
        v30 = this->fields.servantListViewManager;
        v31 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v32 = (ServantListViewManager_CallbackFunc_o *)sub_1B887FC(v31);
        ServantListViewManager_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v30 )
          goto LABEL_97;
        ServantListViewManager__SetMode(v30, 2, v32, 0LL);
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
  int32_t state; // w8
  const MethodInfo *v8; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v11; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_4A574FB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_EndOpen__);
    byte_4A574FB = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)callback,
        (int32_t)method);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        sub_1B8880C(0LL, v13);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v14);
      this->fields.state = 1;
      v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v15, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v8);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v11);
  }
}


void __fastcall CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
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
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_4A5750B & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5750B = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userSvtEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v45, 0LL);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.dispLimitCount, 0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(userSvtEntity->fields.iconLimitCount, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v46, 0LL);
  if ( !v22 )
LABEL_18:
    sub_1B8880C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    imageLimitCount,
    v23,
    v24,
    v25,
    v26,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v37,
    IsLock,
    v28 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != (struct System_Threading_SynchronizationContext_o *)v39,
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
  bool v9; // w29
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  __int64 v12; // x1
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
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x29
  Il2CppObject *v38; // x0
  float v39; // s3
  float v40; // s2
  float v41; // s1
  float v42; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v44; // x28
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x29
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  float v53; // s3
  float v54; // s2
  float v55; // s1
  float v56; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v58; // x27
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x25
  BalanceConfig_c *v66; // x0
  Il2CppObject *v67; // x0
  __int64 *v68; // x8
  System_String_o **v69; // x8
  bool v70; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v73; // x8
  System_String_o **v74; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v76; // w0
  __int64 *v77; // x8
  System_String_o **v78; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v80; // w0
  int32_t v81; // w1
  const MethodInfo *v82; // x3
  System_String_o **v83; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v85; // w0
  __int64 *v86; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v88; // w0
  __int64 *v89; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v91; // w0
  __int64 *v92; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v94; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v96; // x21
  UILabel_o *v97; // x21
  UILabel_o *v98; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v100; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v102; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v104; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A574FD & 1) == 0 )
  {
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_17570/*"btn_txt_craftessence_off"*/);
    sub_1B885B0(&StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17610/*"btn_txt_servant_off"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17566/*"btn_txt_cc_off"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17476/*"btn_bg_12"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_11626/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_1B885B0(&StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17567/*"btn_txt_cc_on"*/);
    sub_1B885B0(&StringLiteral_17611/*"btn_txt_servant_on"*/);
    sub_1B885B0(&StringLiteral_17656/*"button_infocheck_unreg"*/);
    sub_1B885B0(&StringLiteral_17478/*"btn_bg_19"*/);
    sub_1B885B0(&StringLiteral_3452/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1B885B0(&StringLiteral_17571/*"btn_txt_craftessence_on"*/);
    sub_1B885B0(&StringLiteral_3453/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1B885B0(&StringLiteral_17655/*"button_infocheck_reg"*/);
    sub_1B885B0(&StringLiteral_3454/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A574FD = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v9 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_148;
  v14 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A5638C )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638C = 1;
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
  if ( !byte_4A5638D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
    byte_4A5638D = 1;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v102 = v9;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_148;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v27 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(v28, v27, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v104 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v104, v31, v32, v33);
  if ( !SelfUserGame )
    goto LABEL_148;
  v37 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v34, v35, v36);
  Instance = (__int64)System_String__Format_61721404(v30, v37, v38, 0LL);
  if ( !servantTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  v39 = v19;
  v40 = v20;
  v41 = v17;
  v42 = v18;
  if ( !tabKind )
  {
    v39 = a;
    v40 = b;
    v41 = g;
    v42 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v42, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3454/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v104 = servantEquipSum[0];
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v45, v46, v47);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v49, v50, v51);
  Instance = (__int64)System_String__Format_61721404(v44, v48, v52, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v53 = v19;
  v54 = v20;
  v55 = v17;
  v56 = v18;
  if ( tabKind == 1 )
  {
    v53 = a;
    v54 = b;
    v55 = g;
    v56 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v56, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3452/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v104 = v14;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v59, v60, v61);
  if ( !byte_4A567BB )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A567BB = 1;
  }
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  svtKeep = v66->static_fields->CommandCodeFrameMax;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v62, v63, v64);
  Instance = (__int64)System_String__Format_61721404(v58, v65, v67, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_148;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v19 = a;
    v20 = b;
    v17 = g;
    v18 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  v106.fields.r = v18;
  v106.fields.g = v17;
  v106.fields.b = v20;
  v106.fields.a = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, v106, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0LL);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v68 = &StringLiteral_17611/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v68 = &StringLiteral_17610/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v68, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v69 = (System_String_o **)(tabKind ? &StringLiteral_17476/*"btn_bg_12"*/ : &StringLiteral_17478/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v69, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  v70 = !v102 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v70,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_148;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v70, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0LL);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v73 = &StringLiteral_17571/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v73 = &StringLiteral_17570/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v73, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v74 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v74, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_148;
  v76 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v76, v70, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0LL);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v77 = &StringLiteral_17567/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v77 = &StringLiteral_17566/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v77, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v78 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17478/*"btn_bg_19"*/ : &StringLiteral_17476/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v78, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_148;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v80, v70, 0LL);
  if ( !v102 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v81 = 3;
  }
  else
  {
    if ( tabKind != 1 )
    {
      if ( !tabKind )
      {
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_148;
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v28, 0LL);
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_148;
        ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
        Instance = (__int64)this->fields.pushTabSprite;
        if ( !Instance )
          goto LABEL_148;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          1LL,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v70, 0LL);
      }
      if ( v102 || isInit )
        goto LABEL_95;
LABEL_94:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_140;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v81 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v81, v28, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v102 || isInit, v82);
  if ( !v102 && !isInit )
    goto LABEL_94;
LABEL_95:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0LL);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v83 = (System_String_o **)&StringLiteral_17655/*"button_infocheck_reg"*/;
  if ( modeKind )
    v83 = (System_String_o **)&StringLiteral_17656/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v83, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_148;
  v85 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v85, v70, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0LL);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v86 = &StringLiteral_17649/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v86 = &StringLiteral_17650/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v86, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_148;
  v88 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v88, v70, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0LL);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v89 = &StringLiteral_17647/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v89 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v89, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_148;
  v91 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v91, v70, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0LL);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v92 = &StringLiteral_17661/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v92 = &StringLiteral_17662/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v92, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v102 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_148;
  v94 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v94, v70, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11626/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_148;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v96 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11624/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v96 )
        goto LABEL_148;
      UILabel__set_text(v96, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v97 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11623/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v97 )
        goto LABEL_148;
      UILabel__set_text(v97, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v98 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11625/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v98 )
        goto LABEL_148;
      UILabel__set_text(v98, (System_String_o *)Instance, 0LL);
      modeKind = 3;
      break;
    default:
      break;
  }
LABEL_140:
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  if ( this->fields.state == 2 )
  {
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    v100 = (ServantListViewManager_CallbackFunc_o *)sub_1B887FC(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v100,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_148;
    ServantListViewManager__SetMode(servantListViewManager, 2, v100, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_32684524((ServantListViewManager_o *)Instance, 1, 0LL);
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
LABEL_148:
    sub_1B8880C(Instance, v12);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w21
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  System_Int64_array *v11; // x1
  System_Int64_array *v12; // x2
  bool v13; // w3
  bool v14; // w4
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  System_Int64_array *v19; // x1
  System_Int64_array *v20; // x2
  bool v21; // w4
  bool v22; // w5
  System_Int64_array *v23; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A57505 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A57505 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v23 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v23, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v15, v16);
      tabKind = this->fields.tabKind;
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v18,
                                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v12 = v23;
          v11 = choiceList;
          v14 = 1;
          v13 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1B8880C(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v18,
                                                             (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v20 = v23;
      v19 = choiceList;
      v22 = 1;
      v21 = 0;
      goto LABEL_26;
    }
  }
  else if ( modeKind == 1 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v7, v8);
      v9 = this->fields.tabKind;
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v9 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v10,
                                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v12 = unlockList;
          v11 = lockList;
          v13 = 1;
          v14 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v11,
            v12,
            v13,
            v14,
            0LL);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v10,
                                                             (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v20 = unlockList;
      v19 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v19, v20, 0, v21, v22, 0LL);
      return;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
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

  if ( (byte_4A574F9 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4A574F9 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B88ACC(v7);
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

  if ( (byte_4A574FA & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4A574FA = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B88ACC(v7);
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
  this->fields.m_target = (Il2CppObject *)sub_19C9E24;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9DDC;
}


System_IAsyncResult_o *__fastcall CharaGraphListMenu_CallbackFunc__BeginInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A5750E & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_4A5750E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CharaGraphListMenu_CallbackFunc__Invoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_RequestCallbackFunc___ctor(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19C9E88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9E40;
}


System_IAsyncResult_o *__fastcall CharaGraphListMenu_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4A5750F & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5750F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__Invoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct CharaGraphListMenu_o *_4__this; // x20
  ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v13; // x21

  if ( (byte_4A57510 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_4A57510 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v13 = (ServantListViewManager_CallbackFunc_o *)sub_1B887FC(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    goto LABEL_12;
  ServantListViewManager__SetMode(servantListViewManager, 2, v13, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}