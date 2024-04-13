void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E93DA & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_358/*"#4C4C4C"*/, v8, v9, v10);
    byte_42E93DA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarehouseListMenu_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_358/*"#4C4C4C"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_358/*"#4C4C4C"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E93D9 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E93D9 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
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
    sub_B5D69C(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_26308496(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_26308496(
        WarehouseListMenu_o *this,
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
  const MethodInfo *v15; // x5
  System_Action_o *v16; // x20

  if ( (byte_42E93BE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClose__, v10, v11, v12);
    byte_42E93BE = 1;
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
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v15);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall WarehouseListMenu__EndCardFavoriteRequest(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  struct WarehouseListManager_o *v9; // x20
  WarehouseListManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_42E93D8 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E93D8 = 1;
  }
  servantListViewManager = v4->fields.servantListViewManager;
  v4->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v9 = v4->fields.servantListViewManager,
        v10 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo),
        WarehouseListManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)v4,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(this, result);
  }
  v9->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  WarehouseListManager__SetMode_26296460(v9, 2, v17);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v6);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v6);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v6);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B5D69C(this, isRequest);
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
          WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_8:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_B5D69C(this, isRequest);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_6:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 2, method);
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
      sub_B5D69C(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_26296460(baseListViewManager, 3, v13);
  }
LABEL_6:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_26296460(baseListViewManager, 2, v7);
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
      sub_B5D69C(this, isRequest);
    }
    WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)this, 3, v6);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E93D1 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E93D1 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v9 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B5D69C(v10, v11);
  servantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_26296460(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  int32_t v13; // w1

  if ( (byte_42E93CE & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_EndNotificationMove__, v5, v6, v7);
    byte_42E93CE = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v9 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v9 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v9 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v9 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        0LL);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_B5D69C(v10, v11);
      v13 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v13, v9, 0, 0, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E93D0 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E93D0 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v9 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B5D69C(v10, v11);
  servantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_26296460(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E93D5 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E93D5 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v9 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B5D69C(v10, v11);
  servantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_26296460(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E93D3 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v5, v6, v7);
    byte_42E93D3 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v9 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
  WarehouseListManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    0LL);
  if ( !servantListViewManager )
    sub_B5D69C(v10, v11);
  servantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&servantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_26296460(servantListViewManager, 2, v18);
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
  WarehouseListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_42E93CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v9, v10, v11);
    sub_B5D5C4(&Method_WarehouseListMenu_EndConfirmRequestLock__, v12, v13, v14);
    byte_42E93CB = 1;
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
      v15 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v15, v16);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_B5D69C(v19, v20);
    WarehouseConfirmMenu__Close_26285464(warehouseConfirmMenu, v18, v21);
  }
}


void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  StorageTakeinRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v20; // x1
  NetworkManager_ResultCallbackFunc_o *v21; // x20

  if ( (byte_42E93CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarehouseListMenu_EndRequestWarehouse__, v14, v15, v16);
    byte_42E93CC = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v21,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      goto LABEL_16;
    StorageTakeinRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (StorageTakeinRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                    v18,
                                                                    (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      StorageTakeoutRequest__beginRequest(
        (StorageTakeoutRequest_o *)Request_WarBoardWallAttackRequest,
        this->fields.selectNumList,
        0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v20);
  }
}


void __fastcall WarehouseListMenu__EndNotificationMove(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E93CF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v5, v6, v7);
    byte_42E93CF = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B5D69C(v10, v11);
  WarehouseConfirmMenu__Close_26285464(warehouseConfirmMenu, v9, v12);
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
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_42E93CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v6, v7, v8);
    byte_42E93CD = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v4);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_B5D69C(v13, v14);
  WarehouseConfirmMenu__Close_26285464(warehouseConfirmMenu, v12, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListMenu_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  v5 = this;
  if ( (byte_42E93D4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v9, v10, v11);
    byte_42E93D4 = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v5->fields.servantListViewManager;
    v5->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_B5D69C(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v5->fields.selectNum, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
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
  WarehouseListMenu_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  CommonUI_o *Instance; // x21
  System_Action_o *v20; // x0
  bool v21; // cc
  System_Action_o *v22; // x20
  __int64 *v23; // x8

  v8 = this;
  if ( (byte_42E93D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v12, v13, v14);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndCloseServantStatus__, v15, v16, v17);
    byte_42E93D2 = 1;
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v21 = questId < 1;
  v22 = v20;
  if ( v21 )
    v23 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v23 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v20, (Il2CppObject *)v8, *v23, 0LL);
  if ( !Instance )
LABEL_14:
    sub_B5D69C(this, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_42E93C0 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClickCancel__, v8, v9, v10);
    byte_42E93C0 = 1;
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
      WarehouseListMenu__Callback(this, 0, v11, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v14, v15);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E93D6 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_ChangeIconScale__, v8, v9, v10);
    byte_42E93D6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v11, v12);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42E93C7 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabChoice__, v8, v9, v10);
    byte_42E93C7 = 1;
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
        v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v13, v14);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B5D69C(0LL, v15);
        WarehouseListManager__ReleaseAll(servantListViewManager, v15);
        return;
      }
      v16 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v16, v17);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v11);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42E93C6 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabLock__, v8, v9, v10);
    byte_42E93C6 = 1;
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
        v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          0LL);
        WarehouseListMenu__StatusRequest(this, v13, v14);
LABEL_13:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_B5D69C(0LL, v15);
        WarehouseListManager__ReleaseAll(servantListViewManager, v15);
        return;
      }
      v16 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        0LL);
      WarehouseListMenu__StatusRequest(this, v16, v17);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v11);
    goto LABEL_13;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_42E93C8 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabPush__, v8, v9, v10);
    byte_42E93C8 = 1;
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
    v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v11, v12);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_B5D69C(0LL, v13);
    WarehouseListManager__ReleaseAll(servantListViewManager, v13);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v12; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_42E93C3 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabPutIn__, v8, v9, v10);
    byte_42E93C3 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B5D69C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v4->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v4, 0, v12);
    }
    else
    {
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        0LL);
      WarehouseListMenu__StatusRequest(v4, v13, v14);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v12; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_42E93C4 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabPutOut__, v8, v9, v10);
    byte_42E93C4 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B5D69C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v4->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v4, 0, v12);
    }
    else
    {
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        0LL);
      WarehouseListMenu__StatusRequest(v4, v13, v14);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v12; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_42E93C1 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabServant__, v8, v9, v10);
    byte_42E93C1 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B5D69C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v4->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v4, 0, v12);
    }
    else
    {
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_WarehouseListMenu_EndClickTabServant__,
        0LL);
      WarehouseListMenu__StatusRequest(v4, v13, v14);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarehouseListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct WarehouseListManager_o *servantListViewManager; // x8
  const MethodInfo *v12; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_42E93C2 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabServantEquip__, v8, v9, v10);
    byte_42E93C2 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_B5D69C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( (unsigned int)(v4->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v4, 0, v12);
    }
    else
    {
      v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        0LL);
      WarehouseListMenu__StatusRequest(v4, v13, v14);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E93C5 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarehouseListMenu_EndClickTabStatus__, v8, v9, v10);
    byte_42E93C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_B5D694(WarehouseListMenu_RequestCallbackFunc_TypeInfo);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      0LL);
    WarehouseListMenu__StatusRequest(this, v11, v12);
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
  __int64 v90; // x20
  WarehouseListViewManager_o *baseListViewManager; // x0
  const MethodInfo *v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  MethodInfo *v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct WarehouseListManager_o *v111; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v113; // x21
  const MethodInfo *v114; // x5
  struct WarehouseListManager_o *v115; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v119; // w1
  int32_t tabKind; // w8
  WebViewManager_o *v121; // x0
  int64_t selectNum; // x20
  CommonUI_o *v123; // x21
  ServantStatusDialog_ResultDelegate_o *v124; // x22
  CommonUI_o *v125; // x0
  int32_t v126; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_Int32_array **Item; // x1
  struct WarehouseConfirmMenu_o *v129; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v130; // x21
  WarehouseConfirmMenu_o *v131; // x0
  WarehouseListViewItem_o **v132; // x21
  const MethodInfo *v133; // x2
  int64_t dropList; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v136; // q1
  struct WarehouseListManager_o *v137; // x20
  WarehouseListManager_CallbackFunc_o *v138; // x21
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  const MethodInfo *v145; // x2
  WebViewManager_o *v146; // x0
  CommonUI_o *v147; // x21
  WebViewManager_o *v148; // x0
  int64_t v149; // x20
  CommonUI_o *v150; // x21
  ServantStatusDialog_EndDelegate_o *v151; // x22
  int32_t v152; // w1
  CommonUI_o *v153; // x0
  WebViewManager_o *v154; // x0
  CommonUI_o *v155; // x21
  struct WarehouseConfirmMenu_o *v156; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v157; // x2
  int32_t v158; // w3
  UserServantEntity_o *Entity; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v160; // x19
  __int64 v161; // x22
  __int64 v162; // x23
  ServantEntity_o *v163; // x25
  System_String_o *v164; // x19
  System_String_o *v165; // x22
  System_Object_array *v166; // x23
  int32_t Rarity; // w26
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x26
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x26
  int32_t v182; // w0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Int32_array **v189; // x24
  int32_t v190; // w0
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  System_Int32_array **v197; // x24
  System_String_array **v198; // x2
  System_String_array **v199; // x3
  System_Boolean_array **v200; // x4
  System_Int32_array **v201; // x5
  System_Int32_array *v202; // x6
  System_Int32_array *v203; // x7
  System_Int32_array **v204; // x24
  WarehouseListViewItem_o *v205; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v206; // x9
  ServantEntity_o *servantEntity; // x21
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_Int32_array **v214; // x21
  System_String_o *v215; // x21
  System_String_o *v216; // x22
  System_String_o *v217; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v219; // x25
  struct WarehouseListManager_o *v220; // x8
  struct WarehouseListManager_o *v221; // x8
  struct WarehouseListManager_o *v222; // x8
  __int64 v223; // x0
  __int64 v224; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v225; // [xsp+10h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v226; // [xsp+30h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16

  if ( (byte_42E93CA & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, result, (_DWORD)list, *(_QWORD *)&n);
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&object___TypeInfo, v36, v37, v38);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Rarity_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&SoundManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v60, v61, v62);
    sub_B5D5C4(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&Method_WarehouseListMenu_EndConfirmMove__, v66, v67, v68);
    sub_B5D5C4(&Method_WarehouseListMenu_EndServantEquipStatus__, v69, v70, v71);
    sub_B5D5C4(&Method_WarehouseListMenu_EndServantStatus__, v72, v73, v74);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v87, v88, v89);
    byte_42E93CA = 1;
  }
  v90 = sub_B5D694(WarehouseListMenu___c__DisplayClass81_0_TypeInfo);
  WarehouseListMenu___c__DisplayClass81_0___ctor((WarehouseListMenu___c__DisplayClass81_0_o *)v90, 0LL);
  if ( !v90 )
    goto LABEL_128;
  *(_QWORD *)(v90 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v90 + 16), (System_Int32_array **)this, v93, v94, v95, v96, v97, v98);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectNumList,
    (System_Int32_array **)list,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
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
      Item = (System_Int32_array **)WarehouseListViewManager__GetItem(baseListViewManager, n, v105);
    }
    *(_QWORD *)(v90 + 24) = Item;
    v132 = (WarehouseListViewItem_o **)(v90 + 24);
    sub_B5D560(
      (BattleServantConfConponent_o *)(v90 + 24),
      Item,
      (System_String_array **)v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    if ( !*(_QWORD *)(v90 + 24) || !(*v132)->fields.isEnabled )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      this->fields.state = 2;
      v137 = this->fields.servantListViewManager;
      v138 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
      WarehouseListManager_CallbackFunc___ctor(
        v138,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        0LL);
      if ( v137 )
      {
        v137->fields.callbackFunc = v138;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v137->fields.callbackFunc,
          (System_Int32_array **)v138,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
        WarehouseListManager__SetMode_26296460(v137, 2, v145);
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
    if ( !*v132 )
      goto LABEL_128;
    userServantEntity = (*v132)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_128;
    v136 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v226.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v226.fields.fakeValue = v136;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v225 = v226;
    if ( dropList == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v225, 0LL) )
    {
LABEL_48:
      WarehouseListMenu__PushRequest(this, *v132, v133);
      return;
    }
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_128;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)baseListViewManager,
               dropList,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (WarehouseListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)baseListViewManager,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_128;
    v160 = (DataMasterBase_WarMaster__WarEntity__int__o *)baseListViewManager;
    v162 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
    v161 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v227.fields.currentCryptoKey = v162;
    *(_QWORD *)&v227.fields.fakeValue = v161;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v227,
                                                          0LL);
    if ( !v160 )
      goto LABEL_128;
    v163 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v160,
                                (int32_t)baseListViewManager,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v164 = LocalizationManager__Get((System_String_o *)StringLiteral_12147/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v165 = LocalizationManager__Get((System_String_o *)StringLiteral_12146/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v166 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity(Entity, 0LL);
    if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(Rarity, 0LL);
    if ( !v166 )
LABEL_128:
      sub_B5D69C(baseListViewManager, v92);
    v174 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( !v166->max_length )
      goto LABEL_129;
    v166->m_Items[0] = (Il2CppObject *)v174;
    sub_B5D560((BattleServantConfConponent_o *)v166->m_Items, v174, v168, v169, v170, v171, v172, v173);
    if ( !v163 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(v163, 0LL);
    v181 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v166->max_length <= 1 )
      goto LABEL_129;
    v166->m_Items[1] = (Il2CppObject *)v181;
    sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[1], v181, v175, v176, v177, v178, v179, v180);
    v182 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(Entity->fields.limitCount, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(v163, v182, -1, 0LL);
    v189 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v166->max_length <= 2 )
      goto LABEL_129;
    v166->m_Items[2] = (Il2CppObject *)v189;
    sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[2], v189, v183, v184, v185, v186, v187, v188);
    if ( !*v132 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v132)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    v190 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (WarehouseListViewManager_o *)Rarity__getRarityType(v190, 0LL);
    v197 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v166->max_length <= 3 )
      goto LABEL_129;
    v166->m_Items[3] = (Il2CppObject *)v197;
    sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[3], v197, v191, v192, v193, v194, v195, v196);
    if ( !*v132 )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)(*v132)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getClassName(
                                                          (ServantEntity_o *)baseListViewManager,
                                                          0LL);
    v204 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_130;
    }
    if ( v166->max_length <= 4 )
      goto LABEL_129;
    v166->m_Items[4] = (Il2CppObject *)v204;
    sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[4], v204, v198, v199, v200, v201, v202, v203);
    v205 = *v132;
    if ( !*v132 )
      goto LABEL_128;
    v206 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v205->fields.userServantEntity;
    if ( !v206 )
      goto LABEL_128;
    servantEntity = v205->fields.servantEntity;
    baseListViewManager = (WarehouseListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                          v206[6],
                                                          0LL);
    if ( !servantEntity )
      goto LABEL_128;
    baseListViewManager = (WarehouseListViewManager_o *)ServantEntity__getName(
                                                          servantEntity,
                                                          (int32_t)baseListViewManager,
                                                          -1,
                                                          0LL);
    v214 = (System_Int32_array **)baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = (WarehouseListViewManager_o *)sub_B5D684(
                                                            baseListViewManager,
                                                            v166->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_130:
        v224 = sub_B5D6BC(baseListViewManager);
        sub_B5D668(v224, 0LL);
      }
    }
    if ( v166->max_length > 5 )
    {
      v166->m_Items[5] = (Il2CppObject *)v214;
      sub_B5D560((BattleServantConfConponent_o *)&v166->m_Items[5], v214, v208, v209, v210, v211, v212, v213);
      v215 = System_String__Format_44656512(v165, v166, 0LL);
      v216 = LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v217 = LocalizationManager__Get((System_String_o *)StringLiteral_12144/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v219 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v219,
        (Il2CppObject *)v90,
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
        CommonUI__OpenConfirmDialog_18201384(
          Instance,
          v164,
          v215,
          v216,
          v217,
          v219,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_128;
    }
LABEL_129:
    v223 = sub_B5D6C8(baseListViewManager);
    sub_B5D668(v223, 0LL);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v105, (const MethodInfo *)v106);
      return;
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v111 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v111 )
    {
      if ( v111->fields.totalSum > v111->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v92) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v113 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v113,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v115 = this->fields.servantListViewManager;
            if ( !v115 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v115->fields.sendKeep;
            sendSum = v115->fields.sendSum;
            totalSum = v115->fields.totalSum;
            v119 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v113 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v113,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v222 = this->fields.servantListViewManager;
            if ( !v222 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v222->fields.sendKeep;
            sendSum = v222->fields.sendSum;
            totalSum = v222->fields.totalSum;
            v119 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v113 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v113,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v220 = this->fields.servantListViewManager;
            if ( !v220 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v220->fields.sendKeep;
            sendSum = v220->fields.sendSum;
            totalSum = v220->fields.totalSum;
            v119 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v113 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v113,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            v221 = this->fields.servantListViewManager;
            if ( !v221 || !warehouseConfirmMenu )
              goto LABEL_128;
            sendKeep = v221->fields.sendKeep;
            sendSum = v221->fields.sendSum;
            totalSum = v221->fields.totalSum;
            v119 = 11;
            break;
          default:
            return;
        }
        v158 = totalSum + sendSum;
        v131 = warehouseConfirmMenu;
        v157 = v113;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v129 = this->fields.warehouseConfirmMenu;
            v130 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v130,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v129 )
              goto LABEL_128;
            v131 = v129;
            v119 = 0;
            goto LABEL_69;
          case 1:
            v156 = this->fields.warehouseConfirmMenu;
            v130 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v130,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v156 )
              goto LABEL_128;
            v119 = 1;
            goto LABEL_68;
          case 2:
            v156 = this->fields.warehouseConfirmMenu;
            v130 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v130,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v156 )
              goto LABEL_128;
            v119 = 2;
            goto LABEL_68;
          case 3:
            v156 = this->fields.warehouseConfirmMenu;
            v130 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_B5D694(WarehouseConfirmMenu_CallbackFunc_TypeInfo);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v130,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              0LL);
            if ( !v156 )
              goto LABEL_128;
            v119 = 3;
LABEL_68:
            v131 = v156;
LABEL_69:
            v157 = v130;
            v158 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v131, v119, v157, v158, sendKeep, v114);
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
      v121 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v123 = (CommonUI_o *)v121;
      v124 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v124,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v123 )
        goto LABEL_128;
      v125 = v123;
      v126 = 0;
      goto LABEL_56;
    case 1:
      v154 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v149 = this->fields.selectNum;
      v155 = (CommonUI_o *)v154;
      v151 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v151,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v155 )
        goto LABEL_128;
      v153 = v155;
      v152 = 0;
      goto LABEL_61;
    case 2:
      v146 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v147 = (CommonUI_o *)v146;
      v124 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
      ServantStatusDialog_ResultDelegate___ctor(
        v124,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v147 )
        goto LABEL_128;
      v126 = 3;
      v125 = v147;
LABEL_56:
      CommonUI__OpenServantStatusDialog_18212632(v125, v126, selectNum, v124, 0LL, 0LL);
      break;
    case 3:
      v148 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v149 = this->fields.selectNum;
      v150 = (CommonUI_o *)v148;
      v151 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v151,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v150 )
        goto LABEL_128;
      v152 = 3;
      v153 = v150;
LABEL_61:
      CommonUI__OpenServantStatusDialog_18211624(v153, v152, v149, v151, 0LL, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WarehouseListMenu_c *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v35; // x5
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x5
  System_Action_o *v43; // x20
  unsigned __int128 v44; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_42E93BD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)setupinfo, callback);
    sub_B5D5C4(&Method_WarehouseListMenu_EndOpen__, v9, v10, v11);
    sub_B5D5C4(&WarehouseListMenu_TypeInfo, v12, v13, v14);
    byte_42E93BD = 1;
  }
  v44 = 0uLL;
  v15 = WarehouseListMenu_TypeInfo;
  if ( (BYTE3(WarehouseListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo);
    v15 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v15->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v44,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_13;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v44;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this->fields.setupInfo = setupinfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v32);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v35);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this->fields.setupInfo = setupinfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.setupInfo,
      (System_Int32_array **)setupinfo,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v42);
      this->fields.state = 1;
      v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v43, 0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(gameObject, v17);
  }
}


void __fastcall WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
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
  struct UserServantEntity_o *userServantEntity; // x19
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

  if ( (byte_42E93D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, (_DWORD)selectItem, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v27, v28, v29);
    byte_42E93D7 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  userServantEntity = selectItem->fields.userServantEntity;
  v33 = limitCountSupport;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v33 || !userServantEntity )
    goto LABEL_21;
  v34 = (UserServantCollectionMaster_o *)limitCountSupport;
  v35 = *(_QWORD *)&v33->fields.m_CachedPtr;
  v37 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
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
  v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  p_fields = &userServantEntity->fields;
  v41 = *(_QWORD *)&v33->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v39;
  v65 = v41;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v68 = v69;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v68, 0LL);
  v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v33->fields.writeMasterDataThread;
  v64 = v42;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v43;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v67, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v44,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v46 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v47 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v46;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.imageLimitCount,
          0LL);
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v52 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v57 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
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
void __fastcall WarehouseListMenu__SetTabKind(
        WarehouseListMenu_o *this,
        int32_t tabKind,
        int32_t modeKind,
        bool isInit,
        bool isModify,
        const MethodInfo *method)
{
  int32_t v8; // w21
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  bool v107; // w27
  __int64 servantListViewManager; // x0
  int v109; // w2
  __int64 v110; // x3
  __n128 inited; // q0
  float *v112; // x8
  float v113; // s8
  float v114; // s9
  float v115; // s10
  float v116; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v118; // x9
  float v119; // s12
  float v120; // s13
  float v121; // s14
  float v122; // s15
  int v123; // w20
  __int64 *v124; // x8
  float v125; // s3
  float v126; // s2
  float v127; // s1
  float v128; // s0
  System_String_o **v129; // x8
  bool v130; // w28
  UICommonButton_o *v131; // x25
  bool enabled; // w0
  __int64 *v133; // x8
  System_String_o **v134; // x8
  float v135; // s3
  float v136; // s2
  float v137; // s1
  float v138; // s0
  UICommonButton_o *servantEquipTabButton; // x25
  bool v140; // w0
  int v141; // w20
  System_String_o **v142; // x8
  System_String_o **v143; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v145; // w0
  System_String_o **v146; // x8
  System_String_o **v147; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v149; // w0
  System_String_o **v150; // x8
  const MethodInfo *v151; // x2
  const MethodInfo *v152; // x3
  struct WarehouseListManager_o **p_servantListViewManager; // x23
  struct WarehouseListManager_o **v154; // x23
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v156; // w1
  struct WarehouseListManager_o **v157; // x23
  const MethodInfo *v158; // x3
  __int64 *v159; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v161; // w0
  __int64 *v162; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v164; // w0
  __int64 *v165; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v167; // w0
  __int64 *v168; // x8
  UICommonButton_o *pushTabButton; // x24
  __int64 v170; // x8
  bool v171; // w0
  bool v172; // w24
  UILabel_o *explanationLabel; // x23
  __int64 *v174; // x8
  struct WarehouseListManager_o **v175; // x20
  UILabel_o *v176; // x23
  struct WarehouseListManager_o *v177; // x8
  int v178; // w9
  UILabel_o *v179; // x23
  UILabel_o *v180; // x23
  struct WarehouseListManager_o *v181; // x8
  struct WarehouseListManager_o *v182; // x21
  WarehouseListManager_CallbackFunc_o *v183; // x22
  System_String_array **v184; // x2
  System_String_array **v185; // x3
  System_Boolean_array **v186; // x4
  System_Int32_array **v187; // x5
  System_Int32_array *v188; // x6
  System_Int32_array *v189; // x7
  int32_t v190; // w1
  struct WarehouseListManager_o *v191; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v193; // [xsp+Ch] [xbp-94h]

  v8 = modeKind;
  if ( (byte_42E93BF & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, tabKind, modeKind, isInit);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17256/*"btn_txt_craftessence_off"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_17296/*"btn_txt_servant_off"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_19917/*"img_txt_cardspace"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_17347/*"button_push_reg"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_17348/*"button_push_unreg"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_17297/*"btn_txt_servant_on"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_17252/*"btn_txt_cardtoarchive_on"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_15469/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_15467/*"WAREHOUSE_EXPLANATION_LOCK"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_17177/*"btn_bg_25"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_17251/*"btn_txt_cardtoarchive_off"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_17257/*"btn_txt_craftessence_on"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_15470/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_15468/*"WAREHOUSE_EXPLANATION_PUSH"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_17240/*"btn_txt_archivetocard_on"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_19908/*"img_txt_archivespace"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_17239/*"btn_txt_archivetocard_off"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_15466/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_17176/*"btn_bg_24"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v104, v105, v106);
    byte_42E93BF = 1;
  }
  v107 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = (__int64)this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_228;
    WarehouseListManager__DestroyList((WarehouseListManager_o *)servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_228;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, tabKind, v109, v110);
    byte_42E563C = 1;
  }
  servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  v112 = *(float **)(servantListViewManager + 184);
  v113 = v112[20];
  v114 = v112[21];
  v115 = v112[22];
  v116 = v112[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, tabKind, v109, v110);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (*(_BYTE *)(servantListViewManager + 307) & 4) != 0 && !*(_DWORD *)(servantListViewManager + 224) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager);
    servantListViewManager = (__int64)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_228;
  v118 = *(float **)(servantListViewManager + 184);
  v119 = v118[24];
  v120 = v118[25];
  v121 = v118[26];
  v122 = v118[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v123 = tabKind | 2;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 2) != 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v124 = &StringLiteral_17297/*"btn_txt_servant_on"*/;
  if ( v123 != 2 )
    v124 = &StringLiteral_17296/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v124, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v125 = v123 == 2 ? v122 : v116;
  v126 = v123 == 2 ? v121 : v115;
  v127 = v123 == 2 ? v120 : v114;
  v128 = v123 == 2 ? v119 : v113;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v125 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v193 = isModify;
  v129 = (System_String_o **)(v123 == 2 ? &StringLiteral_17173/*"btn_bg_19"*/ : &StringLiteral_17171/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v129, 0LL);
  servantListViewManager = (__int64)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  v130 = !v107;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v107,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  v131 = this->fields.servantTabButton;
  if ( !v131 )
    goto LABEL_228;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v131, enabled, !v107, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v123 == 2, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v133 = &StringLiteral_17256/*"btn_txt_craftessence_off"*/;
  if ( v123 != 2 )
    v133 = &StringLiteral_17257/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v133, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v134 = (System_String_o **)(v123 == 2 ? &StringLiteral_17171/*"btn_bg_12"*/ : &StringLiteral_17173/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v134, 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabLabel;
  if ( !servantListViewManager )
    goto LABEL_228;
  v135 = v123 == 2 ? v116 : v122;
  v136 = v123 == 2 ? v115 : v121;
  v137 = v123 == 2 ? v114 : v120;
  v138 = v123 == 2 ? v113 : v119;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)(&v135 - 3), 0LL);
  servantListViewManager = (__int64)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v107,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_228;
  v140 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v140, v130, 0LL);
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
  v141 = tabKind | 1;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, (tabKind | 1) == 3, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v142 = (System_String_o **)&StringLiteral_17251/*"btn_txt_cardtoarchive_off"*/;
  if ( v141 != 3 )
    v142 = (System_String_o **)&StringLiteral_17252/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v142, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v143 = (System_String_o **)(v141 == 3 ? &StringLiteral_17176/*"btn_bg_24"*/ : &StringLiteral_17177/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v143, 0LL);
  servantListViewManager = (__int64)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v107,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_228;
  v145 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v145, v130, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v141 != 3, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v146 = (System_String_o **)&StringLiteral_17240/*"btn_txt_archivetocard_on"*/;
  if ( v141 != 3 )
    v146 = (System_String_o **)&StringLiteral_17239/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v146, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v147 = (System_String_o **)(v141 == 3 ? &StringLiteral_17177/*"btn_bg_25"*/ : &StringLiteral_17176/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v147, 0LL);
  servantListViewManager = (__int64)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_228;
  servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                    + 536LL))(
                             servantListViewManager,
                             0LL,
                             !v107,
                             *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_228;
  v149 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v149, v130, 0LL);
  servantListViewManager = (__int64)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_228;
  v150 = (System_String_o **)&StringLiteral_19917/*"img_txt_cardspace"*/;
  if ( v141 != 3 )
    v150 = (System_String_o **)&StringLiteral_19908/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v150, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( v107 || this->fields.tabKind )
      {
        p_servantListViewManager = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          0,
          this->fields.setupInfo,
          v152);
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
      if ( v107 )
        goto LABEL_135;
      goto LABEL_134;
    case 1:
      if ( !v107 && this->fields.tabKind == 1 )
        goto LABEL_118;
      v154 = &this->fields.servantListViewManager;
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_228;
      setupInfo = this->fields.setupInfo;
      v156 = 1;
      goto LABEL_130;
    case 2:
      if ( v107 || this->fields.tabKind != 2 )
      {
        v157 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListManager__CreateList(
          (WarehouseListManager_o *)servantListViewManager,
          2,
          this->fields.setupInfo,
          v152);
      }
      else
      {
        v157 = &this->fields.servantListViewManager;
      }
      if ( !*v157 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v157)->fields.filterButton;
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
        v8 = 0;
        if ( v107 )
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
        if ( v107 )
          goto LABEL_135;
      }
