void __fastcall CharaGraphListMenu___ctor(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9666 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9666 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    CharaGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


void __fastcall CharaGraphListMenu__Close(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenu__Close_26672452(this, 0LL, v2);
}


void __fastcall CharaGraphListMenu__Close_26672452(
        CharaGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v15; // x4
  System_Action_o *v16; // x20

  if ( (byte_42E9655 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClose__, v10, v11, v12);
    byte_42E9655 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
  CharaGraphListMenu__SetTabKind(this, tabKind, modeKind, 0, v15);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CharaGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall CharaGraphListMenu__EndCardFavoriteRequest(
        CharaGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v9; // x20
  ServantListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E9665 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E9665 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, 1, 0LL),
        v9 = this->fields.servantListViewManager,
        v10 = (ServantListViewManager_CallbackFunc_o *)sub_B5D694(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(servantListViewManager, result);
  }
  ServantListViewManager__SetMode(v9, 2, v10, 0LL);
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
      sub_B5D69C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
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
      sub_B5D69C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
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
      sub_B5D69C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
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
      sub_B5D69C(servantListViewManager, isRequest);
    }
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall CharaGraphListMenu__EndCloseList(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListMenu__EndCloseShowServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  ServantListViewManager_o *v9; // x20
  ServantListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E9662 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E9662 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (ServantListViewManager__UpdateItemDisplayState(servantListViewManager, this->fields.modeKind == 3, 0LL),
        v9 = this->fields.servantListViewManager,
        v10 = (ServantListViewManager_CallbackFunc_o *)sub_B5D694(ServantListViewManager_CallbackFunc_TypeInfo),
        ServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(servantListViewManager, method);
  }
  ServantListViewManager__SetMode(v9, 2, v10, 0LL);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x21
  System_Action_o *v20; // x0
  bool v21; // cc
  System_Action_o *v22; // x20
  __int64 *v23; // x8

  if ( (byte_42E9660 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndCloseShowServantQuestJump__, v9, v10, v11);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndCloseShowServant__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42E9660 = 1;
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
      sub_B5D69C(servantListViewManager, isDecide);
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42E9661 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndCloseShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E9661 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (ServantListViewManager__ModifyList(servantListViewManager, 0, 0LL),
          (servantListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B5D69C(servantListViewManager, isDecide);
    }
    ServantListViewManager__SetMode_32483724(servantListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ServantListViewManager_o *servantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42E9663 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9663 = 1;
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
      sub_B5D69C(servantListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantListViewManager, 0LL);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabChoice(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E965C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E965C = 1;
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
        v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabChoice__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabChoice__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v15, v16);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, v11);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabCommandCode(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v12; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E9659 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabCommandCode__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9659 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B5D69C(0LL, method);
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
      CharaGraphListMenu__SetTabKind(this, 2, modeKind, 0, v12);
    }
    else
    {
      v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabCommandCode__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v14, v15);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabLock(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x4
  int32_t modeKind; // w8
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42E965B & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E965B = 1;
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
        v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
        CharaGraphListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_EndClickTabLock__,
          0LL);
        CharaGraphListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabLock__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v15, v16);
    }
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, v11);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabPush(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E965D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabPush__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E965D = 1;
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
    v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabPush__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServant(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v12; // x4
  int32_t modeKind; // w2
  CharaGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E9657 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabServant__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9657 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B5D69C(0LL, method);
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
      CharaGraphListMenu__SetTabKind(this, 0, modeKind, 0, v12);
    }
    else
    {
      v14 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServant__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v14, v15);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabServantEquip(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantListViewManager_o *servantListViewManager; // x0
  const MethodInfo *v12; // x2
  CharaGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42E9658 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabServantEquip__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9658 = 1;
  }
  if ( this->fields.state == 2 )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B5D69C(0LL, method);
    ServantListViewManager__SaveSortInfo(servantListViewManager, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      CharaGraphListMenu__EndClickTabServantEquip(this, 0, v12);
    }
    else
    {
      v13 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
      CharaGraphListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndClickTabServantEquip__,
        0LL);
      CharaGraphListMenu__StatusRequest(this, v13, v14);
    }
  }
}


