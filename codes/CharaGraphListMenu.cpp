void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F8840 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8840 = 1;
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
    sub_1B6406C(p_callbackFunc, 0, n, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_32321872(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_32321872(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v9; // x4
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_49F882F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_CharaGraphListMenu_EndClose__, v6);
    byte_49F882F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v9);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  ServantListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_49F883F & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_49F883F = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v6 = this->fields.servantListViewManager,
        v9 = (ServantListViewManager_CallbackFunc_o *)sub_1B64314(ServantListViewManager_CallbackFunc_TypeInfo, v7, v8),
        ServantListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_1B64324(servantListViewManager);
  }
  ServantListViewManager__SetMode(v6, 2, v9, 0LL);
}


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
      sub_1B64324(servantListViewManager);
    }
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
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
      sub_1B64324(servantListViewManager);
    }
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v3);
}


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
      sub_1B64324(servantListViewManager);
    }
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
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
      sub_1B64324(servantListViewManager);
    }
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
  __int64 v6; // x1
  __int64 v7; // x2
  ServantListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_49F883C & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnSelectServant__, v3);
    byte_49F883C = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v5 = this->fields.servantListViewManager,
        v8 = (ServantListViewManager_CallbackFunc_o *)sub_1B64314(ServantListViewManager_CallbackFunc_TypeInfo, v6, v7),
        ServantListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_1B64324(servantListViewManager);
  }
  ServantListViewManager__SetMode(v5, 2, v8, 0LL);
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
    sub_1B6406C(p_callbackFunc, 0, v2, v3);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x0
  bool v17; // cc
  System_Action_o *v18; // x20
  __int64 *v19; // x8

  if ( (byte_49F883A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B640C8(&Method_CharaGraphListMenu_EndCloseShowServant__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_49F883A = 1;
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
      sub_1B64324(servantListViewManager);
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  v17 = questId < 1;
  v18 = v16;
  if ( v17 )
    v19 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v19 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v16, (Il2CppObject *)this, *v19, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v18, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  if ( (byte_49F883B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_CharaGraphListMenu_EndCloseShowServant__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F883B = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1B64324(servantListViewManager);
    }
    ServantListViewManager__SetMode_32353900(servantListViewManager, 3, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
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
    sub_1B6406C(p_requedstCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))requedstCallback->fields.m_target)(
      requedstCallback->fields.original_method_info,
      1LL,
      *(_QWORD *)&requedstCallback->fields.extra_arg);
  }
}


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
    sub_1B64324(pushTabSprite);
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
    sub_1B64324(0LL);
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
      sub_1B6406C(p_callbackFunc, 0, v2, v3);
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
      sub_1B6406C(p_callbackFunc, 0, v2, v3);
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
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_49F883D & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickScaleChange__, method);
    byte_49F883D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
      sub_1B64324(servantListViewManager);
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
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_49F8836 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabChoice__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabChoice__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8836 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v12);
        CharaGraphListMenu__StatusRequest(this, v11, v13);
        return;
      }
      v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        v15);
      CharaGraphListMenu__StatusRequest(this, v14, v16);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v9);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F8833 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabCommandCode__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8833 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64324(0LL);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v9);
    }
    else
    {
      v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v8,
                                                          modeKind);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        v12);
      CharaGraphListMenu__StatusRequest(this, v11, v13);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_49F8835 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabLock__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabLock__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8835 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v12);
        CharaGraphListMenu__StatusRequest(this, v11, v13);
        return;
      }
      v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        v15);
      CharaGraphListMenu__StatusRequest(this, v14, v16);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v9);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8837 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabPush__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabPush__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8837 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                       CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                       v7,
                                                       v8);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      v10);
    CharaGraphListMenu__StatusRequest(this, v9, v11);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F8831 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabServant__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabServant__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8831 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64324(0LL);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabServant__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v9);
    }
    else
    {
      v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v8,
                                                          modeKind);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        v12);
      CharaGraphListMenu__StatusRequest(this, v11, v13);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F8832 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabServantEquip__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8832 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64324(0LL);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    v6 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v9);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v8,
                                                          v9);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        v11);
      CharaGraphListMenu__StatusRequest(this, v10, v12);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F8834 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndClickTabStatus__, method);
    sub_1B640C8(&Method_CharaGraphListMenu_OnClickTabStatus__, v3);
    sub_1B640C8(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_49F8834 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                       CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                       v7,
                                                       v8);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      v10);
    CharaGraphListMenu__StatusRequest(this, v9, v11);
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
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  int32_t tabKind; // w22
  __int64 v46; // x1
  __int64 v47; // x2
  ServantListViewItem_o *v48; // x8
  CommonUI_o *v49; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v51; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  ServantListViewManager_o *v59; // x19
  ServantListViewManager_CallbackFunc_c *v60; // x0
  ServantListViewManager_CallbackFunc_o *v61; // x20
  _BOOL4 isEnabled; // w23
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *v67; // x8
  __int128 v68; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v70; // x22
  ServantStatusDialog_ResultDelegate_o *v71; // x22
  Il2CppObject *Entity; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v73; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v76; // x25
  Il2CppObject *Master_object; // x21
  int32_t v78; // w22
  const MethodInfo *v79; // x1
  int32_t v80; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v81; // x8
  int32_t v82; // w22
  int32_t v83; // w0
  int32_t ServantLimitCountSealAfter; // w24
  System_String_o *v85; // x21
  System_String_o *v86; // x22
  __int64 v87; // x23
  int32_t Rarity; // w26
  __int64 v89; // x1
  int32_t v90; // w2
  int32_t v91; // w3
  ServantListViewManager_o *v92; // x26
  int32_t v93; // w2
  int32_t v94; // w3
  ServantListViewManager_o *v95; // x26
  int32_t v96; // w2
  int32_t v97; // w3
  ServantListViewManager_o *v98; // x25
  int32_t v99; // w0
  int32_t v100; // w2
  int32_t v101; // w3
  ServantListViewManager_o *v102; // x25
  int32_t v103; // w2
  int32_t v104; // w3
  ServantListViewManager_o *v105; // x25
  int32_t v106; // w2
  int32_t v107; // w3
  ServantListViewManager_o *v108; // x20
  System_String_o *v109; // x20
  System_String_o *v110; // x22
  System_String_o *v111; // x23
  Il2CppObject *Instance; // x24
  __int64 v113; // x1
  __int64 v114; // x2
  CommonConfirmDialog_ClickDelegate_o *v115; // x25
  __int64 v116; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v118; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16

  if ( (byte_49F8839 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_CharaGraphListMenu_EndShowServantEquip__, v8);
    sub_1B640C8(&Method_CharaGraphListMenu_EndShowServant__, v9);
    sub_1B640C8(&Method_CharaGraphListMenu_OnSelectServant__, v10);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v16);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v17);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v18);
    sub_1B640C8(&LocalizationManager_TypeInfo, v19);
    sub_1B640C8(&object___TypeInfo, v20);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B640C8(&Rarity_TypeInfo, v23);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v27);
    sub_1B640C8(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v29);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v30);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v31);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v32);
    byte_49F8839 = 1;
  }
  v33 = sub_1B64314(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_97;
  *(_QWORD *)(v33 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)this, v35, v36);
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
    v40 = (ServantListViewItem_o **)(v33 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)Item, v37, v38);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v41, v42);
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
        v43 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v43 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnSelectServant__);
        v44 = (System_Reflection_MethodBase_o *)sub_1B640AC(v43, v43[4]);
        OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v48 = *v40;
        v49 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v48 )
          {
            userCommandCodeEntity = v48->fields.userCommandCodeEntity;
            v51 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v46, v47);
            ServantStatusDialog_EndDelegate___ctor(
              v51,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v49 )
            {
              CommonUI__OpenServantStatusDialog_30357696(v49, 0, userCommandCodeEntity, v51, 0LL, 0LL);
              return;
            }
          }
