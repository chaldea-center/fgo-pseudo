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

  if ( (byte_40FA993 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_352/*"#4C4C4C"*/, v8);
    byte_40FA993 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListMenu_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_352/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_352/*"#4C4C4C"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FA992 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FA992 = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    if ( !result )
      result = this->fields.isModify;
    WarehouseListMenu_CallbackFunc__Invoke(callbackFunc, result, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__ChangeIconScale(WarehouseListMenu_o *this, bool result, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v6; // x1
  struct WarehouseListManager_o *v7; // x8
  WarehouseListViewManager_o *v8; // x0
  UISprite_o *scaleChageTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__ChangeIconScale(baseListViewManager, (const MethodInfo *)result),
        (v7 = this->fields.servantListViewManager) == 0LL)
    || (v8 = v7->fields.baseListViewManager) == 0LL
    || (scaleChageTabSprite = this->fields.scaleChageTabSprite,
        ScaleButtonSpriteName = WarehouseListViewManager__GetScaleButtonSpriteName(v8, v6),
        !scaleChageTabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChageTabSprite, ScaleButtonSpriteName, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_26427640(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_26427640(
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FA977 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_WarehouseListMenu_EndClose__, v10);
    byte_40FA977 = 1;
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v13);
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall WarehouseListMenu__EndCardFavoriteRequest(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  struct WarehouseListManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  WarehouseListManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_40FA991 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_40FA991 = 1;
  }
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  if ( !servantListViewManager
    || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState(baseListViewManager, 1, method),
        v7 = this->fields.servantListViewManager,
        v12 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(
                                                       WarehouseListManager_CallbackFunc_TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10,
                                                       v11),
        WarehouseListManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL),
        !v7) )
  {
    sub_B170D4();
  }
  v7->fields.callbackFunc = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v7->fields.callbackFunc,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarehouseListManager__SetMode_26415604(v7, 2, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickCancel(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v7; // x2
  WarehouseListManager_o *v8; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v8, 3, v7);
  }
  WarehouseListMenu__Callback(this, 0, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabChoice(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v7; // x2
  WarehouseListManager_o *v8; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v8, 3, v7);
  }
  WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabLock(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v7; // x2
  WarehouseListManager_o *v8; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v8, 3, v7);
  }
  WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabPush(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v7; // x2
  WarehouseListManager_o *v8; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v8, 3, v7);
  }
  WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 3, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabPutIn(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t tabKind; // w8
  int32_t modeKind; // w2
  int32_t v7; // w1
  WarehouseListManager_o *v8; // x0
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v11; // x2
  WarehouseListManager_o *v12; // x0

  if ( this->fields.state == 2 )
  {
    tabKind = this->fields.tabKind;
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
          baseListViewManager = servantListViewManager->fields.baseListViewManager;
          if ( !baseListViewManager )
            goto LABEL_15;
          WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest);
          v12 = this->fields.servantListViewManager;
          if ( !v12 )
            goto LABEL_15;
          WarehouseListManager__SetMode_26415604(v12, 3, v11);
        }
LABEL_8:
        v8 = this->fields.servantListViewManager;
        if ( v8 )
        {
          WarehouseListManager__SetMode_26415604(v8, 2, method);
          return;
        }
LABEL_15:
        sub_B170D4();
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
  int32_t modeKind; // w2
  int32_t v7; // w1
  WarehouseListManager_o *v8; // x0
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v11; // x2
  WarehouseListManager_o *v12; // x0

  if ( this->fields.state == 2 )
  {
    tabKind = this->fields.tabKind;
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
          baseListViewManager = servantListViewManager->fields.baseListViewManager;
          if ( !baseListViewManager )
            goto LABEL_15;
          WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest);
          v12 = this->fields.servantListViewManager;
          if ( !v12 )
            goto LABEL_15;
          WarehouseListManager__SetMode_26415604(v12, 3, v11);
        }
LABEL_8:
        v8 = this->fields.servantListViewManager;
        if ( v8 )
        {
          WarehouseListManager__SetMode_26415604(v8, 2, method);
          return;
        }
LABEL_15:
        sub_B170D4();
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
  int32_t modeKind; // w2
  int32_t v7; // w1
  WarehouseListManager_o *v8; // x0
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v11; // x2
  WarehouseListManager_o *v12; // x0

  tabKind = this->fields.tabKind;
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
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v12 = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_13:
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v12, 3, v11);
  }
LABEL_6:
  v8 = this->fields.servantListViewManager;
  if ( !v8 )
    goto LABEL_13;
  WarehouseListManager__SetMode_26415604(v8, 2, method);
}


void __fastcall WarehouseListMenu__EndClickTabServantEquip(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x5
  int32_t tabKind; // w8
  int32_t modeKind; // w2
  int32_t v10; // w1
  WarehouseListManager_o *v11; // x0
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v14; // x2
  WarehouseListManager_o *v15; // x0

  EventTutorialMaster__CheckTutorial(-1, 55, 0LL, 0, 0, 0, 0, 0LL);
  tabKind = this->fields.tabKind;
  if ( tabKind == 2 )
  {
    modeKind = this->fields.modeKind;
    v10 = 3;
    goto LABEL_5;
  }
  if ( !tabKind )
  {
    modeKind = this->fields.modeKind;
    v10 = 1;
LABEL_5:
    WarehouseListMenu__SetTabKind(this, v10, modeKind, 0, 0, v7);
    goto LABEL_6;
  }
  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, v5), (v15 = this->fields.servantListViewManager) == 0LL) )
    {
LABEL_13:
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v15, 3, v14);
  }
LABEL_6:
  v11 = this->fields.servantListViewManager;
  if ( !v11 )
    goto LABEL_13;
  WarehouseListManager__SetMode_26415604(v11, 2, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndClickTabStatus(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v7; // x2
  WarehouseListManager_o *v8; // x0

  if ( isRequest )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager
      || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL
      || (WarehouseListViewManager__Modify(baseListViewManager, (const MethodInfo *)isRequest),
          (v8 = this->fields.servantListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    WarehouseListManager__SetMode_26415604(v8, 3, v7);
  }
  WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 0, 0, 0, v3);
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FA98A & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v6);
    byte_40FA98A = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B170D4();
  servantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_26415604(servantListViewManager, 2, v15);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x5
  int32_t v10; // w1

  if ( (byte_40FA987 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseListMenu_EndNotificationMove__, v6);
    byte_40FA987 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_B170D4();
      v10 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v10, v8, 0, 0, v9);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FA989 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v6);
    byte_40FA989 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B170D4();
  servantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_26415604(servantListViewManager, 2, v15);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FA98E & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v6);
    byte_40FA98E = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B170D4();
  servantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_26415604(servantListViewManager, 2, v15);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FA98C & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v6);
    byte_40FA98C = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B170D4();
  servantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_26415604(servantListViewManager, 2, v15);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_40FA984 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v8);
    sub_B16FFC(&Method_WarehouseListMenu_EndConfirmRequestLock__, v9);
    byte_40FA984 = 1;
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         isDecide,
                                                         method,
                                                         v3,
                                                         v4);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v10, v11);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_B170D4();
    WarehouseConfirmMenu__Close_26404608(warehouseConfirmMenu, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  StorageTakeoutRequest_o *v12; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  StorageTakeinRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FA985 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest);
    sub_B16FFC(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&Method_WarehouseListMenu_EndRequestWarehouse__, v9);
    byte_40FA985 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v13,
                                                                    (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_16;
    StorageTakeinRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method,
                                                   v3,
                                                   v4);
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
    v12 = (StorageTakeoutRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                       v11,
                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( v12 )
    {
      StorageTakeoutRequest__beginRequest(v12, this->fields.selectNumList, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndNotificationMove(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40FA988 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v6);
    byte_40FA988 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B170D4();
  WarehouseConfirmMenu__Close_26404608(warehouseConfirmMenu, v8, v9);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_40FA986 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5);
    byte_40FA986 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B170D4();
  WarehouseConfirmMenu__Close_26404608(warehouseConfirmMenu, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FA98D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v6);
    byte_40FA98D = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    this->fields.isModify = 1;
    if ( !servantListViewManager || (baseListViewManager = servantListViewManager->fields.baseListViewManager) == 0LL )
LABEL_9:
      sub_B170D4();
    WarehouseListViewManager__ModifyItem(baseListViewManager, this->fields.selectNum, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v14; // x1
  WarehouseListManager_o *v15; // x0
  CommonUI_o *Instance; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x0
  bool v22; // cc
  System_Action_o *v23; // x20
  __int64 *v24; // x8

  if ( (byte_40FA98B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v10);
    sub_B16FFC(&Method_WarehouseListMenu_EndCloseServantStatus__, v11);
    byte_40FA98B = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = this->fields.servantListViewManager;
    this->fields.isModify = 1;
    if ( !servantListViewManager )
      goto LABEL_14;
    baseListViewManager = servantListViewManager->fields.baseListViewManager;
    if ( !baseListViewManager )
      goto LABEL_14;
    WarehouseListViewManager__ModifyItem(baseListViewManager, this->fields.selectNum, (const MethodInfo *)isNeedSort);
    if ( isNeedSort )
    {
      v15 = this->fields.servantListViewManager;
      if ( !v15 )
        goto LABEL_14;
      WarehouseListManager__SortItem(v15, v14);
    }
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  v22 = questId < 1;
  v23 = v21;
  if ( v22 )
    v24 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v24 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v21, (Il2CppObject *)this, *v24, 0LL);
  if ( !Instance )
LABEL_14:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v23, 0LL);
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
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v9; // x0

  pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
  if ( !pushTabSprite
    || (gameObject = UnityEngine_Component__get_gameObject(pushTabSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (pushTabButton = this->fields.pushTabButton) == 0LL)
    || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
          pushTabButton,
          0LL,
          pushTabButton->klass->vtable._6_OnInit.methodPtr),
        (v9 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v8; // x4
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FA979 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_EndClickCancel__, v4);
    byte_40FA979 = 1;
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v5,
                                                         v6,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v10, v11);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA98F & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_ChangeIconScale__, v4);
    byte_40FA98F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                      WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                      v5,
                                                      v6,
                                                      v7,
                                                      v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v9, v10);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  const MethodInfo *v9; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_40FA980 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_EndClickTabChoice__, v4);
    byte_40FA980 = 1;
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
        v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v5,
                                                           v6,
                                                           v7,
                                                           v8);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v11, v12);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B170D4();
        WarehouseListManager__ReleaseAll(servantListViewManager, v13);
        return;
      }
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v5,
                                                         v6,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v14, v15);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v9);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  const MethodInfo *v9; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_40FA97F & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_EndClickTabLock__, v4);
    byte_40FA97F = 1;
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
        v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v5,
                                                           v6,
                                                           v7,
                                                           v8);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v11, v12);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B170D4();
        WarehouseListManager__ReleaseAll(servantListViewManager, v13);
        return;
      }
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v5,
                                                         v6,
                                                         v7,
                                                         v8);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v14, v15);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v9);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_40FA981 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_EndClickTabPush__, v4);
    byte_40FA981 = 1;
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
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                      WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                      v5,
                                                      v6,
                                                      v7,
                                                      v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v9, v10);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B170D4();
    WarehouseListManager__ReleaseAll(servantListViewManager, v11);
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
  __int64 v8; // x3
  __int64 v9; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_40FA97C & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B16FFC(&Method_WarehouseListMenu_EndClickTabPutIn__, v4);
    byte_40FA97C = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B170D4();
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v10, v11);
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
  __int64 v8; // x3
  __int64 v9; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_40FA97D & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B16FFC(&Method_WarehouseListMenu_EndClickTabPutOut__, v4);
    byte_40FA97D = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B170D4();
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v10, v11);
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
  __int64 v8; // x3
  __int64 v9; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_40FA97A & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B16FFC(&Method_WarehouseListMenu_EndClickTabServant__, v4);
    byte_40FA97A = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B170D4();
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v10, v11);
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
  __int64 v8; // x3
  __int64 v9; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_40FA97B & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    this = (WarehouseListMenu_o *)sub_B16FFC(&Method_WarehouseListMenu_EndClickTabServantEquip__, v4);
    byte_40FA97B = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B170D4();
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
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        0LL);
      WarehouseListMenu__StatusRequest(v2, v10, v11);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FA97E & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_WarehouseListMenu_EndClickTabStatus__, v4);
    byte_40FA97E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                      WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                      v5,
                                                      v6,
                                                      v7,
                                                      v8);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v9, v10);
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
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  MethodInfo *v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  const MethodInfo *v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  struct WarehouseListManager_o *v59; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v61; // x21
  const MethodInfo *v62; // x5
  struct WarehouseListManager_o *v63; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v67; // w1
  System_String_o *RarityType; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  int32_t tabKind; // w8
  WebViewManager_o *v72; // x0
  int64_t selectNum; // x20
  CommonUI_o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  ServantStatusDialog_ResultDelegate_o *v79; // x22
  CommonUI_o *v80; // x0
  int32_t v81; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_Int32_array **Item; // x1
  struct WarehouseConfirmMenu_o *v85; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v86; // x21
  WarehouseConfirmMenu_o *v87; // x0
  WarehouseListViewItem_o **v88; // x21
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v90; // x2
  int64_t pushUserSvtId; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v93; // q1
  struct WarehouseListManager_o *v94; // x20
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  WarehouseListManager_CallbackFunc_o *v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  const MethodInfo *v106; // x2
  WebViewManager_o *v107; // x0
  CommonUI_o *v108; // x21
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  WebViewManager_o *v113; // x0
  int64_t v114; // x20
  CommonUI_o *v115; // x21
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  ServantStatusDialog_EndDelegate_o *v120; // x22
  int32_t v121; // w1
  CommonUI_o *v122; // x0
  WebViewManager_o *v123; // x0
  CommonUI_o *v124; // x21
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  struct WarehouseConfirmMenu_o *v129; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v130; // x2
  int32_t v131; // w3
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x24
  WebViewManager_o *v135; // x0
  WarQuestSelectionMaster_o *v136; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v137; // x19
  __int64 v138; // x22
  __int64 v139; // x23
  int32_t v140; // w0
  ServantEntity_o *v141; // x25
  System_String_o *v142; // x19
  System_String_o *v143; // x22
  __int64 v144; // x2
  System_Object_array *v145; // x23
  int32_t Rarity; // w26
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x26
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x26
  int32_t v159; // w0
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x24
  UserServantEntity_o *v166; // x0
  int32_t v167; // w0
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x24
  ServantEntity_o *servantEntity; // x0
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x24
  WarehouseListViewItem_o *v181; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v182; // x9
  ServantEntity_o *v183; // x21
  int32_t v184; // w0
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  System_Int32_array **v190; // x21
  System_String_o *v191; // x21
  System_String_o *v192; // x22
  System_String_o *v193; // x23
  CommonUI_o *v194; // x24
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  __int64 v198; // x4
  CommonConfirmDialog_ClickDelegate_o *v199; // x25
  struct WarehouseListManager_o *v200; // x8
  struct WarehouseListManager_o *v201; // x8
  struct WarehouseListManager_o *v202; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v204; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v205; // 0:x0.16

  if ( (byte_40FA983 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, v9);
    sub_B16FFC(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&object___TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B16FFC(&Rarity_TypeInfo, v21);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_B16FFC(&SoundManager_TypeInfo, v25);
    sub_B16FFC(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v26);
    sub_B16FFC(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v27);
    sub_B16FFC(&Method_WarehouseListMenu_EndConfirmMove__, v28);
    sub_B16FFC(&Method_WarehouseListMenu_EndServantEquipStatus__, v29);
    sub_B16FFC(&Method_WarehouseListMenu_EndServantStatus__, v30);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v31);
    sub_B16FFC(&StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v32);
    sub_B16FFC(&StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v33);
    sub_B16FFC(&StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v34);
    sub_B16FFC(&StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v35);
    byte_40FA983 = 1;
  }
  v36 = sub_B170CC(WarehouseListMenu___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&result, list, *(_QWORD *)&n, method);
  WarehouseListMenu___c__DisplayClass81_0___ctor((WarehouseListMenu___c__DisplayClass81_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_128;
  *(_QWORD *)(v36 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectNumList,
    (System_Int32_array **)list,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
      Item = (System_Int32_array **)WarehouseListViewManager__GetItem(baseListViewManager, n, v49);
    }
    *(_QWORD *)(v36 + 24) = Item;
    v88 = (WarehouseListViewItem_o **)(v36 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v36 + 24), Item, (System_String_array **)v49, v50, v51, v52, v53, v54);
    if ( !*(_QWORD *)(v36 + 24) || !(*v88)->fields.isEnabled )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      this->fields.state = 2;
      v94 = this->fields.servantListViewManager;
      v99 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(
                                                     WarehouseListManager_CallbackFunc_TypeInfo,
                                                     v95,
                                                     v96,
                                                     v97,
                                                     v98);
      WarehouseListManager_CallbackFunc___ctor(
        v99,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        0LL);
      if ( v94 )
      {
        v94->fields.callbackFunc = v99;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v94->fields.callbackFunc,
          (System_Int32_array **)v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
        WarehouseListManager__SetMode_26415604(v94, 2, v106);
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
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_128;
    pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
    if ( !pushUserSvtId )
      goto LABEL_48;
    if ( !*v88 )
      goto LABEL_128;
    userServantEntity = (*v88)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_128;
    v93 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v204.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v204.fields.fakeValue = v93;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v203 = v204;
    if ( pushUserSvtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v203, 0LL) )
    {
LABEL_48:
      WarehouseListMenu__PushRequest(this, *v88, v90);
      return;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_128;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_128;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               pushUserSvtId,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    v135 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v135 )
      goto LABEL_128;
    v136 = DataManager__GetMasterData_WarQuestSelectionMaster_(
             (DataManager_o *)v135,
             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_128;
    v137 = (DataMasterBase_WarMaster__WarEntity__int__o *)v136;
    v139 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v138 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v205.fields.currentCryptoKey = v139;
    *(_QWORD *)&v205.fields.fakeValue = v138;
    v140 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v205, 0LL);
    if ( !v137 )
      goto LABEL_128;
    v141 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v137,
                                v140,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v142 = LocalizationManager__Get((System_String_o *)StringLiteral_11947/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v143 = LocalizationManager__Get((System_String_o *)StringLiteral_11946/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v145 = (System_Object_array *)sub_B17014(object___TypeInfo, 6LL, v144);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    RarityType = Rarity__getRarityType(Rarity, 0LL);
    if ( !v145 )
LABEL_128:
      sub_B170D4();
    v152 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_130;
    }
    if ( !v145->max_length )
      goto LABEL_129;
    v145->m_Items[0] = (Il2CppObject *)v152;
    sub_B16F98((BattleServantConfConponent_o *)v145->m_Items, v152, v70, v147, v148, v149, v150, v151);
    if ( !v141 )
      goto LABEL_128;
    RarityType = ServantEntity__getClassName(v141, 0LL);
    v158 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_130;
    }
    if ( v145->max_length <= 1 )
      goto LABEL_129;
    v145->m_Items[1] = (Il2CppObject *)v158;
    sub_B16F98((BattleServantConfConponent_o *)&v145->m_Items[1], v158, v70, v153, v154, v155, v156, v157);
    v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(Entity->fields.limitCount, 0LL);
    RarityType = ServantEntity__getName(v141, v159, -1, 0LL);
    v165 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_130;
    }
    if ( v145->max_length <= 2 )
      goto LABEL_129;
    v145->m_Items[2] = (Il2CppObject *)v165;
    sub_B16F98((BattleServantConfConponent_o *)&v145->m_Items[2], v165, v70, v160, v161, v162, v163, v164);
    if ( !*v88 )
      goto LABEL_128;
    v166 = (*v88)->fields.userServantEntity;
    if ( !v166 )
      goto LABEL_128;
    v167 = UserServantEntity__getRarity(v166, 0LL);
    RarityType = Rarity__getRarityType(v167, 0LL);
    v173 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_130;
    }
    if ( v145->max_length <= 3 )
      goto LABEL_129;
    v145->m_Items[3] = (Il2CppObject *)v173;
    sub_B16F98((BattleServantConfConponent_o *)&v145->m_Items[3], v173, v70, v168, v169, v170, v171, v172);
    if ( !*v88 )
      goto LABEL_128;
    servantEntity = (*v88)->fields.servantEntity;
    if ( !servantEntity )
      goto LABEL_128;
    RarityType = ServantEntity__getClassName(servantEntity, 0LL);
    v180 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
        goto LABEL_130;
    }
    if ( v145->max_length <= 4 )
      goto LABEL_129;
    v145->m_Items[4] = (Il2CppObject *)v180;
    sub_B16F98((BattleServantConfConponent_o *)&v145->m_Items[4], v180, v70, v175, v176, v177, v178, v179);
    v181 = *v88;
    if ( !*v88 )
      goto LABEL_128;
    v182 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v181->fields.userServantEntity;
    if ( !v182 )
      goto LABEL_128;
    v183 = v181->fields.servantEntity;
    v184 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v182[6], 0LL);
    if ( !v183 )
      goto LABEL_128;
    RarityType = ServantEntity__getName(v183, v184, -1, 0LL);
    v190 = (System_Int32_array **)RarityType;
    if ( RarityType )
    {
      RarityType = (System_String_o *)sub_B170BC(RarityType, v145->obj.klass->_1.element_class);
      if ( !RarityType )
      {
LABEL_130:
        sub_B170F4(RarityType);
        sub_B170A0();
      }
    }
    if ( v145->max_length > 5 )
    {
      v145->m_Items[5] = (Il2CppObject *)v190;
      sub_B16F98((BattleServantConfConponent_o *)&v145->m_Items[5], v190, v70, v185, v186, v187, v188, v189);
      v191 = System_String__Format_43822456(v143, v145, 0LL);
      v192 = LocalizationManager__Get((System_String_o *)StringLiteral_11945/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v193 = LocalizationManager__Get((System_String_o *)StringLiteral_11944/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      v194 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v199 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v195,
                                                      v196,
                                                      v197,
                                                      v198);
      CommonConfirmDialog_ClickDelegate___ctor(
        v199,
        (Il2CppObject *)v36,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( v194 )
      {
        CommonUI__OpenConfirmDialog_18236860(
          v194,
          v142,
          v191,
          v192,
          v193,
          v199,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_128;
    }
LABEL_129:
    sub_B17100(RarityType, v69, v70);
    sub_B170A0();
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v49, (const MethodInfo *)v50);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v59 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v59 )
    {
      if ( v59->fields.totalSum > v59->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v55) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v61 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v61,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v63 = this->fields.servantListViewManager;
            if ( !v63 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v63->fields.sendKeep;
            sendSum = v63->fields.sendSum;
            totalSum = v63->fields.totalSum;
            v67 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v61 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v61,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v202 = this->fields.servantListViewManager;
            if ( !v202 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v202->fields.sendKeep;
            sendSum = v202->fields.sendSum;
            totalSum = v202->fields.totalSum;
            v67 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v61 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v61,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v200 = this->fields.servantListViewManager;
            if ( !v200 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v200->fields.sendKeep;
            sendSum = v200->fields.sendSum;
            totalSum = v200->fields.totalSum;
            v67 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v61 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v61,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v201 = this->fields.servantListViewManager;
            if ( !v201 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v201->fields.sendKeep;
            sendSum = v201->fields.sendSum;
            totalSum = v201->fields.totalSum;
            v67 = 11;
            break;
          default:
            return;
        }
        v131 = totalSum + sendSum;
        v87 = warehouseConfirmMenu;
        v130 = v61;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v85 = this->fields.warehouseConfirmMenu;
            v86 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v86,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v85 )
              goto LABEL_128;
            v87 = v85;
            v67 = 0;
            goto LABEL_69;
          case 1:
            v129 = this->fields.warehouseConfirmMenu;
            v86 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v86,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v129 )
              goto LABEL_128;
            v67 = 1;
            goto LABEL_68;
          case 2:
            v129 = this->fields.warehouseConfirmMenu;
            v86 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v86,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v129 )
              goto LABEL_128;
            v67 = 2;
            goto LABEL_68;
          case 3:
            v129 = this->fields.warehouseConfirmMenu;
            v86 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v55,
                                                           v56,
                                                           v57,
                                                           v58);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v86,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v129 )
              goto LABEL_128;
            v67 = 3;
LABEL_68:
            v87 = v129;
LABEL_69:
            v130 = v86;
            v131 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v87, v67, v130, v131, sendKeep, v62);
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
      v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v74 = (CommonUI_o *)v72;
      v79 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v75,
                                                      v76,
                                                      v77,
                                                      v78);
      ServantStatusDialog_ResultDelegate___ctor(
        v79,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v74 )
        goto LABEL_128;
      v80 = v74;
      v81 = 0;
      goto LABEL_56;
    case 1:
      v123 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v114 = this->fields.selectNum;
      v124 = (CommonUI_o *)v123;
      v120 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                    ServantStatusDialog_EndDelegate_TypeInfo,
                                                    v125,
                                                    v126,
                                                    v127,
                                                    v128);
      ServantStatusDialog_EndDelegate___ctor(
        v120,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v124 )
        goto LABEL_128;
      v122 = v124;
      v121 = 0;
      goto LABEL_61;
    case 2:
      v107 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v108 = (CommonUI_o *)v107;
      v79 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                      ServantStatusDialog_ResultDelegate_TypeInfo,
                                                      v109,
                                                      v110,
                                                      v111,
                                                      v112);
      ServantStatusDialog_ResultDelegate___ctor(
        v79,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v108 )
        goto LABEL_128;
      v81 = 3;
      v80 = v108;
LABEL_56:
      CommonUI__OpenServantStatusDialog_18248076(v80, v81, selectNum, v79, 0LL, 0LL);
      break;
    case 3:
      v113 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v114 = this->fields.selectNum;
      v115 = (CommonUI_o *)v113;
      v120 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                    ServantStatusDialog_EndDelegate_TypeInfo,
                                                    v116,
                                                    v117,
                                                    v118,
                                                    v119);
      ServantStatusDialog_EndDelegate___ctor(
        v120,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v115 )
        goto LABEL_128;
      v121 = 3;
      v122 = v115;
LABEL_61:
      CommonUI__OpenServantStatusDialog_18247068(v122, v121, v114, v120, 0LL, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v37; // x5
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_o *v42; // x20
  unsigned __int128 v43; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_40FA976 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_WarehouseListMenu_EndOpen__, v9);
    sub_B16FFC(&WarehouseListMenu_TypeInfo, v10);
    byte_40FA976 = 1;
  }
  v43 = 0uLL;
  v11 = WarehouseListMenu_TypeInfo;
  if ( (BYTE3(WarehouseListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v11 = WarehouseListMenu_TypeInfo;
  }
  UnityEngine_ColorUtility__TryParseHtmlString(
    v11->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
    (UnityEngine_Color_o *)&v43,
    0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_13;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v43;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_B16F98(
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
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v37);
      this->fields.state = 1;
      v42 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v42, 0LL);
      return;
    }
LABEL_13:
    sub_B170D4();
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
  UserGameEntity_o *SelfUserGame; // x0
  struct UserServantEntity_o *userServantEntity; // x19
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
  int32_t v51; // [xsp+50h] [xbp-110h]
  int32_t v52; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v54; // [xsp+60h] [xbp-100h]
  int64_t favoriteUserSvtId; // [xsp+68h] [xbp-F8h]
  int64_t v56; // [xsp+70h] [xbp-F0h]
  int64_t v57; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_40FA990 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v12);
    byte_40FA990 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v15 = SelfUserGame;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_21;
  v18 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  userId = v15->fields.userId;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v62.fields.currentCryptoKey = v21;
  *(_QWORD *)&v62.fields.fakeValue = v20;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v18 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v18, userId, v22, 0LL);
  v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24 )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag(v24, 0, 0LL);
  v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  pushUserSvtId = v15->fields.pushUserSvtId;
  *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v61.fields.fakeValue = v25;
  v57 = pushUserSvtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v60 = v61;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v60, 0LL);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  favoriteUserSvtId = v15->fields.favoriteUserSvtId;
  v56 = v28;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v29;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v59, 0LL);
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v30,
                                                 v31,
                                                 v32,
                                                 v33);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v34,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v37 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v36;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v58, 0LL);
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v43 = IsChoice;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v48 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v63.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v63.fields.currentCryptoKey = v48;
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  if ( !v37 )
LABEL_21:
    sub_B170D4();
  CardFavoriteRequest__beginRequest(
    v37,
    targetUsrSVtId,
    v52,
    v51,
    v38,
    v39,
    v40,
    favoriteUserSvtId == v54,
    IsLock,
    v43,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v57 != v56,
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
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v46; // x0
  __int64 v47; // x1
  __n128 inited; // q0
  LocalizationManager_c *v49; // x0
  float *static_fields; // x8
  float v51; // s8
  float v52; // s9
  float v53; // s10
  float v54; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v56; // x9
  float v57; // s12
  float v58; // s13
  float v59; // s14
  float v60; // s15
  UnityEngine_Behaviour_o *v61; // x0
  int v62; // w20
  UISprite_o *servantTabTitleSprite; // x0
  System_String_o **v64; // x8
  UILabel_o *servantTabLabel; // x0
  float v66; // s3
  float v67; // s2
  float v68; // s1
  float v69; // s0
  UISprite_o *servantTabSprite; // x0
  System_String_o **v71; // x8
  struct UICommonButton_o *v72; // x0
  bool v73; // w28
  UICommonButton_o *v74; // x25
  bool enabled; // w0
  struct UICommonButton_o *servantEquipTabButton; // x0
  UnityEngine_Behaviour_o *v77; // x0
  UISprite_o *servantEquipTabTitleSprite; // x0
  System_String_o **v79; // x8
  UISprite_o *servantEquipTabSprite; // x0
  System_String_o **v81; // x8
  UILabel_o *servantEquipTabLabel; // x0
  float v83; // s3
  float v84; // s2
  float v85; // s1
  float v86; // s0
  struct UICommonButton_o *v87; // x0
  UICommonButton_o *v88; // x25
  bool v89; // w0
  struct UICommonButton_o *putInTabButton; // x0
  UnityEngine_Behaviour_o *v91; // x0
  int v92; // w20
  UISprite_o *putInTabTitleSprite; // x0
  System_String_o **v94; // x8
  UISprite_o *putInTabSprite; // x0
  System_String_o **v96; // x8
  struct UICommonButton_o *v97; // x0
  UICommonButton_o *v98; // x25
  bool v99; // w0
  struct UICommonButton_o *putOutTabButton; // x0
  UnityEngine_Behaviour_o *v101; // x0
  UISprite_o *putOutTabTitleSprite; // x0
  System_String_o **v103; // x8
  UISprite_o *putOutTabSprite; // x0
  System_String_o **v105; // x8
  struct UICommonButton_o *v106; // x0
  UICommonButton_o *v107; // x26
  bool v108; // w0
  UISprite_o *sendTitleSprite; // x0
  System_String_o **v110; // x8
  const MethodInfo *v111; // x2
  const MethodInfo *v112; // x3
  WarehouseListManager_o *v113; // x0
  struct WarehouseListManager_o **p_servantListViewManager; // x23
  struct UICommonButton_o *filterButton; // x0
  UnityEngine_Component_o *pushTabSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UICommonButton_o *pushTabButton; // x0
  UnityEngine_Behaviour_o *v119; // x0
  struct UICommonButton_o *v120; // x0
  WarehouseListManager_o *v121; // x0
  struct WarehouseListManager_o **v122; // x23
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v124; // w1
  struct WarehouseListManager_o **v125; // x23
  WarehouseListManager_o *v126; // x0
  struct UICommonButton_o *v127; // x0
  UnityEngine_Component_o *v128; // x0
  UnityEngine_GameObject_o *v129; // x0
  struct UICommonButton_o *v130; // x0
  const MethodInfo *v131; // x3
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v133; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v135; // x8
  struct UICommonButton_o *v136; // x0
  UICommonButton_o *v137; // x26
  bool v138; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v140; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v142; // x8
  struct UICommonButton_o *v143; // x0
  UICommonButton_o *v144; // x26
  bool v145; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v147; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v149; // x8
  struct UICommonButton_o *v150; // x0
  UICommonButton_o *v151; // x26
  bool v152; // w0
  struct UICommonButton_o *v153; // x0
  UnityEngine_Behaviour_o *v154; // x0
  UISprite_o *v155; // x0
  System_String_o **v156; // x8
  UICommonButton_o *v157; // x24
  struct UICommonButton_o *v158; // x0
  UICommonButton_c *klass; // x8
  bool v160; // w0
  struct UICommonButton_o *v161; // x0
  bool v162; // w24
  UILabel_o *explanationLabel; // x23
  __int64 *v164; // x8
  struct WarehouseListManager_o **v165; // x20
  UILabel_o *v166; // x23
  System_String_o *v167; // x0
  struct WarehouseListManager_o *v168; // x8
  int v169; // w9
  UILabel_o *v170; // x23
  System_String_o *v171; // x0
  UILabel_o *v172; // x23
  System_String_o *v173; // x0
  struct UICommonButton_o *v174; // x0
  UnityEngine_Behaviour_o *v175; // x0
  struct UICommonButton_o *v176; // x0
  System_String_o *v177; // x0
  struct WarehouseListManager_o *v178; // x8
  struct WarehouseListManager_o *v179; // x0
  WarehouseListViewManager_o *baseListViewManager; // x0
  struct WarehouseListManager_o *v181; // x21
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  WarehouseListManager_CallbackFunc_o *v186; // x22
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  int32_t v193; // w1
  const MethodInfo *v194; // x1
  WarehouseListViewManager_o *v195; // x0
  struct WarehouseListManager_o *v196; // x8
  WarehouseListViewManager_o *v197; // x0
  UISprite_o *scaleChageTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0
  bool v200; // [xsp+Ch] [xbp-94h]

  if ( (byte_40FA978 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v15);
    sub_B16FFC(&StringLiteral_16981/*"btn_txt_craftessence_off"*/, v16);
    sub_B16FFC(&StringLiteral_17020/*"btn_txt_servant_off"*/, v17);
    sub_B16FFC(&StringLiteral_19594/*"img_txt_cardspace"*/, v18);
    sub_B16FFC(&StringLiteral_17071/*"button_push_reg"*/, v19);
    sub_B16FFC(&StringLiteral_17072/*"button_push_unreg"*/, v20);
    sub_B16FFC(&StringLiteral_17057/*"button_allchoice_reg"*/, v21);
    sub_B16FFC(&StringLiteral_16896/*"btn_bg_12"*/, v22);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v23);
    sub_B16FFC(&StringLiteral_17021/*"btn_txt_servant_on"*/, v24);
    sub_B16FFC(&StringLiteral_17073/*"button_select_reg"*/, v25);
    sub_B16FFC(&StringLiteral_16898/*"btn_bg_19"*/, v26);
    sub_B16FFC(&StringLiteral_16977/*"btn_txt_cardtoarchive_on"*/, v27);
    sub_B16FFC(&StringLiteral_15250/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v28);
    sub_B16FFC(&StringLiteral_15248/*"WAREHOUSE_EXPLANATION_LOCK"*/, v29);
    sub_B16FFC(&StringLiteral_16902/*"btn_bg_25"*/, v30);
    sub_B16FFC(&StringLiteral_16976/*"btn_txt_cardtoarchive_off"*/, v31);
    sub_B16FFC(&StringLiteral_16982/*"btn_txt_craftessence_on"*/, v32);
    sub_B16FFC(&StringLiteral_15251/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v33);
    sub_B16FFC(&StringLiteral_15249/*"WAREHOUSE_EXPLANATION_PUSH"*/, v34);
    sub_B16FFC(&StringLiteral_16965/*"btn_txt_archivetocard_on"*/, v35);
    sub_B16FFC(&StringLiteral_19585/*"img_txt_archivespace"*/, v36);
    sub_B16FFC(&StringLiteral_16964/*"btn_txt_archivetocard_off"*/, v37);
    sub_B16FFC(&StringLiteral_15247/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v38);
    sub_B16FFC(&StringLiteral_17074/*"button_select_unreg"*/, v39);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v40);
    sub_B16FFC(&StringLiteral_16901/*"btn_bg_24"*/, v41);
    sub_B16FFC(&StringLiteral_17058/*"button_allchoice_unreg"*/, v42);
    byte_40FA978 = 1;
  }
  v43 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_228;
    WarehouseListManager__DestroyList(servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v46 )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)v46,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v47);
    byte_40F6254 = 1;
  }
  v49 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v49 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v49->static_fields;
  v51 = static_fields[20];
  v52 = static_fields[21];
  v53 = static_fields[22];
  v54 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v47);
    v49 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v49);
    v49 = LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_228;
  v56 = (float *)v49->static_fields;
  v57 = v56[24];
  v58 = v56[25];
  v59 = v56[26];
  v60 = v56[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  v61 = (UnityEngine_Behaviour_o *)this->fields.servantTabButton;
  if ( !v61 )
    goto LABEL_228;
  v62 = tabKind | 2;
  UnityEngine_Behaviour__set_enabled(v61, (tabKind | 2) != 2, 0LL);
  servantTabTitleSprite = this->fields.servantTabTitleSprite;
  if ( !servantTabTitleSprite )
    goto LABEL_228;
  v64 = (System_String_o **)&StringLiteral_17021/*"btn_txt_servant_on"*/;
  if ( v62 != 2 )
    v64 = (System_String_o **)&StringLiteral_17020/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName(servantTabTitleSprite, *v64, 0LL);
  servantTabLabel = this->fields.servantTabLabel;
  if ( !servantTabLabel )
    goto LABEL_228;
  v66 = v62 == 2 ? v60 : v54;
  v67 = v62 == 2 ? v59 : v53;
  v68 = v62 == 2 ? v58 : v52;
  v69 = v62 == 2 ? v57 : v51;
  UILabel__set_effectColor(servantTabLabel, *(UnityEngine_Color_o *)(&v66 - 3), 0LL);
  servantTabSprite = this->fields.servantTabSprite;
  if ( !servantTabSprite )
    goto LABEL_228;
  v200 = isModify;
  v71 = (System_String_o **)(v62 == 2 ? &StringLiteral_16898/*"btn_bg_19"*/ : &StringLiteral_16896/*"btn_bg_12"*/);
  UISprite__set_spriteName(servantTabSprite, *v71, 0LL);
  v72 = this->fields.servantTabButton;
  if ( !v72 )
    goto LABEL_228;
  v73 = !v43;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v72->klass->vtable._14_SetState.method)(
    v72,
    0LL,
    !v43,
    v72->klass->vtable._15_OnPress.methodPtr);
  v74 = this->fields.servantTabButton;
  if ( !v74 )
    goto LABEL_228;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v74, enabled, !v43, 0LL);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))servantEquipTabButton->klass->vtable._5_set_isEnabled.method)(
    servantEquipTabButton,
    1LL,
    servantEquipTabButton->klass->vtable._6_OnInit.methodPtr);
  v77 = (UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton;
  if ( !v77 )
    goto LABEL_228;
  UnityEngine_Behaviour__set_enabled(v77, v62 == 2, 0LL);
  servantEquipTabTitleSprite = this->fields.servantEquipTabTitleSprite;
  if ( !servantEquipTabTitleSprite )
    goto LABEL_228;
  v79 = (System_String_o **)&StringLiteral_16981/*"btn_txt_craftessence_off"*/;
  if ( v62 != 2 )
    v79 = (System_String_o **)&StringLiteral_16982/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName(servantEquipTabTitleSprite, *v79, 0LL);
  servantEquipTabSprite = this->fields.servantEquipTabSprite;
  if ( !servantEquipTabSprite )
    goto LABEL_228;
  v81 = (System_String_o **)(v62 == 2 ? &StringLiteral_16896/*"btn_bg_12"*/ : &StringLiteral_16898/*"btn_bg_19"*/);
  UISprite__set_spriteName(servantEquipTabSprite, *v81, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !servantEquipTabLabel )
    goto LABEL_228;
  v83 = v62 == 2 ? v54 : v60;
  v84 = v62 == 2 ? v53 : v59;
  v85 = v62 == 2 ? v52 : v58;
  v86 = v62 == 2 ? v51 : v57;
  UILabel__set_effectColor(servantEquipTabLabel, *(UnityEngine_Color_o *)(&v83 - 3), 0LL);
  v87 = this->fields.servantEquipTabButton;
  if ( !v87 )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v87->klass->vtable._14_SetState.method)(
    v87,
    0LL,
    !v43,
    v87->klass->vtable._15_OnPress.methodPtr);
  v88 = this->fields.servantEquipTabButton;
  if ( !v88 )
    goto LABEL_228;
  v89 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(v88, v89, v73, 0LL);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))putInTabButton->klass->vtable._5_set_isEnabled.method)(
    putInTabButton,
    1LL,
    putInTabButton->klass->vtable._6_OnInit.methodPtr);
  v91 = (UnityEngine_Behaviour_o *)this->fields.putInTabButton;
  if ( !v91 )
    goto LABEL_228;
  v92 = tabKind | 1;
  UnityEngine_Behaviour__set_enabled(v91, (tabKind | 1) == 3, 0LL);
  putInTabTitleSprite = this->fields.putInTabTitleSprite;
  if ( !putInTabTitleSprite )
    goto LABEL_228;
  v94 = (System_String_o **)&StringLiteral_16976/*"btn_txt_cardtoarchive_off"*/;
  if ( v92 != 3 )
    v94 = (System_String_o **)&StringLiteral_16977/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName(putInTabTitleSprite, *v94, 0LL);
  putInTabSprite = this->fields.putInTabSprite;
  if ( !putInTabSprite )
    goto LABEL_228;
  v96 = (System_String_o **)(v92 == 3 ? &StringLiteral_16901/*"btn_bg_24"*/ : &StringLiteral_16902/*"btn_bg_25"*/);
  UISprite__set_spriteName(putInTabSprite, *v96, 0LL);
  v97 = this->fields.putInTabButton;
  if ( !v97 )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v97->klass->vtable._14_SetState.method)(
    v97,
    0LL,
    !v43,
    v97->klass->vtable._15_OnPress.methodPtr);
  v98 = this->fields.putInTabButton;
  if ( !v98 )
    goto LABEL_228;
  v99 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(v98, v99, v73, 0LL);
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))putOutTabButton->klass->vtable._5_set_isEnabled.method)(
    putOutTabButton,
    1LL,
    putOutTabButton->klass->vtable._6_OnInit.methodPtr);
  v101 = (UnityEngine_Behaviour_o *)this->fields.putOutTabButton;
  if ( !v101 )
    goto LABEL_228;
  UnityEngine_Behaviour__set_enabled(v101, v92 != 3, 0LL);
  putOutTabTitleSprite = this->fields.putOutTabTitleSprite;
  if ( !putOutTabTitleSprite )
    goto LABEL_228;
  v103 = (System_String_o **)&StringLiteral_16965/*"btn_txt_archivetocard_on"*/;
  if ( v92 != 3 )
    v103 = (System_String_o **)&StringLiteral_16964/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName(putOutTabTitleSprite, *v103, 0LL);
  putOutTabSprite = this->fields.putOutTabSprite;
  if ( !putOutTabSprite )
    goto LABEL_228;
  v105 = (System_String_o **)(v92 == 3 ? &StringLiteral_16902/*"btn_bg_25"*/ : &StringLiteral_16901/*"btn_bg_24"*/);
  UISprite__set_spriteName(putOutTabSprite, *v105, 0LL);
  v106 = this->fields.putOutTabButton;
  if ( !v106 )
    goto LABEL_228;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v106->klass->vtable._14_SetState.method)(
    v106,
    0LL,
    !v43,
    v106->klass->vtable._15_OnPress.methodPtr);
  v107 = this->fields.putOutTabButton;
  if ( !v107 )
    goto LABEL_228;
  v108 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(v107, v108, v73, 0LL);
  sendTitleSprite = this->fields.sendTitleSprite;
  if ( !sendTitleSprite )
    goto LABEL_228;
  v110 = (System_String_o **)&StringLiteral_19594/*"img_txt_cardspace"*/;
  if ( v92 != 3 )
    v110 = (System_String_o **)&StringLiteral_19585/*"img_txt_archivespace"*/;
  UISprite__set_spriteName(sendTitleSprite, *v110, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( v43 || this->fields.tabKind )
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
        v113 = this->fields.servantListViewManager;
        if ( !v113 )
          goto LABEL_228;
        WarehouseListManager__CreateList(v113, 0, this->fields.setupInfo, v112);
      }
      else
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
      }
      if ( !*p_servantListViewManager )
        goto LABEL_228;
      filterButton = (*p_servantListViewManager)->fields.filterButton;
      if ( !filterButton )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))filterButton->klass->vtable._14_SetState.method)(
        filterButton,
        0LL,
        1LL,
        filterButton->klass->vtable._15_OnPress.methodPtr);
      pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !pushTabSprite )
        goto LABEL_228;
      gameObject = UnityEngine_Component__get_gameObject(pushTabSprite, 0LL);
      if ( !gameObject )
        goto LABEL_228;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))pushTabButton->klass->vtable._5_set_isEnabled.method)(
        pushTabButton,
        1LL,
        pushTabButton->klass->vtable._6_OnInit.methodPtr);
      v119 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !v119 )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(v119, 1, 0LL);
      v120 = this->fields.pushTabButton;
      if ( !v120 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v120->klass->vtable._14_SetState.method)(
        v120,
        0LL,
        1LL,
        v120->klass->vtable._15_OnPress.methodPtr);