void __fastcall CharaGraphListMenu__OnClickTabStatus(CharaGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CharaGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E965A & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E965A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (CharaGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenu_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_EndClickTabStatus__,
      0LL);
    CharaGraphListMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall CharaGraphListMenu__OnSelectServant(
        CharaGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  __int64 v88; // x19
  ServantListViewManager_o *servantListViewManager; // x0
  __int64 v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **Item; // x1
  ServantListViewItem_o **v104; // x20
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int32_t tabKind; // w22
  ServantListViewItem_o *v108; // x8
  CommonUI_o *v109; // x19
  UserCommandCodeEntity_o *userCommandCodeEntity; // x20
  ServantStatusDialog_EndDelegate_o *v111; // x22
  const MethodInfo *v112; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *v114; // x8
  __int128 v115; // q1
  ServantListViewManager_o *v116; // x19
  ServantListViewManager_CallbackFunc_o *v117; // x20
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v119; // x22
  ServantStatusDialog_ResultDelegate_o *v120; // x22
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v122; // x21
  __int64 v123; // x22
  __int64 v124; // x23
  ServantEntity_o *v125; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v127; // w22
  int32_t v128; // w27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v129; // x8
  int32_t v130; // w22
  int32_t v131; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v133; // x21
  System_String_o *v134; // x22
  __int64 v135; // x24
  int32_t Rarity; // w26
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x26
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x26
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  System_Int32_array **v157; // x25
  int32_t v158; // w0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x25
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x25
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x20
  System_String_o *v180; // x20
  System_String_o *v181; // x22
  System_String_o *v182; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v184; // x25
  __int64 v185; // x0
  __int64 v186; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v187; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v188; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v189; // 0:x0.16

  if ( (byte_42E965F & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, kind, n, method);
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndShowServantEquip__, v10, v11, v12);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndShowServant__, v13, v14, v15);
    sub_B5D5C4(&Method_CharaGraphListMenu_OnSelectServant__, v16, v17, v18);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v22, v23, v24);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v25, v26, v27);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v28, v29, v30);
    sub_B5D5C4(&DataManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v34, v35, v36);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v37, v38, v39);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&object___TypeInfo, v46, v47, v48);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Rarity_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v61, v62, v63);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v64, v65, v66);
    sub_B5D5C4(&SoundManager_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__0__, v70, v71, v72);
    sub_B5D5C4(&CharaGraphListMenu___c__DisplayClass69_0_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v85, v86, v87);
    byte_42E965F = 1;
  }
  v88 = sub_B5D694(CharaGraphListMenu___c__DisplayClass69_0_TypeInfo);
  CharaGraphListMenu___c__DisplayClass69_0___ctor((CharaGraphListMenu___c__DisplayClass69_0_o *)v88, 0LL);
  if ( !v88 )
    goto LABEL_109;
  *(_QWORD *)(v88 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v88 + 16), (System_Int32_array **)this, v91, v92, v93, v94, v95, v96);
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
    *(_QWORD *)(v88 + 24) = Item;
    v104 = (ServantListViewItem_o **)(v88 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v88 + 24), Item, v97, v98, v99, v100, v101, v102);
    if ( kind != 1 )
    {
      CharaGraphListMenu__Callback(this, 0, v105, v106);
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
        servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v108 = *v104;
        v109 = (CommonUI_o *)servantListViewManager;
        if ( tabKind == 2 )
        {
          if ( v108 )
          {
            userCommandCodeEntity = v108->fields.userCommandCodeEntity;
            v111 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v111,
              (Il2CppObject *)this,
              Method_CharaGraphListMenu_EndShowServantEquip__,
              0LL);
            if ( v109 )
            {
              CommonUI__OpenServantStatusDialog_18215196(v109, 0, userCommandCodeEntity, v111, 0LL, 0LL);
              return;
            }
          }
LABEL_109:
          sub_B5D69C(servantListViewManager, v90);
        }
        if ( !v108 )
          goto LABEL_109;
        userSvtEntity = v108->fields.userSvtEntity;
        if ( tabKind == 1 )
        {
          v119 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v119,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( !v109 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18212884(v109, 0, userSvtEntity, v119, 0LL);
        }
        else
        {
          v120 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
          ServantStatusDialog_ResultDelegate___ctor(
            v120,
            (Il2CppObject *)this,
            Method_CharaGraphListMenu_EndShowServant__,
            0LL);
          if ( !v109 )
            goto LABEL_109;
          CommonUI__OpenServantStatusDialog_18213380(v109, 0, userSvtEntity, v120, 0, 0LL);
        }
        return;
      case 1:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(11, 0LL);
        servantListViewManager = (ServantListViewManager_o *)*v104;
        if ( !*v104 )
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
        servantListViewManager = (ServantListViewManager_o *)*v104;
        if ( !*v104 )
          goto LABEL_109;
        ServantListViewItem__SwapChoice((ServantListViewItem_o *)servantListViewManager, 0LL);
LABEL_43:
        v116 = this->fields.servantListViewManager;
        this->fields.state = 2;
        goto LABEL_44;
      case 3:
        if ( !*v104 )
          goto LABEL_109;
        if ( (*v104)->fields.isEnabled )
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
          if ( !*v104 )
            goto LABEL_109;
          v114 = (*v104)->fields.userSvtEntity;
          if ( !v114 )
            goto LABEL_109;
          v115 = *(_OWORD *)&v114->fields.id.fields.fakeValue;
          *(_OWORD *)&v188.fields.currentCryptoKey = *(_OWORD *)&v114->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v188.fields.fakeValue = v115;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v187 = v188;
          if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v187, 0LL) )
          {
LABEL_37:
            CharaGraphListMenu__PushRequest(this, *v104, v112);
            return;
          }
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( !servantListViewManager )
            goto LABEL_109;
          Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)servantListViewManager,
                     dropList,
                     (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          servantListViewManager = (ServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !servantListViewManager )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)servantListViewManager,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
          if ( !Entity )
            goto LABEL_109;
          v122 = (DataMasterBase_WarMaster__WarEntity__int__o *)servantListViewManager;
          v124 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
          v123 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v189.fields.currentCryptoKey = v124;
          *(_QWORD *)&v189.fields.fakeValue = v123;
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v189,
                                                                 0LL);
          if ( !v122 )
            goto LABEL_109;
          v125 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v122,
                                      (int32_t)servantListViewManager,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v127 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.svtId, 0LL);
          servantListViewManager = (ServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 Entity->fields.limitCount,
                                                                 0LL);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_109;
          servantListViewManager = (ServantListViewManager_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                 Master_WarQuestSelectionMaster,
                                                                 v127,
                                                                 (int32_t)servantListViewManager,
                                                                 0LL);
          if ( !*v104 )
            goto LABEL_109;
          v128 = (int)servantListViewManager;
          servantListViewManager = (ServantListViewManager_o *)ServantListViewItem__get_SvtId(*v104, 0LL);
          if ( !*v104 )
            goto LABEL_109;
          v129 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v104)->fields.userSvtEntity;
          if ( !v129 )
            goto LABEL_109;
          v130 = (int)servantListViewManager;
          v131 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v129[6], 0LL);
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         Master_WarQuestSelectionMaster,
                                         v130,
                                         v131,
                                         0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v133 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
          v134 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
          v135 = sub_B5D5DC(object___TypeInfo, 6LL);
          Rarity = UserServantEntity__getRarity(Entity, 0LL);
          if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
          servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
          if ( !v135 )
            goto LABEL_109;
          v143 = (System_Int32_array **)servantListViewManager;
          if ( !servantListViewManager
            || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                       servantListViewManager,
                                                                       *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
          {
            if ( !*(_DWORD *)(v135 + 24) )
              goto LABEL_110;
            *(_QWORD *)(v135 + 32) = v143;
            sub_B5D560((BattleServantConfConponent_o *)(v135 + 32), v143, v137, v138, v139, v140, v141, v142);
            if ( !v125 )
              goto LABEL_109;
            servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(v125, 0LL);
            v150 = (System_Int32_array **)servantListViewManager;
            if ( !servantListViewManager
              || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                         servantListViewManager,
                                                                         *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
            {
              if ( *(_DWORD *)(v135 + 24) <= 1u )
                goto LABEL_110;
              *(_QWORD *)(v135 + 40) = v150;
              sub_B5D560((BattleServantConfConponent_o *)(v135 + 40), v150, v144, v145, v146, v147, v148, v149);
              servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(v125, v128, -1, 0LL);
              v157 = (System_Int32_array **)servantListViewManager;
              if ( !servantListViewManager
                || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                           servantListViewManager,
                                                                           *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
              {
                if ( *(_DWORD *)(v135 + 24) <= 2u )
                  goto LABEL_110;
                *(_QWORD *)(v135 + 48) = v157;
                sub_B5D560((BattleServantConfConponent_o *)(v135 + 48), v157, v151, v152, v153, v154, v155, v156);
                if ( !*v104 )
                  goto LABEL_109;
                servantListViewManager = (ServantListViewManager_o *)(*v104)->fields.userSvtEntity;
                if ( !servantListViewManager )
                  goto LABEL_109;
                v158 = UserServantEntity__getRarity((UserServantEntity_o *)servantListViewManager, 0LL);
                servantListViewManager = (ServantListViewManager_o *)Rarity__getRarityType(v158, 0LL);
                v165 = (System_Int32_array **)servantListViewManager;
                if ( !servantListViewManager
                  || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                             servantListViewManager,
                                                                             *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
                {
                  if ( *(_DWORD *)(v135 + 24) <= 3u )
                    goto LABEL_110;
                  *(_QWORD *)(v135 + 56) = v165;
                  sub_B5D560((BattleServantConfConponent_o *)(v135 + 56), v165, v159, v160, v161, v162, v163, v164);
                  if ( !*v104 )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)(*v104)->fields.servantEntity;
                  if ( !servantListViewManager )
                    goto LABEL_109;
                  servantListViewManager = (ServantListViewManager_o *)ServantEntity__getClassName(
                                                                         (ServantEntity_o *)servantListViewManager,
                                                                         0LL);
                  v172 = (System_Int32_array **)servantListViewManager;
                  if ( !servantListViewManager
                    || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                               servantListViewManager,
                                                                               *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
                  {
                    if ( *(_DWORD *)(v135 + 24) <= 4u )
                      goto LABEL_110;
                    *(_QWORD *)(v135 + 64) = v172;
                    sub_B5D560((BattleServantConfConponent_o *)(v135 + 64), v172, v166, v167, v168, v169, v170, v171);
                    if ( !*v104 )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)(*v104)->fields.servantEntity;
                    if ( !servantListViewManager )
                      goto LABEL_109;
                    servantListViewManager = (ServantListViewManager_o *)ServantEntity__getName(
                                                                           (ServantEntity_o *)servantListViewManager,
                                                                           ServantLimitCountSealAfter,
                                                                           -1,
                                                                           0LL);
                    v179 = (System_Int32_array **)servantListViewManager;
                    if ( !servantListViewManager
                      || (servantListViewManager = (ServantListViewManager_o *)sub_B5D684(
                                                                                 servantListViewManager,
                                                                                 *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0LL )
                    {
                      if ( *(_DWORD *)(v135 + 24) > 5u )
                      {
                        *(_QWORD *)(v135 + 72) = v179;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)(v135 + 72),
                          v179,
                          v173,
                          v174,
                          v175,
                          v176,
                          v177,
                          v178);
                        v180 = System_String__Format_44656512(v134, (System_Object_array *)v135, 0LL);
                        v181 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
                        v182 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
                        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        v184 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
                        CommonConfirmDialog_ClickDelegate___ctor(
                          v184,
                          (Il2CppObject *)v88,
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
                        CommonUI__OpenConfirmDialog_18201384(
                          Instance,
                          v133,
                          v180,
                          v181,
                          v182,
                          v184,
                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                          0,
                          0,
                          0LL);
                        return;
                      }
LABEL_110:
                      v185 = sub_B5D6C8(servantListViewManager);
                      sub_B5D668(v185, 0LL);
                    }
                  }
                }
              }
            }
          }
          v186 = sub_B5D6BC(servantListViewManager);
          sub_B5D668(v186, 0LL);
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        v116 = this->fields.servantListViewManager;
LABEL_44:
        v117 = (ServantListViewManager_CallbackFunc_o *)sub_B5D694(ServantListViewManager_CallbackFunc_TypeInfo);
        ServantListViewManager_CallbackFunc___ctor(
          v117,
          (Il2CppObject *)this,
          Method_CharaGraphListMenu_OnSelectServant__,
          0LL);
        if ( !v116 )
          goto LABEL_109;
        ServantListViewManager__SetMode(v116, 2, v117, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t state; // w8
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x4
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  System_Action_o *v20; // x20

  if ( (byte_42E9654 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)callback, method);
    sub_B5D5C4(&Method_CharaGraphListMenu_EndOpen__, v11, v12, v13);
    byte_42E9654 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      this->fields.kind = kind;
      this->fields.callbackFunc = callback;
      sub_B5D560(
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
        sub_B5D69C(0LL, v18);
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, v19);
      this->fields.state = 1;
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_CharaGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v20, 0LL);
    }
  }
  else
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v15);
    this->fields.state = 2;
    CharaGraphListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 0, v16);
  }
}


