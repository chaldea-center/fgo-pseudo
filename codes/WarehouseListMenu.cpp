void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4AFFE72 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_407/*"#4C4C4C"*/, v4);
    byte_4AFFE72 = 1;
  }
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_407/*"#4C4C4C"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)WarehouseListMenu_TypeInfo->static_fields, StringLiteral_407/*"#4C4C4C"*/, v2, v3);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFFE71 & 1) == 0 )
  {
    sub_1BC3008(&BaseMenu_TypeInfo, method);
    byte_4AFFE71 = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, n, method);
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
    sub_1BC3264(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_37459292(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_37459292(
        WarehouseListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v9; // x5
  System_Action_o *v10; // x20

  if ( (byte_4AFFE56 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_WarehouseListMenu_EndClose__, v6);
    byte_4AFFE56 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v9);
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
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
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4AFFE70 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, result);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v4);
    byte_4AFFE70 = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v6 = v3->fields.servantListViewManager,
        v7 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v8),
        !v6) )
  {
    sub_1BC3264(this, result);
  }
  v6->fields.callbackFunc = v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
  WarehouseListManager__SetMode_37446744(v6, 2, v11);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1BC3264(this, isRequest);
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
          WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1BC3264(this, isRequest);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_11:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 2, method);
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
      sub_1BC3264(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_37446744(baseListViewManager, 3, v13);
  }
