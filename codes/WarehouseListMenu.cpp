void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FA458 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_442/*"#4C4C4C"*/, v4);
    byte_49FA458 = 1;
  }
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_442/*"#4C4C4C"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)WarehouseListMenu_TypeInfo->static_fields, StringLiteral_442/*"#4C4C4C"*/, v2, v3);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA457 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49FA457 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Callback(
        WarehouseListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x21
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B6406C(p_callbackFunc, 0, n, (int32_t)method);
    if ( !result )
      result = this->fields.isModify;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__ChangeIconScale(WarehouseListMenu_o *this, bool result, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListMenu_o *v4; // x19
  const MethodInfo *v5; // x1
  struct WarehouseListManager_o *v6; // x8
  UISprite_o *scaleChageTabSprite; // x19

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (v4 = this, (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL)
    || (WarehouseListViewManager__ChangeIconScale((WarehouseListViewManager_o *)this, (const MethodInfo *)result),
        (v6 = v4->fields.servantListViewManager) == 0LL)
    || (this = (WarehouseListMenu_o *)v6->fields.baseListViewManager) == 0LL
    || (scaleChageTabSprite = v4->fields.scaleChageTabSprite,
        this = (WarehouseListMenu_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                        (WarehouseListViewManager_o *)this,
                                        v5),
        !scaleChageTabSprite) )
  {
    sub_1B64324(this);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_35499816(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_35499816(
        WarehouseListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v9; // x5
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_49FA43C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_WarehouseListMenu_EndClose__, v6);
    byte_49FA43C = 1;
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v9);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall WarehouseListMenu__EndCardFavoriteRequest(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  struct WarehouseListManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  WarehouseListManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  v3 = this;
  if ( (byte_49FA456 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, result);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_49FA456 = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v6 = v3->fields.servantListViewManager,
        v9 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, v7, v8),
        WarehouseListManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v10),
        !v6) )
  {
    sub_1B64324(this);
  }
  v6->fields.callbackFunc = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)v9, v11, v12);
  WarehouseListManager__SetMode_35487312(v6, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickCancel(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0LL) )
    {
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__Callback(v4, 0, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabChoice(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0LL) )
    {
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 2, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabLock(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0LL) )
    {
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 1, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabPush(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0LL) )
    {
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 3, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabPutIn(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t tabKind; // w8
  WarehouseListMenu_o *v5; // x19
  int32_t modeKind; // w2
  int32_t v7; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v9; // x2

  if ( this->fields.state == 2 )
  {
    tabKind = this->fields.tabKind;
    v5 = this;
    if ( tabKind == 3 )
    {
      modeKind = this->fields.modeKind;
      v7 = 1;
    }
    else
    {
      if ( tabKind != 2 )
      {
        if ( isRequest )
        {
          servantListViewManager = this->fields.servantListViewManager;
          if ( !servantListViewManager )
            goto LABEL_15;
          this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
          if ( !this )
            goto LABEL_15;
          WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest);
          this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
          if ( !this )
            goto LABEL_15;
          WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1B64324(this);
      }
      modeKind = this->fields.modeKind;
      v7 = 0;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabPutOut(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t tabKind; // w8
  WarehouseListMenu_o *v5; // x19
  int32_t modeKind; // w2
  int32_t v7; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v9; // x2

  if ( this->fields.state == 2 )
  {
    tabKind = this->fields.tabKind;
    v5 = this;
    if ( tabKind == 1 )
    {
      modeKind = this->fields.modeKind;
      v7 = 3;
    }
    else
    {
      if ( tabKind )
      {
        if ( isRequest )
        {
          servantListViewManager = this->fields.servantListViewManager;
          if ( !servantListViewManager )
            goto LABEL_15;
          this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
          if ( !this )
            goto LABEL_15;
          WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest);
          this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
          if ( !this )
            goto LABEL_15;
          WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1B64324(this);
      }
      modeKind = this->fields.modeKind;
      v7 = 2;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabServant(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t tabKind; // w8
  WarehouseListMenu_o *v5; // x19
  int32_t modeKind; // w2
  int32_t v7; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v9; // x2

  tabKind = this->fields.tabKind;
  v5 = this;
  if ( tabKind == 3 )
  {
    modeKind = this->fields.modeKind;
    v7 = 2;
    goto LABEL_5;
  }
  if ( tabKind == 1 )
  {
    modeKind = this->fields.modeKind;
    v7 = 0;
LABEL_5:
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_11;
  }
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v5->fields.servantListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_11:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 2, method);
}


void __fastcall WarehouseListMenu__EndClickTabServantEquip(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  struct WarehouseListManager_o *baseListViewManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x5
  int32_t tabKind; // w8
  int32_t modeKind; // w2
  int32_t v11; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v13; // x2

  EventTutorialMaster__CheckTutorial(-1, 55, 0LL, 0, 0, 0, 0, 0LL);
  tabKind = this->fields.tabKind;
  if ( tabKind == 2 )
  {
    modeKind = this->fields.modeKind;
    v11 = 3;
    goto LABEL_5;
  }
  if ( !tabKind )
  {
    modeKind = this->fields.modeKind;
    v11 = 1;
LABEL_5:
    WarehouseListMenu__SetTabKind(this, v11, modeKind, 0, 0, v8);
    goto LABEL_11;
  }
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = (struct WarehouseListManager_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)baseListViewManager, v6),
          (baseListViewManager = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_13:
      sub_1B64324(baseListViewManager);
    }
    WarehouseListManager__SetMode_35487312(baseListViewManager, 3, v13);
  }
LABEL_11:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_35487312(baseListViewManager, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabStatus(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2

  v4 = this;
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0LL) )
    {
      sub_1B64324(this);
    }
    WarehouseListManager__SetMode_35487312((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void __fastcall WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  WarehouseListMenu__Init(this, method);
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


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FA44F & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_49FA44F = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v7);
  if ( !servantListViewManager )
    sub_1B64324(v8);
  servantListViewManager->fields.callbackFunc = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v6, v9, v10);
  WarehouseListManager__SetMode_35487312(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x5
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3

  if ( (byte_49FA44C & 1) == 0 )
  {
    sub_1B640C8(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndNotificationMove__, v4);
    byte_49FA44C = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v7);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v12);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v11);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v13);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_1B64324(v8);
      v10 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v10, v6, 0, 0, v9);
      break;
    default:
      return;
  }
}


void __fastcall WarehouseListMenu__EndCloseList(WarehouseListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarehouseListMenu__EndCloseNotificationMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FA44E & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_49FA44E = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v7);
  if ( !servantListViewManager )
    sub_1B64324(v8);
  servantListViewManager->fields.callbackFunc = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v6, v9, v10);
  WarehouseListManager__SetMode_35487312(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FA453 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_49FA453 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v7);
  if ( !servantListViewManager )
    sub_1B64324(v8);
  servantListViewManager->fields.callbackFunc = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v6, v9, v10);
  WarehouseListManager__SetMode_35487312(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_49FA451 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_49FA451 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v7);
  if ( !servantListViewManager )
    sub_1B64324(v8);
  servantListViewManager->fields.callbackFunc = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v6, v9, v10);
  WarehouseListManager__SetMode_35487312(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  const MethodInfo *v14; // x2

  if ( (byte_49FA449 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v6);
    sub_1B640C8(&Method_WarehouseListMenu_EndConfirmRequestLock__, v7);
    byte_49FA449 = 1;
  }
  this->fields.state = 6;
  if ( isDecide )
  {
    if ( (unsigned int)(this->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndConfirmRequestLock(this, 0, method);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        isDecide,
                                                        method);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        v9);
      WarehouseListMenu__StatusRequest(this, v8, v10);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_1B64324(v13);
    WarehouseConfirmMenu__Close_35476256(warehouseConfirmMenu, v12, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_49FA44A & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest);
    sub_1B640C8(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_WarehouseListMenu_EndRequestWarehouse__, v7);
    byte_49FA44A = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  isRequest,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(Request_object);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndNotificationMove(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49FA44D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v4);
    byte_49FA44D = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1B64324(v7);
  WarehouseConfirmMenu__Close_35476256(warehouseConfirmMenu, v6, v8);
}


void __fastcall WarehouseListMenu__EndOpen(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2

  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v2);
}


