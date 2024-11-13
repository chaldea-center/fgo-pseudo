void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1266B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B1266B = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__CallOnClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (PartyOrganizationUtility_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1BCA784(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__CallOnOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onOpen; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onOpen; // t1

  onOpen = this->fields.onOpen;
  p_onOpen = (PartyOrganizationUtility_o *)&this->fields.onOpen;
  v9 = onOpen;
  if ( onOpen )
  {
    p_onOpen->klass = 0LL;
    sub_1BCA784(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__CallOnSelectServant(
        ServantSellMenu_o *this,
        int32_t result,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onSelectSellServant; // x0
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *v9; // x22
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant; // t1

  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant;
  v9 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_1BCA784(
      p_onSelectSellServant,
      0LL,
      (int64_t)servantList,
      (int32_t)commandCodeList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Int64_array *, System_Int64_array *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      servantList,
      commandCodeList,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  ServantOperationManager_o *servantOperationManager; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B1265E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ServantSellMenu_EndClose__, v5, v6);
    byte_4B1265E = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1BCAA3C(0LL, callback);
  ServantOperationManager__SetMode_33355204(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClose, (int64_t)callback, v8, v9, v10, v11, v12, v13);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B12668 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellMenu_OnSelectSellServant__, v5, v6);
    byte_4B12668 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v8 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(
                                        System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                        method,
                                        v2,
                                        v3);
  System_Action_Int32Enum__object__object____ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0LL);
  if ( !servantOperationManager )
    sub_1BCAA3C(v9, v10);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantOperationManager->fields.onSelect,
    (int64_t)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  ServantOperationManager__SetMode_33355204(servantOperationManager, 2, v17);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B12669 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B12669 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4B1265D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ServantSellMenu_OnSelectSellServant__, v5, v6);
    byte_4B1265D = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v8 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(
                                          System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                          method,
                                          v2,
                                          v3);
    System_Action_Int32Enum__object__object____ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0LL);
    if ( !servantOperationManager )
      sub_1BCAA3C(v9, v10);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v8;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&servantOperationManager->fields.onSelect,
      (int64_t)v8,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    ServantOperationManager__SetMode_33355204(servantOperationManager, 2, v17);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ServantOperationManager_o *servantOperationManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B12667 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_ServantSellMenu_EndCloseShowServant__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B12667 = 1;
  }
  if ( isDecide )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_8;
    ServantOperationManager__ModifyItem(
      servantOperationManager,
      this->fields.commandCodeStatusId,
      (const MethodInfo *)isNeedSort);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x0
  intptr_t v20; // w2
  ServantOperationManager_o *servantOperationManager; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_o *v25; // x21

  if ( (byte_4B12666 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9, v10);
    sub_1BCA7E0(&Method_ServantSellMenu_EndCloseShowServant__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B12666 = 1;
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
        ServantOperationManager__SortItem(servantOperationManager, (const MethodInfo *)isDecide);
      }
      servantOperationManager = this->fields.servantOperationManager;
      if ( !servantOperationManager )
LABEL_14:
        sub_1BCAA3C(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(
        servantOperationManager,
        this->fields.servantStatusId,
        (const MethodInfo *)isNeedSort);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
    v20 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
    v20 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v25 = v19;
  System_Action___ctor(v19, (Il2CppObject *)this, v20, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v25, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 *v18; // x8
  __int64 *v19; // x9

  if ( (byte_4B12661 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17747/*"btn_txt_craftessence_off"*/, *(_QWORD *)&kind, isSelected);
    sub_1BCA7E0(&StringLiteral_17787/*"btn_txt_servant_off"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17743/*"btn_txt_cc_off"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17744/*"btn_txt_cc_on"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17788/*"btn_txt_servant_on"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17748/*"btn_txt_craftessence_on"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B12661 = 1;
  }
  if ( kind == 2 )
  {
    v18 = &StringLiteral_17743/*"btn_txt_cc_off"*/;
    v19 = &StringLiteral_17744/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v18 = &StringLiteral_17747/*"btn_txt_craftessence_off"*/;
    v19 = &StringLiteral_17748/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v18 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v18;
    }
    v18 = &StringLiteral_17787/*"btn_txt_servant_off"*/;
    v19 = &StringLiteral_17788/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v18 = v19;
  return (System_String_o *)*v18;
}


void __fastcall ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1BCAA3C(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1BCAA3C(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__Init_33406024(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&tabToInit);
  ServantOperationManager__DestroyList(servantOperationManager, *(const MethodInfo **)&tabToInit);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_long__o *v15; // x21
  int64_t Item; // x0
  __int64 v17; // x1
  int size; // w23
  int32_t v19; // w20
  ServantOperationManager_o *servantOperationManager; // x22
  const MethodInfo *v21; // x2

  if ( (byte_4B1266A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds, selectedCommandCodeIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v13, v14);
    byte_4B1266A = 1;
  }
  v15 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectedSvtIds,
                                                     selectedCommandCodeIds,
                                                     method);
  System_Collections_Generic_List_long____ctor(
    v15,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v15 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_3589E9C *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v15 )
  {
    goto LABEL_13;
  }
  size = v15->fields._size;
  if ( size >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      servantOperationManager = this->fields.servantOperationManager;
      Item = System_Collections_Generic_List_long___get_Item(
               v15,
               v19,
               (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v21);
      if ( size == ++v19 )
        return;
    }
LABEL_13:
    sub_1BCAA3C(Item, v17);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4B12664 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSellMenu_OnClickTabCommandCode__, method, v2);
    byte_4B12664 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellMenu_OnClickTabCommandCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v6);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1BCAA3C(0LL, v7);
    ServantOperationManager__SetMode_33355204(servantOperationManager, 2, v8);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4B12662 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSellMenu_OnClickTabServant__, method, v2);
    byte_4B12662 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v6);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1BCAA3C(0LL, v7);
    ServantOperationManager__SetMode_33355204(servantOperationManager, 2, v8);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4B12663 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSellMenu_OnClickTabServantEquip__, method, v2);
    byte_4B12663 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0LL, 0, 0, 0, 0, 0LL);
    v4 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSellMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 1, 0, v6);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1BCAA3C(0LL, v7);
    ServantOperationManager__SetMode_33355204(servantOperationManager, 2, v8);
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
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  ServantStatusDialog_EndIndividualityDelegate_o *v34; // x22
  Il2CppObject *v35; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  ServantStatusDialog_ResultDelegate_o *v41; // x22

  if ( (byte_4B12665 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind, servantList);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantSellMenu_EndShowCommandCode__, v15, v16);
    sub_1BCA7E0(&Method_ServantSellMenu_EndShowServant__, v17, v18);
    sub_1BCA7E0(&Method_ServantSellMenu_OnSelectSellServant__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B12665 = 1;
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
    v25 = Method_ServantSellMenu_OnSelectSellServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnSelectSellServant__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1BCA7F8(Method_ServantSellMenu_OnSelectSellServant__);
    v26 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( commandCodeList->max_length )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v34 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1BCAA2C(
                                                                      ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                      v31,
                                                                      v32,
                                                                      v33);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v34,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v30 )
            {
              CommonUI__OpenServantStatusDialog_30779192(
                (CommonUI_o *)v30,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v34,
                0LL,
                0LL);
              return;
            }
          }
        }
        goto LABEL_21;
      }
    }
    else
    {
      if ( !servantList )
        goto LABEL_21;
      if ( servantList->max_length )
      {
        this->fields.servantStatusId = servantList->m_Items[0];
        v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v37 = (CommonUI_o *)v35;
        v41 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        v38,
                                                        v39,
                                                        v40);
        ServantStatusDialog_ResultDelegate___ctor(
          v41,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v37 )
        {
          CommonUI__OpenServantStatusDialog_30776564(v37, 34, servantStatusId, v41, 0LL, 0LL);
          return;
        }
LABEL_21:
        sub_1BCAA3C(Instance, v28);
      }
    }
    sub_1BCAA44(Instance, v28);
  }
}


