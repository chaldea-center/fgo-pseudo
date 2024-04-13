void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAAEC & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAEC = 1;
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
    sub_B5D560(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B5D560(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_42EAAE5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__,
      result,
      (_DWORD)servantList,
      commandCodeList);
    byte_42EAAE5 = 1;
  }
  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (BattleServantConfConponent_o *)&this->fields.onSelectSellServant;
  v13 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_B5D560(
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
      (const MethodInfo_259AAC8 *)Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
  }
}


void __fastcall ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantOperationManager_o *servantOperationManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_42EAADE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellMenu_EndClose__, v6, v7, v8);
    byte_42EAADE = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B5D69C(0LL, callback);
  ServantOperationManager__SetMode_32553560(servantOperationManager, 1, 0LL);
  this->fields.onClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


void __fastcall ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EAAE9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellMenu_OnSelectSellServant__, v8, v9, v10);
    byte_42EAAE9 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v12 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B5D694(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_ServantSellMenu_ResultKind__long____long______ctor(
    v12,
    (Il2CppObject *)this,
    Method_ServantSellMenu_OnSelectSellServant__,
    (const MethodInfo_259AAB4 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
  if ( !servantOperationManager )
    sub_B5D69C(v13, v14);
  ServantOperationManager__SetMode(
    servantOperationManager,
    2,
    (System_Action_ServantOperationManager_ActionKind__long____long____o *)v12,
    0LL);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EAAEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EAAEA = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EAADD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellMenu_OnSelectSellServant__, v8, v9, v10);
    byte_42EAADD = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v12 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B5D694(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantSellMenu_OnSelectSellServant__,
      (const MethodInfo_259AAB4 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    if ( !servantOperationManager )
      sub_B5D69C(v13, v14);
    ServantOperationManager__SetMode(
      servantOperationManager,
      2,
      (System_Action_ServantOperationManager_ActionKind__long____long____o *)v12,
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  ServantOperationManager_o *servantOperationManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42EAAE8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, method);
    sub_B5D5C4(&Method_ServantSellMenu_EndCloseShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EAAE8 = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(servantOperationManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B5D69C(servantOperationManager, isDecide);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v22; // x21

  if ( (byte_42EAAE7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9, v10, v11);
    sub_B5D5C4(&Method_ServantSellMenu_EndCloseShowServant__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42EAAE7 = 1;
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
        sub_B5D69C(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(servantOperationManager, this->fields.servantStatusId, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v20 = &Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v20 = &Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v22 = v19;
  System_Action___ctor(v19, (Il2CppObject *)this, *v20, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  __int64 *v24; // x8
  __int64 *v25; // x9

  if ( (byte_42EAAE1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17256/*"btn_txt_craftessence_off"*/, kind, isSelected, method);
    sub_B5D5C4(&StringLiteral_17296/*"btn_txt_servant_off"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17253/*"btn_txt_cc_off"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_17254/*"btn_txt_cc_on"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17297/*"btn_txt_servant_on"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17257/*"btn_txt_craftessence_on"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    byte_42EAAE1 = 1;
  }
  if ( kind == 2 )
  {
    v24 = &StringLiteral_17253/*"btn_txt_cc_off"*/;
    v25 = &StringLiteral_17254/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v24 = &StringLiteral_17256/*"btn_txt_craftessence_off"*/;
    v25 = &StringLiteral_17257/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v24 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v24;
    }
    v24 = &StringLiteral_17296/*"btn_txt_servant_off"*/;
    v25 = &StringLiteral_17297/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v24 = v25;
  return (System_String_o *)*v24;
}


void __fastcall ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B5D69C(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B5D69C(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, 0LL);
}


void __fastcall ServantSellMenu__Init_29086464(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B5D69C(0LL, tabToInit);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_long__o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  int size; // w8
  unsigned __int64 v23; // x22
  signed __int64 v24; // x23

  if ( (byte_42EAAEB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_long__AddRange__,
      (_DWORD)selectedSvtIds,
      (_DWORD)selectedCommandCodeIds,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v16, v17, v18);
    byte_42EAAEB = 1;
  }
  v19 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v19 )
      goto LABEL_16;
    System_Collections_Generic_List_long___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_30479DC *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v19 )
  {
    goto LABEL_16;
  }
  size = v19->fields._size;
  if ( size >= 1 )
  {
    v23 = 0LL;
    v24 = size;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !this->fields.servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(
        this->fields.servantOperationManager,
        v19->fields._items->m_Items[v23++],
        0LL);
      if ( (__int64)v23 >= v24 )
        return;
      size = v19->fields._size;
    }
LABEL_16:
    sub_B5D69C(v20, v21);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_42EAAE4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAE4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B5D69C(0LL, v6);
    ServantOperationManager__SetMode_32553560(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_42EAAE2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAE2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B5D69C(0LL, v6);
    ServantOperationManager__SetMode_32553560(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_42EAAE3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAE3 = 1;
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
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_B5D69C(0LL, v6);
    ServantOperationManager__SetMode_32553560(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnSelectSellServant(
        ServantSellMenu_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
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
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v36; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v37; // x22
  WebViewManager_o *v38; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v40; // x21
  ServantStatusDialog_ResultDelegate_o *v41; // x22
  __int64 v42; // x0

  if ( (byte_42EAAE6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, kind, (_DWORD)servantList, commandCodeList);
    sub_B5D5C4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_ServantSellMenu_EndShowCommandCode__, v18, v19, v20);
    sub_B5D5C4(&Method_ServantSellMenu_EndShowServant__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&SoundManager_TypeInfo, v30, v31, v32);
    byte_42EAAE6 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_23FB038 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v36 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v37 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B5D694(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v37,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v36 )
            {
              CommonUI__OpenServantStatusDialog_18215448(v36, 0, (UserCommandCodeEntity_o *)Entity, v37, 0LL, 0LL);
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
        v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v40 = (CommonUI_o *)v38;
        v41 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v41,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v40 )
        {
          CommonUI__OpenServantStatusDialog_18212632(v40, 34, servantStatusId, v41, 0LL, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(Instance, v34);
      }
    }
    v42 = sub_B5D6C8(Instance);
    sub_B5D668(v42, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t state; // w8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_42EAADC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)onSelectSellServant, (_DWORD)onOpen, method);
    sub_B5D5C4(&Method_ServantSellMenu_EndOpen__, v11, v12, v13);
    byte_42EAADC = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
        (System_Int32_array **)onSelectSellServant,
        (System_String_array **)onOpen,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.onOpen,
        (System_Int32_array **)onOpen,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      ServantSellMenu__EndOpen(this, v21);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
      (System_Int32_array **)onSelectSellServant,
      (System_String_array **)onOpen,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onOpen,
      (System_Int32_array **)onOpen,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v30),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_B5D69C(gameObject, v29);
    }
    ServantOperationManager__SetMode_32553560((ServantOperationManager_o *)gameObject, 1, 0LL);
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v31, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ServantSellMenu_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 *v19; // x8
  _BOOL4 v20; // w20

  if ( (byte_42EAAE0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, (_DWORD)tabButton, (_DWORD)titleSprite, tabSprite);
    this = (ServantSellMenu_o *)sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v14, v15, v16);
    byte_42EAAE0 = 1;
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
        this = (ServantSellMenu_o *)ServantSellMenu__GetTabTitleSpriteName(v17, tabKind, selectedKind == tabKind, v18),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, (System_String_o *)this, 0LL), !tabSprite) )
  {
    sub_B5D69C(this, tabButton);
  }
  v19 = &StringLiteral_17173/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v19 = &StringLiteral_17171/*"btn_bg_12"*/;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v19, 0LL);
  v20 = isInit;
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))tabButton->klass->vtable._14_SetState.method)(
    tabButton,
    0LL,
    v20,
    tabButton->klass->vtable._15_OnPress.methodPtr);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, v20, 0LL);
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
    sub_B5D69C(servantOperationManager, v10);
  }
LABEL_10:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
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
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int32_t Count; // w21
  LocalizationManager_c *v34; // x0
  float *static_fields; // x8
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float v39; // s11
  float *v40; // x8
  UILabel_o *servantTabLabel; // x24
  float v42; // s12
  float v43; // s13
  float v44; // s14
  float v45; // s15
  System_String_o *v46; // x25
  Il2CppObject *v47; // x26
  Il2CppObject *v48; // x0
  float v49; // s3
  float v50; // s2
  float v51; // s1
  float v52; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v54; // x25
  Il2CppObject *v55; // x26
  Il2CppObject *v56; // x0
  float v57; // s3
  float v58; // s2
  float v59; // s1
  float v60; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v62; // x23
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  Il2CppObject *v66; // x21
  BalanceConfig_c *v67; // x0
  Il2CppObject *v68; // x0
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_42EAADF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v24, v25, v26);
    byte_42EAADF = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_75;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    byte_42E563C = 1;
  }
  v34 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v34 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v34->static_fields;
  v36 = static_fields[20];
  v37 = static_fields[21];
  v38 = static_fields[22];
  v39 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v30, v31, v32);
    v34 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = LocalizationManager_TypeInfo;
  }
  v40 = (float *)v34->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  v42 = v40[24];
  v43 = v40[25];
  v44 = v40[26];
  v45 = v40[27];
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v74 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  if ( !SelfUserGame )
    goto LABEL_75;
  v47 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44573324(v46, v47, v48, 0LL);
  if ( !servantTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind )
    v49 = v39;
  else
    v49 = v45;
  if ( kind )
    v50 = v38;
  else
    v50 = v44;
  if ( kind )
    v51 = v37;
  else
    v51 = v43;
  if ( kind )
    v52 = v36;
  else
    v52 = v42;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v49 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v74 = servantEquipSum[0];
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44573324(v54, v55, v56, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind == 1 )
    v57 = v45;
  else
    v57 = v39;
  if ( kind == 1 )
    v58 = v44;
  else
    v58 = v38;
  if ( kind == 1 )
    v59 = v43;
  else
    v59 = v37;
  if ( kind == 1 )
    v60 = v42;
  else
    v60 = v36;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v57 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v74 = Count;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v63, v64, v65);
    byte_42E4B73 = 1;
  }
  v67 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v67 = BalanceConfig_TypeInfo;
  }
  svtKeep = v67->static_fields->CommandCodeFrameMax;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_44573324(v62, v66, v68, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_75:
    sub_B5D69C(Instance, v29);
  }
  if ( kind == 2 )
    v69 = v45;
  else
    v69 = v39;
  if ( kind == 2 )
    v70 = v44;
  else
    v70 = v38;
  if ( kind == 2 )
    v71 = v43;
  else
    v71 = v37;
  if ( kind == 2 )
    v72 = v42;
  else
    v72 = v36;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v69 - 3), 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B5D69C(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}