void __fastcall WarehouseListMenu__EndRequestWarehouse(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  __int64 v5; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  __int64 v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_49FA44B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, result);
    sub_1B640C8(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5);
    byte_49FA44B = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1B64324(v12);
  WarehouseConfirmMenu__Close_35476256(warehouseConfirmMenu, v11, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  v4 = this;
  if ( (byte_49FA452 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v6);
    byte_49FA452 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_1B64324(this);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v13; // x1
  Il2CppObject *Instance; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x0
  bool v18; // cc
  System_Action_o *v19; // x20
  __int64 *v20; // x8

  v8 = this;
  if ( (byte_49FA450 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v10);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_EndCloseServantStatus__, v11);
    byte_49FA450 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v8->fields.servantListViewManager;
    v8->fields.isModify = 1;
    if ( !servantListViewManager )
      goto LABEL_14;
    this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
    if ( !this )
      goto LABEL_14;
    WarehouseListViewManager__ModifyItem(
      (WarehouseListViewManager_o *)this,
      v8->fields.selectNum,
      (const MethodInfo *)isNeedSort);
    if ( isNeedSort )
    {
      this = (WarehouseListMenu_o *)v8->fields.servantListViewManager;
      if ( !this )
        goto LABEL_14;
      WarehouseListManager__SortItem((WarehouseListManager_o *)this, v13);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  v18 = questId < 1;
  v19 = v17;
  if ( v18 )
    v20 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v20 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v17, (Il2CppObject *)v8, *v20, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1B64324(this);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0LL);
}


void __fastcall WarehouseListMenu__EndStatusSync(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19
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


int32_t __fastcall WarehouseListMenu__GetMode(WarehouseListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


int32_t __fastcall WarehouseListMenu__HidePushButton(
        WarehouseListMenu_o *this,
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
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0LL) )
  {
    sub_1B64324(pushTabSprite);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pushTabSprite, 0, 0LL);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void __fastcall WarehouseListMenu__Init(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_o *servantListViewManager; // x0

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_1B64324(0LL);
  WarehouseListManager__DestroyList(servantListViewManager, method);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0LL;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall WarehouseListMenu__IsDragEnable(WarehouseListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind == 0;
}


bool __fastcall WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarehouseListManager_o *servantListViewManager; // x0
  struct WarehouseListManager_o *v5; // x8
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)friendShipSum = 0LL;
  if ( (this->fields.tabKind | 2) != 3 )
    return 1;
  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (WarehouseListManager__GetSelectItemNum(servantListViewManager, &friendShipSum[1], friendShipSum, v2),
        (v5 = this->fields.servantListViewManager) == 0LL) )
  {
    sub_1B64324(servantListViewManager);
  }
  return v5->fields.totalSum - friendShipSum[0] > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49FA43E & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickCancel__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickCancel__, v4);
    byte_49FA43E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v8, v9);
    }
    else
    {
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        v12);
      WarehouseListMenu__StatusRequest(this, v11, v13);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FA454 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_ChangeIconScale__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickScaleChage__, v4);
    byte_49FA454 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickScaleChage__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v7, v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      v10);
    WarehouseListMenu__StatusRequest(this, v9, v11);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_49FA445 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabChoice__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickTabChoice__, v4);
    byte_49FA445 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v12);
        WarehouseListMenu__StatusRequest(this, v11, v13);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1B64324(0LL);
        WarehouseListManager__ReleaseAll(servantListViewManager, v14);
        return;
      }
      v15 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        v16);
      WarehouseListMenu__StatusRequest(this, v15, v17);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v9);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_49FA444 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabLock__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickTabLock__, v4);
    byte_49FA444 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v7,
                                                           v8);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v12);
        WarehouseListMenu__StatusRequest(this, v11, v13);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1B64324(0LL);
        WarehouseListManager__ReleaseAll(servantListViewManager, v14);
        return;
      }
      v15 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        v16);
      WarehouseListMenu__StatusRequest(this, v15, v17);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v9);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_49FA446 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabPush__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickTabPush__, v4);
    byte_49FA446 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v7, v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v10);
    WarehouseListMenu__StatusRequest(this, v9, v11);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B64324(0LL);
    WarehouseListManager__ReleaseAll(servantListViewManager, v12);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_49FA441 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabPutIn__, v3);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_OnClickTabPutIn__, v4);
    byte_49FA441 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B64324(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabPutIn__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v9);
    }
    else
    {
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        v11);
      WarehouseListMenu__StatusRequest(v2, v10, v12);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_49FA442 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabPutOut__, v3);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_OnClickTabPutOut__, v4);
    byte_49FA442 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B64324(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabPutOut__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v9);
    }
    else
    {
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        v11);
      WarehouseListMenu__StatusRequest(v2, v10, v12);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_49FA43F & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabServant__, v3);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_OnClickTabServant__, v4);
    byte_49FA43F = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B64324(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabServant__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v9);
    }
    else
    {
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        v11);
      WarehouseListMenu__StatusRequest(v2, v10, v12);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  v2 = this;
  if ( (byte_49FA440 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabServantEquip__, v3);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_OnClickTabServantEquip__, v4);
    byte_49FA440 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B64324(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v9);
    }
    else
    {
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        v11);
      WarehouseListMenu__StatusRequest(v2, v10, v12);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49FA443 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_WarehouseListMenu_EndClickTabStatus__, v3);
    sub_1B640C8(&Method_WarehouseListMenu_OnClickTabStatus__, v4);
    byte_49FA443 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B64314(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v7, v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      v10);
    WarehouseListMenu__StatusRequest(this, v9, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__OnSelectServant(
        WarehouseListMenu_o *this,
        int32_t result,
        System_Int64_array *list,
        int32_t n,
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
  __int64 v35; // x20
  WarehouseListViewManager_o *baseListViewManager; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x2
  struct WarehouseListManager_o *v47; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v49; // x21
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x5
  struct WarehouseListManager_o *v52; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v56; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  __int64 v61; // x1
  int32_t tabKind; // w8
  Il2CppObject *v63; // x0
  int64_t selectNum; // x20
  Il2CppObject *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  ServantStatusDialog_ResultDelegate_o *v68; // x22
  CommonUI_o *v69; // x0
  int32_t v70; // w1
  struct WarehouseConfirmMenu_o *v71; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v72; // x21
  const MethodInfo *v73; // x3
  WarehouseConfirmMenu_o *v74; // x0
  WarehouseListViewItem_o **v75; // x21
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  const MethodInfo *v78; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v81; // q1
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  struct WarehouseListManager_o *v84; // x20
  __int64 v85; // x1
  __int64 v86; // x2
  WarehouseListManager_CallbackFunc_o *v87; // x21
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  int32_t v90; // w3
  const MethodInfo *v91; // x2
  Il2CppObject *v92; // x0
  int64_t v93; // x20
  Il2CppObject *v94; // x21
  __int64 v95; // x1
  __int64 v96; // x2
  ServantStatusDialog_EndDelegate_o *v97; // x22
  CommonUI_o *v98; // x0
  int32_t v99; // w1
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  Il2CppObject *v104; // x0
  Il2CppObject *v105; // x21
  __int64 v106; // x1
  __int64 v107; // x2
  struct WarehouseConfirmMenu_o *v108; // x20
  const MethodInfo *v109; // x3
  const MethodInfo *v110; // x3
  const MethodInfo *v111; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v112; // x2
  int32_t v113; // w3
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v115; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v118; // x25
  System_String_o *v119; // x19
  System_String_o *v120; // x22
  System_Object_array *v121; // x23
  int32_t Rarity; // w26
  int32_t v123; // w2
  int32_t v124; // w3
  Il2CppObject *v125; // x26
  int32_t v126; // w2
  int32_t v127; // w3
  Il2CppObject *v128; // x26
  int32_t v129; // w0
  int32_t v130; // w2
  int32_t v131; // w3
  Il2CppObject *v132; // x24
  int32_t v133; // w0
  int32_t v134; // w2
  int32_t v135; // w3
  Il2CppObject *v136; // x24
  int32_t v137; // w2
  int32_t v138; // w3
  Il2CppObject *v139; // x24
  WarehouseListViewItem_o *v140; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v143; // w2
  int32_t v144; // w3
  Il2CppObject *v145; // x21
  System_String_o *v146; // x21
  System_String_o *v147; // x22
  System_String_o *v148; // x23
  Il2CppObject *Instance; // x24
  __int64 v150; // x1
  __int64 v151; // x2
  CommonConfirmDialog_ClickDelegate_o *v152; // x25
  const MethodInfo *v153; // x3
  struct WarehouseListManager_o *v154; // x8
  const MethodInfo *v155; // x3
  struct WarehouseListManager_o *v156; // x8
  const MethodInfo *v157; // x3
  struct WarehouseListManager_o *v158; // x8
  __int64 v159; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v160; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v161; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  if ( (byte_49FA448 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, v9);
    sub_1B640C8(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&object___TypeInfo, v18);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B640C8(&Rarity_TypeInfo, v21);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B640C8(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v25);
    sub_1B640C8(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v26);
    sub_1B640C8(&Method_WarehouseListMenu_EndConfirmMove__, v27);
    sub_1B640C8(&Method_WarehouseListMenu_EndServantEquipStatus__, v28);
    sub_1B640C8(&Method_WarehouseListMenu_EndServantStatus__, v29);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v30);
    sub_1B640C8(&StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v31);
    sub_1B640C8(&StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v32);
    sub_1B640C8(&StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v33);
    sub_1B640C8(&StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v34);
    byte_49FA448 = 1;
  }
  v35 = sub_1B64314(WarehouseListMenu___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&result, list);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_119;
  *(_QWORD *)(v35 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 16), (int32_t)this, v37, v38);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectNumList, (int32_t)list, v39, v40);
  if ( result == 3 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_119;
      baseListViewManager = servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_119;
      Item = WarehouseListViewManager__GetItem(baseListViewManager, n, v41);
    }
    *(_QWORD *)(v35 + 24) = Item;
    v75 = (WarehouseListViewItem_o **)(v35 + 24);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)Item, (int32_t)v41, (int32_t)v42);
    if ( !*(_QWORD *)(v35 + 24) || !(*v75)->fields.isEnabled )
    {
      v82 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnSelectServant__);
      v83 = (System_Reflection_MethodBase_o *)sub_1B640AC(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 2, 0LL);
      this->fields.state = 2;
      v84 = this->fields.servantListViewManager;
      v87 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, v85, v86);
      WarehouseListManager_CallbackFunc___ctor(
        v87,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v88);
      if ( v84 )
      {
        v84->fields.callbackFunc = v87;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v84->fields.callbackFunc, (int32_t)v87, v89, v90);
        WarehouseListManager__SetMode_35487312(v84, 2, v91);
        return;
      }
      goto LABEL_119;
    }
    v76 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v76 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnSelectServant__);
    v77 = (System_Reflection_MethodBase_o *)sub_1B640AC(v76, v76[4]);
    OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseListViewManager )
      goto LABEL_119;
    dragParentObject = (int64_t)baseListViewManager->fields.dragParentObject;
    if ( !dragParentObject )
      goto LABEL_44;
    if ( !*v75 )
      goto LABEL_119;
    userServantEntity = (*v75)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_119;
    v81 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v161.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v161.fields.fakeValue = v81;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v160 = v161;
    if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v160, 0LL) )
    {
LABEL_44:
      WarehouseListMenu__PushRequest(this, *v75, v78);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_119;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
               dragParentObject,
               (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_119;
    v115 = (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v162.fields.currentCryptoKey = klass;
    *(_QWORD *)&v162.fields.fakeValue = monitor;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                          v162,
                                                          0LL);
    if ( !v115 )
      goto LABEL_119;
    v118 = DataMasterBase_object__object__int___GetEntity(
             v115,
             (int32_t)baseListViewManager,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v119 = LocalizationManager__Get((System_String_o *)StringLiteral_11840/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11839/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v121 = (System_Object_array *)sub_1B64170(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v121 )
LABEL_119:
      sub_1B64324(baseListViewManager);
    v125 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( !v121->max_length )
      goto LABEL_120;
    v121->m_Items[0] = v125;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v121->m_Items, (int32_t)v125, v123, v124);
    if ( !v118 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName((ServantEntity_o *)v118, 0LL);
    v128 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v121->max_length <= 1 )
      goto LABEL_120;
    v121->m_Items[1] = v128;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v121->m_Items[1], (int32_t)v128, v126, v127);
    v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
             0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName((ServantEntity_o *)v118, v129, -1, 0LL);
    v132 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v121->max_length <= 2 )
      goto LABEL_120;
    v121->m_Items[2] = v132;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v121->m_Items[2], (int32_t)v132, v130, v131);
    if ( !*v75 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)(*v75)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    v133 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v133, 0LL);
    v136 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v121->max_length <= 3 )
      goto LABEL_120;
    v121->m_Items[3] = v136;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v121->m_Items[3], (int32_t)v136, v134, v135);
    if ( !*v75 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)(*v75)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v139 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v121->max_length <= 4 )
      goto LABEL_120;
    v121->m_Items[4] = v139;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v121->m_Items[4], (int32_t)v139, v137, v138);
    v140 = *v75;
    if ( !*v75 )
      goto LABEL_119;
    v141 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v140->fields.userServantEntity;
    if ( !v141 )
      goto LABEL_119;
    servantEntity = v140->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                          v141[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v145 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B64204(
                                                            baseListViewManager,
                                                            v121->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_121:
        v159 = sub_1B64348(baseListViewManager);
        sub_1B641F0(v159, 0LL);
      }
    }
    if ( v121->max_length > 5 )
    {
      v121->m_Items[5] = v145;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v121->m_Items[5], (int32_t)v145, v143, v144);
      v146 = System_String__Format_61389904(v120, v121, 0LL);
      v147 = LocalizationManager__Get((System_String_o *)StringLiteral_11838/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v148 = LocalizationManager__Get((System_String_o *)StringLiteral_11837/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v152 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v150, v151);
      CommonConfirmDialog_ClickDelegate___ctor(
        v152,
        (Il2CppObject *)v35,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      baseListViewManager = (WarehouseListViewManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30344968(
          (CommonUI_o *)Instance,
          v119,
          v146,
          v147,
          v148,
          v152,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_119;
    }
LABEL_120:
    sub_1B6432C(baseListViewManager, v61);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v41, v42);
      return;
    }
    v43 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v43 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnSelectServant__);
    v44 = (System_Reflection_MethodBase_o *)sub_1B640AC(v43, v43[4]);
    OverwriteAssetSoundName__PlaySystemSe(v44, 0, 0LL);
    v47 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v47 )
    {
      if ( v47->fields.totalSum > v47->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v45) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v50);
            v52 = this->fields.servantListViewManager;
            if ( !v52 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v52->fields.sendKeep;
            sendSum = v52->fields.sendSum;
            totalSum = v52->fields.totalSum;
            v56 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v153);
            v154 = this->fields.servantListViewManager;
            if ( !v154 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v154->fields.sendKeep;
            sendSum = v154->fields.sendSum;
            totalSum = v154->fields.totalSum;
            v56 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v155);
            v156 = this->fields.servantListViewManager;
            if ( !v156 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v156->fields.sendKeep;
            sendSum = v156->fields.sendSum;
            totalSum = v156->fields.totalSum;
            v56 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v157);
            v158 = this->fields.servantListViewManager;
            if ( !v158 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v158->fields.sendKeep;
            sendSum = v158->fields.sendSum;
            totalSum = v158->fields.totalSum;
            v56 = 11;
            break;
          default:
            return;
        }
        v113 = totalSum + sendSum;
        v74 = warehouseConfirmMenu;
        v112 = v49;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v71 = this->fields.warehouseConfirmMenu;
            v72 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v72,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v73);
            if ( !v71 )
              goto LABEL_119;
            v74 = v71;
            v56 = 0;
            goto LABEL_64;
          case 1:
            v108 = this->fields.warehouseConfirmMenu;
            v72 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v72,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v109);
            if ( !v108 )
              goto LABEL_119;
            v56 = 1;
            goto LABEL_63;
          case 2:
            v108 = this->fields.warehouseConfirmMenu;
            v72 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v72,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v110);
            if ( !v108 )
              goto LABEL_119;
            v56 = 2;
            goto LABEL_63;
          case 3:
            v108 = this->fields.warehouseConfirmMenu;
            v72 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v45,
                                                           v46);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v72,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v111);
            if ( !v108 )
              goto LABEL_119;
            v56 = 3;