LABEL_97:
          sub_1B64324(servantListViewManager);
        }
        if ( !v48 )
          goto LABEL_97;
        userSvtEntity = v48->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v70 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v46, v47);
          ServantStatusDialog_EndDelegate___ctor(
            v70,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v49 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30355532(v49, 0, userSvtEntity, v70, 0LL);
        }
        else
        {
          v71 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(
                                                          ServantStatusDialog_ResultDelegate_TypeInfo,
                                                          v46,
                                                          v47);
          ServantStatusDialog_ResultDelegate___ctor(
            v71,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v49 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_30355996(v49, 0, userSvtEntity, v71, 0, 0LL);
        }
        return;
      case 1:
        v53 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v53 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnSelectServant__);
        v54 = (System_Reflection_MethodBase_o *)sub_1B640AC(v53, v53[4]);
        OverwriteAssetSoundName__PlaySystemSe(v54, 11, 0LL);
        if ( !*v40 )
          goto LABEL_97;
        (*v40)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v57 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnSelectServant__);
        v58 = (System_Reflection_MethodBase_o *)sub_1B640AC(v57, v57[4]);
        OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0LL);
        if ( !*v40 )
          goto LABEL_97;
        (*v40)->fields.isSwapChoice ^= 1u;
LABEL_27:
        this->fields.state = 2;
        v59 = this->fields.servantListViewManager;
        v60 = ServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_28;
      case 3:
        if ( !*v40 )
          goto LABEL_97;
        isEnabled = (*v40)->fields.isEnabled;
        v63 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1B640E0(Method_CharaGraphListMenu_OnSelectServant__);
        v64 = (System_Reflection_MethodBase_o *)sub_1B640AC(v63, v63[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
          if ( !servantListViewManager )
            goto LABEL_97;
          dragParentObject = (int64_t)servantListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_41;
          if ( !*v40 )
            goto LABEL_97;
          v67 = (*v40)->fields.userSvtEntity;
          if ( !v67 )
            goto LABEL_97;
          v68 = *(_OWORD *)&v67->fields.id.fields.fakeValue;
          *(_OWORD *)&v118.fields.currentCryptoKey = *(_OWORD *)&v67->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v118.fields.fakeValue = v68;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v117 = v118;
          if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v117, 0LL) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v40, v65);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dragParentObject,
                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v73 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v119.fields.currentCryptoKey = klass;
          *(_QWORD *)&v119.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 v119,
                                                                 0LL);
          if ( !v73 )
            goto LABEL_97;
          v76 = DataMasterBase_object__object__int___GetEntity(
                  v73,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                  0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                 (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
                                                                 0LL);
          if ( !Master_object )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 (ServantLimitImageMaster_o *)Master_object,
                                                                 v78,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v40 )
            goto LABEL_97;
          v80 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v40, v79);
          if ( !*v40 )
            goto LABEL_97;
          v81 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v40)->fields.userSvtEntity;
          if ( !v81 )
            goto LABEL_97;
          v82 = (int)servantListViewManager;
          v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v81[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)Master_object,
                                         v82,
                                         v83,
                                         0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v85 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v87 = sub_1B64170(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v87 )
            goto LABEL_97;
          v92 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v87 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v87 + 32) = v92;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)v92, v90, v91);
            if ( !v76 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                   (ServantEntity_o *)v76,
                                                                   0LL);
            v95 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v87 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v87 + 40) = v95;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 40), (int32_t)v95, v93, v94);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                     (ServantEntity_o *)v76,
                                                                     v80,
                                                                     -1,
                                                                     0LL);
              v98 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v87 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v87 + 48) = v98;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 48), (int32_t)v98, v96, v97);
                if ( !*v40 )
                  goto LABEL_97;
                servantListViewManager = (ServantListViewManager_o *)(*v40)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_97;
                v99 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v99, 0LL);
                v102 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v87 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v87 + 56) = v102;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 56), (int32_t)v102, v100, v101);
                  if ( !*v40 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v40)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v105 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v87 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v87 + 64) = v105;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 64), (int32_t)v105, v103, v104);
                    if ( !*v40 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)(*v40)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v108 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1B64204(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v87 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v87 + 24) > 5u )
                      {
                        *(_QWORD *)(v87 + 72) = v108;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 72), (int32_t)v108, v106, v107);
                        v109 = System_String__Format_61389904(v86, (System_Object_array *)v87, 0LL);
                        v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v115 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v113,
                                                                        v114);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v115,
                          (Il2CppObject *)v33,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        servantListViewManager = (ServantListViewManager_o *)BalanceConfig_TypeInfo;
                        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        if ( !Instance )
                          goto LABEL_97;
                        CommonUI__OpenConfirmDialog_30344968(
                          (CommonUI_o *)Instance,
                          v85,
                          v109,
                          v110,
                          v111,
                          v115,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_98:
                      sub_1B6432C(servantListViewManager, v89);
                    }
                  }
                }
              }
            }
          }
          v116 = sub_1B64348();
          sub_1B641F0(v116, 0LL);
        }
        OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0LL);
        this->fields.state = 2;
        v59 = this->fields.servantListViewManager;
        v60 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v61 = (ServantListViewManager_CallbackFunc_o *)sub_1B64314(v60, v55, v56);
        ServantListViewManager_CallbackFunc___ctor(
          v61,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v59 )
          goto LABEL_97;
        ServantListViewManager__SetMode(v59, 2, v61, 0LL);
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
  const MethodInfo *v14; // x4
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_49F882E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_CharaGraphListMenu_EndOpen__, v7);
    byte_49F882E = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)callback,
        (int32_t)method);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        sub_1B64324(0LL);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v14);
      this->fields.state = 1;
      v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v17, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B6406C(
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
  DataManager_o *v14; // x23
  struct UserServantEntity_o *userSvtEntity; // x19
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v24; // x0
  __int128 v25; // q1
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  Il2CppObject *Request_object; // x0
  __int128 v30; // q1
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w26
  int32_t v33; // w27
  int32_t v34; // w28
  int32_t v35; // w29
  bool IsLock; // w21
  char v37; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v41; // w0
  __int64 v42; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_49F883E & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F883E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userSvtEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v54, 0LL);
  if ( !v16 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userSvtEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userSvtEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.dispLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(userSvtEntity->fields.iconLimitCount, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v41;
  *(_QWORD *)&v55.fields.currentCryptoKey = v42;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v55, 0LL);
  if ( !v31 )
LABEL_18:
    sub_1B64324(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    imageLimitCount,
    v32,
    v33,
    v34,
    v35,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v46,
    IsLock,
    v37 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != (struct System_Threading_SynchronizationContext_o *)v48,
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
  Il2CppObject *MasterData_object; // x24
  int32_t v45; // w25
  __int64 v46; // x1
  LocalizationManager_c *v47; // x0
  float *static_fields; // x8
  float v49; // s10
  float v50; // s11
  float v51; // s8
  float v52; // s9
  struct LocalizationManager_StaticFields *v53; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v59; // x27
  __int64 v60; // x1
  __int64 v61; // x2
  EventUpValSetupInfo_o *v62; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v64; // x28
  Il2CppObject *v65; // x29
  Il2CppObject *v66; // x0
  float v67; // s3
  float v68; // s2
  float v69; // s1
  float v70; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v72; // x28
  Il2CppObject *v73; // x29
  Il2CppObject *v74; // x0
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v80; // x27
  __int64 v81; // x1
  Il2CppObject *v82; // x25
  BalanceConfig_c *v83; // x0
  Il2CppObject *v84; // x0
  __int64 *v85; // x8
  System_String_o **v86; // x8
  bool v87; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v90; // x8
  System_String_o **v91; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v93; // w0
  __int64 *v94; // x8
  System_String_o **v95; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v97; // w0
  int32_t v98; // w1
  const MethodInfo *v99; // x3
  System_String_o **v100; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v102; // w0
  __int64 *v103; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v105; // w0
  __int64 *v106; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v108; // w0
  __int64 *v109; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v111; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v113; // x21
  UILabel_o *v114; // x21
  UILabel_o *v115; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  __int64 v117; // x1
  __int64 v118; // x2
  ServantListViewManager_CallbackFunc_o *v119; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v121; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v123; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v125; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8830 & 1) == 0 )
  {
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_1B640C8(&Method_CharaGraphListMenu_OnSelectServant__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v13);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v14);
    sub_1B640C8(&int_TypeInfo, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&StringLiteral_17500/*"btn_txt_craftessence_off"*/, v18);
    sub_1B640C8(&StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v19);
    sub_1B640C8(&StringLiteral_17540/*"btn_txt_servant_off"*/, v20);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v21);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v22);
    sub_1B640C8(&StringLiteral_17496/*"btn_txt_cc_off"*/, v23);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v24);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v25);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v26);
    sub_1B640C8(&StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v27);
    sub_1B640C8(&StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_STATUS"*/, v28);
    sub_1B640C8(&StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v29);
    sub_1B640C8(&StringLiteral_17497/*"btn_txt_cc_on"*/, v30);
    sub_1B640C8(&StringLiteral_17541/*"btn_txt_servant_on"*/, v31);
    sub_1B640C8(&StringLiteral_17586/*"button_infocheck_unreg"*/, v32);
    sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v33);
    sub_1B640C8(&StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v34);
    sub_1B640C8(&StringLiteral_17501/*"btn_txt_craftessence_on"*/, v35);
    sub_1B640C8(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, v36);
    sub_1B640C8(&StringLiteral_17585/*"button_infocheck_reg"*/, v37);
    sub_1B640C8(&StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v38);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v39);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v40);
    byte_49F8830 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v41 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_object )
    goto LABEL_148;
  v45 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v46);
    byte_49F779B = 1;
  }
  v47 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v47 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v47->static_fields;
  v50 = static_fields[20];
  v49 = static_fields[21];
  v52 = static_fields[22];
  v51 = static_fields[23];
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v46);
    v47 = LocalizationManager_TypeInfo;
    byte_49F779C = 1;
  }
  if ( !v47->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v47);
    v47 = LocalizationManager_TypeInfo;
  }
  v53 = v47->static_fields;
  r = v53->selectEffectColor.fields.r;
  g = v53->selectEffectColor.fields.g;
  b = v53->selectEffectColor.fields.b;
  a = v53->selectEffectColor.fields.a;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v121 = v41;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_148;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v59 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v62 = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v60, v61);
  EventUpValSetupInfo___ctor_38592760(v62, v59, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v123 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v123);
  if ( !SelfUserGame )
    goto LABEL_148;
  v65 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_61389768(v64, v65, v66, 0LL);
  if ( !servantTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  v67 = v51;
  v68 = v52;
  v69 = v49;
  v70 = v50;
  if ( !tabKind )
  {
    v67 = a;
    v68 = b;
    v69 = g;
    v70 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v70, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v123 = servantEquipSum[0];
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_61389768(v72, v73, v74, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_148;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v75 = v51;
  v76 = v52;
  v77 = v49;
  v78 = v50;
  if ( tabKind == 1 )
  {
    v75 = a;
    v76 = b;
    v77 = g;
    v78 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v78, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v123 = v45;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v81);
    byte_49F7B7B = 1;
  }
  v83 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v83 = BalanceConfig_TypeInfo;
  }
  svtKeep = v83->static_fields->CommandCodeFrameMax;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_61389768(v80, v82, v84, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_148;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v51 = a;
    v52 = b;
    v49 = g;
    v50 = r;
  }
  if ( !Instance )
    goto LABEL_148;
  v125.fields.r = v50;
  v125.fields.g = v49;
  v125.fields.b = v52;
  v125.fields.a = v51;
  UILabel__set_effectColor((UILabel_o *)Instance, v125, 0LL);
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
  v85 = &StringLiteral_17541/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v85 = &StringLiteral_17540/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v85, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v86 = (System_String_o **)(tabKind ? &StringLiteral_17406/*"btn_bg_12"*/ : &StringLiteral_17408/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v86, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  v87 = !v121 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v87,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_148;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v87, 0LL);
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
  v90 = &StringLiteral_17501/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v90 = &StringLiteral_17500/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v90, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v91 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v91, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_148;
  v93 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v93, v87, 0LL);
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
  v94 = &StringLiteral_17497/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v94 = &StringLiteral_17496/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v94, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v95 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v95, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_148;
  v97 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v97, v87, 0LL);
  if ( !v121 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v98 = 3;
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
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v62, 0LL);
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
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v87, 0LL);
      }
      if ( v121 || isInit )
        goto LABEL_95;