void __fastcall CharaGraphListMenu__PushRequest(
        CharaGraphListMenu_o *this,
        ServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  DataManager_o *limitCountSupport; // x0
  __int64 v31; // x1
  struct UserServantEntity_o *userSvtEntity; // x19
  DataManager_o *v33; // x23
  UserServantCollectionMaster_o *v34; // x21
  int64_t v35; // x22
  __int64 v36; // x24
  __int64 v37; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v39; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v41; // x8
  int64_t v42; // x0
  __int128 v43; // q0
  NetworkManager_ResultCallbackFunc_o *v44; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v46; // q0
  CardFavoriteRequest_o *v47; // x20
  int32_t v48; // w27
  int32_t v49; // w28
  int32_t v50; // w21
  bool IsLock; // w23
  char v52; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v56; // w0
  __int64 v57; // x8
  int32_t randomSettingSupport; // w19
  int32_t v59; // [xsp+50h] [xbp-110h]
  int32_t v60; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v62; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v64; // [xsp+70h] [xbp-F0h]
  __int64 v65; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E9664 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndCardFavoriteRequest__, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    byte_42E9664 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userSvtEntity = selectItem->fields.userSvtEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userSvtEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v37;
  *(_QWORD *)&v70.fields.fakeValue = v36;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  if ( !v34 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v34, v35, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v39 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  p_fields = &userSvtEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_CharaGraphListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userSvtEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.imageLimitCount, 0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.dispLimitCount, 0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(userSvtEntity->fields.iconLimitCount, 0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userSvtEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v56;
  *(_QWORD *)&v71.fields.currentCryptoKey = v57;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v47 )
LABEL_21:
    sub_B5D69C(limitCountSupport, v31);
  CardFavoriteRequest__beginRequest(
    v47,
    targetUsrSVtId,
    v60,
    v59,
    v48,
    v49,
    v50,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v62,
    IsLock,
    v52 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v65 != v64,
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  bool v105; // w28
  UserGameEntity_o *SelfUserGame; // x26
  __int64 Instance; // x0
  __int64 v108; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v110; // w25
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  LocalizationManager_c *v114; // x0
  float *static_fields; // x8
  float v116; // s8
  float v117; // s9
  float v118; // s10
  float v119; // s11
  float *v120; // x8
  float v121; // s12
  float v122; // s13
  float v123; // s14
  float v124; // s15
  bool v125; // w24
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v127; // x22
  UILabel_o *servantTabLabel; // x27
  System_String_o *v129; // x28
  Il2CppObject *v130; // x22
  Il2CppObject *v131; // x0
  float v132; // s3
  float v133; // s2
  float v134; // s1
  float v135; // s0
  UILabel_o *servantEquipTabLabel; // x27
  System_String_o *v137; // x22
  Il2CppObject *v138; // x28
  Il2CppObject *v139; // x0
  float v140; // s3
  float v141; // s2
  float v142; // s1
  float v143; // s0
  UILabel_o *commandCodeTabLabel; // x26
  System_String_o *v145; // x27
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  Il2CppObject *v149; // x25
  BalanceConfig_c *v150; // x0
  Il2CppObject *v151; // x0
  float v152; // s3
  float v153; // s2
  float v154; // s1
  float v155; // s0
  __int64 *v156; // x8
  System_String_o **v157; // x8
  bool v158; // w25
  UICommonButton_o *servantTabButton; // x22
  bool enabled; // w0
  __int64 *v161; // x8
  System_String_o **v162; // x8
  UICommonButton_o *servantEquipTabButton; // x22
  bool v164; // w0
  __int64 *v165; // x8
  System_String_o **v166; // x8
  UICommonButton_o *commandCodeTabButton; // x22
  bool v168; // w0
  int32_t v169; // w1
  const MethodInfo *v170; // x3
  System_String_o **v171; // x8
  UICommonButton_o *statusTabButton; // x22
  bool v173; // w0
  __int64 *v174; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v176; // w0
  __int64 *v177; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v179; // w0
  __int64 *v180; // x8
  UICommonButton_o *pushTabButton; // x22
  bool v182; // w0
  UILabel_o *explanationLabel; // x21
  UILabel_o *v184; // x21
  UILabel_o *v185; // x21
  UILabel_o *v186; // x21
  ServantListViewManager_o *servantListViewManager; // x22
  ServantListViewManager_CallbackFunc_o *v188; // x23
  UISprite_o *scaleChangeTabSprite; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+0h] [xbp-B0h]
  bool v191; // [xsp+Ch] [xbp-A4h]
  int32_t svtKeep; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v193; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+18h] [xbp-98h] BYREF

  v6 = modeKind;
  if ( (byte_42E9656 & 1) == 0 )
  {
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, tabKind, modeKind, isInit);
    sub_B5D5C4(&Method_CharaGraphListMenu_OnSelectServant__, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v21, v22, v23);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&int_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_17256/*"btn_txt_craftessence_off"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_17296/*"btn_txt_servant_off"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_17253/*"btn_txt_cc_off"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_11880/*"SERVANT_LIST_EXPLANATION_STATUS"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_17254/*"btn_txt_cc_on"*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_17297/*"btn_txt_servant_on"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_17342/*"button_infocheck_unreg"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_17257/*"btn_txt_craftessence_on"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_17341/*"button_infocheck_reg"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v102, v103, v104);
    byte_42E9656 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  v105 = !this->fields.isInitTab;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_188;
  Instance = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_188;
  v110 = Instance;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v111, v112, v113);
    byte_42E563C = 1;
  }
  v114 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v114 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v114->static_fields;
  v116 = static_fields[20];
  v117 = static_fields[21];
  v118 = static_fields[22];
  v119 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v111, v112, v113);
    v114 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v114);
    v114 = LocalizationManager_TypeInfo;
  }
  v120 = (float *)v114->static_fields;
  v121 = v120[24];
  v122 = v120[25];
  v123 = v120[26];
  v124 = v120[27];
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  v191 = v105;
  v125 = isInit;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_188;
  EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                 (EventMaster_o *)Instance,
                                                                                 0,
                                                                                 0LL);
  v127 = System_Linq_Enumerable__ToArray_int_(
           EventValUpEventIdHash,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  setupInfo = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_24751852(setupInfo, v127, 0, 0, 0, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v193 = servantEquipSum[1];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v193);
  if ( !SelfUserGame )
    goto LABEL_188;
  v130 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44573324(v129, v130, v131, 0LL);
  if ( !servantTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind )
    v132 = v119;
  else
    v132 = v124;
  if ( tabKind )
    v133 = v118;
  else
    v133 = v123;
  if ( tabKind )
    v134 = v117;
  else
    v134 = v122;
  if ( tabKind )
    v135 = v116;
  else
    v135 = v121;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v132 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v137 = LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v193 = servantEquipSum[0];
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v193);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v139 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44573324(v137, v138, v139, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_188;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_188;
  if ( tabKind == 1 )
    v140 = v124;
  else
    v140 = v119;
  if ( tabKind == 1 )
    v141 = v123;
  else
    v141 = v118;
  if ( tabKind == 1 )
    v142 = v122;
  else
    v142 = v117;
  if ( tabKind == 1 )
    v143 = v121;
  else
    v143 = v116;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v140 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v193 = v110;
  v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v193);
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v146, v147, v148);
    byte_42E4B73 = 1;
  }
  v150 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v150 = BalanceConfig_TypeInfo;
  }
  svtKeep = v150->static_fields->CommandCodeFrameMax;
  v151 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (__int64)System_String__Format_44573324(v145, v149, v151, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_188;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_188;
  v152 = tabKind == 2 ? v124 : v119;
  v153 = tabKind == 2 ? v123 : v118;
  v154 = tabKind == 2 ? v122 : v117;
  v155 = tabKind == 2 ? v121 : v116;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v152 - 3), 0LL);
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
  v156 = &StringLiteral_17296/*"btn_txt_servant_off"*/;
  if ( !tabKind )
    v156 = &StringLiteral_17297/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v156, 0LL);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v157 = (System_String_o **)(tabKind ? &StringLiteral_17171/*"btn_bg_12"*/ : &StringLiteral_17173/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v157, 0LL);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_188;
  v158 = !v191 && !v125;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               v158,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_188;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantTabButton, enabled, v158, 0LL);
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
  v161 = &StringLiteral_17257/*"btn_txt_craftessence_on"*/;
  if ( tabKind != 1 )
    v161 = &StringLiteral_17256/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v161, 0LL);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v162 = (System_String_o **)(tabKind == 1 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v162, 0LL);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_188;
  v164 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v164, v158, 0LL);
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
  v165 = &StringLiteral_17254/*"btn_txt_cc_on"*/;
  if ( tabKind != 2 )
    v165 = &StringLiteral_17253/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v165, 0LL);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v166 = (System_String_o **)(tabKind == 2 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v166, 0LL);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_188;
  v168 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton, 0LL);
  UICommonButton__SetColliderEnable(commandCodeTabButton, v168, v158, 0LL);
  if ( !v191 && !v125 && this->fields.tabKind == tabKind )
    goto LABEL_130;
  if ( tabKind == 2 )
  {
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
    v169 = 3;
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
        UICommonButton__SetColliderEnable((UICommonButton_o *)Instance, 1, v158, 0LL);
      }
      if ( v191 || v125 )
        goto LABEL_131;
