void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4216AC9 & 1) == 0 )
  {
    sub_B0D8A4(&BaseMenu_TypeInfo, method);
    byte_4216AC9 = 1;
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
    sub_B0D840(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B0D840(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4216AC2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__, *(_QWORD *)&result);
    byte_4216AC2 = 1;
  }
  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (BattleServantConfConponent_o *)&this->fields.onSelectSellServant;
  v13 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_B0D840(
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
      (const MethodInfo_247E1E4 *)Method_System_Action_ServantSellMenu_ResultKind__long____long____Invoke__);
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
  System_Action_o *v15; // x20

  if ( (byte_4216ABB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_ServantSellMenu_EndClose__, v5);
    byte_4216ABB = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B0D97C(0LL);
  ServantOperationManager__SetMode_31307212(servantOperationManager, 1, 0LL);
  this->fields.onClose = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4216AC6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B0D8A4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v4);
    sub_B0D8A4(&Method_ServantSellMenu_OnSelectSellServant__, v5);
    byte_4216AC6 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v7 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B0D974(
                                                                        System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                                                        method,
                                                                        v2);
  System_Action_ServantSellMenu_ResultKind__long____long______ctor(
    v7,
    (Il2CppObject *)this,
    Method_ServantSellMenu_OnSelectSellServant__,
    (const MethodInfo_247E1D0 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
  if ( !servantOperationManager )
    sub_B0D97C(v8);
  ServantOperationManager__SetMode(
    servantOperationManager,
    2,
    (System_Action_ServantOperationManager_ActionKind__long____long____o *)v7,
    0LL);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4216AC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4216AC7 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  ServantOperationManager_o *servantOperationManager; // x20
  System_Action_ServantSellMenu_ResultKind__long____long____o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4216ABA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__, method);
    sub_B0D8A4(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, v4);
    sub_B0D8A4(&Method_ServantSellMenu_OnSelectSellServant__, v5);
    byte_4216ABA = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v7 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B0D974(
                                                                          System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                                                          method,
                                                                          v2);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantSellMenu_OnSelectSellServant__,
      (const MethodInfo_247E1D0 *)Method_System_Action_ServantOperationManager_ActionKind__long____long_____ctor__);
    if ( !servantOperationManager )
      sub_B0D97C(v8);
    ServantOperationManager__SetMode(
      servantOperationManager,
      2,
      (System_Action_ServantOperationManager_ActionKind__long____long____o *)v7,
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
  System_Action_o *v12; // x21

  if ( (byte_4216AC5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantSellMenu_EndCloseShowServant__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4216AC5 = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(servantOperationManager, this->fields.commandCodeStatusId, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B0D97C(servantOperationManager);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
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
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  ServantOperationManager_o *servantOperationManager; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21

  if ( (byte_4216AC4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9);
    sub_B0D8A4(&Method_ServantSellMenu_EndCloseShowServant__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4216AC4 = 1;
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
        sub_B0D97C(servantOperationManager);
      ServantOperationManager__ModifyItem(servantOperationManager, this->fields.servantStatusId, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
    v16 = &Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    v16 = &Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v20 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog(Instance, v20, 0LL);
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
  __int64 *v12; // x8
  __int64 *v13; // x9

  if ( (byte_4216ABE & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17098/*"btn_txt_craftessence_off"*/, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_17138/*"btn_txt_servant_off"*/, v6);
    sub_B0D8A4(&StringLiteral_17095/*"btn_txt_cc_off"*/, v7);
    sub_B0D8A4(&StringLiteral_17096/*"btn_txt_cc_on"*/, v8);
    sub_B0D8A4(&StringLiteral_17139/*"btn_txt_servant_on"*/, v9);
    sub_B0D8A4(&StringLiteral_17099/*"btn_txt_craftessence_on"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4216ABE = 1;
  }
  if ( kind == 2 )
  {
    v12 = &StringLiteral_17095/*"btn_txt_cc_off"*/;
    v13 = &StringLiteral_17096/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v12 = &StringLiteral_17098/*"btn_txt_craftessence_off"*/;
    v13 = &StringLiteral_17099/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v12 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v12;
    }
    v12 = &StringLiteral_17138/*"btn_txt_servant_off"*/;
    v13 = &StringLiteral_17139/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v12 = v13;
  return (System_String_o *)*v12;
}


void __fastcall ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B0D97C(0LL);
  ServantOperationManager__DestroyList(servantOperationManager, 0LL);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B0D97C(0LL);
  ServantOperationManager__InitBackListView(servantOperationManager, 0LL);
}


void __fastcall ServantSellMenu__Init_28287624(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B0D97C(0LL);
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
  int size; // w8
  unsigned __int64 v14; // x22
  signed __int64 v15; // x23

  if ( (byte_4216AC8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_4216AC8 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectedSvtIds,
                                                     selectedCommandCodeIds);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v11 )
      goto LABEL_16;
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_2FB6104 *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v11 )
  {
    goto LABEL_16;
  }
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v14 = 0LL;
    v15 = size;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !this->fields.servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(
        this->fields.servantOperationManager,
        v11->fields._items->m_Items[v14++],
        0LL);
      if ( (__int64)v14 >= v15 )
        return;
      size = v11->fields._size;
    }
LABEL_16:
    sub_B0D97C(v12);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4216AC1 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216AC1 = 1;
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
      sub_B0D97C(0LL);
    ServantOperationManager__SetMode_31307212(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4216ABF & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216ABF = 1;
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
      sub_B0D97C(0LL);
    ServantOperationManager__SetMode_31307212(servantOperationManager, 2, 0LL);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4216AC0 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216AC0 = 1;
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
      sub_B0D97C(0LL);
    ServantOperationManager__SetMode_31307212(servantOperationManager, 2, 0LL);
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
  UserServantEntity_o *Entity; // x20
  CommonUI_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  ServantStatusDialog_EndIndividualityDelegate_o *v22; // x22
  WebViewManager_o *v23; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  ServantStatusDialog_ResultDelegate_o *v28; // x22
  __int64 v29; // x0

  if ( (byte_4216AC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_B0D8A4(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v10);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_B0D8A4(&Method_ServantSellMenu_EndShowCommandCode__, v12);
    sub_B0D8A4(&Method_ServantSellMenu_EndShowServant__, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_B0D8A4(&SoundManager_TypeInfo, v16);
    byte_4216AC3 = 1;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_2669DFC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v19 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v22 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_B0D974(
                                                                      ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                      v20,
                                                                      v21);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v22,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v19 )
            {
              CommonUI__OpenServantStatusDialog_17030260(v19, 0, (UserCommandCodeEntity_o *)Entity, v22, 0LL, 0LL);
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
        v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v25 = (CommonUI_o *)v23;
        v28 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v26, v27);
        ServantStatusDialog_ResultDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v25 )
        {
          CommonUI__OpenServantStatusDialog_17027444(v25, 34, servantStatusId, v28, 0LL, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(Instance);
      }
    }
    v29 = sub_B0D9A8(Instance);
    sub_B0D948(v29, 0LL);
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
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x20

  if ( (byte_4216AB9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, onSelectSellServant);
    sub_B0D8A4(&Method_ServantSellMenu_EndOpen__, v11);
    byte_4216AB9 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
        (System_Int32_array **)onSelectSellServant,
        (System_String_array **)onOpen,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_B0D840(
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onSelectSellServant,
      (System_Int32_array **)onSelectSellServant,
      (System_String_array **)onOpen,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_B0D840(
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
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_B0D97C(gameObject);
    }
    ServantOperationManager__SetMode_31307212((ServantOperationManager_o *)gameObject, 1, 0LL);
    this->fields.state = 1;
    v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v30, 0LL);
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

  if ( (byte_4216ABD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, tabButton);
    this = (ServantSellMenu_o *)sub_B0D8A4(&StringLiteral_17015/*"btn_bg_19"*/, v14);
    byte_4216ABD = 1;
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
    sub_B0D97C(this);
  }
  v17 = &StringLiteral_17015/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v17 = &StringLiteral_17013/*"btn_bg_12"*/;
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
    sub_B0D97C(servantOperationManager);
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
  int32_t Count; // w21
  LocalizationManager_c *v16; // x0
  float *static_fields; // x8
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s11
  float *v22; // x8
  UILabel_o *servantTabLabel; // x24
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s15
  System_String_o *v28; // x25
  Il2CppObject *v29; // x26
  Il2CppObject *v30; // x0
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v36; // x25
  Il2CppObject *v37; // x26
  Il2CppObject *v38; // x0
  float v39; // s3
  float v40; // s2
  float v41; // s1
  float v42; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v44; // x23
  __int64 v45; // x1
  Il2CppObject *v46; // x21
  BalanceConfig_c *v47; // x0
  Il2CppObject *v48; // x0
  float v49; // s3
  float v50; // s2
  float v51; // s1
  float v52; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4216ABC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_2981/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_B0D8A4(&StringLiteral_2982/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_B0D8A4(&StringLiteral_2983/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_4216ABC = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_75;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_75;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_75;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    byte_4211435 = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v16->static_fields;
  v18 = static_fields[20];
  v19 = static_fields[21];
  v20 = static_fields[22];
  v21 = static_fields[23];
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    v16 = LocalizationManager_TypeInfo;
    byte_4211436 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = LocalizationManager_TypeInfo;
  }
  v22 = (float *)v16->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  v24 = v22[24];
  v25 = v22[25];
  v26 = v22[26];
  v27 = v22[27];
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v54 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  if ( !SelfUserGame )
    goto LABEL_75;
  v29 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v28, v29, v30, 0LL);
  if ( !servantTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind )
    v31 = v21;
  else
    v31 = v27;
  if ( kind )
    v32 = v20;
  else
    v32 = v26;
  if ( kind )
    v33 = v19;
  else
    v33 = v25;
  if ( kind )
    v34 = v18;
  else
    v34 = v24;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v31 - 3), 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v54 = servantEquipSum[0];
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v36, v37, v38, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_75;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_75;
  if ( kind == 1 )
    v39 = v27;
  else
    v39 = v21;
  if ( kind == 1 )
    v40 = v26;
  else
    v40 = v20;
  if ( kind == 1 )
    v41 = v25;
  else
    v41 = v19;
  if ( kind == 1 )
    v42 = v24;
  else
    v42 = v18;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v39 - 3), 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v54 = Count;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  if ( !byte_421088F )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v45);
    byte_421088F = 1;
  }
  v47 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  svtKeep = v47->static_fields->CommandCodeFrameMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v44, v46, v48, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_75:
    sub_B0D97C(Instance);
  }
  if ( kind == 2 )
    v49 = v27;
  else
    v49 = v21;
  if ( kind == 2 )
    v50 = v26;
  else
    v50 = v20;
  if ( kind == 2 )
    v51 = v25;
  else
    v51 = v19;
  if ( kind == 2 )
    v52 = v24;
  else
    v52 = v18;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v49 - 3), 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_B0D97C(this);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}