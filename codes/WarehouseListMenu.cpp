void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438BE7D & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_TypeInfo);
    sub_B775C4(&StringLiteral_362/*"#4C4C4C"*/);
    byte_438BE7D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListMenu_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_362/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_362/*"#4C4C4C"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438BE7C & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438BE7C = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__Callback(
        WarehouseListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19
  BattleServantConfConponent_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( !result )
      result = this->fields.isModify;
    WarehouseListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
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
    sub_B7769C(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_26644352(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_26644352(
        WarehouseListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x5
  System_Action_o *v13; // x20

  if ( (byte_438BE61 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClose__);
    byte_438BE61 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v12);
  v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  v3 = this;
  if ( (byte_438BE7B & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_438BE7B = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v5 = v3->fields.servantListViewManager,
        v6 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL),
        !v5) )
  {
    sub_B7769C(this, result);
  }
  v5->fields.callbackFunc = v6;
  sub_B77560(
    (BattleServantConfConponent_o *)&v5->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  WarehouseListManager__SetMode_26632316(v5, 2, v13);
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v6);
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v6);
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v6);
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B7769C(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 0;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_8;
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
          WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B7769C(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 2;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_8;
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
    goto LABEL_6;
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_6:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 2, method);
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
    goto LABEL_6;
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
      sub_B7769C(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_26632316(baseListViewManager, 3, v13);
  }
LABEL_6:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_26632316(baseListViewManager, 2, v7);
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
      sub_B7769C(this, isRequest);
    }
    WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void __fastcall WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Action_o *closeCallbackFunc; // x19

  WarehouseListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438BE74 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_438BE74 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B7769C(v5, v6);
  servantListViewManager->fields.callbackFunc = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  WarehouseListManager__SetMode_26632316(servantListViewManager, 2, v13);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  int32_t v8; // w1

  if ( (byte_438BE71 & 1) == 0 )
  {
    sub_B775C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndNotificationMove__);
    byte_438BE71 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v8 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v8 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v8 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_B7769C(v5, v6);
      v8 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v8, v4, 0, 0, v7);
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
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438BE73 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_438BE73 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B7769C(v5, v6);
  servantListViewManager->fields.callbackFunc = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  WarehouseListManager__SetMode_26632316(servantListViewManager, 2, v13);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438BE78 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_438BE78 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B7769C(v5, v6);
  servantListViewManager->fields.callbackFunc = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  WarehouseListManager__SetMode_26632316(servantListViewManager, 2, v13);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_438BE76 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_438BE76 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B7769C(v5, v6);
  servantListViewManager->fields.callbackFunc = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  WarehouseListManager__SetMode_26632316(servantListViewManager, 2, v13);
}


void __fastcall WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.state = 3;
  WarehouseListMenu__Callback(this, 2, v2, v3);
}


void __fastcall WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_438BE6E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__);
    sub_B775C4(&Method_WarehouseListMenu_EndConfirmRequestLock__);
    byte_438BE6E = 1;
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
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v5, v6);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_B7769C(v9, v10);
    WarehouseConfirmMenu__Close_26621320(warehouseConfirmMenu, v8, v11);
  }
}


void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  StorageTakeinRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  if ( (byte_438BE6F & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_StorageTakeinRequest___);
    sub_B775C4(&Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndRequestWarehouse__);
    byte_438BE6F = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v8,
                                                                    (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_16;
    StorageTakeinRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v5,
                                                                    (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      StorageTakeoutRequest__beginRequest(
        (StorageTakeoutRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.selectNumList,
        0LL);
      return;
    }
LABEL_16:
    sub_B7769C(Request_WarBoardWallAttackRequest, v7);
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

  if ( (byte_438BE72 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__);
    byte_438BE72 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B7769C(v6, v7);
  WarehouseConfirmMenu__Close_26621320(warehouseConfirmMenu, v5, v8);
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

  if ( (byte_438BE70 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__);
    byte_438BE70 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B7769C(v9, v10);
  WarehouseConfirmMenu__Close_26621320(warehouseConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_438BE77 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndCloseServantEquipStatus__);
    byte_438BE77 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_B7769C(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
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
  CommonUI_o *Instance; // x21
  System_Action_o *v11; // x0
  bool v12; // cc
  System_Action_o *v13; // x20
  __int64 *v14; // x8

  v8 = this;
  if ( (byte_438BE75 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndCloseServantStatus__);
    byte_438BE75 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v14 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)v8, *v14, 0LL);
  if ( !Instance )
LABEL_14:
    sub_B7769C(this, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


void __fastcall WarehouseListMenu__EndStatusSync(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  BattleServantConfConponent_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_B77560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WarehouseListMenu_RequestCallbackFunc__Invoke(requedstCallback, 1, 0LL);
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
    sub_B7769C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_B7769C(0LL, method);
  WarehouseListManager__DestroyList(servantListViewManager, method);
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  *(_QWORD *)&this->fields.tabKind = 0LL;
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
  int32_t friendShipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t normalSum; // [xsp+Ch] [xbp-4h] BYREF

  normalSum = 0;
  friendShipSum = 0;
  if ( (this->fields.tabKind | 2) != 3 )
    return 1;
  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (WarehouseListManager__GetSelectItemNum(servantListViewManager, &normalSum, &friendShipSum, v2),
        (v5 = this->fields.servantListViewManager) == 0LL) )
  {
    sub_B7769C(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_438BE63 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClickCancel__);
    byte_438BE63 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v3, v4);
    }
    else
    {
      v6 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v6, v7);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438BE79 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_ChangeIconScale__);
    byte_438BE79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v3, v4);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_438BE6A & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClickTabChoice__);
    byte_438BE6A = 1;
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
        v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v5, v6);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B7769C(0LL, v7);
        WarehouseListManager__ReleaseAll(servantListViewManager, v7);
        return;
      }
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v8, v9);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v3);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_438BE69 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClickTabLock__);
    byte_438BE69 = 1;
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
        v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v5, v6);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B7769C(0LL, v7);
        WarehouseListManager__ReleaseAll(servantListViewManager, v7);
        return;
      }
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v8, v9);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v3);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_438BE6B & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClickTabPush__);
    byte_438BE6B = 1;
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
    v3 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v3, v4);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B7769C(0LL, v5);
    WarehouseListManager__ReleaseAll(servantListViewManager, v5);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v4; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_438BE66 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndClickTabPutIn__);
    byte_438BE66 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B7769C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v4);
    }
    else
    {
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v5, v6);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v4; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_438BE67 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndClickTabPutOut__);
    byte_438BE67 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B7769C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v4);
    }
    else
    {
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v5, v6);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v4; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_438BE64 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndClickTabServant__);
    byte_438BE64 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B7769C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v4);
    }
    else
    {
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v5, v6);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v4; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  v2 = this;
  if ( (byte_438BE65 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndClickTabServantEquip__);
    byte_438BE65 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B7769C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v4);
    }
    else
    {
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v5,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v5, v6);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438BE68 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndClickTabStatus__);
    byte_438BE68 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B77694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v3, v4);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  MethodInfo *v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct WarehouseListManager_o *v30; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v32; // x21
  const MethodInfo *v33; // x5
  struct WarehouseListManager_o *v34; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v38; // w1
  int32_t tabKind; // w8
  WebViewManager_o *v40; // x0
  int64_t selectNum; // x20
  CommonUI_o *v42; // x21
  ServantStatusDialog_ResultDelegate_o *v43; // x22
  CommonUI_o *v44; // x0
  int32_t v45; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_Int32_array **Item; // x1
  struct WarehouseConfirmMenu_o *v48; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v49; // x21
  WarehouseConfirmMenu_o *v50; // x0
  WarehouseListViewItem_o **v51; // x21
  const MethodInfo *v52; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v55; // q1
  struct WarehouseListManager_o *v56; // x20
  WarehouseListManager_CallbackFunc_o *v57; // x21
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x2
  WebViewManager_o *v65; // x0
  CommonUI_o *v66; // x21
  WebViewManager_o *v67; // x0
  int64_t v68; // x20
  CommonUI_o *v69; // x21
  ServantStatusDialog_EndDelegate_o *v70; // x22
  int32_t v71; // w1
  CommonUI_o *v72; // x0
  WebViewManager_o *v73; // x0
  CommonUI_o *v74; // x21
  struct WarehouseConfirmMenu_o *v75; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v76; // x2
  int32_t v77; // w3
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v79; // x19
  __int64 v80; // x22
  __int64 v81; // x23
  ServantEntity_o *v82; // x25
  System_String_o *v83; // x19
  System_String_o *v84; // x22
  System_Object_array *v85; // x23
  int32_t Rarity; // w26
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **v93; // x26
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x26
  int32_t v101; // w0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x24
  int32_t v109; // w0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x24
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x24
  WarehouseListViewItem_o *v124; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v125; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v127; // x2
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  System_Int32_array **v133; // x21
  System_String_o *v134; // x21
  System_String_o *v135; // x22
  System_String_o *v136; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v138; // x25
  struct WarehouseListManager_o *v139; // x8
  struct WarehouseListManager_o *v140; // x8
  struct WarehouseListManager_o *v141; // x8
  __int64 v142; // x0
  __int64 v143; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_438BE6D & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__);
    sub_B775C4(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndConfirmMove__);
    sub_B775C4(&Method_WarehouseListMenu_EndServantEquipStatus__);
    sub_B775C4(&Method_WarehouseListMenu_EndServantStatus__);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438BE6D = 1;
  }
  v9 = sub_B77694(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  WarehouseListMenu___c__DisplayClass81_0___ctor((WarehouseListMenu___c__DisplayClass81_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_128;
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectNumList,
    (System_Int32_array **)list,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
        goto LABEL_128;
      baseListViewManager = servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_128;
      Item = (System_Int32_array **)WarehouseListViewManager__GetItem(baseListViewManager, n, v24);
    }
    *(_QWORD *)(v9 + 24) = Item;
    v51 = (WarehouseListViewItem_o **)(v9 + 24);
    sub_B77560((BattleServantConfConponent_o *)(v9 + 24), Item, (System_String_array **)v24, v25, v26, v27, v28, v29);
    if ( !*(_QWORD *)(v9 + 24) || !(*v51)->fields.isEnabled )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      this->fields.state = 2;
      v56 = this->fields.servantListViewManager;
      v57 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        0LL);
      if ( v56 )
      {
        v56->fields.callbackFunc = v57;
        sub_B77560(
          (BattleServantConfConponent_o *)&v56->fields.callbackFunc,
          (System_Int32_array **)v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        WarehouseListManager__SetMode_26632316(v56, 2, v64);
        return;
      }
      goto LABEL_128;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseListViewManager )
      goto LABEL_128;
    dropList = (int64_t)baseListViewManager->fields.dropList;
    if ( !dropList )
      goto LABEL_48;
    if ( !*v51 )
      goto LABEL_128;
    userServantEntity = (*v51)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_128;
    v55 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v145.fields.fakeValue = v55;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v144 = v145;
    if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v144, 0LL) )
    {
LABEL_48:
      WarehouseListMenu__PushRequest(this, *v51, v52);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_128;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseListViewManager,
               dropList,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_128;
    v79 = (DataMasterBase_WarMaster__WarEntity__int__o *)baseListViewManager;
    v81 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v80 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v146.fields.currentCryptoKey = v81;
    *(_QWORD *)&v146.fields.fakeValue = v80;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          v146,
                                                          0LL);
    if ( !v79 )
      goto LABEL_128;
    v82 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v79,
                               (int32_t)baseListViewManager,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v83 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v85 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v85 )
LABEL_128:
      sub_B7769C(baseListViewManager, v11);
    v93 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( !v85->max_length )
      goto LABEL_129;
    v85->m_Items[0] = (Il2CppObject *)v93;
    sub_B77560((BattleServantConfConponent_o *)v85->m_Items, v93, v87, v88, v89, v90, v91, v92);
    if ( !v82 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(v82, 0LL);
    v100 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v85->max_length <= 1 )
      goto LABEL_129;
    v85->m_Items[1] = (Il2CppObject *)v100;
    sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[1], v100, v94, v95, v96, v97, v98, v99);
    v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.limitCount, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(v82, v101, -1, 0LL);
    v108 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v85->max_length <= 2 )
      goto LABEL_129;
    v85->m_Items[2] = (Il2CppObject *)v108;
    sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[2], v108, v102, v103, v104, v105, v106, v107);
    if ( !*v51 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v51)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    v109 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v109, 0LL);
    v116 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v85->max_length <= 3 )
      goto LABEL_129;
    v85->m_Items[3] = (Il2CppObject *)v116;
    sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[3], v116, v110, v111, v112, v113, v114, v115);
    if ( !*v51 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v51)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v123 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v85->max_length <= 4 )
      goto LABEL_129;
    v85->m_Items[4] = (Il2CppObject *)v123;
    sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[4], v123, v117, v118, v119, v120, v121, v122);
    v124 = *v51;
    if ( !*v51 )
      goto LABEL_128;
    v125 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v124->fields.userServantEntity;
    if ( !v125 )
      goto LABEL_128;
    servantEntity = v124->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                          v125[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v133 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B77684(
                                                            baseListViewManager,
                                                            v85->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_130:
        v143 = sub_B776BC(baseListViewManager);
        sub_B77668(v143, 0LL);
      }
    }
    if ( v85->max_length > 5 )
    {
      v85->m_Items[5] = (Il2CppObject *)v133;
      sub_B77560((BattleServantConfConponent_o *)&v85->m_Items[5], v133, v127, v128, v129, v130, v131, v132);
      v134 = System_String__Format_44980660(v84, v85, 0LL);
      v135 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v136 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v138 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v138,
        (Il2CppObject *)v9,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      baseListViewManager = (WarehouseListViewManager_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_18055364(
          Instance,
          v83,
          v134,
          v135,
          v136,
          v138,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_128;
    }
LABEL_129:
    v142 = sub_B776C8(baseListViewManager);
    sub_B77668(v142, 0LL);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v24, (const MethodInfo *)v25);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v30 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v30 )
    {
      if ( v30->fields.totalSum > v30->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v11) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v32 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v34 = this->fields.servantListViewManager;
            if ( !v34 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v34->fields.sendKeep;
            sendSum = v34->fields.sendSum;
            totalSum = v34->fields.totalSum;
            v38 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v32 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v141 = this->fields.servantListViewManager;
            if ( !v141 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v141->fields.sendKeep;
            sendSum = v141->fields.sendSum;
            totalSum = v141->fields.totalSum;
            v38 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v32 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v139 = this->fields.servantListViewManager;
            if ( !v139 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v139->fields.sendKeep;
            sendSum = v139->fields.sendSum;
            totalSum = v139->fields.totalSum;
            v38 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v32 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v140 = this->fields.servantListViewManager;
            if ( !v140 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v140->fields.sendKeep;
            sendSum = v140->fields.sendSum;
            totalSum = v140->fields.totalSum;
            v38 = 11;
            break;
          default:
            return;
        }
        v77 = totalSum + sendSum;
        v50 = warehouseConfirmMenu;
        v76 = v32;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v48 = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v48 )
              goto LABEL_128;
            v50 = v48;
            v38 = 0;
            goto LABEL_69;
          case 1:
            v75 = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v75 )
              goto LABEL_128;
            v38 = 1;
            goto LABEL_68;
          case 2:
            v75 = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v75 )
              goto LABEL_128;
            v38 = 2;
            goto LABEL_68;
          case 3:
            v75 = this->fields.warehouseConfirmMenu;
            v49 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B77694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v75 )
              goto LABEL_128;
            v38 = 3;
LABEL_68:
            v50 = v75;
LABEL_69:
            v76 = v49;
            v77 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v50, v38, v76, v77, sendKeep, v33);
      return;
    }
    goto LABEL_128;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  this->fields.state = 7;
  if ( !list )
    goto LABEL_128;
  if ( !list->max_length )
    goto LABEL_129;
  tabKind = this->fields.tabKind;
  this->fields.selectNum = list->m_Items[0];
  switch ( tabKind )
  {
    case 0:
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v42 = (CommonUI_o *)v40;
      v43 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v43,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v42 )
        goto LABEL_128;
      v44 = v42;
      v45 = 0;
      goto LABEL_56;
    case 1:
      v73 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v68 = this->fields.selectNum;
      v74 = (CommonUI_o *)v73;
      v70 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v70,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v74 )
        goto LABEL_128;
      v72 = v74;
      v71 = 0;
      goto LABEL_61;
    case 2:
      v65 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v66 = (CommonUI_o *)v65;
      v43 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v43,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v66 )
        goto LABEL_128;
      v45 = 3;
      v44 = v66;
LABEL_56:
      CommonUI__OpenServantStatusDialog_18066612(v44, v45, selectNum, v43, 0LL, 0LL);
      break;
    case 3:
      v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v68 = this->fields.selectNum;
      v69 = (CommonUI_o *)v67;
      v70 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v70,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v69 )
        goto LABEL_128;
      v71 = 3;
      v72 = v69;
LABEL_61:
      CommonUI__OpenServantStatusDialog_18065604(v72, v71, v68, v70, 0LL, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v29; // x5
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x5
  System_Action_o *v37; // x20
  unsigned __int128 v38; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_438BE60 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarehouseListMenu_EndOpen__);
    sub_B775C4(&WarehouseListMenu_TypeInfo);
    byte_438BE60 = 1;
  }
  v38 = 0uLL;
  v9 = WarehouseListMenu_TypeInfo;
  if ( (BYTE3(WarehouseListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v9 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v38,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_13;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v38;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v26);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v29);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v36);
      this->fields.state = 1;
      v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v37, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(gameObject, v11);
  }
}


void __fastcall WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v8; // x23
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438BE7A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_WarehouseListMenu_EndCardFavoriteRequest__);
    byte_438BE7A = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v8 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v8 || !userServantEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v8->fields.m_CachedPtr;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v16 = *(_QWORD *)&v8->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v8->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
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
  __int64 servantListViewManager; // x0
  __n128 inited; // q0
  float *v14; // x8
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v20; // x9
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  int v25; // w20
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
  System_String_o **v36; // x8
  float v37; // s3
  float v38; // s2
  float v39; // s1
  float v40; // s0
  UICommonButton_o *servantEquipTabButton; // x25
  bool v42; // w0
  int v43; // w20
  System_String_o **v44; // x8
  System_String_o **v45; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v47; // w0
  System_String_o **v48; // x8
  System_String_o **v49; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v51; // w0
  System_String_o **v52; // x8
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  struct WarehouseListManager_o **p_servantListViewManager; // x23
  struct WarehouseListManager_o **v56; // x23
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v58; // w1
  struct WarehouseListManager_o **v59; // x23
  const MethodInfo *v60; // x3
  __int64 *v61; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v63; // w0
  __int64 *v64; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v66; // w0
  __int64 *v67; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v69; // w0
  __int64 *v70; // x8
  UICommonButton_o *pushTabButton; // x24
  __int64 v72; // x8
  bool v73; // w0
  bool v74; // w24
  UILabel_o *explanationLabel; // x23
  __int64 *v76; // x8
  struct WarehouseListManager_o **v77; // x20
  UILabel_o *v78; // x23
  struct WarehouseListManager_o *v79; // x8
  int v80; // w9
  UILabel_o *v81; // x23
  UILabel_o *v82; // x23
  struct WarehouseListManager_o *v83; // x8
  struct WarehouseListManager_o *v84; // x21
  WarehouseListManager_CallbackFunc_o *v85; // x22
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t v92; // w1
  struct WarehouseListManager_o *v93; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v95; // [xsp+Ch] [xbp-94h]

  if ( (byte_438BE62 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    sub_B775C4(&StringLiteral_17386/*"btn_txt_craftessence_off"*/);
    sub_B775C4(&StringLiteral_17426/*"btn_txt_servant_off"*/);
    sub_B775C4(&StringLiteral_20071/*"img_txt_cardspace"*/);
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17301/*"btn_bg_12"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_17427/*"btn_txt_servant_on"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17303/*"btn_bg_19"*/);
    sub_B775C4(&StringLiteral_17382/*"btn_txt_cardtoarchive_on"*/);
    sub_B775C4(&StringLiteral_15570/*"WAREHOUSE_EXPLANATION_PUT_IN"*/);
    sub_B775C4(&StringLiteral_15568/*"WAREHOUSE_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17307/*"btn_bg_25"*/);
    sub_B775C4(&StringLiteral_17381/*"btn_txt_cardtoarchive_off"*/);
    sub_B775C4(&StringLiteral_17387/*"btn_txt_craftessence_on"*/);
    sub_B775C4(&StringLiteral_15571/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/);
    sub_B775C4(&StringLiteral_15569/*"WAREHOUSE_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_17370/*"btn_txt_archivetocard_on"*/);
    sub_B775C4(&StringLiteral_20062/*"img_txt_archivespace"*/);
    sub_B775C4(&StringLiteral_17369/*"btn_txt_archivetocard_off"*/);
    sub_B775C4(&StringLiteral_15567/*"WAREHOUSE_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17306/*"btn_bg_24"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438BE62 = 1;
  }
  v11 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = (__int64)this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_228;
    WarehouseListManager__DestroyList((WarehouseListManager_o *)servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCE )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCE = 1;
  }
  servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  v14 = *(float **)(servantListViewManager + 184);
  v15 = v14[20];
  v16 = v14[21];
  v17 = v14[22];
  v18 = v14[23];
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
    byte_4387FCF = 1;
  }
  if ( (*(_BYTE *)(servantListViewManager + 307) & 4) != 0 && !*(_DWORD *)(servantListViewManager + 224) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_228;
  v20 = *(float **)(servantListViewManager + 184);
  v21 = v20[24];
  v22 = v20[25];
  v23 = v20[26];
  v24 = v20[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v25 = tabKind | 2;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 2) != 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v26 = &StringLiteral_17427/*"btn_txt_servant_on"*/;
  if ( v25 != 2 )
    v26 = &StringLiteral_17426/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v26, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v27 = v25 == 2 ? v24 : v18;
  v28 = v25 == 2 ? v23 : v17;
  v29 = v25 == 2 ? v22 : v16;
  v30 = v25 == 2 ? v21 : v15;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v27 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v95 = isModify;
  v31 = (System_String_o **)(v25 == 2 ? &StringLiteral_17303/*"btn_bg_19"*/ : &StringLiteral_17301/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v31, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v32 = !v11;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v11,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  v33 = this->fields.servantTabButton;
  if ( !v33 )
    goto LABEL_228;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v33, enabled, !v11, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
    servantListViewManager,
    1LL,
    *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
  servantListViewManager = (__int64)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v25 == 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v35 = &StringLiteral_17386/*"btn_txt_craftessence_off"*/;
  if ( v25 != 2 )
    v35 = &StringLiteral_17387/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v35, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v36 = (System_String_o **)(v25 == 2 ? &StringLiteral_17301/*"btn_bg_12"*/ : &StringLiteral_17303/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v36, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v37 = v25 == 2 ? v18 : v24;
  v38 = v25 == 2 ? v17 : v23;
  v39 = v25 == 2 ? v16 : v22;
  v40 = v25 == 2 ? v15 : v21;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v37 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v11,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_228;
  v42 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v42, v32, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
    servantListViewManager,
    1LL,
    *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
  servantListViewManager = (__int64)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v43 = tabKind | 1;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 1) == 3, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v44 = (System_String_o **)&StringLiteral_17381/*"btn_txt_cardtoarchive_off"*/;
  if ( v43 != 3 )
    v44 = (System_String_o **)&StringLiteral_17382/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v44, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v45 = (System_String_o **)(v43 == 3 ? &StringLiteral_17306/*"btn_bg_24"*/ : &StringLiteral_17307/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v45, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v11,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_228;
  v47 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v47, v32, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
    servantListViewManager,
    1LL,
    *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
  servantListViewManager = (__int64)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v43 != 3, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v48 = (System_String_o **)&StringLiteral_17370/*"btn_txt_archivetocard_on"*/;
  if ( v43 != 3 )
    v48 = (System_String_o **)&StringLiteral_17369/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v48, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v49 = (System_String_o **)(v43 == 3 ? &StringLiteral_17307/*"btn_bg_25"*/ : &StringLiteral_17306/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v49, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v11,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_228;
  v51 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v51, v32, 0LL);
  servantListViewManager = (__int64)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v52 = (System_String_o **)&StringLiteral_20071/*"img_txt_cardspace"*/;
  if ( v43 != 3 )
    v52 = (System_String_o **)&StringLiteral_20062/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v52, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( v11 || this->fields.tabKind )
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          0,
          this->fields.setupInfo,
          v54);
      }
      else
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
      }
      if ( !*p_servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (__int64)(*p_servantListViewManager)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)servantListViewManager,
                                          0LL);
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0LL);
      servantListViewManager = (__int64)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
        servantListViewManager,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
      servantListViewManager = (__int64)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 1, 0LL);
      servantListViewManager = (__int64)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                           + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 1LL,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
