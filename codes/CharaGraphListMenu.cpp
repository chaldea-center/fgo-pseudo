void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E189 & 1) == 0 )
  {
    sub_1C3B764(&BaseMenu_TypeInfo, method);
    byte_4C1E189 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
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
    sub_1C3B708(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_33851640(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_33851640(
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
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v13; // x4
  System_Action_o *v14; // x20

  if ( (byte_4C1E178 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_CharaGraphListMenu_EndClose__, v10);
    byte_4C1E178 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
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
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v13);
  v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  struct ServantListViewManager_o *v6; // x20
  ServantListViewManager_CallbackFunc_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4C1E188 & 1) == 0 )
  {
    sub_1C3B764(&ServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_4C1E188 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, method),
        v6 = this->fields.servantListViewManager,
        v7 = (ServantListViewManager_CallbackFunc_o *)sub_1C3B9B0(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_1C3B9C0(servantListViewManager, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  ServantListViewManager__SetMode_33855340(v6, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__EndClickTabChoice(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_1C3B9C0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v6);
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
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_1C3B9C0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v6);
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
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_1C3B9C0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v6);
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
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
      sub_1C3B9C0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v6);
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
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  struct ServantListViewManager_o *v6; // x20
  ServantListViewManager_CallbackFunc_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4C1E185 & 1) == 0 )
  {
    sub_1C3B764(&ServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_4C1E185 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, v2),
        v6 = this->fields.servantListViewManager,
        v7 = (ServantListViewManager_CallbackFunc_o *)sub_1C3B9B0(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_1C3B9C0(servantListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  ServantListViewManager__SetMode_33855340(v6, 2, v14);
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
    sub_1C3B708(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  __int64 v11; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x0
  bool v16; // cc
  System_Action_o *v17; // x20
  __int64 *v18; // x8

  if ( (byte_4C1E183 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9);
    sub_1C3B764(&Method_CharaGraphListMenu_EndCloseShowServant__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4C1E183 = 1;
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
      ListViewManager__SortItem((ListViewManager_o *)servantListViewManager, -1, 0, -1, 0LL);
    }
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
LABEL_15:
      sub_1C3B9C0(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  v16 = questId < 1;
  v17 = v15;
  if ( v16 )
    v18 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v18 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v15, (Il2CppObject *)this, *v18, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4C1E184 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_CharaGraphListMenu_EndCloseShowServant__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1E184 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1C3B9C0(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_33855340(servantListViewManager, 3, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
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
    sub_1C3B708(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C3B9C0(pushTabSprite, *(_QWORD *)&modeKind);
  }
  UICommonButton__SetColliderEnable((UICommonButton_o *)pushTabSprite, 0, !isInit, 0LL);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void __fastcall CharaGraphListMenu__Init(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v4; // x0
  const MethodInfo *v5; // x1

  servantListViewManager = (ListViewManager_o *)this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_1C3B9C0(0LL, method);
  ListViewManager__DestroyList(servantListViewManager, 0LL);
  ServantListViewManager__SaveSortInfo(v4, v5);
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
      sub_1C3B708(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1C3B708(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  const MethodInfo *v5; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4C1E186 & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickScaleChange__, method);
    byte_4C1E186 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ChangeIconScale(servantListViewManager, v5),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantListViewManager = (ServantListViewManager_o *)ServantListViewManager__GetScaleButtonSpriteName(
                                                                 servantListViewManager,
                                                                 v5),
          !scaleChangeTabSprite) )
    {
      sub_1C3B9C0(servantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C1E17F & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabChoice__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabChoice__, v3);
    sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v10);
        CharaGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        v13);
      CharaGraphListMenu__StatusRequest(this, v12, v14);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v7);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4C1E17C & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabCommandCode__, v3);
    this = (CharaGraphListMenu_o *)sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17C = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C3B9C0(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v5 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 2, modeKind, 0, v7);
    }
    else
    {
      v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v10);
      CharaGraphListMenu__StatusRequest(v2, v9, v11);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C1E17E & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabLock__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabLock__, v3);
    sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v10);
        CharaGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        v13);
      CharaGraphListMenu__StatusRequest(this, v12, v14);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v7);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C1E180 & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabPush__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabPush__, v3);
    sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E180 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      v8);
    CharaGraphListMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4C1E17A & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabServant__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabServant__, v3);
    this = (CharaGraphListMenu_o *)sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17A = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C3B9C0(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v5 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabServant__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 0, modeKind, 0, v7);
    }
    else
    {
      v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v10);
      CharaGraphListMenu__StatusRequest(v2, v9, v11);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  v2 = this;
  if ( (byte_4C1E17B & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabServantEquip__, v3);
    this = (CharaGraphListMenu_o *)sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17B = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C3B9C0(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v5 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(v2, 0, v7);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v9);
      CharaGraphListMenu__StatusRequest(v2, v8, v10);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C1E17D & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndClickTabStatus__, method);
    sub_1C3B764(&Method_CharaGraphListMenu_OnClickTabStatus__, v3);
    sub_1C3B764(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4C1E17D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C3B9B0(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      v8);
    CharaGraphListMenu__StatusRequest(this, v7, v9);
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
  __int64 v33; // x19
  int64_t servantListViewManager; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v49; // x20
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  int32_t tabKind; // w22
  ServantListViewItem_o *v59; // x8
  CommonUI_o *v60; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v62; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  struct ServantListViewManager_o *v68; // x19
  ServantListViewManager_CallbackFunc_c *v69; // x0
  ServantListViewManager_CallbackFunc_o *v70; // x20
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  const MethodInfo *v77; // x2
  _BOOL4 isEnabled; // w23
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  const MethodInfo *v81; // x2
  int64_t v82; // x22
  struct UserServantEntity_o *v83; // x8
  __int128 v84; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v86; // x22
  ServantStatusDialog_ResultDelegate_o *v87; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v89; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v92; // x26
  Il2CppObject *Master_object; // x24
  System_String_o *v94; // x21
  System_String_o *v95; // x22
  __int64 v96; // x23
  int32_t Rarity; // w27
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x27
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x26
  int32_t v112; // w0
  Il2CppClass *v113; // x8
  int32_t v114; // w25
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  int64_t v121; // x25
  int32_t v122; // w0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x25
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v137; // x8
  int32_t v138; // w20
  int32_t v139; // w0
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  int64_t v146; // x20
  System_String_o *v147; // x20
  System_String_o *v148; // x22
  System_String_o *v149; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v151; // x25
  __int64 v152; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v153; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  if ( (byte_4C1E182 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&ServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_CharaGraphListMenu_EndShowServantEquip__, v8);
    sub_1C3B764(&Method_CharaGraphListMenu_EndShowServant__, v9);
    sub_1C3B764(&Method_CharaGraphListMenu_OnSelectServant__, v10);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1C3B764(&DataManager_TypeInfo, v15);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, v18);
    sub_1C3B764(&LocalizationManager_TypeInfo, v19);
    sub_1C3B764(&object___TypeInfo, v20);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1C3B764(&Rarity_TypeInfo, v23);
    sub_1C3B764(&ServantStatusDialog_ResultDelegate_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1C3B764(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v27);
    sub_1C3B764(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v28);
    sub_1C3B764(&StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, v29);
    sub_1C3B764(&StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, v30);
    sub_1C3B764(&StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, v31);
    sub_1C3B764(&StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v32);
    byte_4C1E182 = 1;
  }
  v33 = sub_1C3B9B0(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_95;
  *(_QWORD *)(v33 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)this, v36, v37, v38, v39, v40, v41);
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
      Item = ServantListViewManager__GetItem((ServantListViewManager_o *)servantListViewManager, n, v42);
    }
    *(_QWORD *)(v33 + 24) = Item;
    v49 = (ServantListViewItem_o **)(v33 + 24);
    sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)Item, (int64_t)v42, v43, v44, v45, v46, v47);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v50, v51, v52, v53, v54, v55);
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
        v56 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v56 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnSelectServant__);
        v57 = (System_Reflection_MethodBase_o *)sub_1C3B748(v56, v56[4]);
        OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v59 = *v49;
        v60 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v59 )
          {
            userCommandCodeEntity = v59->fields.userCommandCodeEntity;
            v62 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v62,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v60 )
            {
              CommonUI__OpenServantStatusDialog_31244504(v60, 0, userCommandCodeEntity, v62, 0LL, 0LL);
              return;
            }
          }