LABEL_11:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_37446744(baseListViewManager, 2, v7);
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
      sub_1BC3264(this, isRequest);
    }
    WarehouseListManager__SetMode_37446744((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void __fastcall WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  WarehouseListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFE69 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4AFFE69 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_1BC3264(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  WarehouseListManager__SetMode_37446744(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  int32_t v10; // w1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3

  if ( (byte_4AFFE66 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndNotificationMove__, v3);
    byte_4AFFE66 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v6);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v12);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v11);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v10 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v13);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_1BC3264(v7, v8);
      v10 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v10, v5, 0, 0, v9);
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
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFE68 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4AFFE68 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_1BC3264(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  WarehouseListManager__SetMode_37446744(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFE6D & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4AFFE6D = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_1BC3264(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  WarehouseListManager__SetMode_37446744(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4AFFE6B & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v3);
    byte_4AFFE6B = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_1BC3264(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  WarehouseListManager__SetMode_37446744(servantListViewManager, 2, v11);
}


void __fastcall WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19
  CGThumbnailListItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, v2, v3);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4AFFE63 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v6);
    sub_1BC3008(&Method_WarehouseListMenu_EndConfirmRequestLock__, v7);
    byte_4AFFE63 = 1;
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
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
    v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_1BC3264(v13, v14);
    WarehouseConfirmMenu__Close_37435624(warehouseConfirmMenu, v12, v15);
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
  __int64 v11; // x1
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_4AFFE64 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest);
    sub_1BC3008(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v4);
    sub_1BC3008(&NetworkManager_TypeInfo, v5);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BC3008(&Method_WarehouseListMenu_EndRequestWarehouse__, v7);
    byte_4AFFE64 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v12,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(Request_object, v11);
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

  if ( (byte_4AFFE67 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v4);
    byte_4AFFE67 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1BC3264(v7, v8);
  WarehouseConfirmMenu__Close_37435624(warehouseConfirmMenu, v6, v9);
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

  if ( (byte_4AFFE65 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, result);
    sub_1BC3008(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5);
    byte_4AFFE65 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1BC3264(v10, v11);
  WarehouseConfirmMenu__Close_37435624(warehouseConfirmMenu, v9, v12);
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
  System_Action_o *v9; // x21

  v4 = this;
  if ( (byte_4AFFE6C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v6);
    byte_4AFFE6C = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_1BC3264(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
  Il2CppObject *Instance; // x21
  System_Action_o *v14; // x0
  bool v15; // cc
  System_Action_o *v16; // x20
  __int64 *v17; // x8

  v8 = this;
  if ( (byte_4AFFE6A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v10);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_EndCloseServantStatus__, v11);
    byte_4AFFE6A = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  v15 = questId < 1;
  v16 = v14;
  if ( v15 )
    v17 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v17 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v14, (Il2CppObject *)v8, *v17, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1BC3264(this, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
}


void __fastcall WarehouseListMenu__EndStatusSync(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  CGThumbnailListItem_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (CGThumbnailListItem_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1BC2FAC(p_requedstCallback, 0, (int32_t)method, v3);
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
    sub_1BC3264(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1BC3264(0LL, method);
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
    sub_1BC3264(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum[0] > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4AFFE58 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickCancel__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickCancel__, v4);
    byte_4AFFE58 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v7, v8);
    }
    else
    {
      v10 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        v11);
      WarehouseListMenu__StatusRequest(this, v10, v12);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4AFFE6E & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_ChangeIconScale__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickScaleChage__, v4);
    byte_4AFFE6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickScaleChage__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      v8);
    WarehouseListMenu__StatusRequest(this, v7, v9);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4AFFE5F & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabChoice__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickTabChoice__, v4);
    byte_4AFFE5F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v10);
        WarehouseListMenu__StatusRequest(this, v9, v11);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1BC3264(0LL, v12);
        WarehouseListManager__ReleaseAll(servantListViewManager, v12);
        return;
      }
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        v14);
      WarehouseListMenu__StatusRequest(this, v13, v15);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v7);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4AFFE5E & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabLock__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickTabLock__, v4);
    byte_4AFFE5E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v10);
        WarehouseListMenu__StatusRequest(this, v9, v11);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1BC3264(0LL, v12);
        WarehouseListManager__ReleaseAll(servantListViewManager, v12);
        return;
      }
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        v14);
      WarehouseListMenu__StatusRequest(this, v13, v15);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v7);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4AFFE60 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabPush__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickTabPush__, v4);
    byte_4AFFE60 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v5 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabPush__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v8);
    WarehouseListMenu__StatusRequest(this, v7, v9);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1BC3264(0LL, v10);
    WarehouseListManager__ReleaseAll(servantListViewManager, v10);
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
  const MethodInfo *v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4AFFE5B & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabPutIn__, v3);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_OnClickTabPutIn__, v4);
    byte_4AFFE5B = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BC3264(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabPutIn__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v8);
    }
    else
    {
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        v10);
      WarehouseListMenu__StatusRequest(v2, v9, v11);
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
  const MethodInfo *v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4AFFE5C & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabPutOut__, v3);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_OnClickTabPutOut__, v4);
    byte_4AFFE5C = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BC3264(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabPutOut__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v8);
    }
    else
    {
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        v10);
      WarehouseListMenu__StatusRequest(v2, v9, v11);
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
  const MethodInfo *v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4AFFE59 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabServant__, v3);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_OnClickTabServant__, v4);
    byte_4AFFE59 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BC3264(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabServant__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v8);
    }
    else
    {
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServant__,
        v10);
      WarehouseListMenu__StatusRequest(v2, v9, v11);
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
  const MethodInfo *v8; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  v2 = this;
  if ( (byte_4AFFE5A & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabServantEquip__, v3);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_OnClickTabServantEquip__, v4);
    byte_4AFFE5A = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BC3264(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v6 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v8);
    }
    else
    {
      v9 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)v2,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        v10);
      WarehouseListMenu__StatusRequest(v2, v9, v11);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WarehouseListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4AFFE5D & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_WarehouseListMenu_EndClickTabStatus__, v3);
    sub_1BC3008(&Method_WarehouseListMenu_OnClickTabStatus__, v4);
    byte_4AFFE5D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BC3254(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      v8);
    WarehouseListMenu__StatusRequest(this, v7, v9);
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
  __int64 baseListViewManager; // x0
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x3
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  struct WarehouseListManager_o *v46; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v48; // x21
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x5
  struct WarehouseListManager_o *v51; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v55; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  __int64 v60; // x2
  int32_t tabKind; // w8
  Il2CppObject *v62; // x0
  int64_t selectNum; // x20
  Il2CppObject *v64; // x21
  ServantStatusDialog_ResultDelegate_o *v65; // x22
  CommonUI_o *v66; // x0
  int32_t v67; // w1
  struct WarehouseConfirmMenu_o *v68; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v69; // x21
  const MethodInfo *v70; // x3
  WarehouseConfirmMenu_o *v71; // x0
  WarehouseListViewItem_o **v72; // x21
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  const MethodInfo *v75; // x2
  int64_t v76; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v78; // q1
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  struct WarehouseListManager_o *v81; // x20
  WarehouseListManager_CallbackFunc_o *v82; // x21
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x2
  Il2CppObject *v87; // x0
  int64_t v88; // x20
  Il2CppObject *v89; // x21
  ServantStatusDialog_EndDelegate_o *v90; // x22
  CommonUI_o *v91; // x0
  int32_t v92; // w1
  Il2CppObject *v93; // x0
  Il2CppObject *v94; // x21
  Il2CppObject *v95; // x0
  Il2CppObject *v96; // x21
  struct WarehouseConfirmMenu_o *v97; // x20
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v101; // x2
  int32_t v102; // w3
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v104; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  Il2CppObject *v107; // x25
  UserServantEntity_o *v108; // x8
  int32_t v109; // w27
  int32_t v110; // w26
  System_String_o *v111; // x19
  System_String_o *v112; // x22
  System_Object_array *v113; // x23
  const MethodInfo *v114; // x3
  Il2CppObject *v115; // x27
  const MethodInfo *v116; // x3
  Il2CppObject *v117; // x27
  int32_t v118; // w0
  const MethodInfo *v119; // x3
  Il2CppObject *v120; // x24
  const MethodInfo *v121; // x3
  Il2CppObject *v122; // x24
  const MethodInfo *v123; // x3
  Il2CppObject *v124; // x24
  WarehouseListViewItem_o *v125; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v126; // x9
  ServantEntity_o *servantEntity; // x21
  const MethodInfo *v128; // x3
  Il2CppObject *v129; // x21
  System_String_o *v130; // x21
  System_String_o *v131; // x22
  System_String_o *v132; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v134; // x25
  const MethodInfo *v135; // x3
  struct WarehouseListManager_o *v136; // x8
  const MethodInfo *v137; // x3
  struct WarehouseListManager_o *v138; // x8
  const MethodInfo *v139; // x3
  struct WarehouseListManager_o *v140; // x8
  __int64 v141; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_4AFFE62 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, v9);
    sub_1BC3008(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v10);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v15);
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, v16);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&object___TypeInfo, v18);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1BC3008(&Rarity_TypeInfo, v21);
    sub_1BC3008(&ServantStatusDialog_ResultDelegate_TypeInfo, v22);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BC3008(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v25);
    sub_1BC3008(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v26);
    sub_1BC3008(&Method_WarehouseListMenu_EndConfirmMove__, v27);
    sub_1BC3008(&Method_WarehouseListMenu_EndServantEquipStatus__, v28);
    sub_1BC3008(&Method_WarehouseListMenu_EndServantStatus__, v29);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v30);
    sub_1BC3008(&StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v31);
    sub_1BC3008(&StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v32);
    sub_1BC3008(&StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v33);
    sub_1BC3008(&StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v34);
    byte_4AFFE62 = 1;
  }
  v35 = sub_1BC3254(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_121;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 16), (int32_t)this, v38, v39);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectNumList, (int32_t)list, v40, v41);
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
        goto LABEL_121;
      baseListViewManager = (__int64)servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_121;
      Item = WarehouseListViewManager__GetItem((WarehouseListViewManager_o *)baseListViewManager, n, v42);
    }
    *(_QWORD *)(v35 + 24) = Item;
    v72 = (WarehouseListViewItem_o **)(v35 + 24);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v35 + 24), (int32_t)Item, (int32_t)v42, v43);
    if ( !*(_QWORD *)(v35 + 24) || !(*v72)->fields.isEnabled )
    {
      v79 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnSelectServant__);
      v80 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v79, v79[4]);
      OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0, 0LL);
      this->fields.state = 2;
      v81 = this->fields.servantListViewManager;
      v82 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v82,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v83);
      if ( v81 )
      {
        v81->fields.callbackFunc = v82;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v81->fields.callbackFunc, (int32_t)v82, v84, v85);
        WarehouseListManager__SetMode_37446744(v81, 2, v86);
        return;
      }
      goto LABEL_121;
    }
    v73 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v73 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnSelectServant__);
    v74 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v73, v73[4]);
    OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0, 0LL);
    baseListViewManager = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseListViewManager )
      goto LABEL_121;
    v76 = *(_QWORD *)(baseListViewManager + 128);
    if ( !v76 )
      goto LABEL_44;
    if ( !*v72 )
      goto LABEL_121;
    userServantEntity = (*v72)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_121;
    v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v143.fields.fakeValue = v78;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v142 = v143;
    if ( v76 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v142, 0LL) )
    {
LABEL_44:
      WarehouseListMenu__PushRequest(this, *v72, v75);
      return;
    }
    baseListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_121;
    baseListViewManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseListViewManager,
                                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_121;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
               v76,
               (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_121;
    baseListViewManager = (__int64)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseListViewManager,
                                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_121;
    v104 = (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v144.fields.currentCryptoKey = klass;
    *(_QWORD *)&v144.fields.fakeValue = monitor;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v144, 0LL);
    if ( !v104 )
      goto LABEL_121;
    v107 = DataMasterBase_object__object__int___GetEntity(
             v104,
             baseListViewManager,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)Entity, 0LL, 0LL);
    if ( !baseListViewManager )
      goto LABEL_121;
    if ( !*v72 )
      goto LABEL_121;
    v108 = (*v72)->fields.userServantEntity;
    if ( !v108 )
      goto LABEL_121;
    v109 = *(_DWORD *)(baseListViewManager + 24);
    baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v108, 0LL, 0LL);
    if ( !baseListViewManager )
      goto LABEL_121;
    v110 = *(_DWORD *)(baseListViewManager + 24);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v111 = LocalizationManager__Get((System_String_o *)StringLiteral_11834/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v112 = LocalizationManager__Get((System_String_o *)StringLiteral_11833/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v113 = (System_Object_array *)sub_1BC30B0(object___TypeInfo, 6LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (__int64)Rarity__getRarityType(v109, 0LL);
    if ( !v113 )
LABEL_121:
      sub_1BC3264(baseListViewManager, v37);
    v115 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_123;
    }
    if ( !v113->max_length )
      goto LABEL_122;
    v113->m_Items[0] = v115;
    sub_1BC2FAC((CGThumbnailListItem_o *)v113->m_Items, (int32_t)v115, v60, v114);
    if ( !v107 )
      goto LABEL_121;
    baseListViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)v107, 0LL);
    v117 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_123;
    }
    if ( v113->max_length <= 1 )
      goto LABEL_122;
    v113->m_Items[1] = v117;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v113->m_Items[1], (int32_t)v117, v60, v116);
    v118 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
             0LL);
    baseListViewManager = (__int64)ServantEntity__getName((ServantEntity_o *)v107, v118, -1, 1, 0LL);
    v120 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_123;
    }
    if ( v113->max_length <= 2 )
      goto LABEL_122;
    v113->m_Items[2] = v120;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v113->m_Items[2], (int32_t)v120, v60, v119);
    baseListViewManager = (__int64)Rarity__getRarityType(v110, 0LL);
    v122 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_123;
    }
    if ( v113->max_length <= 3 )
      goto LABEL_122;
    v113->m_Items[3] = v122;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v113->m_Items[3], (int32_t)v122, v60, v121);
    if ( !*v72 )
      goto LABEL_121;
    baseListViewManager = (__int64)(*v72)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_121;
    baseListViewManager = (__int64)ServantEntity__getClassName((ServantEntity_o *)baseListViewManager, 0LL);
    v124 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_123;
    }
    if ( v113->max_length <= 4 )
      goto LABEL_122;
    v113->m_Items[4] = v124;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v113->m_Items[4], (int32_t)v124, v60, v123);
    v125 = *v72;
    if ( !*v72 )
      goto LABEL_121;
    v126 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v125->fields.userServantEntity;
    if ( !v126 )
      goto LABEL_121;
    servantEntity = v125->fields.servantEntity;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v126[6], 0LL);
    if ( !servantEntity )
      goto LABEL_121;
    baseListViewManager = (__int64)ServantEntity__getName(servantEntity, baseListViewManager, -1, 1, 0LL);
    v129 = (Il2CppObject *)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BC3144(baseListViewManager, v113->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_123:
        v141 = sub_1BC3288();
        sub_1BC3130(v141, 0LL);
      }
    }
    if ( v113->max_length > 5 )
    {
      v113->m_Items[5] = v129;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v113->m_Items[5], (int32_t)v129, v60, v128);
      v130 = System_String__Format_62390076(v112, v113, 0LL);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_11832/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11831/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v134 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v134,
        (Il2CppObject *)v35,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      baseListViewManager = (__int64)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        baseListViewManager = (__int64)BalanceConfig_TypeInfo;
      }
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30731096(
          (CommonUI_o *)Instance,
          v111,
          v130,
          v131,
          v132,
          v134,
          *(_DWORD *)(*(_QWORD *)(baseListViewManager + 184) + 512LL),
          *(_DWORD *)(*(_QWORD *)(baseListViewManager + 184) + 524LL),
          15.0,
          700,
          0,
          480,
          -162.5,
          0,
          0,
          240,
          0,
          0LL);
        return;
      }
      goto LABEL_121;
    }