LABEL_107:
      if ( v11 )
        goto LABEL_135;
      goto LABEL_134;
    case 1:
      if ( !v11 && this->fields.tabKind == 1 )
        goto LABEL_118;
      v56 = &this->fields.servantListViewManager;
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      setupInfo = this->fields.setupInfo;
      v58 = 1;
      goto LABEL_130;
    case 2:
      if ( v11 || this->fields.tabKind != 2 )
      {
        v59 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          2,
          this->fields.setupInfo,
          v54);
      }
      else
      {
        v59 = &this->fields.servantListViewManager;
      }
      if ( !*v59 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v59)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)servantListViewManager,
                                          0LL);
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0LL);
      if ( this->fields.modeKind == 3 )
      {
        modeKind = 0;
        if ( v11 )
          goto LABEL_135;
      }
      else
      {
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
          servantListViewManager,
          1LL,
          *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 0, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        servantListViewManager = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                              + 536LL))(
                                   servantListViewManager,
                                   3LL,
                                   1LL,
                                   *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
        if ( v11 )
          goto LABEL_135;
      }
LABEL_134:
      if ( modeKind == this->fields.modeKind )
        break;
LABEL_135:
      servantListViewManager = (__int64)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
        servantListViewManager,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
      servantListViewManager = (__int64)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 0, 0LL);
      servantListViewManager = (__int64)this->fields.statusTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v61 = &StringLiteral_17479/*"button_select_reg"*/;
      if ( modeKind )
        v61 = &StringLiteral_17480/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v61, 0LL);
      servantListViewManager = (__int64)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v11,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_228;
      v63 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v63, v32, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
        servantListViewManager,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
      servantListViewManager = (__int64)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 1, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v64 = &StringLiteral_17465/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v64 = &StringLiteral_17466/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v64, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v11,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_228;
      v66 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v66, v32, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
        servantListViewManager,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
      servantListViewManager = (__int64)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 2, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v67 = &StringLiteral_17463/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v67 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v67, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v11,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_228;
      v69 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v69, v32, 0LL);
      servantListViewManager = (__int64)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 392LL))(
        servantListViewManager,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 400LL));
      servantListViewManager = (__int64)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(
        (UnityEngine_Behaviour_o *)servantListViewManager,
        modeKind != 3 && v43 != 3,
        0LL);
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v70 = &StringLiteral_17477/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v70 = &StringLiteral_17478/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v70, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( v43 == 3 )
      {
        if ( !pushTabButton )
          goto LABEL_228;
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v32, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v72 = *(_QWORD *)servantListViewManager;
      }
      else
      {
        if ( !pushTabButton )
          goto LABEL_228;
        v73 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v73, v32, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v72 = *(_QWORD *)servantListViewManager;
      }
      servantListViewManager = (*(__int64 (**)(void))(v72 + 536))();
      break;
    case 3:
      if ( v11 || this->fields.tabKind != 3 )
      {
        v56 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        setupInfo = this->fields.setupInfo;
        v58 = 3;
LABEL_130:
        WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, v58, setupInfo, v54);
      }
      else
      {
LABEL_118:
        v56 = &this->fields.servantListViewManager;
      }
      if ( !*v56 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v56)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = WarehouseListMenu__HidePushButton(this, modeKind, 0, v60);
      modeKind = servantListViewManager;
      if ( !v11 )
        goto LABEL_134;
      goto LABEL_135;
    default:
      goto LABEL_107;
  }
  v74 = v95;
  switch ( modeKind )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v76 = &StringLiteral_15570/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( (tabKind & 0xFFFFFFFE) != 2 )
          goto LABEL_210;
        explanationLabel = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v76 = &StringLiteral_15571/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)*v76, 0LL);
      if ( !explanationLabel )
        goto LABEL_228;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0LL);
