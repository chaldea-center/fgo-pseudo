void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A59216 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_TypeInfo);
    sub_1B885B0(&StringLiteral_441/*"#4C4C4C"*/);
    byte_4A59216 = 1;
  }
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_441/*"#4C4C4C"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarehouseListMenu_TypeInfo->static_fields, StringLiteral_441/*"#4C4C4C"*/, v1, v2);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A59215 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A59215 = 1;
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
    sub_1B88554(p_callbackFunc, 0, n, (int32_t)method);
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
  struct WarehouseListManager_o *v5; // x8
  UISprite_o *scaleChageTabSprite; // x19

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (v4 = this, (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL)
    || (WarehouseListViewManager__ChangeIconScale((WarehouseListViewManager_o *)this, (const MethodInfo *)result),
        (v5 = v4->fields.servantListViewManager) == 0LL)
    || (this = (WarehouseListMenu_o *)v5->fields.baseListViewManager) == 0LL
    || (scaleChageTabSprite = v4->fields.scaleChageTabSprite,
        this = (WarehouseListMenu_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                        (WarehouseListViewManager_o *)this,
                                        (const MethodInfo *)result),
        !scaleChageTabSprite) )
  {
    sub_1B8880C(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_35880264(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_35880264(
        WarehouseListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v8; // x5
  System_Action_o *v9; // x20

  if ( (byte_4A591FA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClose__);
    byte_4A591FA = 1;
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v8);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
}


void __fastcall WarehouseListMenu__EndCardFavoriteRequest(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v3; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  struct WarehouseListManager_o *v5; // x20
  WarehouseListManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4A59214 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A59214 = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v5 = v3->fields.servantListViewManager,
        v6 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v7),
        !v5) )
  {
    sub_1B8880C(this, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  WarehouseListManager__SetMode_35867760(v5, 2, v10);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v6);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v6);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v6);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1B8880C(this, isRequest);
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
          WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1B8880C(this, isRequest);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_11:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 2, method);
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
      sub_1B8880C(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_35867760(baseListViewManager, 3, v13);
  }
LABEL_11:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_35867760(baseListViewManager, 2, v7);
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
      sub_1B8880C(this, isRequest);
    }
    WarehouseListManager__SetMode_35867760((WarehouseListManager_o *)this, 3, v6);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A5920D & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A5920D = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1B8880C(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  WarehouseListManager__SetMode_35867760(servantListViewManager, 2, v10);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_4A5920A & 1) == 0 )
  {
    sub_1B885B0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndNotificationMove__);
    byte_4A5920A = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v5);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v11);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v10);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v12);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_1B8880C(v6, v7);
      v9 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v9, v4, 0, 0, v8);
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
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A5920C & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A5920C = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1B8880C(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  WarehouseListManager__SetMode_35867760(servantListViewManager, 2, v10);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A59211 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A59211 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1B8880C(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  WarehouseListManager__SetMode_35867760(servantListViewManager, 2, v10);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_4A5920F & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A5920F = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1B8880C(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  WarehouseListManager__SetMode_35867760(servantListViewManager, 2, v10);
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
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A59207 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__);
    sub_1B885B0(&Method_WarehouseListMenu_EndConfirmRequestLock__);
    byte_4A59207 = 1;
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
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        v6);
      WarehouseListMenu__StatusRequest(this, v5, v7);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_1B8880C(v10, v11);
    WarehouseConfirmMenu__Close_35856704(warehouseConfirmMenu, v9, v12);
  }
}


void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  if ( (byte_4A59208 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_StorageTakeinRequest___);
    sub_1B885B0(&Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndRequestWarehouse__);
    byte_4A59208 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Request_object, v7);
  }
}