LABEL_122:
    sub_1BC326C(baseListViewManager, v37, v60);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v42, v43);
      return;
    }
    v44 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnSelectServant__);
    v45 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0LL);
    v46 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v46 )
    {
      if ( v46->fields.totalSum > v46->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v37) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v48 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v48,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v49);
            v51 = this->fields.servantListViewManager;
            if ( !v51 || !warehouseConfirmMenu )
              goto LABEL_121;
            sendKeep = v51->fields.sendKeep;
            sendSum = v51->fields.sendSum;
            totalSum = v51->fields.totalSum;
            v55 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v48 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v48,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v135);
            v136 = this->fields.servantListViewManager;
            if ( !v136 || !warehouseConfirmMenu )
              goto LABEL_121;
            sendKeep = v136->fields.sendKeep;
            sendSum = v136->fields.sendSum;
            totalSum = v136->fields.totalSum;
            v55 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v48 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v48,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v137);
            v138 = this->fields.servantListViewManager;
            if ( !v138 || !warehouseConfirmMenu )
              goto LABEL_121;
            sendKeep = v138->fields.sendKeep;
            sendSum = v138->fields.sendSum;
            totalSum = v138->fields.totalSum;
            v55 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v48 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v48,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v139);
            v140 = this->fields.servantListViewManager;
            if ( !v140 || !warehouseConfirmMenu )
              goto LABEL_121;
            sendKeep = v140->fields.sendKeep;
            sendSum = v140->fields.sendSum;
            totalSum = v140->fields.totalSum;
            v55 = 11;
            break;
          default:
            return;
        }
        v102 = totalSum + sendSum;
        v71 = warehouseConfirmMenu;
        v101 = v48;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v68 = this->fields.warehouseConfirmMenu;
            v69 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v69,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v70);
            if ( !v68 )
              goto LABEL_121;
            v71 = v68;
            v55 = 0;
            goto LABEL_64;
          case 1:
            v97 = this->fields.warehouseConfirmMenu;
            v69 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v69,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v98);
            if ( !v97 )
              goto LABEL_121;
            v55 = 1;
            goto LABEL_63;
          case 2:
            v97 = this->fields.warehouseConfirmMenu;
            v69 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v69,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v99);
            if ( !v97 )
              goto LABEL_121;
            v55 = 2;
            goto LABEL_63;
          case 3:
            v97 = this->fields.warehouseConfirmMenu;
            v69 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BC3254(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v69,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v100);
            if ( !v97 )
              goto LABEL_121;
            v55 = 3;