LABEL_130:
      if ( v6 == this->fields.modeKind )
        goto LABEL_180;
      goto LABEL_131;
    }
    Instance = (__int64)this->fields.servantListViewManager;
    if ( !Instance )
      goto LABEL_188;
    v169 = 1;
  }
  ServantListViewManager__CreateList((ServantListViewManager_o *)Instance, v169, setupInfo, 0LL);
  Instance = (__int64)this->fields.servantListViewManager;
  if ( !Instance )
    goto LABEL_188;
  ServantListViewManager__filterButtonState((ServantListViewManager_o *)Instance, 0, 1, 0LL);
  v6 = CharaGraphListMenu__HidePushButton(this, v6, v191 || v125, v170);
  if ( !v191 && !v125 )
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 0, 0LL);
  Instance = (__int64)this->fields.statusTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v171 = (System_String_o **)&StringLiteral_17341/*"button_infocheck_reg"*/;
  if ( v6 )
    v171 = (System_String_o **)&StringLiteral_17342/*"button_infocheck_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v171, 0LL);
  Instance = (__int64)this->fields.statusTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_188;
  v173 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(statusTabButton, v173, v158, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 1, 0LL);
  Instance = (__int64)this->fields.lockTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v174 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( v6 != 1 )
    v174 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v174, 0LL);
  Instance = (__int64)this->fields.lockTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_188;
  v176 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v176, v158, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 2, 0LL);
  Instance = (__int64)this->fields.choiceTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v177 = &StringLiteral_17333/*"button_allchoice_reg"*/;
  if ( v6 != 2 )
    v177 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v177, 0LL);
  Instance = (__int64)this->fields.choiceTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_188;
  v179 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v179, v158, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, v6 != 3, 0LL);
  Instance = (__int64)this->fields.pushTabSprite;
  if ( !Instance )
    goto LABEL_188;
  v180 = &StringLiteral_17347/*"button_push_reg"*/;
  if ( v6 != 3 )
    v180 = &StringLiteral_17348/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v180, 0LL);
  Instance = (__int64)this->fields.pushTabButton;
  if ( !Instance )
    goto LABEL_188;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0LL,
               !v191 && !v125,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_188;
  v182 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v182, v158, 0LL);
  switch ( v6 )
  {
    case 0:
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11880/*"SERVANT_LIST_EXPLANATION_STATUS"*/, 0LL);
      if ( !explanationLabel )
        goto LABEL_188;
      UILabel__set_text(explanationLabel, (System_String_o *)Instance, 0LL);
      v6 = 0;
      break;
    case 1:
      v184 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, 0LL);
      if ( !v184 )
        goto LABEL_188;
      UILabel__set_text(v184, (System_String_o *)Instance, 0LL);
      v6 = 1;
      break;
    case 2:
      v185 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v185 )
        goto LABEL_188;
      UILabel__set_text(v185, (System_String_o *)Instance, 0LL);
      v6 = 2;
      break;
    case 3:
      v186 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, 0LL);
      if ( !v186 )
        goto LABEL_188;
      UILabel__set_text(v186, (System_String_o *)Instance, 0LL);
      v6 = 3;
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
    ServantListViewManager__UpdateItemDisplayState((ServantListViewManager_o *)Instance, v6 == 3, 0LL);
    servantListViewManager = this->fields.servantListViewManager;
    v188 = (ServantListViewManager_CallbackFunc_o *)sub_B5D694(ServantListViewManager_CallbackFunc_TypeInfo);
    ServantListViewManager_CallbackFunc___ctor(
      v188,
      (Il2CppObject *)this,
      Method_CharaGraphListMenu_OnSelectServant__,
      0LL);
    if ( !servantListViewManager )
      goto LABEL_188;
    ServantListViewManager__SetMode(servantListViewManager, 2, v188, 0LL);
  }
  else
  {
    ServantListViewManager__SetMode_32483724((ServantListViewManager_o *)Instance, 1, 0LL);
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
LABEL_188:
    sub_B5D69C(Instance, v108);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)Instance, 0LL);
}


