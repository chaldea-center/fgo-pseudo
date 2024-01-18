void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4189C77 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4189C77 = 1;
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
    sub_B2C2F8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C2F8(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4189C70 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__, *(_QWORD *)&result);
    byte_4189C70 = 1;
  }
  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (BattleServantConfConponent_o *)&this->fields.onSelectSellServant;
  v13 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_B2C2F8(
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
      (const MethodInfo_24CB280 *)Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
  }
}


void __fastcall ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  ServantOperationManager_o *servantOperationManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Action_o *v13; // x20

  if ( (byte_4189C69 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_ServantSellMenu_EndClose__, v5);
    byte_4189C69 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B2C434(0LL, callback);
  ServantOperationManager__SetMode_31625584(servantOperationManager, 1, 0LL);
  this->fields.onClose = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4189C74 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B2C35C(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v3);
    sub_B2C35C(&Method_ServantSellMenu_OnSelectSellServant__, v4);
    byte_4189C74 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v6 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B2C42C(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_ServantSellMenu_ResultKind__long____long______ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantSellMenu_OnSelectSellServant__,
    (const MethodInfo_24CB26C *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
  if ( !servantOperationManager )
    sub_B2C434(v7, v8);
  ServantOperationManager__SetMode(
    servantOperationManager,
    2,
    (System_Action_ServantOperationManager_ActionKind__long____long____o *)v6,
    0LL);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4189C75 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4189C75 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4189C68 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B2C35C(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v3);
    sub_B2C35C(&Method_ServantSellMenu_OnSelectSellServant__, v4);
    byte_4189C68 = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v6 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B2C42C(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantSellMenu_OnSelectSellServant__,
      (const MethodInfo_24CB26C *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    if ( !servantOperationManager )
      sub_B2C434(v7, v8);
    ServantOperationManager__SetMode(
      servantOperationManager,
      2,
      (System_Action_ServantOperationManager_ActionKind__long____long____o *)v6,
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
  __int64 v6; // x1
  __int64 v7; // x1
  ServantOperationManager_o *servantOperationManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4189C73 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantSellMenu_EndCloseShowServant__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4189C73 = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(servantOperationManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__EndShowServant(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x0
  __int64 *v14; // x8
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v16; // x21

  if ( (byte_4189C72 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9);
    sub_B2C35C(&Method_ServantSellMenu_EndCloseShowServant__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4189C72 = 1;
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
        sub_B2C434(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(servantOperationManager, this->fields.servantStatusId, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v14 = &Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v14 = &Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v16 = v13;
  System_Action___ctor(v13, (Il2CppObject *)this, *v14, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v16, 0LL);
}


int32_t __fastcall ServantSellMenu__GetTabKind(ServantSellMenu_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantSellMenu__GetTabTitleSpriteName(
        ServantSellMenu_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o **v12; // x8
  System_String_o **v13; // x9

  if ( (byte_4189C6C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17047/*"btn_txt_craftessence_off"*/, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_17086/*"btn_txt_servant_off"*/, v6);
    sub_B2C35C(&StringLiteral_17044/*"btn_txt_cc_off"*/, v7);
    sub_B2C35C(&StringLiteral_17045/*"btn_txt_cc_on"*/, v8);
    sub_B2C35C(&StringLiteral_17087/*"btn_txt_servant_on"*/, v9);
    sub_B2C35C(&StringLiteral_17048/*"btn_txt_craftessence_on"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_4189C6C = 1;
  }
  if ( kind == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_17044/*"btn_txt_cc_off"*/;
    v13 = (System_String_o **)&StringLiteral_17045/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_17047/*"btn_txt_craftessence_off"*/;
    v13 = (System_String_o **)&StringLiteral_17048/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v12 = (System_String_o **)&StringLiteral_1/*""*/;
      return *v12;
    }
    v12 = (System_String_o **)&StringLiteral_17086/*"btn_txt_servant_off"*/;
    v13 = (System_String_o **)&StringLiteral_17087/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v12 = v13;
  return *v12;
}


void __fastcall ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B2C434(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B2C434(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, 0LL);
}


void __fastcall ServantSellMenu__Init_28886352(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B2C434(0LL, tabToInit);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int size; // w8
  unsigned __int64 v15; // x22
  signed __int64 v16; // x23

  if ( (byte_4189C76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_4189C76 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v11 )
      goto LABEL_16;
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v11 )
  {
    goto LABEL_16;
  }
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v15 = 0LL;
    v16 = size;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !this->fields.servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(
        this->fields.servantOperationManager,
        v11->fields._items->m_Items[v15++],
        0LL);
      if ( (__int64)v15 >= v16 )
        return;
      size = v11->fields._size;
    }
LABEL_16:
    sub_B2C434(v12, v13);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4189C6F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C6F = 1;
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
      sub_B2C434(0LL, v4);
    ServantOperationManager__SetMode_31625584(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4189C6D & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C6D = 1;
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
      sub_B2C434(0LL, v4);
    ServantOperationManager__SetMode_31625584(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4189C6E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C6E = 1;
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
      sub_B2C434(0LL, v4);
    ServantOperationManager__SetMode_31625584(servantOperationManager, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__OnSelectSellServant(
        ServantSellMenu_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v20; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v21; // x22
  WebViewManager_o *v22; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v24; // x21
  ServantStatusDialog_ResultDelegate_o *v25; // x22
  __int64 v26; // x0

  if ( (byte_4189C71 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B2C35C(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v10);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_B2C35C(&Method_ServantSellMenu_EndShowCommandCode__, v12);
    sub_B2C35C(&Method_ServantSellMenu_EndShowServant__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B2C35C(&SoundManager_TypeInfo, v16);
    byte_4189C71 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v21 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B2C42C(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v21,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v20 )
            {
              CommonUI__OpenServantStatusDialog_17984568(v20, 0, (UserCommandCodeEntity_o *)Entity, v21, 0LL, 0LL);
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
        v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v24 = (CommonUI_o *)v22;
        v25 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v25,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v24 )
        {
          CommonUI__OpenServantStatusDialog_17981840(v24, 34, servantStatusId, v25, 0LL, 0LL);
          return;
        }
LABEL_22:
        sub_B2C434(Instance, v18);
      }
    }
    v26 = sub_B2C460(Instance);
    sub_B2C400(v26, 0LL);
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
  __int64 v11; // x1
  int32_t state; // w8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  System_Action_o *v29; // x20

  if ( (byte_4189C67 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, onSelectSellServant);
    sub_B2C35C(&Method_ServantSellMenu_EndOpen__, v11);
    byte_4189C67 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
        (System_Int32_array **)onSelectSellServant,
        (System_String_array **)onOpen,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.onOpen,
        (System_Int32_array **)onOpen,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      ServantSellMenu__EndOpen(this, v19);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
      (System_Int32_array **)onSelectSellServant,
      (System_String_array **)onOpen,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onOpen,
      (System_Int32_array **)onOpen,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v28),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_B2C434(gameObject, v27);
    }
    ServantOperationManager__SetMode_31625584((ServantOperationManager_o *)gameObject, 1, 0LL);
    this->fields.state = 1;
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v29, 0LL);
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
  __int64 v14; // x1
  ServantSellMenu_o *v15; // x0
  const MethodInfo *v16; // x3
  __int64 *v17; // x8
  _BOOL4 v18; // w20

  if ( (byte_4189C6B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, tabButton);
    this = (ServantSellMenu_o *)sub_B2C35C(&StringLiteral_16964/*"btn_bg_19"*/, v14);
    byte_4189C6B = 1;
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
        this = (ServantSellMenu_o *)ServantSellMenu__GetTabTitleSpriteName(v15, tabKind, selectedKind == tabKind, v16),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, (System_String_o *)this, 0LL), !tabSprite) )
  {
    sub_B2C434(this, tabButton);
  }
  v17 = &StringLiteral_16964/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v17 = &StringLiteral_16962/*"btn_bg_12"*/;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v17, 0LL);
  v18 = isInit;
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))tabButton->klass->vtable._14_SetState.method)(
    tabButton,
    0LL,
    v18,
    tabButton->klass->vtable._15_OnPress.methodPtr);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, v18, 0LL);
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
    sub_B2C434(servantOperationManager, v10);
  }
LABEL_10:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t Count; // w21
  LocalizationManager_c *v17; // x0
  float *static_fields; // x8
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float *v23; // x8
  UILabel_o *servantTabLabel; // x24
  float v25; // s12
  float v26; // s13
  float v27; // s14
  float v28; // s15
  System_String_o *v29; // x25
  Il2CppObject *v30; // x26
  Il2CppObject *v31; // x0
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v37; // x25
  Il2CppObject *v38; // x26
  Il2CppObject *v39; // x0
  float v40; // s3
  float v41; // s2
  float v42; // s1
  float v43; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v45; // x23
  __int64 v46; // x1
  Il2CppObject *v47; // x21
  BalanceConfig_c *v48; // x0
  Il2CppObject *v49; // x0
  float v50; // s3
  float v51; // s2
  float v52; // s1
  float v53; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4189C6A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_B2C35C(&StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_B2C35C(&StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_4189C6A = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_75;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    byte_4184963 = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v17->static_fields;
  v19 = static_fields[20];
  v20 = static_fields[21];
  v21 = static_fields[22];
  v22 = static_fields[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    v17 = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = LocalizationManager_TypeInfo;
  }
  v23 = (float *)v17->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  v25 = v23[24];
  v26 = v23[25];
  v27 = v23[26];
  v28 = v23[27];
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v55 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  if ( !SelfUserGame )
    goto LABEL_75;
  v30 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44301068(v29, v30, v31, 0LL);
  if ( !servantTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind )
    v32 = v22;
  else
    v32 = v28;
  if ( kind )
    v33 = v21;
  else
    v33 = v27;
  if ( kind )
    v34 = v20;
  else
    v34 = v26;
  if ( kind )
    v35 = v19;
  else
    v35 = v25;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v32 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v55 = servantEquipSum[0];
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44301068(v37, v38, v39, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind == 1 )
    v40 = v28;
  else
    v40 = v22;
  if ( kind == 1 )
    v41 = v27;
  else
    v41 = v21;
  if ( kind == 1 )
    v42 = v26;
  else
    v42 = v20;
  if ( kind == 1 )
    v43 = v25;
  else
    v43 = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v40 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v55 = Count;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  if ( !byte_4183CB7 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, v46);
    byte_4183CB7 = 1;
  }
  v48 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v48 = BalanceConfig_TypeInfo;
  }
  svtKeep = v48->static_fields->CommandCodeFrameMax;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44301068(v45, v47, v49, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_75:
    sub_B2C434(Instance, v14);
  }
  if ( kind == 2 )
    v50 = v28;
  else
    v50 = v22;
  if ( kind == 2 )
    v51 = v27;
  else
    v51 = v21;
  if ( kind == 2 )
    v52 = v26;
  else
    v52 = v20;
  if ( kind == 2 )
    v53 = v25;
  else
    v53 = v19;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v50 - 3), 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B2C434(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}