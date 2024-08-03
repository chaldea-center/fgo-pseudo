void __fastcall ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F8A33 & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F8A33 = 1;
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
    sub_1B6406C(p_onClose, 0, v2, v3);
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
    sub_1B6406C(p_onOpen, 0, v2, v3);
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
    sub_1B6406C(p_onSelectSellServant, 0, (int32_t)servantList, (int32_t)commandCodeList);
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
  __int64 v5; // x1
  ServantOperationManager_o *servantOperationManager; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x20

  if ( (byte_49F8A26 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ServantSellMenu_EndClose__, v5);
    byte_49F8A26 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B64324(0LL);
  ServantOperationManager__SetMode_32497636(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)callback, v7, v8);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
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
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49F8A30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method);
    sub_1B640C8(&Method_ServantSellMenu_OnSelectSellServant__, v4);
    byte_49F8A30 = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v6 = (System_Action_T1__T2__T3__o *)sub_1B64314(
                                        System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                        method,
                                        v2);
  System_Action_Int32Enum__object__object____ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0LL);
  if ( !servantOperationManager )
    sub_1B64324(v7);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantOperationManager->fields.onSelect, (int32_t)v6, v8, v9);
  ServantOperationManager__SetMode_32497636(servantOperationManager, 2, v10);
}


void __fastcall ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F8A31 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49F8A31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v6; // x21
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_49F8A25 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo, method);
    sub_1B640C8(&Method_ServantSellMenu_OnSelectSellServant__, v4);
    byte_49F8A25 = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v6 = (System_Action_T1__T2__T3__o *)sub_1B64314(
                                          System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo,
                                          method,
                                          v2);
    System_Action_Int32Enum__object__object____ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0LL);
    if ( !servantOperationManager )
      sub_1B64324(v7);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&servantOperationManager->fields.onSelect, (int32_t)v6, v8, v9);
    ServantOperationManager__SetMode_32497636(servantOperationManager, 2, v10);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_49F8A2F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantSellMenu_EndCloseShowServant__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F8A2F = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_1B64324(servantOperationManager);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x0
  intptr_t v16; // w2
  ServantOperationManager_o *servantOperationManager; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x21

  if ( (byte_49F8A2E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantSellMenu_EndCloseShowServantQuestJump__, v9);
    sub_1B640C8(&Method_ServantSellMenu_EndCloseShowServant__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    byte_49F8A2E = 1;
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
        sub_1B64324(servantOperationManager);
      ServantOperationManager__ModifyItem(
        servantOperationManager,
        this->fields.servantStatusId,
        (const MethodInfo *)isNeedSort);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    v16 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
    v16 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v20 = v15;
  System_Action___ctor(v15, (Il2CppObject *)this, v16, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v20, 0LL);
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

  if ( (byte_49F8A29 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17500/*"btn_txt_craftessence_off"*/, *(_QWORD *)&kind);
    sub_1B640C8(&StringLiteral_17540/*"btn_txt_servant_off"*/, v6);
    sub_1B640C8(&StringLiteral_17496/*"btn_txt_cc_off"*/, v7);
    sub_1B640C8(&StringLiteral_17497/*"btn_txt_cc_on"*/, v8);
    sub_1B640C8(&StringLiteral_17541/*"btn_txt_servant_on"*/, v9);
    sub_1B640C8(&StringLiteral_17501/*"btn_txt_craftessence_on"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    byte_49F8A29 = 1;
  }
  if ( kind == 2 )
  {
    v12 = &StringLiteral_17496/*"btn_txt_cc_off"*/;
    v13 = &StringLiteral_17497/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v12 = &StringLiteral_17500/*"btn_txt_craftessence_off"*/;
    v13 = &StringLiteral_17501/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v12 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v12;
    }
    v12 = &StringLiteral_17540/*"btn_txt_servant_off"*/;
    v13 = &StringLiteral_17541/*"btn_txt_servant_on"*/;
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
    sub_1B64324(0LL);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B64324(0LL);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSellMenu__Init_32548452(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B64324(0LL);
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
  int size; // w23
  int32_t v14; // w20
  ServantOperationManager_o *servantOperationManager; // x22
  const MethodInfo *v16; // x2

  if ( (byte_49F8A32 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__AddRange__, selectedSvtIds);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v10);
    byte_49F8A32 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     selectedSvtIds,
                                                     selectedCommandCodeIds);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v11 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_3495280 *)Method_System_Collections_Generic_List_long__AddRange__);
  }
  else if ( !v11 )
  {
    goto LABEL_13;
  }
  size = v11->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      servantOperationManager = this->fields.servantOperationManager;
      Item = System_Collections_Generic_List_long___get_Item(
               v11,
               v14,
               (const MethodInfo_3494D84 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v16);
      if ( size == ++v14 )
        return;
    }
LABEL_13:
    sub_1B64324(Item);
  }
}


void __fastcall ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_49F8A2C & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantSellMenu_OnClickTabCommandCode__, method);
    byte_49F8A2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantSellMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B64324(0LL);
    ServantOperationManager__SetMode_32497636(servantOperationManager, 2, v6);
  }
}


void __fastcall ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_49F8A2A & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantSellMenu_OnClickTabServant__, method);
    byte_49F8A2A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantSellMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B64324(0LL);
    ServantOperationManager__SetMode_32497636(servantOperationManager, 2, v6);
  }
}