LABEL_63:
            v71 = v97;
LABEL_64:
            v101 = v69;
            v102 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v71, v55, v101, v102, sendKeep, v50);
      return;
    }
    goto LABEL_121;
  }
  v58 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v58 = (_QWORD *)sub_1BC3020(Method_WarehouseListMenu_OnSelectServant__);
  v59 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v58, v58[4]);
  OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0LL);
  this->fields.state = 7;
  if ( !list )
    goto LABEL_121;
  if ( !list->max_length )
    goto LABEL_122;
  tabKind = this->fields.tabKind;
  this->fields.selectNum = list->m_Items[0];
  switch ( tabKind )
  {
    case 0:
      v62 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v64 = v62;
      v65 = (ServantStatusDialog_ResultDelegate_o *)sub_1BC3254(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v65,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v64 )
        goto LABEL_121;
      v66 = (CommonUI_o *)v64;
      v67 = 0;
      goto LABEL_53;
    case 1:
      v87 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v88 = this->fields.selectNum;
      v89 = v87;
      v90 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v90,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v89 )
        goto LABEL_121;
      v91 = (CommonUI_o *)v89;
      v92 = 0;
      goto LABEL_56;
    case 2:
      v93 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v94 = v93;
      v65 = (ServantStatusDialog_ResultDelegate_o *)sub_1BC3254(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v65,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v94 )
        goto LABEL_121;
      v67 = 3;
      v66 = (CommonUI_o *)v94;