LABEL_107:
      if ( v43 )
        goto LABEL_135;
      goto LABEL_134;
    case 1:
      if ( !v43 && this->fields.tabKind == 1 )
        goto LABEL_118;
      v122 = &this->fields.servantListViewManager;
      v121 = this->fields.servantListViewManager;
      if ( !v121 )
        goto LABEL_228;
      setupInfo = this->fields.setupInfo;
      v124 = 1;
      goto LABEL_130;
    case 2:
      if ( v43 || this->fields.tabKind != 2 )
      {
        v125 = &this->fields.servantListViewManager;
        v126 = this->fields.servantListViewManager;
        if ( !v126 )
          goto LABEL_228;
        WarehouseListManager__CreateList(v126, 2, this->fields.setupInfo, v112);
      }
      else
      {
        v125 = &this->fields.servantListViewManager;
      }
      if ( !*v125 )
        goto LABEL_228;
      v127 = (*v125)->fields.filterButton;
      if ( !v127 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v127->klass->vtable._14_SetState.method)(
        v127,
        0LL,
        1LL,
        v127->klass->vtable._15_OnPress.methodPtr);
      v128 = (UnityEngine_Component_o *)this->fields.pushTabSprite;
      if ( !v128 )
        goto LABEL_228;
      v129 = UnityEngine_Component__get_gameObject(v128, 0LL);
      if ( !v129 )
        goto LABEL_228;
      UnityEngine_GameObject__SetActive(v129, 1, 0LL);
      if ( this->fields.modeKind == 3 )
      {
        modeKind = 0;
        if ( v43 )
          goto LABEL_135;
      }
      else
      {
        v174 = this->fields.pushTabButton;
        if ( !v174 )
          goto LABEL_228;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v174->klass->vtable._5_set_isEnabled.method)(
          v174,
          1LL,
          v174->klass->vtable._6_OnInit.methodPtr);
        v175 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
        if ( !v175 )
          goto LABEL_228;
        UnityEngine_Behaviour__set_enabled(v175, 0, 0LL);
        v176 = this->fields.pushTabButton;
        if ( !v176 )
          goto LABEL_228;
        ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))v176->klass->vtable._14_SetState.method)(
          v176,
          3LL,
          1LL,
          v176->klass->vtable._15_OnPress.methodPtr);
        if ( v43 )
          goto LABEL_135;
      }
