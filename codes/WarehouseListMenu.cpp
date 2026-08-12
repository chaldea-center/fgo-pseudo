void WarehouseListMenu___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596E4CB & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_TypeInfo);
    sub_2213A60(&StringLiteral_434/*"#4C4C4C"*/);
    byte_596E4CB = 1;
  }
  v7 = StringLiteral_434/*"#4C4C4C"*/;
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_434/*"#4C4C4C"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)WarehouseListMenu_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E4CA & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596E4CA = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__Callback(WarehouseListMenu_o *this, int32_t result, int32_t n, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x21

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      0,
      *(System_String_o **)&n,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
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
    sub_2213CDC(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0);
}


void WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_45283436(this, 0, v2);
}


void WarehouseListMenu__Close_45283436(WarehouseListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v12; // x5
  System_Action_o *v13; // x20

  if ( (byte_596E4AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClose__);
    byte_596E4AF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v12);
  v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  v3 = this;
  if ( (byte_596E4C9 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4C9 = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v5 = v3->fields.servantListViewManager,
        v6 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v7),
        !v5) )
  {
    sub_2213CDC(this, result);
  }
  v5->fields.callbackFunc = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  WarehouseListManager__SetMode_45270940(v5, 2, v14);
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v6);
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v6);
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v6);
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, (int32_t)&dword_0 + 2, method);
          return;
        }
LABEL_15:
        sub_2213CDC(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 0;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_8;
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
          WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, (int32_t)&dword_0 + 2, method);
          return;
        }
LABEL_15:
        sub_2213CDC(this, isRequest);
      }
      modeKind = this->fields.modeKind;
      v7 = 2;
    }
    WarehouseListMenu__SetTabKind(this, v7, modeKind, 0, 0, v3);
    goto LABEL_8;
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
    goto LABEL_6;
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_6:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, (int32_t)&dword_0 + 2, method);
}


void WarehouseListMenu__EndClickTabServantEquip(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  struct WarehouseListManager_o *baseListViewManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x5
  int32_t tabKind; // w8
  int32_t modeKind; // w2
  WarehouseListMenu_o *v11; // x0
  int32_t v12; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v14; // x2

  EventTutorialMaster__CheckTutorial(-1, 55, 0, 0, 0, 0, 0, 0);
  tabKind = this->fields.tabKind;
  if ( tabKind == 2 )
  {
    modeKind = this->fields.modeKind;
    v11 = this;
    v12 = 3;
    goto LABEL_5;
  }
  if ( !tabKind )
  {
    modeKind = this->fields.modeKind;
    v11 = this;
    v12 = 1;
LABEL_5:
    WarehouseListMenu__SetTabKind(v11, v12, modeKind, 0, 0, v8);
    goto LABEL_6;
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
      sub_2213CDC(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_45270940(baseListViewManager, 3, v14);
  }
LABEL_6:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_45270940(baseListViewManager, 2, v7);
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
      sub_2213CDC(this, isRequest);
    }
    WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  WarehouseListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_CallbackFunc_c *v3; // x0
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596E4C2 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4C2 = 1;
  }
  v3 = WarehouseListManager_CallbackFunc_TypeInfo;
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(v3);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_2213CDC(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_45270940(servantListViewManager, 2, v15);
}


void WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w8
  struct WarehouseConfirmMenu_o *v4; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  WarehouseConfirmMenu_o *v10; // x0
  int32_t v11; // w1
  struct WarehouseConfirmMenu_o *v12; // x20
  const MethodInfo *v13; // x3
  struct WarehouseConfirmMenu_o *v14; // x20
  const MethodInfo *v15; // x3
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  const MethodInfo *v17; // x3

  if ( (byte_596E4BF & 1) == 0 )
  {
    sub_2213A60(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndNotificationMove__);
    byte_596E4BF = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind > 1 )
  {
    if ( tabKind == 2 )
    {
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v17);
      if ( warehouseConfirmMenu )
      {
        v10 = warehouseConfirmMenu;
        v11 = 6;
        goto LABEL_17;
      }
      goto LABEL_18;
    }
    if ( tabKind == 3 )
    {
      v12 = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v13);
      if ( v12 )
      {
        v10 = v12;
        v11 = 7;
        goto LABEL_17;
      }
LABEL_18:
      sub_2213CDC(v7, v8);
    }
  }
  else
  {
    if ( !tabKind )
    {
      v14 = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v15);
      if ( v14 )
      {
        v10 = v14;
        v11 = 4;
        goto LABEL_17;
      }
      goto LABEL_18;
    }
    if ( tabKind == 1 )
    {
      v4 = this->fields.warehouseConfirmMenu;
      v5 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v6);
      if ( v4 )
      {
        v10 = v4;
        v11 = 5;
LABEL_17:
        WarehouseConfirmMenu__Open(v10, v11, v5, 0, 0, v9);
        return;
      }
      goto LABEL_18;
    }
  }
}


void WarehouseListMenu__EndCloseList(WarehouseListMenu_o *this, const MethodInfo *method)
{
  ;
}


void WarehouseListMenu__EndCloseNotificationMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_CallbackFunc_c *v3; // x0
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596E4C1 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4C1 = 1;
  }
  v3 = WarehouseListManager_CallbackFunc_TypeInfo;
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(v3);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_2213CDC(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_45270940(servantListViewManager, 2, v15);
}


void WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_CallbackFunc_c *v3; // x0
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596E4C6 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4C6 = 1;
  }
  v3 = WarehouseListManager_CallbackFunc_TypeInfo;
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(v3);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_2213CDC(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_45270940(servantListViewManager, 2, v15);
}


void WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  WarehouseListManager_CallbackFunc_c *v3; // x0
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596E4C4 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4C4 = 1;
  }
  v3 = WarehouseListManager_CallbackFunc_TypeInfo;
  servantListViewManager = this->fields.servantListViewManager;
  this->fields.state = 2;
  v5 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(v3);
  WarehouseListManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v6);
  if ( !servantListViewManager )
    sub_2213CDC(v7, v8);
  servantListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  WarehouseListManager__SetMode_45270940(servantListViewManager, 2, v15);
}


void WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_596E4BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__);
    sub_2213A60(&Method_WarehouseListMenu_EndConfirmRequestLock__);
    byte_596E4BC = 1;
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
      v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
    v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0);
    if ( !warehouseConfirmMenu )
      sub_2213CDC(v10, v11);
    WarehouseConfirmMenu__Close_45260044(warehouseConfirmMenu, v9, v12);
  }
}


void WarehouseListMenu__EndConfirmRequestLock(WarehouseListMenu_o *this, bool isRequest, const MethodInfo *method)
{
  unsigned int tabKind; // w9
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_596E4BD & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_StorageTakeinRequest___);
    sub_2213A60(&Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndRequestWarehouse__);
    byte_596E4BD = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
    Request_object = NetworkManager__getRequest_object_(
                       v10,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(Request_object, v9);
  }
}


void WarehouseListMenu__EndNotificationMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596E4C0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__);
    byte_596E4C0 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0);
  if ( !warehouseConfirmMenu )
    sub_2213CDC(v6, v7);
  WarehouseConfirmMenu__Close_45260044(warehouseConfirmMenu, v5, v8);
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

  if ( (byte_596E4BE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__);
    byte_596E4BE = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0);
  if ( !warehouseConfirmMenu )
    sub_2213CDC(v9, v10);
  WarehouseConfirmMenu__Close_45260044(warehouseConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseListMenu__EndServantEquipStatus(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21

  v4 = this;
  if ( (byte_596E4C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_EndCloseServantEquipStatus__);
    byte_596E4C5 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0 )
    {
LABEL_9:
      sub_2213CDC(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  if ( (byte_596E4C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_EndCloseServantStatus__);
    byte_596E4C3 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v12 = questId < 1;
  v13 = v11;
  if ( v12 )
    v14 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v14 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v11, (Il2CppObject *)v8, *v14, 0);
  if ( !Instance )
LABEL_14:
    sub_2213CDC(this, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0);
}


void WarehouseListMenu__EndStatusSync(WarehouseListMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    this->fields.requedstCallback = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.requedstCallback,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
    sub_2213CDC(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_2213CDC(0, method);
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
  int32_t tabKind; // w8
  WarehouseListManager_o *servantListViewManager; // x0
  struct WarehouseListManager_o *v6; // x8
  int32_t friendShipSum[2]; // [xsp+8h] [xbp-18h] BYREF

  tabKind = this->fields.tabKind;
  *(_QWORD *)friendShipSum = 0;
  if ( (tabKind | 2) != 3 )
    return 1;
  servantListViewManager = this->fields.servantListViewManager;
  if ( !servantListViewManager
    || (WarehouseListManager__GetSelectItemNum(servantListViewManager, &friendShipSum[1], friendShipSum, v2),
        (v6 = this->fields.servantListViewManager) == 0) )
  {
    sub_2213CDC(servantListViewManager, method);
  }
  return v6->fields.totalSum - friendShipSum[0] > v6->fields.sendMax;
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

  if ( (byte_596E4B1 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickCancel__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickCancel__);
    byte_596E4B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v5, v6);
    }
    else
    {
      v8 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596E4C7 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_ChangeIconScale__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickScaleChage__);
    byte_596E4C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickScaleChage__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596E4B8 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabChoice__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickTabChoice__);
    byte_596E4B8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabChoice__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_2213CDC(0, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596E4B7 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabLock__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickTabLock__);
    byte_596E4B7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v8);
        WarehouseListMenu__StatusRequest(this, v7, v9);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_2213CDC(0, v10);
        WarehouseListManager__ReleaseAll(servantListViewManager, v10);
        return;
      }
      v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596E4B9 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabPush__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickTabPush__);
    byte_596E4B9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v3 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabPush__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v6);
    WarehouseListMenu__StatusRequest(this, v5, v7);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_2213CDC(0, v8);
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
  if ( (byte_596E4B4 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabPutIn__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_OnClickTabPutIn__);
    byte_596E4B4 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_2213CDC(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabPutIn__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_596E4B5 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabPutOut__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_OnClickTabPutOut__);
    byte_596E4B5 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_2213CDC(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabPutOut__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_596E4B2 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabServant__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_OnClickTabServant__);
    byte_596E4B2 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_2213CDC(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
  if ( (byte_596E4B3 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabServantEquip__);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_OnClickTabServantEquip__);
    byte_596E4B3 = 1;
  }
  if ( v2->fields.state == 2 )
  {
    servantListViewManager = v2->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_2213CDC(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v4 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    if ( (unsigned int)(v2->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v2, 0, v6);
    }
    else
    {
      v7 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_596E4B6 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndClickTabStatus__);
    sub_2213A60(&Method_WarehouseListMenu_OnClickTabStatus__);
    byte_596E4B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnClickTabStatus__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_2213CCC(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MethodInfo *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct WarehouseListManager_o *v32; // x8
  int32_t v33; // w8
  struct WarehouseConfirmMenu_o *v34; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v35; // x21
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x5
  struct WarehouseListManager_o *v38; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  WarehouseConfirmMenu_o *v42; // x0
  int32_t v43; // w1
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  int32_t tabKind; // w8
  Il2CppObject *v47; // x21
  int64_t selectNum; // x20
  ServantStatusDialog_EndDelegate_o *v49; // x22
  CommonUI_o *v50; // x0
  int32_t v51; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  int32_t v54; // w8
  struct WarehouseConfirmMenu_o *v55; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v56; // x21
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x21
  WarehouseListViewItem_o **v59; // x21
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  const MethodInfo *v62; // x2
  int64_t v63; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v65; // q1
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  struct WarehouseListManager_o *v68; // x20
  WarehouseListManager_CallbackFunc_o *v69; // x21
  const MethodInfo *v70; // x3
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  const MethodInfo *v77; // x2
  struct WarehouseConfirmMenu_o *v78; // x20
  const MethodInfo *v79; // x3
  Il2CppObject *v80; // x21
  int64_t v81; // x20
  ServantStatusDialog_ResultDelegate_o *v82; // x22
  CommonUI_o *v83; // x0
  int32_t v84; // w1
  Il2CppObject *v85; // x21
  struct WarehouseConfirmMenu_o *v86; // x20
  const MethodInfo *v87; // x3
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  const MethodInfo *v89; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v90; // x2
  int32_t v91; // w3
  struct WarehouseConfirmMenu_o *v92; // x20
  const MethodInfo *v93; // x3
  struct WarehouseListManager_o *v94; // x8
  __int64 v95; // x25
  ServantEntity_o *ServantEntity; // x27
  UserServantEntity_o *v97; // x8
  int32_t v98; // w28
  __int64 v99; // x2
  int32_t v100; // w26
  __int64 v101; // x1
  __int64 v102; // x2
  Il2CppObject *Master_object; // x22
  System_String_o *v104; // x19
  System_String_o *v105; // x23
  __int64 v106; // x1
  __int64 v107; // x2
  System_Object_array *v108; // x24
  __int64 v109; // x28
  System_String_o *ClassName; // x28
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x27
  __int64 v114; // x28
  int32_t v115; // w0
  __int64 v116; // x8
  int32_t v117; // w25
  System_String_o *LimitCountSealedServantName; // x25
  System_String_o *RarityType; // x25
  System_String_o *v120; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v121; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v122; // x8
  int32_t v123; // w21
  int32_t v124; // w0
  System_String_o *v125; // x21
  System_String_o *v126; // x21
  System_String_o *v127; // x22
  System_String_o *v128; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v130; // x25
  __int64 v131; // x2
  struct WarehouseConfirmMenu_o *v132; // x20
  const MethodInfo *v133; // x3
  struct WarehouseListManager_o *v134; // x8
  struct WarehouseConfirmMenu_o *v135; // x20
  const MethodInfo *v136; // x3
  struct WarehouseListManager_o *v137; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v138; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v139; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v141; // 0:x0.16

  if ( (byte_596E4BB & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Rarity_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__);
    sub_2213A60(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndConfirmMove__);
    sub_2213A60(&Method_WarehouseListMenu_EndServantEquipStatus__);
    sub_2213A60(&Method_WarehouseListMenu_EndServantStatus__);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    sub_2213A60(&StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_596E4BB = 1;
  }
  v9 = sub_2213CCC(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_116;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0;
  this->fields.selectNumList = list;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectNumList,
    (int32_t)list,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
        goto LABEL_116;
      baseListViewManager = (__int64)servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_116;
      Item = WarehouseListViewManager__GetItem((WarehouseListViewManager_o *)baseListViewManager, n, v24);
    }
    *(_QWORD *)(v9 + 24) = Item;
    v59 = (WarehouseListViewItem_o **)(v9 + 24);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v9 + 24),
      (int32_t)Item,
      (System_String_o *)v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( !*(_QWORD *)(v9 + 24) || !(*v59)->fields.isEnabled )
    {
      v66 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v66 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnSelectServant__);
      v67 = (System_Reflection_MethodBase_o *)sub_2213A44(v66, v66[4]);
      OverwriteAssetSoundName__PlaySystemSe(v67, 2, 0, 0);
      v68 = this->fields.servantListViewManager;
      this->fields.state = 2;
      v69 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v69,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v70);
      if ( v68 )
      {
        v68->fields.callbackFunc = v69;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v68->fields.callbackFunc,
          (int32_t)v69,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
        WarehouseListManager__SetMode_45270940(v68, 2, v77);
        return;
      }
      goto LABEL_116;
    }
    v60 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v60 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnSelectServant__);
    v61 = (System_Reflection_MethodBase_o *)sub_2213A44(v60, v60[4]);
    OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0);
    baseListViewManager = (__int64)UserGameMaster__getSelfUserGame(0);
    if ( baseListViewManager )
    {
      v63 = *(_QWORD *)(baseListViewManager + 128);
      if ( !v63 )
        goto LABEL_55;
      if ( !*v59 )
        goto LABEL_116;
      userServantEntity = (*v59)->fields.userServantEntity;
      if ( !userServantEntity )
        goto LABEL_116;
      v65 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v139.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v139.fields.fakeValue = v65;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v62);
      v138 = v139;
      if ( v63 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v138, 0) )
      {
LABEL_55:
        WarehouseListMenu__PushRequest(this, *v59, v62);
        return;
      }
      baseListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( baseListViewManager )
      {
        baseListViewManager = (__int64)DataManager__GetMasterData_object_(
                                         (DataManager_o *)baseListViewManager,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( baseListViewManager )
        {
          baseListViewManager = (__int64)DataMasterBase_object__object__long___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
                                           v63,
                                           (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
          if ( baseListViewManager )
          {
            v95 = baseListViewManager;
            ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)baseListViewManager, -1, 0);
            baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)v95, 0, 0);
            if ( baseListViewManager )
            {
              if ( *v59 )
              {
                v97 = (*v59)->fields.userServantEntity;
                if ( v97 )
                {
                  v98 = *(_DWORD *)(baseListViewManager + 24);
                  baseListViewManager = (__int64)UserServantEntity__GetOverwriteStatus(v97, 0, 0);
                  if ( baseListViewManager )
                  {
                    v100 = *(_DWORD *)(baseListViewManager + 24);
                    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11, v99);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v101, v102);
                    v104 = LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0);
                    v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12462/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0);
                    v108 = (System_Object_array *)sub_2213B20(object___TypeInfo, 6);
                    if ( !*(&Rarity_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v106, v107);
                    baseListViewManager = (__int64)Rarity__getRarityType(v98, 0);
                    if ( v108 )
                    {
                      v109 = baseListViewManager;
                      sub_1FFE8F8(v108, baseListViewManager);
                      baseListViewManager = sub_1FFE2C4(v108, 0, v109);
                      if ( ServantEntity )
                      {
                        ClassName = ServantEntity__getClassName(ServantEntity, 0);
                        sub_1FFE8F8(v108, ClassName);
                        sub_1FFE2C4(v108, 1, ClassName);
                        v114 = *(_QWORD *)&ServantEntity->fields.id.fields.currentCryptoKey;
                        v113 = *(_QWORD *)&ServantEntity->fields.id.fields.fakeValue;
                        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                            v111,
                            v112);
                        *(_QWORD *)&v140.fields.currentCryptoKey = v114;
                        *(_QWORD *)&v140.fields.fakeValue = v113;
                        v115 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v140, 0);
                        v116 = *(_QWORD *)(v95 + 96);
                        *(_QWORD *)&v141.fields.fakeValue = *(_QWORD *)(v95 + 104);
                        v117 = v115;
                        *(_QWORD *)&v141.fields.currentCryptoKey = v116;
                        baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                v141,
                                                0);
                        if ( Master_object )
                        {
                          LimitCountSealedServantName = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                                          (ServantLimitImageMaster_o *)Master_object,
                                                          v117,
                                                          baseListViewManager,
                                                          1,
                                                          1,
                                                          0);
                          sub_1FFE8F8(v108, LimitCountSealedServantName);
                          sub_1FFE2C4(v108, 2, LimitCountSealedServantName);
                          RarityType = Rarity__getRarityType(v100, 0);
                          sub_1FFE8F8(v108, RarityType);
                          baseListViewManager = sub_1FFE2C4(v108, 3, RarityType);
                          if ( *v59 )
                          {
                            baseListViewManager = (__int64)(*v59)->fields.servantEntity;
                            if ( baseListViewManager )
                            {
                              v120 = ServantEntity__getClassName((ServantEntity_o *)baseListViewManager, 0);
                              sub_1FFE8F8(v108, v120);
                              baseListViewManager = sub_1FFE2C4(v108, 4, v120);
                              if ( *v59 )
                              {
                                v121 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v59)->fields.servantEntity;
                                if ( v121 )
                                {
                                  baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                          v121[1],
                                                          0);
                                  if ( *v59 )
                                  {
                                    v122 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*v59)->fields.userServantEntity;
                                    if ( v122 )
                                    {
                                      v123 = baseListViewManager;
                                      v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                               v122[6],
                                               0);
                                      v125 = ServantLimitImageMaster__GetLimitCountSealedServantName(
                                               (ServantLimitImageMaster_o *)Master_object,
                                               v123,
                                               v124,
                                               1,
                                               1,
                                               0);
                                      sub_1FFE8F8(v108, v125);
                                      sub_1FFE2C4(v108, 5, v125);
                                      v126 = System_String__Format_75698016(v105, v108, 0);
                                      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_12461/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0);
                                      v128 = LocalizationManager__Get((System_String_o *)StringLiteral_12460/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0);
                                      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                                      v130 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
                                      CommonConfirmDialog_ClickDelegate___ctor(
                                        v130,
                                        (Il2CppObject *)v9,
                                        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
                                        0);
                                      baseListViewManager = (__int64)BalanceConfig_TypeInfo;
                                      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v131);
                                      if ( Instance )
                                      {
                                        CommonUI__OpenConfirmDialog_37373584(
                                          (CommonUI_o *)Instance,
                                          v104,
                                          v126,
                                          v127,
                                          v128,
                                          v130,
                                          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
                                          BalanceConfig_TypeInfo->static_fields->PushSvtDialogFontSize,
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
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_116;
  }
  if ( result == 2 )
  {
    v44 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v44 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnSelectServant__);
    v45 = (System_Reflection_MethodBase_o *)sub_2213A44(v44, v44[4]);
    OverwriteAssetSoundName__PlaySystemSe(v45, 0, 0, 0);
    this->fields.state = 7;
    if ( !list )
      goto LABEL_116;
    if ( !LODWORD(list->max_length) )
      sub_2213CE4(baseListViewManager);
    tabKind = this->fields.tabKind;
    this->fields.selectNum = list->m_Items[0];
    if ( tabKind > 1 )
    {
      if ( tabKind != 2 )
      {
        if ( tabKind != 3 )
          return;
        v58 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        selectNum = this->fields.selectNum;
        v49 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v49,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndServantEquipStatus__,
          0);
        if ( !v58 )
          goto LABEL_116;
        v50 = (CommonUI_o *)v58;
        v51 = 3;
LABEL_42:
        CommonUI__OpenServantStatusDialog_37382644(v50, v51, selectNum, v49, 0, 0);
        return;
      }
      v85 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v81 = this->fields.selectNum;
      v82 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v82,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0);
      if ( !v85 )
        goto LABEL_116;
      v83 = (CommonUI_o *)v85;
      v84 = 3;
    }
    else
    {
      if ( tabKind )
      {
        if ( tabKind != 1 )
          return;
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        selectNum = this->fields.selectNum;
        v49 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v49,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndServantEquipStatus__,
          0);
        if ( !v47 )
          goto LABEL_116;
        v50 = (CommonUI_o *)v47;
        v51 = 0;
        goto LABEL_42;
      }
      v80 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v81 = this->fields.selectNum;
      v82 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v82,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0);
      if ( !v80 )
        goto LABEL_116;
      v83 = (CommonUI_o *)v80;
      v84 = 0;
    }
    CommonUI__OpenServantStatusDialog_37383356(v83, v84, v81, v82, 0, 0);
    return;
  }
  if ( result != 1 )
  {
    WarehouseListMenu__Callback(this, 0, (int32_t)v24, (const MethodInfo *)v25);
    return;
  }
  v30 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_2213A78(Method_WarehouseListMenu_OnSelectServant__);
  v31 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
  v32 = this->fields.servantListViewManager;
  this->fields.state = 5;
  if ( !v32 )
    goto LABEL_116;
  if ( v32->fields.totalSum <= v32->fields.sendMax || !WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v11) )
  {
    v54 = this->fields.tabKind;
    if ( v54 > 1 )
    {
      if ( v54 == 2 )
      {
        warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
        v56 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
        WarehouseConfirmMenu_CallbackFunc___ctor(
          v56,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndConfirmMove__,
          v89);
        if ( !warehouseConfirmMenu )
          goto LABEL_116;
        v42 = warehouseConfirmMenu;
        v43 = 2;
      }
      else
      {
        if ( v54 != 3 )
          return;
        v78 = this->fields.warehouseConfirmMenu;
        v56 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
        WarehouseConfirmMenu_CallbackFunc___ctor(
          v56,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndConfirmMove__,
          v79);
        if ( !v78 )
          goto LABEL_116;
        v42 = v78;
        v43 = 3;
      }
    }
    else if ( v54 )
    {
      if ( v54 != 1 )
        return;
      v55 = this->fields.warehouseConfirmMenu;
      v56 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v56,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmMove__,
        v57);
      if ( !v55 )
        goto LABEL_116;
      v42 = v55;
      v43 = 1;
    }
    else
    {
      v86 = this->fields.warehouseConfirmMenu;
      v56 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v56,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmMove__,
        v87);
      if ( !v86 )
        goto LABEL_116;
      v42 = v86;
      v43 = 0;
    }
    v90 = v56;
    v91 = 0;
    sendKeep = 0;
LABEL_115:
    WarehouseConfirmMenu__Open(v42, v43, v90, v91, sendKeep, v37);
    return;
  }
  v33 = this->fields.tabKind;
  if ( v33 > 1 )
  {
    if ( v33 == 2 )
    {
      v135 = this->fields.warehouseConfirmMenu;
      v35 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmMove__,
        v136);
      v137 = this->fields.servantListViewManager;
      if ( v137 && v135 )
      {
        sendKeep = v137->fields.sendKeep;
        sendSum = v137->fields.sendSum;
        totalSum = v137->fields.totalSum;
        v42 = v135;
        v43 = 10;
        goto LABEL_114;
      }
      goto LABEL_116;
    }
    if ( v33 != 3 )
      return;
    v92 = this->fields.warehouseConfirmMenu;
    v35 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    WarehouseConfirmMenu_CallbackFunc___ctor(v35, (Il2CppObject *)this, Method_WarehouseListMenu_EndConfirmMove__, v93);
    v94 = this->fields.servantListViewManager;
    if ( v94 && v92 )
    {
      sendKeep = v94->fields.sendKeep;
      sendSum = v94->fields.sendSum;
      totalSum = v94->fields.totalSum;
      v42 = v92;
      v43 = 11;
      goto LABEL_114;
    }
LABEL_116:
    sub_2213CDC(baseListViewManager, v11);
  }
  if ( !v33 )
  {
    v132 = this->fields.warehouseConfirmMenu;
    v35 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    WarehouseConfirmMenu_CallbackFunc___ctor(v35, (Il2CppObject *)this, Method_WarehouseListMenu_EndConfirmMove__, v133);
    v134 = this->fields.servantListViewManager;
    if ( v134 && v132 )
    {
      sendKeep = v134->fields.sendKeep;
      sendSum = v134->fields.sendSum;
      totalSum = v134->fields.totalSum;
      v42 = v132;
      v43 = 8;
      goto LABEL_114;
    }
    goto LABEL_116;
  }
  if ( v33 == 1 )
  {
    v34 = this->fields.warehouseConfirmMenu;
    v35 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_2213CCC(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    WarehouseConfirmMenu_CallbackFunc___ctor(v35, (Il2CppObject *)this, Method_WarehouseListMenu_EndConfirmMove__, v36);
    v38 = this->fields.servantListViewManager;
    if ( v38 && v34 )
    {
      sendKeep = v38->fields.sendKeep;
      sendSum = v38->fields.sendSum;
      totalSum = v38->fields.totalSum;
      v42 = v34;
      v43 = 9;
LABEL_114:
      v91 = totalSum + sendSum;
      v90 = v35;
      goto LABEL_115;
    }
    goto LABEL_116;
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v29; // x5
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  const MethodInfo *v36; // x5
  System_Action_o *v37; // x20
  unsigned __int128 v38; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_596E4AE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarehouseListMenu_EndOpen__);
    sub_2213A60(&WarehouseListMenu_TypeInfo);
    byte_596E4AE = 1;
  }
  v9 = WarehouseListMenu_TypeInfo;
  v38 = 0u;
  if ( !*(&WarehouseListMenu_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo, *(_QWORD *)&kind, setupinfo);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this->fields.setupInfo = setupinfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.setupInfo,
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
      v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v37, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v37, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(gameObject, v11);
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
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596E4C8 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListMenu_EndCardFavoriteRequest__);
    byte_596E4C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)Instance, 0, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Instance = NetworkManager__getRequest_object_(
               v7,
               (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  if ( !selectItem || !Instance )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
  bool v11; // w25
  struct UISprite_o *servantListViewManager; // x0
  __int64 v13; // x2
  __n128 inited; // q0
  float *onChange; // x8
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v21; // x9
  float v22; // s10
  float v23; // s11
  float v24; // s8
  float v25; // s9
  unsigned int v26; // w27
  __int64 *v27; // x8
  struct UILabel_o *v28; // x8
  __int64 *v32; // x8
  bool v33; // w26
  UICommonButton_o *v34; // x24
  bool enabled; // w0
  __int64 *v36; // x8
  __int64 *v37; // x8
  UICommonButton_o *servantEquipTabButton; // x24
  bool v39; // w0
  unsigned int v40; // w27
  System_String_o **v41; // x8
  System_String_o **v42; // x8
  UICommonButton_o *putInTabButton; // x24
  bool v44; // w0
  System_String_o **v45; // x8
  System_String_o **v46; // x8
  UICommonButton_o *putOutTabButton; // x24
  bool v48; // w0
  System_String_o **v49; // x8
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x3
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v53; // w1
  struct WarehouseListManager_o *v54; // x8
  const MethodInfo *v55; // x3
  struct WarehouseListManager_o *v56; // x8
  UISprite_c *klass; // x8
  struct WarehouseListManager_o *v58; // x8
  __int64 *v59; // x8
  UICommonButton_o *statusTabButton; // x24
  bool v61; // w0
  __int64 *v62; // x8
  UICommonButton_o *lockTabButton; // x24
  bool v64; // w0
  __int64 *v65; // x8
  UICommonButton_o *choiceTabButton; // x24
  bool v67; // w0
  bool v68; // zf
  bool v69; // w1
  __int64 *v70; // x8
  UICommonButton_o *pushTabButton; // x24
  bool v72; // w0
  UISprite_c *v73; // x8
  UILabel_o *explanationLabel; // x23
  struct WarehouseListManager_o *v75; // x8
  int v76; // w9
  UILabel_o *v77; // x23
  UILabel_o *v78; // x23
  __int64 *v79; // x8
  UILabel_o *v80; // x23
  struct WarehouseListManager_o *v81; // x8
  int32_t state; // w9
  struct WarehouseListManager_o *v83; // x21
  WarehouseListManager_CallbackFunc_o *v84; // x22
  const MethodInfo *v85; // x3
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  int32_t v92; // w1
  struct WarehouseListManager_o *v93; // x8
  struct WarehouseListManager_o *v94; // x8
  UISprite_o *scaleChageTabSprite; // x19
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596E4B0 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    sub_2213A60(&StringLiteral_18330/*"btn_txt_craftessence_off"*/);
    sub_2213A60(&StringLiteral_18371/*"btn_txt_servant_off"*/);
    sub_2213A60(&StringLiteral_21625/*"img_txt_cardspace"*/);
    sub_2213A60(&StringLiteral_18431/*"button_push_reg"*/);
    sub_2213A60(&StringLiteral_18432/*"button_push_unreg"*/);
    sub_2213A60(&StringLiteral_18417/*"button_allchoice_reg"*/);
    sub_2213A60(&StringLiteral_18206/*"btn_bg_12"*/);
    sub_2213A60(&StringLiteral_18420/*"button_alllock_unreg"*/);
    sub_2213A60(&StringLiteral_18372/*"btn_txt_servant_on"*/);
    sub_2213A60(&StringLiteral_18433/*"button_select_reg"*/);
    sub_2213A60(&StringLiteral_18208/*"btn_bg_19"*/);
    sub_2213A60(&StringLiteral_18325/*"btn_txt_cardtoarchive_on"*/);
    sub_2213A60(&StringLiteral_16061/*"WAREHOUSE_EXPLANATION_PUT_IN"*/);
    sub_2213A60(&StringLiteral_16059/*"WAREHOUSE_EXPLANATION_LOCK"*/);
    sub_2213A60(&StringLiteral_18214/*"btn_bg_25"*/);
    sub_2213A60(&StringLiteral_18324/*"btn_txt_cardtoarchive_off"*/);
    sub_2213A60(&StringLiteral_18331/*"btn_txt_craftessence_on"*/);
    sub_2213A60(&StringLiteral_16062/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/);
    sub_2213A60(&StringLiteral_16060/*"WAREHOUSE_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_18313/*"btn_txt_archivetocard_on"*/);
    sub_2213A60(&StringLiteral_21616/*"img_txt_archivespace"*/);
    sub_2213A60(&StringLiteral_18312/*"btn_txt_archivetocard_off"*/);
    sub_2213A60(&StringLiteral_16058/*"WAREHOUSE_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_18434/*"button_select_unreg"*/);
    sub_2213A60(&StringLiteral_18419/*"button_alllock_reg"*/);
    sub_2213A60(&StringLiteral_18213/*"btn_bg_24"*/);
    sub_2213A60(&StringLiteral_18418/*"button_allchoice_unreg"*/);
    byte_596E4B0 = 1;
  }
  v11 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_234;
    WarehouseListManager__DestroyList((WarehouseListManager_o *)servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0);
  servantListViewManager = (struct UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_234;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (struct UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_234;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v13);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  servantListViewManager = (struct UISprite_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v13);
    servantListViewManager = (struct UISprite_o *)LocalizationManager_TypeInfo;
  }
  onChange = (float *)servantListViewManager->fields.onChange;
  v16 = onChange[20];
  v17 = onChange[21];
  v18 = onChange[22];
  v19 = onChange[23];
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    servantListViewManager = (struct UISprite_o *)LocalizationManager_TypeInfo;
    byte_596ABD6 = 1;
  }
  if ( !HIDWORD(servantListViewManager->fields.hitCheck) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager, *(_QWORD *)&tabKind, v13);
    servantListViewManager = (struct UISprite_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_234;
  v21 = (float *)servantListViewManager->fields.onChange;
  v23 = v21[24];
  v22 = v21[25];
  v25 = v21[26];
  v24 = v21[27];
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, const MethodInfo *, long double))servantTabButton->klass->vtable._5_set_isEnabled.methodPtr)(
    servantTabButton,
    this->fields.servantTabButton,
    1,
    servantTabButton->klass->vtable._5_set_isEnabled.method,
    *(long double *)&inited);
  servantListViewManager = (struct UISprite_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  v26 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind & 0xFFFFFFFD) != 0, 0);
  servantListViewManager = (tabKind & 0xFFFFFFFD) != 0 ? 0LL : this->fields.servantTabTitleSprite;
  if ( (tabKind | 2) == 2 )
  {
    v27 = &StringLiteral_18372/*"btn_txt_servant_on"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  else
  {
    if ( !v26 )
      goto LABEL_234;
    servantListViewManager = this->fields.servantTabTitleSprite;
    v27 = &StringLiteral_18371/*"btn_txt_servant_off"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v27, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.servantTabLabel;
  v28 = v26 ? 0LL : this->fields.servantTabLabel;
  if ( (tabKind | 2) == 2 )
  {
    servantListViewManager = (struct UISprite_o *)v28;
    v96.fields.a = v24;
    v96.fields.b = v25;
    v96.fields.g = v22;
    v96.fields.r = v23;
  }
  else
  {
    v96.fields.a = v19;
    v96.fields.b = v18;
    v96.fields.g = v17;
    v96.fields.r = v16;
    if ( !v26 )
      goto LABEL_234;
  }
  if ( !servantListViewManager )
    goto LABEL_234;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v96, 0);
  servantListViewManager = v26 ? 0LL : this->fields.servantTabSprite;
  if ( (tabKind | 2) == 2 )
  {
    v32 = &StringLiteral_18208/*"btn_bg_19"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  else
  {
    if ( !v26 )
      goto LABEL_234;
    servantListViewManager = this->fields.servantTabSprite;
    v32 = &StringLiteral_18206/*"btn_bg_12"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v32, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  v33 = !v11;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  v34 = this->fields.servantTabButton;
  if ( !v34 )
    goto LABEL_234;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0);
  UICommonButton__SetColliderEnable(v34, enabled, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v26 == 0, 0);
  servantListViewManager = v26 ? this->fields.servantEquipTabTitleSprite : 0LL;
  if ( (tabKind | 2) == 2 )
  {
    servantListViewManager = this->fields.servantEquipTabTitleSprite;
    v36 = &StringLiteral_18330/*"btn_txt_craftessence_off"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  else
  {
    v36 = &StringLiteral_18331/*"btn_txt_craftessence_on"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v36, 0);
  servantListViewManager = v26 ? this->fields.servantEquipTabSprite : 0LL;
  if ( (tabKind | 2) == 2 )
  {
    servantListViewManager = this->fields.servantEquipTabSprite;
    v37 = &StringLiteral_18206/*"btn_bg_12"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  else
  {
    v37 = &StringLiteral_18208/*"btn_bg_19"*/;
    if ( !servantListViewManager )
      goto LABEL_234;
  }
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v37, 0);
  if ( v26 )
    servantListViewManager = (struct UISprite_o *)this->fields.servantEquipTabLabel;
  else
    servantListViewManager = 0;
  if ( (tabKind | 2) == 2 )
  {
    v24 = v19;
    v25 = v18;
    servantListViewManager = (struct UISprite_o *)this->fields.servantEquipTabLabel;
    v22 = v17;
    v23 = v16;
  }
  if ( !servantListViewManager )
    goto LABEL_234;
  v97.fields.r = v23;
  v97.fields.g = v22;
  v97.fields.b = v25;
  v97.fields.a = v24;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v97, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_234;
  v39 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v39, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  v40 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind & 0xFFFFFFFE) == 2, 0);
  servantListViewManager = this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v41 = (System_String_o **)&StringLiteral_18324/*"btn_txt_cardtoarchive_off"*/;
  if ( v40 != 2 )
    v41 = (System_String_o **)&StringLiteral_18325/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName(servantListViewManager, *v41, 0);
  servantListViewManager = this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v42 = (System_String_o **)(v40 == 2 ? &StringLiteral_18213/*"btn_bg_24"*/ : &StringLiteral_18214/*"btn_bg_25"*/);
  UISprite__set_spriteName(servantListViewManager, *v42, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_234;
  v44 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0);
  UICommonButton__SetColliderEnable(putInTabButton, v44, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v40 != 2, 0);
  servantListViewManager = this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v45 = (System_String_o **)&StringLiteral_18313/*"btn_txt_archivetocard_on"*/;
  if ( v40 != 2 )
    v45 = (System_String_o **)&StringLiteral_18312/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName(servantListViewManager, *v45, 0);
  servantListViewManager = this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v46 = (System_String_o **)(v40 == 2 ? &StringLiteral_18214/*"btn_bg_25"*/ : &StringLiteral_18213/*"btn_bg_24"*/);
  UISprite__set_spriteName(servantListViewManager, *v46, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager
    || (servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                        servantListViewManager,
                                                        0,
                                                        !v11,
                                                        servantListViewManager->klass->vtable._14_OnEnable.method),
        (putOutTabButton = this->fields.putOutTabButton) == 0)
    || (v48 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0),
        UICommonButton__SetColliderEnable(putOutTabButton, v48, v33, 0),
        (servantListViewManager = this->fields.sendTitleSprite) == 0) )
  {
LABEL_234:
    sub_2213CDC(servantListViewManager, *(_QWORD *)&tabKind);
  }
  v49 = (System_String_o **)&StringLiteral_21625/*"img_txt_cardspace"*/;
  if ( v40 != 2 )
    v49 = (System_String_o **)&StringLiteral_21616/*"img_txt_archivespace"*/;
  UISprite__set_spriteName(servantListViewManager, *v49, 0);
  if ( tabKind > 1 )
  {
    if ( tabKind != 2 )
    {
      if ( tabKind == 3 )
      {
        if ( v11 || this->fields.tabKind != 3 )
        {
          servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
          if ( !servantListViewManager )
            goto LABEL_234;
          setupInfo = this->fields.setupInfo;
          v53 = 3;
          goto LABEL_107;
        }
LABEL_108:
        v54 = this->fields.servantListViewManager;
        if ( !v54 )
          goto LABEL_234;
        servantListViewManager = (struct UISprite_o *)v54->fields.filterButton;
        if ( !servantListViewManager )
          goto LABEL_234;
        ((void (__fastcall *)(struct UISprite_o *, _QWORD, __int64, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
          servantListViewManager,
          0,
          1,
          servantListViewManager->klass->vtable._14_OnEnable.method);
        servantListViewManager = (struct UISprite_o *)WarehouseListMenu__HidePushButton(this, modeKind, 0, v55);
        modeKind = (int)servantListViewManager;
        if ( v11 )
          goto LABEL_142;
LABEL_141:
        if ( modeKind == this->fields.modeKind )
          goto LABEL_182;
        goto LABEL_142;
      }
      goto LABEL_134;
    }
    if ( v11 || this->fields.tabKind != 2 )
    {
      servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_234;
      WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, 2, this->fields.setupInfo, v51);
    }
    v58 = this->fields.servantListViewManager;
    if ( !v58 )
      goto LABEL_234;
    servantListViewManager = (struct UISprite_o *)v58->fields.filterButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    ((void (__fastcall *)(struct UISprite_o *, _QWORD, __int64, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
      servantListViewManager,
      0,
      1,
      servantListViewManager->klass->vtable._14_OnEnable.method);
    servantListViewManager = this->fields.pushTabSprite;
    if ( !servantListViewManager )
      goto LABEL_234;
    servantListViewManager = (struct UISprite_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantListViewManager,
                                                    0);
    if ( !servantListViewManager )
      goto LABEL_234;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0);
    if ( this->fields.modeKind == 3 )
    {
      modeKind = 0;
LABEL_134:
      if ( !v11 )
        goto LABEL_141;
      goto LABEL_142;
    }
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
      servantListViewManager,
      1,
      servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 0, 0);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    klass = servantListViewManager->klass;
  }
  else
  {
    if ( tabKind )
    {
      if ( tabKind == 1 )
      {
        if ( v11 || this->fields.tabKind != 1 )
        {
          servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
          if ( !servantListViewManager )
            goto LABEL_234;
          setupInfo = this->fields.setupInfo;
          v53 = 1;
LABEL_107:
          WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, v53, setupInfo, v51);
          goto LABEL_108;
        }
        goto LABEL_108;
      }
      goto LABEL_134;
    }
    if ( v11 || this->fields.tabKind )
    {
      servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_234;
      WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, 0, this->fields.setupInfo, v51);
    }
    v56 = this->fields.servantListViewManager;
    if ( !v56 )
      goto LABEL_234;
    servantListViewManager = (struct UISprite_o *)v56->fields.filterButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    ((void (__fastcall *)(struct UISprite_o *, _QWORD, __int64, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
      servantListViewManager,
      0,
      1,
      servantListViewManager->klass->vtable._14_OnEnable.method);
    servantListViewManager = this->fields.pushTabSprite;
    if ( !servantListViewManager )
      goto LABEL_234;
    servantListViewManager = (struct UISprite_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantListViewManager,
                                                    0);
    if ( !servantListViewManager )
      goto LABEL_234;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantListViewManager, 1, 0);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
      servantListViewManager,
      1,
      servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, 1, 0);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    klass = servantListViewManager->klass;
  }
  servantListViewManager = (struct UISprite_o *)((__int64 (*)(void))klass->vtable._14_OnEnable.methodPtr)();
  if ( !v11 )
    goto LABEL_141;
