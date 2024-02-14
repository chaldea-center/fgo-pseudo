void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_42156DC & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_357/*"#4C4C4C"*/, v8);
    byte_42156DC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_357/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_357/*"#4C4C4C"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42156DB & 1) == 0 )
  {
    sub_B0D8A4(&BaseMenu_TypeInfo, method);
    byte_42156DB = 1;
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
    sub_B0D840(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
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
    sub_B0D97C(this);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_26310312(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_26310312(
        WarehouseListMenu_o *this,
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
  const MethodInfo *v13; // x5
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_42156C0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClose__, v10);
    byte_42156C0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v13);
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  v3 = this;
  if ( (byte_42156DA & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, result);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_42156DA = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v6 = v3->fields.servantListViewManager,
        v9 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, v7, v8),
        WarehouseListManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_B0D97C(this);
  }
  v6->fields.callbackFunc = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  WarehouseListManager__SetMode_26298276(v6, 2, v16);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v6);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v6);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v6);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B0D97C(this);
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
          WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B0D97C(this);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_6:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 2, method);
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
      sub_B0D97C(baseListViewManager);
    }
    WarehouseListManager__SetMode_26298276(baseListViewManager, 3, v13);
  }
LABEL_6:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_26298276(baseListViewManager, 2, v7);
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
      sub_B0D97C(this);
    }
    WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)this, 3, v6);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_42156D3 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_42156D3 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B0D97C(v7);
  servantListViewManager->fields.callbackFunc = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26298276(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x5
  int32_t v9; // w1

  if ( (byte_42156D0 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseListMenu_EndNotificationMove__, v4);
    byte_42156D0 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v6 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_B0D97C(v7);
      v9 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v9, v6, 0, 0, v8);
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
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_42156D2 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_42156D2 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B0D97C(v7);
  servantListViewManager->fields.callbackFunc = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26298276(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_42156D7 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_42156D7 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B0D97C(v7);
  servantListViewManager->fields.callbackFunc = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26298276(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_42156D5 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_42156D5 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v6 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
  WarehouseListManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B0D97C(v7);
  servantListViewManager->fields.callbackFunc = v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26298276(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.state = 3;
  WarehouseListMenu__Callback(this, 2, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v11; // x21
  __int64 v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_42156CD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v6);
    sub_B0D8A4(&Method_WarehouseListMenu_EndConfirmRequestLock__, v7);
    byte_42156CD = 1;
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
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                        WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                        isDecide,
                                                        method);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v8, v9);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_B0D97C(v12);
    WarehouseConfirmMenu__Close_26287280(warehouseConfirmMenu, v11, v13);
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
  StorageTakeinRequest_o *Request_WarBoardWallAttackRequest; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_42156CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest);
    sub_B0D8A4(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&Method_WarehouseListMenu_EndRequestWarehouse__, v7);
    byte_42156CE = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v11,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_16;
    StorageTakeinRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  isRequest,
                                                  method);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v9,
                                                                    (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      StorageTakeoutRequest__beginRequest(
        (StorageTakeoutRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.selectNumList,
        0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
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

  if ( (byte_42156D1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v4);
    byte_42156D1 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B0D97C(v7);
  WarehouseConfirmMenu__Close_26287280(warehouseConfirmMenu, v6, v8);
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

  if ( (byte_42156CF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5);
    byte_42156CF = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B0D97C(v12);
  WarehouseConfirmMenu__Close_26287280(warehouseConfirmMenu, v11, v13);
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
  CommonUI_o *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21

  v4 = this;
  if ( (byte_42156D6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v6);
    byte_42156D6 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_B0D97C(this);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
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
  CommonUI_o *Instance; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x0
  bool v18; // cc
  System_Action_o *v19; // x20
  __int64 *v20; // x8

  v8 = this;
  if ( (byte_42156D4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v10);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndCloseServantStatus__, v11);
    byte_42156D4 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  v18 = questId < 1;
  v19 = v17;
  if ( v18 )
    v20 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v20 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v17, (Il2CppObject *)v8, *v20, 0LL);
  if ( !Instance )
LABEL_14:
    sub_B0D97C(this);
  CommonUI__CloseServantStatusDialog(Instance, v19, 0LL);
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
    sub_B0D840(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WarehouseListMenu_RequestCallbackFunc__Invoke(requedstCallback, 1, 0LL);
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
    sub_B0D97C(pushTabSprite);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(servantListViewManager);
  }
  return v5->fields.totalSum - friendShipSum > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_42156C2 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClickCancel__, v4);
    byte_42156C2 = 1;
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
      WarehouseListMenu__Callback(this, 0, v6, v7);
    }
    else
    {
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5, v6);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v9, v10);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42156D8 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_ChangeIconScale__, v4);
    byte_42156D8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5, v6);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v7, v8);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42156C9 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabChoice__, v4);
    byte_42156C9 = 1;
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
        v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                          WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v9, v10);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B0D97C(0LL);
        WarehouseListManager__ReleaseAll(servantListViewManager, v11);
        return;
      }
      v12 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v5,
                                                         v6);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v12, v13);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v7);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42156C8 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabLock__, v4);
    byte_42156C8 = 1;
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
        v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                          WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v9, v10);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B0D97C(0LL);
        WarehouseListManager__ReleaseAll(servantListViewManager, v11);
        return;
      }
      v12 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v5,
                                                         v6);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v12, v13);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v7);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42156CA & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabPush__, v4);
    byte_42156CA = 1;
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
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5, v6);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v7, v8);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B0D97C(0LL);
    WarehouseListManager__ReleaseAll(servantListViewManager, v9);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_42156C5 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabPutIn__, v4);
    byte_42156C5 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B0D97C(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v7);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v8, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_42156C6 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabPutOut__, v4);
    byte_42156C6 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B0D97C(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v7);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v8, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_42156C3 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabServant__, v4);
    byte_42156C3 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B0D97C(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v7);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v8, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_42156C4 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabServantEquip__, v4);
    byte_42156C4 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B0D97C(this);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v7);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v8, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_42156C7 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_WarehouseListMenu_EndClickTabStatus__, v4);
    byte_42156C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B0D974(WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5, v6);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v7, v8);
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
  __int64 v35; // x1
  __int64 v36; // x20
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  MethodInfo *v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  __int64 v57; // x2
  struct WarehouseListManager_o *v58; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v60; // x21
  const MethodInfo *v61; // x5
  struct WarehouseListManager_o *v62; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v66; // w1
  int32_t tabKind; // w8
  WebViewManager_o *v68; // x0
  int64_t selectNum; // x20
  CommonUI_o *v70; // x21
  __int64 v71; // x1
  __int64 v72; // x2
  ServantStatusDialog_ResultDelegate_o *v73; // x22
  CommonUI_o *v74; // x0
  int32_t v75; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_Int32_array **Item; // x1
  struct WarehouseConfirmMenu_o *v78; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v79; // x21
  WarehouseConfirmMenu_o *v80; // x0
  WarehouseListViewItem_o **v81; // x21
  const MethodInfo *v82; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v85; // q1
  struct WarehouseListManager_o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  WarehouseListManager_CallbackFunc_o *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x2
  WebViewManager_o *v97; // x0
  CommonUI_o *v98; // x21
  __int64 v99; // x1
  __int64 v100; // x2
  WebViewManager_o *v101; // x0
  int64_t v102; // x20
  CommonUI_o *v103; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  ServantStatusDialog_EndDelegate_o *v106; // x22
  int32_t v107; // w1
  CommonUI_o *v108; // x0
  WebViewManager_o *v109; // x0
  CommonUI_o *v110; // x21
  __int64 v111; // x1
  __int64 v112; // x2
  struct WarehouseConfirmMenu_o *v113; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v114; // x2
  int32_t v115; // w3
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v117; // x19
  __int64 v118; // x22
  __int64 v119; // x23
  ServantEntity_o *v120; // x25
  System_String_o *v121; // x19
  System_String_o *v122; // x22
  System_Object_array *v123; // x23
  int32_t Rarity; // w26
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x26
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x26
  int32_t v139; // w0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x24
  int32_t v147; // w0
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  System_Int32_array **v154; // x24
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x24
  WarehouseListViewItem_o *v162; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v163; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  System_Int32_array **v171; // x21
  System_String_o *v172; // x21
  System_String_o *v173; // x22
  System_String_o *v174; // x23
  CommonUI_o *Instance; // x24
  __int64 v176; // x1
  __int64 v177; // x2
  CommonConfirmDialog_ClickDelegate_o *v178; // x25
  struct WarehouseListManager_o *v179; // x8
  struct WarehouseListManager_o *v180; // x8
  struct WarehouseListManager_o *v181; // x8
  __int64 v182; // x0
  __int64 v183; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v184; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v185; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v186; // 0:x0.16

  if ( (byte_42156CC & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&object___TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B0D8A4(&Rarity_TypeInfo, v21);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B0D8A4(&SoundManager_TypeInfo, v25);
    sub_B0D8A4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v26);
    sub_B0D8A4(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v27);
    sub_B0D8A4(&Method_WarehouseListMenu_EndConfirmMove__, v28);
    sub_B0D8A4(&Method_WarehouseListMenu_EndServantEquipStatus__, v29);
    sub_B0D8A4(&Method_WarehouseListMenu_EndServantStatus__, v30);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v31);
    sub_B0D8A4(&StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_B0D8A4(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_B0D8A4(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_B0D8A4(&StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_42156CC = 1;
  }
  v36 = sub_B0D974(WarehouseListMenu___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&result, list);
  WarehouseListMenu___c__DisplayClass81_0___ctor((WarehouseListMenu___c__DisplayClass81_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_128;
  *(_QWORD *)(v36 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectNumList,
    (System_Int32_array **)list,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
      Item = (System_Int32_array **)WarehouseListViewManager__GetItem(baseListViewManager, n, v50);
    }
    *(_QWORD *)(v36 + 24) = Item;
    v81 = (WarehouseListViewItem_o **)(v36 + 24);
    sub_B0D840((BattleServantConfConponent_o *)(v36 + 24), Item, (System_String_array **)v50, v51, v52, v53, v54, v55);
    if ( !*(_QWORD *)(v36 + 24) || !(*v81)->fields.isEnabled )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      this->fields.state = 2;
      v86 = this->fields.servantListViewManager;
      v89 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, v87, v88);
      WarehouseListManager_CallbackFunc___ctor(
        v89,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        0LL);
      if ( v86 )
      {
        v86->fields.callbackFunc = v89;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v86->fields.callbackFunc,
          (System_Int32_array **)v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95);
        WarehouseListManager__SetMode_26298276(v86, 2, v96);
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
    if ( !*v81 )
      goto LABEL_128;
    userServantEntity = (*v81)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_128;
    v85 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v185.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v185.fields.fakeValue = v85;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v184 = v185;
    if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v184, 0LL) )
    {
LABEL_48:
      WarehouseListMenu__PushRequest(this, *v81, v82);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_128;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseListViewManager,
               dropList,
               (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_128;
    v117 = (DataMasterBase_WarMaster__WarEntity__int__o *)baseListViewManager;
    v119 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v118 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v186.fields.currentCryptoKey = v119;
    *(_QWORD *)&v186.fields.fakeValue = v118;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                          v186,
                                                          0LL);
    if ( !v117 )
      goto LABEL_128;
    v120 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v117,
                                (int32_t)baseListViewManager,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v121 = LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v122 = LocalizationManager__Get((System_String_o *)StringLiteral_12034/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v123 = (System_Object_array *)sub_B0D8BC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v123 )
LABEL_128:
      sub_B0D97C(baseListViewManager);
    v131 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( !v123->max_length )
      goto LABEL_129;
    v123->m_Items[0] = (Il2CppObject *)v131;
    sub_B0D840((BattleServantConfConponent_o *)v123->m_Items, v131, v125, v126, v127, v128, v129, v130);
    if ( !v120 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(v120, 0LL);
    v138 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v123->max_length <= 1 )
      goto LABEL_129;
    v123->m_Items[1] = (Il2CppObject *)v138;
    sub_B0D840((BattleServantConfConponent_o *)&v123->m_Items[1], v138, v132, v133, v134, v135, v136, v137);
    v139 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(Entity->fields.limitCount, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(v120, v139, -1, 0LL);
    v146 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v123->max_length <= 2 )
      goto LABEL_129;
    v123->m_Items[2] = (Il2CppObject *)v146;
    sub_B0D840((BattleServantConfConponent_o *)&v123->m_Items[2], v146, v140, v141, v142, v143, v144, v145);
    if ( !*v81 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v81)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    v147 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v147, 0LL);
    v154 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v123->max_length <= 3 )
      goto LABEL_129;
    v123->m_Items[3] = (Il2CppObject *)v154;
    sub_B0D840((BattleServantConfConponent_o *)&v123->m_Items[3], v154, v148, v149, v150, v151, v152, v153);
    if ( !*v81 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v81)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v161 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v123->max_length <= 4 )
      goto LABEL_129;
    v123->m_Items[4] = (Il2CppObject *)v161;
    sub_B0D840((BattleServantConfConponent_o *)&v123->m_Items[4], v161, v155, v156, v157, v158, v159, v160);
    v162 = *v81;
    if ( !*v81 )
      goto LABEL_128;
    v163 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v162->fields.userServantEntity;
    if ( !v163 )
      goto LABEL_128;
    servantEntity = v162->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                          v163[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v171 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B0D964(
                                                            baseListViewManager,
                                                            v123->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_130:
        v183 = sub_B0D99C(baseListViewManager);
        sub_B0D948(v183, 0LL);
      }
    }
    if ( v123->max_length > 5 )
    {
      v123->m_Items[5] = (Il2CppObject *)v171;
      sub_B0D840((BattleServantConfConponent_o *)&v123->m_Items[5], v171, v165, v166, v167, v168, v169, v170);
      v172 = System_String__Format_43928628(v122, v123, 0LL);
      v173 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v174 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v178 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v176, v177);
      CommonConfirmDialog_ClickDelegate___ctor(
        v178,
        (Il2CppObject *)v36,
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
        CommonUI__OpenConfirmDialog_17016196(
          Instance,
          v121,
          v172,
          v173,
          v174,
          v178,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_128;
    }
LABEL_129:
    v182 = sub_B0D9A8(baseListViewManager);
    sub_B0D948(v182, 0LL);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v50, (const MethodInfo *)v51);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v58 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v58 )
    {
      if ( v58->fields.totalSum > v58->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v56) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v60 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v60,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v62 = this->fields.servantListViewManager;
            if ( !v62 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v62->fields.sendKeep;
            sendSum = v62->fields.sendSum;
            totalSum = v62->fields.totalSum;
            v66 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v60 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v60,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v181 = this->fields.servantListViewManager;
            if ( !v181 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v181->fields.sendKeep;
            sendSum = v181->fields.sendSum;
            totalSum = v181->fields.totalSum;
            v66 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v60 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v60,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v179 = this->fields.servantListViewManager;
            if ( !v179 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v179->fields.sendKeep;
            sendSum = v179->fields.sendSum;
            totalSum = v179->fields.totalSum;
            v66 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v60 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v60,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v180 = this->fields.servantListViewManager;
            if ( !v180 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v180->fields.sendKeep;
            sendSum = v180->fields.sendSum;
            totalSum = v180->fields.totalSum;
            v66 = 11;
            break;
          default:
            return;
        }
        v115 = totalSum + sendSum;
        v80 = warehouseConfirmMenu;
        v114 = v60;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v78 = this->fields.warehouseConfirmMenu;
            v79 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v79,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v78 )
              goto LABEL_128;
            v80 = v78;
            v66 = 0;
            goto LABEL_69;
          case 1:
            v113 = this->fields.warehouseConfirmMenu;
            v79 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v79,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v113 )
              goto LABEL_128;
            v66 = 1;
            goto LABEL_68;
          case 2:
            v113 = this->fields.warehouseConfirmMenu;
            v79 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v79,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v113 )
              goto LABEL_128;
            v66 = 2;
            goto LABEL_68;
          case 3:
            v113 = this->fields.warehouseConfirmMenu;
            v79 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v56,
                                                           v57);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v79,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v113 )
              goto LABEL_128;
            v66 = 3;
LABEL_68:
            v80 = v113;
LABEL_69:
            v114 = v79;
            v115 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v80, v66, v114, v115, sendKeep, v61);
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
      v68 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v70 = (CommonUI_o *)v68;
      v73 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v71, v72);
      ServantStatusDialog_ResultDelegate___ctor(
        v73,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v70 )
        goto LABEL_128;
      v74 = v70;
      v75 = 0;
      goto LABEL_56;
    case 1:
      v109 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v102 = this->fields.selectNum;
      v110 = (CommonUI_o *)v109;
      v106 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v111, v112);
      ServantStatusDialog_EndDelegate___ctor(
        v106,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v110 )
        goto LABEL_128;
      v108 = v110;
      v107 = 0;
      goto LABEL_61;
    case 2:
      v97 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v98 = (CommonUI_o *)v97;
      v73 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v99, v100);
      ServantStatusDialog_ResultDelegate___ctor(
        v73,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v98 )
        goto LABEL_128;
      v75 = 3;
      v74 = v98;
LABEL_56:
      CommonUI__OpenServantStatusDialog_17027444(v74, v75, selectNum, v73, 0LL, 0LL);
      break;
    case 3:
      v101 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v102 = this->fields.selectNum;
      v103 = (CommonUI_o *)v101;
      v106 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v104, v105);
      ServantStatusDialog_EndDelegate___ctor(
        v106,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v103 )
        goto LABEL_128;
      v107 = 3;
      v108 = v103;
LABEL_61:
      CommonUI__OpenServantStatusDialog_17026436(v108, v107, v102, v106, 0LL, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v30; // x5
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x5
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_o *v40; // x20
  unsigned __int128 v41; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_42156BF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_WarehouseListMenu_EndOpen__, v9);
    sub_B0D8A4(&WarehouseListMenu_TypeInfo, v10);
    byte_42156BF = 1;
  }
  v41 = 0uLL;
  v11 = WarehouseListMenu_TypeInfo;
  if ( (BYTE3(WarehouseListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v11 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v11->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v41,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_13;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v41;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.setupInfo = setupinfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v27);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v30);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    this->fields.setupInfo = setupinfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v37);
      this->fields.state = 1;
      v40 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v38, v39);
      System_Action___ctor(v40, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v40, 0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(gameObject);
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
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v15; // x23
  UserServantCollectionMaster_o *v16; // x21
  int64_t v17; // x22
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v21; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v23; // x8
  int64_t v24; // x0
  __int128 v25; // q0
  __int64 v26; // x1
  __int64 v27; // x2
  NetworkManager_ResultCallbackFunc_o *v28; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v30; // q0
  CardFavoriteRequest_o *v31; // x20
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w21
  bool IsLock; // w23
  char v36; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t v43; // [xsp+50h] [xbp-110h]
  int32_t v44; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v46; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v48; // [xsp+70h] [xbp-F0h]
  __int64 v49; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42156D9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v12);
    byte_42156D9 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v16 = (UserServantCollectionMaster_o *)limitCountSupport;
  v17 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v19;
  *(_QWORD *)&v54.fields.fakeValue = v18;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
  if ( !v16 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v16, v17, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v23 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v21;
  v49 = v23;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v53;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v48 = v24;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v25;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v27);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v31 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v30;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v55.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v55.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
  if ( !v31 )
LABEL_21:
    sub_B0D97C(limitCountSupport);
  CardFavoriteRequest__beginRequest(
    v31,
    targetUsrSVtId,
    v44,
    v43,
    v32,
    v33,
    v34,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v46,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v49 != v48,
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
  __int64 servantListViewManager; // x0
  __int64 v45; // x1
  __n128 inited; // q0
  float *v47; // x8
  float v48; // s8
  float v49; // s9
  float v50; // s10
  float v51; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v53; // x9
  float v54; // s12
  float v55; // s13
  float v56; // s14
  float v57; // s15
  int v58; // w20
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
  System_String_o **v69; // x8
  float v70; // s3
  float v71; // s2
  float v72; // s1
  float v73; // s0
  UICommonButton_o *servantEquipTabButton; // x25
  bool v75; // w0
  int v76; // w20
  System_String_o **v77; // x8
  System_String_o **v78; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v80; // w0
  System_String_o **v81; // x8
  System_String_o **v82; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v84; // w0
  System_String_o **v85; // x8
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x3
  struct WarehouseListManager_o **p_servantListViewManager; // x23
  struct WarehouseListManager_o **v89; // x23
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v91; // w1
  struct WarehouseListManager_o **v92; // x23
  const MethodInfo *v93; // x3
  __int64 *v94; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v96; // w0
  __int64 *v97; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v99; // w0
  __int64 *v100; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v102; // w0
  __int64 *v103; // x8
  UICommonButton_o *pushTabButton; // x24
  __int64 v105; // x8
  bool v106; // w0
  bool v107; // w24
  UILabel_o *explanationLabel; // x23
  __int64 *v109; // x8
  struct WarehouseListManager_o **v110; // x20
  UILabel_o *v111; // x23
  struct WarehouseListManager_o *v112; // x8
  int v113; // w9
  UILabel_o *v114; // x23
  UILabel_o *v115; // x23
  struct WarehouseListManager_o *v116; // x8
  struct WarehouseListManager_o *v117; // x21
  __int64 v118; // x1
  __int64 v119; // x2
  WarehouseListManager_CallbackFunc_o *v120; // x22
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  int32_t v127; // w1
  const MethodInfo *v128; // x1
  struct WarehouseListManager_o *v129; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v131; // [xsp+Ch] [xbp-94h]

  if ( (byte_42156C1 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v15);
    sub_B0D8A4(&StringLiteral_17098/*"btn_txt_craftessence_off"*/, v16);
    sub_B0D8A4(&StringLiteral_17138/*"btn_txt_servant_off"*/, v17);
    sub_B0D8A4(&StringLiteral_19730/*"img_txt_cardspace"*/, v18);
    sub_B0D8A4(&StringLiteral_17189/*"button_push_reg"*/, v19);
    sub_B0D8A4(&StringLiteral_17190/*"button_push_unreg"*/, v20);
    sub_B0D8A4(&StringLiteral_17175/*"button_allchoice_reg"*/, v21);
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, v22);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v23);
    sub_B0D8A4(&StringLiteral_17139/*"btn_txt_servant_on"*/, v24);
    sub_B0D8A4(&StringLiteral_17191/*"button_select_reg"*/, v25);
    sub_B0D8A4(&StringLiteral_17015/*"btn_bg_19"*/, v26);
    sub_B0D8A4(&StringLiteral_17094/*"btn_txt_cardtoarchive_on"*/, v27);
    sub_B0D8A4(&StringLiteral_15357/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v28);
    sub_B0D8A4(&StringLiteral_15355/*"WAREHOUSE_EXPLANATION_LOCK"*/, v29);
    sub_B0D8A4(&StringLiteral_17019/*"btn_bg_25"*/, v30);
    sub_B0D8A4(&StringLiteral_17093/*"btn_txt_cardtoarchive_off"*/, v31);
    sub_B0D8A4(&StringLiteral_17099/*"btn_txt_craftessence_on"*/, v32);
    sub_B0D8A4(&StringLiteral_15358/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v33);
    sub_B0D8A4(&StringLiteral_15356/*"WAREHOUSE_EXPLANATION_PUSH"*/, v34);
    sub_B0D8A4(&StringLiteral_17082/*"btn_txt_archivetocard_on"*/, v35);
    sub_B0D8A4(&StringLiteral_19721/*"img_txt_archivespace"*/, v36);
    sub_B0D8A4(&StringLiteral_17081/*"btn_txt_archivetocard_off"*/, v37);
    sub_B0D8A4(&StringLiteral_15354/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v38);
    sub_B0D8A4(&StringLiteral_17192/*"button_select_unreg"*/, v39);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v40);
    sub_B0D8A4(&StringLiteral_17018/*"btn_bg_24"*/, v41);
    sub_B0D8A4(&StringLiteral_17176/*"button_allchoice_unreg"*/, v42);
    byte_42156C1 = 1;
  }
  v43 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = (__int64)this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_228;
    WarehouseListManager__DestroyList((WarehouseListManager_o *)servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v45);
    byte_4211435 = 1;
  }
  servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  v47 = *(float **)(servantListViewManager + 184);
  v48 = v47[20];
  v49 = v47[21];
  v50 = v47[22];
  v51 = v47[23];
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v45);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
    byte_4211436 = 1;
  }
  if ( (*(_BYTE *)(servantListViewManager + 307) & 4) != 0 && !*(_DWORD *)(servantListViewManager + 224) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_228;
  v53 = *(float **)(servantListViewManager + 184);
  v54 = v53[24];
  v55 = v53[25];
  v56 = v53[26];
  v57 = v53[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v58 = tabKind | 2;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 2) != 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v59 = &StringLiteral_17139/*"btn_txt_servant_on"*/;
  if ( v58 != 2 )
    v59 = &StringLiteral_17138/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v59, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v60 = v58 == 2 ? v57 : v51;
  v61 = v58 == 2 ? v56 : v50;
  v62 = v58 == 2 ? v55 : v49;
  v63 = v58 == 2 ? v54 : v48;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v60 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v131 = isModify;
  v64 = (System_String_o **)(v58 == 2 ? &StringLiteral_17015/*"btn_bg_19"*/ : &StringLiteral_17013/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v64, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v65 = !v43;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v43,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  v66 = this->fields.servantTabButton;
  if ( !v66 )
    goto LABEL_228;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v66, enabled, !v43, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v58 == 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v68 = &StringLiteral_17098/*"btn_txt_craftessence_off"*/;
  if ( v58 != 2 )
    v68 = &StringLiteral_17099/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v68, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v69 = (System_String_o **)(v58 == 2 ? &StringLiteral_17013/*"btn_bg_12"*/ : &StringLiteral_17015/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v69, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v70 = v58 == 2 ? v51 : v57;
  v71 = v58 == 2 ? v50 : v56;
  v72 = v58 == 2 ? v49 : v55;
  v73 = v58 == 2 ? v48 : v54;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v70 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v43,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_228;
  v75 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v75, v65, 0LL);
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
  v76 = tabKind | 1;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 1) == 3, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v77 = (System_String_o **)&StringLiteral_17093/*"btn_txt_cardtoarchive_off"*/;
  if ( v76 != 3 )
    v77 = (System_String_o **)&StringLiteral_17094/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v77, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v78 = (System_String_o **)(v76 == 3 ? &StringLiteral_17018/*"btn_bg_24"*/ : &StringLiteral_17019/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v78, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v43,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_228;
  v80 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v80, v65, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v76 != 3, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v81 = (System_String_o **)&StringLiteral_17082/*"btn_txt_archivetocard_on"*/;
  if ( v76 != 3 )
    v81 = (System_String_o **)&StringLiteral_17081/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v81, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v82 = (System_String_o **)(v76 == 3 ? &StringLiteral_17019/*"btn_bg_25"*/ : &StringLiteral_17018/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v82, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v43,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_228;
  v84 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v84, v65, 0LL);
  servantListViewManager = (__int64)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v85 = (System_String_o **)&StringLiteral_19730/*"img_txt_cardspace"*/;
  if ( v76 != 3 )
    v85 = (System_String_o **)&StringLiteral_19721/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v85, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( v43 || this->fields.tabKind )
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          0,
          this->fields.setupInfo,
          v87);
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
      if ( v43 )
        goto LABEL_135;
      goto LABEL_134;
    case 1:
      if ( !v43 && this->fields.tabKind == 1 )
        goto LABEL_118;
      v89 = &this->fields.servantListViewManager;
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      setupInfo = this->fields.setupInfo;
      v91 = 1;
      goto LABEL_130;
    case 2:
      if ( v43 || this->fields.tabKind != 2 )
      {
        v92 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          2,
          this->fields.setupInfo,
          v87);
      }
      else
      {
        v92 = &this->fields.servantListViewManager;
      }
      if ( !*v92 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v92)->fields.filterButton;
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
        if ( v43 )
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
        if ( v43 )
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
      v94 = &StringLiteral_17191/*"button_select_reg"*/;
      if ( modeKind )
        v94 = &StringLiteral_17192/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v94, 0LL);
      servantListViewManager = (__int64)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v43,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_228;
      v96 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v96, v65, 0LL);
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
      v97 = &StringLiteral_17177/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v97 = &StringLiteral_17178/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v97, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v43,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_228;
      v99 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v99, v65, 0LL);
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
      v100 = &StringLiteral_17175/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v100 = &StringLiteral_17176/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v100, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v43,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_228;
      v102 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v102, v65, 0LL);
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
        modeKind != 3 && v76 != 3,
        0LL);
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v103 = &StringLiteral_17189/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v103 = &StringLiteral_17190/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v103, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( v76 == 3 )
      {
        if ( !pushTabButton )
          goto LABEL_228;
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v65, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v105 = *(_QWORD *)servantListViewManager;
      }
      else
      {
        if ( !pushTabButton )
          goto LABEL_228;
        v106 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v106, v65, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v105 = *(_QWORD *)servantListViewManager;
      }
      servantListViewManager = (*(__int64 (**)(void))(v105 + 536))();
      break;
    case 3:
      if ( v43 || this->fields.tabKind != 3 )
      {
        v89 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        setupInfo = this->fields.setupInfo;
        v91 = 3;
LABEL_130:
        WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, v91, setupInfo, v87);
      }
      else
      {
LABEL_118:
        v89 = &this->fields.servantListViewManager;
      }
      if ( !*v89 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v89)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = WarehouseListMenu__HidePushButton(this, modeKind, 0, v93);
      modeKind = servantListViewManager;
      if ( !v43 )
        goto LABEL_134;
      goto LABEL_135;
    default:
      goto LABEL_107;
  }
  v107 = v131;
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
        v109 = &StringLiteral_15357/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
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
        v109 = &StringLiteral_15358/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)*v109, 0LL);
      if ( !explanationLabel )
        goto LABEL_228;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0LL);