LABEL_134:
      if ( modeKind == this->fields.modeKind )
        break;
LABEL_135:
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))statusTabButton->klass->vtable._5_set_isEnabled.method)(
        statusTabButton,
        1LL,
        statusTabButton->klass->vtable._6_OnInit.methodPtr);
      v133 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
      if ( !v133 )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(v133, modeKind != 0, 0LL);
      statusTabSprite = this->fields.statusTabSprite;
      if ( !statusTabSprite )
        goto LABEL_228;
      v135 = (System_String_o **)&StringLiteral_17073/*"button_select_reg"*/;
      if ( modeKind )
        v135 = (System_String_o **)&StringLiteral_17074/*"button_select_unreg"*/;
      UISprite__set_spriteName(statusTabSprite, *v135, 0LL);
      v136 = this->fields.statusTabButton;
      if ( !v136 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v136->klass->vtable._14_SetState.method)(
        v136,
        0LL,
        !v43,
        v136->klass->vtable._15_OnPress.methodPtr);
      v137 = this->fields.statusTabButton;
      if ( !v137 )
        goto LABEL_228;
      v138 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(v137, v138, v73, 0LL);
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
        lockTabButton,
        1LL,
        lockTabButton->klass->vtable._6_OnInit.methodPtr);
      v140 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
      if ( !v140 )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(v140, modeKind != 1, 0LL);
      lockTabSprite = this->fields.lockTabSprite;
      if ( !lockTabSprite )
        goto LABEL_228;
      v142 = (System_String_o **)&StringLiteral_17059/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v142 = (System_String_o **)&StringLiteral_17060/*"button_alllock_unreg"*/;
      UISprite__set_spriteName(lockTabSprite, *v142, 0LL);
      v143 = this->fields.lockTabButton;
      if ( !v143 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v143->klass->vtable._14_SetState.method)(
        v143,
        0LL,
        !v43,
        v143->klass->vtable._15_OnPress.methodPtr);
      v144 = this->fields.lockTabButton;
      if ( !v144 )
        goto LABEL_228;
      v145 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(v144, v145, v73, 0LL);
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
        choiceTabButton,
        1LL,
        choiceTabButton->klass->vtable._6_OnInit.methodPtr);
      v147 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
      if ( !v147 )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(v147, modeKind != 2, 0LL);
      choiceTabSprite = this->fields.choiceTabSprite;
      if ( !choiceTabSprite )
        goto LABEL_228;
      v149 = (System_String_o **)&StringLiteral_17057/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v149 = (System_String_o **)&StringLiteral_17058/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName(choiceTabSprite, *v149, 0LL);
      v150 = this->fields.choiceTabButton;
      if ( !v150 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v150->klass->vtable._14_SetState.method)(
        v150,
        0LL,
        !v43,
        v150->klass->vtable._15_OnPress.methodPtr);
      v151 = this->fields.choiceTabButton;
      if ( !v151 )
        goto LABEL_228;
      v152 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(v151, v152, v73, 0LL);
      v153 = this->fields.pushTabButton;
      if ( !v153 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v153->klass->vtable._5_set_isEnabled.method)(
        v153,
        1LL,
        v153->klass->vtable._6_OnInit.methodPtr);
      v154 = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
      if ( !v154 )
        goto LABEL_228;
      UnityEngine_Behaviour__set_enabled(v154, modeKind != 3 && v92 != 3, 0LL);
      v155 = this->fields.pushTabSprite;
      if ( !v155 )
        goto LABEL_228;
      v156 = (System_String_o **)&StringLiteral_17071/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v156 = (System_String_o **)&StringLiteral_17072/*"button_push_unreg"*/;
      UISprite__set_spriteName(v155, *v156, 0LL);
      v157 = this->fields.pushTabButton;
      if ( v92 == 3 )
      {
        if ( !v157 )
          goto LABEL_228;
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v73, 0LL);
        v158 = this->fields.pushTabButton;
        if ( !v158 )
          goto LABEL_228;
        klass = v158->klass;
      }
      else
      {
        if ( !v157 )
          goto LABEL_228;
        v160 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(v157, v160, v73, 0LL);
        v161 = this->fields.pushTabButton;
        if ( !v161 )
          goto LABEL_228;
        klass = v161->klass;
      }
      ((void (*)(void))klass->vtable._14_SetState.method)();
      break;
    case 3:
      if ( v43 || this->fields.tabKind != 3 )
      {
        v122 = &this->fields.servantListViewManager;
        v121 = this->fields.servantListViewManager;
        if ( !v121 )
          goto LABEL_228;
        setupInfo = this->fields.setupInfo;
        v124 = 3;
LABEL_130:
        WarehouseListManager__CreateList(v121, v124, setupInfo, v112);
      }
      else
      {
LABEL_118:
        v122 = &this->fields.servantListViewManager;
      }
      if ( !*v122 )
        goto LABEL_228;
      v130 = (*v122)->fields.filterButton;
      if ( !v130 )
        goto LABEL_228;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v130->klass->vtable._14_SetState.method)(
        v130,
        0LL,
        1LL,
        v130->klass->vtable._15_OnPress.methodPtr);
      modeKind = WarehouseListMenu__HidePushButton(this, modeKind, 0, v131);
      if ( !v43 )
        goto LABEL_134;
      goto LABEL_135;
    default:
      goto LABEL_107;
  }
  v162 = v200;
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
        v164 = &StringLiteral_15250/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
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
        v164 = &StringLiteral_15251/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      v177 = LocalizationManager__Get((System_String_o *)*v164, 0LL);
      if ( !explanationLabel )
        goto LABEL_228;
      UILabel__set_text(explanationLabel, v177, 0LL);
