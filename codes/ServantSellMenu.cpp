void ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C77D & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596C77D = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ServantSellMenu__CallOnClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_2213A04(p_onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantSellMenu__CallOnOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onOpen; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onOpen; // t1

  onOpen = this->fields.onOpen;
  p_onOpen = (MissionNaviTransitionBoardItem_o *)&this->fields.onOpen;
  v9 = onOpen;
  if ( onOpen )
  {
    p_onOpen->klass = 0;
    sub_2213A04(p_onOpen, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantSellMenu__CallOnSelectServant(
        ServantSellMenu_o *this,
        int32_t result,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onSelectSellServant; // x0
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *v9; // x22
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant; // t1

  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSellServant;
  v9 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0;
    sub_2213A04(
      p_onSelectSellServant,
      0,
      (System_String_o *)servantList,
      (System_String_o *)commandCodeList,
      (int32_t)method,
      v5,
      v6,
      v7);
    ((void (__fastcall *)(intptr_t, _QWORD, System_Int64_array *, System_Int64_array *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      servantList,
      commandCodeList,
      v9->fields.method);
  }
}


void ServantSellMenu__Close(ServantSellMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_596C770 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_EndClose__);
    byte_596C770 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_2213CDC(0, callback);
  ServantOperationManager__SetMode_41829800(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, (int32_t)callback, v6, v7, v8, v9, v10, v11);
  v12 = System_Action_TypeInfo;
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_2213CCC(v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0);
}


void ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  System_Action_ServantOperationManager_ActionKind__long____long____c *v3; // x0
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596C77A & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_596C77A = 1;
  }
  v3 = System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo;
  servantOperationManager = this->fields.servantOperationManager;
  this->fields.state = 2;
  v5 = (System_Action_T1__T2__T3__o *)sub_2213CCC(v3);
  System_Action_Int32Enum__object__object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0);
  if ( !servantOperationManager )
    sub_2213CDC(v6, v7);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&servantOperationManager->fields.onSelect,
    (int32_t)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  ServantOperationManager__SetMode_41829800(servantOperationManager, 2, v14);
}


void ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C77B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C77B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_596C76F & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_596C76F = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    servantOperationManager = this->fields.servantOperationManager;
    this->fields.state = 2;
    v4 = (System_Action_T1__T2__T3__o *)sub_2213CCC(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0);
    if ( !servantOperationManager )
      sub_2213CDC(v5, v6);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v4;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&servantOperationManager->fields.onSelect,
      (int32_t)v4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    ServantOperationManager__SetMode_41829800(servantOperationManager, 2, v13);
  }
  else
  {
    this->fields.state = 3;
  }
  ServantSellMenu__CallOnOpen(this, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__EndShowCommandCode(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_596C779 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C779 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_2213CDC(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__EndShowServant(
        ServantSellMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x0
  intptr_t v11; // x2
  ServantOperationManager_o *servantOperationManager; // x0
  System_Action_o *v13; // x21

  if ( (byte_596C778 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_EndCloseShowServantQuestJump__);
    sub_2213A60(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C778 = 1;
  }
  if ( questId < 1 )
  {
    if ( isDecide )
    {
      servantOperationManager = this->fields.servantOperationManager;
      if ( !servantOperationManager )
        goto LABEL_13;
      ServantOperationManager__ModifyItem(
        servantOperationManager,
        this->fields.servantStatusId,
        (const MethodInfo *)isNeedSort);
      if ( isNeedSort )
      {
        servantOperationManager = this->fields.servantOperationManager;
        if ( !servantOperationManager )
          goto LABEL_13;
        ServantOperationManager__SortItem(servantOperationManager, (const MethodInfo *)isDecide);
      }
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v13 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, v11, 0);
  if ( !Instance )
LABEL_13:
    sub_2213CDC(servantOperationManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0);
}


int32_t ServantSellMenu__GetTabKind(ServantSellMenu_o *this, const MethodInfo *method)
{
  return this->fields.tabKind;
}


System_String_o *ServantSellMenu__GetTabTitleSpriteName(
        ServantSellMenu_o *this,
        int32_t kind,
        bool isSelected,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  __int64 *v7; // x9

  if ( (byte_596C773 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18330/*"btn_txt_craftessence_off"*/);
    sub_2213A60(&StringLiteral_18371/*"btn_txt_servant_off"*/);
    sub_2213A60(&StringLiteral_18326/*"btn_txt_cc_off"*/);
    sub_2213A60(&StringLiteral_18327/*"btn_txt_cc_on"*/);
    sub_2213A60(&StringLiteral_18372/*"btn_txt_servant_on"*/);
    sub_2213A60(&StringLiteral_18331/*"btn_txt_craftessence_on"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C773 = 1;
  }
  if ( kind == 2 )
  {
    v6 = &StringLiteral_18326/*"btn_txt_cc_off"*/;
    v7 = &StringLiteral_18327/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v6 = &StringLiteral_18330/*"btn_txt_craftessence_off"*/;
    v7 = &StringLiteral_18331/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v6 = (__int64 *)&StringLiteral_1/*""*/;
      return (System_String_o *)*v6;
    }
    v6 = &StringLiteral_18371/*"btn_txt_servant_off"*/;
    v7 = &StringLiteral_18372/*"btn_txt_servant_on"*/;
  }
  if ( isSelected )
    v6 = v7;
  return (System_String_o *)*v6;
}


void ServantSellMenu__Init(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_2213CDC(0, method);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_2213CDC(0, method);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__Init_41881708(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_2213CDC(0, *(_QWORD *)&tabToInit);
  ServantOperationManager__DestroyList(servantOperationManager, *(const MethodInfo **)&tabToInit);
  this->fields.state = 0;
  this->fields.tabKind = tabToInit;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ServantSellMenu__ModifyListItem(
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

  if ( (byte_596C77C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    byte_596C77C = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v7 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_446C4A8 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_446C4A8 *)Method_System_Collections_Generic_List_long__AddRange__);
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
               (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v13);
      if ( size == ++v11 )
        return;
    }
LABEL_13:
    sub_2213CDC(Item, v9);
  }
}


void ServantSellMenu__OnClickTabCommandCode(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_596C776 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSellMenu_OnClickTabCommandCode__);
    byte_596C776 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_2213CDC(0, v6);
    ServantOperationManager__SetMode_41829800(servantOperationManager, 2, v7);
  }
}


void ServantSellMenu__OnClickTabServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_596C774 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSellMenu_OnClickTabServant__);
    byte_596C774 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_2213CDC(0, v6);
    ServantOperationManager__SetMode_41829800(servantOperationManager, 2, v7);
  }
}