LABEL_210:
      v110 = &this->fields.servantListViewManager;
      v116 = this->fields.servantListViewManager;
      if ( !v116 )
        goto LABEL_228;
      if ( v116->fields.modeKind )
        v116->fields.modeKind = 0;
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
          v86);
        v117 = this->fields.servantListViewManager;
        v120 = (WarehouseListManager_CallbackFunc_o *)sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, v118, v119);
        WarehouseListManager_CallbackFunc___ctor(
          v120,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL);
        if ( !v117 )
          goto LABEL_228;
        v117->fields.callbackFunc = v120;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v117->fields.callbackFunc,
          (System_Int32_array **)v120,
          v121,
          v122,
          v123,
          v124,
          v125,
          v126);
        v127 = 2;
        servantListViewManager = (__int64)v117;
      }
      else
      {
        v127 = 1;
      }
      WarehouseListManager__SetMode_26298276((WarehouseListManager_o *)servantListViewManager, v127, v86);
      if ( !v43 && v107 )
      {
        if ( *v110 )
        {
          servantListViewManager = (__int64)(*v110)->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify((WarehouseListViewManager_o *)servantListViewManager, v128);
            goto LABEL_223;
          }
        }
LABEL_228:
        sub_B0D97C(servantListViewManager);
      }