LABEL_210:
      v165 = &this->fields.servantListViewManager;
      v178 = this->fields.servantListViewManager;
      if ( !v178 )
        goto LABEL_228;
      if ( v178->fields.modeKind )
        v178->fields.modeKind = 0;
LABEL_213:
      v179 = this->fields.servantListViewManager;
      this->fields.isInitTab = 1;
      this->fields.tabKind = tabKind;
      this->fields.modeKind = modeKind;
      if ( !v179 )
        goto LABEL_228;
      if ( this->fields.state == 2 )
      {
        baseListViewManager = v179->fields.baseListViewManager;
        if ( !baseListViewManager )
          goto LABEL_228;
        WarehouseListViewManager__UpdateItemState(baseListViewManager, modeKind == 3, v111);
        v181 = this->fields.servantListViewManager;
        v186 = (WarehouseListManager_CallbackFunc_o *)sub_B170CC(
                                                        WarehouseListManager_CallbackFunc_TypeInfo,
                                                        v182,
                                                        v183,
                                                        v184,
                                                        v185);
        WarehouseListManager_CallbackFunc___ctor(
          v186,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL);
        if ( !v181 )
          goto LABEL_228;
        v181->fields.callbackFunc = v186;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v181->fields.callbackFunc,
          (System_Int32_array **)v186,
          v187,
          v188,
          v189,
          v190,
          v191,
          v192);
        v193 = 2;
        v179 = v181;
      }
      else
      {
        v193 = 1;
      }
      WarehouseListManager__SetMode_26415604(v179, v193, v111);
      if ( !v43 && v162 )
      {
        if ( *v165 )
        {
          v195 = (*v165)->fields.baseListViewManager;
          if ( v195 )
          {
            WarehouseListViewManager__Modify(v195, v194);
            goto LABEL_223;
          }
        }
LABEL_228:
        sub_B170D4();
      }