void __fastcall WarehouseListMenu__EndNotificationMove(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A5920B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__);
    byte_4A5920B = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1B8880C(v6, v7);
  WarehouseConfirmMenu__Close_35856704(warehouseConfirmMenu, v5, v8);
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
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4A59209 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__);
    byte_4A59209 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1B8880C(v9, v10);
  WarehouseConfirmMenu__Close_35856704(warehouseConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_4A59210 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_EndCloseServantEquipStatus__);
    byte_4A59210 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_1B8880C(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x0
  bool v12; // cc
  System_Action_o *v13; // x20
  __int64 *v14; // x8

  v8 = this;
  if ( (byte_4A5920E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_EndCloseServantStatus__);
    byte_4A5920E = 1;
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
      WarehouseListManager__SortItem((WarehouseListManager_o *)this, (const MethodInfo *)isDecide);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v14 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)v8, *v14, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1B8880C(this, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
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
    sub_1B88554(p_requedstCallback, 0, (int32_t)method, v3);
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


// local variable allocation has failed, the output may be wrong!
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
    sub_1B8880C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum[0] > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4A591FC & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickCancel__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickCancel__);
    byte_4A591FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v5, v6);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        v9);
      WarehouseListMenu__StatusRequest(this, v8, v10);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A59212 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_ChangeIconScale__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickScaleChage__);
    byte_4A59212 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickScaleChage__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4A59203 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabChoice__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickTabChoice__);
    byte_4A59203 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1B8880C(0LL, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        v12);
      WarehouseListMenu__StatusRequest(this, v11, v13);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v5);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4A59202 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabLock__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickTabLock__);
    byte_4A59202 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1B8880C(0LL, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        v12);
      WarehouseListMenu__StatusRequest(this, v11, v13);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v5);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4A59204 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabPush__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickTabPush__);
    byte_4A59204 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1B8880C(0LL, v8);
    WarehouseListManager__ReleaseAll(servantListViewManager, v8);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A591FF & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabPutIn__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_OnClickTabPutIn__);
    byte_4A591FF = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B8880C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabPutIn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A59200 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabPutOut__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_OnClickTabPutOut__);
    byte_4A59200 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B8880C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabPutOut__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A591FD & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabServant__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_OnClickTabServant__);
    byte_4A591FD = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B8880C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4A591FE & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabServantEquip__);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_OnClickTabServantEquip__);
    byte_4A591FE = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1B8880C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4A59201 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndClickTabStatus__);
    sub_1B885B0(&Method_WarehouseListMenu_OnClickTabStatus__);
    byte_4A59201 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1B887FC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
  }
}


