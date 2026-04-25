void WarehouseListMenu___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4E02779 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_TypeInfo);
    sub_1CE6700(&StringLiteral_409/*"#4C4C4C"*/);
    byte_4E02779 = 1;
  }
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_409/*"#4C4C4C"*/;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)WarehouseListMenu_TypeInfo->static_fields,
    StringLiteral_409/*"#4C4C4C"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4E02778 & 1) == 0 )
  {
    sub_1CE6700(&BaseMenu_TypeInfo);
    byte_4E02778 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void WarehouseListMenu__Callback(WarehouseListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x21
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1CE66A4(p_callbackFunc, 0, n, (int32_t)method, v4, v5, v6, v7);
    if ( !result )
      result = this->fields.isModify;
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      callbackFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__ChangeIconScale(WarehouseListMenu_o *this, bool result, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *v5; // x8
  UISprite_o *scaleChageTabSprite; // x19

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (v4 = this, (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0)
    || (WarehouseListViewManager__ChangeIconScale((WarehouseListViewManager_o *)this, (const MethodInfo *)result),
        (v5 = v4->fields.servantListViewManager) == 0)
    || (this = (WarehouseListMenu_o *)v5->fields.baseListViewManager) == 0
    || (scaleChageTabSprite = v4->fields.scaleChageTabSprite,
        this = (WarehouseListMenu_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                        (WarehouseListViewManager_o *)this,
                                        (const MethodInfo *)result),
        !scaleChageTabSprite) )
  {
    sub_1CE6958(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0);
}


void WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_39485596(this, 0, v2);
}


void WarehouseListMenu__Close_39485596(WarehouseListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x5
  System_Action_o *v13; // x20

  if ( (byte_4E0275D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClose__);
    byte_4E0275D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1CE66A4(
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v12);
  v13 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0);
}


void WarehouseListMenu__EndCardFavoriteRequest(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  v3 = this;
  if ( (byte_4E02777 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E02777 = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v5 = v3->fields.servantListViewManager,
        v6 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v7),
        !v5) )
  {
    sub_1CE6958(this, result);
  }
  v5->fields.callbackFunc = v6;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  WarehouseListManager__SetMode_39472972(v5, 2, v14);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickCancel(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0) )
    {
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__Callback(v4, 0, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabChoice(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0) )
    {
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 2, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabLock(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0) )
    {
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 1, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabPush(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0) )
    {
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 3, 0, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabPutIn(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
          WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1CE6958(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 0;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabPutOut(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
          WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1CE6958(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 2;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabServant(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v5->fields.servantListViewManager) == 0) )
    {
LABEL_13:
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_11:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 2, method);
}


void WarehouseListMenu__EndClickTabServantEquip(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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

  EventTutorialMaster__CheckTutorial(-1, 55, 0, 0, 0, 0, 0, 0);
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
      || (baseListViewManager = (struct WarehouseListManager_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)baseListViewManager, v6),
          (baseListViewManager = this->fields.servantListViewManager) == 0) )
    {
LABEL_13:
      sub_1CE6958(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_39472972(baseListViewManager, 3, v13);
  }
LABEL_11:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_39472972(baseListViewManager, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndClickTabStatus(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
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
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
      || (WarehouseListViewManager__Modify((WarehouseListViewManager_o *)this, (const MethodInfo *)isRequest),
          (this = (WarehouseListMenu_o *)v4->fields.servantListViewManager) == 0) )
    {
      sub_1CE6958(this, isRequest);
    }
    WarehouseListManager__SetMode_39472972((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  WarehouseListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4E02770 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E02770 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1CE6958(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_39472972(servantListViewManager, 2, v14);
}


void WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4E0276D & 1) == 0 )
  {
    sub_1CE6700(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndNotificationMove__);
    byte_4E0276D = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
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
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
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
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
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
      v4 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v12);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_1CE6958(v6, v7);
      v9 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v9, v4, 0, 0, v8);
      break;
    default:
      return;
  }
}


void WarehouseListMenu__EndCloseList(WarehouseListMenu_o *this, const MethodInfo *method)
{
  ;
}


void WarehouseListMenu__EndCloseNotificationMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4E0276F & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E0276F = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1CE6958(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_39472972(servantListViewManager, 2, v14);
}


void WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4E02774 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E02774 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1CE6958(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_39472972(servantListViewManager, 2, v14);
}


void WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4E02772 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E02772 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v4 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v5);
  if ( !servantListViewManager )
    sub_1CE6958(v6, v7);
  servantListViewManager->fields.callbackFunc = v4;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  WarehouseListManager__SetMode_39472972(servantListViewManager, 2, v14);
}


void WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0;
    sub_1CE66A4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      2,
      callbackFunc->fields.method);
  }
}


void WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4E0276A & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__);
    sub_1CE6700(&Method_WarehouseListMenu_EndConfirmRequestLock__);
    byte_4E0276A = 1;
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
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
    v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0);
    if ( !warehouseConfirmMenu )
      sub_1CE6958(v10, v11);
    WarehouseConfirmMenu__Close_39461852(warehouseConfirmMenu, v9, v12);
  }
}


void WarehouseListMenu__EndConfirmRequestLock(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  if ( (byte_4E0276B & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_StorageTakeinRequest___);
    sub_1CE6700(&Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndRequestWarehouse__);
    byte_4E0276B = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0);
      return;
    }
LABEL_14:
    sub_1CE6958(Request_object, v7);
  }
}


void WarehouseListMenu__EndNotificationMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4E0276E & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__);
    byte_4E0276E = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v5 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0);
  if ( !warehouseConfirmMenu )
    sub_1CE6958(v6, v7);
  WarehouseConfirmMenu__Close_39461852(warehouseConfirmMenu, v5, v8);
}


void WarehouseListMenu__EndOpen(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2

  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v2);
}


void WarehouseListMenu__EndRequestWarehouse(
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

  if ( (byte_4E0276C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__);
    byte_4E0276C = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0);
  if ( !warehouseConfirmMenu )
    sub_1CE6958(v9, v10);
  WarehouseConfirmMenu__Close_39461852(warehouseConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndServantEquipStatus(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_4E02773 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_EndCloseServantEquipStatus__);
    byte_4E02773 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0 )
    {
LABEL_9:
      sub_1CE6958(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndServantStatus(
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
  intptr_t *v14; // x8

  v8 = this;
  if ( (byte_4E02771 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_EndCloseServantStatus__);
    byte_4E02771 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v14 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)v8, *v14, 0);
  if ( !Instance )
LABEL_14:
    sub_1CE6958(this, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0);
}


void WarehouseListMenu__EndStatusSync(WarehouseListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  GrandQuestFolderBoardItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (GrandQuestFolderBoardItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0;
    sub_1CE66A4(p_requedstCallback, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))requedstCallback->fields.invoke_impl)(
      requedstCallback->fields.method_code,
      1,
      requedstCallback->fields.method);
  }
}


int32_t WarehouseListMenu__GetMode(WarehouseListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarehouseListMenu__HidePushButton(
        WarehouseListMenu_o *this,
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
        (pushTabSprite = (UnityEngine_Component_o *)this->fields.pushTabButton) == 0) )
  {
    sub_1CE6958(pushTabSprite, *(_QWORD *)&modeKind);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pushTabSprite, 0, 0);
  if ( modeKind == 3 )
    return 0;
  else
    return modeKind;
}


void WarehouseListMenu__Init(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_o *servantListViewManager; // x0

  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager )
    sub_1CE6958(0, method);
  WarehouseListManager__DestroyList(servantListViewManager, method);
  this->fields.state = 0;
  *(_QWORD *)&this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool WarehouseListMenu__IsDragEnable(WarehouseListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind == 0;
}


bool WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarehouseListManager_o *servantListViewManager; // x0
  struct WarehouseListManager_o *v5; // x8
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)friendShipSum = 0;
  if ( (this->fields.tabKind | 2) != 3 )
    return 1;
  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (WarehouseListManager__GetSelectItemNum(servantListViewManager, &friendShipSum[1], friendShipSum, v2),
        (v5 = this->fields.servantListViewManager) == 0) )
  {
    sub_1CE6958(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum[0] > v5->fields.sendMax;
}


void WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E0275F & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickCancel__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickCancel__);
    byte_4E0275F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v5, v6);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        v9);
      WarehouseListMenu__StatusRequest(this, v8, v10);
    }
  }
}


void WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E02775 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_ChangeIconScale__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickScaleChage__);
    byte_4E02775 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickScaleChage__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
  }
}


void WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4E02766 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabChoice__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickTabChoice__);
    byte_4E02766 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1CE6958(0, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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


void WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4E02765 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabLock__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickTabLock__);
    byte_4E02765 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1CE6958(0, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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


void WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4E02767 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabPush__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickTabPush__);
    byte_4E02767 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1CE6958(0, v8);
    WarehouseListManager__ReleaseAll(servantListViewManager, v8);
  }
}


void WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4E02762 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabPutIn__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_OnClickTabPutIn__);
    byte_4E02762 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1CE6958(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabPutIn__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4E02763 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabPutOut__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_OnClickTabPutOut__);
    byte_4E02763 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1CE6958(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabPutOut__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4E02760 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabServant__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_OnClickTabServant__);
    byte_4E02760 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1CE6958(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
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
  if ( (byte_4E02761 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabServantEquip__);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_OnClickTabServantEquip__);
    byte_4E02761 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1CE6958(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        v8);
      WarehouseListMenu__StatusRequest(v2, v7, v9);
    }
  }
}


void WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E02764 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndClickTabStatus__);
    sub_1CE6700(&Method_WarehouseListMenu_OnClickTabStatus__);
    byte_4E02764 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1CE694C(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
  }
}


void WarehouseListMenu__OnSelectServant(
        WarehouseListMenu_o *this,
        int32_t result,
        System_Int64_array *list,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 baseListViewManager; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct WarehouseListManager_o *v32; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x5
  struct WarehouseListManager_o *v37; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v41; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  int32_t tabKind; // w8
  Il2CppObject *v47; // x0
  int64_t selectNum; // x20
  Il2CppObject *v49; // x21
  ServantStatusDialog_ResultDelegate_o *v50; // x22
  CommonUI_o *v51; // x0
  int32_t v52; // w1
  struct WarehouseConfirmMenu_o *v53; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v54; // x21
  const MethodInfo *v55; // x3
  WarehouseConfirmMenu_o *v56; // x0
  WarehouseListViewItem_o **v57; // x21
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  const MethodInfo *v60; // x2
  int64_t v61; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v63; // q1
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  struct WarehouseListManager_o *v66; // x20
  WarehouseListManager_CallbackFunc_o *v67; // x21
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  const MethodInfo *v75; // x2
  Il2CppObject *v76; // x0
  int64_t v77; // x20
  Il2CppObject *v78; // x21
  ServantStatusDialog_EndDelegate_o *v79; // x22
  CommonUI_o *v80; // x0
  int32_t v81; // w1
  Il2CppObject *v82; // x0
  Il2CppObject *v83; // x21
  Il2CppObject *v84; // x0
  Il2CppObject *v85; // x21
  struct WarehouseConfirmMenu_o *v86; // x20
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v90; // x2
  int32_t v91; // w3
  __int64 v92; // x26
  ServantEntity_o *ServantEntity; // x27
  UserServantEntity_o *v94; // x8
  int32_t v95; // w28
  int32_t v96; // w25
  Il2CppObject *Master_object; // x23
  System_String_o *v98; // x19
  System_String_o *v99; // x22
  __int64 v100; // x24
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  __int64 v107; // x28
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x28
  __int64 v115; // x27
  __int64 v116; // x28
  int32_t v117; // w0
  __int64 v118; // x8
  int32_t v119; // w26
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  __int64 v126; // x26
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  __int64 v133; // x25
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  __int64 v140; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v141; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v142; // x8
  int32_t v143; // w21
  int32_t v144; // w0
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  __int64 v151; // x21
  System_String_o *v152; // x21
  System_String_o *v153; // x22
  System_String_o *v154; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v156; // x25
  const MethodInfo *v157; // x3
  struct WarehouseListManager_o *v158; // x8
  const MethodInfo *v159; // x3
  struct WarehouseListManager_o *v160; // x8
  const MethodInfo *v161; // x3
  struct WarehouseListManager_o *v162; // x8
  __int64 v163; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v164; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v165; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v167; // 0:x0.16

  if ( (byte_4E02769 & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1CE6700(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1CE6700(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&object___TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1CE6700(&Rarity_TypeInfo);
    sub_1CE6700(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__);
    sub_1CE6700(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndConfirmMove__);
    sub_1CE6700(&Method_WarehouseListMenu_EndServantEquipStatus__);
    sub_1CE6700(&Method_WarehouseListMenu_EndServantStatus__);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    sub_1CE6700(&StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_1CE6700(&StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_1CE6700(&StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_4E02769 = 1;
  }
  v9 = sub_1CE694C(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_123;
  *(_QWORD *)(v9 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0;
  this->fields.selectNumList = list;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.selectNumList, (int32_t)list, v18, v19, v20, v21, v22, v23);
  if ( result == 3 )
  {
    if ( n < 0 )
    {
      Item = 0;
    }
    else
    {
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_123;
      baseListViewManager = (__int64)servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_123;
      Item = WarehouseListViewManager__GetItem((WarehouseListViewManager_o *)baseListViewManager, n, v24);
    }
    *(_QWORD *)(v9 + 24) = Item;
    v57 = (WarehouseListViewItem_o **)(v9 + 24);
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)Item, (int32_t)v24, (int32_t)v25, v26, v27, v28, v29);
    if ( !*(_QWORD *)(v9 + 24) || !(*v57)->fields.isEnabled )
    {
      v64 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnSelectServant__);
      v65 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0, 0);
      this->fields.state = 2;
      v66 = this->fields.servantListViewManager;
      v67 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v67,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v68);
      if ( v66 )
      {
        v66->fields.callbackFunc = v67;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&v66->fields.callbackFunc,
          (int32_t)v67,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        WarehouseListManager__SetMode_39472972(v66, 2, v75);
        return;
      }
      goto LABEL_123;
    }
    v58 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v58 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnSelectServant__);
    v59 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v58, v58[4]);
    OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0);
    baseListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( !baseListViewManager )
      goto LABEL_123;
    v61 = *(_QWORD *)(baseListViewManager + 128);
    if ( !v61 )
      goto LABEL_44;
    if ( !*v57 )
      goto LABEL_123;
    userServantEntity = (*v57)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_123;
    v63 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v165.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v165.fields.fakeValue = v63;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v164 = v165;
    if ( v61 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50041532(&v164, 0) )
    {
LABEL_44:
      WarehouseListMenu__PushRequest(this, *v57, v60);
      return;
    }
    baseListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_123;
    baseListViewManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseListViewManager,
                                     (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_123;
    baseListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
                                     v61,
                                     (const MethodInfo_34EBA0C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !baseListViewManager )
      goto LABEL_123;
    v92 = baseListViewManager;
    ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)baseListViewManager, -1, 0);
    baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v92, 0, 0);
    if ( !baseListViewManager )
      goto LABEL_123;
    if ( !*v57 )
      goto LABEL_123;
    v94 = (*v57)->fields.userServantEntity;
    if ( !v94 )
      goto LABEL_123;
    v95 = *(_DWORD *)(baseListViewManager + 24);
    baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v94, 0, 0);
    if ( !baseListViewManager )
      goto LABEL_123;
    v96 = *(_DWORD *)(baseListViewManager + 24);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v98 = LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
    v100 = sub_1CE67A8(object___TypeInfo, 6);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (__int64)Rarity__getRarityType(v95, 0);
    if ( !v100 )
LABEL_123:
      sub_1CE6958(baseListViewManager, v11);
    v107 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
        goto LABEL_125;
    }
    if ( !*(_DWORD *)(v100 + 24) )
      goto LABEL_124;
    *(_QWORD *)(v100 + 32) = v107;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 32), v107, v101, v102, v103, v104, v105, v106);
    if ( !ServantEntity )
      goto LABEL_123;
    baseListViewManager = (__int64)ServantEntity__getClassName(ServantEntity, 0);
    v114 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
        goto LABEL_125;
    }
    if ( *(_DWORD *)(v100 + 24) <= 1u )
      goto LABEL_124;
    *(_QWORD *)(v100 + 40) = v114;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 40), v114, v108, v109, v110, v111, v112, v113);
    v116 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
    v115 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v166.fields.currentCryptoKey = v116;
    *(_QWORD *)&v166.fields.fakeValue = v115;
    v117 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v166, 0);
    v118 = *(_QWORD *)(v92 + 96);
    *(_QWORD *)&v167.fields.fakeValue = *(_QWORD *)(v92 + 104);
    v119 = v117;
    *(_QWORD *)&v167.fields.currentCryptoKey = v118;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v167, 0);
    if ( !Master_object )
      goto LABEL_123;
    baseListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     v119,
                                     baseListViewManager,
                                     1,
                                     1,
                                     0);
    v126 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
        goto LABEL_125;
    }
    if ( *(_DWORD *)(v100 + 24) <= 2u )
      goto LABEL_124;
    *(_QWORD *)(v100 + 48) = v126;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 48), v126, v120, v121, v122, v123, v124, v125);
    baseListViewManager = (__int64)Rarity__getRarityType(v96, 0);
    v133 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
        goto LABEL_125;
    }
    if ( *(_DWORD *)(v100 + 24) <= 3u )
      goto LABEL_124;
    *(_QWORD *)(v100 + 56) = v133;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 56), v133, v127, v128, v129, v130, v131, v132);
    if ( !*v57 )
      goto LABEL_123;
    baseListViewManager = (__int64)(*v57)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_123;
    baseListViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)baseListViewManager, 0);
    v140 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
        goto LABEL_125;
    }
    if ( *(_DWORD *)(v100 + 24) <= 4u )
      goto LABEL_124;
    *(_QWORD *)(v100 + 64) = v140;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 64), v140, v134, v135, v136, v137, v138, v139);
    if ( !*v57 )
      goto LABEL_123;
    v141 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v57)->fields.servantEntity;
    if ( !v141 )
      goto LABEL_123;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v141[1], 0);
    if ( !*v57 )
      goto LABEL_123;
    v142 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v57)->fields.userServantEntity;
    if ( !v142 )
      goto LABEL_123;
    v143 = baseListViewManager;
    v144 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v142[6], 0);
    baseListViewManager = (__int64)ServantLimitImageMaster__GetLimitCountSealedServantName(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     v143,
                                     v144,
                                     1,
                                     1,
                                     0);
    v151 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1CE683C(baseListViewManager, *(_QWORD *)(*(_QWORD *)v100 + 64LL));
      if ( !baseListViewManager )
      {
LABEL_125:
        v163 = sub_1CE697C();
        sub_1CE6828(v163, 0);
      }
    }
    if ( *(_DWORD *)(v100 + 24) > 5u )
    {
      *(_QWORD *)(v100 + 72) = v151;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v100 + 72), v151, v145, v146, v147, v148, v149, v150);
      v152 = System_String__Format_65164272(v99, (System_Object_array *)v100, 0);
      v153 = LocalizationManager__Get((System_String_o *)StringLiteral_12071/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
      v154 = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v156 = (CommonConfirmDialog_ClickDelegate_o *)sub_1CE694C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v156,
        (Il2CppObject *)v9,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0);
      baseListViewManager = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseListViewManager = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_31919840(
          (CommonUI_o *)Instance,
          v98,
          v152,
          v153,
          v154,
          v156,
          *(_DWORD *)(*(_QWORD *)(baseListViewManager + 184) + 508LL),
          *(_DWORD *)(*(_QWORD *)(baseListViewManager + 184) + 520LL),
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
      goto LABEL_123;
    }
LABEL_124:
    sub_1CE6960(baseListViewManager);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v24, v25);
      return;
    }
    v30 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v30 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnSelectServant__);
    v31 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v30, v30[4]);
    OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
    v32 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v32 )
    {
      if ( v32->fields.totalSum > v32->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v11) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v34 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v35);
            v37 = this->fields.servantListViewManager;
            if ( !v37 || !warehouseConfirmMenu )
              goto LABEL_123;
            sendKeep = v37->fields.sendKeep;
            sendSum = v37->fields.sendSum;
            totalSum = v37->fields.totalSum;
            v41 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v34 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v157);
            v158 = this->fields.servantListViewManager;
            if ( !v158 || !warehouseConfirmMenu )
              goto LABEL_123;
            sendKeep = v158->fields.sendKeep;
            sendSum = v158->fields.sendSum;
            totalSum = v158->fields.totalSum;
            v41 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v34 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v159);
            v160 = this->fields.servantListViewManager;
            if ( !v160 || !warehouseConfirmMenu )
              goto LABEL_123;
            sendKeep = v160->fields.sendKeep;
            sendSum = v160->fields.sendSum;
            totalSum = v160->fields.totalSum;
            v41 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v34 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v161);
            v162 = this->fields.servantListViewManager;
            if ( !v162 || !warehouseConfirmMenu )
              goto LABEL_123;
            sendKeep = v162->fields.sendKeep;
            sendSum = v162->fields.sendSum;
            totalSum = v162->fields.totalSum;
            v41 = 11;
            break;
          default:
            return;
        }
        v91 = totalSum + sendSum;
        v56 = warehouseConfirmMenu;
        v90 = v34;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v53 = this->fields.warehouseConfirmMenu;
            v54 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v54,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v55);
            if ( !v53 )
              goto LABEL_123;
            v56 = v53;
            v41 = 0;
            goto LABEL_64;
          case 1:
            v86 = this->fields.warehouseConfirmMenu;
            v54 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v54,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v87);
            if ( !v86 )
              goto LABEL_123;
            v41 = 1;
            goto LABEL_63;
          case 2:
            v86 = this->fields.warehouseConfirmMenu;
            v54 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v54,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v88);
            if ( !v86 )
              goto LABEL_123;
            v41 = 2;
            goto LABEL_63;
          case 3:
            v86 = this->fields.warehouseConfirmMenu;
            v54 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1CE694C(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v54,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v89);
            if ( !v86 )
              goto LABEL_123;
            v41 = 3;
LABEL_63:
            v56 = v86;
LABEL_64:
            v90 = v54;
            v91 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v56, v41, v90, v91, sendKeep, v36);
      return;
    }
    goto LABEL_123;
  }
  v44 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v44 = (_QWORD *)sub_1CE6718(Method_WarehouseListMenu_OnSelectServant__);
  v45 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v44, v44[4]);
  OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
  this->fields.state = 7;
  if ( !list )
    goto LABEL_123;
  if ( !LODWORD(list->max_length) )
    goto LABEL_124;
  tabKind = this->fields.tabKind;
  this->fields.selectNum = list->m_Items[0];
  switch ( tabKind )
  {
    case 0:
      v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v49 = v47;
      v50 = (ServantStatusDialog_ResultDelegate_o *)sub_1CE694C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v50,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0);
      if ( !v49 )
        goto LABEL_123;
      v51 = (CommonUI_o *)v49;
      v52 = 0;
      goto LABEL_53;
    case 1:
      v76 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = this->fields.selectNum;
      v78 = v76;
      v79 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v79,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0);
      if ( !v78 )
        goto LABEL_123;
      v80 = (CommonUI_o *)v78;
      v81 = 0;
      goto LABEL_56;
    case 2:
      v82 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v83 = v82;
      v50 = (ServantStatusDialog_ResultDelegate_o *)sub_1CE694C(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v50,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0);
      if ( !v83 )
        goto LABEL_123;
      v52 = 3;
      v51 = (CommonUI_o *)v83;
LABEL_53:
      CommonUI__OpenServantStatusDialog_31929660(v51, v52, selectNum, v50, 0, 0);
      break;
    case 3:
      v84 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = this->fields.selectNum;
      v85 = v84;
      v79 = (ServantStatusDialog_EndDelegate_o *)sub_1CE694C(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v79,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0);
      if ( !v85 )
        goto LABEL_123;
      v81 = 3;
      v80 = (CommonUI_o *)v85;
LABEL_56:
      CommonUI__OpenServantStatusDialog_31928948(v80, v81, v77, v79, 0, 0);
      break;
    default:
      return;
  }
}


void WarehouseListMenu__Open(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v29; // x5
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x5
  System_Action_o *v37; // x20
  unsigned __int128 v38; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4E0275C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_WarehouseListMenu_EndOpen__);
    sub_1CE6700(&WarehouseListMenu_TypeInfo);
    byte_4E0275C = 1;
  }
  v9 = WarehouseListMenu_TypeInfo;
  v38 = 0u;
  if ( !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v9 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v9->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v38,
                                             0);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_12;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v38;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
      (int32_t)setupinfo,
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
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.setupInfo,
      (int32_t)setupinfo,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v36);
      this->fields.state = 1;
      v37 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v37, 0);
      return;
    }
LABEL_12:
    sub_1CE6958(gameObject, v11);
  }
}


void WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x21

  if ( (byte_4E02776 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_WarehouseListMenu_EndCardFavoriteRequest__);
    byte_4E02776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_1CE6958(Instance, v6);
  CardFavoriteRequest__beginRequestPush((CardFavoriteRequest_o *)Instance, selectItem->fields.userServantEntity, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__SetTabKind(
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
  float v30; // s0 OVERLAPPED
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
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w1
  struct WarehouseListManager_o *v88; // x8
  struct WarehouseListManager_o *v89; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v91; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E0275E & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    sub_1CE6700(&StringLiteral_17749/*"btn_txt_craftessence_off"*/);
    sub_1CE6700(&StringLiteral_17789/*"btn_txt_servant_off"*/);
    sub_1CE6700(&StringLiteral_20932/*"img_txt_cardspace"*/);
    sub_1CE6700(&StringLiteral_17848/*"button_push_reg"*/);
    sub_1CE6700(&StringLiteral_17849/*"button_push_unreg"*/);
    sub_1CE6700(&StringLiteral_17834/*"button_allchoice_reg"*/);
    sub_1CE6700(&StringLiteral_17630/*"btn_bg_12"*/);
    sub_1CE6700(&StringLiteral_17837/*"button_alllock_unreg"*/);
    sub_1CE6700(&StringLiteral_17790/*"btn_txt_servant_on"*/);
    sub_1CE6700(&StringLiteral_17850/*"button_select_reg"*/);
    sub_1CE6700(&StringLiteral_17632/*"btn_bg_19"*/);
    sub_1CE6700(&StringLiteral_17744/*"btn_txt_cardtoarchive_on"*/);
    sub_1CE6700(&StringLiteral_15598/*"WAREHOUSE_EXPLANATION_PUT_IN"*/);
    sub_1CE6700(&StringLiteral_15596/*"WAREHOUSE_EXPLANATION_LOCK"*/);
    sub_1CE6700(&StringLiteral_17638/*"btn_bg_25"*/);
    sub_1CE6700(&StringLiteral_17743/*"btn_txt_cardtoarchive_off"*/);
    sub_1CE6700(&StringLiteral_17750/*"btn_txt_craftessence_on"*/);
    sub_1CE6700(&StringLiteral_15599/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/);
    sub_1CE6700(&StringLiteral_15597/*"WAREHOUSE_EXPLANATION_PUSH"*/);
    sub_1CE6700(&StringLiteral_17732/*"btn_txt_archivetocard_on"*/);
    sub_1CE6700(&StringLiteral_20923/*"img_txt_archivespace"*/);
    sub_1CE6700(&StringLiteral_17731/*"btn_txt_archivetocard_off"*/);
    sub_1CE6700(&StringLiteral_15595/*"WAREHOUSE_EXPLANATION_CHOICE"*/);
    sub_1CE6700(&StringLiteral_17851/*"button_select_unreg"*/);
    sub_1CE6700(&StringLiteral_17836/*"button_alllock_reg"*/);
    sub_1CE6700(&StringLiteral_17637/*"btn_bg_24"*/);
    sub_1CE6700(&StringLiteral_17835/*"button_allchoice_unreg"*/);
    byte_4E0275E = 1;
  }
  v11 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_196;
    WarehouseListManager__DestroyList(servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4DFF120 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    byte_4DFF120 = 1;
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
  if ( !byte_4DFF121 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
    byte_4DFF121 = 1;
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
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, const MethodInfo *, long double))servantTabButton->klass->vtable._5_set_isEnabled.methodPtr)(
    servantTabButton,
    this->fields.servantTabButton,
    1,
    servantTabButton->klass->vtable._5_set_isEnabled.method,
    inited);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v25 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind & 0xFFFFFFFD) != 0, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v26 = &StringLiteral_17790/*"btn_txt_servant_on"*/;
  if ( v25 )
    v26 = &StringLiteral_17789/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v26, 0);
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
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)&v30, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v91 = isModify;
  v31 = (System_String_o **)(v25 ? &StringLiteral_17630/*"btn_bg_12"*/ : &StringLiteral_17632/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v31, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v32 = !v11;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                       servantListViewManager,
                                                       0,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.implementedInterfaces);
  v33 = this->fields.servantTabButton;
  if ( !v33 )
    goto LABEL_196;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(v33, enabled, !v11, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
    servantListViewManager,
    1,
    servantListViewManager->klass[1]._1.namespaze);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v25 == 0, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v35 = &StringLiteral_17749/*"btn_txt_craftessence_off"*/;
  if ( v25 )
    v35 = &StringLiteral_17750/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v35, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  if ( v25 )
    v36 = &StringLiteral_17632/*"btn_bg_19"*/;
  else
    v36 = &StringLiteral_17630/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v36, 0);
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
  v92.fields.r = v22;
  v92.fields.g = v21;
  v92.fields.b = v24;
  v92.fields.a = v23;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v92, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                       servantListViewManager,
                                                       0,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.implementedInterfaces);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_196;
  v38 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v38, v32, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
    servantListViewManager,
    1,
    servantListViewManager->klass[1]._1.namespaze);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v39 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind & 0xFFFFFFFE) == 2, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v40 = (System_String_o **)&StringLiteral_17743/*"btn_txt_cardtoarchive_off"*/;
  if ( v39 != 2 )
    v40 = (System_String_o **)&StringLiteral_17744/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v40, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v41 = (System_String_o **)(v39 == 2 ? &StringLiteral_17637/*"btn_bg_24"*/ : &StringLiteral_17638/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v41, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                       servantListViewManager,
                                                       0,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.implementedInterfaces);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_196;
  v43 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0);
  UICommonButton__SetColliderEnable(putInTabButton, v43, v32, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
    servantListViewManager,
    1,
    servantListViewManager->klass[1]._1.namespaze);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v39 != 2, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v44 = (System_String_o **)&StringLiteral_17732/*"btn_txt_archivetocard_on"*/;
  if ( v39 != 2 )
    v44 = (System_String_o **)&StringLiteral_17731/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v44, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v45 = (System_String_o **)(v39 == 2 ? &StringLiteral_17638/*"btn_bg_25"*/ : &StringLiteral_17637/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v45, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                       servantListViewManager,
                                                       0,
                                                       !v11,
                                                       servantListViewManager->klass[1]._1.implementedInterfaces);
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_196;
  v47 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0);
  UICommonButton__SetColliderEnable(putOutTabButton, v47, v32, 0);
  servantListViewManager = (WarehouseListManager_o *)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v48 = (System_String_o **)&StringLiteral_20932/*"img_txt_cardspace"*/;
  if ( v39 != 2 )
    v48 = (System_String_o **)&StringLiteral_20923/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v48, 0);
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
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
        servantListViewManager,
        0,
        1,
        servantListViewManager->klass[1]._1.implementedInterfaces);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantListViewManager,
                                                           0);
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
        servantListViewManager,
        1,
        servantListViewManager->klass[1]._1.namespaze);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 1, 0);
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
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
        servantListViewManager,
        0,
        1,
        servantListViewManager->klass[1]._1.implementedInterfaces);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)servantListViewManager,
                                                           0);
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0);
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
        ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
          servantListViewManager,
          1,
          servantListViewManager->klass[1]._1.namespaze);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 0, 0);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v52 = servantListViewManager->klass;