LABEL_134:
      if ( v8 == this->fields.modeKind )
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 0, 0LL);
      servantListViewManager = (__int64)this->fields.statusTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v159 = &StringLiteral_17349/*"button_select_reg"*/;
      if ( v8 )
        v159 = &StringLiteral_17350/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v159, 0LL);
      servantListViewManager = (__int64)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v107,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_228;
      v161 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v161, v130, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 1, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v162 = &StringLiteral_17335/*"button_alllock_reg"*/;
      if ( v8 != 1 )
        v162 = &StringLiteral_17336/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v162, 0LL);
      servantListViewManager = (__int64)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v107,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_228;
      v164 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v164, v130, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 2, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v165 = &StringLiteral_17333/*"button_allchoice_reg"*/;
      if ( v8 != 2 )
        v165 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v165, 0LL);
      servantListViewManager = (__int64)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      servantListViewManager = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)servantListViewManager
                                                                                        + 536LL))(
                                 servantListViewManager,
                                 0LL,
                                 !v107,
                                 *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_228;
      v167 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v167, v130, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 3 && v141 != 3, 0LL);
      servantListViewManager = (__int64)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_228;
      v168 = &StringLiteral_17347/*"button_push_reg"*/;
      if ( v8 != 3 )
        v168 = &StringLiteral_17348/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v168, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( v141 == 3 )
      {
        if ( !pushTabButton )
          goto LABEL_228;
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v130, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v170 = *(_QWORD *)servantListViewManager;
      }
      else
      {
        if ( !pushTabButton )
          goto LABEL_228;
        v171 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v171, v130, 0LL);
        servantListViewManager = (__int64)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_228;
        v170 = *(_QWORD *)servantListViewManager;
      }
      servantListViewManager = (*(__int64 (**)(void))(v170 + 536))();
      break;
    case 3:
      if ( v107 || this->fields.tabKind != 3 )
      {
        v154 = &this->fields.servantListViewManager;
        servantListViewManager = (__int64)this->fields.servantListViewManager;
        if ( !servantListViewManager )
          goto LABEL_228;
        setupInfo = this->fields.setupInfo;
        v156 = 3;
LABEL_130:
        WarehouseListManager__CreateList((WarehouseListManager_o *)servantListViewManager, v156, setupInfo, v152);
      }
      else
      {
LABEL_118:
        v154 = &this->fields.servantListViewManager;
      }
      if ( !*v154 )
        goto LABEL_228;
      servantListViewManager = (__int64)(*v154)->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_228;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)servantListViewManager + 536LL))(
        servantListViewManager,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)servantListViewManager + 544LL));
      servantListViewManager = WarehouseListMenu__HidePushButton(this, v8, 0, v158);
      v8 = servantListViewManager;
      if ( !v107 )
        goto LABEL_134;
      goto LABEL_135;
    default:
      goto LABEL_107;
  }
  v172 = v193;
  switch ( v8 )
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
        v174 = &StringLiteral_15469/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
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
        v174 = &StringLiteral_15470/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)*v174, 0LL);
      if ( !explanationLabel )
        goto LABEL_228;
      UILabel__set_text(explanationLabel, (System_String_o *)servantListViewManager, 0LL);