LABEL_210:
      v77 = &this->fields.servantListViewManager;
      v83 = this->fields.servantListViewManager;
      if ( !v83 )
        goto LABEL_228;
      if ( v83->fields.modeKind )
        v83->fields.modeKind = 0;
LABEL_213:
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      this->fields.isInitTab = 1;
      this->fields.tabKind = tabKind;
      this->fields.modeKind = modeKind;
      if ( !servantListViewManager )
        goto LABEL_228;
      if ( this->fields.state == 2 )
      {
        servantListViewManager = *(_QWORD *)(servantListViewManager + 24);
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListViewManager__UpdateItemState(
          (WarehouseListViewManager_o *)servantListViewManager,
          modeKind == 3,
          v53);
        v84 = this->fields.servantListViewManager;
        v85 = (WarehouseListManager_CallbackFunc_o *)sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v85,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL);
        if ( !v84 )
          goto LABEL_228;
        v84->fields.callbackFunc = v85;
        sub_B77560(
          (BattleServantConfConponent_o *)&v84->fields.callbackFunc,
          (System_Int32_array **)v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
        v92 = 2;
        servantListViewManager = (__int64)v84;
      }
      else
      {
        v92 = 1;
      }
      WarehouseListManager__SetMode_26632316((WarehouseListManager_o *)servantListViewManager, v92, v53);
      if ( !v11 && v74 )
      {
        if ( *v77 )
        {
          servantListViewManager = (__int64)(*v77)->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_223;
          }
        }
