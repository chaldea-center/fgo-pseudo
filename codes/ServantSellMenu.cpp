void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438D1CE & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438D1CE = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__CallOnClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClose; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B77560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantSellMenu__CallOnOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onOpen; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *onOpen; // t1

  onOpen = this->fields.onOpen;
  p_onOpen = (BattleServantConfConponent_o *)&this->fields.onOpen;
  v9 = onOpen;
  if ( onOpen )
  {
    p_onOpen->klass = 0LL;
    sub_B77560(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall ServantSellMenu__CallOnSelectServant(
        ServantSellMenu_o *this,
        int32_t result,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onSelectSellServant; // x22
  System_Action_ServantSellMenu_ResultKind__long____long____o *v13; // x23
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant; // t1

  if ( (byte_438D1C7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
    byte_438D1C7 = 1;
  }
  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (BattleServantConfConponent_o *)&this->fields.onSelectSellServant;
  v13 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_B77560(
      p_onSelectSellServant,
      0LL,
      (System_String_array **)servantList,
      (System_String_array **)commandCodeList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    System_Action_ServantSellMenu_ResultKind__long____long_____Invoke(
      v13,
      result,
      servantList,
      commandCodeList,
      (const MethodInfo_26B0010 *)Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
  }
}


void __fastcall ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_438D1C0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_EndClose__);
    byte_438D1C0 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B7769C(0LL, callback);
  ServantOperationManager__SetMode_32933500(servantOperationManager, 1, 0LL);
  this->fields.onClose = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438D1CB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    sub_B775C4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_438D1CB = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v4 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B77694(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_ServantSellMenu_ResultKind__long____long______ctor(
    v4,
    (Il2CppObject *)this,
    Method_ServantSellMenu_OnSelectSellServant__,
    (const MethodInfo_26AFFFC *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
  if ( !servantOperationManager )
    sub_B7769C(v5, v6);
  ServantOperationManager__SetMode(
    servantOperationManager,
    2,
    (System_Action_ServantOperationManager_ActionKind__long____long____o *)v4,
    0LL);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438D1CC & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438D1CC = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438D1BF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    sub_B775C4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_438D1BF = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v4 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B77694(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantSellMenu_OnSelectSellServant__,
      (const MethodInfo_26AFFFC *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    if ( !servantOperationManager )
      sub_B7769C(v5, v6);
    ServantOperationManager__SetMode(
      servantOperationManager,
      2,
      (System_Action_ServantOperationManager_ActionKind__long____long____o *)v4,
      0LL);
  }
  else
  {
    this->fields.state = 3;
  }
  ServantSellMenu__CallOnOpen(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__EndShowCommandCode(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_438D1CA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D1CA = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(servantOperationManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__EndShowServant(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x0
  __int64 *v11; // x8
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v13; // x21

  if ( (byte_438D1C9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_EndCloseShowServantQuestJump__);
    sub_B775C4(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D1C9 = 1;
  }
  if ( questId < 1 )
  {
    if ( isDecide )
    {
      if ( isNeedSort )
      {
        servantOperationManager = this->fields.servantOperationManager;
        if ( !servantOperationManager )
          goto LABEL_14;
        ServantOperationManager__SortItem(servantOperationManager, 0LL);
      }
      servantOperationManager = this->fields.servantOperationManager;
      if ( !servantOperationManager )
LABEL_14:
        sub_B7769C(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(servantOperationManager, this->fields.servantStatusId, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v11 = &Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v11 = &Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v13 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, *v11, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


int32_t __fastcall ServantSellMenu__GetTabKind(ServantSellMenu_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
}


System_String_o *__fastcall ServantSellMenu__GetTabTitleSpriteName(
        ServantSellMenu_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9

  if ( (byte_438D1C3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17386/*"btn_txt_craftessence_off"*/);
    sub_B775C4(&StringLiteral_17426/*"btn_txt_servant_off"*/);
    sub_B775C4(&StringLiteral_17383/*"btn_txt_cc_off"*/);
    sub_B775C4(&StringLiteral_17384/*"btn_txt_cc_on"*/);
    sub_B775C4(&StringLiteral_17427/*"btn_txt_servant_on"*/);
    sub_B775C4(&StringLiteral_17387/*"btn_txt_craftessence_on"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D1C3 = 1;
  }
  if ( kind == 2 )
  {
    v6 = &StringLiteral_17383/*"btn_txt_cc_off"*/;
    v7 = &StringLiteral_17384/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v6 = &StringLiteral_17386/*"btn_txt_craftessence_off"*/;
    v7 = &StringLiteral_17387/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v6 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v6;
    }
    v6 = &StringLiteral_17426/*"btn_txt_servant_off"*/;
    v7 = &StringLiteral_17427/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v6 = v7;
  return (System_String_o *)*v6;
}


void __fastcall ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B7769C(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B7769C(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, 0LL);
}


void __fastcall ServantSellMenu__Init_28978880(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B7769C(0LL, tabToInit);
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  this->fields.tabKind = tabToInit;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__ModifyListItem(
        ServantSellMenu_o *this,
        System_Int64_array *selectedSvtIds,
        System_Int64_array *selectedCommandCodeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int size; // w8
  unsigned __int64 v11; // x22
  signed __int64 v12; // x23

  if ( (byte_438D1CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438D1CD = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v7 )
      goto LABEL_16;
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_16;
  }
  size = v7->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    v12 = size;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( !this->fields.servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(
        this->fields.servantOperationManager,
        v7->fields._items->m_Items[v11++],
        0LL);
      if ( (__int64)v11 >= v12 )
        return;
      size = v7->fields._size;
    }
LABEL_16:
    sub_B7769C(v8, v9);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_438D1C6 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D1C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v3);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B7769C(0LL, v4);
    ServantOperationManager__SetMode_32933500(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_438D1C4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D1C4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v3);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B7769C(0LL, v4);
    ServantOperationManager__SetMode_32933500(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_438D1C5 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D1C5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantSellMenu__SetTabKind(this, 1, 0, v3);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B7769C(0LL, v4);
    ServantOperationManager__SetMode_32933500(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnSelectSellServant(
        ServantSellMenu_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v12; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v13; // x22
  WebViewManager_o *v14; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v16; // x21
  ServantStatusDialog_ResultDelegate_o *v17; // x22
  __int64 v18; // x0

  if ( (byte_438D1C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_B775C4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_EndShowCommandCode__);
    sub_B775C4(&Method_ServantSellMenu_EndShowServant__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438D1C8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( kind != 2 )
    {
      if ( kind == 1 )
        ServantSellMenu__CallOnSelectServant(this, 1, servantList, commandCodeList, method);
      return;
    }
    this->fields.state = 5;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_22;
      if ( commandCodeList->max_length )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_21FBABC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v12 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v13 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B77694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v13,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v12 )
            {
              CommonUI__OpenServantStatusDialog_18069428(v12, 0, (UserCommandCodeEntity_o *)Entity, v13, 0LL, 0LL);
              return;
            }
          }
        }
        goto LABEL_22;
      }
    }
    else
    {
      if ( !servantList )
        goto LABEL_22;
      if ( servantList->max_length )
      {
        this->fields.servantStatusId = servantList->m_Items[0];
        v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v16 = (CommonUI_o *)v14;
        v17 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v17,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenServantStatusDialog_18066612(v16, 34, servantStatusId, v17, 0LL, 0LL);
          return;
        }
LABEL_22:
        sub_B7769C(Instance, v10);
      }
    }
    v18 = sub_B776C8(Instance);
    sub_B77668(v18, 0LL);
  }
}


void __fastcall ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t state; // w8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_438D1BE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ServantSellMenu_EndOpen__);
    byte_438D1BE = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
        (System_Int32_array **)onSelectSellServant,
        (System_String_array **)onOpen,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.onOpen,
        (System_Int32_array **)onOpen,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      ServantSellMenu__EndOpen(this, v18);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
      (System_Int32_array **)onSelectSellServant,
      (System_String_array **)onOpen,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onOpen,
      (System_Int32_array **)onOpen,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v27),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_B7769C(gameObject, v26);
    }
    ServantOperationManager__SetMode_32933500((ServantOperationManager_o *)gameObject, 1, 0LL);
    this->fields.state = 1;
    v28 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v28, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabButton(
        ServantSellMenu_o *this,
        UICommonButton_o *tabButton,
        UISprite_o *titleSprite,
        UISprite_o *tabSprite,
        int32_t selectedKind,
        int32_t tabKind,
        bool isInit,
        const MethodInfo *method)
{
  ServantSellMenu_o *v14; // x0
  const MethodInfo *v15; // x3
  __int64 *v16; // x8
  _BOOL4 v17; // w20

  if ( (byte_438D1C2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17301/*"btn_bg_12"*/);
    this = (ServantSellMenu_o *)sub_B775C4(&StringLiteral_17303/*"btn_bg_19"*/);
    byte_438D1C2 = 1;
  }
  if ( !tabButton
    || (((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer, UISprite_o *, _QWORD, _QWORD, bool, const MethodInfo *))tabButton->klass->vtable._5_set_isEnabled.method)(
          tabButton,
          1LL,
          tabButton->klass->vtable._6_OnInit.methodPtr,
          tabSprite,
          *(_QWORD *)&selectedKind,
          *(_QWORD *)&tabKind,
          isInit,
          method),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tabButton, selectedKind != tabKind, 0LL),
        this = (ServantSellMenu_o *)ServantSellMenu__GetTabTitleSpriteName(v14, tabKind, selectedKind == tabKind, v15),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, (System_String_o *)this, 0LL), !tabSprite) )
  {
    sub_B7769C(this, tabButton);
  }
  v16 = &StringLiteral_17303/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v16 = &StringLiteral_17301/*"btn_bg_12"*/;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v16, 0LL);
  v17 = isInit;
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))tabButton->klass->vtable._14_SetState.method)(
    tabButton,
    0LL,
    v17,
    tabButton->klass->vtable._15_OnPress.methodPtr);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabKind(
        ServantSellMenu_o *this,
        int32_t kind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7
  const MethodInfo *v8; // x7
  const MethodInfo *v9; // x7
  __int64 v10; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  ServantSellMenu__SetTabLabel(this, kind, (const MethodInfo *)isInit);
  ServantSellMenu__SetTabButton(
    this,
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    kind,
    0,
    isInit,
    v7);
  ServantSellMenu__SetTabButton(
    this,
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    kind,
    1,
    isInit,
    v8);
  ServantSellMenu__SetTabButton(
    this,
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    kind,
    2,
    isInit,
    v9);
  if ( isInit )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_11;
    ServantOperationManager__CreateList(servantOperationManager, kind, 0LL);
  }
  else if ( this->fields.tabKind != kind )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_11;
    ServantOperationManager__ChangeList(servantOperationManager, kind, 0LL);
  }
  if ( (unsigned int)kind < 3 )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( servantOperationManager )
    {
      ServantOperationManager__filterButtonState(servantOperationManager, 0, 1, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B7769C(servantOperationManager, v10);
  }
LABEL_10:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t Count; // w21
  LocalizationManager_c *v9; // x0
  float *static_fields; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float *v15; // x8
  UILabel_o *servantTabLabel; // x24
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  System_String_o *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x2
  Il2CppObject *v24; // x26
  Il2CppObject *v25; // x0
  float v26; // s3
  float v27; // s2
  float v28; // s1
  float v29; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v31; // x25
  __int64 v32; // x2
  Il2CppObject *v33; // x26
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x2
  Il2CppObject *v44; // x21
  BalanceConfig_c *v45; // x0
  Il2CppObject *v46; // x0
  float v47; // s3
  float v48; // s2
  float v49; // s1
  float v50; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_438D1C1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3086/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_B775C4(&StringLiteral_3087/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_B775C4(&StringLiteral_3088/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_438D1C1 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_75;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4387FCE )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4387FCE = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v9->static_fields;
  v11 = static_fields[20];
  v12 = static_fields[21];
  v13 = static_fields[22];
  v14 = static_fields[23];
  if ( !byte_4387FCF )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
    byte_4387FCF = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = LocalizationManager_TypeInfo;
  }
  v15 = (float *)v9->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  v17 = v15[24];
  v18 = v15[25];
  v19 = v15[26];
  v20 = v15[27];
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v52 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v22);
  if ( !SelfUserGame )
    goto LABEL_75;
  v24 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v23);
  Instance = (DataManager_o *)System_String__Format_44897472(v21, v24, v25, 0LL);
  if ( !servantTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind )
    v26 = v14;
  else
    v26 = v20;
  if ( kind )
    v27 = v13;
  else
    v27 = v19;
  if ( kind )
    v28 = v12;
  else
    v28 = v18;
  if ( kind )
    v29 = v11;
  else
    v29 = v17;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v26 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3088/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v52 = servantEquipSum[0];
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v32);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v34);
  Instance = (DataManager_o *)System_String__Format_44897472(v31, v33, v35, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind == 1 )
    v36 = v20;
  else
    v36 = v14;
  if ( kind == 1 )
    v37 = v19;
  else
    v37 = v13;
  if ( kind == 1 )
    v38 = v18;
  else
    v38 = v12;
  if ( kind == 1 )
    v39 = v17;
  else
    v39 = v11;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v36 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3086/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v52 = Count;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v42);
  if ( !byte_43874B8 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_43874B8 = 1;
  }
  v45 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v45 = BalanceConfig_TypeInfo;
  }
  svtKeep = v45->static_fields->CommandCodeFrameMax;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v43);
  Instance = (DataManager_o *)System_String__Format_44897472(v41, v44, v46, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_75:
    sub_B7769C(Instance, v7);
  }
  if ( kind == 2 )
    v47 = v20;
  else
    v47 = v14;
  if ( kind == 2 )
    v48 = v19;
  else
    v48 = v13;
  if ( kind == 2 )
    v49 = v18;
  else
    v49 = v12;
  if ( kind == 2 )
    v50 = v17;
  else
    v50 = v11;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v47 - 3), 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B7769C(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}