LABEL_53:
      CommonUI__OpenServantStatusDialog_30741160(v66, v67, selectNum, v65, 0LL, 0LL);
      break;
    case 3:
      v95 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v88 = this->fields.selectNum;
      v96 = v95;
      v90 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v90,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v96 )
        goto LABEL_121;
      v92 = 3;
      v91 = (CommonUI_o *)v96;
LABEL_56:
      CommonUI__OpenServantStatusDialog_30740232(v91, v92, v88, v90, 0LL, 0LL);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v23; // x5
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x5
  System_Action_o *v27; // x20
  unsigned __int128 v28; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4AFFE55 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_WarehouseListMenu_EndOpen__, v9);
    sub_1BC3008(&WarehouseListMenu_TypeInfo, v10);
    byte_4AFFE55 = 1;
  }
  v11 = WarehouseListMenu_TypeInfo;
  v28 = 0uLL;
  if ( !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v11 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v11->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v28,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_12;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v28;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
    this->fields.setupInfo = setupinfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v18, v19);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v20);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v23);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v14, v15);
    this->fields.setupInfo = setupinfo;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupinfo, v24, v25);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v26);
      this->fields.state = 1;
      v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(gameObject, v13);
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
  DataManager_o *v15; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q0
  struct System_Threading_Thread_o *writeMasterDataThread; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v25; // x0
  __int128 v26; // q1
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  Il2CppObject *Request_object; // x0
  __int128 v29; // q1
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w26
  int32_t v32; // w27
  int32_t v33; // w28
  int32_t v34; // w29
  bool IsLock; // w21
  char v36; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v40; // w0
  __int64 v41; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_SynchronizationContext_o *context; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  struct System_Threading_Thread_o *v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4AFFE6F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem);
    sub_1BC3008(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v12);
    byte_4AFFE6F = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v15 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !userServantEntity )
    goto LABEL_18;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v53, 0LL);
  if ( !v17 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = writeMasterDataThread;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
  v26 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v15->fields.context;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v49, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v36 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v41 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v40;
  *(_QWORD *)&v54.fields.currentCryptoKey = v41;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v54, 0LL);
  if ( !v30 )
