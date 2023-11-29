void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FBC33 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FBC33 = 1;
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
    sub_B16F98(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B16F98(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_40FBC2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__, *(_QWORD *)&result);
    byte_40FBC2C = 1;
  }
  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (BattleServantConfConponent_o *)&this->fields.onSelectSellServant;
  v13 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_B16F98(
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
      (const MethodInfo_24C6454 *)Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_40FBC25 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ServantSellMenu_EndClose__, v5);
    byte_40FBC25 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B170D4();
  ServantOperationManager__SetMode_31646184(servantOperationManager, 1, 0LL);
  this->fields.onClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v9; // x21

  if ( (byte_40FBC30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B16FFC(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v6);
    sub_B16FFC(&Method_ServantSellMenu_OnSelectSellServant__, v7);
    byte_40FBC30 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v9 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B170CC(
                                                                        System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                                                        method,
                                                                        v2,
                                                                        v3,
                                                                        v4);
  System_Action_ServantSellMenu_ResultKind__long____long______ctor(
    v9,
    (Il2CppObject *)this,
    Method_ServantSellMenu_OnSelectSellServant__,
    (const MethodInfo_24C6440 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
  if ( !servantOperationManager )
    sub_B170D4();
  ServantOperationManager__SetMode(
    servantOperationManager,
    2,
    (System_Action_ServantOperationManager_ActionKind__long____long____o *)v9,
    0LL);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FBC31 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40FBC31 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v9; // x21

  if ( (byte_40FBC24 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B16FFC(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v6);
    sub_B16FFC(&Method_ServantSellMenu_OnSelectSellServant__, v7);
    byte_40FBC24 = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v9 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B170CC(
                                                                          System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantSellMenu_OnSelectSellServant__,
      (const MethodInfo_24C6440 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    if ( !servantOperationManager )
      sub_B170D4();
    ServantOperationManager__SetMode(
      servantOperationManager,
      2,
      (System_Action_ServantOperationManager_ActionKind__long____long____o *)v9,
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FBC2F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantSellMenu_EndCloseShowServant__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FBC2F = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(servantOperationManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x0
  __int64 *v18; // x8
  ServantOperationManager_o *servantOperationManager; // x0
  ServantOperationManager_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x21

  if ( (byte_40FBC2E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9);
    sub_B16FFC(&Method_ServantSellMenu_EndCloseShowServant__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_40FBC2E = 1;
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
      v20 = this->fields.servantOperationManager;
      if ( !v20 )
LABEL_14:
        sub_B170D4();
      ServantOperationManager__ModifyItem(v20, this->fields.servantStatusId, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
    v18 = &Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    v18 = &Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v25 = v17;
  System_Action___ctor(v17, (Il2CppObject *)this, *v18, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v25, 0LL);
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

  if ( (byte_40FBC28 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16981, *(_QWORD *)&kind);
    sub_B16FFC(&StringLiteral_17020, v6);
    sub_B16FFC(&StringLiteral_16978, v7);
    sub_B16FFC(&StringLiteral_16979, v8);
    sub_B16FFC(&StringLiteral_17021, v9);
    sub_B16FFC(&StringLiteral_16982, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FBC28 = 1;
  }
  if ( kind == 2 )
  {
    v12 = (System_String_o **)&StringLiteral_16978;
    v13 = (System_String_o **)&StringLiteral_16979;
  }
  else if ( kind == 1 )
  {
    v12 = (System_String_o **)&StringLiteral_16981;
    v13 = (System_String_o **)&StringLiteral_16982;
  }
  else
  {
    if ( kind )
    {
      v12 = (System_String_o **)&StringLiteral_1;
      return *v12;
    }
    v12 = (System_String_o **)&StringLiteral_17020;
    v13 = (System_String_o **)&StringLiteral_17021;
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
    sub_B170D4();
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B170D4();
  ServantOperationManager__InitBackListView(servantOperationManager, 0LL);
}


void __fastcall ServantSellMenu__Init_28328364(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B170D4();
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_long__o *v12; // x20
  int size; // w8
  unsigned __int64 v14; // x22
  signed __int64 v15; // x23

  if ( (byte_40FBC32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v11);
    byte_40FBC32 = 1;
  }
  v12 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectedSvtIds,
                                                     selectedCommandCodeIds,
                                                     method,
                                                     v4);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v12 )
      goto LABEL_16;
    System_Collections_Generic_List_long___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_2F166F4 *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v12 )
  {
    goto LABEL_16;
  }
  size = v12->fields._size;
  if ( size >= 1 )
  {
    v14 = 0LL;
    v15 = size;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !this->fields.servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(
        this->fields.servantOperationManager,
        v12->fields._items->m_Items[v14++],
        0LL);
      if ( (__int64)v14 >= v15 )
        return;
      size = v12->fields._size;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_40FBC2B & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC2B = 1;
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
      sub_B170D4();
    ServantOperationManager__SetMode_31646184(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_40FBC29 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC29 = 1;
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
      sub_B170D4();
    ServantOperationManager__SetMode_31646184(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_40FBC2A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC2A = 1;
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
      sub_B170D4();
    ServantOperationManager__SetMode_31646184(servantOperationManager, 2, 0LL);
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
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  ServantStatusDialog_EndIndividualityDelegate_o *v28; // x22
  WebViewManager_o *v29; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  ServantStatusDialog_ResultDelegate_o *v36; // x22

  if ( (byte_40FBC2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B16FFC(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v10);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_B16FFC(&Method_ServantSellMenu_EndShowCommandCode__, v12);
    sub_B16FFC(&Method_ServantSellMenu_EndShowServant__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B16FFC(&SoundManager_TypeInfo, v16);
    byte_40FBC2D = 1;
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v28 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B170CC(
                                                                      ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                      v24,
                                                                      v25,
                                                                      v26,
                                                                      v27);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v23 )
            {
              CommonUI__OpenServantStatusDialog_18250804(v23, 0, (UserCommandCodeEntity_o *)Entity, v28, 0LL, 0LL);
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
        v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v31 = (CommonUI_o *)v29;
        v36 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        v32,
                                                        v33,
                                                        v34,
                                                        v35);
        ServantStatusDialog_ResultDelegate___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v31 )
        {
          CommonUI__OpenServantStatusDialog_18248076(v31, 34, servantStatusId, v36, 0LL, 0LL);
          return;
        }
LABEL_22:
        sub_B170D4();
      }
    }
    sub_B17100(v17, v18, v19);
    sub_B170A0();
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
  const MethodInfo *v27; // x3
  ServantOperationManager_o *servantOperationManager; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_o *v33; // x20

  if ( (byte_40FBC23 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, onSelectSellServant);
    sub_B16FFC(&Method_ServantSellMenu_EndOpen__, v11);
    byte_40FBC23 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
        (System_Int32_array **)onSelectSellServant,
        (System_String_array **)onOpen,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
      (System_Int32_array **)onSelectSellServant,
      (System_String_array **)onOpen,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_B16F98(
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
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v27),
          (servantOperationManager = this->fields.servantOperationManager) == 0LL) )
    {
      sub_B170D4();
    }
    ServantOperationManager__SetMode_31646184(servantOperationManager, 1, 0LL);
    this->fields.state = 1;
    v33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v33, 0LL);
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
  System_String_o *TabTitleSpriteName; // x0
  __int64 *v18; // x8
  _BOOL4 v19; // w20

  if ( (byte_40FBC27 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16896, tabButton);
    sub_B16FFC(&StringLiteral_16898, v14);
    byte_40FBC27 = 1;
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
        TabTitleSpriteName = ServantSellMenu__GetTabTitleSpriteName(v15, tabKind, selectedKind == tabKind, v16),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, TabTitleSpriteName, 0LL), !tabSprite) )
  {
    sub_B170D4();
  }
  v18 = &StringLiteral_16898;
  if ( selectedKind != tabKind )
    v18 = &StringLiteral_16896;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v18, 0LL);
  v19 = isInit;
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))tabButton->klass->vtable._14_SetState.method)(
    tabButton,
    0LL,
    v19,
    tabButton->klass->vtable._15_OnPress.methodPtr);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, v19, 0LL);
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
  ServantOperationManager_o *servantOperationManager; // x0
  ServantOperationManager_o *v11; // x0
  ServantOperationManager_o *v12; // x0

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
    v11 = this->fields.servantOperationManager;
    if ( !v11 )
      goto LABEL_11;
    ServantOperationManager__ChangeList(v11, kind, 0LL);
  }
  if ( (unsigned int)kind < 3 )
  {
    v12 = this->fields.servantOperationManager;
    if ( v12 )
    {
      ServantOperationManager__filterButtonState(v12, 0, 1, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v15; // x0
  UserCommandCodeMaster_o *v16; // x0
  __int64 v17; // x1
  int32_t Count; // w21
  LocalizationManager_c *v19; // x0
  float *static_fields; // x8
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s11
  float *v25; // x8
  UILabel_o *servantTabLabel; // x24
  float v27; // s12
  float v28; // s13
  float v29; // s14
  float v30; // s15
  System_String_o *v31; // x25
  __int64 v32; // x0
  Il2CppObject *v33; // x26
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *v36; // x0
  float v37; // s3
  float v38; // s2
  float v39; // s1
  float v40; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v42; // x25
  Il2CppObject *v43; // x26
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  UILabel_o *v46; // x0
  float v47; // s3
  float v48; // s2
  float v49; // s1
  float v50; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v52; // x23
  __int64 v53; // x1
  Il2CppObject *v54; // x21
  BalanceConfig_c *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  UILabel_o *v58; // x0
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_40FBC26 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_2960, v9);
    sub_B16FFC(&StringLiteral_2961, v10);
    sub_B16FFC(&StringLiteral_2962, v11);
    byte_40FBC26 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_75;
  UserServantMaster__getCount(MasterData_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_75;
  v16 = (UserCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v15,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !v16 )
    goto LABEL_75;
  Count = UserCommandCodeMaster__getCount(v16, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    byte_40F6254 = 1;
  }
  v19 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v19->static_fields;
  v21 = static_fields[20];
  v22 = static_fields[21];
  v23 = static_fields[22];
  v24 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    v19 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = LocalizationManager_TypeInfo;
  }
  v25 = (float *)v19->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  v27 = v25[24];
  v28 = v25[25];
  v29 = v25[26];
  v30 = v25[27];
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2961, 0LL);
  v64 = servantEquipSum[1];
  v32 = j_il2cpp_value_box_0(int_TypeInfo, &v64);
  if ( !SelfUserGame )
    goto LABEL_75;
  v33 = (Il2CppObject *)v32;
  svtKeep = SelfUserGame->fields.svtKeep;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v35 = System_String__Format_43739268(v31, v33, v34, 0LL);
  if ( !servantTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantTabLabel, v35, 0LL);
  v36 = this->fields.servantTabLabel;
  if ( !v36 )
    goto LABEL_75;
  if ( kind )
    v37 = v24;
  else
    v37 = v30;
  if ( kind )
    v38 = v23;
  else
    v38 = v29;
  if ( kind )
    v39 = v22;
  else
    v39 = v28;
  if ( kind )
    v40 = v21;
  else
    v40 = v27;
  UILabel__set_effectColor(v36, *(UnityEngine_Color_o *)(&v37 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2962, 0LL);
  v64 = servantEquipSum[0];
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v45 = System_String__Format_43739268(v42, v43, v44, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantEquipTabLabel, v45, 0LL);
  v46 = this->fields.servantEquipTabLabel;
  if ( !v46 )
    goto LABEL_75;
  if ( kind == 1 )
    v47 = v30;
  else
    v47 = v24;
  if ( kind == 1 )
    v48 = v29;
  else
    v48 = v23;
  if ( kind == 1 )
    v49 = v28;
  else
    v49 = v22;
  if ( kind == 1 )
    v50 = v27;
  else
    v50 = v21;
  UILabel__set_effectColor(v46, *(UnityEngine_Color_o *)(&v47 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2960, 0LL);
  v64 = Count;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  if ( !byte_40F6094 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, v53);
    byte_40F6094 = 1;
  }
  v55 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v55 = BalanceConfig_TypeInfo;
  }
  svtKeep = v55->static_fields->CommandCodeFrameMax;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  v57 = System_String__Format_43739268(v52, v54, v56, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, v57, 0LL), (v58 = this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_75:
    sub_B170D4();
  }
  if ( kind == 2 )
    v59 = v30;
  else
    v59 = v24;
  if ( kind == 2 )
    v60 = v29;
  else
    v60 = v23;
  if ( kind == 2 )
    v61 = v28;
  else
    v61 = v22;
  if ( kind == 2 )
    v62 = v27;
  else
    v62 = v21;
  UILabel__set_effectColor(v58, *(UnityEngine_Color_o *)(&v59 - 3), 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B170D4();
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}