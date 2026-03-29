void CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C855 & 1) == 0 )
  {
    sub_1C93AD4(&BaseMenu_TypeInfo);
    byte_4D2C855 = 1;
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
    sub_1C93A78(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


void CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_35479748(this, 0, v2);
}


void CharaGraphListMenu__Close_35479748(
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

  if ( (byte_4D2C844 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClose__);
    byte_4D2C844 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
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
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2C854 & 1) == 0 )
  {
    sub_1C93AD4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4D2C854 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, method),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1C93D20(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1C93D2C(servantListViewManager, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  ServantListViewManager__SetMode_35483448(v5, 2, v13);
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
      sub_1C93D2C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v6);
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
      sub_1C93D2C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v6);
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
      sub_1C93D2C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v6);
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
      sub_1C93D2C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v6);
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2C851 & 1) == 0 )
  {
    sub_1C93AD4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnSelectServant__);
    byte_4D2C851 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, v2),
        v5 = this->fields.servantListViewManager,
        v6 = (ServantListViewManager_CallbackFunc_o *)sub_1C93D20(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1C93D2C(servantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  ServantListViewManager__SetMode_35483448(v5, 2, v13);
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
    sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D2C84F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C84F = 1;
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
      sub_1C93D2C(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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

  if ( (byte_4D2C850 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndCloseShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C850 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, method),
          (servantListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_9:
      sub_1C93D2C(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_35483448(servantListViewManager, 3, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
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
    sub_1C93A78(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
    sub_1C93D2C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1C93D2C(0, method);
  ListViewManager__DestroyList(servantListViewManager, 0);
  ServantListViewManager__SaveSortInfo(v4, v5);
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
      sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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
      sub_1C93A78(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D2C852 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickScaleChange__);
    byte_4D2C852 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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
      sub_1C93D2C(servantListViewManager, v5);
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

  if ( (byte_4D2C84B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabChoice__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabChoice__);
    sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C84B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_4D2C848 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabCommandCode__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabCommandCode__);
    this = (CharaGraphListMenu_o *)sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C848 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C93D2C(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 2, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C84A & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabLock__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabLock__);
    sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C84A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          v8);
        CharaGraphListMenu__StatusRequest(this, v7, v9);
        return;
      }
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C84C & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabPush__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabPush__);
    sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C84C = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_CharaGraphListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_4D2C846 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabServant__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabServant__);
    this = (CharaGraphListMenu_o *)sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C846 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C93D2C(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = v2->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(v2, 0, modeKind, 0, v5);
    }
    else
    {
      v7 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_4D2C847 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabServantEquip__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabServantEquip__);
    this = (CharaGraphListMenu_o *)sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C847 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    if ( !v2->fields.servantListViewManager )
      sub_1C93D2C(this, method);
    ServantListViewManager__SaveSortInfo((ServantListViewManager_o *)this, method);
    v3 = Method_CharaGraphListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(v2, 0, v5);
    }
    else
    {
      v6 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4D2C849 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndClickTabStatus__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnClickTabStatus__);
    sub_1C93AD4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_4D2C849 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_CharaGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_1C93D20(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
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
  const MethodInfo *v16; // x2
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
  struct ServantListViewManager_o *v42; // x19
  ServantListViewManager_CallbackFunc_c *v43; // x0
  ServantListViewManager_CallbackFunc_o *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  const MethodInfo *v51; // x2
  _BOOL4 isEnabled; // w23
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  const MethodInfo *v55; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v57; // x8
  __int128 v58; // q1
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v60; // x22
  ServantStatusDialog_ResultDelegate_o *v61; // x22
  Il2CppObject *Entity; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v63; // x21
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v66; // x27
  Il2CppObject *Master_object; // x22
  UserServantEntity_o *v68; // x8
  int32_t m_CancellationTokenSource; // w28
  int32_t v70; // w26
  System_String_o *v71; // x21
  System_String_o *v72; // x23
  __int64 v73; // x24
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  ServantListViewManager_o *v80; // x28
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  ServantListViewManager_o *v87; // x27
  int32_t v88; // w0
  Il2CppClass *v89; // x8
  int32_t v90; // w25
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
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  ServantListViewManager_o *v111; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v112; // x8
  int32_t v113; // w20
  int32_t v114; // w0
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  ServantListViewManager_o *v121; // x20
  System_String_o *v122; // x20
  System_String_o *v123; // x22
  System_String_o *v124; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v126; // x25
  __int64 v127; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v128; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v129; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_4D2C84E & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndShowServantEquip__);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndShowServant__);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__);
    sub_1C93AD4(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4D2C84E = 1;
  }
  v7 = sub_1C93D20(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
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
      Item = ServantListViewManager__GetItem(servantListViewManager, n, v16);
    }
    *(_QWORD *)(v7 + 24) = Item;
    v23 = (ServantListViewItem_o **)(v7 + 24);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)Item, (int32_t)v16, v17, v18, v19, v20, v21);
    if ( kind != 1 )
    {
      callbackFunc = this->fields.callbackFunc;
      if ( callbackFunc )
      {
        this->fields.callbackFunc = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v24, v25, v26, v27, v28, v29);
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
          v30 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnSelectServant__);
        v31 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
        this->fields.state = 6;
        tabKind = this->fields.tabKind;
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v33 = *v23;
        v34 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v33 )
          {
            userCommandCodeEntity = v33->fields.userCommandCodeEntity;
            v36 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v36,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0);
            if ( v34 )
            {
              CommonUI__OpenServantStatusDialog_31593176(v34, 0, userCommandCodeEntity, v36, 0, 0);
              return;
            }
          }