LABEL_18:
    sub_1BC3264(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    imageLimitCount,
    v31,
    v32,
    v33,
    v34,
    context == (struct System_Threading_SynchronizationContext_o *)v45,
    IsLock,
    v36 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != (struct System_Threading_Thread_o *)v47,
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
  long double inited; // q0
  float *klass; // x8
  float v47; // s12
  float v48; // s13
  float v49; // s14
  float v50; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v52; // x9
  float v53; // s10
  float v54; // s11
  float v55; // s8
  float v56; // s9
  unsigned int v57; // w26
  __int64 *v58; // x8
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0
  System_String_o **v63; // x8
  bool v64; // w28
  UICommonButton_o *v65; // x25
  bool enabled; // w0
  __int64 *v67; // x8
  __int64 *v68; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v70; // w0
  unsigned int v71; // w29
  System_String_o **v72; // x8
  System_String_o **v73; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v75; // w0
  System_String_o **v76; // x8
  System_String_o **v77; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v79; // w0
  System_String_o **v80; // x8
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x3
  struct WarehouseListManager_o *v83; // x8
  WarehouseListManager_c *v84; // x8
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v86; // w1
  struct WarehouseListManager_o *v87; // x8
  struct WarehouseListManager_o *v88; // x8
  const MethodInfo *v89; // x3
  __int64 *v90; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v92; // w0
  __int64 *v93; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v95; // w0
  __int64 *v96; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v98; // w0
  __int64 *v99; // x8
  UICommonButton_o *pushTabButton; // x24
  WarehouseListManager_c *v101; // x8
  bool v102; // w0
  bool v103; // w20
  UILabel_o *explanationLabel; // x23
  __int64 *v105; // x8
  UILabel_o *v106; // x23
  int v107; // w8
  UILabel_o *v108; // x23
  UILabel_o *v109; // x23
  struct WarehouseListManager_o *v110; // x21
  WarehouseListManager_CallbackFunc_o *v111; // x22
  const MethodInfo *v112; // x3
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w1
  struct WarehouseListManager_o *v116; // x8
  struct WarehouseListManager_o *v117; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v119; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AFFE57 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v15);
    sub_1BC3008(&StringLiteral_17402/*"btn_txt_craftessence_off"*/, v16);
    sub_1BC3008(&StringLiteral_17442/*"btn_txt_servant_off"*/, v17);
    sub_1BC3008(&StringLiteral_20429/*"img_txt_cardspace"*/, v18);
    sub_1BC3008(&StringLiteral_17496/*"button_push_reg"*/, v19);
    sub_1BC3008(&StringLiteral_17497/*"button_push_unreg"*/, v20);
    sub_1BC3008(&StringLiteral_17482/*"button_allchoice_reg"*/, v21);
    sub_1BC3008(&StringLiteral_17293/*"btn_bg_12"*/, v22);
    sub_1BC3008(&StringLiteral_17485/*"button_alllock_unreg"*/, v23);
    sub_1BC3008(&StringLiteral_17443/*"btn_txt_servant_on"*/, v24);
    sub_1BC3008(&StringLiteral_17498/*"button_select_reg"*/, v25);
    sub_1BC3008(&StringLiteral_17295/*"btn_bg_19"*/, v26);
    sub_1BC3008(&StringLiteral_17397/*"btn_txt_cardtoarchive_on"*/, v27);
    sub_1BC3008(&StringLiteral_15315/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v28);
    sub_1BC3008(&StringLiteral_15313/*"WAREHOUSE_EXPLANATION_LOCK"*/, v29);
    sub_1BC3008(&StringLiteral_17299/*"btn_bg_25"*/, v30);
    sub_1BC3008(&StringLiteral_17396/*"btn_txt_cardtoarchive_off"*/, v31);
    sub_1BC3008(&StringLiteral_17403/*"btn_txt_craftessence_on"*/, v32);
    sub_1BC3008(&StringLiteral_15316/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v33);
    sub_1BC3008(&StringLiteral_15314/*"WAREHOUSE_EXPLANATION_PUSH"*/, v34);
    sub_1BC3008(&StringLiteral_17385/*"btn_txt_archivetocard_on"*/, v35);
    sub_1BC3008(&StringLiteral_20420/*"img_txt_archivespace"*/, v36);
    sub_1BC3008(&StringLiteral_17384/*"btn_txt_archivetocard_off"*/, v37);
    sub_1BC3008(&StringLiteral_15312/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v38);
    sub_1BC3008(&StringLiteral_17499/*"button_select_unreg"*/, v39);
    sub_1BC3008(&StringLiteral_17484/*"button_alllock_reg"*/, v40);
    sub_1BC3008(&StringLiteral_17298/*"btn_bg_24"*/, v41);
    sub_1BC3008(&StringLiteral_17483/*"button_allchoice_unreg"*/, v42);
    byte_4AFFE57 = 1;
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
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFC909 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
    byte_4AFC909 = 1;
  }
  servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  klass = (float *)servantListViewManager[1].klass;
  v47 = klass[20];
  v48 = klass[21];
  v49 = klass[22];
  v50 = klass[23];
  if ( !byte_4AFC90A )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
    byte_4AFC90A = 1;
  }
  if ( !LODWORD(servantListViewManager[1].fields.servantTabLabel) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_196;
  v52 = (float *)servantListViewManager[1].klass;
  v54 = v52[24];
  v53 = v52[25];
  v56 = v52[26];
  v55 = v52[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    inited);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v57 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFD) != 0,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v58 = &StringLiteral_17443/*"btn_txt_servant_on"*/;
  if ( v57 )
    v58 = &StringLiteral_17442/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v58, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabLabel;
  v59 = v55;
  v60 = v56;
  v61 = v53;
  v62 = v54;
  if ( v57 )
  {
    v59 = v50;
    v60 = v49;
    v61 = v48;
    v62 = v47;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)&v62, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v119 = isModify;
  v63 = (System_String_o **)(v57 ? &StringLiteral_17293/*"btn_bg_12"*/ : &StringLiteral_17295/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v63, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v64 = !v43;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v43,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  v65 = this->fields.servantTabButton;
  if ( !v65 )
    goto LABEL_196;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v65, enabled, !v43, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v57 == 0, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v67 = &StringLiteral_17402/*"btn_txt_craftessence_off"*/;
  if ( v57 )
    v67 = &StringLiteral_17403/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v67, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  if ( v57 )
    v68 = &StringLiteral_17295/*"btn_bg_19"*/;
  else
    v68 = &StringLiteral_17293/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v68, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabLabel;
  if ( !v57 )
  {
    v55 = v50;
    v56 = v49;
    v53 = v48;
    v54 = v47;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  v120.fields.r = v54;
  v120.fields.g = v53;
  v120.fields.b = v56;
  v120.fields.a = v55;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v120, 0LL);
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
  v70 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v70, v64, 0LL);
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
  v71 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFE) == 2,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v72 = (System_String_o **)&StringLiteral_17396/*"btn_txt_cardtoarchive_off"*/;
  if ( v71 != 2 )
    v72 = (System_String_o **)&StringLiteral_17397/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v72, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v73 = (System_String_o **)(v71 == 2 ? &StringLiteral_17298/*"btn_bg_24"*/ : &StringLiteral_17299/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v73, 0LL);
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
  v75 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v75, v64, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v71 != 2, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v76 = (System_String_o **)&StringLiteral_17385/*"btn_txt_archivetocard_on"*/;
  if ( v71 != 2 )
    v76 = (System_String_o **)&StringLiteral_17384/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v76, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v77 = (System_String_o **)(v71 == 2 ? &StringLiteral_17299/*"btn_bg_25"*/ : &StringLiteral_17298/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v77, 0LL);
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
  v79 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v79, v64, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v80 = (System_String_o **)&StringLiteral_20429/*"img_txt_cardspace"*/;
  if ( v71 != 2 )
    v80 = (System_String_o **)&StringLiteral_20420/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v80, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( !v43 && !this->fields.tabKind )
        goto LABEL_76;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 0, this->fields.setupInfo, v82);