LABEL_210:
      v175 = &this->fields.servantListViewManager;
      v181 = this->fields.servantListViewManager;
      if ( !v181 )
        goto LABEL_228;
      if ( v181->fields.modeKind )
        v181->fields.modeKind = 0;
LABEL_213:
      servantListViewManager = (__int64)this->fields.servantListViewManager;
      this->fields.isInitTab = 1;
      this->fields.tabKind = tabKind;
      this->fields.modeKind = v8;
      if ( !servantListViewManager )
        goto LABEL_228;
      if ( this->fields.state == 2 )
      {
        servantListViewManager = *(_QWORD *)(servantListViewManager + 24);
        if ( !servantListViewManager )
          goto LABEL_228;
        WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)servantListViewManager, v8 == 3, v151);
        v182 = this->fields.servantListViewManager;
        v183 = (WarehouseListManager_CallbackFunc_o *)sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
        WarehouseListManager_CallbackFunc___ctor(
          v183,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          0LL);
        if ( !v182 )
          goto LABEL_228;
        v182->fields.callbackFunc = v183;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v182->fields.callbackFunc,
          (System_Int32_array **)v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          v189);
        v190 = 2;
        servantListViewManager = (__int64)v182;
      }
      else
      {
        v190 = 1;
      }
      WarehouseListManager__SetMode_26296460((WarehouseListManager_o *)servantListViewManager, v190, v151);
      if ( !v107 && v172 )
      {
        if ( *v175 )
        {
          servantListViewManager = (__int64)(*v175)->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_223;
          }
        }
