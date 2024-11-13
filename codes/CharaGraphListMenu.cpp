void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B124EB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B124EB = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__Callback(
        CharaGraphListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_33245160(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_33245160(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v14; // x4
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B124DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClose__, v10, v11);
    byte_4B124DA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v14);
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ServantListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4B124EA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnSelectServant__, v4, v5);
    byte_4B124EA = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v7 = this->fields.servantListViewManager,
        v11 = (ServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantListViewManager_CallbackFunc_TypeInfo,
                                                         v8,
                                                         v9,
                                                         v10),
        ServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v7) )
  {
    sub_1BCAA3C(servantListViewManager, result);
  }
  ServantListViewManager__SetMode(v7, 2, v11, 0LL);
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
      sub_1BCAA3C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
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
      sub_1BCAA3C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void __fastcall CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  ServantListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4B124E7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnSelectServant__, v4, v5);
    byte_4B124E7 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v7 = this->fields.servantListViewManager,
        v11 = (ServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                         ServantListViewManager_CallbackFunc_TypeInfo,
                                                         v8,
                                                         v9,
                                                         v10),
        ServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v7) )
  {
    sub_1BCAA3C(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v7, 2, v11, 0LL);
}


void __fastcall CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  Il2CppObject *Instance; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x0
  bool v21; // cc
  System_Action_o *v22; // x20
  __int64 *v23; // x8

  if ( (byte_4B124E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndCloseShowServant__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B124E5 = 1;
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
      sub_1BCAA3C(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  v21 = questId < 1;
  v22 = v20;
  if ( v21 )
    v23 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v23 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v20, (Il2CppObject *)this, *v23, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndShowServantEquip(
        CharaGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  if ( (byte_4B124E6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndCloseShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B124E6 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_33277836(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
}


void __fastcall CharaGraphListMenu__EndStatusSync(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  PartyOrganizationUtility_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (PartyOrganizationUtility_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1BCA784(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1BCAA3C(0LL, method);
  ServantListViewManager__DestroyList(servantListViewManager, 0LL);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0LL;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickDecide(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0LL;
      sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickScaleChange(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B124E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickScaleChange__, method, v2);
    byte_4B124E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
      sub_1BCAA3C(servantListViewManager, v6);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4B124E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabChoice__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabChoice__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v15, v16);
        return;
      }
      v17 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v17, v18);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v13);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_4B124DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabCommandCode__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1BCAA3C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v9 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v13);
    }
    else
    {
      v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v11,
                                                          modeKind,
                                                          v12);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v15, v16);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4B124E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabLock__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v15, v16);
        return;
      }
      v17 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v17, v18);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v13);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B124E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabPush__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabPush__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabPush__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                        CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v13, v14);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  const MethodInfo *v13; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_4B124DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabServant__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabServant__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1BCAA3C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v9 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v13);
    }
    else
    {
      v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v11,
                                                          modeKind,
                                                          v12);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v15, v16);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_4B124DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabServantEquip__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1BCAA3C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v9 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v12);
    }
    else
    {
      v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v11,
                                                          v12,
                                                          v13);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v14, v15);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B124DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnClickTabStatus__, v4, v5);
    sub_1BCA7E0(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B124DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnClickTabStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                        CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v13, v14);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x19
  int64_t servantListViewManager; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  int32_t tabKind; // w22
  __int64 v85; // x2
  __int64 v86; // x3
  ServantListViewItem_o *v87; // x8
  CommonUI_o *v88; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v90; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  ServantListViewManager_o *v99; // x19
  ServantListViewManager_CallbackFunc_o *v100; // x20
  _BOOL4 isEnabled; // w23
  _QWORD *v102; // x0
  System_Reflection_MethodBase_o *v103; // x0
  const MethodInfo *v104; // x2
  int64_t v105; // x22
  struct UserServantEntity_o *v106; // x8
  __int128 v107; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v109; // x22
  ServantStatusDialog_ResultDelegate_o *v110; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v115; // x1
  Il2CppObject *v116; // x26
  __int64 v117; // x1
  Il2CppObject *Master_object; // x24
  System_String_o *v119; // x21
  System_String_o *v120; // x22
  __int64 v121; // x23
  __int64 v122; // x1
  int32_t Rarity; // w27
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x27
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  int64_t v137; // x26
  int32_t v138; // w0
  Il2CppClass *v139; // x8
  int32_t v140; // w25
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x25
  int32_t v148; // w0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int64_t v155; // x25
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  int64_t v162; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v163; // x8
  int32_t v164; // w20
  int32_t v165; // w0
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  int64_t v172; // x20
  System_String_o *v173; // x20
  System_String_o *v174; // x22
  System_String_o *v175; // x23
  Il2CppObject *Instance; // x24
  __int64 v177; // x1
  __int64 v178; // x2
  __int64 v179; // x3
  CommonConfirmDialog_ClickDelegate_o *v180; // x25
  __int64 v181; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v182; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v183; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v184; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v185; // 0:x0.16

  if ( (byte_4B124E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&ServantListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndShowServantEquip__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndShowServant__, v11, v12);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnSelectServant__, v13, v14);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v21, v22);
    sub_1BCA7E0(&DataManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v27, v28);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&object___TypeInfo, v33, v34);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35, v36);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v37, v38);
    sub_1BCA7E0(&Rarity_TypeInfo, v39, v40);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46);
    sub_1BCA7E0(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v47, v48);
    sub_1BCA7E0(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v57, v58);
    byte_4B124E4 = 1;
  }
  v59 = sub_1BCAA2C(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method);
  CharaGraphListMenu___c__DisplayClass69_0___ctor((CharaGraphListMenu___c__DisplayClass69_0_o *)v59, 0LL);
  if ( !v59 )
    goto LABEL_95;
  *(_QWORD *)(v59 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)this, v62, v63, v64, v65, v66, v67);
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
      servantListViewManager = (int64_t)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_95;
      Item = ServantListViewManager__GetItem((ServantListViewManager_o *)servantListViewManager, n, 0LL);
    }
    *(_QWORD *)(v59 + 24) = Item;
    v75 = (ServantListViewItem_o **)(v59 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 24), (int64_t)Item, v68, v69, v70, v71, v72, v73);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v76, v77, v78, v79, v80, v81);
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
        v82 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v82 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnSelectServant__);
        v83 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v82, v82[4]);
        OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v87 = *v75;
        v88 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v87 )
          {
            userCommandCodeEntity = v87->fields.userCommandCodeEntity;
            v90 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v61,
                                                         v85,
                                                         v86);
            ServantStatusDialog_EndDelegate___ctor(
              v90,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v88 )
            {
              CommonUI__OpenServantStatusDialog_30778960(v88, 0, userCommandCodeEntity, v90, 0LL, 0LL);
              return;
            }
          }