LABEL_228:
        sub_B7769C(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_223:
      v93 = this->fields.servantListViewManager;
      if ( !v93 )
        goto LABEL_228;
      servantListViewManager = (__int64)v93->fields.baseListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      servantListViewManager = (__int64)WarehouseListViewManager__GetScaleButtonSpriteName(
                                          (WarehouseListViewManager_o *)servantListViewManager,
                                          *(const MethodInfo **)&tabKind);
      if ( !scaleChageTabSprite )
        goto LABEL_228;
      UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0LL);
      return;
    case 1:
      v78 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15568/*"WAREHOUSE_EXPLANATION_LOCK"*/, 0LL);
      if ( !v78 )
        goto LABEL_228;
      UILabel__set_text(v78, (System_String_o *)servantListViewManager, 0LL);
      v77 = &this->fields.servantListViewManager;
      v79 = this->fields.servantListViewManager;
      if ( !v79 )
        goto LABEL_228;
      if ( v79->fields.modeKind == 1 )
        goto LABEL_213;
      v80 = 1;
      goto LABEL_198;
    case 2:
      v81 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15567/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v81 )
        goto LABEL_228;
      UILabel__set_text(v81, (System_String_o *)servantListViewManager, 0LL);
      v77 = &this->fields.servantListViewManager;
      v79 = this->fields.servantListViewManager;
      if ( !v79 )
        goto LABEL_228;
      if ( v79->fields.modeKind == 2 )
        goto LABEL_213;
      v80 = 2;
      goto LABEL_198;
    case 3:
      v82 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15569/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0LL);
      if ( !v82 )
        goto LABEL_228;
      UILabel__set_text(v82, (System_String_o *)servantListViewManager, 0LL);
      v77 = &this->fields.servantListViewManager;
      v79 = this->fields.servantListViewManager;
      if ( !v79 )
        goto LABEL_228;
      if ( v79->fields.modeKind == 3 )
        goto LABEL_213;
      v80 = 3;
