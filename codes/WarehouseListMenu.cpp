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

  if ( (byte_4188971 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_352/*"#4C4C4C"*/, v8);
    byte_4188971 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_352/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_352/*"#4C4C4C"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4188970 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4188970 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
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
    sub_B2C434(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_26864748(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_26864748(
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
  System_Action_o *v14; // x20

  if ( (byte_4188955 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_WarehouseListMenu_EndClose__, v10);
    byte_4188955 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0LL);
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
  WarehouseListManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  v3 = this;
  if ( (byte_418896F & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, result);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_418896F = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v6 = v3->fields.servantListViewManager,
        v7 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_B2C434(this, result);
  }
  v6->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26852712(v6, 2, v14);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v6);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v6);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v6);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B2C434(this, isRequest);
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
          WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B2C434(this, isRequest);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_6:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 2, method);
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
      sub_B2C434(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_26852712(baseListViewManager, 3, v13);
  }
LABEL_6:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_26852712(baseListViewManager, 2, v7);
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
      sub_B2C434(this, isRequest);
    }
    WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)this, 3, v6);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4188968 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4188968 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B2C434(v6, v7);
  servantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26852712(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  int32_t v9; // w1

  if ( (byte_4188965 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseListMenu_EndNotificationMove__, v3);
    byte_4188965 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v9 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_B2C434(v6, v7);
      v9 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v9, v5, 0, 0, v8);
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
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4188967 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4188967 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B2C434(v6, v7);
  servantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26852712(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418896C & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_418896C = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B2C434(v6, v7);
  servantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26852712(servantListViewManager, 2, v14);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_418896A & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_418896A = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B2C434(v6, v7);
  servantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_26852712(servantListViewManager, 2, v14);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4188962 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v6);
    sub_B2C35C(&Method_WarehouseListMenu_EndConfirmRequestLock__, v7);
    byte_4188962 = 1;
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
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_B2C434(v12, v13);
    WarehouseConfirmMenu__Close_26841716(warehouseConfirmMenu, v11, v14);
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
  __int64 v11; // x1
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_4188963 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest);
    sub_B2C35C(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_WarehouseListMenu_EndRequestWarehouse__, v7);
    byte_4188963 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v12,
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_16;
    StorageTakeinRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                    (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      StorageTakeoutRequest__beginRequest(
        (StorageTakeoutRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.selectNumList,
        0LL);
      return;
    }
LABEL_16:
    sub_B2C434(Request_WarBoardWallAttackRequest, v11);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4188966 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v4);
    byte_4188966 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B2C434(v7, v8);
  WarehouseConfirmMenu__Close_26841716(warehouseConfirmMenu, v6, v9);
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
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4188964 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5);
    byte_4188964 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B2C434(v10, v11);
  WarehouseConfirmMenu__Close_26841716(warehouseConfirmMenu, v9, v12);
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
  System_Action_o *v9; // x21

  v4 = this;
  if ( (byte_418896B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v6);
    byte_418896B = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_B2C434(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
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
  CommonUI_o *Instance; // x21
  System_Action_o *v14; // x0
  bool v15; // cc
  System_Action_o *v16; // x20
  __int64 *v17; // x8

  v8 = this;
  if ( (byte_4188969 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v10);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndCloseServantStatus__, v11);
    byte_4188969 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v15 = questId < 1;
  v16 = v14;
  if ( v15 )
    v17 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v17 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v14, (Il2CppObject *)v8, *v17, 0LL);
  if ( !Instance )
LABEL_14:
    sub_B2C434(this, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
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
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4188957 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_EndClickCancel__, v4);
    byte_4188957 = 1;
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
      WarehouseListMenu__Callback(this, 0, v5, v6);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v8, v9);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418896D & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_ChangeIconScale__, v4);
    byte_418896D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v5, v6);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_418895E & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_EndClickTabChoice__, v4);
    byte_418895E = 1;
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
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v7, v8);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B2C434(0LL, v9);
        WarehouseListManager__ReleaseAll(servantListViewManager, v9);
        return;
      }
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v10, v11);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v5);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_418895D & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_EndClickTabLock__, v4);
    byte_418895D = 1;
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
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v7, v8);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B2C434(0LL, v9);
        WarehouseListManager__ReleaseAll(servantListViewManager, v9);
        return;
      }
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v10, v11);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v5);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_418895F & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_EndClickTabPush__, v4);
    byte_418895F = 1;
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
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v5, v6);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B2C434(0LL, v7);
    WarehouseListManager__ReleaseAll(servantListViewManager, v7);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_418895A & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndClickTabPutIn__, v4);
    byte_418895A = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B2C434(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v7, v8);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_418895B & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndClickTabPutOut__, v4);
    byte_418895B = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B2C434(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v7, v8);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4188958 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndClickTabServant__, v4);
    byte_4188958 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B2C434(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v7, v8);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v6; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  v2 = this;
  if ( (byte_4188959 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndClickTabServantEquip__, v4);
    byte_4188959 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B2C434(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v7, v8);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418895C & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarehouseListMenu_EndClickTabStatus__, v4);
    byte_418895C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B2C42C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v5, v6);
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
  const MethodInfo *v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  MethodInfo *v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct WarehouseListManager_o *v57; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v59; // x21
  const MethodInfo *v60; // x5
  struct WarehouseListManager_o *v61; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v65; // w1
  int32_t tabKind; // w8
  WebViewManager_o *v67; // x0
  int64_t selectNum; // x20
  CommonUI_o *v69; // x21
  ServantStatusDialog_ResultDelegate_o *v70; // x22
  CommonUI_o *v71; // x0
  int32_t v72; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_Int32_array **Item; // x1
  struct WarehouseConfirmMenu_o *v75; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v76; // x21
  WarehouseConfirmMenu_o *v77; // x0
  WarehouseListViewItem_o **v78; // x21
  const MethodInfo *v79; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v82; // q1
  struct WarehouseListManager_o *v83; // x20
  WarehouseListManager_CallbackFunc_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  const MethodInfo *v91; // x2
  WebViewManager_o *v92; // x0
  CommonUI_o *v93; // x21
  WebViewManager_o *v94; // x0
  int64_t v95; // x20
  CommonUI_o *v96; // x21
  ServantStatusDialog_EndDelegate_o *v97; // x22
  int32_t v98; // w1
  CommonUI_o *v99; // x0
  WebViewManager_o *v100; // x0
  CommonUI_o *v101; // x21
  struct WarehouseConfirmMenu_o *v102; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v103; // x2
  int32_t v104; // w3
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v106; // x19
  __int64 v107; // x22
  __int64 v108; // x23
  ServantEntity_o *v109; // x25
  System_String_o *v110; // x19
  System_String_o *v111; // x22
  System_Object_array *v112; // x23
  int32_t Rarity; // w26
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x26
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x26
  int32_t v128; // w0
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x24
  int32_t v136; // w0
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  System_Int32_array **v143; // x24
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x24
  WarehouseListViewItem_o *v151; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v152; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x21
  System_String_o *v161; // x21
  System_String_o *v162; // x22
  System_String_o *v163; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v165; // x25
  struct WarehouseListManager_o *v166; // x8
  struct WarehouseListManager_o *v167; // x8
  struct WarehouseListManager_o *v168; // x8
  __int64 v169; // x0
  __int64 v170; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v171; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v172; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v173; // 0:x0.16

  if ( (byte_4188961 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, v9);
    sub_B2C35C(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v16);
    sub_B2C35C(&LocalizationManager_TypeInfo, v17);
    sub_B2C35C(&object___TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B2C35C(&Rarity_TypeInfo, v21);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B2C35C(&SoundManager_TypeInfo, v25);
    sub_B2C35C(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v26);
    sub_B2C35C(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v27);
    sub_B2C35C(&Method_WarehouseListMenu_EndConfirmMove__, v28);
    sub_B2C35C(&Method_WarehouseListMenu_EndServantEquipStatus__, v29);
    sub_B2C35C(&Method_WarehouseListMenu_EndServantStatus__, v30);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v31);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_4188961 = 1;
  }
  v36 = sub_B2C42C(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  WarehouseListMenu___c__DisplayClass81_0___ctor((WarehouseListMenu___c__DisplayClass81_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_128;
  *(_QWORD *)(v36 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectNumList,
    (System_Int32_array **)list,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
      Item = (System_Int32_array **)WarehouseListViewManager__GetItem(baseListViewManager, n, v51);
    }
    *(_QWORD *)(v36 + 24) = Item;
    v78 = (WarehouseListViewItem_o **)(v36 + 24);
    sub_B2C2F8((BattleServantConfConponent_o *)(v36 + 24), Item, (System_String_array **)v51, v52, v53, v54, v55, v56);
    if ( !*(_QWORD *)(v36 + 24) || !(*v78)->fields.isEnabled )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      this->fields.state = 2;
      v83 = this->fields.servantListViewManager;
      v84 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v84,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        0LL);
      if ( v83 )
      {
        v83->fields.callbackFunc = v84;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v83->fields.callbackFunc,
          (System_Int32_array **)v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90);
        WarehouseListManager__SetMode_26852712(v83, 2, v91);
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
    if ( !*v78 )
      goto LABEL_128;
    userServantEntity = (*v78)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_128;
    v82 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v172.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v172.fields.fakeValue = v82;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v171 = v172;
    if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v171, 0LL) )
    {
LABEL_48:
      WarehouseListMenu__PushRequest(this, *v78, v79);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_128;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseListViewManager,
               dropList,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_128;
    v106 = (DataMasterBase_WarMaster__WarEntity__int__o *)baseListViewManager;
    v108 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v107 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v173.fields.currentCryptoKey = v108;
    *(_QWORD *)&v173.fields.fakeValue = v107;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v173,
                                                          0LL);
    if ( !v106 )
      goto LABEL_128;
    v109 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v106,
                                (int32_t)baseListViewManager,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v112 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v112 )
LABEL_128:
      sub_B2C434(baseListViewManager, v38);
    v120 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( !v112->max_length )
      goto LABEL_129;
    v112->m_Items[0] = (Il2CppObject *)v120;
    sub_B2C2F8((BattleServantConfConponent_o *)v112->m_Items, v120, v114, v115, v116, v117, v118, v119);
    if ( !v109 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(v109, 0LL);
    v127 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v112->max_length <= 1 )
      goto LABEL_129;
    v112->m_Items[1] = (Il2CppObject *)v127;
    sub_B2C2F8((BattleServantConfConponent_o *)&v112->m_Items[1], v127, v121, v122, v123, v124, v125, v126);
    v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.limitCount, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(v109, v128, -1, 0LL);
    v135 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v112->max_length <= 2 )
      goto LABEL_129;
    v112->m_Items[2] = (Il2CppObject *)v135;
    sub_B2C2F8((BattleServantConfConponent_o *)&v112->m_Items[2], v135, v129, v130, v131, v132, v133, v134);
    if ( !*v78 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v78)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    v136 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v136, 0LL);
    v143 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v112->max_length <= 3 )
      goto LABEL_129;
    v112->m_Items[3] = (Il2CppObject *)v143;
    sub_B2C2F8((BattleServantConfConponent_o *)&v112->m_Items[3], v143, v137, v138, v139, v140, v141, v142);
    if ( !*v78 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v78)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v150 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v112->max_length <= 4 )
      goto LABEL_129;
    v112->m_Items[4] = (Il2CppObject *)v150;
    sub_B2C2F8((BattleServantConfConponent_o *)&v112->m_Items[4], v150, v144, v145, v146, v147, v148, v149);
    v151 = *v78;
    if ( !*v78 )
      goto LABEL_128;
    v152 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v151->fields.userServantEntity;
    if ( !v152 )
      goto LABEL_128;
    servantEntity = v151->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                          v152[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v160 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B2C41C(
                                                            baseListViewManager,
                                                            v112->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_130:
        v170 = sub_B2C454(baseListViewManager);
        sub_B2C400(v170, 0LL);
      }
    }
    if ( v112->max_length > 5 )
    {
      v112->m_Items[5] = (Il2CppObject *)v160;
      sub_B2C2F8((BattleServantConfConponent_o *)&v112->m_Items[5], v160, v154, v155, v156, v157, v158, v159);
      v161 = System_String__Format_44384256(v111, v112, 0LL);
      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v163 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v165 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v165,
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
        CommonUI__OpenConfirmDialog_17970624(
          Instance,
          v110,
          v161,
          v162,
          v163,
          v165,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_128;
    }
LABEL_129:
    v169 = sub_B2C460(baseListViewManager);
    sub_B2C400(v169, 0LL);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v51, (const MethodInfo *)v52);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v57 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v57 )
    {
      if ( v57->fields.totalSum > v57->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v38) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v59 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v59,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v61 = this->fields.servantListViewManager;
            if ( !v61 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v61->fields.sendKeep;
            sendSum = v61->fields.sendSum;
            totalSum = v61->fields.totalSum;
            v65 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v59 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v59,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v168 = this->fields.servantListViewManager;
            if ( !v168 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v168->fields.sendKeep;
            sendSum = v168->fields.sendSum;
            totalSum = v168->fields.totalSum;
            v65 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v59 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v59,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v166 = this->fields.servantListViewManager;
            if ( !v166 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v166->fields.sendKeep;
            sendSum = v166->fields.sendSum;
            totalSum = v166->fields.totalSum;
            v65 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v59 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v59,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v167 = this->fields.servantListViewManager;
            if ( !v167 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v167->fields.sendKeep;
            sendSum = v167->fields.sendSum;
            totalSum = v167->fields.totalSum;
            v65 = 11;
            break;
          default:
            return;
        }
        v104 = totalSum + sendSum;
        v77 = warehouseConfirmMenu;
        v103 = v59;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v75 = this->fields.warehouseConfirmMenu;
            v76 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v76,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v75 )
              goto LABEL_128;
            v77 = v75;
            v65 = 0;
            goto LABEL_69;
          case 1:
            v102 = this->fields.warehouseConfirmMenu;
            v76 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v76,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v102 )
              goto LABEL_128;
            v65 = 1;
            goto LABEL_68;
          case 2:
            v102 = this->fields.warehouseConfirmMenu;
            v76 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v76,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v102 )
              goto LABEL_128;
            v65 = 2;
            goto LABEL_68;
          case 3:
            v102 = this->fields.warehouseConfirmMenu;
            v76 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B2C42C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v76,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v102 )
              goto LABEL_128;
            v65 = 3;
LABEL_68:
            v77 = v102;
LABEL_69:
            v103 = v76;
            v104 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v77, v65, v103, v104, sendKeep, v60);
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
      v67 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v69 = (CommonUI_o *)v67;
      v70 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v70,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v69 )
        goto LABEL_128;
      v71 = v69;
      v72 = 0;
      goto LABEL_56;
    case 1:
      v100 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v95 = this->fields.selectNum;
      v101 = (CommonUI_o *)v100;
      v97 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v97,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v101 )
        goto LABEL_128;
      v99 = v101;
      v98 = 0;
      goto LABEL_61;
    case 2:
      v92 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v93 = (CommonUI_o *)v92;
      v70 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v70,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v93 )
        goto LABEL_128;
      v72 = 3;
      v71 = v93;
LABEL_56:
      CommonUI__OpenServantStatusDialog_17981840(v71, v72, selectNum, v70, 0LL, 0LL);
      break;
    case 3:
      v94 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v95 = this->fields.selectNum;
      v96 = (CommonUI_o *)v94;
      v97 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v97,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v96 )
        goto LABEL_128;
      v98 = 3;
      v99 = v96;
LABEL_61:
      CommonUI__OpenServantStatusDialog_17980832(v99, v98, v95, v97, 0LL, 0LL);
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v31; // x5
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x5
  System_Action_o *v39; // x20
  unsigned __int128 v40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4188954 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_WarehouseListMenu_EndOpen__, v9);
    sub_B2C35C(&WarehouseListMenu_TypeInfo, v10);
    byte_4188954 = 1;
  }
  v40 = 0uLL;
  v11 = WarehouseListMenu_TypeInfo;
  if ( (BYTE3(WarehouseListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v11 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v11->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v40,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_13;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v40;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.setupInfo = setupinfo;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v28);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v31);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    this->fields.setupInfo = setupinfo;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v38);
      this->fields.state = 1;
      v39 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v39, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(gameObject, v13);
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
  __int64 v14; // x1
  struct UserServantEntity_o *userServantEntity; // x19
  DataManager_o *v16; // x23
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418896E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v12);
    byte_418896E = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v16 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v16 || !userServantEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v16->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v24 = *(_QWORD *)&v16->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v16->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
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
  __n128 inited; // q0
  float *v46; // x8
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v52; // x9
  float v53; // s12
  float v54; // s13
  float v55; // s14
  float v56; // s15
  int v57; // w20
  System_String_o **v58; // x8
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0
  System_String_o **v63; // x8
  bool v64; // w28
  UICommonButton_o *v65; // x25
  bool enabled; // w0
  System_String_o **v67; // x8
  System_String_o **v68; // x8
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0
  UICommonButton_o *servantEquipTabButton; // x25
  bool v74; // w0
  int v75; // w20
  System_String_o **v76; // x8
  System_String_o **v77; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v79; // w0
  System_String_o **v80; // x8
  System_String_o **v81; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v83; // w0
  System_String_o **v84; // x8
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x3
  struct WarehouseListManager_o **p_servantListViewManager; // x23
  struct WarehouseListManager_o **v88; // x23
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v90; // w1
  struct WarehouseListManager_o **v91; // x23
  const MethodInfo *v92; // x3
  System_String_o **v93; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v95; // w0
  System_String_o **v96; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v98; // w0
  System_String_o **v99; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v101; // w0
  System_String_o **v102; // x8
  UICommonButton_o *pushTabButton; // x24
  __int64 v104; // x8
  bool v105; // w0
  bool v106; // w24
  UILabel_o *explanationLabel; // x23
  __int64 *v108; // x8
  struct WarehouseListManager_o **v109; // x20
  UILabel_o *v110; // x23
  struct WarehouseListManager_o *v111; // x8
  int v112; // w9
  UILabel_o *v113; // x23
  UILabel_o *v114; // x23
  struct WarehouseListManager_o *v115; // x8
  struct WarehouseListManager_o *v116; // x21
  WarehouseListManager_CallbackFunc_o *v117; // x22
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  int32_t v124; // w1
  struct WarehouseListManager_o *v125; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v127; // [xsp+Ch] [xbp-94h]

  if ( (byte_4188956 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v15);
    sub_B2C35C(&StringLiteral_17047/*"btn_txt_craftessence_off"*/, v16);
    sub_B2C35C(&StringLiteral_17086/*"btn_txt_servant_off"*/, v17);
    sub_B2C35C(&StringLiteral_19668/*"img_txt_cardspace"*/, v18);
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, v19);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v20);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v21);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v22);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v23);
    sub_B2C35C(&StringLiteral_17087/*"btn_txt_servant_on"*/, v24);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v25);
    sub_B2C35C(&StringLiteral_16964/*"btn_bg_19"*/, v26);
    sub_B2C35C(&StringLiteral_17043/*"btn_txt_cardtoarchive_on"*/, v27);
    sub_B2C35C(&StringLiteral_15310/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v28);
    sub_B2C35C(&StringLiteral_15308/*"WAREHOUSE_EXPLANATION_LOCK"*/, v29);
    sub_B2C35C(&StringLiteral_16968/*"btn_bg_25"*/, v30);
    sub_B2C35C(&StringLiteral_17042/*"btn_txt_cardtoarchive_off"*/, v31);
    sub_B2C35C(&StringLiteral_17048/*"btn_txt_craftessence_on"*/, v32);
    sub_B2C35C(&StringLiteral_15311/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v33);
    sub_B2C35C(&StringLiteral_15309/*"WAREHOUSE_EXPLANATION_PUSH"*/, v34);
    sub_B2C35C(&StringLiteral_17031/*"btn_txt_archivetocard_on"*/, v35);
    sub_B2C35C(&StringLiteral_19659/*"img_txt_archivespace"*/, v36);
    sub_B2C35C(&StringLiteral_17030/*"btn_txt_archivetocard_off"*/, v37);
    sub_B2C35C(&StringLiteral_15307/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v38);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v39);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v40);
    sub_B2C35C(&StringLiteral_16967/*"btn_bg_24"*/, v41);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v42);
    byte_4188956 = 1;
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
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
    byte_4184963 = 1;
  }
  servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  v46 = *(float **)(servantListViewManager + 184);
  v47 = v46[20];
  v48 = v46[21];
  v49 = v46[22];
  v50 = v46[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (*(_BYTE *)(servantListViewManager + 307) & 4) != 0 && !*(_DWORD *)(servantListViewManager + 224) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_228;
  v52 = *(float **)(servantListViewManager + 184);
  v53 = v52[24];
  v54 = v52[25];
  v55 = v52[26];
  v56 = v52[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v57 = tabKind | 2;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 2) != 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v58 = (System_String_o **)&StringLiteral_17087/*"btn_txt_servant_on"*/;
  if ( v57 != 2 )
    v58 = (System_String_o **)&StringLiteral_17086/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v58, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v59 = v57 == 2 ? v56 : v50;
  v60 = v57 == 2 ? v55 : v49;
  v61 = v57 == 2 ? v54 : v48;
  v62 = v57 == 2 ? v53 : v47;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v59 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v127 = isModify;
  v63 = (System_String_o **)(v57 == 2 ? &StringLiteral_16964/*"btn_bg_19"*/ : &StringLiteral_16962/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v63, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v64 = !v43;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v43,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  v65 = this->fields.servantTabButton;
  if ( !v65 )
    goto LABEL_228;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v65, enabled, !v43, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v57 == 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v67 = (System_String_o **)&StringLiteral_17047/*"btn_txt_craftessence_off"*/;
  if ( v57 != 2 )
    v67 = (System_String_o **)&StringLiteral_17048/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v67, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v68 = (System_String_o **)(v57 == 2 ? &StringLiteral_16962/*"btn_bg_12"*/ : &StringLiteral_16964/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v68, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v69 = v57 == 2 ? v50 : v56;
  v70 = v57 == 2 ? v49 : v55;
  v71 = v57 == 2 ? v48 : v54;
  v72 = v57 == 2 ? v47 : v53;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v69 - 3), 0LL);
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
  v74 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v74, v64, 0LL);
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
  v75 = tabKind | 1;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 1) == 3, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v76 = (System_String_o **)&StringLiteral_17042/*"btn_txt_cardtoarchive_off"*/;
  if ( v75 != 3 )
    v76 = (System_String_o **)&StringLiteral_17043/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v76, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v77 = (System_String_o **)(v75 == 3 ? &StringLiteral_16967/*"btn_bg_24"*/ : &StringLiteral_16968/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v77, 0LL);
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
  v79 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v79, v64, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v75 != 3, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v80 = (System_String_o **)&StringLiteral_17031/*"btn_txt_archivetocard_on"*/;
  if ( v75 != 3 )
    v80 = (System_String_o **)&StringLiteral_17030/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v80, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v81 = (System_String_o **)(v75 == 3 ? &StringLiteral_16968/*"btn_bg_25"*/ : &StringLiteral_16967/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v81, 0LL);
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
  v83 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v83, v64, 0LL);
  servantListViewManager = (__int64)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v84 = (System_String_o **)&StringLiteral_19668/*"img_txt_cardspace"*/;
  if ( v75 != 3 )
    v84 = (System_String_o **)&StringLiteral_19659/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v84, 0LL);
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
          v86);
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
      v88 = &this->fields.servantListViewManager;
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      setupInfo = this->fields.setupInfo;
      v90 = 1;
      goto LABEL_130;
    case 2:
      if ( v43 || this->fields.tabKind != 2 )
      {
        v91 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          2,
          this->fields.setupInfo,
          v86);
      }
      else
      {
        v91 = &this->fields.servantListViewManager;
      }
      if ( !*v91 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v91)->fields.filterButton;
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
      v93 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
      if ( modeKind )
        v93 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v93, 0LL);
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
      v95 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v95, v64, 0LL);
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
      v96 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v96 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v96, 0LL);
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
      v98 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v98, v64, 0LL);
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
      v99 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v99 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v99, 0LL);
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
      v101 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v101, v64, 0LL);
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
        modeKind != 3 && v75 != 3,
        0LL);
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v102 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v102 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v102, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( v75 == 3 )
      {
        if ( !pushTabButton )
          goto LABEL_228;
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v64, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v104 = *(_QWORD *)servantListViewManager;
      }
      else
      {
        if ( !pushTabButton )
          goto LABEL_228;
        v105 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v105, v64, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v104 = *(_QWORD *)servantListViewManager;
      }
      servantListViewManager = (*(__int64 (**)(void))(v104 + 536))();
      break;
    case 3:
      if ( v43 || this->fields.tabKind != 3 )
      {
        v88 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        setupInfo = this->fields.setupInfo;
        v90 = 3;
LABEL_130:
        WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, v90, setupInfo, v86);
      }
      else
      {
LABEL_118:
        v88 = &this->fields.servantListViewManager;
      }
      if ( !*v88 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v88)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = WarehouseListMenu__HidePushButton(this, modeKind, 0, v92);
      modeKind = servantListViewManager;
      if ( !v43 )
        goto LABEL_134;
      goto LABEL_135;
    default:
      goto LABEL_107;
  }
  v106 = v127;
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
        v108 = &StringLiteral_15310/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
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
        v108 = &StringLiteral_15311/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)*v108, 0LL);
      if ( !explanationLabel )
        goto LABEL_228;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0LL);