LABEL_95:
          sub_1BCAA3C(servantListViewManager, v61);
        }
        if ( !v87 )
          goto LABEL_95;
        userSvtEntity = v87->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v109 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                        ServantStatusDialog_EndDelegate_TypeInfo,
                                                        v61,
                                                        v85,
                                                        v86);
          ServantStatusDialog_EndDelegate___ctor(
            v109,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v88 )
            goto LABEL_95;
          CommonUI__OpenServantStatusDialog_30776796(v88, 0, userSvtEntity, v109, 0LL);
        }
        else
        {
          v110 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                           ServantStatusDialog_ResultDelegate_TypeInfo,
                                                           v61,
                                                           v85,
                                                           v86);
          ServantStatusDialog_ResultDelegate___ctor(
            v110,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v88 )
            goto LABEL_95;
          CommonUI__OpenServantStatusDialog_30777260(v88, 0, userSvtEntity, v110, 0, 0LL);
        }
        return;
      case 1:
        v92 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v92 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnSelectServant__);
        v93 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v92, v92[4]);
        OverwriteAssetSoundName__PlaySystemSe(v93, 11, 0LL);
        servantListViewManager = (int64_t)*v75;
        if ( !*v75 )
          goto LABEL_95;
        ServantListViewItem__SwapLock((ServantListViewItem_o *)servantListViewManager, 0LL);
        goto LABEL_27;
      case 2:
        v97 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v97 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnSelectServant__);
        v98 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v97, v97[4]);
        OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0LL);
        servantListViewManager = (int64_t)*v75;
        if ( !*v75 )
          goto LABEL_95;
        ServantListViewItem__SwapChoice((ServantListViewItem_o *)servantListViewManager, 0LL);