LABEL_223:
      v129 = this->fields.servantListViewManager;
      if ( !v129 )
        goto LABEL_228;
      servantListViewManager = (__int64)v129->fields.baseListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      servantListViewManager = (__int64)WarehouseListViewManager__GetScaleButtonSpriteName(
                                          (WarehouseListViewManager_o *)servantListViewManager,
                                          v128);
      if ( !scaleChageTabSprite )
        goto LABEL_228;
      UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0LL);
      return;
    case 1:
      v111 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15355/*"WAREHOUSE_EXPLANATION_LOCK"*/, 0LL);
      if ( !v111 )
        goto LABEL_228;
      UILabel__set_text(v111, (System_String_o *)servantListViewManager, 0LL);
      v110 = &this->fields.servantListViewManager;
      v112 = this->fields.servantListViewManager;
      if ( !v112 )
        goto LABEL_228;
      if ( v112->fields.modeKind == 1 )
        goto LABEL_213;
      v113 = 1;
      goto LABEL_198;
    case 2:
      v114 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15354/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v114 )
        goto LABEL_228;
      UILabel__set_text(v114, (System_String_o *)servantListViewManager, 0LL);
      v110 = &this->fields.servantListViewManager;
      v112 = this->fields.servantListViewManager;
      if ( !v112 )
        goto LABEL_228;
      if ( v112->fields.modeKind == 2 )
        goto LABEL_213;
      v113 = 2;
      goto LABEL_198;
    case 3:
      v115 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15356/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0LL);
      if ( !v115 )
        goto LABEL_228;
      UILabel__set_text(v115, (System_String_o *)servantListViewManager, 0LL);
      v110 = &this->fields.servantListViewManager;
      v112 = this->fields.servantListViewManager;
      if ( !v112 )
        goto LABEL_228;
      if ( v112->fields.modeKind == 3 )
        goto LABEL_213;
      v113 = 3;