LABEL_210:
      v109 = &this->fields.servantListViewManager;
      v115 = this->fields.servantListViewManager;
      if ( !v115 )
        goto LABEL_228;
      if ( v115->fields.modeKind )
        v115->fields.modeKind = 0;
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
          v85);
        v116 = this->fields.servantListViewManager;
        v117 = (WarehouseListManager_CallbackFunc_o *)sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v117,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL);
        if ( !v116 )
          goto LABEL_228;
        v116->fields.callbackFunc = v117;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v116->fields.callbackFunc,
          (System_Int32_array **)v117,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
        v124 = 2;
        servantListViewManager = (__int64)v116;
      }
      else
      {
        v124 = 1;
      }
      WarehouseListManager__SetMode_26852712((WarehouseListManager_o *)servantListViewManager, v124, v85);
      if ( !v43 && v106 )
      {
        if ( *v109 )
        {
          servantListViewManager = (__int64)(*v109)->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_223;
          }
        }
LABEL_228:
        sub_B2C434(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_223:
      v125 = this->fields.servantListViewManager;
      if ( !v125 )
        goto LABEL_228;
      servantListViewManager = (__int64)v125->fields.baseListViewManager;
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
      v110 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15308/*"WAREHOUSE_EXPLANATION_LOCK"*/, 0LL);
      if ( !v110 )
        goto LABEL_228;
      UILabel__set_text(v110, (System_String_o *)servantListViewManager, 0LL);
      v109 = &this->fields.servantListViewManager;
      v111 = this->fields.servantListViewManager;
      if ( !v111 )
        goto LABEL_228;
      if ( v111->fields.modeKind == 1 )
        goto LABEL_213;
      v112 = 1;
      goto LABEL_198;
    case 2:
      v113 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15307/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v113 )
        goto LABEL_228;
      UILabel__set_text(v113, (System_String_o *)servantListViewManager, 0LL);
      v109 = &this->fields.servantListViewManager;
      v111 = this->fields.servantListViewManager;
      if ( !v111 )
        goto LABEL_228;
      if ( v111->fields.modeKind == 2 )
        goto LABEL_213;
      v112 = 2;
      goto LABEL_198;
    case 3:
      v114 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15309/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0LL);
      if ( !v114 )
        goto LABEL_228;
      UILabel__set_text(v114, (System_String_o *)servantListViewManager, 0LL);
      v109 = &this->fields.servantListViewManager;
      v111 = this->fields.servantListViewManager;
      if ( !v111 )
        goto LABEL_228;
      if ( v111->fields.modeKind == 3 )
        goto LABEL_213;
      v112 = 3;