LABEL_198:
      v79->fields.modeKind = v80;
      goto LABEL_213;
    default:
      v74 = v95;
      v77 = &this->fields.servantListViewManager;
      goto LABEL_213;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  System_Int64_array *v15; // x2
  System_Int64_array *v16; // x1
  bool v17; // w4
  bool v18; // w3
  bool v19; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_438BE6C & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_B775C4(&Method_WarehouseListMenu_EndStatusSync__);
    byte_438BE6C = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = v5->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = v5->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_25;
    this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
    if ( !this )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &unchoiceList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v27, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v27,
                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v15 = unchoiceList;
        v16 = choiceList;
        v19 = 1;
        v17 = 0;
        v18 = (v5->fields.tabKind | 1) == 3;
        goto LABEL_21;
      }
LABEL_25:
      sub_B7769C(this, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    v7 = v5->fields.servantListViewManager;
    if ( !v7 )
      goto LABEL_25;
    this = (WarehouseListMenu_o *)v7->fields.baseListViewManager;
    if ( !this )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v14,
                                      (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v15 = unlockList;
        v16 = lockList;
        v17 = 1;
        v18 = (v5->fields.tabKind | 1) == 3;
        v19 = 0;
LABEL_21:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)this, v16, v15, v18, v17, v19, 0LL);
        return;
      }
      goto LABEL_25;
    }
  }
  if ( callback )
    WarehouseListMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
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

  if ( (byte_438BE5E & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_438BE5E = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B77990(v7);
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

  if ( (byte_438BE5F & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_438BE5F = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B77990(v7);
  WarehouseListMenu__GetMode(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_CallbackFunc___ctor(
        WarehouseListMenu_CallbackFunc_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall WarehouseListMenu_CallbackFunc__BeginInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_43892A4 & 1) == 0 )
  {
    sub_B775C4(&WarehouseListMenu_ResultKind_TypeInfo);
    byte_43892A4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_CallbackFunc__Invoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  WarehouseListMenu_CallbackFunc_o **v6; // x25
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
  WarehouseListMenu_CallbackFunc_o *v18; // x8
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
  WarehouseListMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v6 = (WarehouseListMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v8);
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
void __fastcall WarehouseListMenu_RequestCallbackFunc___ctor(
        WarehouseListMenu_RequestCallbackFunc_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall WarehouseListMenu_RequestCallbackFunc__BeginInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_43892A5 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43892A5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_RequestCallbackFunc__Invoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WarehouseListMenu_RequestCallbackFunc_o **v7; // x25
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
  WarehouseListMenu_RequestCallbackFunc_o *v18; // x8
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
  WarehouseListMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (WarehouseListMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct WarehouseListMenu_o *_4__this; // x8
  struct WarehouseListMenu_o *v16; // x20
  WarehouseListManager_o *servantListViewManager; // x19
  __int64 v18; // x21
  __int64 v19; // x9
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_43892A3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__);
    sub_B775C4(&Method_WarehouseListMenu_OnSelectServant__);
    byte_43892A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B7769C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_13;
  servantListViewManager = v16->fields.servantListViewManager;
  v18 = sub_B77694(WarehouseListManager_CallbackFunc_TypeInfo);
  v19 = *(_QWORD *)Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v18 + 40) = Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v16;
  sub_B77560((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v16, v20, v21, v22, v23, v24, v25);
  if ( !servantListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode(servantListViewManager, 2, (WarehouseListManager_CallbackFunc_o *)v18, 0LL);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  WarehouseListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  WarehouseListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}