LABEL_95:
          sub_1C3B9C0(servantListViewManager, v35);
        }
        if ( !v59 )
          goto LABEL_95;
        userSvtEntity = v59->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v86 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v86,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v60 )
            goto LABEL_95;
          CommonUI__OpenServantStatusDialog_31242340(v60, 0, userSvtEntity, v86, 0LL);
        }
        else
        {
          v87 = (ServantStatusDialog_ResultDelegate_o *)sub_1C3B9B0(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v87,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v60 )
            goto LABEL_95;
          CommonUI__OpenServantStatusDialog_31242804(v60, 0, userSvtEntity, v87, 0, 0LL);
        }
        return;
      case 1:
        v64 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnSelectServant__);
        v65 = (System_Reflection_MethodBase_o *)sub_1C3B748(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 11, 0, 0LL);
        if ( !*v49 )
          goto LABEL_95;
        (*v49)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v66 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v66 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnSelectServant__);
        v67 = (System_Reflection_MethodBase_o *)sub_1C3B748(v66, v66[4]);
        OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0LL);
        if ( !*v49 )
          goto LABEL_95;
        (*v49)->fields.isSwapChoice ^= 1u;
LABEL_27:
        this->fields.state = 2;
        v68 = this->fields.servantListViewManager;
        v69 = ServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_28;
      case 3:
        if ( !*v49 )
          goto LABEL_95;
        isEnabled = (*v49)->fields.isEnabled;
        v79 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v79 = (_QWORD *)sub_1C3B77C(Method_CharaGraphListMenu_OnSelectServant__);
        v80 = (System_Reflection_MethodBase_o *)sub_1C3B748(v79, v79[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0, 0LL);
          servantListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_95;
          v82 = *(_QWORD *)(servantListViewManager + 120);
          if ( !v82 )
            goto LABEL_41;
          if ( !*v49 )
            goto LABEL_95;
          v83 = (*v49)->fields.userSvtEntity;
          if ( !v83 )
            goto LABEL_95;
          v84 = *(_OWORD *)&v83->fields.id.fields.fakeValue;
          *(_OWORD *)&v154.fields.currentCryptoKey = *(_OWORD *)&v83->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v154.fields.fakeValue = v84;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v153 = v154;
          if ( v82 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v153, 0LL) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v49, v81);
            return;
          }
          servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_95;
          servantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_95;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     v82,
                     (const MethodInfo_329D3A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_95;
          servantListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                              (DataManager_o *)servantListViewManager,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_95;
          v89 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v155.fields.currentCryptoKey = klass;
          *(_QWORD *)&v155.fields.fakeValue = monitor;
          servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v155, 0LL);
          if ( !v89 )
            goto LABEL_95;
          v92 = DataMasterBase_object__object__int___GetEntity(
                  v89,
                  servantListViewManager,
                  (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SUMMON_QP_LIMIT_WARNING_WARNING2"*/, 0LL);
          v96 = sub_1C3B80C(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
          if ( !v96 )
            goto LABEL_95;
          v104 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = sub_1C3B8A0(servantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v96 + 24) )
              goto LABEL_96;
            *(_QWORD *)(v96 + 32) = v104;
            sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 32), v104, v98, v99, v100, v101, v102, v103);
            if ( !v92 )
              goto LABEL_95;
            servantListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v92, 0LL);
            v111 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = sub_1C3B8A0(servantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v96 + 24) <= 1u )
                goto LABEL_96;
              *(_QWORD *)(v96 + 40) = v111;
              sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 40), v111, v105, v106, v107, v108, v109, v110);
              v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                       0LL);
              v113 = Entity[6].klass;
              *(_QWORD *)&v156.fields.fakeValue = Entity[6].monitor;
              v114 = v112;
              *(_QWORD *)&v156.fields.currentCryptoKey = v113;
              servantListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v156, 0LL);
              if ( !Master_object )
                goto LABEL_95;
              servantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                  (ServantLimitImageMaster_o *)Master_object,
                                                  v114,
                                                  servantListViewManager,
                                                  1,
                                                  0LL);
              v121 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = sub_1C3B8A0(servantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v96 + 24) <= 2u )
                  goto LABEL_96;
                *(_QWORD *)(v96 + 48) = v121;
                sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 48), v121, v115, v116, v117, v118, v119, v120);
                if ( !*v49 )
                  goto LABEL_95;
                servantListViewManager = (int64_t)(*v49)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_95;
                v122 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (int64_t)Rarity__getRarityType(v122, 0LL);
                v129 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = sub_1C3B8A0(servantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v96 + 24) <= 3u )
                    goto LABEL_96;
                  *(_QWORD *)(v96 + 56) = v129;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 56), v129, v123, v124, v125, v126, v127, v128);
                  if ( !*v49 )
                    goto LABEL_95;
                  servantListViewManager = (int64_t)(*v49)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_95;
                  servantListViewManager = (int64_t)ServantEntity__getClassName(
                                                      (ServantEntity_o *)servantListViewManager,
                                                      0LL);
                  v136 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = sub_1C3B8A0(servantListViewManager, *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v96 + 24) <= 4u )
                      goto LABEL_96;
                    *(_QWORD *)(v96 + 64) = v136;
                    sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 64), v136, v130, v131, v132, v133, v134, v135);
                    servantListViewManager = (int64_t)*v49;
                    if ( !*v49 )
                      goto LABEL_95;
                    servantListViewManager = ServantListViewItem__get_SvtId(
                                               (ServantListViewItem_o *)servantListViewManager,
                                               v35);
                    if ( !*v49 )
                      goto LABEL_95;
                    v137 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v49)->fields.userSvtEntity;
                    if ( !v137 )
                      goto LABEL_95;
                    v138 = servantListViewManager;
                    v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v137[6], 0LL);
                    servantListViewManager = (int64_t)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                        (ServantLimitImageMaster_o *)Master_object,
                                                        v138,
                                                        v139,
                                                        1,
                                                        0LL);
                    v146 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = sub_1C3B8A0(
                                                     servantListViewManager,
                                                     *(_QWORD *)(*(_QWORD *)v96 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v96 + 24) > 5u )
                      {
                        *(_QWORD *)(v96 + 72) = v146;
                        sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 72), v146, v140, v141, v142, v143, v144, v145);
                        v147 = System_String__Format_63383120(v95, (System_Object_array *)v96, 0LL);
                        v148 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SUMMON_QP_LIMIT_WARNING_WARNING"*/, 0LL);
                        v149 = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SUMMON_QP_LIMIT_WARNING_TITLE2"*/, 0LL);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v151 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v151,
                          (Il2CppObject *)v33,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                          servantListViewManager = (int64_t)BalanceConfig_TypeInfo;
                        }
                        if ( !Instance )
                          goto LABEL_95;
                        CommonUI__OpenConfirmDialog_31232212(
                          (CommonUI_o *)Instance,
                          v94,
                          v147,
                          v148,
                          v149,
                          v151,
                          *(_DWORD *)(*(_QWORD *)(servantListViewManager + 184) + 488LL),
                          *(_DWORD *)(*(_QWORD *)(servantListViewManager + 184) + 500LL),
                          15.0,
                          700,
                          0,
                          480,
                          -162.5,
                          0,
                          0,
                          240,
                          0,
                          0LL);
                        return;
                      }