LABEL_63:
            v74 = v108;
LABEL_64:
            v112 = v72;
            v113 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v74, v56, v112, v113, sendKeep, v51);
      return;
    }
    goto LABEL_119;
  }
  v59 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v59 = (_QWORD *)sub_1B640E0(Method_WarehouseListMenu_OnSelectServant__);
  v60 = (System_Reflection_MethodBase_o *)sub_1B640AC(v59, v59[4]);
  OverwriteAssetSoundName__PlaySystemSe(v60, 0, 0LL);
  this->fields.state = 7;
  if ( !list )
    goto LABEL_119;
  if ( !list->max_length )
    goto LABEL_120;
  tabKind = this->fields.tabKind;
  this->fields.selectNum = list->m_Items[0];
  switch ( tabKind )
  {
    case 0:
      v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v65 = v63;
      v68 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v66, v67);
      ServantStatusDialog_ResultDelegate___ctor(
        v68,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v65 )
        goto LABEL_119;
      v69 = (CommonUI_o *)v65;
      v70 = 0;
      goto LABEL_53;
    case 1:
      v92 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v93 = this->fields.selectNum;
      v94 = v92;
      v97 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v95, v96);
      ServantStatusDialog_EndDelegate___ctor(
        v97,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v94 )
        goto LABEL_119;
      v98 = (CommonUI_o *)v94;
      v99 = 0;
      goto LABEL_56;
    case 2:
      v100 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v101 = v100;
      v68 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v102, v103);
      ServantStatusDialog_ResultDelegate___ctor(
        v68,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v101 )
        goto LABEL_119;
      v70 = 3;
      v69 = (CommonUI_o *)v101;