void ServantSellMenu__OnClickTabServantEquip(ServantSellMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantOperationManager_o *servantOperationManager; // x0

  if ( (byte_596C775 & 1) == 0 )
  {
    sub_2213A60(&Method_ServantSellMenu_OnClickTabServantEquip__);
    byte_596C775 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0, 0, 0, 0, 0, 0);
    v3 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_2213CDC(0, v6);
    ServantOperationManager__SetMode_41829800(servantOperationManager, 2, v7);
  }
}


void ServantSellMenu__OnSelectSellServant(
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
  const MethodInfo_47A29F8 *v13; // x0
  Il2CppObject *Entity; // x20
  Il2CppObject *v15; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v16; // x22
  const MethodInfo_47A29F8 *v17; // x0
  Il2CppObject *v18; // x21
  int64_t servantStatusId; // x20
  ServantStatusDialog_ResultDelegate_o *v20; // x22

  if ( (byte_596C777 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_EndShowCommandCode__);
    sub_2213A60(&Method_ServantSellMenu_EndShowServant__);
    sub_2213A60(&Method_ServantSellMenu_OnSelectSellServant__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C777 = 1;
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
      v9 = (_QWORD *)sub_2213A78(Method_ServantSellMenu_OnSelectSellServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( LODWORD(commandCodeList->max_length) )
      {
        v13 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance(v13);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v16 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_2213CCC(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v16,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0);
            if ( v15 )
            {
              CommonUI__OpenServantStatusDialog_37386064(
                (CommonUI_o *)v15,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v16,
                0,
                0);
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
      if ( LODWORD(servantList->max_length) )
      {
        v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        this->fields.servantStatusId = servantList->m_Items[0];
        v18 = SingletonMonoBehaviour_object___get_Instance(v17);
        servantStatusId = this->fields.servantStatusId;
        v20 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(v20, (Il2CppObject *)this, Method_ServantSellMenu_EndShowServant__, 0);
        if ( v18 )
        {
          CommonUI__OpenServantStatusDialog_37383356((CommonUI_o *)v18, 34, servantStatusId, v20, 0, 0);
          return;
        }
LABEL_21:
        sub_2213CDC(Instance, v12);
      }
    }
    sub_2213CE4(Instance);
  }
}


void ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  System_Action_o *v29; // x20

  if ( (byte_596C76E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMenu_EndOpen__);
    byte_596C76E = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSellServant,
        (int32_t)onSelectSellServant,
        (System_String_o *)onOpen,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.onOpen,
        (int32_t)onOpen,
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSellServant,
      (int32_t)onSelectSellServant,
      (System_String_o *)onOpen,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onOpen, (int32_t)onOpen, v19, v20, v21, v22, v23, v24);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v27),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0) )
    {
      sub_2213CDC(gameObject, v26);
    }
    ServantOperationManager__SetMode_41829800((ServantOperationManager_o *)gameObject, 1, v28);
    this->fields.state = 1;
    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ServantSellMenu_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v29, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__SetTabButton(
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

  if ( (byte_596C772 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18206/*"btn_bg_12"*/);
    this = (ServantSellMenu_o *)sub_2213A60(&StringLiteral_18208/*"btn_bg_19"*/);
    byte_596C772 = 1;
  }
  if ( !tabButton
    || (((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *, UISprite_o *, _QWORD, _QWORD, bool, const MethodInfo *))tabButton->klass->vtable._5_set_isEnabled.methodPtr)(
          tabButton,
          1,
          tabButton->klass->vtable._5_set_isEnabled.method,
          tabSprite,
          *(_QWORD *)&selectedKind,
          *(_QWORD *)&tabKind,
          isInit,
          method),
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)tabButton, selectedKind != tabKind, 0),
        this = (ServantSellMenu_o *)ServantSellMenu__GetTabTitleSpriteName(v14, tabKind, selectedKind == tabKind, v15),
        !titleSprite)
    || (UISprite__set_spriteName(titleSprite, (System_String_o *)this, 0), !tabSprite) )
  {
    sub_2213CDC(this, tabButton);
  }
  v16 = &StringLiteral_18208/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v16 = &StringLiteral_18206/*"btn_bg_12"*/;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v16, 0);
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, bool, const MethodInfo *))tabButton->klass->vtable._14_SetState.methodPtr)(
    tabButton,
    0,
    isInit,
    tabButton->klass->vtable._14_SetState.method);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, isInit, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__SetTabKind(ServantSellMenu_o *this, int32_t kind, bool isInit, const MethodInfo *method)
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
  if ( (unsigned int)kind <= 2 )
  {
    v13 = this->fields.servantOperationManager;
    if ( v13 )
    {
      servantOperationManager = (ServantOperationManager_o *)v13->fields.filterButton;
      if ( servantOperationManager )
      {
        ((void (__fastcall *)(ServantOperationManager_o *, _QWORD, __int64, Il2CppClass **))servantOperationManager->klass[1]._1.nestedTypes)(
          servantOperationManager,
          0,
          1,
          servantOperationManager->klass[1]._1.implementedInterfaces);
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_2213CDC(servantOperationManager, v11);
  }
LABEL_11:
  this->fields.tabKind = kind;
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__SetTabLabel(ServantSellMenu_o *this, int32_t kind, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x23
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Count; // w21
  LocalizationManager_c *v11; // x0
  float *static_fields; // x8
  float v13; // s10
  float v14; // s11
  float v15; // s8
  float v16; // s9
  struct LocalizationManager_StaticFields *v17; // x8
  UILabel_o *servantTabLabel; // x24
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  System_String_o *v23; // x25
  Il2CppObject *v24; // x26
  Il2CppObject *v25; // x0
  float v26; // s3
  float v27; // s2
  float v28; // s1
  float v29; // s0 OVERLAPPED
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v33; // x25
  Il2CppObject *v34; // x26
  Il2CppObject *v35; // x0
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0 OVERLAPPED
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v43; // x23
  __int64 v44; // x1
  __int64 v45; // x2
  Il2CppObject *v46; // x21
  BalanceConfig_c *v47; // x0
  Il2CppObject *v48; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v50; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C771 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3480/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_2213A60(&StringLiteral_3481/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_2213A60(&StringLiteral_3482/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_596C771 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    v11 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v14 = static_fields[20];
  v13 = static_fields[21];
  v16 = static_fields[22];
  v15 = static_fields[23];
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
    byte_596ABD6 = 1;
  }
  if ( !*(&v11->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v11, v8, v9);
    v11 = LocalizationManager_TypeInfo;
  }
  v17 = v11->static_fields;
  servantTabLabel = this->fields.servantTabLabel;
  r = v17->selectEffectColor.fields.r;
  g = v17->selectEffectColor.fields.g;
  b = v17->selectEffectColor.fields.b;
  a = v17->selectEffectColor.fields.a;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3481/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v50 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_5984348, &v50);
  if ( !SelfUserGame )
    goto LABEL_39;
  v24 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_75697880(v23, v24, v25, 0);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  v26 = v15;
  v27 = v16;
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v28 = v13;
  v29 = v14;
  if ( !kind )
  {
    v26 = a;
    v27 = b;
    v28 = g;
    v29 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v29, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3482/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v50 = servantEquipSum[0];
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v50);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_75697880(v33, v34, v35, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  v36 = v15;
  v37 = v16;
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v38 = v13;
  v39 = v14;
  if ( kind == 1 )
  {
    v36 = a;
    v37 = b;
    v38 = g;
    v39 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v39, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v50 = Count;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v50);
  if ( !byte_596A5C7 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596A5C7 = 1;
  }
  v47 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44, v45);
    v47 = BalanceConfig_TypeInfo;
  }
  svtKeep = v47->static_fields->CommandCodeFrameMax;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_75697880(v43, v46, v48, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind == 2 )
  {
    v15 = a;
    v16 = b;
    v13 = g;
    v14 = r;
  }
  if ( !Instance )
LABEL_39:
    sub_2213CDC(Instance, v7);
  v52.fields.r = v14;
  v52.fields.g = v13;
  v52.fields.b = v16;
  v52.fields.a = v15;
  UILabel__set_effectColor((UILabel_o *)Instance, v52, 0);
}


bool ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_2213CDC(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}