LABEL_76:
      v83 = this->fields.servantListViewManager;
      if ( !v83 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v83->fields.filterButton;
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
      v84 = servantListViewManager->klass;
      goto LABEL_113;
    case 1:
      if ( !v43 && this->fields.tabKind == 1 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v86 = 1;
      goto LABEL_103;
    case 2:
      if ( !v43 && this->fields.tabKind == 2 )
        goto LABEL_92;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 2, this->fields.setupInfo, v82);
LABEL_92:
      v87 = this->fields.servantListViewManager;
      if ( !v87 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v87->fields.filterButton;
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
        v84 = servantListViewManager->klass;
LABEL_113:
        ((void (*)(void))v84[1]._1.implementedInterfaces)();
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
      v90 = &StringLiteral_17498/*"button_select_reg"*/;
      if ( modeKind )
        v90 = &StringLiteral_17499/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v90, 0LL);
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
      v92 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v92, v64, 0LL);
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
      v93 = &StringLiteral_17484/*"button_alllock_reg"*/;
      if ( modeKind != 1 )
        v93 = &StringLiteral_17485/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v93, 0LL);
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
      v95 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v95, v64, 0LL);
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
      v96 = &StringLiteral_17482/*"button_allchoice_reg"*/;
      if ( modeKind != 2 )
        v96 = &StringLiteral_17483/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v96, 0LL);
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
      v98 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v98, v64, 0LL);
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
        modeKind != 3 && v71 != 2,
        0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v99 = &StringLiteral_17496/*"button_push_reg"*/;
      if ( modeKind != 3 )
        v99 = &StringLiteral_17497/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v99, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_196;
      if ( v71 == 2 )
      {
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v64, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v101 = servantListViewManager->klass;
      }
      else
      {
        v102 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v102, v64, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v101 = servantListViewManager->klass;
      }
      ((void (*)(void))v101[1]._1.implementedInterfaces)();
      break;
    case 3:
      if ( !v43 && this->fields.tabKind == 3 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v86 = 3;
LABEL_103:
      WarehouseListManager__CreateList(servantListViewManager, v86, setupInfo, v82);
LABEL_104:
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
      modeKind = WarehouseListMenu__HidePushButton(this, modeKind, 0, v89);
LABEL_107:
      if ( !v43 )
        goto LABEL_114;
      goto LABEL_115;
    default:
      goto LABEL_107;
  }
  v103 = v119;
  switch ( modeKind )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v105 = &StringLiteral_15315/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( v71 != 2 )
          goto LABEL_179;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v105 = &StringLiteral_15316/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get((System_String_o *)*v105, 0LL);
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
          v81);
        v110 = this->fields.servantListViewManager;
        v111 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v111,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v112);
        if ( !v110 )
          goto LABEL_196;
        v110->fields.callbackFunc = v111;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v110->fields.callbackFunc, (int32_t)v111, v113, v114);
        v115 = 2;
        servantListViewManager = v110;
      }
      else
      {
        v115 = 1;
      }
      WarehouseListManager__SetMode_37446744(servantListViewManager, v115, v81);
      if ( !v43 && v103 )
      {
        v116 = this->fields.servantListViewManager;
        if ( v116 )
        {
          servantListViewManager = (WarehouseListManager_o *)v116->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_192;
          }
        }