LABEL_223:
      v196 = this->fields.servantListViewManager;
      if ( !v196 )
        goto LABEL_228;
      v197 = v196->fields.baseListViewManager;
      if ( !v197 )
        goto LABEL_228;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      ScaleButtonSpriteName = WarehouseListViewManager__GetScaleButtonSpriteName(v197, v194);
      if ( !scaleChageTabSprite )
        goto LABEL_228;
      UISprite__set_spriteName(scaleChageTabSprite, ScaleButtonSpriteName, 0LL);
      return;
    case 1:
      v166 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v167 = LocalizationManager__Get((System_String_o *)StringLiteral_15248/*"WAREHOUSE_EXPLANATION_LOCK"*/, 0LL);
      if ( !v166 )
        goto LABEL_228;
      UILabel__set_text(v166, v167, 0LL);
      v165 = &this->fields.servantListViewManager;
      v168 = this->fields.servantListViewManager;
      if ( !v168 )
        goto LABEL_228;
      if ( v168->fields.modeKind == 1 )
        goto LABEL_213;
      v169 = 1;
      goto LABEL_198;
    case 2:
      v170 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v171 = LocalizationManager__Get((System_String_o *)StringLiteral_15247/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v170 )
        goto LABEL_228;
      UILabel__set_text(v170, v171, 0LL);
      v165 = &this->fields.servantListViewManager;
      v168 = this->fields.servantListViewManager;
      if ( !v168 )
        goto LABEL_228;
      if ( v168->fields.modeKind == 2 )
        goto LABEL_213;
      v169 = 2;
      goto LABEL_198;
    case 3:
      v172 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v173 = LocalizationManager__Get((System_String_o *)StringLiteral_15249/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0LL);
      if ( !v172 )
        goto LABEL_228;
      UILabel__set_text(v172, v173, 0LL);
      v165 = &this->fields.servantListViewManager;
      v168 = this->fields.servantListViewManager;
      if ( !v168 )
        goto LABEL_228;
      if ( v168->fields.modeKind == 3 )
        goto LABEL_213;
      v169 = 3;