LABEL_142:
  servantListViewManager = (struct UISprite_o *)this->fields.statusTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.statusTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 0, 0);
  servantListViewManager = this->fields.statusTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v59 = &StringLiteral_18433/*"button_select_reg"*/;
  if ( modeKind )
    v59 = &StringLiteral_18434/*"button_select_unreg"*/;
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v59, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.statusTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  statusTabButton = this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_234;
  v61 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0);
  UICommonButton__SetColliderEnable(statusTabButton, v61, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.lockTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.lockTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 1, 0);
  servantListViewManager = this->fields.lockTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v62 = &StringLiteral_18420/*"button_alllock_unreg"*/;
  if ( modeKind == 1 )
    v62 = &StringLiteral_18419/*"button_alllock_reg"*/;
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v62, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.lockTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_234;
  v64 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0);
  UICommonButton__SetColliderEnable(lockTabButton, v64, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.choiceTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.choiceTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, modeKind != 2, 0);
  servantListViewManager = this->fields.choiceTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v65 = &StringLiteral_18418/*"button_allchoice_unreg"*/;
  if ( modeKind == 2 )
    v65 = &StringLiteral_18417/*"button_allchoice_reg"*/;
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v65, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.choiceTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)((__int64 (__fastcall *)(struct UISprite_o *, _QWORD, bool, const MethodInfo *))servantListViewManager->klass->vtable._14_OnEnable.methodPtr)(
                                                  servantListViewManager,
                                                  0,
                                                  !v11,
                                                  servantListViewManager->klass->vtable._14_OnEnable.method);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_234;
  v67 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0);
  UICommonButton__SetColliderEnable(choiceTabButton, v67, v33, 0);
  servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  ((void (__fastcall *)(struct UISprite_o *, __int64, const MethodInfo *))servantListViewManager->klass->vtable._5_get_isAnchoredVertically.methodPtr)(
    servantListViewManager,
    1,
    servantListViewManager->klass->vtable._5_get_isAnchoredVertically.method);
  servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
  if ( !servantListViewManager )
    goto LABEL_234;
  v68 = v40 == 2 || modeKind == 3;
  v69 = !v68;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v69, 0);
  servantListViewManager = this->fields.pushTabSprite;
  if ( !servantListViewManager )
    goto LABEL_234;
  v70 = &StringLiteral_18431/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v70 = &StringLiteral_18432/*"button_push_unreg"*/;
  UISprite__set_spriteName(servantListViewManager, (System_String_o *)*v70, 0);
  pushTabButton = this->fields.pushTabButton;
  if ( v40 == 2 )
  {
    if ( !pushTabButton )
      goto LABEL_234;
    UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v33, 0);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    v73 = servantListViewManager->klass;
  }
  else
  {
    if ( !pushTabButton )
      goto LABEL_234;
    v72 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0);
    UICommonButton__SetColliderEnable(pushTabButton, v72, v33, 0);
    servantListViewManager = (struct UISprite_o *)this->fields.pushTabButton;
    if ( !servantListViewManager )
      goto LABEL_234;
    v73 = servantListViewManager->klass;
  }
  servantListViewManager = (struct UISprite_o *)((__int64 (*)(void))v73->vtable._14_OnEnable.methodPtr)();
