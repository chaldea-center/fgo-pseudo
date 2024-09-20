void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A57700 & 1) == 0 )
  {
    sub_1B885B0(&BaseMenu_TypeInfo);
    byte_4A57700 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__CallOnClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onClose; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (ServantStatusBattleListViewItem_o *)&this->fields.onClose;
  v5 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_1B88554(p_onClose, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__CallOnOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onOpen; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onOpen; // t1

  onOpen = this->fields.onOpen;
  p_onOpen = (ServantStatusBattleListViewItem_o *)&this->fields.onOpen;
  v5 = onOpen;
  if ( onOpen )
  {
    p_onOpen->klass = 0LL;
    sub_1B88554(p_onOpen, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__CallOnSelectServant(
        ServantSellMenu_o *this,
        int32_t result,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_onSelectSellServant; // x0
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *v6; // x22
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant; // t1

  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant;
  v6 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0LL;
    sub_1B88554(p_onSelectSellServant, 0, (int32_t)servantList, (int32_t)commandCodeList);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, System_Int64_array *, System_Int64_array *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      (unsigned int)result,
      servantList,
      commandCodeList,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A576F3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_EndClose__);
    byte_4A576F3 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B8880C(0LL, callback);
  ServantOperationManager__SetMode_32762724(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void __fastcall ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A576FD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_4A576FD = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v4 = (System_Action_T1__T2__T3__o *)sub_1B887FC(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_Int32Enum__object__object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0LL);
  if ( !servantOperationManager )
    sub_1B8880C(v5, v6);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&servantOperationManager->fields.onSelect, (int32_t)v4, v7, v8);
  ServantOperationManager__SetMode_32762724(servantOperationManager, 2, v9);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A576FE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A576FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x2

  if ( (byte_4A576F2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_4A576F2 = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v4 = (System_Action_T1__T2__T3__o *)sub_1B887FC(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0LL);
    if ( !servantOperationManager )
      sub_1B8880C(v5, v6);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&servantOperationManager->fields.onSelect, (int32_t)v4, v7, v8);
    ServantOperationManager__SetMode_32762724(servantOperationManager, 2, v9);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4A576FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A576FC = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B8880C(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__EndShowServant(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x0
  intptr_t v11; // w2
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v13; // x21

  if ( (byte_4A576FB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_EndCloseShowServantQuestJump__);
    sub_1B885B0(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A576FB = 1;
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
        sub_1B8880C(servantOperationManager, isDecide);
      ServantOperationManager__ModifyItem(
        servantOperationManager,
        this->fields.servantStatusId,
        (const MethodInfo *)isNeedSort);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v13 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, v11, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
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

  if ( (byte_4A576F6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17570/*"btn_txt_craftessence_off"*/);
    sub_1B885B0(&StringLiteral_17610/*"btn_txt_servant_off"*/);
    sub_1B885B0(&StringLiteral_17566/*"btn_txt_cc_off"*/);
    sub_1B885B0(&StringLiteral_17567/*"btn_txt_cc_on"*/);
    sub_1B885B0(&StringLiteral_17611/*"btn_txt_servant_on"*/);
    sub_1B885B0(&StringLiteral_17571/*"btn_txt_craftessence_on"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A576F6 = 1;
  }
  if ( kind == 2 )
  {
    v6 = &StringLiteral_17566/*"btn_txt_cc_off"*/;
    v7 = &StringLiteral_17567/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v6 = &StringLiteral_17570/*"btn_txt_craftessence_off"*/;
    v7 = &StringLiteral_17571/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v6 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v6;
    }
    v6 = &StringLiteral_17610/*"btn_txt_servant_off"*/;
    v7 = &StringLiteral_17611/*"btn_txt_servant_on"*/;
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
    sub_1B8880C(0LL, method);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B8880C(0LL, method);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__Init_32813540(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B8880C(0LL, tabToInit);
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
  System_Collections_Generic_List_long__o *v7; // x21
  int64_t Item; // x0
  __int64 v9; // x1
  int size; // w23
  int32_t v11; // w20
  ServantOperationManager_o *servantOperationManager; // x22
  const MethodInfo *v13; // x2

  if ( (byte_4A576FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A576FF = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v7 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_34E5A74 *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v7 )
  {
    goto LABEL_13;
  }
  size = v7->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantOperationManager = this->fields.servantOperationManager;
      Item = System_Collections_Generic_List_long___get_Item(
               v7,
               v11,
               (const MethodInfo_34E5578 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v13);
      if ( size == ++v11 )
        return;
    }
LABEL_13:
    sub_1B8880C(Item, v9);
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

  if ( (byte_4A576F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSellMenu_OnClickTabCommandCode__);
    byte_4A576F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSellMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B8880C(0LL, v6);
    ServantOperationManager__SetMode_32762724(servantOperationManager, 2, v7);
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

  if ( (byte_4A576F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSellMenu_OnClickTabServant__);
    byte_4A576F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSellMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B8880C(0LL, v6);
    ServantOperationManager__SetMode_32762724(servantOperationManager, 2, v7);
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

  if ( (byte_4A576F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSellMenu_OnClickTabServantEquip__);
    byte_4A576F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSellMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B8880C(0LL, v6);
    ServantOperationManager__SetMode_32762724(servantOperationManager, 2, v7);
  }
}


void __fastcall ServantSellMenu__OnSelectSellServant(
        ServantSellMenu_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v14; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v15; // x22
  Il2CppObject *v16; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v18; // x21
  ServantStatusDialog_ResultDelegate_o *v19; // x22

  if ( (byte_4A576FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_EndShowCommandCode__);
    sub_1B885B0(&Method_ServantSellMenu_EndShowServant__);
    sub_1B885B0(&Method_ServantSellMenu_OnSelectSellServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A576FA = 1;
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
    v9 = Method_ServantSellMenu_OnSelectSellServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnSelectSellServant__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_ServantSellMenu_OnSelectSellServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( commandCodeList->max_length )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v15 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B887FC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v15,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v14 )
            {
              CommonUI__OpenServantStatusDialog_30506892(
                (CommonUI_o *)v14,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v15,
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
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v18 = (CommonUI_o *)v16;
        v19 = (ServantStatusDialog_ResultDelegate_o *)sub_1B887FC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v19,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v18 )
        {
          CommonUI__OpenServantStatusDialog_30504264(v18, 34, servantStatusId, v19, 0LL, 0LL);
          return;
        }
LABEL_21:
        sub_1B8880C(Instance, v12);
      }
    }
    sub_1B88814(Instance, v12);
  }
}


void __fastcall ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  System_Action_o *v17; // x20

  if ( (byte_4A576F1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMenu_EndOpen__);
    byte_4A576F1 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant,
        (int32_t)onSelectSellServant,
        (int32_t)onOpen,
        (int32_t)method);
      this->fields.onOpen = onOpen;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onOpen, (int32_t)onOpen, v8, v9);
      ServantSellMenu__EndOpen(this, v10);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant,
      (int32_t)onSelectSellServant,
      (int32_t)onOpen,
      (int32_t)method);
    this->fields.onOpen = onOpen;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onOpen, (int32_t)onOpen, v11, v12);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v15),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_1B8880C(gameObject, v14);
    }
    ServantOperationManager__SetMode_32762724((ServantOperationManager_o *)gameObject, 1, v16);
    this->fields.state = 1;
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v17, 0LL);
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

  if ( (byte_4A576F5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17476/*"btn_bg_12"*/);
    this = (ServantSellMenu_o *)sub_1B885B0(&StringLiteral_17478/*"btn_bg_19"*/);
    byte_4A576F5 = 1;
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
    sub_1B8880C(this, tabButton);
  }
  v16 = &StringLiteral_17478/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v16 = &StringLiteral_17476/*"btn_bg_12"*/;
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
    sub_1B8880C(servantOperationManager, v11);
  }
LABEL_11:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t Count; // w21
  LocalizationManager_c *v9; // x0
  float *static_fields; // x8
  float v11; // s10
  float v12; // s11
  float v13; // s8
  float v14; // s9
  struct LocalizationManager_StaticFields *v15; // x8
  UILabel_o *servantTabLabel; // x24
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_String_o *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x26
  Il2CppObject *v29; // x0
  float v30; // s3
  float v31; // s2
  float v32; // s1
  float v33; // s0
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v35; // x25
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x26
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  float v44; // s3
  float v45; // s2
  float v46; // s1
  float v47; // s0
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v49; // x23
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x21
  BalanceConfig_c *v57; // x0
  Il2CppObject *v58; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v60; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A576F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3452/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1B885B0(&StringLiteral_3453/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1B885B0(&StringLiteral_3454/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4A576F4 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4A5638C )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5638C = 1;
  }
  v9 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v9->static_fields;
  v12 = static_fields[20];
  v11 = static_fields[21];
  v14 = static_fields[22];
  v13 = static_fields[23];
  if ( !byte_4A5638D )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
    byte_4A5638D = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = LocalizationManager_TypeInfo;
  }
  v15 = v9->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  r = v15->selectEffectColor.fields.r;
  g = v15->selectEffectColor.fields.g;
  b = v15->selectEffectColor.fields.b;
  a = v15->selectEffectColor.fields.a;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v60 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v22, v23, v24);
  if ( !SelfUserGame )
    goto LABEL_39;
  v28 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v25, v26, v27);
  Instance = (DataManager_o *)System_String__Format_61721404(v21, v28, v29, 0LL);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v30 = v13;
  v31 = v14;
  v32 = v11;
  v33 = v12;
  if ( !kind )
  {
    v30 = a;
    v31 = b;
    v32 = g;
    v33 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v33, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3454/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v60 = servantEquipSum[0];
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v36, v37, v38);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v40, v41, v42);
  Instance = (DataManager_o *)System_String__Format_61721404(v35, v39, v43, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v44 = v13;
  v45 = v14;
  v46 = v11;
  v47 = v12;
  if ( kind == 1 )
  {
    v44 = a;
    v45 = b;
    v46 = g;
    v47 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v47, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3452/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v60 = Count;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v50, v51, v52);
  if ( !byte_4A567BB )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A567BB = 1;
  }
  v57 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v57 = BalanceConfig_TypeInfo;
  }
  svtKeep = v57->static_fields->CommandCodeFrameMax;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v53, v54, v55);
  Instance = (DataManager_o *)System_String__Format_61721404(v49, v56, v58, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind == 2 )
  {
    v13 = a;
    v14 = b;
    v11 = g;
    v12 = r;
  }
  if ( !Instance )
LABEL_39:
    sub_1B8880C(Instance, v7);
  v62.fields.r = v12;
  v62.fields.g = v11;
  v62.fields.b = v14;
  v62.fields.a = v13;
  UILabel__set_effectColor((UILabel_o *)Instance, v62, 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B8880C(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}