LABEL_97:
          sub_1C93D2C(servantListViewManager, v9);
        }
        if ( !v33 )
          goto LABEL_97;
        userSvtEntity = v33->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v60 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v60,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0);
          if ( !v34 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31590932(v34, 0, userSvtEntity, v60, 0);
        }
        else
        {
          v61 = (ServantStatusDialog_ResultDelegate_o *)sub_1C93D20(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v61,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0);
          if ( !v34 )
            goto LABEL_97;
          CommonUI__OpenServantStatusDialog_31591412(v34, 0, userSvtEntity, v61, 0, 0, 0);
        }
        return;
      case 1:
        v38 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnSelectServant__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 11, 0, 0);
        if ( !*v23 )
          goto LABEL_97;
        (*v23)->fields.isSwapLock ^= 1u;
        goto LABEL_27;
      case 2:
        v40 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnSelectServant__);
        v41 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v40, v40[4]);
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
        v53 = Method_CharaGraphListMenu_OnSelectServant__;
        if ( (*((_BYTE *)Method_CharaGraphListMenu_OnSelectServant__ + 83) & 2) != 0 )
          v53 = (_QWORD *)sub_1C93AEC(Method_CharaGraphListMenu_OnSelectServant__);
        v54 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v53, v53[4]);
        if ( isEnabled )
        {
          OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0);
          servantListViewManager = (ServantListViewManager_o *)UserGameMaster__getSelfUserGame(0);
          if ( !servantListViewManager )
            goto LABEL_97;
          dropList = (int64_t)servantListViewManager->fields.dropList;
          if ( !dropList )
            goto LABEL_41;
          if ( !*v23 )
            goto LABEL_97;
          v57 = (*v23)->fields.userSvtEntity;
          if ( !v57 )
            goto LABEL_97;
          v58 = *(_OWORD *)&v57->fields.id.fields.fakeValue;
          *(_OWORD *)&v129.fields.currentCryptoKey = *(_OWORD *)&v57->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v129.fields.fakeValue = v58;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v128 = v129;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v128, 0) )
          {
LABEL_41:
            CharaGraphListMenu__PushRequest(this, *v23, v55);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_97;
          Entity = DataMasterBase_object__object__long___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_97;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_object_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_97;
          v63 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantListViewManager;
          klass = Entity[5].klass;
          monitor = Entity[5].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v130.fields.currentCryptoKey = klass;
          *(_QWORD *)&v130.fields.fakeValue = monitor;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                 v130,
                                                                 0);
          if ( !v63 )
            goto LABEL_97;
          v66 = DataMasterBase_object__object__int___GetEntity(
                  v63,
                  (int32_t)servantListViewManager,
                  (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(
                                                                 (UserServantEntity_o *)Entity,
                                                                 0,
                                                                 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          if ( !*v23 )
            goto LABEL_97;
          v68 = (*v23)->fields.userSvtEntity;
          if ( !v68 )
            goto LABEL_97;
          m_CancellationTokenSource = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          servantListViewManager = (ServantListViewManager_o *)UserServantEntity__GetOverwriteStatus(v68, 0, 0);
          if ( !servantListViewManager )
            goto LABEL_97;
          v70 = (int32_t)servantListViewManager->fields.m_CancellationTokenSource;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12038/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
          v73 = sub_1C93B7C(object___TypeInfo, 6);
          if ( !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(m_CancellationTokenSource, 0);
          if ( !v73 )
            goto LABEL_97;
          v80 = servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
          {
            if ( !*(_DWORD *)(v73 + 24) )
              goto LABEL_98;
            *(_QWORD *)(v73 + 32) = v80;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 32), (int32_t)v80, v74, v75, v76, v77, v78, v79);
            if ( !v66 )
              goto LABEL_97;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName((ServantEntity_o *)v66, 0);
            v87 = servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
            {
              if ( *(_DWORD *)(v73 + 24) <= 1u )
                goto LABEL_98;
              *(_QWORD *)(v73 + 40) = v87;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 40), (int32_t)v87, v81, v82, v83, v84, v85, v86);
              v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
                      0);
              v89 = Entity[6].klass;
              *(_QWORD *)&v131.fields.fakeValue = Entity[6].monitor;
              v90 = v88;
              *(_QWORD *)&v131.fields.currentCryptoKey = v89;
              servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                                     v131,
                                                                     0);
              if ( !Master_object )
                goto LABEL_97;
              servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                     (ServantLimitImageMaster_o *)Master_object,
                                                                     v90,
                                                                     (int32_t)servantListViewManager,
                                                                     1,
                                                                     0);
              v97 = servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v73 + 24) <= 2u )
                  goto LABEL_98;
                *(_QWORD *)(v73 + 48) = v97;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 48), (int32_t)v97, v91, v92, v93, v94, v95, v96);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v70, 0);
                v104 = servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v73 + 24) <= 3u )
                    goto LABEL_98;
                  *(_QWORD *)(v73 + 56) = v104;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v73 + 56),
                    (int32_t)v104,
                    v98,
                    v99,
                    v100,
                    v101,
                    v102,
                    v103);
                  if ( !*v23 )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)(*v23)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_97;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0);
                  v111 = servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
                  {
                    if ( *(_DWORD *)(v73 + 24) <= 4u )
                      goto LABEL_98;
                    *(_QWORD *)(v73 + 64) = v111;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v73 + 64),
                      (int32_t)v111,
                      v105,
                      v106,
                      v107,
                      v108,
                      v109,
                      v110);
                    servantListViewManager = (ServantListViewManager_o *)*v23;
                    if ( !*v23 )
                      goto LABEL_97;
                    servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(
                                                                           (ServantListViewItem_o *)servantListViewManager,
                                                                           v9);
                    if ( !*v23 )
                      goto LABEL_97;
                    v112 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v23)->fields.userSvtEntity;
                    if ( !v112 )
                      goto LABEL_97;
                    v113 = (int)servantListViewManager;
                    v114 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v112[6], 0);
                    servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                                           (ServantLimitImageMaster_o *)Master_object,
                                                                           v113,
                                                                           v114,
                                                                           1,
                                                                           0);
                    v121 = servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_1C93C10(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v73 + 64LL))) != 0 )
                    {
                      if ( *(_DWORD *)(v73 + 24) > 5u )
                      {
                        *(_QWORD *)(v73 + 72) = v121;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(v73 + 72),
                          (int32_t)v121,
                          v115,
                          v116,
                          v117,
                          v118,
                          v119,
                          v120);
                        v122 = System_String__Format_64467168(v72, (System_Object_array *)v73, 0);
                        v123 = LocalizationManager__Get((System_String_o *)StringLiteral_12036/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                        v124 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v126 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v126,
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
                        CommonUI__OpenConfirmDialog_31581040(
                          (CommonUI_o *)Instance,
                          v71,
                          v122,
                          v123,
                          v124,
                          v126,
                          (int32_t)servantListViewManager->fields.sort[2].fields.isPresentBoxFilterList,
                          HIDWORD(servantListViewManager->fields.sort[2].fields.isPresentBoxRarityFilterList),
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
                      sub_1C93D34(servantListViewManager);
                    }
                  }
                }
              }
            }
          }
          v127 = sub_1C93D50();
          sub_1C93BFC(v127, 0);
        }
        OverwriteAssetSoundName__PlaySystemSe(v54, 2, 0, 0);
        this->fields.state = 2;
        v42 = this->fields.servantListViewManager;
        v43 = ServantListViewManager_CallbackFunc_TypeInfo;