LABEL_196:
        sub_1BC3264(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_192:
      v117 = this->fields.servantListViewManager;
      if ( !v117 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v117->fields.baseListViewManager;
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
      v106 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15313/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                           0LL);
      if ( !v106 )
        goto LABEL_196;
      UILabel__set_text(v106, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 1 )
        goto LABEL_182;
      v107 = 1;
      goto LABEL_173;
    case 2:
      v108 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15312/*"WAREHOUSE_EXPLANATION_CHOICE"*/,
                                                           0LL);
      if ( !v108 )
        goto LABEL_196;
      UILabel__set_text(v108, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 2 )
        goto LABEL_182;
      v107 = 2;
      goto LABEL_173;
    case 3:
      v109 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15314/*"WAREHOUSE_EXPLANATION_PUSH"*/,
                                                           0LL);
      if ( !v109 )
        goto LABEL_196;
      UILabel__set_text(v109, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 3 )
        goto LABEL_182;
      v107 = 3;
LABEL_173:
      servantListViewManager->fields.modeKind = v107;
      goto LABEL_182;
    default:
      servantListViewManager = this->fields.servantListViewManager;
      v103 = v119;
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
  const MethodInfo *v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  int32_t tabKind; // w8
  System_Int64_array *v15; // x1
  System_Int64_array *v16; // x2
  bool v17; // w4
  bool v18; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  System_Int64_array *v23; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4AFFE61 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    this = (WarehouseListMenu_o *)sub_1BC3008(&Method_WarehouseListMenu_EndStatusSync__, v8);
    byte_4AFFE61 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v23 = 0LL;
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
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v23, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v20, v21);
      v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v22, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v22,
                                      (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v16 = v23;
        v15 = choiceList;
        v18 = 1;
        v17 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_1BC3264(this, callback);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&v5->fields.requedstCallback, (int32_t)callback, v11, v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v13, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v13,
                                      (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v16 = unlockList;
        v15 = lockList;
        v17 = 1;
        v18 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v15,
          v16,
          (tabKind & 0xFFFFFFFE) == 2,
          v17,
          v18,
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

  if ( (byte_4AFFE53 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_4AFFE53 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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

  if ( (byte_4AFFE54 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_CallbackFunc_TypeInfo, value);
    byte_4AFFE54 = 1;
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
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0BCB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BC70;
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
  if ( (byte_4AFFE73 & 1) == 0 )
  {
    sub_1BC3008(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4AFFE73 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0BD1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0BCD4;
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
  if ( (byte_4AFFE74 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isRequest);
    byte_4AFFE74 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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
  CommonUI_o *v11; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2

  if ( (byte_4AFFE75 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&WarehouseListManager_CallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v7);
    sub_1BC3008(&Method_WarehouseListMenu_OnSelectServant__, v8);
    byte_4AFFE75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
    }
    if ( v11 )
    {
      CommonUI__CloseConfirmDialog_30731324(v11, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(Instance, v10);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v17 = (WarehouseListManager_CallbackFunc_o *)sub_1BC3254(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v18);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&servantListViewManager->fields.callbackFunc, (int32_t)v17, v19, v20);
  WarehouseListManager__SetMode_37446744(servantListViewManager, 2, v21);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BC3264(this, method);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}