LABEL_53:
      CommonUI__OpenServantStatusDialog_30355300(v69, v70, selectNum, v68, 0LL, 0LL);
      break;
    case 3:
      v104 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v93 = this->fields.selectNum;
      v105 = v104;
      v97 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v106, v107);
      ServantStatusDialog_EndDelegate___ctor(
        v97,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v105 )
        goto LABEL_119;
      v99 = 3;
      v98 = (CommonUI_o *)v105;
LABEL_56:
      CommonUI__OpenServantStatusDialog_30354372(v98, v99, v93, v97, 0LL, 0LL);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__Open(
        WarehouseListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupinfo,
        WarehouseListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WarehouseListMenu_c *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v22; // x5
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x5
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x20
  unsigned __int128 v29; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49FA43B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_WarehouseListMenu_EndOpen__, v9);
    sub_1B640C8(&WarehouseListMenu_TypeInfo, v10);
    byte_49FA43B = 1;
  }
  v11 = WarehouseListMenu_TypeInfo;
  v29 = 0uLL;
  if ( !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v11 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v11->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v29,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_12;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v29;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
    this->fields.setupInfo = setupinfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v17, v18);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v19);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v22);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
    this->fields.setupInfo = setupinfo;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v23, v24);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v25);
      this->fields.state = 1;
      v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v28, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(gameObject);
  }
}