LABEL_28:
        v44 = (ServantListViewManager_CallbackFunc_o *)sub_1C93D20(v43);
        ServantListViewManager_CallbackFunc___ctor(
          v44,
          (Il2CppObject *)this,
          (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
          0);
        if ( !v42 )
          goto LABEL_97;
        v42->fields.callbackFunc = v44;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v42->fields.callbackFunc,
          (int32_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        ServantListViewManager__SetMode_35483448(v42, 2, v51);
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

  if ( (byte_4D2C843 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_EndOpen__);
    byte_4D2C843 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_1C93A78(
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
        sub_1C93D2C(0, v17);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v18);
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v19, 0);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C93A78(
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

  if ( (byte_4D2C853 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndCardFavoriteRequest__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C853 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userSvtEntity = selectItem->fields.userSvtEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v45, 0);
  if ( !v9 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, m_CachedPtr, (int32_t)limitCountSupport, 0);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v43, 0);
  v18 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v42, 0);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v41, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                      userSvtEntity->fields.imageLimitCount,
                      0);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.dispLimitCount, 0);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.commandCardLimitCount,
          0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.iconLimitCount, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(userSvtEntity->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                  userSvtEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                       userSvtEntity->fields.randomLimitCount,
                       0);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
          userSvtEntity->fields.randomLimitCountSupport,
          0);
  v33 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v32;
  *(_QWORD *)&v46.fields.currentCryptoKey = v33;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v46, 0);
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(limitCountSupport, v6);
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
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x24
  int32_t v14; // w25
  LocalizationManager_c *v15; // x0
  float *static_fields; // x8
  float v17; // s10
  float v18; // s11
  float v19; // s8
  float v20; // s9
  float *v21; // x8
  float v22; // s12
  float v23; // s13
  float v24; // s14
  float v25; // s15
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v27; // x27
  EventUpValSetupInfo_o *v28; // x24
  UILabel_o *servantTabLabel; // x27
  System_String_o *v30; // x28
  Il2CppObject *v31; // x29
  Il2CppObject *v32; // x0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v37; // x28
  Il2CppObject *v38; // x29
  Il2CppObject *v39; // x0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v44; // x27
  Il2CppObject *v45; // x25
  BalanceConfig_c *v46; // x0
  Il2CppObject *v47; // x0
  __int64 *v48; // x8
  System_String_o **v49; // x8
  bool v50; // w26
  UICommonButton_o *servantTabButton; // x25
  bool enabled; // w0
  __int64 *v53; // x8
  System_String_o **v54; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v56; // w0
  __int64 *v57; // x8
  System_String_o **v58; // x8
  UICommonButton_o *commandCodeTabButton; // x25
  bool v60; // w0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  struct ServantListViewManager_o *v63; // x8
  int32_t v64; // w1
  struct ServantListViewManager_o *servantListViewManager; // x8
  const MethodInfo *v66; // x3
  System_String_o **v67; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v69; // w0
  __int64 *v70; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v72; // w0
  __int64 *v73; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v75; // w0
  __int64 *v76; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v78; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v80; // x21
  UILabel_o *v81; // x21
  UILabel_o *v82; // x21
  struct ServantListViewManager_o *v83; // x22
  ServantListViewManager_CallbackFunc_o *v84; // x23
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w1
  UISprite_o *scaleChangeTabSprite; // x19
  bool v93; // [xsp+8h] [xbp-B8h]
  int32_t svtKeep; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v95; // [xsp+14h] [xbp-ACh] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2C845 & 1) == 0 )
  {
    sub_1C93AD4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_17693/*"btn_txt_craftessence_off"*/);
    sub_1C93AD4(&StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C93AD4(&StringLiteral_17733/*"btn_txt_servant_off"*/);
    sub_1C93AD4(&StringLiteral_17792/*"button_push_reg"*/);
    sub_1C93AD4(&StringLiteral_17793/*"button_push_unreg"*/);
    sub_1C93AD4(&StringLiteral_17689/*"btn_txt_cc_off"*/);
    sub_1C93AD4(&StringLiteral_17778/*"button_allchoice_reg"*/);
    sub_1C93AD4(&StringLiteral_17575/*"btn_bg_12"*/);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C93AD4(&StringLiteral_11746/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    sub_1C93AD4(&StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_1C93AD4(&StringLiteral_17690/*"btn_txt_cc_on"*/);
    sub_1C93AD4(&StringLiteral_17734/*"btn_txt_servant_on"*/);
    sub_1C93AD4(&StringLiteral_17787/*"button_infocheck_unreg"*/);
    sub_1C93AD4(&StringLiteral_17577/*"btn_bg_19"*/);
    sub_1C93AD4(&StringLiteral_3361/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C93AD4(&StringLiteral_17694/*"btn_txt_craftessence_on"*/);
    sub_1C93AD4(&StringLiteral_3362/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C93AD4(&StringLiteral_17786/*"button_infocheck_reg"*/);
    sub_1C93AD4(&StringLiteral_3363/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    sub_1C93AD4(&StringLiteral_17779/*"button_allchoice_unreg"*/);
    byte_4D2C845 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  v9 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_150;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !MasterData_object )
    goto LABEL_150;
  v14 = Instance;
  UserServantMaster__getCount((UserServantMaster_o *)MasterData_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D2AFDF )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2AFDF = 1;
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
  if ( !byte_4D2AFE0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    v15 = LocalizationManager_TypeInfo;
    byte_4D2AFE0 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = LocalizationManager_TypeInfo;
  }
  v21 = (float *)v15->static_fields;
  v22 = v21[24];
  v23 = v21[25];
  v24 = v21[26];
  v25 = v21[27];
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_150;
  v93 = v9;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_150;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0, 0);
  v27 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  v28 = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(v28, v27, 0, 0, 0, 0);
  servantTabLabel = this->fields.servantTabLabel;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3362/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v95 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v95);
  if ( !SelfUserGame )
    goto LABEL_150;
  v31 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64467032(v30, v31, v32, 0);
  if ( !servantTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantTabLabel;
  v97.fields.a = v19;
  v97.fields.b = v20;
  v97.fields.g = v17;
  v97.fields.r = v18;
  if ( !tabKind )
  {
    v97.fields.a = v25;
    v97.fields.b = v24;
    v97.fields.g = v23;
    v97.fields.r = v22;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, v97, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3363/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v95 = servantEquipSum[0];
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64467032(v37, v38, v39, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_150;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v98.fields.a = v19;
  v98.fields.b = v20;
  v98.fields.g = v17;
  v98.fields.r = v18;
  if ( tabKind == 1 )
  {
    v98.fields.a = v25;
    v98.fields.b = v24;
    v98.fields.g = v23;
    v98.fields.r = v22;
  }
  if ( !Instance )
    goto LABEL_150;
  UILabel__set_effectColor((UILabel_o *)Instance, v98, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v95 = v14;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
  if ( !byte_4D2AB39 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D2AB39 = 1;
  }
  v46 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  svtKeep = v46->static_fields->CommandCodeFrameMax;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_64467032(v44, v45, v47, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_150;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( tabKind == 2 )
  {
    v19 = v25;
    v20 = v24;
    v17 = v23;
    v18 = v22;
  }
  if ( !Instance )
    goto LABEL_150;
  v99.fields.r = v18;
  v99.fields.g = v17;
  v99.fields.b = v20;
  v99.fields.a = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, v99, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 0, 0);
  Instance = (__int64)this->fields.servantTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v48 = &StringLiteral_17734/*"btn_txt_servant_on"*/;
  if ( tabKind )
    v48 = &StringLiteral_17733/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v48, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v49 = (System_String_o **)(tabKind ? &StringLiteral_17575/*"btn_bg_12"*/ : &StringLiteral_17577/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v49, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_150;
  v50 = !v93 && !isInit;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v50,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_150;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v50, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v53 = &StringLiteral_17694/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v53 = &StringLiteral_17693/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v53, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v54 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17577/*"btn_bg_19"*/ : &StringLiteral_17575/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v54, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_150;
  v56 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v56, v50, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, tabKind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabTitleSprite;
  if ( !Instance )
    goto LABEL_150;
  v57 = &StringLiteral_17690/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v57 = &StringLiteral_17689/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v57, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v58 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17577/*"btn_bg_19"*/ : &StringLiteral_17575/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v58, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_150;
  v60 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v60, v50, 0);
  if ( !v93 && !isInit && this->fields.tabKind == tabKind )
    goto LABEL_96;
  switch ( tabKind )
  {
    case 2:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v64 = 3;
      goto LABEL_93;
    case 1:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      v64 = 1;
LABEL_93:
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v64, v28, v62);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_150;
      Instance = (__int64)servantListViewManager->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v93 || isInit, v66);
      if ( v93 || isInit )
        goto LABEL_97;
LABEL_96:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_142;
      goto LABEL_97;
    case 0:
      Instance = (__int64)this->fields.servantListViewManager;
      if ( !Instance )
        goto LABEL_150;
      ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, 0, v28, v62);
      v63 = this->fields.servantListViewManager;
      if ( !v63 )
        goto LABEL_150;
      Instance = (__int64)v63->fields.filterButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)Instance + 536LL))(
        Instance,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 544LL));
      Instance = (__int64)this->fields.pushTabSprite;
      if ( !Instance )
        goto LABEL_150;
      Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
        Instance,
        1,
        *(_QWORD *)(*(_QWORD *)Instance + 400LL));
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.pushTabButton;
      if ( !Instance )
        goto LABEL_150;
      UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v50, 0);
      break;
  }
  if ( !v93 && !isInit )
    goto LABEL_96;
