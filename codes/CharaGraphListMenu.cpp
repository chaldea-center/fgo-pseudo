void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA92F & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49FA92F = 1;
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
    sub_1B64814(p_callbackFunc, 0, n, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_32322908(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_32322908(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v9; // x4
  System_Action_o *v10; // x20

  if ( (byte_49FA91E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_CharaGraphListMenu_EndClose__, v6);
    byte_49FA91E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v9);
  v10 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
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

  if ( (byte_49FA92E & 1) == 0 )
  {
    sub_1B64870(&ServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B64870(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_49FA92E = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v6 = this->fields.servantListViewManager,
        v7 = (ServantListViewManager_CallbackFunc_o *)sub_1B64ABC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_1B64ACC(servantListViewManager, result);
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
      sub_1B64ACC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
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
      sub_1B64ACC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
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
      sub_1B64ACC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
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
      sub_1B64ACC(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
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
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v3; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v5; // x20
  ServantListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_49FA92B & 1) == 0 )
  {
    sub_1B64870(&ServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnSelectServant__, v3);
    byte_49FA92B = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1B64ABC(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_1B64ACC(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v5, 2, v6, 0LL);
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
    sub_1B64814(p_callbackFunc, 0, v2, v3);
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
  Il2CppObject *Instance; // x21
  System_Action_o *v14; // x0
  bool v15; // cc
  System_Action_o *v16; // x20
  __int64 *v17; // x8

  if ( (byte_49FA929 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B64870(&Method_CharaGraphListMenu_EndCloseShowServant__, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_49FA929 = 1;
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
      sub_1B64ACC(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  v15 = questId < 1;
  v16 = v14;
  if ( v15 )
    v17 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v17 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v14, (Il2CppObject *)this, *v17, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_49FA92A & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_CharaGraphListMenu_EndCloseShowServant__, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49FA92A = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64ACC(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_32354936(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
    sub_1B64814(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1B64ACC(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1B64ACC(0LL, method);
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
      sub_1B64814(p_callbackFunc, 0, v2, v3);
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
      sub_1B64814(p_callbackFunc, 0, v2, v3);
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

  if ( (byte_49FA92C & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_OnClickScaleChange__, method);
    byte_49FA92C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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
      sub_1B64ACC(servantListViewManager, v5);
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

  if ( (byte_49FA925 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabChoice__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabChoice__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA925 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v10);
        CharaGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49FA922 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabCommandCode__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA922 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64ACC(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v8);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v11);
      CharaGraphListMenu__StatusRequest(this, v10, v12);
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

  if ( (byte_49FA924 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabLock__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabLock__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA924 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v10);
        CharaGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_49FA926 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabPush__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabPush__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA926 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49FA920 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabServant__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabServant__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA920 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64ACC(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabServant__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v8);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v11);
      CharaGraphListMenu__StatusRequest(this, v10, v12);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FA921 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabServantEquip__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA921 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64ACC(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B64854(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v8);
    }
    else
    {
      v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v10);
      CharaGraphListMenu__StatusRequest(this, v9, v11);
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

  if ( (byte_49FA923 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndClickTabStatus__, method);
    sub_1B64870(&Method_CharaGraphListMenu_OnClickTabStatus__, v3);
    sub_1B64870(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49FA923 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B64854(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64ABC(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  int32_t tabKind; // w22
  ServantListViewItem_o *v47; // x8
  CommonUI_o *v48; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v50; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  ServantListViewManager_o *v56; // x19
  ServantListViewManager_CallbackFunc_c *v57; // x0
  ServantListViewManager_CallbackFunc_o *v58; // x20
  _BOOL4 isEnabled; // w23
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  const MethodInfo *v62; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *v64; // x8
  __int128 v65; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v67; // x22
  ServantStatusDialog_ResultDelegate_o *v68; // x22
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v70; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v73; // x25
  Il2CppObject *Master_object; // x21
  int32_t v75; // w22
  int32_t v76; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v77; // x8
  int32_t v78; // w22
  int32_t v79; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v81; // x21
  System_String_o *v82; // x22
  __int64 v83; // x23
  int32_t Rarity; // w26
  int32_t v85; // w2
  int32_t v86; // w3
  ServantListViewManager_o *v87; // x26
  int32_t v88; // w2
  int32_t v89; // w3
  ServantListViewManager_o *v90; // x26
  int32_t v91; // w2
  int32_t v92; // w3
  ServantListViewManager_o *v93; // x25
  int32_t v94; // w0
  int32_t v95; // w2
  int32_t v96; // w3
  ServantListViewManager_o *v97; // x25
  int32_t v98; // w2
  int32_t v99; // w3
  ServantListViewManager_o *v100; // x25
  int32_t v101; // w2
  int32_t v102; // w3
  ServantListViewManager_o *v103; // x20
  System_String_o *v104; // x20
  System_String_o *v105; // x22
  System_String_o *v106; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v108; // x25
  __int64 v109; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_49FA928 & 1) == 0 )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&ServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B64870(&Method_CharaGraphListMenu_EndShowServantEquip__, v8);
    sub_1B64870(&Method_CharaGraphListMenu_EndShowServant__, v9);
    sub_1B64870(&Method_CharaGraphListMenu_OnSelectServant__, v10);
    sub_1B64870(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1B64870(&DataManager_TypeInfo, v15);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B64870(&ServantStatusDialog_EndDelegate_TypeInfo, v18);
    sub_1B64870(&LocalizationManager_TypeInfo, v19);
    sub_1B64870(&object___TypeInfo, v20);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B64870(&Rarity_TypeInfo, v23);
    sub_1B64870(&ServantStatusDialog_ResultDelegate_TypeInfo, v24);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B64870(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v27);
    sub_1B64870(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v28);
    sub_1B64870(&StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v29);
    sub_1B64870(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v30);
    sub_1B64870(&StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v31);
    sub_1B64870(&StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v32);
    byte_49FA928 = 1;
  }
  v33 = sub_1B64ABC(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_97;
  *(_QWORD *)(v33 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)this, v36, v37);
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
    *(_QWORD *)(v33 + 24) = Item;
    v41 = (ServantListViewItem_o **)(v33 + 24);
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)Item, v38, v39);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v42, v43);
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
        v44 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v44 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnSelectServant__);
        v45 = (System_Reflection_MethodBase_o *)sub_1B64854(v44, v44[4]);
        OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v47 = *v41;
        v48 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v47 )
          {
            userCommandCodeEntity = v47->fields.userCommandCodeEntity;
            v50 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v50,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v48 )
            {
              CommonUI__OpenServantStatusDialog_30359664(v48, 0, userCommandCodeEntity, v50, 0LL, 0LL);
              return;
            }
          }
LABEL_97:
          sub_1B64ACC(servantListViewManager, v35);
        }
        if ( !v47 )
          goto LABEL_97;
        userSvtEntity = v47->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v67 = (ServantStatusDialog_EndDelegate_o *)sub_1B64ABC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v67,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v48 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30357500(v48, 0, userSvtEntity, v67, 0LL);
        }
        else
        {
          v68 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64ABC(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v68,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v48 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30357964(v48, 0, userSvtEntity, v68, 0, 0LL);
        }
        return;
      case 1:
        v52 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v52 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnSelectServant__);
        v53 = (System_Reflection_MethodBase_o *)sub_1B64854(v52, v52[4]);
        OverwriteAssetSoundName__PlaySystemSe(v53, 11, 0LL);
        if ( !*v41 )
          goto LABEL_97;
        (*v41)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v54 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v54 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnSelectServant__);
        v55 = (System_Reflection_MethodBase_o *)sub_1B64854(v54, v54[4]);
        OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
        if ( !*v41 )
          goto LABEL_97;
        (*v41)->fields.isSwapChoice ^= 1u;
LABEL_27:
        this->fields.state = 2;
        v56 = this->fields.servantListViewManager;
        v57 = ServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_28;
      case 3:
        if ( !*v41 )
          goto LABEL_97;
        isEnabled = (*v41)->fields.isEnabled;
        v60 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v60 = (_QWORD *)sub_1B64888(Method_CharaGraphListMenu_OnSelectServant__);
        v61 = (System_Reflection_MethodBase_o *)sub_1B64854(v60, v60[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0LL);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_97;
          dragParentObject = (int64_t)servantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_41;
          if ( !*v41 )
            goto LABEL_97;
          v64 = (*v41)->fields.userSvtEntity;
          if ( !v64 )
            goto LABEL_97;
          v65 = *(_OWORD *)&v64->fields.id.fields.fakeValue;
          *(_OWORD *)&v111.fields.currentCryptoKey = *(_OWORD *)&v64->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v111.fields.fakeValue = v65;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v110 = v111;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v110, 0LL) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v41, v62);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dragParentObject,
                     (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v70 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v112.fields.currentCryptoKey = klass;
          *(_QWORD *)&v112.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                 v112,
                                                                 0LL);
          if ( !v70 )
            goto LABEL_97;
          v73 = DataMasterBase_object__object__int___GetEntity(
                  v70,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v75 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                                                                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                 0LL);
          if ( !Master_object )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 v75,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v41 )
            goto LABEL_97;
          v76 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v41, v35);
          if ( !*v41 )
            goto LABEL_97;
          v77 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v41)->fields.userSvtEntity;
          if ( !v77 )
            goto LABEL_97;
          v78 = (int)servantListViewManager;
          v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v77[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v78,
                                         v79,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11843/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11842/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v83 = sub_1B64918(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v83 )
            goto LABEL_97;
          v87 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v83 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v83 + 32) = v87;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 32), (int32_t)v87, v85, v86);
            if ( !v73 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                   (ServantEntity_o *)v73,
                                                                   0LL);
            v90 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v83 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v83 + 40) = v90;
              sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 40), (int32_t)v90, v88, v89);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                     (ServantEntity_o *)v73,
                                                                     v76,
                                                                     -1,
                                                                     0LL);
              v93 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v83 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v83 + 48) = v93;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 48), (int32_t)v93, v91, v92);
                if ( !*v41 )
                  goto LABEL_97;
                servantListViewManager = (ServantListViewManager_o *)(*v41)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_97;
                v94 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v94, 0LL);
                v97 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v83 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v83 + 56) = v97;
                  sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 56), (int32_t)v97, v95, v96);
                  if ( !*v41 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v41)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v100 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v83 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v83 + 64) = v100;
                    sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 64), (int32_t)v100, v98, v99);
                    if ( !*v41 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)(*v41)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v103 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1B649AC(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v83 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v83 + 24) > 5u )
                      {
                        *(_QWORD *)(v83 + 72) = v103;
                        sub_1B64814((ServantStatusBattleListViewItem_o *)(v83 + 72), (int32_t)v103, v101, v102);
                        v104 = System_String__Format_61398084(v82, (System_Object_array *)v83, 0LL);
                        v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11841/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v108 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64ABC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v108,
                          (Il2CppObject *)v33,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( !Instance )
                          goto LABEL_97;
                        CommonUI__OpenConfirmDialog_30346936(
                          (CommonUI_o *)Instance,
                          v81,
                          v104,
                          v105,
                          v106,
                          v108,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_98:
                      sub_1B64AD4(servantListViewManager, v35);
                    }
                  }
                }
              }
            }
          }
          v109 = sub_1B64AF0();
          sub_1B64998(v109, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v61, 2, 0LL);
        this->fields.state = 2;
        v56 = this->fields.servantListViewManager;
        v57 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v58 = (ServantListViewManager_CallbackFunc_o *)sub_1B64ABC(v57);
        ServantListViewManager_CallbackFunc___ctor(
          v58,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v56 )
          goto LABEL_97;
        ServantListViewManager__SetMode(v56, 2, v58, 0LL);
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
  __int64 v7; // x1
  int32_t state; // w8
  const MethodInfo *v9; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_49FA91D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&Method_CharaGraphListMenu_EndOpen__, v7);
    byte_49FA91D = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1B64814(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)callback,
        (int32_t)method);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        sub_1B64ACC(0LL, v14);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v15);
      this->fields.state = 1;
      v16 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v16, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v9);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v12);
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

  if ( (byte_49FA92D & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B64870(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B64870(&NetworkManager_TypeInfo, v7);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FA92D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v51, 0LL);
  v26 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v15->fields.masterLoadThreads;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46184056(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(userSvtEntity->fields.dispLimitCount, 0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(userSvtEntity->fields.iconLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1B64ACC(limitCountSupport, v14);
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
  __int64 v44; // x1
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
  int32_t v115; // w1
  const MethodInfo *v116; // x3
  System_String_o **v117; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v119; // w0
  __int64 *v120; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v122; // w0
  __int64 *v123; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v125; // w0
  __int64 *v126; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v128; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v130; // x21
  UILabel_o *v131; // x21
  UILabel_o *v132; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v134; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v136; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v138; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v140; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FA91F & 1) == 0 )
  {
    sub_1B64870(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_1B64870(&Method_CharaGraphListMenu_OnSelectServant__, v9);
    sub_1B64870(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1B64870(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11);
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1B64870(&EventUpValSetupInfo_TypeInfo, v14);
    sub_1B64870(&int_TypeInfo, v15);
    sub_1B64870(&LocalizationManager_TypeInfo, v16);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64870(&StringLiteral_17502/*"btn_txt_craftessence_off"*/, v18);
    sub_1B64870(&StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v19);
    sub_1B64870(&StringLiteral_17542/*"btn_txt_servant_off"*/, v20);
    sub_1B64870(&StringLiteral_17593/*"button_push_reg"*/, v21);
    sub_1B64870(&StringLiteral_17594/*"button_push_unreg"*/, v22);
    sub_1B64870(&StringLiteral_17498/*"btn_txt_cc_off"*/, v23);
    sub_1B64870(&StringLiteral_17579/*"button_allchoice_reg"*/, v24);
    sub_1B64870(&StringLiteral_17408/*"btn_bg_12"*/, v25);
    sub_1B64870(&StringLiteral_17582/*"button_alllock_unreg"*/, v26);
    sub_1B64870(&StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v27);
    sub_1B64870(&StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_STATUS"*/, v28);
    sub_1B64870(&StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v29);
    sub_1B64870(&StringLiteral_17499/*"btn_txt_cc_on"*/, v30);
    sub_1B64870(&StringLiteral_17543/*"btn_txt_servant_on"*/, v31);
    sub_1B64870(&StringLiteral_17588/*"button_infocheck_unreg"*/, v32);
    sub_1B64870(&StringLiteral_17410/*"btn_bg_19"*/, v33);
    sub_1B64870(&StringLiteral_3429/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v34);
    sub_1B64870(&StringLiteral_17503/*"btn_txt_craftessence_on"*/, v35);
    sub_1B64870(&StringLiteral_3430/*"CHARA_GRAPH_TAB_SERVANT"*/, v36);
    sub_1B64870(&StringLiteral_17587/*"button_infocheck_reg"*/, v37);
    sub_1B64870(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v38);
    sub_1B64870(&StringLiteral_17581/*"button_alllock_reg"*/, v39);
    sub_1B64870(&StringLiteral_17580/*"button_allchoice_unreg"*/, v40);
    byte_49FA91F = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v41 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_148;
  v46 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F988B )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, v47);
    byte_49F988B = 1;
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
  if ( !byte_49F988C )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, v47);
    v48 = LocalizationManager_TypeInfo;
    byte_49F988C = 1;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v136 = v41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_148;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v60 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
  v61 = (EventUpValSetupInfo_o *)sub_1B64ABC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38597124(v61, v60, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v138 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v138, v64, v65, v66);
  if ( !SelfUserGame )
    goto LABEL_148;
  v70 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v67, v68, v69);
  Instance = (__int64)System_String__Format_61397948(v63, v70, v71, 0LL);
  if ( !servantTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v75, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v138 = servantEquipSum[0];
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v78, v79, v80);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v82, v83, v84);
  Instance = (__int64)System_String__Format_61397948(v77, v81, v85, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v89, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3429/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v138 = v46;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v138, v92, v93, v94);
  if ( !byte_49F9C6B )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, v95);
    byte_49F9C6B = 1;
  }
  v100 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v100 = BalanceConfig_TypeInfo;
  }
  svtKeep = v100->static_fields->CommandCodeFrameMax;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v96, v97, v98);
  Instance = (__int64)System_String__Format_61397948(v91, v99, v101, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  v140.fields.r = v51;
  v140.fields.g = v50;
  v140.fields.b = v53;
  v140.fields.a = v52;
  UILabel__set_effectColor((UILabel_o *)Instance, v140, 0LL);
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
  v102 = &StringLiteral_17543/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v102 = &StringLiteral_17542/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v102, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v103 = (System_String_o **)(tabKind ? &StringLiteral_17408/*"btn_bg_12"*/ : &StringLiteral_17410/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v103, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  v104 = !v136 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v104,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_148;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v104, 0LL);
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
  v107 = &StringLiteral_17503/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v107 = &StringLiteral_17502/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v107, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v108 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17410/*"btn_bg_19"*/ : &StringLiteral_17408/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v108, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_148;
  v110 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v110, v104, 0LL);
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
  v111 = &StringLiteral_17499/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v111 = &StringLiteral_17498/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v111, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v112 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17410/*"btn_bg_19"*/ : &StringLiteral_17408/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v112, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_148;
  v114 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v114, v104, 0LL);
  if ( !v136 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v115 = 3;
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
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v61, 0LL);
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
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v104, 0LL);
      }
      if ( v136 || isInit )
        goto LABEL_95;