LABEL_27:
        v99 = this->fields.servantListViewManager;
        this->fields.state = 2;
        goto LABEL_28;
      case 3:
        if ( !*v75 )
          goto LABEL_95;
        isEnabled = (*v75)->fields.isEnabled;
        v102 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v102 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenu_OnSelectServant__);
        v103 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v102, v102[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v103, 0, 0LL);
          servantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_95;
          v105 = *(_QWORD *)(servantListViewManager + 120);
          if ( !v105 )
            goto LABEL_41;
          if ( !*v75 )
            goto LABEL_95;
          v106 = (*v75)->fields.userSvtEntity;
          if ( !v106 )
            goto LABEL_95;
          v107 = *(_OWORD *)&v106->fields.id.fields.fakeValue;
          *(_OWORD *)&v183.fields.currentCryptoKey = *(_OWORD *)&v106->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v183.fields.fakeValue = v107;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v61);
          v182 = v183;
          if ( v105 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v182, 0LL) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v75, v104);
            return;
          }
          servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_95;
          servantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_95;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     v105,
                     (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_95;
          servantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_95;
          v112 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v61);
          *(_QWORD *)&v184.fields.currentCryptoKey = klass;
          *(_QWORD *)&v184.fields.fakeValue = monitor;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v184, 0LL);
          if ( !v112 )
            goto LABEL_95;
          v116 = DataMasterBase_object__object__int___GetEntity(
                   v112,
                   servantListViewManager,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v115);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
          v119 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v120 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v121 = sub_1BCA888(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v122);
          servantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
          if ( !v121 )
            goto LABEL_95;
          v130 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = sub_1BCA91C(servantListViewManager, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v121 + 24) )
              goto LABEL_96;
            *(_QWORD *)(v121 + 32) = v130;
            sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 32), v130, v124, v125, v126, v127, v128, v129);
            if ( !v116 )
              goto LABEL_95;
            servantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v116, 0LL);
            v137 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = sub_1BCA91C(servantListViewManager, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v121 + 24) <= 1u )
                goto LABEL_96;
              *(_QWORD *)(v121 + 40) = v137;
              sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 40), v137, v131, v132, v133, v134, v135, v136);
              v138 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                       0LL);
              v139 = Entity[6].klass;
              *(_QWORD *)&v185.fields.fakeValue = Entity[6].monitor;
              v140 = v138;
              *(_QWORD *)&v185.fields.currentCryptoKey = v139;
              servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v185, 0LL);
              if ( !Master_object )
                goto LABEL_95;
              servantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  v140,
                                                  servantListViewManager,
                                                  0LL);
              v147 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = sub_1BCA91C(servantListViewManager, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v121 + 24) <= 2u )
                  goto LABEL_96;
                *(_QWORD *)(v121 + 48) = v147;
                sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 48), v147, v141, v142, v143, v144, v145, v146);
                if ( !*v75 )
                  goto LABEL_95;
                servantListViewManager = (int64_t)(*v75)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_95;
                v148 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (int64_t)Rarity__getRarityType(v148, 0LL);
                v155 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = sub_1BCA91C(servantListViewManager, *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v121 + 24) <= 3u )
                    goto LABEL_96;
                  *(_QWORD *)(v121 + 56) = v155;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 56), v155, v149, v150, v151, v152, v153, v154);
                  if ( !*v75 )
                    goto LABEL_95;
                  servantListViewManager = (int64_t)(*v75)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_95;
                  servantListViewManager = (int64_t)ServantEntity__getClassName(
                                                      (ServantEntity_o *)servantListViewManager,
                                                      0LL);
                  v162 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = sub_1BCA91C(
                                                   servantListViewManager,
                                                   *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v121 + 24) <= 4u )
                      goto LABEL_96;
                    *(_QWORD *)(v121 + 64) = v162;
                    sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 64), v162, v156, v157, v158, v159, v160, v161);
                    servantListViewManager = (int64_t)*v75;
                    if ( !*v75 )
                      goto LABEL_95;
                    servantListViewManager = ServantListViewItem__get_SvtId(
                                               (ServantListViewItem_o *)servantListViewManager,
                                               0LL);
                    if ( !*v75 )
                      goto LABEL_95;
                    v163 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v75)->fields.userSvtEntity;
                    if ( !v163 )
                      goto LABEL_95;
                    v164 = servantListViewManager;
                    v165 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v163[6], 0LL);
                    servantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v164,
                                                        v165,
                                                        0LL);
                    v172 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = sub_1BCA91C(
                                                     servantListViewManager,
                                                     *(_QWORD *)(*(_QWORD *)v121 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v121 + 24) > 5u )
                      {
                        *(_QWORD *)(v121 + 72) = v172;
                        sub_1BCA784((PartyOrganizationUtility_o *)(v121 + 72), v172, v166, v167, v168, v169, v170, v171);
                        v173 = System_String__Format_62415728(v120, (System_Object_array *)v121, 0LL);
                        v174 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v175 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v180 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v177,
                                                                        v178,
                                                                        v179);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v180,
                          (Il2CppObject *)v59,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v61);
                        if ( !Instance )
                          goto LABEL_95;
                        CommonUI__OpenConfirmDialog_30766228(
                          (CommonUI_o *)Instance,
                          v119,
                          v173,
                          v174,
                          v175,
                          v180,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_96:
                      sub_1BCAA44(servantListViewManager, v61);
                    }
                  }
                }
              }
            }
          }
          v181 = sub_1BCAA60();
          sub_1BCA908(v181, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v103, 2, 0LL);
        this->fields.state = 2;
        v99 = this->fields.servantListViewManager;