LABEL_198:
      v111->fields.modeKind = v112;
      goto LABEL_213;
    default:
      v106 = v127;
      v109 = &this->fields.servantListViewManager;
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
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x2
  System_Int64_array *v19; // x1
  bool v20; // w4
  bool v21; // w3
  bool v22; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_4188960 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    this = (WarehouseListMenu_o *)sub_B2C35C(&Method_WarehouseListMenu_EndStatusSync__, v8);
    byte_4188960 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v30, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v30,
                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v18 = unchoiceList;
        v19 = choiceList;
        v22 = 1;
        v20 = 0;
        v21 = (v5->fields.tabKind | 1) == 3;
        goto LABEL_21;
      }
LABEL_25:
      sub_B2C434(this, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v17, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v17,
                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v18 = unlockList;
        v19 = lockList;
        v20 = 1;
        v21 = (v5->fields.tabKind | 1) == 3;
        v22 = 0;
LABEL_21:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)this, v19, v18, v21, v20, v22, 0LL);
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

  if ( (byte_4188952 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_4188952 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B2C728(v7);
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

  if ( (byte_4188953 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_4188953 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418555A & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_418555A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  WarehouseListMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  WarehouseListMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
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
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418555B & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_418555B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  WarehouseListMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  WarehouseListMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
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
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  struct WarehouseListMenu_o *_4__this; // x8
  struct WarehouseListMenu_o *v14; // x20
  WarehouseListManager_o *servantListViewManager; // x19
  __int64 v16; // x21
  __int64 v17; // x9

  if ( (byte_4185559 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&WarehouseListManager_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v7);
    sub_B2C35C(&Method_WarehouseListMenu_OnSelectServant__, v8);
    byte_4185559 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_17971588(v11, _9__1, 0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.state = 2;
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  servantListViewManager = v14->fields.servantListViewManager;
  v16 = sub_B2C42C(WarehouseListManager_CallbackFunc_TypeInfo);
  v17 = *(_QWORD *)Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v16 + 40) = Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v16 + 16) = v17;
  *(_QWORD *)(v16 + 32) = v14;
  sub_B2C2F8(v16 + 32, v14);
  if ( !servantListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode(servantListViewManager, 2, (WarehouseListManager_CallbackFunc_o *)v16, 0LL);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  WarehouseListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  WarehouseListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}