void __fastcall WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_49FA455 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1B640C8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v12);
    byte_49FA455 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v14 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v14 || !userServantEntity )
    goto LABEL_18;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v14->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v14->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v14->fields.masterLoadThreads;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v28,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v50, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v37 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v42 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
void __fastcall WarehouseListMenu__SetTabKind(
        WarehouseListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        bool isModify,
        const MethodInfo *method)
{
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
  __int64 v41; // x1
  __int64 v42; // x1
  bool v43; // w27
  WarehouseListManager_o *servantListViewManager; // x0
  __int64 v45; // x1
  long double inited; // q0
  float *klass; // x8
  float v48; // s12
  float v49; // s13
  float v50; // s14
  float v51; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v53; // x9
  float v54; // s10
  float v55; // s11
  float v56; // s8
  float v57; // s9
  unsigned int v58; // w26
  __int64 *v59; // x8
  float v60; // s3
  float v61; // s2
  float v62; // s1
  float v63; // s0
  System_String_o **v64; // x8
  bool v65; // w28
  UICommonButton_o *v66; // x25
  bool enabled; // w0
  __int64 *v68; // x8
  __int64 *v69; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v71; // w0
  unsigned int v72; // w29
  System_String_o **v73; // x8
  System_String_o **v74; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v76; // w0
  System_String_o **v77; // x8
  System_String_o **v78; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v80; // w0
  System_String_o **v81; // x8
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x3
  struct WarehouseListManager_o *v84; // x8
  WarehouseListManager_c *v85; // x8
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v87; // w1
  struct WarehouseListManager_o *v88; // x8
  struct WarehouseListManager_o *v89; // x8
  const MethodInfo *v90; // x3
  __int64 *v91; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v93; // w0
  __int64 *v94; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v96; // w0
  __int64 *v97; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v99; // w0
  __int64 *v100; // x8
  UICommonButton_o *pushTabButton; // x24
  WarehouseListManager_c *v102; // x8
  bool v103; // w0
  bool v104; // w20
  UILabel_o *explanationLabel; // x23
  __int64 *v106; // x8
  UILabel_o *v107; // x23
  int v108; // w8
  UILabel_o *v109; // x23
  UILabel_o *v110; // x23
  struct WarehouseListManager_o *v111; // x21
  __int64 v112; // x1
  __int64 v113; // x2
  WarehouseListManager_CallbackFunc_o *v114; // x22
  const MethodInfo *v115; // x3
  int32_t v116; // w2
  int32_t v117; // w3
  int32_t v118; // w1
  const MethodInfo *v119; // x1
  struct WarehouseListManager_o *v120; // x8
  struct WarehouseListManager_o *v121; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v123; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Color_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FA43D & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v15);
    sub_1B640C8(&StringLiteral_17500/*"btn_txt_craftessence_off"*/, v16);
    sub_1B640C8(&StringLiteral_17540/*"btn_txt_servant_off"*/, v17);
    sub_1B640C8(&StringLiteral_20429/*"img_txt_cardspace"*/, v18);
    sub_1B640C8(&StringLiteral_17591/*"button_push_reg"*/, v19);
    sub_1B640C8(&StringLiteral_17592/*"button_push_unreg"*/, v20);
    sub_1B640C8(&StringLiteral_17577/*"button_allchoice_reg"*/, v21);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v22);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v23);
    sub_1B640C8(&StringLiteral_17541/*"btn_txt_servant_on"*/, v24);
    sub_1B640C8(&StringLiteral_17593/*"button_select_reg"*/, v25);
    sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v26);
    sub_1B640C8(&StringLiteral_17495/*"btn_txt_cardtoarchive_on"*/, v27);
    sub_1B640C8(&StringLiteral_15394/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v28);
    sub_1B640C8(&StringLiteral_15392/*"WAREHOUSE_EXPLANATION_LOCK"*/, v29);
    sub_1B640C8(&StringLiteral_17412/*"btn_bg_25"*/, v30);
    sub_1B640C8(&StringLiteral_17494/*"btn_txt_cardtoarchive_off"*/, v31);
    sub_1B640C8(&StringLiteral_17501/*"btn_txt_craftessence_on"*/, v32);
    sub_1B640C8(&StringLiteral_15395/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v33);
    sub_1B640C8(&StringLiteral_15393/*"WAREHOUSE_EXPLANATION_PUSH"*/, v34);
    sub_1B640C8(&StringLiteral_17483/*"btn_txt_archivetocard_on"*/, v35);
    sub_1B640C8(&StringLiteral_20420/*"img_txt_archivespace"*/, v36);
    sub_1B640C8(&StringLiteral_17482/*"btn_txt_archivetocard_off"*/, v37);
    sub_1B640C8(&StringLiteral_15391/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v38);
    sub_1B640C8(&StringLiteral_17594/*"button_select_unreg"*/, v39);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v40);
    sub_1B640C8(&StringLiteral_17411/*"btn_bg_24"*/, v41);
    sub_1B640C8(&StringLiteral_17578/*"button_allchoice_unreg"*/, v42);
    byte_49FA43D = 1;
  }
  v43 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_196;
    WarehouseListManager__DestroyList(servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v45);
    byte_49F779B = 1;
  }
  servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  klass = (float *)servantListViewManager[1].klass;
  v48 = klass[20];
  v49 = klass[21];
  v50 = klass[22];
  v51 = klass[23];
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v45);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
    byte_49F779C = 1;
  }
  if ( !LODWORD(servantListViewManager[1].fields.servantTabLabel) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_196;
  v53 = (float *)servantListViewManager[1].klass;
  v55 = v53[24];
  v54 = v53[25];
  v57 = v53[26];
  v56 = v53[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    inited);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v58 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFD) != 0,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v59 = &StringLiteral_17541/*"btn_txt_servant_on"*/;
  if ( v58 )
    v59 = &StringLiteral_17540/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v59, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabLabel;
  v60 = v56;
  v61 = v57;
  v62 = v54;
  v63 = v55;
  if ( v58 )
  {
    v60 = v51;
    v61 = v50;
    v62 = v49;
    v63 = v48;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)&v63, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v123 = isModify;
  v64 = (System_String_o **)(v58 ? &StringLiteral_17406/*"btn_bg_12"*/ : &StringLiteral_17408/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v64, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v65 = !v43;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v43,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  v66 = this->fields.servantTabButton;
  if ( !v66 )
    goto LABEL_196;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v66, enabled, !v43, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
    servantListViewManager,
    1LL,
    servantListViewManager->klass[1]._1.byval_arg.data);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v58 == 0, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v68 = &StringLiteral_17500/*"btn_txt_craftessence_off"*/;
  if ( v58 )
    v68 = &StringLiteral_17501/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v68, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  if ( v58 )
    v69 = &StringLiteral_17408/*"btn_bg_19"*/;
  else
    v69 = &StringLiteral_17406/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v69, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabLabel;
  if ( !v58 )
  {
    v56 = v51;
    v57 = v50;
    v54 = v49;
    v55 = v48;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  v124.fields.r = v55;
  v124.fields.g = v54;
  v124.fields.b = v57;
  v124.fields.a = v56;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v124, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v43,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_196;
  v71 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v71, v65, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
    servantListViewManager,
    1LL,
    servantListViewManager->klass[1]._1.byval_arg.data);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v72 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFE) == 2,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v73 = (System_String_o **)&StringLiteral_17494/*"btn_txt_cardtoarchive_off"*/;
  if ( v72 != 2 )
    v73 = (System_String_o **)&StringLiteral_17495/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v73, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v74 = (System_String_o **)(v72 == 2 ? &StringLiteral_17411/*"btn_bg_24"*/ : &StringLiteral_17412/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v74, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v43,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_196;
  v76 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v76, v65, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
    servantListViewManager,
    1LL,
    servantListViewManager->klass[1]._1.byval_arg.data);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v72 != 2, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v77 = (System_String_o **)&StringLiteral_17483/*"btn_txt_archivetocard_on"*/;
  if ( v72 != 2 )
    v77 = (System_String_o **)&StringLiteral_17482/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v77, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v78 = (System_String_o **)(v72 == 2 ? &StringLiteral_17412/*"btn_bg_25"*/ : &StringLiteral_17411/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v78, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v43,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_196;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v80, v65, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v81 = (System_String_o **)&StringLiteral_20429/*"img_txt_cardspace"*/;
  if ( v72 != 2 )
    v81 = (System_String_o **)&StringLiteral_20420/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v81, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( !v43 && !this->fields.tabKind )
        goto LABEL_76;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 0, this->fields.setupInfo, v83);