LABEL_96:
                      sub_1C3B9C8(servantListViewManager, v35);
                    }
                  }
                }
              }
            }
          }
          v152 = sub_1C3B9E4();
          sub_1C3B88C(v152, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0, 0LL);
        this->fields.state = 2;
        v68 = this->fields.servantListViewManager;
        v69 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v70 = (ServantListViewManager_CallbackFunc_o *)sub_1C3B9B0(v69);
        ServantListViewManager_CallbackFunc___ctor(
          v70,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v68 )
          goto LABEL_95;
        v68->fields.callbackFunc = v70;
        sub_1C3B708((PartyOrganizationUtility_o *)&v68->fields.callbackFunc, (int64_t)v70, v71, v72, v73, v74, v75, v76);
        ServantListViewManager__SetMode_33855340(v68, 2, v77);
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
  int32_t state; // w8
  const MethodInfo *v13; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v16; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  System_Action_o *v20; // x20

  if ( (byte_4C1E177 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&Method_CharaGraphListMenu_EndOpen__, v11);
    byte_4C1E177 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1C3B708(
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
        sub_1C3B9C0(0LL, v18);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v19);
      this->fields.state = 1;
      v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v20, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v13);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v16);
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
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4C1E187 & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C1E187 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1C3B9C0(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_SynchronizationContext_o *)v47,
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
  __int64 v40; // x1
  bool v41; // w29
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  const MethodInfo *v44; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v46; // w25
  __int64 v47; // x1
  LocalizationManager_c *v48; // x0
  float *static_fields; // x8
  float v50; // s10
  float v51; // s11
  float v52; // s8
  float v53; // s9
  struct LocalizationManager_StaticFields *v54; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v60; // x27
  EventUpValSetupInfo_o *v61; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v63; // x28
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x29
  Il2CppObject *v71; // x0
  float v72; // s3
  float v73; // s2
  float v74; // s1
  float v75; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v77; // x28
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x29
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x0
  float v86; // s3
  float v87; // s2
  float v88; // s1
  float v89; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v91; // x27
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  Il2CppObject *v99; // x25
  BalanceConfig_c *v100; // x0
  Il2CppObject *v101; // x0
  __int64 *v102; // x8
  System_String_o **v103; // x8
  bool v104; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v107; // x8
  System_String_o **v108; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v110; // w0
  __int64 *v111; // x8
  System_String_o **v112; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v114; // w0
  const MethodInfo *v115; // x2
  const MethodInfo *v116; // x3
  struct ServantListViewManager_o *v117; // x8
  int32_t v118; // w1
  struct ServantListViewManager_o *servantListViewManager; // x8
  const MethodInfo *v120; // x3
  System_String_o **v121; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v123; // w0
  __int64 *v124; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v126; // w0
  __int64 *v127; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v129; // w0
  __int64 *v130; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v132; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v134; // x21
  UILabel_o *v135; // x21
  UILabel_o *v136; // x21
  struct ServantListViewManager_o *v137; // x22
  ServantListViewManager_CallbackFunc_o *v138; // x23
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int32_t v145; // w1
  UISprite_o *scaleChangeTabSprite; // x19
  bool v147; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v149; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C1E179 & 1) == 0 )
  {
    sub_1C3B764(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_1C3B764(&Method_CharaGraphListMenu_OnSelectServant__, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1C3B764(&EventUpValSetupInfo_TypeInfo, v14);
    sub_1C3B764(&int_TypeInfo, v15);
    sub_1C3B764(&LocalizationManager_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1C3B764(&StringLiteral_17909/*"contract"*/, v18);
    sub_1C3B764(&StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/, v19);
    sub_1C3B764(&StringLiteral_17949/*"cp424"*/, v20);
    sub_1C3B764(&StringLiteral_18003/*"csIBM1026"*/, v21);
    sub_1C3B764(&StringLiteral_18004/*"csIBM273"*/, v22);
    sub_1C3B764(&StringLiteral_17905/*"continue_decide"*/, v23);
    sub_1C3B764(&StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/, v24);
    sub_1C3B764(&StringLiteral_17810/*"commandCode/setStatus"*/, v25);
    sub_1C3B764(&StringLiteral_17992/*"critobj01"*/, v26);
    sub_1C3B764(&StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/, v27);
    sub_1C3B764(&StringLiteral_11861/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, v28);
    sub_1C3B764(&StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, v29);
    sub_1C3B764(&StringLiteral_17906/*"continue_input"*/, v30);
    sub_1C3B764(&StringLiteral_17950/*"cp437"*/, v31);
    sub_1C3B764(&StringLiteral_17998/*"csEUCKR"*/, v32);
    sub_1C3B764(&StringLiteral_17812/*"commandCode/unlock"*/, v33);
    sub_1C3B764(&StringLiteral_3489/*"CLOSE_MENU"*/, v34);
    sub_1C3B764(&StringLiteral_17910/*"contretire_win/btn_cancel"*/, v35);
    sub_1C3B764(&StringLiteral_3490/*"CLOSE_NOTICE"*/, v36);
    sub_1C3B764(&StringLiteral_17997/*"csASCII"*/, v37);
    sub_1C3B764(&StringLiteral_3491/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, v38);
    sub_1C3B764(&StringLiteral_17991/*"crimson"*/, v39);
    sub_1C3B764(&StringLiteral_17990/*"criMovie"*/, v40);
    byte_4C1E179 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v41 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_150;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_150;
  v46 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C1CCC2 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, v47);
    byte_4C1CCC2 = 1;
  }
  v48 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v48 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v48->static_fields;
  v51 = static_fields[20];
  v50 = static_fields[21];
  v53 = static_fields[22];
  v52 = static_fields[23];
  if ( !byte_4C1CCC3 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, v47);
    v48 = LocalizationManager_TypeInfo;
    byte_4C1CCC3 = 1;
  }
  if ( !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = LocalizationManager_TypeInfo;
  }
  v54 = v48->static_fields;
  r = v54->selectEffectColor.fields.r;
  g = v54->selectEffectColor.fields.g;
  b = v54->selectEffectColor.fields.b;
  a = v54->selectEffectColor.fields.a;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  v147 = v41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_150;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v60 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_302AB30 *)Method_System_Linq_Enumerable_ToArray_int___);
  v61 = (EventUpValSetupInfo_o *)sub_1C3B9B0(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40351540(v61, v60, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CLOSE_NOTICE"*/, 0LL);
  v149 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v149, v64, v65, v66);
  if ( !SelfUserGame )
    goto LABEL_150;
  v70 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v67, v68, v69);
  Instance = (__int64)System_String__Format_63382984(v63, v70, v71, 0LL);
  if ( !servantTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  v72 = v52;
  v73 = v53;
  v74 = v50;
  v75 = v51;
  if ( !tabKind )
  {
    v72 = a;
    v73 = b;
    v74 = g;
    v75 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v75, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CLOSE_SECRET_TREASURE_DEVICE_QUEST_CLEAR"*/, 0LL);
  v149 = servantEquipSum[0];
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149, v78, v79, v80);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v82, v83, v84);
  Instance = (__int64)System_String__Format_63382984(v77, v81, v85, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v86 = v52;
  v87 = v53;
  v88 = v50;
  v89 = v51;
  if ( tabKind == 1 )
  {
    v86 = a;
    v87 = b;
    v88 = g;
    v89 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v89, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3489/*"CLOSE_MENU"*/, 0LL);
  v149 = v46;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149, v92, v93, v94);
  if ( !byte_4C1CE74 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, v95);
    byte_4C1CE74 = 1;
  }
  v100 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v100 = BalanceConfig_TypeInfo;
  }
  svtKeep = v100->static_fields->CommandCodeFrameMax;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v96, v97, v98);
  Instance = (__int64)System_String__Format_63382984(v91, v99, v101, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_150;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v52 = a;
    v53 = b;
    v50 = g;
    v51 = r;
  }
  if ( !Instance )
    goto LABEL_150;
  v151.fields.r = v51;
  v151.fields.g = v50;
  v151.fields.b = v53;
  v151.fields.a = v52;
  UILabel__set_effectColor((UILabel_o *)Instance, v151, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0LL);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v102 = &StringLiteral_17950/*"cp437"*/;
  if ( tabKind )
    v102 = &StringLiteral_17949/*"cp424"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v102, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v103 = (System_String_o **)(tabKind ? &StringLiteral_17810/*"commandCode/setStatus"*/ : &StringLiteral_17812/*"commandCode/unlock"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v103, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  v104 = !v147 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v104,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_150;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v104, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0LL);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v107 = &StringLiteral_17910/*"contretire_win/btn_cancel"*/;
  if ( tabKind != 1 )
    v107 = &StringLiteral_17909/*"contract"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v107, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v108 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17812/*"commandCode/unlock"*/ : &StringLiteral_17810/*"commandCode/setStatus"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v108, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_150;
  v110 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v110, v104, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0LL);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v111 = &StringLiteral_17906/*"continue_input"*/;
  if ( tabKind != 2 )
    v111 = &StringLiteral_17905/*"continue_decide"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v111, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v112 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17812/*"commandCode/unlock"*/ : &StringLiteral_17810/*"commandCode/setStatus"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v112, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_150;
  v114 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v114, v104, 0LL);
  if ( !v147 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_96;
  switch ( tabKind )
  {
    case 2:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v118 = 3;
      goto LABEL_93;
    case 1:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v118 = 1;
LABEL_93:
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v118, v61, v116);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_150;
      Instance = (__int64)servantListViewManager->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v147 || isInit, v120);
      if ( v147 || isInit )
        goto LABEL_97;
LABEL_96:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_142;
      goto LABEL_97;
    case 0:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v61, v116);
      v117 = this->fields.servantListViewManager;
      if ( !v117 )
        goto LABEL_150;
      Instance = (__int64)v117->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      Instance = (__int64)this->fields.pushTabSprite;
      if ( !Instance )
        goto LABEL_150;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
        Instance,
        1LL,
        *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v104, 0LL);
      break;
  }
  if ( !v147 && !isInit )
    goto LABEL_96;
LABEL_97:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0LL);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v121 = (System_String_o **)&StringLiteral_17997/*"csASCII"*/;
  if ( modeKind )
    v121 = (System_String_o **)&StringLiteral_17998/*"csEUCKR"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v121, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_150;
  v123 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v123, v104, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0LL);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v124 = &StringLiteral_17991/*"crimson"*/;
  if ( modeKind != 1 )
    v124 = &StringLiteral_17992/*"critobj01"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v124, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_150;
  v126 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v126, v104, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0LL);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v127 = &StringLiteral_17989/*"criFsWebInstaller_Create() failed."*/;
  if ( modeKind != 2 )
    v127 = &StringLiteral_17990/*"criMovie"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v127, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_150;
  v129 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v129, v104, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0LL);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v130 = &StringLiteral_18003/*"csIBM1026"*/;
  if ( modeKind != 3 )
    v130 = &StringLiteral_18004/*"csIBM273"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v130, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v147 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_150;
  v132 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v132, v104, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SHOP_SCENE_VOICE_SVTSTORAGE"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_150;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v134 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11859/*"SHOP_SCENE_VOICE_STARTUPSUMMON"*/, 0LL);
      if ( !v134 )
        goto LABEL_150;
      UILabel__set_text(v134, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v135 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11858/*"SHOP_SCENE_VOICE_SPECIAL"*/, 0LL);
      if ( !v135 )
        goto LABEL_150;
      UILabel__set_text(v135, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v136 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11860/*"SHOP_SCENE_VOICE_STONE"*/, 0LL);
      if ( !v136 )
        goto LABEL_150;
      UILabel__set_text(v136, (System_String_o *)Instance, 0LL);
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
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, v115);
    v137 = this->fields.servantListViewManager;
    v138 = (ServantListViewManager_CallbackFunc_o *)sub_1C3B9B0(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v138,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !v137 )
      goto LABEL_150;
    v137->fields.callbackFunc = v138;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&v137->fields.callbackFunc,
      (int64_t)v138,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    v145 = 2;
    Instance = (__int64)v137;
  }
  else
  {
    v145 = 1;
  }
  ServantListViewManager__SetMode_33855340((ServantListViewManager_o *)Instance, v145, v115);
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, v44),
        !scaleChangeTabSprite) )
  {
LABEL_150:
    sub_1C3B9C0(Instance, v44);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
}