LABEL_228:
        sub_B5D69C(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_223:
      v191 = this->fields.servantListViewManager;
      if ( !v191 )
        goto LABEL_228;
      servantListViewManager = (__int64)v191->fields.baseListViewManager;
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
      v176 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15467/*"WAREHOUSE_EXPLANATION_LOCK"*/, 0LL);
      if ( !v176 )
        goto LABEL_228;
      UILabel__set_text(v176, (System_String_o *)servantListViewManager, 0LL);
      v175 = &this->fields.servantListViewManager;
      v177 = this->fields.servantListViewManager;
      if ( !v177 )
        goto LABEL_228;
      if ( v177->fields.modeKind == 1 )
        goto LABEL_213;
      v178 = 1;
      goto LABEL_198;
    case 2:
      v179 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15466/*"WAREHOUSE_EXPLANATION_CHOICE"*/, 0LL);
      if ( !v179 )
        goto LABEL_228;
      UILabel__set_text(v179, (System_String_o *)servantListViewManager, 0LL);
      v175 = &this->fields.servantListViewManager;
      v177 = this->fields.servantListViewManager;
      if ( !v177 )
        goto LABEL_228;
      if ( v177->fields.modeKind == 2 )
        goto LABEL_213;
      v178 = 2;
      goto LABEL_198;
    case 3:
      v180 = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantListViewManager = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_15468/*"WAREHOUSE_EXPLANATION_PUSH"*/, 0LL);
      if ( !v180 )
        goto LABEL_228;
      UILabel__set_text(v180, (System_String_o *)servantListViewManager, 0LL);
      v175 = &this->fields.servantListViewManager;
      v177 = this->fields.servantListViewManager;
      if ( !v177 )
        goto LABEL_228;
      if ( v177->fields.modeKind == 3 )
        goto LABEL_213;
      v178 = 3;