void __fastcall WarehouseListMenu__OnSelectServant(
        WarehouseListMenu_o *this,
        int32_t result,
        System_Int64_array *list,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v9; // x20
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct WarehouseListManager_o *v20; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x5
  struct WarehouseListManager_o *v25; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v29; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  int32_t tabKind; // w8
  Il2CppObject *v35; // x0
  int64_t selectNum; // x20
  Il2CppObject *v37; // x21
  ServantStatusDialog_ResultDelegate_o *v38; // x22
  CommonUI_o *v39; // x0
  int32_t v40; // w1
  struct WarehouseConfirmMenu_o *v41; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v42; // x21
  const MethodInfo *v43; // x3
  WarehouseConfirmMenu_o *v44; // x0
  WarehouseListViewItem_o **v45; // x21
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  const MethodInfo *v48; // x2
  int64_t dragParentObject; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v51; // q1
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  struct WarehouseListManager_o *v54; // x20
  WarehouseListManager_CallbackFunc_o *v55; // x21
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x2
  Il2CppObject *v60; // x0
  int64_t v61; // x20
  Il2CppObject *v62; // x21
  ServantStatusDialog_EndDelegate_o *v63; // x22
  CommonUI_o *v64; // x0
  int32_t v65; // w1
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x21
  struct WarehouseConfirmMenu_o *v70; // x20
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v74; // x2
  int32_t v75; // w3
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v80; // x25
  System_String_o *v81; // x19
  System_String_o *v82; // x22
  System_Object_array *v83; // x23
  int32_t Rarity; // w26
  int32_t v85; // w2
  int32_t v86; // w3
  Il2CppObject *v87; // x26
  int32_t v88; // w2
  int32_t v89; // w3
  Il2CppObject *v90; // x26
  int32_t v91; // w0
  int32_t v92; // w2
  int32_t v93; // w3
  Il2CppObject *v94; // x24
  int32_t v95; // w0
  int32_t v96; // w2
  int32_t v97; // w3
  Il2CppObject *v98; // x24
  int32_t v99; // w2
  int32_t v100; // w3
  Il2CppObject *v101; // x24
  WarehouseListViewItem_o *v102; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v103; // x9
  ServantEntity_o *servantEntity; // x21
  int32_t v105; // w2
  int32_t v106; // w3
  Il2CppObject *v107; // x21
  System_String_o *v108; // x21
  System_String_o *v109; // x22
  System_String_o *v110; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v112; // x25
  const MethodInfo *v113; // x3
  struct WarehouseListManager_o *v114; // x8
  const MethodInfo *v115; // x3
  struct WarehouseListManager_o *v116; // x8
  const MethodInfo *v117; // x3
  struct WarehouseListManager_o *v118; // x8
  __int64 v119; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v120; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v121; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4A59206 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
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
    sub_1B885B0(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__);
    sub_1B885B0(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndConfirmMove__);
    sub_1B885B0(&Method_WarehouseListMenu_EndServantEquipStatus__);
    sub_1B885B0(&Method_WarehouseListMenu_EndServantStatus__);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    sub_1B885B0(&StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4A59206 = 1;
  }
  v9 = sub_1B887FC(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_119;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectNumList, (int32_t)list, v14, v15);
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
      Item = WarehouseListViewManager__GetItem(baseListViewManager, n, v16);
    }
    *(_QWORD *)(v9 + 24) = Item;
    v45 = (WarehouseListViewItem_o **)(v9 + 24);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)Item, (int32_t)v16, (int32_t)v17);
    if ( !*(_QWORD *)(v9 + 24) || !(*v45)->fields.isEnabled )
    {
      v52 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnSelectServant__);
      v53 = (System_Reflection_MethodBase_o *)sub_1B88594(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 2, 0LL);
      this->fields.state = 2;
      v54 = this->fields.servantListViewManager;
      v55 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v55,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v56);
      if ( v54 )
      {
        v54->fields.callbackFunc = v55;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->fields.callbackFunc, (int32_t)v55, v57, v58);
        WarehouseListManager__SetMode_35867760(v54, 2, v59);
        return;
      }
      goto LABEL_119;
    }
    v46 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v46 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnSelectServant__);
    v47 = (System_Reflection_MethodBase_o *)sub_1B88594(v46, v46[4]);
    OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseListViewManager )
      goto LABEL_119;
    dragParentObject = (int64_t)baseListViewManager->fields.dragParentObject;
    if ( !dragParentObject )
      goto LABEL_44;
    if ( !*v45 )
      goto LABEL_119;
    userServantEntity = (*v45)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_119;
    v51 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v121.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v121.fields.fakeValue = v51;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v120 = v121;
    if ( dragParentObject == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v120, 0LL) )
    {
LABEL_44:
      WarehouseListMenu__PushRequest(this, *v45, v48);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_119;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
               dragParentObject,
               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_119;
    v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v122.fields.currentCryptoKey = klass;
    *(_QWORD *)&v122.fields.fakeValue = monitor;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v122,
                                                          0LL);
    if ( !v77 )
      goto LABEL_119;
    v80 = DataMasterBase_object__object__int___GetEntity(
            v77,
            (int32_t)baseListViewManager,
            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v81 = LocalizationManager__Get((System_String_o *)StringLiteral_11895/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11894/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v83 = (System_Object_array *)sub_1B88658(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v83 )
LABEL_119:
      sub_1B8880C(baseListViewManager, v11);
    v87 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( !v83->max_length )
      goto LABEL_120;
    v83->m_Items[0] = v87;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v83->m_Items, (int32_t)v87, v85, v86);
    if ( !v80 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName((ServantEntity_o *)v80, 0LL);
    v90 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v83->max_length <= 1 )
      goto LABEL_120;
    v83->m_Items[1] = v90;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v83->m_Items[1], (int32_t)v90, v88, v89);
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
            0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName((ServantEntity_o *)v80, v91, -1, 0LL);
    v94 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v83->max_length <= 2 )
      goto LABEL_120;
    v83->m_Items[2] = v94;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v83->m_Items[2], (int32_t)v94, v92, v93);
    if ( !*v45 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)(*v45)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    v95 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v95, 0LL);
    v98 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v83->max_length <= 3 )
      goto LABEL_120;
    v83->m_Items[3] = v98;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v83->m_Items[3], (int32_t)v98, v96, v97);
    if ( !*v45 )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)(*v45)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v101 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v83->max_length <= 4 )
      goto LABEL_120;
    v83->m_Items[4] = v101;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v83->m_Items[4], (int32_t)v101, v99, v100);
    v102 = *v45;
    if ( !*v45 )
      goto LABEL_119;
    v103 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v102->fields.userServantEntity;
    if ( !v103 )
      goto LABEL_119;
    servantEntity = v102->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                          v103[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_119;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v107 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_1B886EC(
                                                            baseListViewManager,
                                                            v83->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_121:
        v119 = sub_1B88830(baseListViewManager);
        sub_1B886D8(v119, 0LL);
      }
    }
    if ( v83->max_length > 5 )
    {
      v83->m_Items[5] = v107;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v83->m_Items[5], (int32_t)v107, v105, v106);
      v108 = System_String__Format_61721540(v82, v83, 0LL);
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_11893/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11892/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v112 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v112,
        (Il2CppObject *)v9,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      baseListViewManager = (WarehouseListViewManager_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30493912(
          (CommonUI_o *)Instance,
          v81,
          v108,
          v109,
          v110,
          v112,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_119;
    }
LABEL_120:
    sub_1B88814(baseListViewManager, v11);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v16, v17);
      return;
    }
    v18 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnSelectServant__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B88594(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
    v20 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v20 )
    {
      if ( v20->fields.totalSum > v20->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v11) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v22 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v22,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v23);
            v25 = this->fields.servantListViewManager;
            if ( !v25 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v25->fields.sendKeep;
            sendSum = v25->fields.sendSum;
            totalSum = v25->fields.totalSum;
            v29 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v22 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v22,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v113);
            v114 = this->fields.servantListViewManager;
            if ( !v114 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v114->fields.sendKeep;
            sendSum = v114->fields.sendSum;
            totalSum = v114->fields.totalSum;
            v29 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v22 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v22,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v115);
            v116 = this->fields.servantListViewManager;
            if ( !v116 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v116->fields.sendKeep;
            sendSum = v116->fields.sendSum;
            totalSum = v116->fields.totalSum;
            v29 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v22 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v22,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v117);
            v118 = this->fields.servantListViewManager;
            if ( !v118 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v118->fields.sendKeep;
            sendSum = v118->fields.sendSum;
            totalSum = v118->fields.totalSum;
            v29 = 11;
            break;
          default:
            return;
        }
        v75 = totalSum + sendSum;
        v44 = warehouseConfirmMenu;
        v74 = v22;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v41 = this->fields.warehouseConfirmMenu;
            v42 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v42,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v43);
            if ( !v41 )
              goto LABEL_119;
            v44 = v41;
            v29 = 0;
            goto LABEL_64;
          case 1:
            v70 = this->fields.warehouseConfirmMenu;
            v42 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v42,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v71);
            if ( !v70 )
              goto LABEL_119;
            v29 = 1;
            goto LABEL_63;
          case 2:
            v70 = this->fields.warehouseConfirmMenu;
            v42 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v42,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v72);
            if ( !v70 )
              goto LABEL_119;
            v29 = 2;
            goto LABEL_63;
          case 3:
            v70 = this->fields.warehouseConfirmMenu;
            v42 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1B887FC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v42,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v73);
            if ( !v70 )
              goto LABEL_119;
            v29 = 3;
