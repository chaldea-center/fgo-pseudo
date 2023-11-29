void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FCFE4 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FCFE4 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    CharaGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_30618420(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_30618420(
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FCFD3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CharaGraphListMenu_EndClose__, v10);
    byte_40FCFD3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
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
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  ServantListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_40FCFE3 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_CharaGraphListMenu_OnSelectServant__, v4);
    byte_40FCFE3 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v6 = this->fields.servantListViewManager,
        v11 = (ServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantListViewManager_CallbackFunc_TypeInfo,
                                                         v7,
                                                         v8,
                                                         v9,
                                                         v10),
        ServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  ServantListViewManager__SetMode(v6, 2, v11, 0LL);
}


void __fastcall CharaGraphListMenu__EndClickTabChoice(
        CharaGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (v6 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    ServantListViewManager__SetMode_31576552(v6, 3, 0LL);
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
  ServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (v6 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    ServantListViewManager__SetMode_31576552(v6, 3, 0LL);
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
  ServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (v6 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    ServantListViewManager__SetMode_31576552(v6, 3, 0LL);
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
  ServantListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (v6 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    ServantListViewManager__SetMode_31576552(v6, 3, 0LL);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  ServantListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_40FCFE0 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_CharaGraphListMenu_OnSelectServant__, v3);
    byte_40FCFE0 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v5 = this->fields.servantListViewManager,
        v10 = (ServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantListViewManager_CallbackFunc_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9),
        ServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_B170D4();
  }
  ServantListViewManager__SetMode(v5, 2, v10, 0LL);
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
  ListViewManager_o *v13; // x0
  ServantListViewManager_o *v14; // x0
  CommonUI_o *Instance; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x0
  bool v21; // cc
  System_Action_o *v22; // x20
  __int64 *v23; // x8

  if ( (byte_40FCFDE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9);
    sub_B16FFC(&Method_CharaGraphListMenu_EndCloseShowServant__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_40FCFDE = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_15;
    ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL);
    if ( isNeedSort )
    {
      v13 = (ListViewManager_o *)this->fields.servantListViewManager;
      if ( !v13 )
        goto LABEL_15;
      ListViewManager__SortItem(v13, -1, 0, -1, 0LL);
    }
    v14 = this->fields.servantListViewManager;
    if ( !v14 )
LABEL_15:
      sub_B170D4();
    ServantListViewManager__SetMode_31576552(v14, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  v21 = questId < 1;
  v22 = v20;
  if ( v21 )
    v23 = &Method_CharaGraphListMenu_EndCloseShowServant__;
  else
    v23 = &Method_CharaGraphListMenu_EndCloseShowServantQuestJump__;
  System_Action___ctor(v20, (Il2CppObject *)this, *v23, 0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
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
  ServantListViewManager_o *v8; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FCFDF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_CharaGraphListMenu_EndCloseShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FCFDF = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B170D4();
    }
    ServantListViewManager__SetMode_31576552(v8, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CharaGraphListMenu_RequestCallbackFunc__Invoke(requedstCallback, 1, 0LL);
  }
}


int32_t __fastcall CharaGraphListMenu__HidePushButton(
        CharaGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pushTabSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v10; // x0
  UICommonButton_o *v11; // x0

  pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
  if ( !pushTabSprite
    || (gameObject = UnityEngine_Component__get_gameObject(pushTabSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (pushTabButton = this->fields.pushTabButton) == 0LL)
    || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
          pushTabButton,
          0LL,
          pushTabButton->klass->vtable._6_OnInit.methodPtr),
        (v10 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(v10, 0, 0LL), (v11 = this->fields.pushTabButton) == 0LL) )
  {
    sub_B170D4();
  }
  UICommonButton__SetColliderEnable(v11, 0, !isInit, 0LL);
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
    sub_B170D4();
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
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v4; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FCFE1 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCFE1 = 1;
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
          (v4 = this->fields.servantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = ServantListViewManager__GetScaleButtonSpriteName(v4, 0LL),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  const MethodInfo *v8; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FCFDA & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabChoice__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFDA = 1;
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
        v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v12, v13);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v8);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  const MethodInfo *v8; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FCFD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabCommandCode__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B170D4();
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v8);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v6,
                                                          modeKind,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v10, v11);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  const MethodInfo *v8; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FCFD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabLock__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFD9 = 1;
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
        v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                            CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v12, v13);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v8);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FCFDB & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabPush__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFDB = 1;
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
    v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                       CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                       v5,
                                                       v6,
                                                       v7,
                                                       v8);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  const MethodInfo *v8; // x4
  __int64 modeKind; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FCFD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabServant__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B170D4();
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = (unsigned int)this->fields.modeKind;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v8);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v6,
                                                          modeKind,
                                                          v7,
                                                          v8);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v10, v11);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CharaGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FCFD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabServantEquip__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B170D4();
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v7);
    }
    else
    {
      v10 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v6,
                                                          v7,
                                                          v8,
                                                          v9);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v10, v11);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  CharaGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FCFD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndClickTabStatus__, method);
    sub_B16FFC(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FCFD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                       CharaGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                       v5,
                                                       v6,
                                                       v7,
                                                       v8);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu__OnSelectServant(
        CharaGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v34; // x1
  __int64 v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  ServantListViewManager_o *servantListViewManager; // x0
  System_Int32_array **Item; // x1
  ServantListViewItem_o **v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t tabKind; // w22
  WebViewManager_o *Instance; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  ServantListViewItem_o *v59; // x8
  CommonUI_o *v60; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v68; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *v70; // x8
  __int128 v71; // q1
  ServantListViewManager_o *v72; // x19
  ServantListViewManager_CallbackFunc_o *v73; // x20
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v75; // x22
  ServantStatusDialog_ResultDelegate_o *v76; // x22
  WebViewManager_o *v77; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x26
  WebViewManager_o *v80; // x0
  WarQuestSelectionMaster_o *v81; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v82; // x21
  __int64 v83; // x22
  __int64 v84; // x23
  int32_t v85; // w0
  ServantEntity_o *v86; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v88; // w22
  int32_t v89; // w0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v91; // w27
  int32_t SvtId; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v93; // x8
  int32_t v94; // w22
  int32_t v95; // w0
  int32_t v96; // w23
  System_String_o *v97; // x21
  System_String_o *v98; // x22
  __int64 v99; // x2
  __int64 v100; // x24
  int32_t Rarity; // w26
  System_String_o *RarityType; // x0
  __int64 v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x26
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x26
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x25
  UserServantEntity_o *v123; // x0
  int32_t v124; // w0
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x25
  ServantEntity_o *servantEntity; // x0
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x25
  ServantEntity_o *v138; // x0
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x20
  System_String_o *v145; // x20
  System_String_o *v146; // x22
  System_String_o *v147; // x23
  CommonUI_o *v148; // x24
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  CommonConfirmDialog_ClickDelegate_o *v153; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v154; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v155; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16

  if ( (byte_40FCFDD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_CharaGraphListMenu_EndShowServantEquip__, v9);
    sub_B16FFC(&Method_CharaGraphListMenu_EndShowServant__, v10);
    sub_B16FFC(&Method_CharaGraphListMenu_OnSelectServant__, v11);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&object___TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_B16FFC(&Rarity_TypeInfo, v24);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_B16FFC(&SoundManager_TypeInfo, v28);
    sub_B16FFC(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v29);
    sub_B16FFC(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v30);
    sub_B16FFC(&StringLiteral_11946, v31);
    sub_B16FFC(&StringLiteral_11944, v32);
    sub_B16FFC(&StringLiteral_11945, v33);
    sub_B16FFC(&StringLiteral_11947, v34);
    byte_40FCFDD = 1;
  }
  v35 = sub_B170CC(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
  CharaGraphListMenu___c__DisplayClass69_0___ctor((CharaGraphListMenu___c__DisplayClass69_0_o *)v35, 0LL);
  if ( !v35 )
    goto LABEL_109;
  *(_QWORD *)(v35 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
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
    *(_QWORD *)(v35 + 24) = Item;
    v50 = (ServantListViewItem_o **)(v35 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v35 + 24), Item, v42, v43, v44, v45, v46, v47);
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v59 = *v50;
        v60 = (CommonUI_o *)Instance;
        if ( tabKind == 2 )
        {
          if ( v59 )
          {
            userCommandCodeEntity = v59->fields.userCommandCodeEntity;
            v62 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v55,
                                                         v56,
                                                         v57,
                                                         v58);
            ServantStatusDialog_EndDelegate___ctor(
              v62,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v60 )
            {
              CommonUI__OpenServantStatusDialog_18250552(v60, 0, userCommandCodeEntity, v62, 0LL, 0LL);
              return;
            }
          }
LABEL_109:
          sub_B170D4();
        }
        if ( !v59 )
          goto LABEL_109;
        userSvtEntity = v59->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v75 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57,
                                                       v58);
          ServantStatusDialog_EndDelegate___ctor(
            v75,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v60 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18248328(v60, 0, userSvtEntity, v75, 0LL);
        }
        else
        {
          v76 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                          ServantStatusDialog_ResultDelegate_TypeInfo,
                                                          v55,
                                                          v56,
                                                          v57,
                                                          v58);
          ServantStatusDialog_ResultDelegate___ctor(
            v76,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v60 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18248808(v60, 0, userSvtEntity, v76, 0LL);
        }
        return;
      case 1:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(11, 0LL);
        if ( !*v50 )
          goto LABEL_109;
        ServantListViewItem__SwapLock(*v50, 0LL);
        goto LABEL_43;
      case 2:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( !*v50 )
          goto LABEL_109;
        ServantListViewItem__SwapChoice(*v50, 0LL);