void __fastcall CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t v18; // w21
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // x1
  System_Int64_array *v21; // x2
  bool v22; // w3
  bool v23; // w4
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v31; // x20
  System_Int64_array *v32; // x1
  System_Int64_array *v33; // x2
  bool v34; // w4
  bool v35; // w5
  System_Int64_array *v36; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1E181 & 1) == 0 )
  {
    sub_1C3B764(&Method_CharaGraphListMenu_EndStatusSync__, callback);
    sub_1C3B764(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1C3B764(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4C1E181 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v36 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v36, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      tabKind = this->fields.tabKind;
      v31 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v31,
                                                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v21 = v36;
          v20 = choiceList;
          v23 = 1;
          v22 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1C3B9C0(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v31,
                                                             (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v33 = v36;
      v32 = choiceList;
      v35 = 1;
      v34 = 0;
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
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = this->fields.tabKind;
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v18 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v19,
                                                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v21 = unlockList;
          v20 = lockList;
          v22 = 1;
          v23 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v20,
            v21,
            v22,
            v23,
            0LL);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v19,
                                                             (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v33 = unlockList;
      v32 = lockList;
      v34 = 1;
      v35 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v32, v33, 0, v34, v35, 0LL);
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

  if ( (byte_4C1E175 & 1) == 0 )
  {
    sub_1C3B764(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E175 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C3BC80(v7);
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

  if ( (byte_4C1E176 & 1) == 0 )
  {
    sub_1C3B764(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E176 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C3BC80(v7);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A77CB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A77C70;
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
  if ( (byte_4C1E18A & 1) == 0 )
  {
    sub_1C3B764(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4C1E18A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  sub_1C3B708(
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
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A77D1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A77CD4;
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
  if ( (byte_4C1E18B & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isRequest);
    byte_4C1E18B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct CharaGraphListMenu_o *_4__this; // x20
  struct ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2

  if ( (byte_4C1E18C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&ServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1C3B764(&Method_CharaGraphListMenu_OnSelectServant__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v8);
    byte_4C1E18C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_31232440(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v21 = (ServantListViewManager_CallbackFunc_o *)sub_1C3B9B0(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v21;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  ServantListViewManager__SetMode_33855340(servantListViewManager, 2, v28);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}