LABEL_76:
      v84 = this->fields.servantListViewManager;
      if ( !v84 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v84->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
        servantListViewManager,
        0LL,
        1LL,
        servantListViewManager->klass[1]._1.interfaceOffsets);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantListViewManager,
                                                           0LL);
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
        servantListViewManager,
        1LL,
        servantListViewManager->klass[1]._1.byval_arg.data);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 1, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      v85 = servantListViewManager->klass;
      goto LABEL_113;
    case 1:
      if ( !v43 && this->fields.tabKind == 1 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v87 = 1;
      goto LABEL_103;
    case 2:
      if ( !v43 && this->fields.tabKind == 2 )
        goto LABEL_92;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 2, this->fields.setupInfo, v83);
LABEL_92:
      v88 = this->fields.servantListViewManager;
      if ( !v88 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v88->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
        servantListViewManager,
        0LL,
        1LL,
        servantListViewManager->klass[1]._1.interfaceOffsets);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantListViewManager,
                                                           0LL);
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0LL);
      if ( this->fields.modeKind == 3 )
      {
        modeKind = 0;
        if ( v43 )
          goto LABEL_115;
      }
      else
      {
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
          servantListViewManager,
          1LL,
          servantListViewManager->klass[1]._1.byval_arg.data);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 0, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v85 = servantListViewManager->klass;