LABEL_43:
        v72 = this->fields.servantListViewManager;
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
          SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
          if ( !SelfUserGame )
            goto LABEL_109;
          pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
          if ( !pushUserSvtId )
            goto LABEL_37;
          if ( !*v50 )
            goto LABEL_109;
          v70 = (*v50)->fields.userSvtEntity;
          if ( !v70 )
            goto LABEL_109;
          v71 = *(_OWORD *)&v70->fields.id.fields.fakeValue;
          *(_OWORD *)&v155.fields.currentCryptoKey = *(_OWORD *)&v70->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v155.fields.fakeValue = v71;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v154 = v155;
          if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v154, 0LL) )
          {
LABEL_37:
            CharaGraphListMenu__PushRequest(this, *v50, v68);
            return;
          }
          v77 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v77 )
            goto LABEL_109;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v77, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_109;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     pushUserSvtId,
                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          v80 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v80 )
            goto LABEL_109;
          v81 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                  (DataManager_o *)v80,
                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_109;
          v82 = (DataMasterBase_WarMaster__WarEntity__int__o *)v81;
          v84 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v83 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v156.fields.currentCryptoKey = v84;
          *(_QWORD *)&v156.fields.fakeValue = v83;
          v85 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v156, 0LL);
          if ( !v82 )
            goto LABEL_109;
          v86 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v82,
                                     v85,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.svtId, 0LL);
          v89 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_109;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v88,
                                         v89,
                                         0LL);
          if ( !*v50 )
            goto LABEL_109;
          v91 = ServantLimitCountSealAfter;
          SvtId = ServantListViewItem__get_SvtId(*v50, 0LL);
          if ( !*v50 )
            goto LABEL_109;
          v93 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v50)->fields.userSvtEntity;
          if ( !v93 )
            goto LABEL_109;
          v94 = SvtId;
          v95 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v93[6], 0LL);
          v96 = ServantLimitImageMaster__GetServantLimitCountSealAfter(Master_WarQuestSelectionMaster, v94, v95, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_11947, 0LL);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_11946, 0LL);
          v100 = sub_B17014(object___TypeInfo, 6LL, v99);
          Rarity = UserServantEntity__getRarity(Entity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          RarityType = Rarity__getRarityType(Rarity, 0LL);
          if ( !v100 )
            goto LABEL_109;
          v110 = (System_Int32_array **)RarityType;
          if ( !RarityType
            || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v100 + 24) )
              goto LABEL_110;
            *(_QWORD *)(v100 + 32) = v110;
            sub_B16F98((BattleServantConfConponent_o *)(v100 + 32), v110, v104, v105, v106, v107, v108, v109);
            if ( !v86 )
              goto LABEL_109;
            RarityType = ServantEntity__getClassName(v86, 0LL);
            v116 = (System_Int32_array **)RarityType;
            if ( !RarityType
              || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v100 + 24) <= 1u )
                goto LABEL_110;
              *(_QWORD *)(v100 + 40) = v116;
              sub_B16F98((BattleServantConfConponent_o *)(v100 + 40), v116, v104, v111, v112, v113, v114, v115);
              RarityType = ServantEntity__getName(v86, v91, -1, 0LL);
              v122 = (System_Int32_array **)RarityType;
              if ( !RarityType
                || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v100 + 24) <= 2u )
                  goto LABEL_110;
                *(_QWORD *)(v100 + 48) = v122;
                sub_B16F98((BattleServantConfConponent_o *)(v100 + 48), v122, v104, v117, v118, v119, v120, v121);
                if ( !*v50 )
                  goto LABEL_109;
                v123 = (*v50)->fields.userSvtEntity;
                if ( !v123 )
                  goto LABEL_109;
                v124 = UserServantEntity__getRarity(v123, 0LL);
                RarityType = Rarity__getRarityType(v124, 0LL);
                v130 = (System_Int32_array **)RarityType;
                if ( !RarityType
                  || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v100 + 24) <= 3u )
                    goto LABEL_110;
                  *(_QWORD *)(v100 + 56) = v130;
                  sub_B16F98((BattleServantConfConponent_o *)(v100 + 56), v130, v104, v125, v126, v127, v128, v129);
                  if ( !*v50 )
                    goto LABEL_109;
                  servantEntity = (*v50)->fields.servantEntity;
                  if ( !servantEntity )
                    goto LABEL_109;
                  RarityType = ServantEntity__getClassName(servantEntity, 0LL);
                  v137 = (System_Int32_array **)RarityType;
                  if ( !RarityType
                    || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v100 + 24) <= 4u )
                      goto LABEL_110;
                    *(_QWORD *)(v100 + 64) = v137;
                    sub_B16F98((BattleServantConfConponent_o *)(v100 + 64), v137, v104, v132, v133, v134, v135, v136);
                    if ( !*v50 )
                      goto LABEL_109;
                    v138 = (*v50)->fields.servantEntity;
                    if ( !v138 )
                      goto LABEL_109;
                    RarityType = ServantEntity__getName(v138, v96, -1, 0LL);
                    v144 = (System_Int32_array **)RarityType;
                    if ( !RarityType
                      || (RarityType = (System_String_o *)sub_B170BC(RarityType, *(_QWORD *)(*(_QWORD *)v100 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v100 + 24) > 5u )
                      {
                        *(_QWORD *)(v100 + 72) = v144;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)(v100 + 72),
                          v144,
                          v104,
                          v139,
                          v140,
                          v141,
                          v142,
                          v143);
                        v145 = System_String__Format_43822456(v98, (System_Object_array *)v100, 0LL);
                        v146 = LocalizationManager__Get((System_String_o *)StringLiteral_11945, 0LL);
                        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_11944, 0LL);
                        v148 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v153 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                                        v149,
                                                                        v150,
                                                                        v151,
                                                                        v152);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v153,
                          (Il2CppObject *)v35,
                          Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__,
                          0LL);
                        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !BalanceConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                        }
                        if ( !v148 )
                          goto LABEL_109;
                        CommonUI__OpenConfirmDialog_18236860(
                          v148,
                          v97,
                          v145,
                          v146,
                          v147,
                          v153,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_110:
                      sub_B17100(RarityType, v103, v104);
                      sub_B170A0();
                    }
                  }
                }
              }
            }
          }
          sub_B170F4(RarityType);
          sub_B170A0();
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        v72 = this->fields.servantListViewManager;
LABEL_44:
        v73 = (ServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                         ServantListViewManager_CallbackFunc_TypeInfo,
                                                         v63,
                                                         v64,
                                                         v65,
                                                         v66);
        ServantListViewManager_CallbackFunc___ctor(
          v73,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v72 )
          goto LABEL_109;
        ServantListViewManager__SetMode(v72, 2, v73, 0LL);
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
  const MethodInfo *v16; // x4
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20

  if ( (byte_40FCFD2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_CharaGraphListMenu_EndOpen__, v11);
    byte_40FCFD2 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_B16F98(
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
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v16);
      this->fields.state = 1;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v21, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userSvtEntity; // x19
  UserGameEntity_o *v15; // x23
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantCollectionMaster_o *v18; // x21
  int64_t userId; // x22
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CommonUI_o *v24; // x0
  __int128 v25; // q1
  UserServantEntity_Fields *p_fields; // x24
  int64_t pushUserSvtId; // x8
  int64_t v28; // x0
  __int128 v29; // q0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  NetworkManager_ResultCallbackFunc_o *v34; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v36; // q0
  CardFavoriteRequest_o *v37; // x20
  int32_t v38; // w27
  int32_t v39; // w28
  int32_t v40; // w21
  bool IsLock; // w23
  bool IsChoice; // w0
  bool v43; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t limitCountSupport; // w0
  const MethodInfo *v51; // [xsp+40h] [xbp-120h]
  int32_t v52; // [xsp+50h] [xbp-110h]
  int32_t v53; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v55; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v57; // [xsp+70h] [xbp-F0h]
  int64_t v58; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_40FCFE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, selectItem);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FCFE2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userSvtEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v21;
  *(_QWORD *)&v63.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v25;
  v58 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v61 = v62;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v61, 0LL);
  v29 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v57 = v28;
  *(_OWORD *)&v60.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v60.fields.fakeValue = v29;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.imageLimitCount, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.dispLimitCount, 0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(userSvtEntity->fields.iconLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v64.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v64.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v64, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v53,
    v52,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v55,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v58 != v57,
    v51);
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v44; // x0
  UserCommandCodeMaster_o *v45; // x0
  int32_t Count; // w0
  int32_t v47; // w25
  __int64 v48; // x1
  LocalizationManager_c *v49; // x0
  float *static_fields; // x8
  float v51; // s8
  float v52; // s9
  float v53; // s10
  float v54; // s11
  float *v55; // x8
  float v56; // s12
  float v57; // s13
  float v58; // s14
  float v59; // s15
  WebViewManager_o *v60; // x0
  bool v61; // w24
  EventMaster_o *v62; // x0
  System_Int32_array *EventValUpEventIdList; // x22
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  UILabel_o *servantTabLabel; // x27
  System_String_o *v69; // x28
  __int64 v70; // x0
  Il2CppObject *v71; // x22
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  UILabel_o *v74; // x0
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v80; // x22
  Il2CppObject *v81; // x28
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  UILabel_o *v84; // x0
  float v85; // s3
  float v86; // s2
  float v87; // s1
  float v88; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v90; // x27
  __int64 v91; // x1
  Il2CppObject *v92; // x25
  BalanceConfig_c *v93; // x0
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  UILabel_o *v96; // x0
  float v97; // s3
  float v98; // s2
  float v99; // s1
  float v100; // s0
  struct UICommonButton_o *servantTabButton; // x0
  UnityEngine_Behaviour_o *v102; // x0
  UISprite_o *servantTabTitleSprite; // x0
  System_String_o **v104; // x8
  UISprite_o *servantTabSprite; // x0
  System_String_o **v106; // x8
  struct UICommonButton_o *v107; // x0
  bool v108; // w25
  UICommonButton_o *v109; // x22
  bool enabled; // w0
  struct UICommonButton_o *servantEquipTabButton; // x0
  UnityEngine_Behaviour_o *v112; // x0
  UISprite_o *servantEquipTabTitleSprite; // x0
  System_String_o **v114; // x8
  UISprite_o *servantEquipTabSprite; // x0
  System_String_o **v116; // x8
  struct UICommonButton_o *v117; // x0
  UICommonButton_o *v118; // x22
  bool v119; // w0
  struct UICommonButton_o *commandCodeTabButton; // x0
  UnityEngine_Behaviour_o *v121; // x0
  UISprite_o *commandCodeTabTitleSprite; // x0
  System_String_o **v123; // x8
  UISprite_o *commandCodeTabSprite; // x0
  System_String_o **v125; // x8
  struct UICommonButton_o *v126; // x0
  UICommonButton_o *v127; // x22
  bool v128; // w0
  ServantListViewManager_o *v129; // x0
  ServantListViewManager_o *v130; // x0
  UnityEngine_Component_o *pushTabSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v134; // x0
  UICommonButton_o *v135; // x0
  ServantListViewManager_o *servantListViewManager; // x0
  int32_t v137; // w1
  ServantListViewManager_o *v138; // x0
  const MethodInfo *v139; // x3
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v141; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v143; // x8
  struct UICommonButton_o *v144; // x0
  UICommonButton_o *v145; // x22
  bool v146; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v148; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v150; // x8
  struct UICommonButton_o *v151; // x0
  UICommonButton_o *v152; // x22
  bool v153; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v155; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v157; // x8
  struct UICommonButton_o *v158; // x0
  UICommonButton_o *v159; // x22
  bool v160; // w0
  struct UICommonButton_o *v161; // x0
  UnityEngine_Behaviour_o *v162; // x0
  UISprite_o *v163; // x0
  System_String_o **v164; // x8
  struct UICommonButton_o *v165; // x0
  UICommonButton_o *v166; // x22
  bool v167; // w0
  UILabel_o *explanationLabel; // x21
  System_String_o *v169; // x0
  UILabel_o *v170; // x21
  System_String_o *v171; // x0
  UILabel_o *v172; // x21
  System_String_o *v173; // x0
  UILabel_o *v174; // x21
  System_String_o *v175; // x0
  ServantListViewManager_o *v176; // x0
  ServantListViewManager_o *v177; // x22
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x3
  __int64 v181; // x4
  ServantListViewManager_CallbackFunc_o *v182; // x23
  ServantListViewManager_o *v183; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-B0h]
  bool v187; // [xsp+Ch] [xbp-A4h]
  int32_t svtKeep; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v189; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_40FCFD4 & 1) == 0 )
  {
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_B16FFC(&Method_CharaGraphListMenu_OnSelectServant__, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_B16FFC(&EventUpValSetupInfo_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&StringLiteral_16981, v17);
    sub_B16FFC(&StringLiteral_11701, v18);
    sub_B16FFC(&StringLiteral_17020, v19);
    sub_B16FFC(&StringLiteral_17071, v20);
    sub_B16FFC(&StringLiteral_17072, v21);
    sub_B16FFC(&StringLiteral_16978, v22);
    sub_B16FFC(&StringLiteral_17057, v23);
    sub_B16FFC(&StringLiteral_16896, v24);
    sub_B16FFC(&StringLiteral_17060, v25);
    sub_B16FFC(&StringLiteral_11699, v26);
    sub_B16FFC(&StringLiteral_11702, v27);
    sub_B16FFC(&StringLiteral_11700, v28);
    sub_B16FFC(&StringLiteral_16979, v29);
    sub_B16FFC(&StringLiteral_17021, v30);
    sub_B16FFC(&StringLiteral_17066, v31);
    sub_B16FFC(&StringLiteral_16898, v32);
    sub_B16FFC(&StringLiteral_2960, v33);
    sub_B16FFC(&StringLiteral_16982, v34);
    sub_B16FFC(&StringLiteral_2961, v35);
    sub_B16FFC(&StringLiteral_17065, v36);
    sub_B16FFC(&StringLiteral_2962, v37);
    sub_B16FFC(&StringLiteral_17059, v38);
    sub_B16FFC(&StringLiteral_17058, v39);
    byte_40FCFD4 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v40 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v44 )
    goto LABEL_188;
  v45 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v44,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !v45 )
    goto LABEL_188;
  Count = UserCommandCodeMaster__getCount(v45, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_188;
  v47 = Count;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v48);
    byte_40F6254 = 1;
  }
  v49 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v49->static_fields;
  v51 = static_fields[20];
  v52 = static_fields[21];
  v53 = static_fields[22];
  v54 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v48);
    v49 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v49);
    v49 = LocalizationManager_TypeInfo;
  }
  v55 = (float *)v49->static_fields;
  v56 = v55[24];
  v57 = v55[25];
  v58 = v55[26];
  v59 = v55[27];
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v60 )
    goto LABEL_188;
  v187 = v40;
  v61 = isInit;
  v62 = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v60,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !v62 )
    goto LABEL_188;
  EventValUpEventIdList = EventMaster__GetEventValUpEventIdList(v62, 0, 0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_B170CC(EventUpValSetupInfo_TypeInfo, v64, v65, v66, v67);
  EventUpValSetupInfo___ctor_24610352(setupInfo, EventValUpEventIdList, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_2961, 0LL);
  v189 = servantEquipSum[1];
  v70 = j_il2cpp_value_box_0(int_TypeInfo, &v189);
  if ( !SelfUserGame )
    goto LABEL_188;
  v71 = (Il2CppObject *)v70;
  svtKeep = SelfUserGame->fields.svtKeep;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v73 = System_String__Format_43739268(v69, v71, v72, 0LL);
  if ( !servantTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantTabLabel, v73, 0LL);
  v74 = this->fields.servantTabLabel;
  if ( !v74 )
    goto LABEL_188;
  if ( tabKind )
    v75 = v54;
  else
    v75 = v59;
  if ( tabKind )
    v76 = v53;
  else
    v76 = v58;
  if ( tabKind )
    v77 = v52;
  else
    v77 = v57;
  if ( tabKind )
    v78 = v51;
  else
    v78 = v56;
  UILabel__set_effectColor(v74, *(UnityEngine_Color_o *)(&v75 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_2962, 0LL);
  v189 = servantEquipSum[0];
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v83 = System_String__Format_43739268(v80, v81, v82, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantEquipTabLabel, v83, 0LL);
  v84 = this->fields.servantEquipTabLabel;
  if ( !v84 )
    goto LABEL_188;
  if ( tabKind == 1 )
    v85 = v59;
  else
    v85 = v54;
  if ( tabKind == 1 )
    v86 = v58;
  else
    v86 = v53;
  if ( tabKind == 1 )
    v87 = v57;
  else
    v87 = v52;
  if ( tabKind == 1 )
    v88 = v56;
  else
    v88 = v51;
  UILabel__set_effectColor(v84, *(UnityEngine_Color_o *)(&v85 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_2960, 0LL);
  v189 = v47;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v189);
  if ( !byte_40F6094 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v91);
    byte_40F6094 = 1;
  }
  v93 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v93 = BalanceConfig_TypeInfo;
  }
  svtKeep = v93->static_fields->CommandCodeFrameMax;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v95 = System_String__Format_43739268(v90, v92, v94, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_188;
  UILabel__set_text(commandCodeTabLabel, v95, 0LL);
  v96 = this->fields.commandCodeTabLabel;
  if ( !v96 )
    goto LABEL_188;
  v97 = tabKind == 2 ? v59 : v54;
  v98 = tabKind == 2 ? v58 : v53;
  v99 = tabKind == 2 ? v57 : v52;
  v100 = tabKind == 2 ? v56 : v51;
  UILabel__set_effectColor(v96, *(UnityEngine_Color_o *)(&v97 - 3), 0LL);
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr);
  v102 = (UnityEngine_Behaviour_o *)this->fields.servantTabButton;
  if ( !v102 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v102, tabKind != 0, 0LL);
  servantTabTitleSprite = this->fields.servantTabTitleSprite;
  if ( !servantTabTitleSprite )
    goto LABEL_188;
  v104 = (System_String_o **)&StringLiteral_17020;
  if ( !tabKind )
    v104 = (System_String_o **)&StringLiteral_17021;
  UISprite__set_spriteName(servantTabTitleSprite, *v104, 0LL);
  servantTabSprite = this->fields.servantTabSprite;
  if ( !servantTabSprite )
    goto LABEL_188;
  v106 = (System_String_o **)(tabKind ? &StringLiteral_16896 : &StringLiteral_16898);
  UISprite__set_spriteName(servantTabSprite, *v106, 0LL);
  v107 = this->fields.servantTabButton;
  if ( !v107 )
    goto LABEL_188;
  v108 = !v187 && !v61;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v107->klass->vtable._14_SetState.method)(
    v107,
    0LL,
    v108,
    v107->klass->vtable._15_OnPress.methodPtr);
  v109 = this->fields.servantTabButton;
  if ( !v109 )
    goto LABEL_188;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v109, enabled, v108, 0LL);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))servantEquipTabButton->klass->vtable._5_set_isEnabled.method)(
    servantEquipTabButton,
    1LL,
    servantEquipTabButton->klass->vtable._6_OnInit.methodPtr);
  v112 = (UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton;
  if ( !v112 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v112, tabKind != 1, 0LL);
  servantEquipTabTitleSprite = this->fields.servantEquipTabTitleSprite;
  if ( !servantEquipTabTitleSprite )
    goto LABEL_188;
  v114 = (System_String_o **)&StringLiteral_16982;
  if ( tabKind != 1 )
    v114 = (System_String_o **)&StringLiteral_16981;
  UISprite__set_spriteName(servantEquipTabTitleSprite, *v114, 0LL);
  servantEquipTabSprite = this->fields.servantEquipTabSprite;
  if ( !servantEquipTabSprite )
    goto LABEL_188;
  v116 = (System_String_o **)(tabKind == 1 ? &StringLiteral_16898 : &StringLiteral_16896);
  UISprite__set_spriteName(servantEquipTabSprite, *v116, 0LL);
  v117 = this->fields.servantEquipTabButton;
  if ( !v117 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v117->klass->vtable._14_SetState.method)(
    v117,
    0LL,
    !v187 && !v61,
    v117->klass->vtable._15_OnPress.methodPtr);
  v118 = this->fields.servantEquipTabButton;
  if ( !v118 )
    goto LABEL_188;
  v119 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(v118, v119, v108, 0LL);
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))commandCodeTabButton->klass->vtable._5_set_isEnabled.method)(
    commandCodeTabButton,
    1LL,
    commandCodeTabButton->klass->vtable._6_OnInit.methodPtr);
  v121 = (UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton;
  if ( !v121 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v121, tabKind != 2, 0LL);
  commandCodeTabTitleSprite = this->fields.commandCodeTabTitleSprite;
  if ( !commandCodeTabTitleSprite )
    goto LABEL_188;
  v123 = (System_String_o **)&StringLiteral_16979;
  if ( tabKind != 2 )
    v123 = (System_String_o **)&StringLiteral_16978;
  UISprite__set_spriteName(commandCodeTabTitleSprite, *v123, 0LL);
  commandCodeTabSprite = this->fields.commandCodeTabSprite;
  if ( !commandCodeTabSprite )
    goto LABEL_188;
  v125 = (System_String_o **)(tabKind == 2 ? &StringLiteral_16898 : &StringLiteral_16896);
  UISprite__set_spriteName(commandCodeTabSprite, *v125, 0LL);
  v126 = this->fields.commandCodeTabButton;
  if ( !v126 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v126->klass->vtable._14_SetState.method)(
    v126,
    0LL,
    !v187 && !v61,
    v126->klass->vtable._15_OnPress.methodPtr);
  v127 = this->fields.commandCodeTabButton;
  if ( !v127 )
    goto LABEL_188;
  v128 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(v127, v128, v108, 0LL);
  if ( !v187 && !v61 && this->fields.tabKind == tabKind )
    goto LABEL_130;
  if ( tabKind == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_188;
    v137 = 3;
  }
  else
  {
    if ( tabKind != 1 )
    {
      if ( !tabKind )
      {
        v129 = this->fields.servantListViewManager;
        if ( !v129 )
          goto LABEL_188;
        ServantListViewManager__CreateList(v129, 0, setupInfo, 0LL);
        v130 = this->fields.servantListViewManager;
        if ( !v130 )
          goto LABEL_188;
        ServantListViewManager__filterButtonState(v130, 0, 1, 0LL);
        pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
        if ( !pushTabSprite )
          goto LABEL_188;
        gameObject = UnityEngine_Component__get_gameObject(pushTabSprite, 0LL);
        if ( !gameObject )
          goto LABEL_188;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        pushTabButton = this->fields.pushTabButton;
        if ( !pushTabButton )
          goto LABEL_188;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
          pushTabButton,
          1LL,
          pushTabButton->klass->vtable._6_OnInit.methodPtr);
        v134 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
        if ( !v134 )
          goto LABEL_188;
        UnityEngine_Behaviour__set_enabled(v134, 1, 0LL);
        v135 = this->fields.pushTabButton;
        if ( !v135 )
          goto LABEL_188;
        UICommonButton__SetColliderEnable(v135, 1, v108, 0LL);
      }
      if ( v187 || v61 )
        goto LABEL_131;
LABEL_130:
      if ( modeKind == this->fields.modeKind )
        goto LABEL_180;
      goto LABEL_131;
    }
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_188;
    v137 = 1;
  }
  ServantListViewManager__CreateList(servantListViewManager, v137, setupInfo, 0LL);
  v138 = this->fields.servantListViewManager;
  if ( !v138 )
    goto LABEL_188;
  ServantListViewManager__filterButtonState(v138, 0, 1, 0LL);
  modeKind = CharaGraphListMenu__HidePushButton(this, modeKind, v187 || v61, v139);
  if ( !v187 && !v61 )
    goto LABEL_130;