LABEL_198:
      v177->fields.modeKind = v178;
      goto LABEL_213;
    default:
      v172 = v193;
      v175 = &this->fields.servantListViewManager;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v16; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w3
  bool v28; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  NetworkManager_ResultCallbackFunc_o *v36; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E93C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    this = (WarehouseListMenu_o *)sub_B5D5C4(&Method_WarehouseListMenu_EndStatusSync__, v12, v13, v14);
    byte_42E93C9 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v36, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v36,
                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v28 = 1;
        v26 = 0;
        v27 = (v5->fields.tabKind | 1) == 3;
        goto LABEL_21;
      }
LABEL_25:
      sub_B5D69C(this, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    v16 = v5->fields.servantListViewManager;
    if ( !v16 )
      goto LABEL_25;
    this = (WarehouseListMenu_o *)v16->fields.baseListViewManager;
    if ( !this )
      goto LABEL_25;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v5->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v23,
                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = (v5->fields.tabKind | 1) == 3;
        v28 = 0;
LABEL_21:
        CardStatusSyncRequest__beginRequest((CardStatusSyncRequest_o *)this, v25, v24, v27, v26, v28, 0LL);
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
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListMenu_o *v11; // x0
  WarehouseListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E93BB & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93BB = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v8->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListMenu_o *)sub_B5D990(v8);
  WarehouseListMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WarehouseListMenu__remove_callbackFunc(
        WarehouseListMenu_o *this,
        WarehouseListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct WarehouseListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E93BC & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E93BC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseListMenu_CallbackFunc_c *)v8->klass != WarehouseListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseListMenu_o *)sub_B5D990(v8);
  WarehouseListMenu__GetMode(v11, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5FF0 & 1) == 0 )
  {
    sub_B5D5C4(&WarehouseListMenu_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5FF0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
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
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  WarehouseListMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

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
    v6 = (WarehouseListMenu_CallbackFunc_o **)(v3 + 32);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5FF1 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5FF1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WarehouseListMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (WarehouseListMenu_RequestCallbackFunc_o **)(v3 + 32);
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
  struct WarehouseListMenu_o *_4__this; // x8
  struct WarehouseListMenu_o *v23; // x20
  WarehouseListManager_o *servantListViewManager; // x19
  __int64 v25; // x21
  __int64 v26; // x9

  if ( (byte_42E5FEF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&WarehouseListManager_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v12, v13, v14);
    sub_B5D5C4(&Method_WarehouseListMenu_OnSelectServant__, v15, v16, v17);
    byte_42E5FEF = 1;
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
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
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
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  servantListViewManager = v23->fields.servantListViewManager;
  v25 = sub_B5D694(WarehouseListManager_CallbackFunc_TypeInfo);
  v26 = *(_QWORD *)Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v25 + 40) = Method_WarehouseListMenu_OnSelectServant__;
  *(_QWORD *)(v25 + 16) = v26;
  *(_QWORD *)(v25 + 32) = v23;
  sub_B5D560(v25 + 32);
  if ( !servantListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode(servantListViewManager, 2, (WarehouseListManager_CallbackFunc_o *)v25, 0LL);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  WarehouseListMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  WarehouseListMenu__PushRequest(_4__this, this->fields.item, 0LL);
}