LABEL_113:
        ((void (*)(void))v52[1]._1.nestedTypes)();
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
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
        servantListViewManager,
        1,
        servantListViewManager->klass[1]._1.namespaze);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 0, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v58 = &StringLiteral_17850/*"button_select_reg"*/;
      if ( modeKind )
        v58 = &StringLiteral_17851/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v58, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                           servantListViewManager,
                                                           0,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.implementedInterfaces);
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_196;
      v60 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
      UICommonButton__SetColliderEnable(statusTabButton, v60, v32, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
        servantListViewManager,
        1,
        servantListViewManager->klass[1]._1.namespaze);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 1, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v61 = &StringLiteral_17836/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v61 = &StringLiteral_17837/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v61, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                           servantListViewManager,
                                                           0,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.implementedInterfaces);
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_196;
      v63 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
      UICommonButton__SetColliderEnable(lockTabButton, v63, v32, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
        servantListViewManager,
        1,
        servantListViewManager->klass[1]._1.namespaze);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 2, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v64 = &StringLiteral_17834/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v64 = &StringLiteral_17835/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v64, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
                                                           servantListViewManager,
                                                           0,
                                                           !v11,
                                                           servantListViewManager->klass[1]._1.implementedInterfaces);
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_196;
      v66 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
      UICommonButton__SetColliderEnable(choiceTabButton, v66, v32, 0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, __int64, const char *))servantListViewManager->klass[1]._1.name)(
        servantListViewManager,
        1,
        servantListViewManager->klass[1]._1.namespaze);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      UnityEngine_Behaviour__set_enabled(
        (UnityEngine_Behaviour_o *)servantListViewManager,
        modeKind != 3 && v39 != 2,
        0);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v67 = &StringLiteral_17848/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v67 = &StringLiteral_17849/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v67, 0);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_196;
      if ( v39 == 2 )
      {
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v32, 0);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v69 = servantListViewManager->klass;
      }
      else
      {
        v70 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
        UICommonButton__SetColliderEnable(pushTabButton, v70, v32, 0);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v69 = servantListViewManager->klass;
      }
      ((void (*)(void))v69[1]._1.nestedTypes)();
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
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppClass **))servantListViewManager->klass[1]._1.nestedTypes)(
        servantListViewManager,
        0,
        1,
        servantListViewManager->klass[1]._1.implementedInterfaces);
      modeKind = WarehouseListMenu__HidePushButton(this, modeKind, 0, v57);