LABEL_131:
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
    statusTabButton,
    1LL,
    statusTabButton->klass->vtable._6_OnInit.methodPtr);
  v141 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !v141 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v141, modeKind != 0, 0LL);
  statusTabSprite = this->fields.statusTabSprite;
  if ( !statusTabSprite )
    goto LABEL_188;
  v143 = (System_String_o **)&StringLiteral_17065;
  if ( modeKind )
    v143 = (System_String_o **)&StringLiteral_17066;
  UISprite__set_spriteName(statusTabSprite, *v143, 0LL);
  v144 = this->fields.statusTabButton;
  if ( !v144 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v144->klass->vtable._14_SetState.method)(
    v144,
    0LL,
    !v187 && !v61,
    v144->klass->vtable._15_OnPress.methodPtr);
  v145 = this->fields.statusTabButton;
  if ( !v145 )
    goto LABEL_188;
  v146 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v145, v146, v108, 0LL);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
    lockTabButton,
    1LL,
    lockTabButton->klass->vtable._6_OnInit.methodPtr);
  v148 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !v148 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v148, modeKind != 1, 0LL);
  lockTabSprite = this->fields.lockTabSprite;
  if ( !lockTabSprite )
    goto LABEL_188;
  v150 = (System_String_o **)&StringLiteral_17059;
  if ( modeKind != 1 )
    v150 = (System_String_o **)&StringLiteral_17060;
  UISprite__set_spriteName(lockTabSprite, *v150, 0LL);
  v151 = this->fields.lockTabButton;
  if ( !v151 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v151->klass->vtable._14_SetState.method)(
    v151,
    0LL,
    !v187 && !v61,
    v151->klass->vtable._15_OnPress.methodPtr);
  v152 = this->fields.lockTabButton;
  if ( !v152 )
    goto LABEL_188;
  v153 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(v152, v153, v108, 0LL);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
    choiceTabButton,
    1LL,
    choiceTabButton->klass->vtable._6_OnInit.methodPtr);
  v155 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !v155 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v155, modeKind != 2, 0LL);
  choiceTabSprite = this->fields.choiceTabSprite;
  if ( !choiceTabSprite )
    goto LABEL_188;
  v157 = (System_String_o **)&StringLiteral_17057;
  if ( modeKind != 2 )
    v157 = (System_String_o **)&StringLiteral_17058;
  UISprite__set_spriteName(choiceTabSprite, *v157, 0LL);
  v158 = this->fields.choiceTabButton;
  if ( !v158 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v158->klass->vtable._14_SetState.method)(
    v158,
    0LL,
    !v187 && !v61,
    v158->klass->vtable._15_OnPress.methodPtr);
  v159 = this->fields.choiceTabButton;
  if ( !v159 )
    goto LABEL_188;
  v160 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(v159, v160, v108, 0LL);
  v161 = this->fields.pushTabButton;
  if ( !v161 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v161->klass->vtable._5_set_isEnabled.method)(
    v161,
    1LL,
    v161->klass->vtable._6_OnInit.methodPtr);
  v162 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !v162 )
    goto LABEL_188;
  UnityEngine_Behaviour__set_enabled(v162, modeKind != 3, 0LL);
  v163 = this->fields.pushTabSprite;
  if ( !v163 )
    goto LABEL_188;
  v164 = (System_String_o **)&StringLiteral_17071;
  if ( modeKind != 3 )
    v164 = (System_String_o **)&StringLiteral_17072;
  UISprite__set_spriteName(v163, *v164, 0LL);
  v165 = this->fields.pushTabButton;
  if ( !v165 )
    goto LABEL_188;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v165->klass->vtable._14_SetState.method)(
    v165,
    0LL,
    !v187 && !v61,
    v165->klass->vtable._15_OnPress.methodPtr);
  v166 = this->fields.pushTabButton;
  if ( !v166 )
    goto LABEL_188;
  v167 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(v166, v167, v108, 0LL);
  switch ( modeKind )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v169 = LocalizationManager__Get((System_String_o *)StringLiteral_11702, 0LL);
      if ( !explanationLabel )
        goto LABEL_188;
      UILabel__set_text(explanationLabel, v169, 0LL);
      modeKind = 0;
      break;
    case 1:
      v170 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v171 = LocalizationManager__Get((System_String_o *)StringLiteral_11700, 0LL);
      if ( !v170 )
        goto LABEL_188;
      UILabel__set_text(v170, v171, 0LL);
      modeKind = 1;
      break;
    case 2:
      v172 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v173 = LocalizationManager__Get((System_String_o *)StringLiteral_11699, 0LL);
      if ( !v172 )
        goto LABEL_188;
      UILabel__set_text(v172, v173, 0LL);
      modeKind = 2;
      break;
    case 3:
      v174 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v175 = LocalizationManager__Get((System_String_o *)StringLiteral_11701, 0LL);
      if ( !v174 )
        goto LABEL_188;
      UILabel__set_text(v174, v175, 0LL);
      modeKind = 3;
      break;
    default:
      break;
  }