LABEL_113:
        ((void (*)(void))v85[1]._1.implementedInterfaces)();
        if ( v43 )
          goto LABEL_115;
      }
LABEL_114:
      if ( modeKind == this->fields.modeKind )
        break;
LABEL_115:
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
        servantListViewManager,
        1LL,
        servantListViewManager->klass[1]._1.byval_arg.data);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 0, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v91 = &StringLiteral_17593/*"button_select_reg"*/;
      if ( modeKind )
        v91 = &StringLiteral_17594/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v91, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v43,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_196;
      v93 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v93, v65, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
        servantListViewManager,
        1LL,
        servantListViewManager->klass[1]._1.byval_arg.data);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 1, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v94 = &StringLiteral_17579/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v94 = &StringLiteral_17580/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v94, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v43,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_196;
      v96 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v96, v65, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
        servantListViewManager,
        1LL,
        servantListViewManager->klass[1]._1.byval_arg.data);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 2, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v97 = &StringLiteral_17577/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v97 = &StringLiteral_17578/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v97, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v43,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_196;
      v99 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v99, v65, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, void *))servantListViewManager->klass[1]._1.namespaze)(
        servantListViewManager,
        1LL,
        servantListViewManager->klass[1]._1.byval_arg.data);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled(
        (UnityEngine_Behaviour_o *)servantListViewManager,
        modeKind != 3 && v72 != 2,
        0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v100 = &StringLiteral_17591/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v100 = &StringLiteral_17592/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v100, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_196;
      if ( v72 == 2 )
      {
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v65, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v102 = servantListViewManager->klass;
      }
      else
      {
        v103 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v103, v65, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v102 = servantListViewManager->klass;
      }
      ((void (*)(void))v102[1]._1.implementedInterfaces)();
      break;
    case 3:
      if ( !v43 && this->fields.tabKind == 3 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v87 = 3;
LABEL_103:
      WarehouseListManager__CreateList(servantListViewManager, v87, setupInfo, v83);
LABEL_104:
      v89 = this->fields.servantListViewManager;
      if ( !v89 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v89->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
        servantListViewManager,
        0LL,
        1LL,
        servantListViewManager->klass[1]._1.interfaceOffsets);
      modeKind = WarehouseListMenu__HidePushButton(this, modeKind, 0, v90);
LABEL_107:
      if ( !v43 )
        goto LABEL_114;
      goto LABEL_115;
    default:
      goto LABEL_107;
  }
  v104 = v123;
  switch ( modeKind )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v106 = &StringLiteral_15394/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( v72 != 2 )
          goto LABEL_179;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v106 = &StringLiteral_15395/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get((System_String_o *)*v106, 0LL);
      if ( !explanationLabel )
        goto LABEL_196;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0LL);