LABEL_107:
      if ( !v11 )
        goto LABEL_114;
      goto LABEL_115;
    default:
      goto LABEL_107;
  }
  v71 = v91;
  switch ( modeKind )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = &StringLiteral_15598/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( v39 != 2 )
          goto LABEL_179;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = &StringLiteral_15599/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get((System_String_o *)*v73, 0);
      if ( !explanationLabel )
        goto LABEL_196;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0);
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
        v79 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v79,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v80);
        if ( !v78 )
          goto LABEL_196;
        v78->fields.callbackFunc = v79;
        sub_1CE66A4(
          (GrandQuestFolderBoardItem_o *)&v78->fields.callbackFunc,
          (int32_t)v79,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
        v87 = 2;
        servantListViewManager = v78;
      }
      else
      {
        v87 = 1;
      }
      WarehouseListManager__SetMode_39472972(servantListViewManager, v87, v49);
      if ( !v11 && v71 )
      {
        v88 = this->fields.servantListViewManager;
        if ( v88 )
        {
          servantListViewManager = (WarehouseListManager_o *)v88->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_192;
          }
        }
LABEL_196:
        sub_1CE6958(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_192:
      v89 = this->fields.servantListViewManager;
      if ( !v89 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v89->fields.baseListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      scaleChageTabSprite = this->fields.scaleChageTabSprite;
      servantListViewManager = (WarehouseListManager_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                                           (WarehouseListViewManager_o *)servantListViewManager,
                                                           *(const MethodInfo **)&tabKind);
      if ( !scaleChageTabSprite )
        goto LABEL_196;
      UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0);
      return;
    case 1:
      v74 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15596/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                           0);
      if ( !v74 )
        goto LABEL_196;
      UILabel__set_text(v74, (System_String_o *)servantListViewManager, 0);
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
                                                           (System_String_o *)StringLiteral_15595/*"WAREHOUSE_EXPLANATION_CHOICE"*/,
                                                           0);
      if ( !v76 )
        goto LABEL_196;
      UILabel__set_text(v76, (System_String_o *)servantListViewManager, 0);
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
                                                           (System_String_o *)StringLiteral_15597/*"WAREHOUSE_EXPLANATION_PUSH"*/,
                                                           0);
      if ( !v77 )
        goto LABEL_196;
      UILabel__set_text(v77, (System_String_o *)servantListViewManager, 0);
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
      v71 = v91;
      goto LABEL_182;
  }
}