LABEL_182:
  if ( modeKind <= 1 )
  {
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v50);
        servantListViewManager = (struct UISprite_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_16059/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                        0);
        if ( !explanationLabel )
          goto LABEL_234;
        UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0);
        v75 = this->fields.servantListViewManager;
        if ( !v75 )
          goto LABEL_234;
        if ( v75->fields.modeKind != 1 )
        {
          v76 = 1;
LABEL_210:
          v75->fields.modeKind = v76;
          goto LABEL_219;
        }
      }
      goto LABEL_219;
    }
    if ( (unsigned int)tabKind < 2 )
    {
      v78 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v50);
      v79 = &StringLiteral_16061/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
    }
    else
    {
      if ( v40 != 2 )
      {
LABEL_216:
        v81 = this->fields.servantListViewManager;
        if ( !v81 )
          goto LABEL_234;
        if ( v81->fields.modeKind )
          v81->fields.modeKind = 0;
        goto LABEL_219;
      }
      v78 = this->fields.explanationLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v50);
      v79 = &StringLiteral_16062/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
    }
    servantListViewManager = (struct UISprite_o *)LocalizationManager__Get((System_String_o *)*v79, 0);
    if ( !v78 )
      goto LABEL_234;
    UILabel__set_text(v78, (System_String_o *)servantListViewManager, 0);
    goto LABEL_216;
  }
  if ( modeKind == 2 )
  {
    v80 = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v50);
    servantListViewManager = (struct UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16058/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0);
    if ( !v80 )
      goto LABEL_234;
    UILabel__set_text(v80, (System_String_o *)servantListViewManager, 0);
    v75 = this->fields.servantListViewManager;
    if ( !v75 )
      goto LABEL_234;
    if ( v75->fields.modeKind != 2 )
    {
      v76 = 2;
      goto LABEL_210;
    }
  }
  else if ( modeKind == 3 )
  {
    v77 = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v50);
    servantListViewManager = (struct UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16060/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0);
    if ( !v77 )
      goto LABEL_234;
    UILabel__set_text(v77, (System_String_o *)servantListViewManager, 0);
    v75 = this->fields.servantListViewManager;
    if ( !v75 )
      goto LABEL_234;
    if ( v75->fields.modeKind != 3 )
    {
      v76 = 3;
      goto LABEL_210;
    }
  }