LABEL_28:
        v100 = (ServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantListViewManager_CallbackFunc_TypeInfo,
                                                          v94,
                                                          v95,
                                                          v96);
        ServantListViewManager_CallbackFunc___ctor(
          v100,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v99 )
          goto LABEL_95;
        ServantListViewManager__SetMode(v99, 2, v100, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t state; // w8
  const MethodInfo *v14; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v17; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20

  if ( (byte_4B124D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, callback);
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndOpen__, v11, v12);
    byte_4B124D9 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
        (int64_t)callback,
        (int64_t)callback,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        sub_1BCAA3C(0LL, v19);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v20);
      this->fields.state = 1;
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v24, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v14);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v17);
  }
}


void __fastcall CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B124E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B124E9 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userSvtEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.dispLimitCount, 0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(userSvtEntity->fields.iconLimitCount, 0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
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
  int32_t v6; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  bool v73; // w29
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  __int64 v76; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v78; // w25
  __int64 v79; // x1
  __int64 v80; // x2
  LocalizationManager_c *v81; // x0
  float *static_fields; // x8
  float v83; // s10
  float v84; // s11
  float v85; // s8
  float v86; // s9
  struct LocalizationManager_StaticFields *v87; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v93; // x27
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  EventUpValSetupInfo_o *v97; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v99; // x28
  Il2CppObject *v100; // x29
  Il2CppObject *v101; // x0
  float v102; // s3
  float v103; // s2
  float v104; // s1
  float v105; // s0
  __int64 v106; // x1
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v108; // x28
  Il2CppObject *v109; // x29
  Il2CppObject *v110; // x0
  float v111; // s3
  float v112; // s2
  float v113; // s1
  float v114; // s0
  __int64 v115; // x1
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v117; // x27
  __int64 v118; // x1
  __int64 v119; // x2
  Il2CppObject *v120; // x25
  BalanceConfig_c *v121; // x0
  Il2CppObject *v122; // x0
  __int64 *v123; // x8
  System_String_o **v124; // x8
  bool v125; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v128; // x8
  System_String_o **v129; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v131; // w0
  __int64 *v132; // x8
  System_String_o **v133; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v135; // w0
  int32_t v136; // w1
  const MethodInfo *v137; // x3
  System_String_o **v138; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v140; // w0
  __int64 *v141; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v143; // w0
  __int64 *v144; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v146; // w0
  __int64 *v147; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v149; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v151; // x21
  UILabel_o *v152; // x21
  UILabel_o *v153; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  ServantListViewManager_CallbackFunc_o *v158; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v160; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v162; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = modeKind;
  if ( (byte_4B124DB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind, *(_QWORD *)&modeKind);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnSelectServant__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v17, v18);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v19, v20);
    sub_1BCA7E0(&int_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&StringLiteral_17747/*"btn_txt_craftessence_off"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17787/*"btn_txt_servant_off"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17743/*"btn_txt_cc_off"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_11764/*"SERVANT_LIST_EXPLANATION_STATUS"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_17744/*"btn_txt_cc_on"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_17788/*"btn_txt_servant_on"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_17834/*"button_infocheck_unreg"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_17748/*"btn_txt_craftessence_on"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_17833/*"button_infocheck_reg"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v71, v72);
    byte_4B124DB = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v73 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_148;
  v78 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v79, v80);
    byte_4B11133 = 1;
  }
  v81 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v79);
    v81 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v81->static_fields;
  v84 = static_fields[20];
  v83 = static_fields[21];
  v86 = static_fields[22];
  v85 = static_fields[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v79, v80);
    v81 = LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !v81->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v81, v79);
    v81 = LocalizationManager_TypeInfo;
  }
  v87 = v81->static_fields;
  r = v87->selectEffectColor.fields.r;
  g = v87->selectEffectColor.fields.g;
  b = v87->selectEffectColor.fields.b;
  a = v87->selectEffectColor.fields.a;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v160 = v73;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_148;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v93 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v97 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v94, v95, v96);
  EventUpValSetupInfo___ctor_39629568(v97, v93, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v99 = LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v162 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v162);
  if ( !SelfUserGame )
    goto LABEL_148;
  v100 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_62415592(v99, v100, v101, 0LL);
  if ( !servantTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  v102 = v85;
  v103 = v86;
  v104 = v83;
  v105 = v84;
  if ( !tabKind )
  {
    v102 = a;
    v103 = b;
    v104 = g;
    v105 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v105, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v106);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v162 = servantEquipSum[0];
  v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_62415592(v108, v109, v110, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v111 = v85;
  v112 = v86;
  v113 = v83;
  v114 = v84;
  if ( tabKind == 1 )
  {
    v111 = a;
    v112 = b;
    v113 = g;
    v114 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v114, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v115);
  v117 = LocalizationManager__Get((System_String_o *)StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v162 = v78;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v162);
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v118, v119);
    byte_4B112D7 = 1;
  }
  v121 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v118);
    v121 = BalanceConfig_TypeInfo;
  }
  svtKeep = v121->static_fields->CommandCodeFrameMax;
  v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_62415592(v117, v120, v122, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_148;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v85 = a;
    v86 = b;
    v83 = g;
    v84 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  v164.fields.r = v84;
  v164.fields.g = v83;
  v164.fields.b = v86;
  v164.fields.a = v85;
  UILabel__set_effectColor((UILabel_o *)Instance, v164, 0LL);
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
  v123 = &StringLiteral_17788/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v123 = &StringLiteral_17787/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v123, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v124 = (System_String_o **)(tabKind ? &StringLiteral_17649/*"btn_bg_12"*/ : &StringLiteral_17651/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v124, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  v125 = !v160 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_148;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v125, 0LL);
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
  v128 = &StringLiteral_17748/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v128 = &StringLiteral_17747/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v128, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v129 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v129, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_148;
  v131 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v131, v125, 0LL);
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
  v132 = &StringLiteral_17744/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v132 = &StringLiteral_17743/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v132, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v133 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v133, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_148;
  v135 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v135, v125, 0LL);
  if ( !v160 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v136 = 3;
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
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v97, 0LL);
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
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v125, 0LL);
      }
      if ( v160 || isInit )
        goto LABEL_95;