LABEL_179:
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind )
        servantListViewManager->fields.modeKind = 0;
LABEL_182:
      this->fields.tabKind = tabKind;
      this->fields.isInitTab = 1;
      this->fields.modeKind = modeKind;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( this->fields.state == 2 )
      {
        servantListViewManager = (WarehouseListManager_o *)servantListViewManager->fields.baseListViewManager;
        if ( !servantListViewManager )
          goto LABEL_196;
        WarehouseListViewManager__UpdateItemState(
          (WarehouseListViewManager_o *)servantListViewManager,
          modeKind == 3,
          v82);
        v111 = this->fields.servantListViewManager;
        v114 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(
                                                        WarehouseListManager_CallbackFunc_TypeInfo,
                                                        v112,
                                                        v113);
        WarehouseListManager_CallbackFunc___ctor(
          v114,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v115);
        if ( !v111 )
          goto LABEL_196;
        v111->fields.callbackFunc = v114;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v111->fields.callbackFunc, (int32_t)v114, v116, v117);
        v118 = 2;
        servantListViewManager = v111;
      }
      else
      {
        v118 = 1;
      }
      WarehouseListManager__SetMode_35487312(servantListViewManager, v118, v82);
      if ( !v43 && v104 )
      {
        v120 = this->fields.servantListViewManager;
        if ( v120 )
        {
          servantListViewManager = (WarehouseListManager_o *)v120->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify((WarehouseListViewManager_o *)servantListViewManager, v119);
            goto LABEL_192;
          }
        }
LABEL_196:
        sub_1B64324(servantListViewManager);
      }
LABEL_192:
      v121 = this->fields.servantListViewManager;
      if ( !v121 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v121->fields.baseListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      servantListViewManager = (WarehouseListManager_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                                           (WarehouseListViewManager_o *)servantListViewManager,
                                                           v119);
      if ( !scaleChageTabSprite )
        goto LABEL_196;
      UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0LL);
      return;
    case 1:
      v107 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15392/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                           0LL);
      if ( !v107 )
        goto LABEL_196;
      UILabel__set_text(v107, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 1 )
        goto LABEL_182;
      v108 = 1;
      goto LABEL_173;
    case 2:
      v109 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15391/*"WAREHOUSE_EXPLANATION_CHOICE"*/,
                                                           0LL);
      if ( !v109 )
        goto LABEL_196;
      UILabel__set_text(v109, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 2 )
        goto LABEL_182;
      v108 = 2;
      goto LABEL_173;
    case 3:
      v110 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15393/*"WAREHOUSE_EXPLANATION_PUSH"*/,
                                                           0LL);
      if ( !v110 )
        goto LABEL_196;
      UILabel__set_text(v110, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 3 )
        goto LABEL_182;
      v108 = 3;
LABEL_173:
      servantListViewManager->fields.modeKind = v108;
      goto LABEL_182;
    default:
      servantListViewManager = this->fields.servantListViewManager;
      v104 = v123;
      goto LABEL_182;
  }
}


void __fastcall WarehouseListMenu__StatusRequest(
        WarehouseListMenu_o *this,
        WarehouseListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WarehouseListMenu_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  int32_t tabKind; // w8
  System_Int64_array *v17; // x1
  System_Int64_array *v18; // x2
  bool v19; // w4
  bool v20; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *v27; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_49FA447 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    this = (WarehouseListMenu_o *)sub_1B640C8(&Method_WarehouseListMenu_EndStatusSync__, v8);
    byte_49FA447 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v27 = 0LL;
  choiceList = 0LL;
  modeKind = v5->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = v5->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v27, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v22, v23);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25);
      NetworkManager_ResultCallbackFunc___ctor(v26, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v26,
                                      (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v18 = v27;
        v17 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_1B64324(this);
    }
  }
  else if ( modeKind == 1 )
  {
    v10 = v5->fields.servantListViewManager;
    if ( !v10 )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)v10->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v11, v12);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(v15, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v15,
                                      (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v18 = unlockList;
        v17 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v17,
          v18,
          (tabKind & 0xFFFFFFFE) == 2,
          v19,
          v20,
          0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall WarehouseListMenu__add_callbackFunc(
        WarehouseListMenu_o *this,
        WarehouseListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WarehouseListMenu_o *v10; // x0
  WarehouseListMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_49FA439 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_49FA439 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v7->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  WarehouseListMenu__remove_callbackFunc(v10, v11, v12);
}


void __fastcall WarehouseListMenu__remove_callbackFunc(
        WarehouseListMenu_o *this,
        WarehouseListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  WarehouseListMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_49FA43A & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_49FA43A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v7->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B9F5B8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B645E4(v7);
  WarehouseListMenu__GetMode(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_CallbackFunc___ctor(
        WarehouseListMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19AA71C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA6D4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WarehouseListMenu_CallbackFunc__BeginInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_49FA459 & 1) == 0 )
  {
    sub_1B640C8(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49FA459 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall WarehouseListMenu_CallbackFunc__Invoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_RequestCallbackFunc___ctor(
        WarehouseListMenu_RequestCallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_19AA780;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AA738;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WarehouseListMenu_RequestCallbackFunc__BeginInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_49FA45A & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isRequest);
    byte_49FA45A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__Invoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___ctor(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__0(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
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
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x2

  if ( (byte_49FA45B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&WarehouseListManager_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v7);
    sub_1B640C8(&Method_WarehouseListMenu_OnSelectServant__, v8);
    byte_49FA45B = 1;
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
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
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
  v20 = (WarehouseListManager_CallbackFunc_o *)sub_1B64314(WarehouseListManager_CallbackFunc_TypeInfo, v16, v17);
  WarehouseListManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v21);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v20, v22, v23);
  WarehouseListManager__SetMode_35487312(servantListViewManager, 2, v24);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}