LABEL_63:
            v44 = v70;
LABEL_64:
            v74 = v42;
            v75 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v44, v29, v74, v75, sendKeep, v24);
      return;
    }
    goto LABEL_119;
  }
  v32 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v32 = (_QWORD *)sub_1B885C8(Method_WarehouseListMenu_OnSelectServant__);
  v33 = (System_Reflection_MethodBase_o *)sub_1B88594(v32, v32[4]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
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
      v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v37 = v35;
      v38 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v38,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v37 )
        goto LABEL_119;
      v39 = (CommonUI_o *)v37;
      v40 = 0;
      goto LABEL_53;
    case 1:
      v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v61 = this->fields.selectNum;
      v62 = v60;
      v63 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v63,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v62 )
        goto LABEL_119;
      v64 = (CommonUI_o *)v62;
      v65 = 0;
      goto LABEL_56;
    case 2:
      v66 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v67 = v66;
      v38 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v38,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v67 )
        goto LABEL_119;
      v40 = 3;
      v39 = (CommonUI_o *)v67;
LABEL_53:
      CommonUI__OpenServantStatusDialog_30504264(v39, v40, selectNum, v38, 0LL, 0LL);
      break;
    case 3:
      v68 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v61 = this->fields.selectNum;
      v69 = v68;
      v63 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v63,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v69 )
        goto LABEL_119;
      v65 = 3;
      v64 = (CommonUI_o *)v69;