LABEL_94:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_140;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v98 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v98, v62, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v121 || isInit, v99);
  if ( !v121 && !isInit )
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
  v100 = (System_String_o **)&StringLiteral_17585/*"button_infocheck_reg"*/;
  if ( modeKind )
    v100 = (System_String_o **)&StringLiteral_17586/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v100, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_148;
  v102 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v102, v87, 0LL);
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
  v103 = &StringLiteral_17579/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v103 = &StringLiteral_17580/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v103, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_148;
  v105 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v105, v87, 0LL);
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
  v106 = &StringLiteral_17577/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v106 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v106, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_148;
  v108 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v108, v87, 0LL);
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
  v109 = &StringLiteral_17591/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v109 = &StringLiteral_17592/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v109, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v121 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_148;
  v111 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v111, v87, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11571/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_148;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      modeKind = 0;
      break;
    case 1:
      v113 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11569/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v113 )
        goto LABEL_148;
      UILabel__set_text(v113, (System_String_o *)Instance, 0LL);
      modeKind = 1;
      break;
    case 2:
      v114 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11568/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v114 )
        goto LABEL_148;
      UILabel__set_text(v114, (System_String_o *)Instance, 0LL);
      modeKind = 2;
      break;
    case 3:
      v115 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11570/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v115 )
        goto LABEL_148;
      UILabel__set_text(v115, (System_String_o *)Instance, 0LL);
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
    v119 = (ServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                      ServantListViewManager_CallbackFunc_TypeInfo,
                                                      v117,
                                                      v118);
    ServantListViewManager_CallbackFunc___ctor(
      v119,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_148;
    ServantListViewManager__SetMode(servantListViewManager, 2, v119, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_32353900((ServantListViewManager_o *)Instance, 1, 0LL);
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
    sub_1B64324(Instance);
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
  __int64 v14; // x1
  __int64 v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w3
  bool v20; // w4
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t tabKind; // w21
  __int64 v24; // x1
  __int64 v25; // x2
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // x1
  System_Int64_array *v28; // x2
  bool v29; // w4
  bool v30; // w5
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_49F8838 & 1) == 0 )
  {
    sub_1B640C8(&Method_CharaGraphListMenu_EndStatusSync__, callback);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_1B640C8(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_49F8838 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v31 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v31, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v21, v22);
      tabKind = this->fields.tabKind;
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v26,
                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v18 = v31;
          v17 = choiceList;
          v20 = 1;
          v19 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1B64324(servantListViewManager);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v26,
                                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v28 = v31;
      v27 = choiceList;
      v30 = 1;
      v29 = 0;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = this->fields.tabKind;
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v13 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v16,
                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v18 = unlockList;
          v17 = lockList;
          v19 = 1;
          v20 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v17,
            v18,
            v19,
            v20,
            0LL);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v16,
                                                             (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v28 = unlockList;
      v27 = lockList;
      v29 = 1;
      v30 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v27, v28, 0, v29, v30, 0LL);
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

  if ( (byte_49F882C & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_49F882C = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B645E4(v7);
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

  if ( (byte_49F882D & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_49F882D = 1;
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
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7630;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A75E8;
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
  if ( (byte_49F8841 & 1) == 0 )
  {
    sub_1B640C8(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49F8841 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7694;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A764C;
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
  if ( (byte_49F8842 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49F8842 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v11; // x2
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  struct CharaGraphListMenu_o *_4__this; // x20
  ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v20; // x21

  if ( (byte_49F8843 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&ServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_CharaGraphListMenu_OnSelectServant__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v8);
    byte_49F8843 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v14, v15);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_30345628(v12, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(Instance);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v20 = (ServantListViewManager_CallbackFunc_o *)sub_1B64314(ServantListViewManager_CallbackFunc_TypeInfo, v16, v17);
  ServantListViewManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    goto LABEL_12;
  ServantListViewManager__SetMode(servantListViewManager, 2, v20, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}