void __fastcall CharaGraphListMenu__StatusRequest(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t modeKind; // w8
  ServantListViewManager_o *servantListViewManager; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // w21
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *v28; // x2
  System_Int64_array *v29; // x1
  bool v30; // w3
  bool v31; // w4
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t tabKind; // w21
  NetworkManager_ResultCallbackFunc_o *v39; // x20
  System_Int64_array *v40; // x2
  System_Int64_array *v41; // x1
  bool v42; // w4
  bool v43; // w5
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E965E & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenu_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
    byte_42E965E = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      tabKind = this->fields.tabKind;
      v39 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v39,
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
                                                               v39,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v28 = unchoiceList;
          v29 = choiceList;
          v31 = 1;
          v30 = 0;
          goto LABEL_21;
        }
LABEL_36:
        sub_B5D69C(servantListViewManager, callback);
      }
      if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                             v39,
                                                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v40 = unchoiceList;
      v41 = choiceList;
      v43 = 1;
      v42 = 0;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = this->fields.tabKind;
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu_EndStatusSync__,
        0LL);
      if ( v26 == 2 )
      {
        if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        servantListViewManager = (ServantListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                               v27,
                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
        if ( servantListViewManager )
        {
          v28 = unlockList;
          v29 = lockList;
          v30 = 1;
          v31 = 0;
LABEL_21:
          CommandCodeStatusSyncRequest__beginRequest(
            (CommandCodeStatusSyncRequest_o *)servantListViewManager,
            v29,
            v28,
            v30,
            v31,
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
                                                             v27,
                                                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( !servantListViewManager )
        goto LABEL_36;
      v40 = unlockList;
      v41 = lockList;
      v42 = 1;
      v43 = 0;
LABEL_34:
      CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)servantListViewManager, v41, v40, 0, v42, v43, 0LL);
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CharaGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenu_o *v11; // x0
  CharaGraphListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9652 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9652 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v8->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_B5D990(v8);
  CharaGraphListMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall CharaGraphListMenu__remove_callbackFunc(
        CharaGraphListMenu_o *this,
        CharaGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct CharaGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E9653 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9653 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenu_CallbackFunc_c *)v8->klass != CharaGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenu_o *)sub_B5D990(v8);
  CharaGraphListMenu__Init(v11, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E4E & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenu_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5E4E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_CallbackFunc__EndInvoke(
        CharaGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  CharaGraphListMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
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
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E4F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5E4F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenu_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CharaGraphListMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CharaGraphListMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x20
  System_Action_o *_9__1; // x22
  struct CharaGraphListMenu_o *_4__this; // x8
  Il2CppObject *v23; // x20
  ServantListViewManager_o *monitor; // x19
  ServantListViewManager_CallbackFunc_o *v25; // x21

  if ( (byte_42E5E4D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&ServantListViewManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CharaGraphListMenu_OnSelectServant__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__, v15, v16, v17);
    byte_42E5E4D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CharaGraphListMenu___c__DisplayClass69_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B5D560(&this->fields.__9__1);
    }
    if ( v20 )
    {
      CommonUI__CloseConfirmDialog_18202348(v20, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(Instance, v19);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v23 = (Il2CppObject *)this->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  monitor = (ServantListViewManager_o *)v23[5].monitor;
  v25 = (ServantListViewManager_CallbackFunc_o *)sub_B5D694(ServantListViewManager_CallbackFunc_TypeInfo);
  ServantListViewManager_CallbackFunc___ctor(v25, v23, Method_CharaGraphListMenu_OnSelectServant__, 0LL);
  if ( !monitor )
    goto LABEL_13;
  ServantListViewManager__SetMode(monitor, 2, v25, 0LL);
}


void __fastcall CharaGraphListMenu___c__DisplayClass69_0___OnSelectServant_b__1(
        CharaGraphListMenu___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  CharaGraphListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}