LABEL_198:
      v168->fields.modeKind = v169;
      goto LABEL_213;
    default:
      v162 = v200;
      v165 = &this->fields.servantListViewManager;
      goto LABEL_213;
  }
}


void __fastcall WarehouseListMenu__StatusRequest(
        WarehouseListMenu_o *this,
        WarehouseListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v10; // x8
  WarehouseListViewManager_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w3
  bool v28; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewManager_o *baseListViewManager; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  NetworkManager_ResultCallbackFunc_o *v41; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FA982 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_WarehouseListMenu_EndStatusSync__, v8);
    byte_40FA982 = 1;
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
      goto LABEL_25;
    baseListViewManager = servantListViewManager->fields.baseListViewManager;
    if ( !baseListViewManager )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapChoiceList(baseListViewManager, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v41 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v37,
                                                     v38,
                                                     v39,
                                                     v40);
      NetworkManager_ResultCallbackFunc___ctor(v41, (Il2CppObject *)this, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v41,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v28 = 1;
        v26 = 0;
        v27 = (this->fields.tabKind | 1) == 3;
        goto LABEL_21;
      }
LABEL_25:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 )
  {
    v10 = this->fields.servantListViewManager;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10->fields.baseListViewManager;
    if ( !v11 )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapLockList(v11, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v18,
                                                     v19,
                                                     v20,
                                                     v21);
      NetworkManager_ResultCallbackFunc___ctor(v22, (Il2CppObject *)this, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v22,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = (this->fields.tabKind | 1) == 3;
        v28 = 0;
LABEL_21:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v25, v24, v27, v26, v28, 0LL);
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

  if ( (byte_40FA974 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_40FA974 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B173C8(v7);
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

  if ( (byte_40FA975 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_40FA975 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (WarehouseListMenu_o *)sub_B173C8(v7);
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
  if ( (byte_40F7894 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_40F7894 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  if ( (byte_40F7895 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F7895 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  struct WarehouseListMenu_o *_4__this; // x8
  struct WarehouseListMenu_o *v27; // x20
  WarehouseListManager_o *servantListViewManager; // x19
  __int64 v29; // x21
  __int64 v30; // x9
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7893 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&WarehouseListManager_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v7);
    sub_B16FFC(&Method_WarehouseListMenu_OnSelectServant__, v8);
    byte_40F7893 = 1;
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
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
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
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_13;
  servantListViewManager = v27->fields.servantListViewManager;
  v29 = sub_B170CC(WarehouseListManager_CallbackFunc_TypeInfo, v22, v23, v24, v25);
  v30 = *(_QWORD *)Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v29 + 40) = Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v29 + 16) = v30;
  *(_QWORD *)(v29 + 32) = v27;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 32), (System_Int32_array **)v27, v31, v32, v33, v34, v35, v36);
  if ( !servantListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode(servantListViewManager, 2, (WarehouseListManager_CallbackFunc_o *)v29, 0LL);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  WarehouseListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  WarehouseListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}