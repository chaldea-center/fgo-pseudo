void __fastcall WarehouseListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B141A0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_436/*"#4C4C4C"*/, v8, v9);
    byte_4B141A0 = 1;
  }
  WarehouseListMenu_TypeInfo->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE = (struct System_String_o *)StringLiteral_436/*"#4C4C4C"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarehouseListMenu_TypeInfo->static_fields,
    StringLiteral_436/*"#4C4C4C"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarehouseListMenu___ctor(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1419F & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B1419F = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__Callback(
        WarehouseListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x21
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, result);
  }
  UISprite__set_spriteName(scaleChageTabSprite, (System_String_o *)this, 0LL);
}


void __fastcall WarehouseListMenu__Close(WarehouseListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseListMenu__Close_36493428(this, 0LL, v2);
}


void __fastcall WarehouseListMenu__Close_36493428(
        WarehouseListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v14; // x5
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x20

  if ( (byte_4B14184 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClose__, v10, v11);
    byte_4B14184 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v14);
  v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_WarehouseListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v18, 0LL);
}


void __fastcall WarehouseListMenu__EndCardFavoriteRequest(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  struct WarehouseListManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  WarehouseListManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  v3 = this;
  if ( (byte_4B1419E & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, result, method);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v4, v5);
    byte_4B1419E = 1;
  }
  servantListViewManager = v3->fields.servantListViewManager;
  v3->fields.state = 2;
  if ( !servantListViewManager
    || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL
    || (WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)this, 1, method),
        v7 = v3->fields.servantListViewManager,
        v11 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(
                                                       WarehouseListManager_CallbackFunc_TypeInfo,
                                                       v8,
                                                       v9,
                                                       v10),
        WarehouseListManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)v3,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(this, result);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.callbackFunc, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  WarehouseListManager__SetMode_36480924(v7, 2, v19);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v6);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v6);
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
          WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1BCAA3C(this, isRequest);
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
          WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v9);
        }
LABEL_13:
        this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
        if ( this )
        {
          WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 2, method);
          return;
        }
LABEL_15:
        sub_1BCAA3C(this, isRequest);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v9);
  }
LABEL_11:
  this = (WarehouseListMenu_o *)v5->fields.servantListViewManager;
  if ( !this )
    goto LABEL_13;
  WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 2, method);
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
      sub_1BCAA3C(baseListViewManager, v6);
    }
    WarehouseListManager__SetMode_36480924(baseListViewManager, 3, v13);
  }
LABEL_11:
  baseListViewManager = this->fields.servantListViewManager;
  if ( !baseListViewManager )
    goto LABEL_13;
  WarehouseListManager__SetMode_36480924(baseListViewManager, 2, v7);
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
      sub_1BCAA3C(this, isRequest);
    }
    WarehouseListManager__SetMode_36480924((WarehouseListManager_o *)this, 3, v6);
  }
  WarehouseListMenu__SetTabKind(v4, v4->fields.tabKind, 0, 0, 0, v3);
}


void __fastcall WarehouseListMenu__EndClose(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  WarehouseListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B14197 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v5, v6);
    byte_4B14197 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v9);
  if ( !servantListViewManager )
    sub_1BCAA3C(v10, v11);
  servantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_36480924(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseConfirmMoveDecide(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x5
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4B14194 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndNotificationMove__, v5, v6);
    byte_4B14194 = 1;
  }
  switch ( this->fields.tabKind )
  {
    case 0:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v9);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 4;
      goto LABEL_12;
    case 1:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v15);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 5;
      goto LABEL_12;
    case 2:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v14);
      if ( !warehouseConfirmMenu )
        goto LABEL_13;
      v13 = 6;
      goto LABEL_12;
    case 3:
      warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
      v8 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
      WarehouseConfirmMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndNotificationMove__,
        v16);
      if ( !warehouseConfirmMenu )
LABEL_13:
        sub_1BCAA3C(v10, v11);
      v13 = 7;
LABEL_12:
      WarehouseConfirmMenu__Open(warehouseConfirmMenu, v13, v8, 0, 0, v12);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B14196 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v5, v6);
    byte_4B14196 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v9);
  if ( !servantListViewManager )
    sub_1BCAA3C(v10, v11);
  servantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_36480924(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseServantEquipStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B1419B & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v5, v6);
    byte_4B1419B = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v9);
  if ( !servantListViewManager )
    sub_1BCAA3C(v10, v11);
  servantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_36480924(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseServantStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct WarehouseListManager_o *servantListViewManager; // x20
  WarehouseListManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B14199 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v5, v6);
    byte_4B14199 = 1;
  }
  this->fields.state = 2;
  servantListViewManager = this->fields.servantListViewManager;
  v8 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(WarehouseListManager_CallbackFunc_TypeInfo, method, v2, v3);
  WarehouseListManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v9);
  if ( !servantListViewManager )
    sub_1BCAA3C(v10, v11);
  servantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  WarehouseListManager__SetMode_36480924(servantListViewManager, 2, v18);
}


void __fastcall WarehouseListMenu__EndCloseServantStatusQuestJump(WarehouseListMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct WarehouseListMenu_CallbackFunc_o *callbackFunc; // x19
  PartyOrganizationUtility_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 3;
  if ( callbackFunc )
  {
    p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      2LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmMove(WarehouseListMenu_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  WarehouseListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4B14191 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, v8, v9);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndConfirmRequestLock__, v10, v11);
    byte_4B14191 = 1;
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
      v12 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         isDecide,
                                                         method,
                                                         v3);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndConfirmRequestLock__,
        v13);
      WarehouseListMenu__StatusRequest(this, v12, v14);
    }
  }
  else
  {
    warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
    v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveCancel__, 0LL);
    if ( !warehouseConfirmMenu )
      sub_1BCAA3C(v17, v18);
    WarehouseConfirmMenu__Close_36469868(warehouseConfirmMenu, v16, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndConfirmRequestLock(
        WarehouseListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned int tabKind; // w8
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  __int64 v19; // x1

  if ( (byte_4B14192 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_StorageTakeinRequest___, isRequest, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_StorageTakeoutRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndRequestWarehouse__, v11, v12);
    byte_4B14192 = 1;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind < 2 )
  {
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Request_object = NetworkManager__getRequest_object_(
                       v18,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_StorageTakeinRequest___);
    if ( !Request_object )
      goto LABEL_14;
    StorageTakeinRequest__beginRequest((StorageTakeinRequest_o *)Request_object, this->fields.selectNumList, 0LL);
  }
  else if ( (tabKind & 0xFFFFFFFE) == 2 )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRequest,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndRequestWarehouse__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_StorageTakeoutRequest___);
    if ( Request_object )
    {
      StorageTakeoutRequest__beginRequest((StorageTakeoutRequest_o *)Request_object, this->fields.selectNumList, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Request_object, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndNotificationMove(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B14195 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, v5, v6);
    byte_4B14195 = 1;
  }
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseNotificationMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1BCAA3C(v9, v10);
  WarehouseConfirmMenu__Close_36469868(warehouseConfirmMenu, v8, v11);
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
  __int64 v6; // x2
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B14193 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, v5, v6);
    byte_4B14193 = 1;
  }
  tabKind = this->fields.tabKind;
  modeKind = this->fields.modeKind;
  this->fields.isModify = 1;
  WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 1, 0, v3);
  warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_WarehouseListMenu_EndCloseConfirmMoveDecide__, 0LL);
  if ( !warehouseConfirmMenu )
    sub_1BCAA3C(v14, v15);
  WarehouseConfirmMenu__Close_36469868(warehouseConfirmMenu, v13, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu__EndServantEquipStatus(
        WarehouseListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WarehouseListMenu_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21

  v4 = this;
  if ( (byte_4B1419A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseServantEquipStatus__, v7, v8);
    byte_4B1419A = 1;
  }
  if ( isDecide )
  {
    servantListViewManager = v4->fields.servantListViewManager;
    v4->fields.isModify = 1;
    if ( !servantListViewManager
      || (this = (WarehouseListMenu_o *)servantListViewManager->fields.baseListViewManager) == 0LL )
    {
LABEL_9:
      sub_1BCAA3C(this, isDecide);
    }
    WarehouseListViewManager__ModifyItem((WarehouseListViewManager_o *)this, v4->fields.selectNum, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)v4, Method_WarehouseListMenu_EndCloseServantEquipStatus__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  Il2CppObject *Instance; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x0
  bool v21; // cc
  System_Action_o *v22; // x20
  __int64 *v23; // x8

  v8 = this;
  if ( (byte_4B14198 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseServantStatusQuestJump__, v11, v12);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_EndCloseServantStatus__, v13, v14);
    byte_4B14198 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
  v21 = questId < 1;
  v22 = v20;
  if ( v21 )
    v23 = &Method_WarehouseListMenu_EndCloseServantStatus__;
  else
    v23 = &Method_WarehouseListMenu_EndCloseServantStatusQuestJump__;
  System_Action___ctor(v20, (Il2CppObject *)v8, *v23, 0LL);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(this, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v22, 0LL);
}


void __fastcall WarehouseListMenu__EndStatusSync(
        WarehouseListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct WarehouseListMenu_RequestCallbackFunc_o *requedstCallback; // x19
  PartyOrganizationUtility_o *p_requedstCallback; // x0

  requedstCallback = this->fields.requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback = (PartyOrganizationUtility_o *)&this->fields.requedstCallback;
    p_requedstCallback->klass = 0LL;
    sub_1BCA784(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(pushTabSprite, *(_QWORD *)&modeKind);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(servantListViewManager, method);
  }
  return v5->fields.totalSum - friendShipSum[0] > v5->fields.sendMax;
}


void __fastcall WarehouseListMenu__OnClickCancel(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B14186 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickCancel__, v6, v7);
    byte_4B14186 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_WarehouseListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickCancel__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    modeKind = this->fields.modeKind;
    this->fields.state = 3;
    if ( (unsigned int)(modeKind - 1) > 1 )
    {
      WarehouseListMenu__Callback(this, 0, v11, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v10,
                                                         v11,
                                                         v12);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickCancel__,
        v15);
      WarehouseListMenu__StatusRequest(this, v14, v16);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickScaleChage(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B1419C & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_ChangeIconScale__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickScaleChage__, v6, v7);
    byte_4B1419C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_WarehouseListMenu_OnClickScaleChage__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickScaleChage__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickScaleChage__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                       WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_ChangeIconScale__,
      v14);
    WarehouseListMenu__StatusRequest(this, v13, v15);
  }
}


void __fastcall WarehouseListMenu__OnClickTabChoice(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo *v13; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v19; // x20
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4B1418D & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabChoice__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabChoice__, v6, v7);
    byte_4B1418D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_WarehouseListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabChoice__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v15 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabChoice__,
          v16);
        WarehouseListMenu__StatusRequest(this, v15, v17);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1BCAA3C(0LL, v18);
        WarehouseListManager__ReleaseAll(servantListViewManager, v18);
        return;
      }
      v19 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v10,
                                                         v11,
                                                         v12);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabChoice__,
        v20);
      WarehouseListMenu__StatusRequest(this, v19, v21);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 2, 0, 0, v13);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabLock(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  const MethodInfo *v13; // x5
  int32_t modeKind; // w8
  WarehouseListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  WarehouseListMenu_RequestCallbackFunc_o *v19; // x20
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4B1418C & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabLock__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabLock__, v6, v7);
    byte_4B1418C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_WarehouseListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v15 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12);
        WarehouseListMenu_RequestCallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_WarehouseListMenu_EndClickTabLock__,
          v16);
        WarehouseListMenu__StatusRequest(this, v15, v17);
LABEL_12:
        servantListViewManager = this->fields.servantListViewManager;
        if ( !servantListViewManager )
          sub_1BCAA3C(0LL, v18);
        WarehouseListManager__ReleaseAll(servantListViewManager, v18);
        return;
      }
      v19 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v10,
                                                         v11,
                                                         v12);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndClickTabLock__,
        v20);
      WarehouseListMenu__StatusRequest(this, v19, v21);
    }
    WarehouseListMenu__SetTabKind(this, this->fields.tabKind, 1, 0, 0, v13);
    goto LABEL_12;
  }
}


void __fastcall WarehouseListMenu__OnClickTabPush(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  WarehouseListManager_o *servantListViewManager; // x0

  if ( (byte_4B1418E & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabPush__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabPush__, v6, v7);
    byte_4B1418E = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v8 = Method_WarehouseListMenu_OnClickTabPush__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPush__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabPush__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                       WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabPush__,
      v14);
    WarehouseListMenu__StatusRequest(this, v13, v15);
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      sub_1BCAA3C(0LL, v16);
    WarehouseListManager__ReleaseAll(servantListViewManager, v16);
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutIn(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  v3 = this;
  if ( (byte_4B14189 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabPutIn__, v4, v5);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabPutIn__, v6, v7);
    byte_4B14189 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantListViewManager = v3->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BCAA3C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v9 = Method_WarehouseListMenu_OnClickTabPutIn__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutIn__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabPutIn__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( (unsigned int)(v3->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutIn(v3, 0, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        Method_WarehouseListMenu_EndClickTabPutIn__,
        v15);
      WarehouseListMenu__StatusRequest(v3, v14, v16);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabPutOut(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  v3 = this;
  if ( (byte_4B1418A & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabPutOut__, v4, v5);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabPutOut__, v6, v7);
    byte_4B1418A = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantListViewManager = v3->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BCAA3C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v9 = Method_WarehouseListMenu_OnClickTabPutOut__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabPutOut__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabPutOut__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( (unsigned int)(v3->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabPutOut(v3, 0, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        Method_WarehouseListMenu_EndClickTabPutOut__,
        v15);
      WarehouseListMenu__StatusRequest(v3, v14, v16);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServant(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  v3 = this;
  if ( (byte_4B14187 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabServant__, v4, v5);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabServant__, v6, v7);
    byte_4B14187 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantListViewManager = v3->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BCAA3C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v9 = Method_WarehouseListMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( (unsigned int)(v3->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServant(v3, 0, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        Method_WarehouseListMenu_EndClickTabServant__,
        v15);
      WarehouseListMenu__StatusRequest(v3, v14, v16);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabServantEquip(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarehouseListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarehouseListManager_o *servantListViewManager; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  v3 = this;
  if ( (byte_4B14188 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabServantEquip__, v4, v5);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabServantEquip__, v6, v7);
    byte_4B14188 = 1;
  }
  if ( v3->fields.state == 2 )
  {
    servantListViewManager = v3->fields.servantListViewManager;
    if ( !servantListViewManager || !servantListViewManager->fields.baseListViewManager )
      sub_1BCAA3C(this, method);
    WarehouseListViewManager__SaveSortInfo((WarehouseListViewManager_o *)this, method);
    v9 = Method_WarehouseListMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabServantEquip__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( (unsigned int)(v3->fields.modeKind - 1) > 1 )
    {
      WarehouseListMenu__EndClickTabServantEquip(v3, 0, v12);
    }
    else
    {
      v14 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                         v11,
                                                         v12,
                                                         v13);
      WarehouseListMenu_RequestCallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        Method_WarehouseListMenu_EndClickTabServantEquip__,
        v15);
      WarehouseListMenu__StatusRequest(v3, v14, v16);
    }
  }
}


void __fastcall WarehouseListMenu__OnClickTabStatus(WarehouseListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  WarehouseListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B1418B & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_RequestCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndClickTabStatus__, v4, v5);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnClickTabStatus__, v6, v7);
    byte_4B1418B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_WarehouseListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnClickTabStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (WarehouseListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                       WarehouseListMenu_RequestCallbackFunc_TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12);
    WarehouseListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_WarehouseListMenu_EndClickTabStatus__,
      v14);
    WarehouseListMenu__StatusRequest(this, v13, v15);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x20
  int64_t baseListViewManager; // x0
  const MethodInfo *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  __int64 v84; // x2
  __int64 v85; // x3
  struct WarehouseListManager_o *v86; // x8
  struct WarehouseConfirmMenu_o *warehouseConfirmMenu; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v88; // x21
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x5
  struct WarehouseListManager_o *v91; // x8
  int32_t sendKeep; // w4
  int32_t sendSum; // w9
  int32_t totalSum; // w10
  int32_t v95; // w1
  struct WarehouseListManager_o *servantListViewManager; // x8
  WarehouseListViewItem_o *Item; // x1
  _QWORD *v98; // x0
  System_Reflection_MethodBase_o *v99; // x0
  int32_t tabKind; // w8
  Il2CppObject *v101; // x0
  int64_t selectNum; // x20
  Il2CppObject *v103; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  ServantStatusDialog_ResultDelegate_o *v107; // x22
  CommonUI_o *v108; // x0
  int32_t v109; // w1
  struct WarehouseConfirmMenu_o *v110; // x20
  WarehouseConfirmMenu_CallbackFunc_o *v111; // x21
  const MethodInfo *v112; // x3
  WarehouseConfirmMenu_o *v113; // x0
  WarehouseListViewItem_o **v114; // x21
  _QWORD *v115; // x0
  System_Reflection_MethodBase_o *v116; // x0
  const MethodInfo *v117; // x2
  int64_t v118; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v120; // q1
  _QWORD *v121; // x0
  System_Reflection_MethodBase_o *v122; // x0
  struct WarehouseListManager_o *v123; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  WarehouseListManager_CallbackFunc_o *v127; // x21
  const MethodInfo *v128; // x3
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  const MethodInfo *v135; // x2
  Il2CppObject *v136; // x0
  int64_t v137; // x20
  Il2CppObject *v138; // x21
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  ServantStatusDialog_EndDelegate_o *v142; // x22
  CommonUI_o *v143; // x0
  int32_t v144; // w1
  Il2CppObject *v145; // x0
  Il2CppObject *v146; // x21
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  Il2CppObject *v150; // x0
  Il2CppObject *v151; // x21
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  struct WarehouseConfirmMenu_o *v155; // x20
  const MethodInfo *v156; // x3
  const MethodInfo *v157; // x3
  const MethodInfo *v158; // x3
  WarehouseConfirmMenu_CallbackFunc_o *v159; // x2
  int32_t v160; // w3
  Il2CppObject *Entity; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v162; // x19
  void *monitor; // x22
  Il2CppClass *klass; // x23
  __int64 v165; // x1
  Il2CppObject *v166; // x25
  System_String_o *v167; // x19
  System_String_o *v168; // x22
  System_Object_array *v169; // x23
  __int64 v170; // x1
  int32_t Rarity; // w26
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  int64_t v178; // x26
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x26
  int32_t v186; // w0
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  int64_t v193; // x24
  int32_t v194; // w0
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  int64_t v201; // x24
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  int64_t v208; // x24
  WarehouseListViewItem_o *v209; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v210; // x9
  ServantEntity_o *servantEntity; // x21
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int64_t v218; // x21
  System_String_o *v219; // x21
  System_String_o *v220; // x22
  System_String_o *v221; // x23
  Il2CppObject *Instance; // x24
  __int64 v223; // x1
  __int64 v224; // x2
  __int64 v225; // x3
  CommonConfirmDialog_ClickDelegate_o *v226; // x25
  const MethodInfo *v227; // x3
  struct WarehouseListManager_o *v228; // x8
  const MethodInfo *v229; // x3
  struct WarehouseListManager_o *v230; // x8
  const MethodInfo *v231; // x3
  struct WarehouseListManager_o *v232; // x8
  __int64 v233; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v234; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v235; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v236; // 0:x0.16

  if ( (byte_4B14190 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&result, list);
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, v11, v12);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v21, v22);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&object___TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31, v32);
    sub_1BCA7E0(&Rarity_TypeInfo, v33, v34);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__, v41, v42);
    sub_1BCA7E0(&WarehouseListMenu___c__DisplayClass81_0_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndConfirmMove__, v45, v46);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndServantEquipStatus__, v47, v48);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndServantStatus__, v49, v50);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v51, v52);
    sub_1BCA7E0(&StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v59, v60);
    byte_4B14190 = 1;
  }
  v61 = sub_1BCAA2C(WarehouseListMenu___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&result, list, *(_QWORD *)&n);
  System_Object___ctor((Il2CppObject *)v61, 0LL);
  if ( !v61 )
    goto LABEL_119;
  *(_QWORD *)(v61 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 16), (int64_t)this, v64, v65, v66, v67, v68, v69);
  if ( this->fields.state != 2 )
    return;
  this->fields.state = 3;
  this->fields.selectNum = 0LL;
  this->fields.selectNumList = list;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectNumList, (int64_t)list, v70, v71, v72, v73, v74, v75);
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
      baseListViewManager = (int64_t)servantListViewManager->fields.baseListViewManager;
      if ( !baseListViewManager )
        goto LABEL_119;
      Item = WarehouseListViewManager__GetItem((WarehouseListViewManager_o *)baseListViewManager, n, v76);
    }
    *(_QWORD *)(v61 + 24) = Item;
    v114 = (WarehouseListViewItem_o **)(v61 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 24), (int64_t)Item, (int64_t)v76, (int32_t)v77, v78, v79, v80, v81);
    if ( !*(_QWORD *)(v61 + 24) || !(*v114)->fields.isEnabled )
    {
      v121 = Method_WarehouseListMenu_OnSelectServant__;
      if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
        v121 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnSelectServant__);
      v122 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v121, v121[4]);
      OverwriteAssetSoundName__PlaySystemSe(v122, 2, 0LL);
      this->fields.state = 2;
      v123 = this->fields.servantListViewManager;
      v127 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(
                                                      WarehouseListManager_CallbackFunc_TypeInfo,
                                                      v124,
                                                      v125,
                                                      v126);
      WarehouseListManager_CallbackFunc___ctor(
        v127,
        (Il2CppObject *)this,
        (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
        v128);
      if ( v123 )
      {
        v123->fields.callbackFunc = v127;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v123->fields.callbackFunc,
          (int64_t)v127,
          v129,
          v130,
          v131,
          v132,
          v133,
          v134);
        WarehouseListManager__SetMode_36480924(v123, 2, v135);
        return;
      }
      goto LABEL_119;
    }
    v115 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v115 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnSelectServant__);
    v116 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v115, v115[4]);
    OverwriteAssetSoundName__PlaySystemSe(v116, 0, 0LL);
    baseListViewManager = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseListViewManager )
      goto LABEL_119;
    v118 = *(_QWORD *)(baseListViewManager + 120);
    if ( !v118 )
      goto LABEL_44;
    if ( !*v114 )
      goto LABEL_119;
    userServantEntity = (*v114)->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_119;
    v120 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
    *(_OWORD *)&v235.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v235.fields.fakeValue = v120;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v63);
    v234 = v235;
    if ( v118 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v234, 0LL) )
    {
LABEL_44:
      WarehouseListMenu__PushRequest(this, *v114, v117);
      return;
    }
    baseListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseListViewManager,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !baseListViewManager )
      goto LABEL_119;
    Entity = DataMasterBase_object__object__long___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager,
               v118,
               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    baseListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (int64_t)DataManager__GetMasterData_object_(
                                     (DataManager_o *)baseListViewManager,
                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Entity )
      goto LABEL_119;
    v162 = (DataMasterBase_TMaster__TEntity__PKType__o *)baseListViewManager;
    klass = Entity[5].klass;
    monitor = Entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v63);
    *(_QWORD *)&v236.fields.currentCryptoKey = klass;
    *(_QWORD *)&v236.fields.fakeValue = monitor;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v236, 0LL);
    if ( !v162 )
      goto LABEL_119;
    v166 = DataMasterBase_object__object__int___GetEntity(
             v162,
             baseListViewManager,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v165);
    v167 = LocalizationManager__Get((System_String_o *)StringLiteral_12033/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
    v168 = LocalizationManager__Get((System_String_o *)StringLiteral_12032/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
    v169 = (System_Object_array *)sub_1BCA888(object___TypeInfo, 6LL);
    Rarity = UserServantEntity__getRarity((UserServantEntity_o *)Entity, 0LL);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo, v170);
    baseListViewManager = (int64_t)Rarity__getRarityType(Rarity, 0LL);
    if ( !v169 )
LABEL_119:
      sub_1BCAA3C(baseListViewManager, v63);
    v178 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( !v169->max_length )
      goto LABEL_120;
    v169->m_Items[0] = (Il2CppObject *)v178;
    sub_1BCA784((PartyOrganizationUtility_o *)v169->m_Items, v178, v172, v173, v174, v175, v176, v177);
    if ( !v166 )
      goto LABEL_119;
    baseListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)v166, 0LL);
    v185 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v169->max_length <= 1 )
      goto LABEL_120;
    v169->m_Items[1] = (Il2CppObject *)v185;
    sub_1BCA784((PartyOrganizationUtility_o *)&v169->m_Items[1], v185, v179, v180, v181, v182, v183, v184);
    v186 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
             (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[6],
             0LL);
    baseListViewManager = (int64_t)ServantEntity__getName((ServantEntity_o *)v166, v186, -1, 0LL);
    v193 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v169->max_length <= 2 )
      goto LABEL_120;
    v169->m_Items[2] = (Il2CppObject *)v193;
    sub_1BCA784((PartyOrganizationUtility_o *)&v169->m_Items[2], v193, v187, v188, v189, v190, v191, v192);
    if ( !*v114 )
      goto LABEL_119;
    baseListViewManager = (int64_t)(*v114)->fields.userServantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    v194 = UserServantEntity__getRarity((UserServantEntity_o *)baseListViewManager, 0LL);
    baseListViewManager = (int64_t)Rarity__getRarityType(v194, 0LL);
    v201 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v169->max_length <= 3 )
      goto LABEL_120;
    v169->m_Items[3] = (Il2CppObject *)v201;
    sub_1BCA784((PartyOrganizationUtility_o *)&v169->m_Items[3], v201, v195, v196, v197, v198, v199, v200);
    if ( !*v114 )
      goto LABEL_119;
    baseListViewManager = (int64_t)(*v114)->fields.servantEntity;
    if ( !baseListViewManager )
      goto LABEL_119;
    baseListViewManager = (int64_t)ServantEntity__getClassName((ServantEntity_o *)baseListViewManager, 0LL);
    v208 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
        goto LABEL_121;
    }
    if ( v169->max_length <= 4 )
      goto LABEL_120;
    v169->m_Items[4] = (Il2CppObject *)v208;
    sub_1BCA784((PartyOrganizationUtility_o *)&v169->m_Items[4], v208, v202, v203, v204, v205, v206, v207);
    v209 = *v114;
    if ( !*v114 )
      goto LABEL_119;
    v210 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v209->fields.userServantEntity;
    if ( !v210 )
      goto LABEL_119;
    servantEntity = v209->fields.servantEntity;
    baseListViewManager = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v210[6], 0LL);
    if ( !servantEntity )
      goto LABEL_119;
    baseListViewManager = (int64_t)ServantEntity__getName(servantEntity, baseListViewManager, -1, 0LL);
    v218 = baseListViewManager;
    if ( baseListViewManager )
    {
      baseListViewManager = sub_1BCA91C(baseListViewManager, v169->obj.klass->_1.element_class);
      if ( !baseListViewManager )
      {
LABEL_121:
        v233 = sub_1BCAA60(baseListViewManager);
        sub_1BCA908(v233, 0LL);
      }
    }
    if ( v169->max_length > 5 )
    {
      v169->m_Items[5] = (Il2CppObject *)v218;
      sub_1BCA784((PartyOrganizationUtility_o *)&v169->m_Items[5], v218, v212, v213, v214, v215, v216, v217);
      v219 = System_String__Format_62415728(v168, v169, 0LL);
      v220 = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
      v221 = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v226 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v223,
                                                      v224,
                                                      v225);
      CommonConfirmDialog_ClickDelegate___ctor(
        v226,
        (Il2CppObject *)v61,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__0__,
        0LL);
      baseListViewManager = (int64_t)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v63);
      if ( Instance )
      {
        CommonUI__OpenConfirmDialog_30766228(
          (CommonUI_o *)Instance,
          v167,
          v219,
          v220,
          v221,
          v226,
          BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
          0,
          0,
          0LL);
        return;
      }
      goto LABEL_119;
    }
LABEL_120:
    sub_1BCAA44(baseListViewManager, v63);
  }
  if ( result != 2 )
  {
    if ( result != 1 )
    {
      WarehouseListMenu__Callback(this, 0, (int32_t)v76, v77);
      return;
    }
    v82 = Method_WarehouseListMenu_OnSelectServant__;
    if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
      v82 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnSelectServant__);
    v83 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v82, v82[4]);
    OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
    v86 = this->fields.servantListViewManager;
    this->fields.state = 5;
    if ( v86 )
    {
      if ( v86->fields.totalSum > v86->fields.sendMax && WarehouseListMenu__IsSvtEqFriendShipSelectNumCheck(this, v63) )
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v88 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v63,
                                                           v84,
                                                           v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v88,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v89);
            v91 = this->fields.servantListViewManager;
            if ( !v91 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v91->fields.sendKeep;
            sendSum = v91->fields.sendSum;
            totalSum = v91->fields.totalSum;
            v95 = 8;
            break;
          case 1:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v88 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v63,
                                                           v84,
                                                           v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v88,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v227);
            v228 = this->fields.servantListViewManager;
            if ( !v228 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v228->fields.sendKeep;
            sendSum = v228->fields.sendSum;
            totalSum = v228->fields.totalSum;
            v95 = 9;
            break;
          case 2:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v88 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v63,
                                                           v84,
                                                           v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v88,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v229);
            v230 = this->fields.servantListViewManager;
            if ( !v230 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v230->fields.sendKeep;
            sendSum = v230->fields.sendSum;
            totalSum = v230->fields.totalSum;
            v95 = 10;
            break;
          case 3:
            warehouseConfirmMenu = this->fields.warehouseConfirmMenu;
            v88 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                           WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                           v63,
                                                           v84,
                                                           v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v88,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v231);
            v232 = this->fields.servantListViewManager;
            if ( !v232 || !warehouseConfirmMenu )
              goto LABEL_119;
            sendKeep = v232->fields.sendKeep;
            sendSum = v232->fields.sendSum;
            totalSum = v232->fields.totalSum;
            v95 = 11;
            break;
          default:
            return;
        }
        v160 = totalSum + sendSum;
        v113 = warehouseConfirmMenu;
        v159 = v88;
      }
      else
      {
        switch ( this->fields.tabKind )
        {
          case 0:
            v110 = this->fields.warehouseConfirmMenu;
            v111 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                            v63,
                                                            v84,
                                                            v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v111,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v112);
            if ( !v110 )
              goto LABEL_119;
            v113 = v110;
            v95 = 0;
            goto LABEL_64;
          case 1:
            v155 = this->fields.warehouseConfirmMenu;
            v111 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                            v63,
                                                            v84,
                                                            v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v111,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v156);
            if ( !v155 )
              goto LABEL_119;
            v95 = 1;
            goto LABEL_63;
          case 2:
            v155 = this->fields.warehouseConfirmMenu;
            v111 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                            v63,
                                                            v84,
                                                            v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v111,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v157);
            if ( !v155 )
              goto LABEL_119;
            v95 = 2;
            goto LABEL_63;
          case 3:
            v155 = this->fields.warehouseConfirmMenu;
            v111 = (WarehouseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            WarehouseConfirmMenu_CallbackFunc_TypeInfo,
                                                            v63,
                                                            v84,
                                                            v85);
            WarehouseConfirmMenu_CallbackFunc___ctor(
              v111,
              (Il2CppObject *)this,
              Method_WarehouseListMenu_EndConfirmMove__,
              v158);
            if ( !v155 )
              goto LABEL_119;
            v95 = 3;
LABEL_63:
            v113 = v155;
LABEL_64:
            v159 = v111;
            v160 = 0;
            sendKeep = 0;
            break;
          default:
            return;
        }
      }
      WarehouseConfirmMenu__Open(v113, v95, v159, v160, sendKeep, v90);
      return;
    }
    goto LABEL_119;
  }
  v98 = Method_WarehouseListMenu_OnSelectServant__;
  if ( (*((_BYTE *)Method_WarehouseListMenu_OnSelectServant__ + 83) & 2) != 0 )
    v98 = (_QWORD *)sub_1BCA7F8(Method_WarehouseListMenu_OnSelectServant__);
  v99 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v98, v98[4]);
  OverwriteAssetSoundName__PlaySystemSe(v99, 0, 0LL);
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
      v101 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v103 = v101;
      v107 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_ResultDelegate_TypeInfo,
                                                       v104,
                                                       v105,
                                                       v106);
      ServantStatusDialog_ResultDelegate___ctor(
        v107,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v103 )
        goto LABEL_119;
      v108 = (CommonUI_o *)v103;
      v109 = 0;
      goto LABEL_53;
    case 1:
      v136 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v137 = this->fields.selectNum;
      v138 = v136;
      v142 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                    ServantStatusDialog_EndDelegate_TypeInfo,
                                                    v139,
                                                    v140,
                                                    v141);
      ServantStatusDialog_EndDelegate___ctor(
        v142,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v138 )
        goto LABEL_119;
      v143 = (CommonUI_o *)v138;
      v144 = 0;
      goto LABEL_56;
    case 2:
      v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      selectNum = this->fields.selectNum;
      v146 = v145;
      v107 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_ResultDelegate_TypeInfo,
                                                       v147,
                                                       v148,
                                                       v149);
      ServantStatusDialog_ResultDelegate___ctor(
        v107,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantStatus__,
        0LL);
      if ( !v146 )
        goto LABEL_119;
      v109 = 3;
      v108 = (CommonUI_o *)v146;
LABEL_53:
      CommonUI__OpenServantStatusDialog_30776564(v108, v109, selectNum, v107, 0LL, 0LL);
      break;
    case 3:
      v150 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v137 = this->fields.selectNum;
      v151 = v150;
      v142 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                    ServantStatusDialog_EndDelegate_TypeInfo,
                                                    v152,
                                                    v153,
                                                    v154);
      ServantStatusDialog_EndDelegate___ctor(
        v142,
        (Il2CppObject *)this,
        Method_WarehouseListMenu_EndServantEquipStatus__,
        0LL);
      if ( !v151 )
        goto LABEL_119;
      v144 = 3;
      v143 = (CommonUI_o *)v151;
LABEL_56:
      CommonUI__OpenServantStatusDialog_30775636(v143, v144, v137, v142, 0LL, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  WarehouseListMenu_c *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UICommonButton_o *pushTabButton; // x8
  int32_t state; // w8
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x5
  int32_t tabKind; // w1
  int32_t modeKind; // w2
  const MethodInfo *v33; // x5
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  const MethodInfo *v40; // x5
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Action_o *v44; // x20
  unsigned __int128 v45; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B14183 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, setupinfo);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndOpen__, v9, v10);
    sub_1BCA7E0(&WarehouseListMenu_TypeInfo, v11, v12);
    byte_4B14183 = 1;
  }
  v13 = WarehouseListMenu_TypeInfo;
  v45 = 0uLL;
  if ( !WarehouseListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarehouseListMenu_TypeInfo, *(_QWORD *)&kind);
    v13 = WarehouseListMenu_TypeInfo;
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             v13->static_fields->PUSH_BUTTON_DISABLED_COLOR_CODE,
                                             (UnityEngine_Color_o *)&v45,
                                             0LL);
  pushTabButton = this->fields.pushTabButton;
  if ( !pushTabButton )
    goto LABEL_12;
  pushTabButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v45;
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.setupInfo = setupinfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupinfo, v24, v25, v26, v27, v28, v29);
    WarehouseListMenu__SetTabKind(
      this,
      this->fields.tabKind,
      this->fields.modeKind,
      this->fields.kind == 4,
      this->fields.kind == 3,
      v30);
    tabKind = this->fields.tabKind;
    modeKind = this->fields.modeKind;
    this->fields.state = 2;
    WarehouseListMenu__SetTabKind(this, tabKind, modeKind, 0, 0, v33);
    return;
  }
  if ( !state )
  {
    this->fields.kind = kind;
    this->fields.tabKind = kind == 1;
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    this->fields.setupInfo = setupinfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setupInfo, (int64_t)setupinfo, v34, v35, v36, v37, v38, v39);
    this->fields.isModify = 0;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      WarehouseListMenu__SetTabKind(this, this->fields.tabKind, this->fields.modeKind, 1, 0, v40);
      this->fields.state = 1;
      v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v42, v43);
      System_Action___ctor(v44, (Il2CppObject *)this, Method_WarehouseListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v44, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(gameObject, v15);
  }
}


void __fastcall WarehouseListMenu__PushRequest(
        WarehouseListMenu_o *this,
        WarehouseListViewItem_o *selectItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *limitCountSupport; // x0
  __int64 v22; // x1
  DataManager_o *v23; // x23
  struct UserServantEntity_o *userServantEntity; // x19
  UserServantCollectionMaster_o *v25; // x21
  int64_t v26; // x22
  __int64 v27; // x24
  __int64 v28; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int64 v30; // x1
  __int128 v31; // q0
  struct System_Threading_SynchronizationContext_o *context; // x8
  UserServantEntity_Fields *p_fields; // x24
  int64_t v34; // x0
  __int128 v35; // q1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  __int128 v42; // q1
  CardFavoriteRequest_o *v43; // x20
  int32_t v44; // w26
  int32_t v45; // w27
  int32_t v46; // w28
  int32_t v47; // w29
  bool IsLock; // w21
  char v49; // w23
  int32_t commonFlag; // w25
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w24
  int32_t v53; // w0
  __int64 v54; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v58; // [xsp+60h] [xbp-100h]
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // [xsp+68h] [xbp-F8h]
  int64_t v60; // [xsp+70h] [xbp-F0h]
  struct System_Threading_SynchronizationContext_o *v61; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  if ( (byte_4B1419D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, selectItem, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_WarehouseListMenu_EndCardFavoriteRequest__, v19, v20);
    byte_4B1419D = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_18;
  v23 = limitCountSupport;
  userServantEntity = selectItem->fields.userServantEntity;
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_object_(
                                         limitCountSupport,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v23 || !userServantEntity )
    goto LABEL_18;
  v25 = (UserServantCollectionMaster_o *)limitCountSupport;
  v26 = *(_QWORD *)&v23->fields.m_CachedPtr;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  if ( !v25 )
    goto LABEL_18;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v25, v26, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_18;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v31 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  context = v23->fields.context;
  p_fields = &userServantEntity->fields;
  *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v65.fields.fakeValue = v31;
  v61 = context;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30);
  v64 = v65;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v64, 0LL);
  v35 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  masterLoadThreads = v23->fields.masterLoadThreads;
  v60 = v34;
  *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v63.fields.fakeValue = v35;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v63, 0LL);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)this,
    Method_WarehouseListMenu_EndCardFavoriteRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v42 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v43 = (CardFavoriteRequest_o *)Request_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v42;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v62, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                      userServantEntity->fields.imageLimitCount,
                      0LL);
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.dispLimitCount,
          0LL);
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.commandCardLimitCount,
          0LL);
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.iconLimitCount,
          0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(userServantEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_18;
  v49 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                  userServantEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                       userServantEntity->fields.randomLimitCount,
                       0LL);
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
          userServantEntity->fields.randomLimitCountSupport,
          0LL);
  v54 = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v67.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v53;
  *(_QWORD *)&v67.fields.currentCryptoKey = v54;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v67, 0LL);
  if ( !v43 )
LABEL_18:
    sub_1BCAA3C(limitCountSupport, v22);
  CardFavoriteRequest__beginRequest(
    v43,
    targetUsrSVtId,
    imageLimitCount,
    v44,
    v45,
    v46,
    v47,
    masterLoadThreads == (struct System_Collections_Generic_List_Thread__o *)v58,
    IsLock,
    v49 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v61 != (struct System_Threading_SynchronizationContext_o *)v60,
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  bool v75; // w27
  WarehouseListManager_o *servantListViewManager; // x0
  __int64 v77; // x2
  long double inited; // q0
  float *klass; // x8
  float v80; // s12
  float v81; // s13
  float v82; // s14
  float v83; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v85; // x9
  float v86; // s10
  float v87; // s11
  float v88; // s8
  float v89; // s9
  unsigned int v90; // w26
  __int64 *v91; // x8
  float v92; // s3
  float v93; // s2
  float v94; // s1
  float v95; // s0
  System_String_o **v96; // x8
  bool v97; // w28
  UICommonButton_o *v98; // x25
  bool enabled; // w0
  __int64 *v100; // x8
  __int64 *v101; // x8
  UICommonButton_o *servantEquipTabButton; // x25
  bool v103; // w0
  unsigned int v104; // w29
  System_String_o **v105; // x8
  System_String_o **v106; // x8
  UICommonButton_o *putInTabButton; // x25
  bool v108; // w0
  System_String_o **v109; // x8
  System_String_o **v110; // x8
  UICommonButton_o *putOutTabButton; // x26
  bool v112; // w0
  System_String_o **v113; // x8
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x3
  struct WarehouseListManager_o *v116; // x8
  WarehouseListManager_c *v117; // x8
  EventUpValSetupInfo_o *setupInfo; // x2
  int32_t v119; // w1
  struct WarehouseListManager_o *v120; // x8
  struct WarehouseListManager_o *v121; // x8
  const MethodInfo *v122; // x3
  __int64 *v123; // x8
  UICommonButton_o *statusTabButton; // x26
  bool v125; // w0
  __int64 *v126; // x8
  UICommonButton_o *lockTabButton; // x26
  bool v128; // w0
  __int64 *v129; // x8
  UICommonButton_o *choiceTabButton; // x26
  bool v131; // w0
  __int64 *v132; // x8
  UICommonButton_o *pushTabButton; // x24
  WarehouseListManager_c *v134; // x8
  bool v135; // w0
  bool v136; // w20
  UILabel_o *explanationLabel; // x23
  __int64 *v138; // x8
  UILabel_o *v139; // x23
  int v140; // w8
  UILabel_o *v141; // x23
  UILabel_o *v142; // x23
  struct WarehouseListManager_o *v143; // x21
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  WarehouseListManager_CallbackFunc_o *v147; // x22
  const MethodInfo *v148; // x3
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  int32_t v155; // w1
  struct WarehouseListManager_o *v156; // x8
  struct WarehouseListManager_o *v157; // x8
  UISprite_o *scaleChageTabSprite; // x19
  bool v159; // [xsp+Ch] [xbp-A4h]
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = modeKind;
  if ( (byte_4B14185 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, *(_QWORD *)&tabKind, *(_QWORD *)&modeKind);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v19, v20);
    sub_1BCA7E0(&StringLiteral_17747/*"btn_txt_craftessence_off"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17787/*"btn_txt_servant_off"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20732/*"img_txt_cardspace"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17839/*"button_push_reg"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17840/*"button_push_unreg"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17788/*"btn_txt_servant_on"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_17742/*"btn_txt_cardtoarchive_on"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_15629/*"WAREHOUSE_EXPLANATION_PUT_IN"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_15627/*"WAREHOUSE_EXPLANATION_LOCK"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17655/*"btn_bg_25"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_17741/*"btn_txt_cardtoarchive_off"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_17748/*"btn_txt_craftessence_on"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_15630/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_15628/*"WAREHOUSE_EXPLANATION_PUSH"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_17730/*"btn_txt_archivetocard_on"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_20723/*"img_txt_archivespace"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_17729/*"btn_txt_archivetocard_off"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_15626/*"WAREHOUSE_EXPLANATION_CHOICE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_17654/*"btn_bg_24"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v73, v74);
    byte_4B14185 = 1;
  }
  v75 = !this->fields.isInitTab || isInit;
  if ( !this->fields.isInitTab || isInit )
  {
    servantListViewManager = this->fields.servantListViewManager;
    if ( !servantListViewManager )
      goto LABEL_196;
    WarehouseListManager__DestroyList(servantListViewManager, *(const MethodInfo **)&tabKind);
  }
  UserGameMaster__getSelfUserGame(0LL);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  servantListViewManager = (WarehouseListManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servantListViewManager )
    goto LABEL_196;
  DataManager__GetMasterData_object_(
    (DataManager_o *)servantListViewManager,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v77);
    byte_4B11133 = 1;
  }
  servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  klass = (float *)servantListViewManager[1].klass;
  v80 = klass[20];
  v81 = klass[21];
  v82 = klass[22];
  v83 = klass[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&tabKind, v77);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !LODWORD(servantListViewManager[1].fields.servantTabLabel) )
  {
    inited = j_il2cpp_runtime_class_init_0(servantListViewManager, *(_QWORD *)&tabKind);
    servantListViewManager = (WarehouseListManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_196;
  v85 = (float *)servantListViewManager[1].klass;
  v87 = v85[24];
  v86 = v85[25];
  v89 = v85[26];
  v88 = v85[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    inited);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v90 = tabKind & 0xFFFFFFFD;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFD) != 0,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v91 = &StringLiteral_17788/*"btn_txt_servant_on"*/;
  if ( v90 )
    v91 = &StringLiteral_17787/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v91, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabLabel;
  v92 = v88;
  v93 = v89;
  v94 = v86;
  v95 = v87;
  if ( v90 )
  {
    v92 = v83;
    v93 = v82;
    v94 = v81;
    v95 = v80;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, *(UnityEngine_Color_o *)&v95, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v159 = isModify;
  v96 = (System_String_o **)(v90 ? &StringLiteral_17649/*"btn_bg_12"*/ : &StringLiteral_17651/*"btn_bg_19"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v96, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  v97 = !v75;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v75,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  v98 = this->fields.servantTabButton;
  if ( !v98 )
    goto LABEL_196;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantTabButton, 0LL);
  UICommonButton__SetColliderEnable(v98, enabled, !v75, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v90 == 0, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v100 = &StringLiteral_17747/*"btn_txt_craftessence_off"*/;
  if ( v90 )
    v100 = &StringLiteral_17748/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v100, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  if ( v90 )
    v101 = &StringLiteral_17651/*"btn_bg_19"*/;
  else
    v101 = &StringLiteral_17649/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v101, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabLabel;
  if ( !v90 )
  {
    v88 = v83;
    v89 = v82;
    v86 = v81;
    v87 = v80;
  }
  if ( !servantListViewManager )
    goto LABEL_196;
  v160.fields.r = v87;
  v160.fields.g = v86;
  v160.fields.b = v89;
  v160.fields.a = v88;
  UILabel__set_effectColor((UILabel_o *)servantListViewManager, v160, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.servantEquipTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v75,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_196;
  v103 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton, 0LL);
  UICommonButton__SetColliderEnable(servantEquipTabButton, v103, v97, 0LL);
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
  v104 = tabKind & 0xFFFFFFFE;
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)servantListViewManager,
    (tabKind & 0xFFFFFFFE) == 2,
    0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v105 = (System_String_o **)&StringLiteral_17741/*"btn_txt_cardtoarchive_off"*/;
  if ( v104 != 2 )
    v105 = (System_String_o **)&StringLiteral_17742/*"btn_txt_cardtoarchive_on"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v105, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v106 = (System_String_o **)(v104 == 2 ? &StringLiteral_17654/*"btn_bg_24"*/ : &StringLiteral_17655/*"btn_bg_25"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v106, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putInTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v75,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putInTabButton = this->fields.putInTabButton;
  if ( !putInTabButton )
    goto LABEL_196;
  v108 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putInTabButton, 0LL);
  UICommonButton__SetColliderEnable(putInTabButton, v108, v97, 0LL);
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
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v104 != 2, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v109 = (System_String_o **)&StringLiteral_17730/*"btn_txt_archivetocard_on"*/;
  if ( v104 != 2 )
    v109 = (System_String_o **)&StringLiteral_17729/*"btn_txt_archivetocard_off"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v109, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v110 = (System_String_o **)(v104 == 2 ? &StringLiteral_17655/*"btn_bg_25"*/ : &StringLiteral_17654/*"btn_bg_24"*/);
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v110, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.putOutTabButton;
  if ( !servantListViewManager )
    goto LABEL_196;
  servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                       servantListViewManager,
                                                       0LL,
                                                       !v75,
                                                       servantListViewManager->klass[1]._1.interfaceOffsets);
  putOutTabButton = this->fields.putOutTabButton;
  if ( !putOutTabButton )
    goto LABEL_196;
  v112 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.putOutTabButton, 0LL);
  UICommonButton__SetColliderEnable(putOutTabButton, v112, v97, 0LL);
  servantListViewManager = (WarehouseListManager_o *)this->fields.sendTitleSprite;
  if ( !servantListViewManager )
    goto LABEL_196;
  v113 = (System_String_o **)&StringLiteral_20732/*"img_txt_cardspace"*/;
  if ( v104 != 2 )
    v113 = (System_String_o **)&StringLiteral_20723/*"img_txt_archivespace"*/;
  UISprite__set_spriteName((UISprite_o *)servantListViewManager, *v113, 0LL);
  switch ( tabKind )
  {
    case 0:
      if ( !v75 && !this->fields.tabKind )
        goto LABEL_76;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 0, this->fields.setupInfo, v115);