LABEL_219:
  state = this->fields.state;
  servantListViewManager = (struct UISprite_o *)this->fields.servantListViewManager;
  this->fields.isInitTab = 1;
  this->fields.tabKind = tabKind;
  this->fields.modeKind = modeKind;
  if ( state == 2 )
  {
    if ( !servantListViewManager )
      goto LABEL_234;
    servantListViewManager = (struct UISprite_o *)servantListViewManager->fields.leftAnchor;
    if ( !servantListViewManager )
      goto LABEL_234;
    WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)servantListViewManager, modeKind == 3, v50);
    v83 = this->fields.servantListViewManager;
    v84 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(WarehouseListManager_CallbackFunc_TypeInfo);
    WarehouseListManager_CallbackFunc___ctor(
      v84,
      (Il2CppObject *)this,
      (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
      v85);
    if ( !v83 )
      goto LABEL_234;
    v83->fields.callbackFunc = v84;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v83->fields.callbackFunc,
      (int32_t)v84,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    servantListViewManager = (struct UISprite_o *)v83;
    v92 = 2;
  }
  else
  {
    if ( !servantListViewManager )
      goto LABEL_234;
    v92 = 1;
  }
  WarehouseListManager__SetMode_45270940((WarehouseListManager_o *)servantListViewManager, v92, v50);
  if ( !v11 && isModify )
  {
    v93 = this->fields.servantListViewManager;
    if ( v93 )
    {
      servantListViewManager = (struct UISprite_o *)v93->fields.baseListViewManager;
      if ( servantListViewManager )
      {
        WarehouseListViewManager__Modify(
          (WarehouseListViewManager_o *)servantListViewManager,
          *(const MethodInfo **)&tabKind);
        goto LABEL_230;
      }
    }
    goto LABEL_234;
  }