LABEL_94:
      if ( v6 == this->fields.modeKind )
        goto LABEL_140;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v136 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v136, v97, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  v6 = CharaGraphListMenu__HidePushButton(this, v6, v160 || isInit, v137);
  if ( !v160 && !isInit )
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 0, 0LL);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v138 = (System_String_o **)&StringLiteral_17833/*"button_infocheck_reg"*/;
  if ( v6 )
    v138 = (System_String_o **)&StringLiteral_17834/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v138, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_148;
  v140 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v140, v125, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 1, 0LL);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v141 = &StringLiteral_17827/*"button_alllock_reg"*/;
  if ( v6 != 1 )
    v141 = &StringLiteral_17828/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v141, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_148;
  v143 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v143, v125, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 2, 0LL);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v144 = &StringLiteral_17825/*"button_allchoice_reg"*/;
  if ( v6 != 2 )
    v144 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v144, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_148;
  v146 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v146, v125, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 3, 0LL);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v147 = &StringLiteral_17839/*"button_push_reg"*/;
  if ( v6 != 3 )
    v147 = &StringLiteral_17840/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v147, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v160 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_148;
  v149 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v149, v125, 0LL);
  switch ( v6 )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11764/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_148;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      v6 = 0;
      break;
    case 1:
      v151 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v151 )
        goto LABEL_148;
      UILabel__set_text(v151, (System_String_o *)Instance, 0LL);
      v6 = 1;
      break;
    case 2:
      v152 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v152 )
        goto LABEL_148;
      UILabel__set_text(v152, (System_String_o *)Instance, 0LL);
      v6 = 2;
      break;
    case 3:
      v153 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v153 )
        goto LABEL_148;
      UILabel__set_text(v153, (System_String_o *)Instance, 0LL);
      v6 = 3;
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
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, v6 == 3, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    v158 = (ServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                      ServantListViewManager_CallbackFunc_TypeInfo,
                                                      v155,
                                                      v156,
                                                      v157);
    ServantListViewManager_CallbackFunc___ctor(
      v158,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_148;
    ServantListViewManager__SetMode(servantListViewManager, 2, v158, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_33277836((ServantListViewManager_o *)Instance, 1, 0LL);
  }
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = v6;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, 0LL),
        !scaleChangeTabSprite) )
  {
LABEL_148:
    sub_1BCAA3C(Instance, v76);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
}