LABEL_56:
      CommonUI__OpenServantStatusDialog_30503336(v64, v65, v61, v63, 0LL, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall WarehouseListMenu__Open(
        WarehouseListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupinfo,
        WarehouseListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  WarehouseListMenu_c *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v21; // x5
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x5
  System_Action_o *v25; // x20
  unsigned __int128 v26; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A591F9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_WarehouseListMenu_EndOpen__);
    sub_1B885B0(&WarehouseListMenu_TypeInfo);
    byte_4A591F9 = 1;
  }
  v9 = WarehouseListMenu_TypeInfo;
  v26 = 0uLL;
  if ( !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v9 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v26,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_12;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v26;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
    this->fields.setupInfo = setupinfo;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v16, v17);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v18);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v21);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
    this->fields.setupInfo = setupinfo;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v22, v23);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v24);
      this->fields.state = 1;
      v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v25, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(gameObject, v11);
  }
}


void __fastcall WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x23
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_4A59213 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WarehouseListMenu_EndCardFavoriteRequest__);
    byte_4A59213 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v7 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !userServantEntity )
    goto LABEL_18;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v7->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v7->fields.masterLoadThreads;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v41, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v28 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v33 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
void __fastcall WarehouseListMenu__SetTabKind(
        WarehouseListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        bool isModify,
        const MethodInfo *method)
{
  bool v11; // w27
  WarehouseListManager_o *servantListViewManager; // x0
  long double inited; // q0
  float *klass; // x8
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v20; // x9
  float v21; // s10
  float v22; // s11
  float v23; // s8
  float v24; // s9
  unsigned int v25; // w26
  __int64 *v26; // x8
  float v27; // s3
  float v28; // s2
  float v29; // s1
  float v30; // s0
  System_String_o **v31; // x8
  bool v32; // w28
  UICommonButton_o *v33; // x25
  bool enabled; // w0
  __int64 *v35; // x8
  __int64 *v36; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v38; // w0
  unsigned int v39; // w29
  System_String_o **v40; // x8
  System_String_o **v41; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v43; // w0
  System_String_o **v44; // x8
  System_String_o **v45; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v47; // w0
  System_String_o **v48; // x8
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  struct WarehouseListManager_o *v51; // x8
  WarehouseListManager_c *v52; // x8
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v54; // w1
  struct WarehouseListManager_o *v55; // x8
  struct WarehouseListManager_o *v56; // x8
  const MethodInfo *v57; // x3
  __int64 *v58; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v60; // w0
  __int64 *v61; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v63; // w0
  __int64 *v64; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v66; // w0
  __int64 *v67; // x8
  UICommonButton_o *pushTabButton; // x24
  WarehouseListManager_c *v69; // x8
  bool v70; // w0
  bool v71; // w20
  UILabel_o *explanationLabel; // x23
  __int64 *v73; // x8
  UILabel_o *v74; // x23
  int v75; // w8
  UILabel_o *v76; // x23
  UILabel_o *v77; // x23
  struct WarehouseListManager_o *v78; // x21
  WarehouseListManager_CallbackFunc_o *v79; // x22
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  int32_t v82; // w3
  int32_t v83; // w1
  struct WarehouseListManager_o *v84; // x8
  struct WarehouseListManager_o *v85; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v87; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A591FB & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    sub_1B885B0(&StringLiteral_17570/*"btn_txt_craftessence_off"*/);
    sub_1B885B0(&StringLiteral_17610/*"btn_txt_servant_off"*/);
    sub_1B885B0(&StringLiteral_20510/*"img_txt_cardspace"*/);
    sub_1B885B0(&StringLiteral_17661/*"button_push_reg"*/);
    sub_1B885B0(&StringLiteral_17662/*"button_push_unreg"*/);
    sub_1B885B0(&StringLiteral_17647/*"button_allchoice_reg"*/);
    sub_1B885B0(&StringLiteral_17476/*"btn_bg_12"*/);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17611/*"btn_txt_servant_on"*/);
    sub_1B885B0(&StringLiteral_17663/*"button_select_reg"*/);
    sub_1B885B0(&StringLiteral_17478/*"btn_bg_19"*/);
    sub_1B885B0(&StringLiteral_17565/*"btn_txt_cardtoarchive_on"*/);
    sub_1B885B0(&StringLiteral_15462/*"WAREHOUSE_EXPLANATION_PUT_IN"*/);
    sub_1B885B0(&StringLiteral_15460/*"WAREHOUSE_EXPLANATION_LOCK"*/);
    sub_1B885B0(&StringLiteral_17482/*"btn_bg_25"*/);
    sub_1B885B0(&StringLiteral_17564/*"btn_txt_cardtoarchive_off"*/);
    sub_1B885B0(&StringLiteral_17571/*"btn_txt_craftessence_on"*/);
    sub_1B885B0(&StringLiteral_15463/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/);
    sub_1B885B0(&StringLiteral_15461/*"WAREHOUSE_EXPLANATION_PUSH"*/);
    sub_1B885B0(&StringLiteral_17553/*"btn_txt_archivetocard_on"*/);
    sub_1B885B0(&StringLiteral_20501/*"img_txt_archivespace"*/);
    sub_1B885B0(&StringLiteral_17552/*"btn_txt_archivetocard_off"*/);
    sub_1B885B0(&StringLiteral_15459/*"WAREHOUSE_EXPLANATION_CHOICE"*/);
    sub_1B885B0(&StringLiteral_17664/*"button_select_unreg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    sub_1B885B0(&StringLiteral_17481/*"btn_bg_24"*/);
    sub_1B885B0(&StringLiteral_17648/*"button_allchoice_unreg"*/);
    byte_4A591FB = 1;
  }
  v11 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_196;
    WarehouseListManager__DestroyList(servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A5638C )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638C = 1;
  }
  servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  klass = (float *)servantListViewManager[1].klass;
  v15 = klass[20];
  v16 = klass[21];
  v17 = klass[22];
  v18 = klass[23];
  if ( !byte_4A5638D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
    byte_4A5638D = 1;
  }
  if ( !LODWORD(servantListViewManager[1].fields.servantTabLabel) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_196;
  v20 = (float *)servantListViewManager[1].klass;
  v22 = v20[24];
  v21 = v20[25];
  v24 = v20[26];
  v23 = v20[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    inited);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v25 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFD) != 0,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v26 = &StringLiteral_17611/*"btn_txt_servant_on"*/;
  if ( v25 )
    v26 = &StringLiteral_17610/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v26, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabLabel;
  v27 = v23;
  v28 = v24;
  v29 = v21;
  v30 = v22;
  if ( v25 )
  {
    v27 = v18;
    v28 = v17;
    v29 = v16;
    v30 = v15;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)&v30, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v87 = isModify;
  v31 = (System_String_o **)(v25 ? &StringLiteral_17476/*"btn_bg_12"*/ : &StringLiteral_17478/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v31, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v32 = !v11;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  v33 = this->fields.servantTabButton;
  if ( !v33 )
    goto LABEL_196;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v33, enabled, !v11, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v25 == 0, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v35 = &StringLiteral_17570/*"btn_txt_craftessence_off"*/;
  if ( v25 )
    v35 = &StringLiteral_17571/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v35, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  if ( v25 )
    v36 = &StringLiteral_17478/*"btn_bg_19"*/;
  else
    v36 = &StringLiteral_17476/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v36, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabLabel;
  if ( !v25 )
  {
    v23 = v18;
    v24 = v17;
    v21 = v16;
    v22 = v15;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  v88.fields.r = v22;
  v88.fields.g = v21;
  v88.fields.b = v24;
  v88.fields.a = v23;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v88, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_196;
  v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v38, v32, 0LL);
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
  v39 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFE) == 2,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v40 = (System_String_o **)&StringLiteral_17564/*"btn_txt_cardtoarchive_off"*/;
  if ( v39 != 2 )
    v40 = (System_String_o **)&StringLiteral_17565/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v40, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v41 = (System_String_o **)(v39 == 2 ? &StringLiteral_17481/*"btn_bg_24"*/ : &StringLiteral_17482/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v41, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_196;
  v43 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v43, v32, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v39 != 2, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v44 = (System_String_o **)&StringLiteral_17553/*"btn_txt_archivetocard_on"*/;
  if ( v39 != 2 )
    v44 = (System_String_o **)&StringLiteral_17552/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v44, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v45 = (System_String_o **)(v39 == 2 ? &StringLiteral_17482/*"btn_bg_25"*/ : &StringLiteral_17481/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v45, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_196;
  v47 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v47, v32, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v48 = (System_String_o **)&StringLiteral_20510/*"img_txt_cardspace"*/;
  if ( v39 != 2 )
    v48 = (System_String_o **)&StringLiteral_20501/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v48, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( !v11 && !this->fields.tabKind )
        goto LABEL_76;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 0, this->fields.setupInfo, v50);
LABEL_76:
      v51 = this->fields.servantListViewManager;
      if ( !v51 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v51->fields.filterButton;
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
      v52 = servantListViewManager->klass;
      goto LABEL_113;
    case 1:
      if ( !v11 && this->fields.tabKind == 1 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v54 = 1;
      goto LABEL_103;
    case 2:
      if ( !v11 && this->fields.tabKind == 2 )
        goto LABEL_92;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 2, this->fields.setupInfo, v50);
LABEL_92:
      v55 = this->fields.servantListViewManager;
      if ( !v55 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v55->fields.filterButton;
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
        if ( v11 )
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
        v52 = servantListViewManager->klass;
LABEL_113:
        ((void (*)(void))v52[1]._1.implementedInterfaces)();
        if ( v11 )
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
      v58 = &StringLiteral_17663/*"button_select_reg"*/;
      if ( modeKind )
        v58 = &StringLiteral_17664/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v58, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_196;
      v60 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v60, v32, 0LL);
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
      v61 = &StringLiteral_17649/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v61 = &StringLiteral_17650/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v61, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_196;
      v63 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v63, v32, 0LL);
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
      v64 = &StringLiteral_17647/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v64 = &StringLiteral_17648/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v64, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_196;
      v66 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v66, v32, 0LL);
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
        modeKind != 3 && v39 != 2,
        0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v67 = &StringLiteral_17661/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v67 = &StringLiteral_17662/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v67, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_196;
      if ( v39 == 2 )
      {
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v32, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v69 = servantListViewManager->klass;
      }
      else
      {
        v70 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v70, v32, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v69 = servantListViewManager->klass;
      }
      ((void (*)(void))v69[1]._1.implementedInterfaces)();
      break;
    case 3:
      if ( !v11 && this->fields.tabKind == 3 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v54 = 3;
LABEL_103:
      WarehouseListManager__CreateList(servantListViewManager, v54, setupInfo, v50);
LABEL_104:
      v56 = this->fields.servantListViewManager;
      if ( !v56 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v56->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
        servantListViewManager,
        0LL,
        1LL,
        servantListViewManager->klass[1]._1.interfaceOffsets);
      modeKind = WarehouseListMenu__HidePushButton(this, modeKind, 0, v57);
LABEL_107:
      if ( !v11 )
        goto LABEL_114;
      goto LABEL_115;
    default:
      goto LABEL_107;
  }
  v71 = v87;
  switch ( modeKind )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = &StringLiteral_15462/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( v39 != 2 )
          goto LABEL_179;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = &StringLiteral_15463/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get((System_String_o *)*v73, 0LL);
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
          v49);
        v78 = this->fields.servantListViewManager;
        v79 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v79,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v80);
        if ( !v78 )
          goto LABEL_196;
        v78->fields.callbackFunc = v79;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v78->fields.callbackFunc, (int32_t)v79, v81, v82);
        v83 = 2;
        servantListViewManager = v78;
      }
      else
      {
        v83 = 1;
      }
      WarehouseListManager__SetMode_35867760(servantListViewManager, v83, v49);
      if ( !v11 && v71 )
      {
        v84 = this->fields.servantListViewManager;
        if ( v84 )
        {
          servantListViewManager = (WarehouseListManager_o *)v84->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_192;
          }
        }