void __fastcall ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t state; // w8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_o *v34; // x20

  if ( (byte_4B1265C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, onSelectSellServant, onOpen);
    sub_1BCA7E0(&Method_ServantSellMenu_EndOpen__, v11, v12);
    byte_4B1265C = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant,
        (int64_t)onSelectSellServant,
        (int64_t)onOpen,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onOpen, (int64_t)onOpen, v14, v15, v16, v17, v18, v19);
      ServantSellMenu__EndOpen(this, v20);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant,
      (int64_t)onSelectSellServant,
      (int64_t)onOpen,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onOpen, (int64_t)onOpen, v21, v22, v23, v24, v25, v26);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v29),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v28);
    }
    ServantOperationManager__SetMode_33355204((ServantOperationManager_o *)gameObject, 1, v30);
    this->fields.state = 1;
    v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v34, 0LL);
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
  __int64 v15; // x2
  ServantSellMenu_o *v16; // x0
  const MethodInfo *v17; // x3
  __int64 *v18; // x8
  _BOOL4 v19; // w20

  if ( (byte_4B12660 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, tabButton, titleSprite);
    this = (ServantSellMenu_o *)sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v14, v15);
    byte_4B12660 = 1;
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
        this = (ServantSellMenu_o *)ServantSellMenu__GetTabTitleSpriteName(v16, tabKind, selectedKind == tabKind, v17),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, (System_String_o *)this, 0LL), !tabSprite) )
  {
    sub_1BCAA3C(this, tabButton);
  }
  v18 = &StringLiteral_17651/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v18 = &StringLiteral_17649/*"btn_bg_12"*/;
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct ServantOperationManager_o *v13; // x8

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
      goto LABEL_12;
    ServantOperationManager__CreateList(servantOperationManager, kind, v12);
  }
  else if ( this->fields.tabKind != kind )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_12;
    ServantOperationManager__ChangeList(servantOperationManager, kind, v12);
  }
  if ( (unsigned int)kind < 3 )
  {
    v13 = this->fields.servantOperationManager;
    if ( v13 )
    {
      servantOperationManager = (ServantOperationManager_o *)v13->fields.filterButton;
      if ( servantOperationManager )
      {
        ((void (__fastcall *)(ServantOperationManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))servantOperationManager->klass[1]._1.implementedInterfaces)(
          servantOperationManager,
          0LL,
          1LL,
          servantOperationManager->klass[1]._1.interfaceOffsets);
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1BCAA3C(servantOperationManager, v11);
  }
LABEL_11:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
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
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t Count; // w21
  LocalizationManager_c *v25; // x0
  float *static_fields; // x8
  float v27; // s10
  float v28; // s11
  float v29; // s8
  float v30; // s9
  struct LocalizationManager_StaticFields *v31; // x8
  UILabel_o *servantTabLabel; // x24
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_String_o *v37; // x25
  Il2CppObject *v38; // x26
  Il2CppObject *v39; // x0
  float v40; // s3
  float v41; // s2
  float v42; // s1
  float v43; // s0
  __int64 v44; // x1
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x26
  Il2CppObject *v48; // x0
  float v49; // s3
  float v50; // s2
  float v51; // s1
  float v52; // s0
  __int64 v53; // x1
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *v58; // x21
  BalanceConfig_c *v59; // x0
  Il2CppObject *v60; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v62; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1265F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v17, v18);
    byte_4B1265F = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    byte_4B11133 = 1;
  }
  v25 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v25 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v25->static_fields;
  v28 = static_fields[20];
  v27 = static_fields[21];
  v30 = static_fields[22];
  v29 = static_fields[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    v25 = LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25, v22);
    v25 = LocalizationManager_TypeInfo;
  }
  v31 = v25->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  r = v31->selectEffectColor.fields.r;
  g = v31->selectEffectColor.fields.g;
  b = v31->selectEffectColor.fields.b;
  a = v31->selectEffectColor.fields.a;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v62 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  if ( !SelfUserGame )
    goto LABEL_39;
  v38 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_62415592(v37, v38, v39, 0LL);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v40 = v29;
  v41 = v30;
  v42 = v27;
  v43 = v28;
  if ( !kind )
  {
    v40 = a;
    v41 = b;
    v42 = g;
    v43 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v43, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v62 = servantEquipSum[0];
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_62415592(v46, v47, v48, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v49 = v29;
  v50 = v30;
  v51 = v27;
  v52 = v28;
  if ( kind == 1 )
  {
    v49 = a;
    v50 = b;
    v51 = g;
    v52 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v52, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v62 = Count;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v56, v57);
    byte_4B112D7 = 1;
  }
  v59 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v56);
    v59 = BalanceConfig_TypeInfo;
  }
  svtKeep = v59->static_fields->CommandCodeFrameMax;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_62415592(v55, v58, v60, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind == 2 )
  {
    v29 = a;
    v30 = b;
    v27 = g;
    v28 = r;
  }
  if ( !Instance )
LABEL_39:
    sub_1BCAA3C(Instance, v21);
  v64.fields.r = v28;
  v64.fields.g = v27;
  v64.fields.b = v30;
  v64.fields.a = v29;
  UILabel__set_effectColor((UILabel_o *)Instance, v64, 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1BCAA3C(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}