LABEL_97:
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 0, 0);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v67 = (System_String_o **)&StringLiteral_17786/*"button_infocheck_reg"*/;
  if ( modeKind )
    v67 = (System_String_o **)&StringLiteral_17787/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v67, 0);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_150;
  v69 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v69, v50, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 1, 0);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v70 = &StringLiteral_17780/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v70 = &StringLiteral_17781/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v70, 0);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_150;
  v72 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v72, v50, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 2, 0);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v73 = &StringLiteral_17778/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v73 = &StringLiteral_17779/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v73, 0);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_150;
  v75 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v75, v50, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, modeKind != 3, 0);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_150;
  v76 = &StringLiteral_17792/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v76 = &StringLiteral_17793/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v76, 0);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_150;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               !v93 && !isInit,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_150;
  v78 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
  UICommonButton__SetColliderEnable(pushTabButton, v78, v50, 0);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11746/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0);
      if ( !explanationLabel )
        goto LABEL_150;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0);
      modeKind = 0;
      break;
    case 1:
      v80 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11744/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0);
      if ( !v80 )
        goto LABEL_150;
      UILabel__set_text(v80, (System_String_o *)Instance, 0);
      modeKind = 1;
      break;
    case 2:
      v81 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11743/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0);
      if ( !v81 )
        goto LABEL_150;
      UILabel__set_text(v81, (System_String_o *)Instance, 0);
      modeKind = 2;
      break;
    case 3:
      v82 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11745/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0);
      if ( !v82 )
        goto LABEL_150;
      UILabel__set_text(v82, (System_String_o *)Instance, 0);
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
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, modeKind == 3, v61);
    v83 = this->fields.servantListViewManager;
    v84 = (ServantListViewManager_CallbackFunc_o *)sub_1C93D20(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v84,
      (Il2CppObject *)this,
      (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
      0);
    if ( !v83 )
      goto LABEL_150;
    v83->fields.callbackFunc = v84;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v83->fields.callbackFunc, (int32_t)v84, v85, v86, v87, v88, v89, v90);
    v91 = 2;
    Instance = (__int64)v83;
  }
  else
  {
    v91 = 1;
  }
  ServantListViewManager__SetMode_35483448((ServantListViewManager_o *)Instance, v91, v61);
  Instance = (__int64)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !Instance
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        Instance = (__int64)ServantListViewManager__GetScaleButtonSpriteName((ServantListViewManager_o *)Instance, v12),
        !scaleChangeTabSprite) )
  {
LABEL_150:
    sub_1C93D2C(Instance, v12);
  }
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w21
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w3
  bool v19; // w4
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *v28; // x1
  System_Int64_array *v29; // x2
  bool v30; // w4
  bool v31; // w5
  System_Int64_array *v32; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2C84D & 1) == 0 )
  {
    sub_1C93AD4(&Method_CharaGraphListMenu_EndStatusSync__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C93AD4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2C84D = 1;
  }
  unlockList = 0;
  lockList = 0;
  v32 = 0;
  choiceList = 0;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_28;
    if ( ServantListViewManager__GetSwapChoiceList(servantListViewManager, &choiceList, &v32, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      tabKind = this->fields.tabKind;
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v27, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( tabKind == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v27,
                                                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v17 = v32;
          v16 = choiceList;
          v19 = 1;
          v18 = 0;
          goto LABEL_19;
        }
LABEL_28:
        sub_1C93D2C(servantListViewManager, callback);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v27,
                                                             (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v29 = v32;
      v28 = choiceList;
      v31 = 1;
      v30 = 0;
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = this->fields.tabKind;
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( v14 == 2 )
      {
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                               v15,
                                                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v17 = unlockList;
          v16 = lockList;
          v18 = 1;
          v19 = 0;
LABEL_19:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v16,
            v17,
            v18,
            v19,
            0);
          return;
        }
        goto LABEL_28;
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_object_(
                                                             v15,
                                                             (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_28;
      v29 = unlockList;
      v28 = lockList;
      v30 = 1;
      v31 = 0;
LABEL_26:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v28, v29, 0, v30, v31, 0);
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

  if ( (byte_4D2C841 & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D2C841 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C940C8(v7);
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

  if ( (byte_4D2C842 & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphListMenu_CallbackFunc_TypeInfo);
    byte_4D2C842 = 1;
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
    v8 = sub_1CEF8A8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListMenu_o *)sub_1C940C8(v7);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3C1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3BD4;
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
  if ( (byte_4D2C856 & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphListMenu_ResultKind_TypeInfo);
    byte_4D2C856 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC3C80;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC3C38;
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
  if ( (byte_4D2C857 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2C857 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  struct ServantListViewManager_o *servantListViewManager; // x19
  ServantListViewManager_CallbackFunc_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2

  if ( (byte_4D2C858 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_CharaGraphListMenu_OnSelectServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__);
    byte_4D2C858 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31581328(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1C93D2C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v17 = (ServantListViewManager_CallbackFunc_o *)sub_1C93D20(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_CharaGraphListMenu_OnSelectServant__,
    0);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  ServantListViewManager__SetMode_35483448(servantListViewManager, 2, v24);
}


void CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  CharaGraphListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}