void WarehouseListMenu__StatusRequest(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  int32_t tabKind; // w8
  System_Int64_array *v16; // x1
  System_Int64_array *v17; // x2
  bool v18; // w4
  bool v19; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *v28; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4E02768 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_1CE6700(&Method_WarehouseListMenu_EndStatusSync__);
    byte_4E02768 = 1;
  }
  unlockList = 0;
  lockList = 0;
  v28 = 0;
  choiceList = 0;
  modeKind = v5->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantListViewManager = v5->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v28, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&v5->fields.requedstCallback,
        (int32_t)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v27, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v27,
                                      (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v17 = v28;
        v16 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_1CE6958(this, callback);
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
      sub_1CE66A4(
        (GrandQuestFolderBoardItem_o *)&v5->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v14,
                                      (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v17 = unlockList;
        v16 = lockList;
        v18 = 1;
        v19 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v16,
          v17,
          (tabKind & 0xFFFFFFFE) == 2,
          v18,
          v19,
          0);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void WarehouseListMenu__add_callbackFunc(
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

  if ( (byte_4E0275A & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_4E0275A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v7->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
  WarehouseListMenu__remove_callbackFunc(v10, v11, v12);
}


void WarehouseListMenu__remove_callbackFunc(
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

  if ( (byte_4E0275B & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_4E0275B = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v7->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1CE6CF4(v7);
  WarehouseListMenu__GetMode(v10, v11);
}


void WarehouseListMenu_CallbackFunc___ctor(
        WarehouseListMenu_CallbackFunc_o *this,
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
  sub_1CE66A4(
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
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B15DAC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B15D64;
}


System_IAsyncResult_o *WarehouseListMenu_CallbackFunc__BeginInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4E0277A & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListMenu_ResultKind_TypeInfo);
    byte_4E0277A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void WarehouseListMenu_CallbackFunc__Invoke(
        WarehouseListMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void WarehouseListMenu_RequestCallbackFunc___ctor(
        WarehouseListMenu_RequestCallbackFunc_o *this,
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
  sub_1CE66A4(
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
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B15E10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B15DC8;
}


System_IAsyncResult_o *WarehouseListMenu_RequestCallbackFunc__BeginInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4E0277B & 1) == 0 )
  {
    sub_1CE6700(&bool_TypeInfo);
    byte_4E0277B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
}


void WarehouseListMenu_RequestCallbackFunc__Invoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void WarehouseListMenu___c__DisplayClass81_0___ctor(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__0(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4E0277C & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__);
    sub_1CE6700(&Method_WarehouseListMenu_OnSelectServant__);
    byte_4E0277C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31920128(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_1CE6958(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v17 = (WarehouseListManager_CallbackFunc_o *)sub_1CE694C(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v18);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v17;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  WarehouseListManager__SetMode_39472972(servantListViewManager, 2, v25);
}


void WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1CE6958(this, method);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}