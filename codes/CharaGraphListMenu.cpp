void CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D286D0 & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D286D0 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void CharaGraphListMenu__Callback(CharaGraphListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


void CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_35542752(this, 0, v2);
}


void CharaGraphListMenu__Close_35542752(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x4
  System_Action_o *v13; // x20

  if ( (byte_4D286BF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_EndClose__);
    byte_4D286BF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v12);
  v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D286CF & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4D286CF = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1C942E4(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1C942F0(servantListViewManager, result);
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
      sub_1C942F0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
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
      sub_1C942F0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
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
      sub_1C942F0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
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
      sub_1C942F0(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
  }
  CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, v3);
}


void CharaGraphListMenu__EndClose(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  CharaGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4D286CC & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4D286CC = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0),
        v4 = this->fields.servantListViewManager,
        v5 = (ServantListViewManager_CallbackFunc_o *)sub_1C942E4(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v4) )
  {
    sub_1C942F0(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v4, 2, v5, 0);
}


void CharaGraphListMenu__EndCloseShowServantQuestJump(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D286CA & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_1C94098(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D286CA = 1;
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
      sub_1C942F0(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D286CB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D286CB = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C942F0(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_35575496(servantListViewManager, 3, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


void CharaGraphListMenu__EndStatusSync(CharaGraphListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CharaGraphListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0;
    sub_1C9403C(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C942F0(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1C942F0(0, method);
  ServantListViewManager__DestroyList(servantListViewManager, 0);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void CharaGraphListMenu__OnClickCancel(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0;
      sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  if ( this->fields.state == 2 )
  {
    callbackFunc = this->fields.callbackFunc;
    this->fields.state = 3;
    if ( callbackFunc )
    {
      p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
      p_callbackFunc->klass = 0;
      sub_1C9403C(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D286CD & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_4D286CD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
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
      sub_1C942F0(servantListViewManager, v5);
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

  if ( (byte_4D286C6 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C3 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1C942F0(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C5 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C7 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C1 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabServant__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1C942F0(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v6);
    }
    else
    {
      v8 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C2 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1C942F0(0, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0);
    v4 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v6);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D286C4 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_1C94098(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_1C94098(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D286C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C942E4(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  ServantListViewItem_o *Item; // x1
  ServantListViewItem_o **v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  int32_t tabKind; // w22
  ServantListViewItem_o *v33; // x8
  CommonUI_o *v34; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v36; // x22
  struct CharaGraphListMenu_CallbackFunc_o *callbackFunc; // x19
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  ServantListViewManager_o *v42; // x19
  ServantListViewManager_CallbackFunc_c *v43; // x0
  ServantListViewManager_CallbackFunc_o *v44; // x20
  _BOOL4 isEnabled; // w23
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v50; // x8
  __int128 v51; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v53; // x22
  ServantStatusDialog_ResultDelegate_o *v54; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v56; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v59; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v61; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v63; // w26
  System_String_o *v64; // x21
  System_String_o *v65; // x23
  __int64 v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  ServantListViewManager_o *v73; // x28
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  ServantListViewManager_o *v80; // x27
  int32_t v81; // w0
  Il2CppClass *v82; // x8
  int32_t v83; // w25
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  ServantListViewManager_o *v90; // x25
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  ServantListViewManager_o *v97; // x25
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  ServantListViewManager_o *v104; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v105; // x8
  int32_t v106; // w20
  int32_t v107; // w0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  ServantListViewManager_o *v114; // x20
  System_String_o *v115; // x20
  System_String_o *v116; // x22
  System_String_o *v117; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v119; // x25
  __int64 v120; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_4D286C9 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_1C94098(&Method_CharaGraphListMenu_EndShowServant__);
    sub_1C94098(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Rarity_TypeInfo);
    sub_1C94098(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_1C94098(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_1C94098(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C94098(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D286C9 = 1;
  }
  v7 = sub_1C942E4(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
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
      Item = ServantListViewManager__GetItem(servantListViewManager, n, 0);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (ServantListViewItem_o **)(v7 + 24);
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, v16, v17, v18, v19, v20, v21);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v24, v25, v26, v27, v28, v29);
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
        v30 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v30 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnSelectServant__);
        v31 = (System_Reflection_MethodBase_o *)sub_1C9407C(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v33 = *v23;
        v34 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v33 )
          {
            userCommandCodeEntity = v33->fields.userCommandCodeEntity;
            v36 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v36,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0);
            if ( v34 )
            {
              CommonUI__OpenServantStatusDialog_31596060(v34, 0, userCommandCodeEntity, v36, 0, 0);
              return;
            }
          }
LABEL_97:
          sub_1C942F0(servantListViewManager, v9);
        }
        if ( !v33 )
          goto LABEL_97;
        userSvtEntity = v33->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v53 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v53,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0);
          if ( !v34 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31593820(v34, 0, userSvtEntity, v53, 0);
        }
        else
        {
          v54 = (ServantStatusDialog_ResultDelegate_o *)sub_1C942E4(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v54,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0);
          if ( !v34 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31594296(v34, 0, userSvtEntity, v54, 0, 0, 0);
        }
        return;
      case 1:
        v38 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnSelectServant__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C9407C(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 11, 0, 0);
        if ( !*v23 )
          goto LABEL_97;
        (*v23)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v40 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnSelectServant__);
        v41 = (System_Reflection_MethodBase_o *)sub_1C9407C(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0);
        if ( !*v23 )
          goto LABEL_97;
        (*v23)->fields.isSwapChoice ^= 1u;
LABEL_27:
        this->fields.state = 2;
        v42 = this->fields.servantListViewManager;
        v43 = ServantListViewManager_CallbackFunc_TypeInfo;
        goto LABEL_28;
      case 3:
        if ( !*v23 )
          goto LABEL_97;
        isEnabled = (*v23)->fields.isEnabled;
        v46 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1C940B0(Method_CharaGraphListMenu_OnSelectServant__);
        v47 = (System_Reflection_MethodBase_o *)sub_1C9407C(v46, v46[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0, 0);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0);
          if ( !servantListViewManager )
            goto LABEL_97;
          dropList = (int64_t)servantListViewManager->fields.dropList;
          if ( !dropList )
            goto LABEL_41;
          if ( !*v23 )
            goto LABEL_97;
          v50 = (*v23)->fields.userSvtEntity;
          if ( !v50 )
            goto LABEL_97;
          v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
          *(_OWORD *)&v122.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v122.fields.fakeValue = v51;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v121 = v122;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v121, 0) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v23, v48);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v56 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v123.fields.currentCryptoKey = klass;
          *(_QWORD *)&v123.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                 v123,
                                                                 0);
          if ( !v56 )
            goto LABEL_97;
          v59 = DataMasterBase_object__object__int___GetEntity(
                  v56,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                 (UserServantEntity_o *)Entity,
                                                                 0,
                                                                 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          if ( !*v23 )
            goto LABEL_97;
          v61 = (*v23)->fields.userSvtEntity;
          if ( !v61 )
            goto LABEL_97;
          m_CancellationTokenSource = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(v61, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          v63 = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_11998/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v65 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v66 = sub_1C94140(object___TypeInfo, 6);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
          if ( !v66 )
            goto LABEL_97;
          v73 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v66 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v66 + 32) = v73;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v73, v67, v68, v69, v70, v71, v72);
            if ( !v59 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName((ServantEntity_o *)v59, 0);
            v80 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v66 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v66 + 40) = v80;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v66 + 40), (int32_t)v80, v74, v75, v76, v77, v78, v79);
              v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0);
              v82 = Entity[6].klass;
              *(_QWORD *)&v124.fields.fakeValue = Entity[6].monitor;
              v83 = v81;
              *(_QWORD *)&v124.fields.currentCryptoKey = v82;
              servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                                     v124,
                                                                     0);
              if ( !Master_object )
                goto LABEL_97;
              servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                     (ServantLimitImageMaster_o *)Master_object,
                                                                     v83,
                                                                     (int32_t)servantListViewManager,
                                                                     1,
                                                                     0);
              v90 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v66 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v66 + 48) = v90;
                sub_1C9403C((GrandQuestFolderBoardItem_o *)(v66 + 48), (int32_t)v90, v84, v85, v86, v87, v88, v89);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v63, 0);
                v97 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v66 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v66 + 56) = v97;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v66 + 56), (int32_t)v97, v91, v92, v93, v94, v95, v96);
                  if ( !*v23 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v23)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0);
                  v104 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v66 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v66 + 64) = v104;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)(v66 + 64),
                      (int32_t)v104,
                      v98,
                      v99,
                      v100,
                      v101,
                      v102,
                      v103);
                    servantListViewManager = (ServantListViewManager_o *)*v23;
                    if ( !*v23 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(
                                                                           (ServantListViewItem_o *)servantListViewManager,
                                                                           v9);
                    if ( !*v23 )
                      goto LABEL_97;
                    v105 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
                    if ( !v105 )
                      goto LABEL_97;
                    v106 = (int)servantListViewManager;
                    v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v105[6], 0);
                    servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v106,
                                                                           v107,
                                                                           1,
                                                                           0);
                    v114 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1C941D4(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v66 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v66 + 24) > 5u )
                      {
                        *(_QWORD *)(v66 + 72) = v114;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)(v66 + 72),
                          (int32_t)v114,
                          v108,
                          v109,
                          v110,
                          v111,
                          v112,
                          v113);
                        v115 = System_String__Format_64459188(v65, (System_Object_array *)v66, 0);
                        v116 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                        v117 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v119 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v119,
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
                        CommonUI__OpenConfirmDialog_31583464(
                          (CommonUI_o *)Instance,
                          v64,
                          v115,
                          v116,
                          v117,
                          v119,
                          HIDWORD(servantListViewManager->fields.sort[2].fields.isPresentBoxFilterList),
                          (int32_t)servantListViewManager->fields.sort[2].fields.isSvtEquipEffectFilterDic,
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
                      sub_1C942F8(servantListViewManager);
                    }
                  }
                }
              }
            }
          }
          v120 = sub_1C94314();
          sub_1C941C0(v120, 0);
        }
        OverwriteAssetSoundName__PlaySystemSe(v47, 2, 0, 0);
        this->fields.state = 2;
        v42 = this->fields.servantListViewManager;
        v43 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v44 = (ServantListViewManager_CallbackFunc_o *)sub_1C942E4(v43);
        ServantListViewManager_CallbackFunc___ctor(
          v44,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0);
        if ( !v42 )
          goto LABEL_97;
        ServantListViewManager__SetMode(v42, 2, v44, 0);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  const MethodInfo *v12; // x4
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v15; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_4D286BE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_EndOpen__);
    byte_4D286BE = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (int32_t)callback,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        sub_1C942F0(0, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v18);
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v19, 0);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
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

  if ( (byte_4D286CE & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D286CE = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C942F0(limitCountSupport, v6);
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
  int32_t v63; // w1
  const MethodInfo *v64; // x3
  System_String_o **v65; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v67; // w0
  __int64 *v68; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v70; // w0
  __int64 *v71; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v73; // w0
  __int64 *v74; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v76; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v78; // x21
  UILabel_o *v79; // x21
  UILabel_o *v80; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v82; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  bool v84; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v86; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D286C0 & 1) == 0 )
  {
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&EventUpValSetupInfo_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_17646/*"btn_txt_craftessence_off"*/);
    sub_1C94098(&StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C94098(&StringLiteral_17686/*"btn_txt_servant_off"*/);
    sub_1C94098(&StringLiteral_17742/*"button_push_reg"*/);
    sub_1C94098(&StringLiteral_17743/*"button_push_unreg"*/);
    sub_1C94098(&StringLiteral_17642/*"btn_txt_cc_off"*/);
    sub_1C94098(&StringLiteral_17728/*"button_allchoice_reg"*/);
    sub_1C94098(&StringLiteral_17530/*"btn_bg_12"*/);
    sub_1C94098(&StringLiteral_17731/*"button_alllock_unreg"*/);
    sub_1C94098(&StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C94098(&StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_1C94098(&StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C94098(&StringLiteral_17643/*"btn_txt_cc_on"*/);
    sub_1C94098(&StringLiteral_17687/*"btn_txt_servant_on"*/);
    sub_1C94098(&StringLiteral_17737/*"button_infocheck_unreg"*/);
    sub_1C94098(&StringLiteral_17532/*"btn_bg_19"*/);
    sub_1C94098(&StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C94098(&StringLiteral_17647/*"btn_txt_craftessence_on"*/);
    sub_1C94098(&StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C94098(&StringLiteral_17736/*"button_infocheck_reg"*/);
    sub_1C94098(&StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_1C94098(&StringLiteral_17730/*"button_alllock_reg"*/);
    sub_1C94098(&StringLiteral_17729/*"button_allchoice_unreg"*/);
    byte_4D286C0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_148;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_148;
  v14 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D26E67 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D26E67 = 1;
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
  if ( !byte_4D26E68 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
    byte_4D26E68 = 1;
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_148;
  v84 = v9;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_148;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v27 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (EventUpValSetupInfo_o *)sub_1C942E4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42501600(v28, v27, 0, 0, 0, 0);
  servantTabLabel = this->fields.servantTabLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v86 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v86);
  if ( !SelfUserGame )
    goto LABEL_148;
  v31 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64459052(v30, v31, v32, 0);
  if ( !servantTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v36, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v86 = servantEquipSum[0];
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64459052(v38, v39, v40, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v44, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v86 = v14;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  if ( !byte_4D269E5 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D269E5 = 1;
  }
  v48 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  svtKeep = v48->static_fields->CommandCodeFrameMax;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64459052(v46, v47, v49, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_148;
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
    goto LABEL_148;
  v88.fields.r = v18;
  v88.fields.g = v17;
  v88.fields.b = v20;
  v88.fields.a = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, v88, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v50 = &StringLiteral_17687/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v50 = &StringLiteral_17686/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v51 = (System_String_o **)(tabKind ? &StringLiteral_17530/*"btn_bg_12"*/ : &StringLiteral_17532/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v51, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_148;
  v52 = !v84 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v52,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_148;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v52, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v55 = &StringLiteral_17647/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v55 = &StringLiteral_17646/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v55, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v56 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17532/*"btn_bg_19"*/ : &StringLiteral_17530/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v56, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_148;
  v58 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v58, v52, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_148;
  v59 = &StringLiteral_17643/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v59 = &StringLiteral_17642/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v59, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v60 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17532/*"btn_bg_19"*/ : &StringLiteral_17530/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v60, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_148;
  v62 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v62, v52, 0);
  if ( !v84 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_94;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v63 = 3;
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
        ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v28, 0);
        Instance = (__int64)this->fields.servantListViewManager;
        if ( !Instance )
          goto LABEL_148;
        ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0);
        Instance = (__int64)this->fields.pushTabSprite;
        if ( !Instance )
          goto LABEL_148;
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_148;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
          Instance,
          1,
          *(_QWORD *)(*(_QWORD *)Instance + 400LL));
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
        Instance = (__int64)this->fields.pushTabButton;
        if ( !Instance )
          goto LABEL_148;
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v52, 0);
      }
      if ( v84 || isInit )
        goto LABEL_95;
LABEL_94:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_140;
      goto LABEL_95;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_148;
    v63 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v63, v28, 0);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_148;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v84 || isInit, v64);
  if ( !v84 && !isInit )
    goto LABEL_94;
LABEL_95:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v65 = (System_String_o **)&StringLiteral_17736/*"button_infocheck_reg"*/;
  if ( modeKind )
    v65 = (System_String_o **)&StringLiteral_17737/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v65, 0);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_148;
  v67 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v67, v52, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v68 = &StringLiteral_17730/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v68 = &StringLiteral_17731/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v68, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_148;
  v70 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v70, v52, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v71 = &StringLiteral_17728/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v71 = &StringLiteral_17729/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v71, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_148;
  v73 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v73, v52, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_148;
  v74 = &StringLiteral_17742/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v74 = &StringLiteral_17743/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v74, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_148;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v84 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_148;
  v76 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v76, v52, 0);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11706/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0);
      if ( !explanationLabel )
        goto LABEL_148;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0);
      modeKind = 0;
      break;
    case 1:
      v78 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11704/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0);
      if ( !v78 )
        goto LABEL_148;
      UILabel__set_text(v78, (System_String_o *)Instance, 0);
      modeKind = 1;
      break;
    case 2:
      v79 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11703/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0);
      if ( !v79 )
        goto LABEL_148;
      UILabel__set_text(v79, (System_String_o *)Instance, 0);
      modeKind = 2;
      break;
    case 3:
      v80 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11705/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0);
      if ( !v80 )
        goto LABEL_148;
      UILabel__set_text(v80, (System_String_o *)Instance, 0);
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
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, 0);
    servantListViewManager = this->fields.servantListViewManager;
    v82 = (ServantListViewManager_CallbackFunc_o *)sub_1C942E4(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v82,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0);
    if ( !servantListViewManager )
      goto LABEL_148;
    ServantListViewManager__SetMode(servantListViewManager, 2, v82, 0);
  }
  else
  {
    ServantListViewManager__SetMode_35575496((ServantListViewManager_o *)Instance, 1, 0);
  }
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, 0),
        !scaleChangeTabSprite) )
  {
LABEL_148:
    sub_1C942F0(Instance, v12);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0);
}


void CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w21
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w3
  bool v18; // w4
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // x1
  System_Int64_array *v28; // x2
  bool v29; // w4
  bool v30; // w5
  System_Int64_array *v31; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D286C8 & 1) == 0 )
  {
    sub_1C94098(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_1C94098(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C94098(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D286C8 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v31 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v31, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      tabKind = this->fields.tabKind;
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v26, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v26,
                                                               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v16 = v31;
          v15 = choiceList;
          v18 = 1;
          v17 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1C942F0(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v26,
                                                             (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
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
    if ( ServantListViewManager__GetSwapLockList(servantListViewManager, &lockList, &unlockList, 0) )
    {
      this->fields.requedstCallback = callback;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = this->fields.tabKind;
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v13 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v14,
                                                               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
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
            0);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v14,
                                                             (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v28 = unlockList;
      v27 = lockList;
      v29 = 1;
      v30 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v27, v28, 0, v29, v30, 0);
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

  if ( (byte_4D286BC & 1) == 0 )
  {
    sub_1C94098(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D286BC = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C9468C(v7);
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

  if ( (byte_4D286BD & 1) == 0 )
  {
    sub_1C94098(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D286BD = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C9468C(v7);
  CharaGraphListMenu__Init(v10, v11);
}


void CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3878;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3830;
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
  if ( (byte_4D286D1 & 1) == 0 )
  {
    sub_1C94098(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_4D286D1 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC38DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3894;
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
  if ( (byte_4D286D2 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D286D2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct CharaGraphListMenu_o *_4__this; // x20
  ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v17; // x21

  if ( (byte_4D286D3 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_4D286D3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C942F0(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v17 = (ServantListViewManager_CallbackFunc_o *)sub_1C942E4(ServantListViewManager_CallbackFunc_TypeInfo);
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
    sub_1C942F0(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}