LABEL_180:
  v176 = this->fields.servantListViewManager;
  if ( !v176 )
    goto LABEL_188;
  if ( this->fields.state == 2 )
  {
    ServantListViewManager__UpdateItemDisplayState(v176, modeKind == 3, 0LL);
    v177 = this->fields.servantListViewManager;
    v182 = (ServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                      ServantListViewManager_CallbackFunc_TypeInfo,
                                                      v178,
                                                      v179,
                                                      v180,
                                                      v181);
    ServantListViewManager_CallbackFunc___ctor(
      v182,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !v177 )
      goto LABEL_188;
    ServantListViewManager__SetMode(v177, 2, v182, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_31576552(v176, 1, 0LL);
  }
  v183 = this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( !v183
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleButtonSpriteName = ServantListViewManager__GetScaleButtonSpriteName(v183, 0LL),
        !scaleChangeTabSprite) )
  {
LABEL_188:
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
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
  ServantListViewManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t v17; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CommandCodeStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w3
  bool v27; // w4
  ServantListViewManager_o *servantListViewManager; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t tabKind; // w21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  NetworkManager_ResultCallbackFunc_o *v40; // x20
  CardStatusSyncRequest_o *v41; // x0
  const MethodInfo *v42; // x6
  System_Int64_array *v43; // x2
  System_Int64_array *v44; // x1
  bool v45; // w4
  bool v46; // w5
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FCFDC & 1) == 0 )
  {
    sub_B16FFC(&Method_CharaGraphListMenu_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B16FFC(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FCFDC = 1;
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
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      tabKind = this->fields.tabKind;
      v40 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v36,
                                                     v37,
                                                     v38,
                                                     v39);
      NetworkManager_ResultCallbackFunc___ctor(
        v40,
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
        Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                v40,
                                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          v24 = unchoiceList;
          v25 = choiceList;
          v27 = 1;
          v26 = 0;
          goto LABEL_21;
        }
LABEL_36:
        sub_B170D4();
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v41 = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                         v40,
                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !v41 )
        goto LABEL_36;
      v43 = unchoiceList;
      v44 = choiceList;
      v46 = 1;
      v45 = 0;
      goto LABEL_34;
    }
  }
  else if ( modeKind == 1 )
  {
    v10 = this->fields.servantListViewManager;
    if ( !v10 )
      goto LABEL_36;
    if ( ServantListViewManager__GetSwapLockList(v10, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = this->fields.tabKind;
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20,
                                                     v21);
      NetworkManager_ResultCallbackFunc___ctor(
        v22,
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
        Request_WarBoardWallAttackRequest = (CommandCodeStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                v22,
                                                                                (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          v24 = unlockList;
          v25 = lockList;
          v26 = 1;
          v27 = 0;
LABEL_21:
          CommandCodeStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v25, v24, v26, v27, 0LL);
          return;
        }
        goto LABEL_36;
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v41 = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                         v22,
                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !v41 )
        goto LABEL_36;
      v43 = unlockList;
      v44 = lockList;
      v45 = 1;
      v46 = 0;
LABEL_34:
      CardStatusSyncRequest__beginRequest(v41, v44, v43, 0, v45, v46, v42);
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

  if ( (byte_40FCFD0 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_40FCFD0 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
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

  if ( (byte_40FCFD1 & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_40FCFD1 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B173C8(v7);
  CharaGraphListMenu__Init(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenu_CallbackFunc___ctor(
        CharaGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F70BE & 1) == 0 )
  {
    sub_B16FFC(&CharaGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_40F70BE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v8);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F70BF & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F70BF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  CommonUI_o *v14; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct CharaGraphListMenu_o *_4__this; // x8
  Il2CppObject *v27; // x20
  ServantListViewManager_o *monitor; // x19
  ServantListViewManager_CallbackFunc_o *v29; // x21

  if ( (byte_40F70BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&ServantListViewManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_CharaGraphListMenu_OnSelectServant__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v8);
    byte_40F70BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18237824(v14, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v27 = (Il2CppObject *)this->fields.__4__this;
  if ( !v27 )
    goto LABEL_13;
  monitor = (ServantListViewManager_o *)v27[5].monitor;
  v29 = (ServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                   ServantListViewManager_CallbackFunc_TypeInfo,
                                                   v22,
                                                   v23,
                                                   v24,
                                                   v25);
  ServantListViewManager_CallbackFunc___ctor(v29, v27, Method_CharaGraphListMenu_OnSelectServant__, 0LL);
  if ( !monitor )
    goto LABEL_13;
  ServantListViewManager__SetMode(monitor, 2, v29, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  CharaGraphListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}