LABEL_230:
  v94 = this->fields.servantListViewManager;
  if ( !v94 )
    goto LABEL_234;
  servantListViewManager = (struct UISprite_o *)v94->fields.baseListViewManager;
  if ( !servantListViewManager )
    goto LABEL_234;
  scaleChageTabSprite = this->fields.scaleChageTabSprite;
  servantListViewManager = (struct UISprite_o *)WarehouseListViewManager__GetScaleButtonSpriteName(
                                                  (WarehouseListViewManager_o *)servantListViewManager,
                                                  *(const MethodInfo **)&tabKind);
  if ( !scaleChageTabSprite )
    goto LABEL_234;
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)servantListViewManager, 0);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t tabKind; // w8
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  System_Int64_array *v32; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_596E4BA & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (WarehouseListMenu_o *)sub_2213A60(&Method_WarehouseListMenu_EndStatusSync__);
    byte_596E4BA = 1;
  }
  modeKind = v5->fields.modeKind;
  unlockList = 0;
  lockList = 0;
  v32 = 0;
  choiceList = 0;
  if ( modeKind == 2 )
  {
    servantListViewManager = v5->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v32, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v5->fields.requedstCallback,
        (int32_t)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v29, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30, v31);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v29,
                                      (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v19 = v32;
        v18 = choiceList;
        v20 = 0;
        v21 = 1;
        goto LABEL_19;
      }