LABEL_94:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_140;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v115 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v115, v61, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v136 || isInit, v116);
  if ( !v136 && !isInit )
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
  v117 = (System_String_o **)&StringLiteral_17587/*"button_infocheck_reg"*/;
  if ( modeKind )
    v117 = (System_String_o **)&StringLiteral_17588/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v117, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_148;
  v119 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v119, v104, 0LL);
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
  v120 = &StringLiteral_17581/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v120 = &StringLiteral_17582/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v120, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_148;
  v122 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v122, v104, 0LL);
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
  v123 = &StringLiteral_17579/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v123 = &StringLiteral_17580/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v123, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_148;
  v125 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v125, v104, 0LL);
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
  v126 = &StringLiteral_17593/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v126 = &StringLiteral_17594/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v126, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v136 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_148;
  v128 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v128, v104, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11574/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_148;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v130 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11572/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v130 )
        goto LABEL_148;
      UILabel__set_text(v130, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v131 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v131 )
        goto LABEL_148;
      UILabel__set_text(v131, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v132 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11573/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v132 )
        goto LABEL_148;
      UILabel__set_text(v132, (System_String_o *)Instance, 0LL);
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
    v134 = (ServantListViewManager_CallbackFunc_o *)sub_1B64ABC(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v134,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_148;
    ServantListViewManager__SetMode(servantListViewManager, 2, v134, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_32354936((ServantListViewManager_o *)Instance, 1, 0LL);
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
    sub_1B64ACC(Instance, v44);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w3
  bool v18; // w4
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  System_Int64_array *v23; // x1
  System_Int64_array *v24; // x2
  bool v25; // w4
  bool v26; // w5
  System_Int64_array *v27; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49FA927 & 1) == 0 )
  {
    sub_1B64870(&Method_CharaGraphListMenu_EndStatusSync__, callback);
    sub_1B64870(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_1B64870(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_1B64870(&NetworkManager_TypeInfo, v7);
    sub_1B64870(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49FA927 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v27 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v27, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v19, v20);
      tabKind = this->fields.tabKind;
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v22,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v22,
                                                               (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v16 = v27;
          v15 = choiceList;
          v18 = 1;
          v17 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1B64ACC(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v22,
                                                             (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v24 = v27;
      v23 = choiceList;
      v26 = 1;
      v25 = 0;
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
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = this->fields.tabKind;
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64ABC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v13 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v14,
                                                               (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v16 = unlockList;
          v15 = lockList;
          v17 = 1;
          v18 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v15,
            v16,
            v17,
            v18,
            0LL);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v14,
                                                             (const MethodInfo_2EBCCAC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v24 = unlockList;
      v23 = lockList;
      v25 = 1;
      v26 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v23, v24, 0, v25, v26, 0LL);
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

  if ( (byte_49FA91B & 1) == 0 )
  {
    sub_1B64870(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_49FA91B = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B64D8C(v7);
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

  if ( (byte_49FA91C & 1) == 0 )
  {
    sub_1B64870(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_49FA91C = 1;
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
    v8 = sub_1B9FD60(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B64D8C(v7);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7DD8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7D90;
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
  if ( (byte_49FA930 & 1) == 0 )
  {
    sub_1B64870(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49FA930 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7E3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7DF4;
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
  if ( (byte_49FA931 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, isRequest);
    byte_49FA931 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct CharaGraphListMenu_o *_4__this; // x20
  ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_49FA932 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&ServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B64870(&Method_CharaGraphListMenu_OnSelectServant__, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64870(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v8);
    byte_49FA932 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30347596(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64ACC(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v17 = (ServantListViewManager_CallbackFunc_o *)sub_1B64ABC(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    goto LABEL_12;
  ServantListViewManager__SetMode(servantListViewManager, 2, v17, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64ACC(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}