void __fastcall CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t v21; // w21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  __int64 v26; // x1
  System_Int64_array *v27; // x1
  System_Int64_array *v28; // x2
  bool v29; // w3
  bool v30; // w4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t tabKind; // w21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  NetworkManager_ResultCallbackFunc_o *v41; // x20
  __int64 v42; // x1
  System_Int64_array *v43; // x1
  System_Int64_array *v44; // x2
  bool v45; // w4
  bool v46; // w5
  System_Int64_array *v47; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B124E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenu_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B124E3 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v47 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v47, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      tabKind = this->fields.tabKind;
      v41 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v38,
                                                     v39,
                                                     v40);
      NetworkManager_ResultCallbackFunc___ctor(
        v41,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v41,
                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v28 = v47;
          v27 = choiceList;
          v30 = 1;
          v29 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1BCAA3C(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v41,
                                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v44 = v47;
      v43 = choiceList;
      v46 = 1;
      v45 = 0;
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      v21 = this->fields.tabKind;
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
      if ( v21 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v25,
                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v28 = unlockList;
          v27 = lockList;
          v29 = 1;
          v30 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v27,
            v28,
            v29,
            v30,
            0LL);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v25,
                                                             (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v44 = unlockList;
      v43 = lockList;
      v45 = 1;
      v46 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v43, v44, 0, v45, v46, 0LL);
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

  if ( (byte_4B124D7 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B124D7 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B124D8 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B124D8 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1BCACFC(v7);
  CharaGraphListMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0838C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08344;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B124EC & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B124EC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A083F0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A083A8;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B124ED & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B124ED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__0(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  CommonUI_o *v17; // x20
  System_Action_o *_9__1; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  struct CharaGraphListMenu_o *_4__this; // x20
  struct ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2

  if ( (byte_4B124EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&ServantListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_CharaGraphListMenu_OnSelectServant__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v11, v12);
    byte_4B124EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
    }
    if ( v17 )
    {
      CommonUI__CloseConfirmDialog_30766896(v17, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v29 = (ServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                   ServantListViewManager_CallbackFunc_TypeInfo,
                                                   v14,
                                                   v25,
                                                   v26);
  ServantListViewManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    v30);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  ServantListViewManager__SetMode_33277836(servantListViewManager, 2, v37);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  CharaGraphListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}