LABEL_23:
      sub_2213CDC(this, callback);
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v5->fields.requedstCallback,
        (int32_t)callback,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v14, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v14,
                                      (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v19 = unlockList;
        v18 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v18,
          v19,
          (tabKind & 0xFFFFFFFE) == 2,
          v20,
          v21,
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListMenu_o *v11; // x0
  WarehouseListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596E4AC & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_596E4AC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v6->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, WarehouseListMenu_CallbackFunc_TypeInfo, v7, v8);
  WarehouseListMenu__remove_callbackFunc(v11, v12, v13);
}


void WarehouseListMenu__remove_callbackFunc(
        WarehouseListMenu_o *this,
        WarehouseListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596E4AD & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_CallbackFunc_TypeInfo);
    byte_596E4AD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v6->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_221405C(v6, WarehouseListMenu_CallbackFunc_TypeInfo, v7, v8);
  WarehouseListMenu__GetMode(v11, v12);
}


void WarehouseListMenu_CallbackFunc___ctor(
        WarehouseListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200A474;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200A42C;
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
  if ( (byte_596E4CC & 1) == 0 )
  {
    sub_2213A60(&WarehouseListMenu_ResultKind_TypeInfo);
    byte_596E4CC = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return sub_2213A14(this, v9, callback, object);
}


void WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200A4D8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200A490;
}


System_IAsyncResult_o *WarehouseListMenu_RequestCallbackFunc__BeginInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x2

  if ( (byte_596E4CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&WarehouseListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__);
    sub_2213A60(&Method_WarehouseListMenu_OnSelectServant__);
    byte_596E4CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, _9__1, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  servantListViewManager = _4__this->fields.servantListViewManager;
  _4__this->fields.state = 2;
  v17 = (WarehouseListManager_CallbackFunc_o *)sub_2213CCC(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v18);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantListViewManager->fields.callbackFunc,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  WarehouseListManager__SetMode_45270940(servantListViewManager, 2, v25);
}


void WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}