LABEL_198:
      v112->fields.modeKind = v113;
      goto LABEL_213;
    default:
      v107 = v131;
      v110 = &this->fields.servantListViewManager;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v10; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  System_Int64_array *v20; // x2
  System_Int64_array *v21; // x1
  bool v22; // w4
  bool v23; // w3
  bool v24; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42156CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    this = (WarehouseListMenu_o *)sub_B0D8A4(&Method_WarehouseListMenu_EndStatusSync__, v8);
    byte_42156CB = 1;
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
      sub_B0D840(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v32, v33);
      NetworkManager_ResultCallbackFunc___ctor(v34, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v34,
                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v20 = unchoiceList;
        v21 = choiceList;
        v24 = 1;
        v22 = 0;
        v23 = (v5->fields.tabKind | 1) == 3;
        goto LABEL_21;
      }
LABEL_25:
      sub_B0D97C(this);
    }
  }
  else if ( modeKind == 1 )
  {
    v10 = v5->fields.servantListViewManager;
    if ( !v10 )
      goto LABEL_25;
    this = (WarehouseListMenu_o *)v10->fields.baseListViewManager;
    if ( !this )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
      NetworkManager_ResultCallbackFunc___ctor(v19, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v19,
                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v20 = unlockList;
        v21 = lockList;
        v22 = 1;
        v23 = (v5->fields.tabKind | 1) == 3;
        v24 = 0;
LABEL_21:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)this, v21, v20, v23, v22, v24, 0LL);
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

  if ( (byte_42156BD & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_42156BD = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B0DC70(v7);
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

  if ( (byte_42156BE & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_42156BE = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B0DC70(v7);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211F31 & 1) == 0 )
  {
    sub_B0D8A4(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4211F31 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_CallbackFunc__Invoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  WarehouseListMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  WarehouseListMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  unsigned int v25; // w23
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  unsigned int v31; // [xsp+4h] [xbp-4Ch] BYREF
  WarehouseListMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v31 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v32;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (WarehouseListMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v31, v21);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v20 )
    {
      v22(&v31 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        v25 = v31;
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
            v17 = sub_AA67A0(v20, v27, v28);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, v25, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v31;
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
            v15 = v11 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v31,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v31, v21);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211F32 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4211F32 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_RequestCallbackFunc__Invoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  WarehouseListMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WarehouseListMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  WarehouseListMenu_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (WarehouseListMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  CommonUI_o *v12; // x20
  System_Action_o *_9__1; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  struct WarehouseListMenu_o *_4__this; // x8
  struct WarehouseListMenu_o *v17; // x20
  WarehouseListManager_o *servantListViewManager; // x19
  __int64 v19; // x21
  __int64 v20; // x9

  if ( (byte_4211F30 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&WarehouseListManager_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v7);
    sub_B0D8A4(&Method_WarehouseListMenu_OnSelectServant__, v8);
    byte_4211F30 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B0D840(&this->fields.__9__1, _9__1);
    }
    if ( v12 )
    {
      CommonUI__CloseConfirmDialog_17017160(v12, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(Instance);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_13;
  servantListViewManager = v17->fields.servantListViewManager;
  v19 = sub_B0D974(WarehouseListManager_CallbackFunc_TypeInfo, v14, v15);
  v20 = *(_QWORD *)Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v19 + 40) = Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v19 + 16) = v20;
  *(_QWORD *)(v19 + 32) = v17;
  sub_B0D840(v19 + 32, v17);
  if ( !servantListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode(servantListViewManager, 2, (WarehouseListManager_CallbackFunc_o *)v19, 0LL);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  WarehouseListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  WarehouseListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}