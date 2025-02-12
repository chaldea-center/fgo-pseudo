void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BB0ADF & 1) == 0 )
  {
    sub_1C13D24(&BaseMenu_TypeInfo, method);
    byte_4BB0ADF = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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
    sub_1C13CC8(p_onClose, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C13CC8(p_onOpen, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1C13CC8(
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
  ServantOperationManager_o *servantOperationManager; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Action_o *v13; // x20

  if ( (byte_4BB0AD2 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_ServantSellMenu_EndClose__, v5);
    byte_4BB0AD2 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C13F80(0LL, callback);
  ServantOperationManager__SetMode_33715160(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onClose, (int64_t)callback, v7, v8, v9, v10, v11, v12);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BB0ADC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method);
    sub_1C13D24(&Method_ServantSellMenu_OnSelectSellServant__, v3);
    byte_4BB0ADC = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v5 = (System_Action_T1__T2__T3__o *)sub_1C13F70(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_Int32Enum__object__object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0LL);
  if ( !servantOperationManager )
    sub_1C13F80(v6, v7);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v5;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&servantOperationManager->fields.onSelect,
    (int64_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantOperationManager__SetMode_33715160(servantOperationManager, 2, v14);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB0ADD & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4BB0ADD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4BB0AD1 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method);
    sub_1C13D24(&Method_ServantSellMenu_OnSelectSellServant__, v3);
    byte_4BB0AD1 = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v5 = (System_Action_T1__T2__T3__o *)sub_1C13F70(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0LL);
    if ( !servantOperationManager )
      sub_1C13F80(v6, v7);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v5;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&servantOperationManager->fields.onSelect,
      (int64_t)v5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ServantOperationManager__SetMode_33715160(servantOperationManager, 2, v14);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4BB0ADB & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_ServantSellMenu_EndCloseShowServant__, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BB0ADB = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1C13F80(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v13; // x0
  intptr_t v14; // w2
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v16; // x21

  if ( (byte_4BB0ADA & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, isDecide);
    sub_1C13D24(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9);
    sub_1C13D24(&Method_ServantSellMenu_EndCloseShowServant__, v10);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_4BB0ADA = 1;
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
        sub_1C13F80(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(
        servantOperationManager,
        this->fields.servantStatusId,
        (const MethodInfo *)isNeedSort);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    v14 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    v14 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v16 = v13;
  System_Action___ctor(v13, (Il2CppObject *)this, v14, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
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

  if ( (byte_4BB0AD5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17837/*"btn_txt_blacklist_off"*/, *(_QWORD *)&kind);
    sub_1C13D24(&StringLiteral_17877/*"btn_txt_on_weekly"*/, v6);
    sub_1C13D24(&StringLiteral_17833/*"btn_txt_archivetocard_off"*/, v7);
    sub_1C13D24(&StringLiteral_17834/*"btn_txt_archivetocard_on"*/, v8);
    sub_1C13D24(&StringLiteral_17878/*"btn_txt_only_1"*/, v9);
    sub_1C13D24(&StringLiteral_17838/*"btn_txt_blacklist_on"*/, v10);
    sub_1C13D24(&StringLiteral_1/*""*/, v11);
    byte_4BB0AD5 = 1;
  }
  if ( kind == 2 )
  {
    v12 = &StringLiteral_17833/*"btn_txt_archivetocard_off"*/;
    v13 = &StringLiteral_17834/*"btn_txt_archivetocard_on"*/;
  }
  else if ( kind == 1 )
  {
    v12 = &StringLiteral_17837/*"btn_txt_blacklist_off"*/;
    v13 = &StringLiteral_17838/*"btn_txt_blacklist_on"*/;
  }
  else
  {
    if ( kind )
    {
      v12 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v12;
    }
    v12 = &StringLiteral_17877/*"btn_txt_on_weekly"*/;
    v13 = &StringLiteral_17878/*"btn_txt_only_1"*/;
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
    sub_1C13F80(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C13F80(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__Init_33766272(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C13F80(0LL, tabToInit);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x21
  int64_t Item; // x0
  __int64 v13; // x1
  int size; // w23
  int32_t v15; // w20
  ServantOperationManager_o *servantOperationManager; // x22
  const MethodInfo *v17; // x2

  if ( (byte_4BB0ADE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds);
    sub_1C13D24(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_long__get_Item__, v9);
    sub_1C13D24(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_4BB0ADE = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1C13F70(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_36149AC *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v11 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_361540C *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_361540C *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v11 )
  {
    goto LABEL_13;
  }
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      servantOperationManager = this->fields.servantOperationManager;
      Item = System_Collections_Generic_List_long___get_Item(
               v11,
               v15,
               (const MethodInfo_3614F10 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v17);
      if ( size == ++v15 )
        return;
    }
LABEL_13:
    sub_1C13F80(Item, v13);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4BB0AD8 & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantSellMenu_OnClickTabCommandCode__, method);
    byte_4BB0AD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_ServantSellMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C13F80(0LL, v6);
    ServantOperationManager__SetMode_33715160(servantOperationManager, 2, v7);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4BB0AD6 & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantSellMenu_OnClickTabServant__, method);
    byte_4BB0AD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_ServantSellMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C13F80(0LL, v6);
    ServantOperationManager__SetMode_33715160(servantOperationManager, 2, v7);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_4BB0AD7 & 1) == 0 )
  {
    sub_1C13D24(&Method_ServantSellMenu_OnClickTabServantEquip__, method);
    byte_4BB0AD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_ServantSellMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C13F80(0LL, v6);
    ServantOperationManager__SetMode_33715160(servantOperationManager, 2, v7);
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
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v22; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v23; // x22
  Il2CppObject *v24; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v26; // x21
  ServantStatusDialog_ResultDelegate_o *v27; // x22

  if ( (byte_4BB0AD9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1C13D24(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1C13D24(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v10);
    sub_1C13D24(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1C13D24(&Method_ServantSellMenu_EndShowCommandCode__, v12);
    sub_1C13D24(&Method_ServantSellMenu_EndShowServant__, v13);
    sub_1C13D24(&Method_ServantSellMenu_OnSelectSellServant__, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BB0AD9 = 1;
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
    v17 = Method_ServantSellMenu_OnSelectSellServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnSelectSellServant__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C13D3C(Method_ServantSellMenu_OnSelectSellServant__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C13D08(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0LL);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( commandCodeList->max_length )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_323AB80 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v23 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C13F70(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v23,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_31083456(
                (CommonUI_o *)v22,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v23,
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
        v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v26 = (CommonUI_o *)v24;
        v27 = (ServantStatusDialog_ResultDelegate_o *)sub_1C13F70(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v27,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v26 )
        {
          CommonUI__OpenServantStatusDialog_31080828(v26, 34, servantStatusId, v27, 0LL, 0LL);
          return;
        }
LABEL_21:
        sub_1C13F80(Instance, v20);
      }
    }
    sub_1C13F88(Instance, v20);
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
  int32_t state; // w8
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  System_Action_o *v30; // x20

  if ( (byte_4BB0AD0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, onSelectSellServant);
    sub_1C13D24(&Method_ServantSellMenu_EndOpen__, v11);
    byte_4BB0AD0 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant,
        (int64_t)onSelectSellServant,
        (int64_t)onOpen,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onOpen, (int64_t)onOpen, v13, v14, v15, v16, v17, v18);
      ServantSellMenu__EndOpen(this, v19);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.onSelectSellServant,
      (int64_t)onSelectSellServant,
      (int64_t)onOpen,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.onOpen, (int64_t)onOpen, v20, v21, v22, v23, v24, v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v28),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_1C13F80(gameObject, v27);
    }
    ServantOperationManager__SetMode_33715160((ServantOperationManager_o *)gameObject, 1, v29);
    this->fields.state = 1;
    v30 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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

  if ( (byte_4BB0AD4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17738/*"btn_Polaroid_bg"*/, tabButton);
    this = (ServantSellMenu_o *)sub_1C13D24(&StringLiteral_17740/*"btn_auto_off"*/, v14);
    byte_4BB0AD4 = 1;
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
    sub_1C13F80(this, tabButton);
  }
  v17 = &StringLiteral_17740/*"btn_auto_off"*/;
  if ( selectedKind != tabKind )
    v17 = &StringLiteral_17738/*"btn_Polaroid_bg"*/;
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
    sub_1C13F80(servantOperationManager, v11);
  }
LABEL_11:
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
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t Count; // w21
  LocalizationManager_c *v17; // x0
  float *static_fields; // x8
  float v19; // s10
  float v20; // s11
  float v21; // s8
  float v22; // s9
  struct LocalizationManager_StaticFields *v23; // x8
  UILabel_o *servantTabLabel; // x24
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_String_o *v29; // x25
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x26
  Il2CppObject *v37; // x0
  float v38; // s3
  float v39; // s2
  float v40; // s1
  float v41; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v43; // x25
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x26
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  float v52; // s3
  float v53; // s2
  float v54; // s1
  float v55; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v57; // x23
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x21
  BalanceConfig_c *v66; // x0
  Il2CppObject *v67; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v69; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB0AD3 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C13D24(&int_TypeInfo, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&StringLiteral_3489/*"CHAPTER_F_START_ID"*/, v9);
    sub_1C13D24(&StringLiteral_3490/*"CHAPTER_START"*/, v10);
    sub_1C13D24(&StringLiteral_3491/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, v11);
    byte_4BB0AD3 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BAF545 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    byte_4BAF545 = 1;
  }
  v17 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v17->static_fields;
  v20 = static_fields[20];
  v19 = static_fields[21];
  v22 = static_fields[22];
  v21 = static_fields[23];
  if ( !byte_4BAF546 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, v15);
    v17 = LocalizationManager_TypeInfo;
    byte_4BAF546 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = LocalizationManager_TypeInfo;
  }
  v23 = v17->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  r = v23->selectEffectColor.fields.r;
  g = v23->selectEffectColor.fields.g;
  b = v23->selectEffectColor.fields.b;
  a = v23->selectEffectColor.fields.a;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CHAPTER_START"*/, 0LL);
  v69 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v30, v31, v32);
  if ( !SelfUserGame )
    goto LABEL_39;
  v36 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v33, v34, v35);
  Instance = (DataManager_o *)System_String__Format_62982316(v29, v36, v37, 0LL);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v38 = v21;
  v39 = v22;
  v40 = v19;
  v41 = v20;
  if ( !kind )
  {
    v38 = a;
    v39 = b;
    v40 = g;
    v41 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v41, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CHAPTER{0}_PROLOGUE_WAR_ID"*/, 0LL);
  v69 = servantEquipSum[0];
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v44, v45, v46);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v48, v49, v50);
  Instance = (DataManager_o *)System_String__Format_62982316(v43, v47, v51, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v52 = v21;
  v53 = v22;
  v54 = v19;
  v55 = v20;
  if ( kind == 1 )
  {
    v52 = a;
    v53 = b;
    v54 = g;
    v55 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v55, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3489/*"CHAPTER_F_START_ID"*/, 0LL);
  v69 = Count;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v58, v59, v60);
  if ( !byte_4BAF6EA )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, v61);
    byte_4BAF6EA = 1;
  }
  v66 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v66 = BalanceConfig_TypeInfo;
  }
  svtKeep = v66->static_fields->CommandCodeFrameMax;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v62, v63, v64);
  Instance = (DataManager_o *)System_String__Format_62982316(v57, v65, v67, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind == 2 )
  {
    v21 = a;
    v22 = b;
    v19 = g;
    v20 = r;
  }
  if ( !Instance )
LABEL_39:
    sub_1C13F80(Instance, v14);
  v71.fields.r = v20;
  v71.fields.g = v19;
  v71.fields.b = v22;
  v71.fields.a = v21;
  UILabel__set_effectColor((UILabel_o *)Instance, v71, 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C13F80(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}