LABEL_196:
        sub_1B8880C(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_192:
      v85 = this->fields.servantListViewManager;
      if ( !v85 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v85->fields.baseListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      servantListViewManager = (WarehouseListManager_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                                           (WarehouseListViewManager_o *)servantListViewManager,
                                                           *(const MethodInfo **)&tabKind);
      if ( !scaleChageTabSprite )
        goto LABEL_196;
      UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0LL);
      return;
    case 1:
      v74 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15460/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                           0LL);
      if ( !v74 )
        goto LABEL_196;
      UILabel__set_text(v74, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 1 )
        goto LABEL_182;
      v75 = 1;
      goto LABEL_173;
    case 2:
      v76 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15459/*"WAREHOUSE_EXPLANATION_CHOICE"*/,
                                                           0LL);
      if ( !v76 )
        goto LABEL_196;
      UILabel__set_text(v76, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 2 )
        goto LABEL_182;
      v75 = 2;
      goto LABEL_173;
    case 3:
      v77 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15461/*"WAREHOUSE_EXPLANATION_PUSH"*/,
                                                           0LL);
      if ( !v77 )
        goto LABEL_196;
      UILabel__set_text(v77, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 3 )
        goto LABEL_182;
      v75 = 3;
LABEL_173:
      servantListViewManager->fields.modeKind = v75;
      goto LABEL_182;
    default:
      servantListViewManager = this->fields.servantListViewManager;
      v71 = v87;
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
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v7; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  int32_t tabKind; // w8
  System_Int64_array *v12; // x1
  System_Int64_array *v13; // x2
  bool v14; // w4
  bool v15; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4A59205 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_1B885B0(&Method_WarehouseListMenu_EndStatusSync__);
    byte_4A59205 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v20 = 0LL;
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
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v20, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v17, v18);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v19,
                                      (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v13 = v20;
        v12 = choiceList;
        v15 = 1;
        v14 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_1B8880C(this, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    v7 = v5->fields.servantListViewManager;
    if ( !v7 )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)v7->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v8, v9);
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v10,
                                      (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v13 = unlockList;
        v12 = lockList;
        v14 = 1;
        v15 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v12,
          v13,
          (tabKind & 0xFFFFFFFE) == 2,
          v14,
          v15,
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

  if ( (byte_4A591F7 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_4A591F7 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A591F8 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_4A591F8 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  this->fields.m_target = (Il2CppObject *)sub_19CCF74;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CCF2C;
}


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
  if ( (byte_4A59217 & 1) == 0 )
  {
    sub_1B885B0(&WarehouseListMenu_ResultKind_TypeInfo);
    byte_4A59217 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  this->fields.m_target = (Il2CppObject *)sub_19CCFD8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CCF90;
}


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
  if ( (byte_4A59218 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A59218 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__0(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_4A59219 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__);
    sub_1B885B0(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4A59219 = 1;
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
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
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
  v13 = (WarehouseListManager_CallbackFunc_o *)sub_1B887FC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v14);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v13, v15, v16);
  WarehouseListManager__SetMode_35867760(servantListViewManager, 2, v17);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}