LABEL_76:
      v116 = this->fields.servantListViewManager;
      if ( !v116 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v116->fields.filterButton;
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
      v117 = servantListViewManager->klass;
      goto LABEL_113;
    case 1:
      if ( !v75 && this->fields.tabKind == 1 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v119 = 1;
      goto LABEL_103;
    case 2:
      if ( !v75 && this->fields.tabKind == 2 )
        goto LABEL_92;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      WarehouseListManager__CreateList(servantListViewManager, 2, this->fields.setupInfo, v115);
LABEL_92:
      v120 = this->fields.servantListViewManager;
      if ( !v120 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v120->fields.filterButton;
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
        v8 = 0;
        if ( v75 )
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
        v117 = servantListViewManager->klass;
LABEL_113:
        ((void (*)(void))v117[1]._1.implementedInterfaces)();
        if ( v75 )
          goto LABEL_115;
      }
LABEL_114:
      if ( v8 == this->fields.modeKind )
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 0, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v123 = &StringLiteral_17841/*"button_select_reg"*/;
      if ( v8 )
        v123 = &StringLiteral_17842/*"button_select_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v123, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.statusTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v75,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      statusTabButton = this->fields.statusTabButton;
      if ( !statusTabButton )
        goto LABEL_196;
      v125 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
      UICommonButton__SetColliderEnable(statusTabButton, v125, v97, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 1, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v126 = &StringLiteral_17827/*"button_alllock_reg"*/;
      if ( v8 != 1 )
        v126 = &StringLiteral_17828/*"button_alllock_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v126, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.lockTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v75,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      lockTabButton = this->fields.lockTabButton;
      if ( !lockTabButton )
        goto LABEL_196;
      v128 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
      UICommonButton__SetColliderEnable(lockTabButton, v128, v97, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 2, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v129 = &StringLiteral_17825/*"button_allchoice_reg"*/;
      if ( v8 != 2 )
        v129 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v129, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.choiceTabButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)((__int64 (__fastcall *)(WarehouseListManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
                                                           servantListViewManager,
                                                           0LL,
                                                           !v75,
                                                           servantListViewManager->klass[1]._1.interfaceOffsets);
      choiceTabButton = this->fields.choiceTabButton;
      if ( !choiceTabButton )
        goto LABEL_196;
      v131 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
      UICommonButton__SetColliderEnable(choiceTabButton, v131, v97, 0LL);
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
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)servantListViewManager, v8 != 3 && v104 != 2, 0LL);
      servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabSprite;
      if ( !servantListViewManager )
        goto LABEL_196;
      v132 = &StringLiteral_17839/*"button_push_reg"*/;
      if ( v8 != 3 )
        v132 = &StringLiteral_17840/*"button_push_unreg"*/;
      UISprite__set_spriteName((UISprite_o *)servantListViewManager, (System_String_o *)*v132, 0LL);
      pushTabButton = this->fields.pushTabButton;
      if ( !pushTabButton )
        goto LABEL_196;
      if ( v104 == 2 )
      {
        UICommonButton__SetColliderEnable(this->fields.pushTabButton, 1, v97, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v134 = servantListViewManager->klass;
      }
      else
      {
        v135 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
        UICommonButton__SetColliderEnable(pushTabButton, v135, v97, 0LL);
        servantListViewManager = (WarehouseListManager_o *)this->fields.pushTabButton;
        if ( !servantListViewManager )
          goto LABEL_196;
        v134 = servantListViewManager->klass;
      }
      ((void (*)(void))v134[1]._1.implementedInterfaces)();
      break;
    case 3:
      if ( !v75 && this->fields.tabKind == 3 )
        goto LABEL_104;
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      setupInfo = this->fields.setupInfo;
      v119 = 3;
LABEL_103:
      WarehouseListManager__CreateList(servantListViewManager, v119, setupInfo, v115);
LABEL_104:
      v121 = this->fields.servantListViewManager;
      if ( !v121 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v121->fields.filterButton;
      if ( !servantListViewManager )
        goto LABEL_196;
      ((void (__fastcall *)(WarehouseListManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantListViewManager->klass[1]._1.implementedInterfaces)(
        servantListViewManager,
        0LL,
        1LL,
        servantListViewManager->klass[1]._1.interfaceOffsets);
      v8 = WarehouseListMenu__HidePushButton(this, v8, 0, v122);
LABEL_107:
      if ( !v75 )
        goto LABEL_114;
      goto LABEL_115;
    default:
      goto LABEL_107;
  }
  v136 = v159;
  switch ( v8 )
  {
    case 0:
      if ( (unsigned int)tabKind < 2 )
      {
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
        v138 = &StringLiteral_15629/*"WAREHOUSE_EXPLANATION_PUT_IN"*/;
      }
      else
      {
        if ( v104 != 2 )
          goto LABEL_179;
        explanationLabel = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
        v138 = &StringLiteral_15630/*"WAREHOUSE_EXPLANATION_PUT_OUT"*/;
      }
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get((System_String_o *)*v138, 0LL);
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
      this->fields.modeKind = v8;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( this->fields.state == 2 )
      {
        servantListViewManager = (WarehouseListManager_o *)servantListViewManager->fields.baseListViewManager;
        if ( !servantListViewManager )
          goto LABEL_196;
        WarehouseListViewManager__UpdateItemState((WarehouseListViewManager_o *)servantListViewManager, v8 == 3, v114);
        v143 = this->fields.servantListViewManager;
        v147 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(
                                                        WarehouseListManager_CallbackFunc_TypeInfo,
                                                        v144,
                                                        v145,
                                                        v146);
        WarehouseListManager_CallbackFunc___ctor(
          v147,
          (Il2CppObject *)this,
          (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
          v148);
        if ( !v143 )
          goto LABEL_196;
        v143->fields.callbackFunc = v147;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v143->fields.callbackFunc,
          (int64_t)v147,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
        v155 = 2;
        servantListViewManager = v143;
      }
      else
      {
        v155 = 1;
      }
      WarehouseListManager__SetMode_36480924(servantListViewManager, v155, v114);
      if ( !v75 && v136 )
      {
        v156 = this->fields.servantListViewManager;
        if ( v156 )
        {
          servantListViewManager = (WarehouseListManager_o *)v156->fields.baseListViewManager;
          if ( servantListViewManager )
          {
            WarehouseListViewManager__Modify(
              (WarehouseListViewManager_o *)servantListViewManager,
              *(const MethodInfo **)&tabKind);
            goto LABEL_192;
          }
        }
LABEL_196:
        sub_1BCAA3C(servantListViewManager, *(_QWORD *)&tabKind);
      }
LABEL_192:
      v157 = this->fields.servantListViewManager;
      if ( !v157 )
        goto LABEL_196;
      servantListViewManager = (WarehouseListManager_o *)v157->fields.baseListViewManager;
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
      v139 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15627/*"WAREHOUSE_EXPLANATION_LOCK"*/,
                                                           0LL);
      if ( !v139 )
        goto LABEL_196;
      UILabel__set_text(v139, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 1 )
        goto LABEL_182;
      v140 = 1;
      goto LABEL_173;
    case 2:
      v141 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15626/*"WAREHOUSE_EXPLANATION_CHOICE"*/,
                                                           0LL);
      if ( !v141 )
        goto LABEL_196;
      UILabel__set_text(v141, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 2 )
        goto LABEL_182;
      v140 = 2;
      goto LABEL_173;
    case 3:
      v142 = this->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&tabKind);
      servantListViewManager = (WarehouseListManager_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_15628/*"WAREHOUSE_EXPLANATION_PUSH"*/,
                                                           0LL);
      if ( !v142 )
        goto LABEL_196;
      UILabel__set_text(v142, (System_String_o *)servantListViewManager, 0LL);
      servantListViewManager = this->fields.servantListViewManager;
      if ( !servantListViewManager )
        goto LABEL_196;
      if ( servantListViewManager->fields.modeKind == 3 )
        goto LABEL_182;
      v140 = 3;
LABEL_173:
      servantListViewManager->fields.modeKind = v140;
      goto LABEL_182;
    default:
      servantListViewManager = this->fields.servantListViewManager;
      v136 = v159;
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  struct WarehouseListManager_o *v13; // x8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1
  int32_t tabKind; // w8
  System_Int64_array *v26; // x1
  System_Int64_array *v27; // x2
  bool v28; // w4
  bool v29; // w5
  struct WarehouseListManager_o *servantListViewManager; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  NetworkManager_ResultCallbackFunc_o *v40; // x20
  __int64 v41; // x1
  System_Int64_array *v42; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4B1418F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    this = (WarehouseListMenu_o *)sub_1BCA7E0(&Method_WarehouseListMenu_EndStatusSync__, v10, v11);
    byte_4B1418F = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v42 = 0LL;
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
    if ( WarehouseListViewManager__GetSwapChoiceList((WarehouseListViewManager_o *)this, &choiceList, &v42, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.requedstCallback,
        (int64_t)callback,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v37,
                                                     v38,
                                                     v39);
      NetworkManager_ResultCallbackFunc___ctor(v40, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v41);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v40,
                                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v27 = v42;
        v26 = choiceList;
        v29 = 1;
        v28 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_1BCAA3C(this, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    v13 = v5->fields.servantListViewManager;
    if ( !v13 )
      goto LABEL_23;
    this = (WarehouseListMenu_o *)v13->fields.baseListViewManager;
    if ( !this )
      goto LABEL_23;
    if ( WarehouseListViewManager__GetSwapLockList((WarehouseListViewManager_o *)this, &lockList, &unlockList, v3) )
    {
      v5->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v5->fields.requedstCallback,
        (int64_t)callback,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(v23, (Il2CppObject *)v5, Method_WarehouseListMenu_EndStatusSync__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      this = (WarehouseListMenu_o *)NetworkManager__getRequest_object_(
                                      v23,
                                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( this )
      {
        tabKind = v5->fields.tabKind;
        v27 = unlockList;
        v26 = lockList;
        v28 = 1;
        v29 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)this,
          v26,
          v27,
          (tabKind & 0xFFFFFFFE) == 2,
          v28,
          v29,
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

  if ( (byte_4B14181 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14181 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B14182 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14182 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  WarehouseListMenu__GetMode(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListMenu_CallbackFunc___ctor(
        WarehouseListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0B478;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0B430;
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
  if ( (byte_4B141A1 & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListMenu_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B141A1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(WarehouseListMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_CallbackFunc__EndInvoke(
        WarehouseListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0B4DC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0B494;
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
  if ( (byte_4B141A2 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B141A2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall WarehouseListMenu_RequestCallbackFunc__EndInvoke(
        WarehouseListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  CommonUI_o *v17; // x20
  System_Action_o *_9__1; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  struct WarehouseListMenu_o *_4__this; // x20
  struct WarehouseListManager_o *servantListViewManager; // x19
  WarehouseListManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  const MethodInfo *v37; // x2

  if ( (byte_4B141A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&WarehouseListManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__, v9, v10);
    sub_1BCA7E0(&Method_WarehouseListMenu_OnSelectServant__, v11, v12);
    byte_4B141A3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_WarehouseListMenu___c__DisplayClass81_0__OnSelectServant_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v19, v20, v21, v22, v23, v24);
    }
    if ( v17 )
    {
      CommonUI__CloseConfirmDialog_30766896(v17, _9__1, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !Instance )
    goto LABEL_12;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  _4__this->fields.state = 2;
  servantListViewManager = _4__this->fields.servantListViewManager;
  v29 = (WarehouseListManager_CallbackFunc_o *)sub_1BCAA2C(WarehouseListManager_CallbackFunc_TypeInfo, v14, v25, v26);
  WarehouseListManager_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)_4__this,
    (intptr_t)Method_WarehouseListMenu_OnSelectServant__,
    v30);
  if ( !servantListViewManager )
    goto LABEL_12;
  servantListViewManager->fields.callbackFunc = v29;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantListViewManager->fields.callbackFunc,
    (int64_t)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  WarehouseListManager__SetMode_36480924(servantListViewManager, 2, v37);
}


void __fastcall WarehouseListMenu___c__DisplayClass81_0___OnSelectServant_b__1(
        WarehouseListMenu___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  WarehouseListMenu__PushRequest(this->fields.__4__this, this->fields.item, v2);
}