void __fastcall ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_49F8A2B & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantSellMenu_OnClickTabServantEquip__, method);
    byte_49F8A2B = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0LL, 0, 0, 0, 0, 0LL);
    v3 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ServantSellMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1B64324(0LL);
    ServantOperationManager__SetMode_32497636(servantOperationManager, 2, v6);
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
  __int64 v23; // x1
  __int64 v24; // x2
  ServantStatusDialog_EndIndividualityDelegate_o *v25; // x22
  Il2CppObject *v26; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  ServantStatusDialog_ResultDelegate_o *v31; // x22

  if ( (byte_49F8A2D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v9);
    sub_1B640C8(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo, v10);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v11);
    sub_1B640C8(&Method_ServantSellMenu_EndShowCommandCode__, v12);
    sub_1B640C8(&Method_ServantSellMenu_EndShowServant__, v13);
    sub_1B640C8(&Method_ServantSellMenu_OnSelectSellServant__, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_49F8A2D = 1;
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
      v17 = (_QWORD *)sub_1B640E0(Method_ServantSellMenu_OnSelectSellServant__);
    v18 = (System_Reflection_MethodBase_o *)sub_1B640AC(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( commandCodeList->max_length )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_30D4050 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v25 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1B64314(
                                                                      ServantStatusDialog_EndIndividualityDelegate_TypeInfo,
                                                                      v23,
                                                                      v24);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v25,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_30357928(
                (CommonUI_o *)v22,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v25,
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
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v28 = (CommonUI_o *)v26;
        v31 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v29, v30);
        ServantStatusDialog_ResultDelegate___ctor(
          v31,
          (Il2CppObject *)this,
          Method_ServantSellMenu_EndShowServant__,
          0LL);
        if ( v28 )
        {
          CommonUI__OpenServantStatusDialog_30355300(v28, 34, servantStatusId, v31, 0LL, 0LL);
          return;
        }
LABEL_21:
        sub_1B64324(Instance);
      }
    }
    sub_1B6432C(Instance, v20);
  }
}


void __fastcall ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t state; // w8
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_49F8A24 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, onSelectSellServant);
    sub_1B640C8(&Method_ServantSellMenu_EndOpen__, v7);
    byte_49F8A24 = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant,
        (int32_t)onSelectSellServant,
        (int32_t)onOpen,
        (int32_t)method);
      this->fields.onOpen = onOpen;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onOpen, (int32_t)onOpen, v9, v10);
      ServantSellMenu__EndOpen(this, v11);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.onSelectSellServant,
      (int32_t)onSelectSellServant,
      (int32_t)onOpen,
      (int32_t)method);
    this->fields.onOpen = onOpen;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onOpen, (int32_t)onOpen, v12, v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v15),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0LL) )
    {
      sub_1B64324(gameObject);
    }
    ServantOperationManager__SetMode_32497636((ServantOperationManager_o *)gameObject, 1, v16);
    this->fields.state = 1;
    v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v19, 0LL);
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

  if ( (byte_49F8A28 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, tabButton);
    this = (ServantSellMenu_o *)sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v14);
    byte_49F8A28 = 1;
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
    sub_1B64324(this);
  }
  v17 = &StringLiteral_17408/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v17 = &StringLiteral_17406/*"btn_bg_12"*/;
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
  const MethodInfo *v11; // x2
  struct ServantOperationManager_o *v12; // x8

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
    ServantOperationManager__CreateList(servantOperationManager, kind, v11);
  }
  else if ( this->fields.tabKind != kind )
  {
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      goto LABEL_12;
    ServantOperationManager__ChangeList(servantOperationManager, kind, v11);
  }
  if ( (unsigned int)kind < 3 )
  {
    v12 = this->fields.servantOperationManager;
    if ( v12 )
    {
      servantOperationManager = (ServantOperationManager_o *)v12->fields.filterButton;
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
    sub_1B64324(servantOperationManager);
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
  int32_t Count; // w21
  LocalizationManager_c *v16; // x0
  float *static_fields; // x8
  float v18; // s10
  float v19; // s11
  float v20; // s8
  float v21; // s9
  struct LocalizationManager_StaticFields *v22; // x8
  UILabel_o *servantTabLabel; // x24
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
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
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v50; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F8A27 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_1B640C8(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_1B640C8(&StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_49F8A27 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    byte_49F779B = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v16->static_fields;
  v19 = static_fields[20];
  v18 = static_fields[21];
  v21 = static_fields[22];
  v20 = static_fields[23];
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    v16 = LocalizationManager_TypeInfo;
    byte_49F779C = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = LocalizationManager_TypeInfo;
  }
  v22 = v16->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  r = v22->selectEffectColor.fields.r;
  g = v22->selectEffectColor.fields.g;
  b = v22->selectEffectColor.fields.b;
  a = v22->selectEffectColor.fields.a;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v50 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !SelfUserGame )
    goto LABEL_39;
  v29 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_61389768(v28, v29, v30, 0LL);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v31 = v20;
  v32 = v21;
  v33 = v18;
  v34 = v19;
  if ( !kind )
  {
    v31 = a;
    v32 = b;
    v33 = g;
    v34 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v34, 0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v50 = servantEquipSum[0];
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_61389768(v36, v37, v38, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v39 = v20;
  v40 = v21;
  v41 = v18;
  v42 = v19;
  if ( kind == 1 )
  {
    v39 = a;
    v40 = b;
    v41 = g;
    v42 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v42, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v50 = Count;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v45);
    byte_49F7B7B = 1;
  }
  v47 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v47 = BalanceConfig_TypeInfo;
  }
  svtKeep = v47->static_fields->CommandCodeFrameMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_61389768(v44, v46, v48, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind == 2 )
  {
    v20 = a;
    v21 = b;
    v18 = g;
    v19 = r;
  }
  if ( !Instance )
LABEL_39:
    sub_1B64324(Instance);
  v52.fields.r = v19;
  v52.fields.g = v18;
  v52.fields.b = v21;
  v52.fields.a = v20;
  UILabel__set_effectColor((UILabel_o *)Instance, v52, 0LL);
}


bool __fastcall ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1B64324(this);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}