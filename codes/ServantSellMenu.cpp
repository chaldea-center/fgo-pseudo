void ServantSellMenu___ctor(ServantSellMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2885D & 1) == 0 )
  {
    sub_1C94098(&BaseMenu_TypeInfo);
    byte_4D2885D = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void ServantSellMenu__CallOnClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onClose; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onClose; // t1

  onClose = this->fields.onClose;
  p_onClose = (GrandQuestFolderBoardItem_o *)&this->fields.onClose;
  v9 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C9403C(p_onClose, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantSellMenu__CallOnOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onOpen; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onOpen; // t1

  onOpen = this->fields.onOpen;
  p_onOpen = (GrandQuestFolderBoardItem_o *)&this->fields.onOpen;
  v9 = onOpen;
  if ( onOpen )
  {
    p_onOpen->klass = 0;
    sub_1C9403C(p_onOpen, 0, v2, v3, v4, v5, v6, v7);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onSelectSellServant; // x0
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *v9; // x22
  struct System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant; // t1

  onSelectSellServant = this->fields.onSelectSellServant;
  p_onSelectSellServant = (GrandQuestFolderBoardItem_o *)&this->fields.onSelectSellServant;
  v9 = onSelectSellServant;
  if ( onSelectSellServant )
  {
    p_onSelectSellServant->klass = 0;
    sub_1C9403C(
      p_onSelectSellServant,
      0,
      (int32_t)servantList,
      (int32_t)commandCodeList,
      (System_String_o *)method,
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4D28850 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_EndClose__);
    byte_4D28850 = 1;
  }
  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C942F0(0, callback);
  ServantOperationManager__SetMode_35659176(servantOperationManager, 1, method);
  this->fields.onClose = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onClose, (int32_t)callback, v6, v7, v8, v9, v10, v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0);
}


void ServantSellMenu__EndClose(ServantSellMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ServantSellMenu__Init(this, method);
  ServantSellMenu__CallOnClose(this, v3);
}


void ServantSellMenu__EndCloseShowServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2885A & 1) == 0 )
  {
    sub_1C94098(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_4D2885A = 1;
  }
  this->fields.state = 2;
  servantOperationManager = this->fields.servantOperationManager;
  v4 = (System_Action_T1__T2__T3__o *)sub_1C942E4(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
  System_Action_Int32Enum__object__object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
    0);
  if ( !servantOperationManager )
    sub_1C942F0(v5, v6);
  servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v4;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&servantOperationManager->fields.onSelect,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantOperationManager__SetMode_35659176(servantOperationManager, 2, v13);
}


void ServantSellMenu__EndCloseShowServantQuestJump(ServantSellMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2885B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2885B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void ServantSellMenu__EndOpen(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x20
  System_Action_T1__T2__T3__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4D2884F & 1) == 0 )
  {
    sub_1C94098(&System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_OnSelectSellServant__);
    byte_4D2884F = 1;
  }
  if ( this->fields.onSelectSellServant )
  {
    this->fields.state = 2;
    servantOperationManager = this->fields.servantOperationManager;
    v4 = (System_Action_T1__T2__T3__o *)sub_1C942E4(System_Action_ServantOperationManager_ActionKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_ServantSellMenu_OnSelectSellServant__,
      0);
    if ( !servantOperationManager )
      sub_1C942F0(v5, v6);
    servantOperationManager->fields.onSelect = (struct System_Action_ServantOperationManager_ActionKind__long____long____o *)v4;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&servantOperationManager->fields.onSelect,
      (int32_t)v4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    ServantOperationManager__SetMode_35659176(servantOperationManager, 2, v13);
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

  if ( (byte_4D28859 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28859 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMenu_EndCloseShowServant__, 0);
  if ( !Instance )
LABEL_8:
    sub_1C942F0(servantOperationManager, isDecide);
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

  if ( (byte_4D28858 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_EndCloseShowServantQuestJump__);
    sub_1C94098(&Method_ServantSellMenu_EndCloseShowServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D28858 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    v11 = Method_ServantSellMenu_EndCloseShowServantQuestJump__;
  }
  v13 = v10;
  System_Action___ctor(v10, (Il2CppObject *)this, v11, 0);
  if ( !Instance )
LABEL_13:
    sub_1C942F0(servantOperationManager, isDecide);
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

  if ( (byte_4D28853 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17646/*"btn_txt_craftessence_off"*/);
    sub_1C94098(&StringLiteral_17686/*"btn_txt_servant_off"*/);
    sub_1C94098(&StringLiteral_17642/*"btn_txt_cc_off"*/);
    sub_1C94098(&StringLiteral_17643/*"btn_txt_cc_on"*/);
    sub_1C94098(&StringLiteral_17687/*"btn_txt_servant_on"*/);
    sub_1C94098(&StringLiteral_17647/*"btn_txt_craftessence_on"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28853 = 1;
  }
  if ( kind == 2 )
  {
    v6 = &StringLiteral_17642/*"btn_txt_cc_off"*/;
    v7 = &StringLiteral_17643/*"btn_txt_cc_on"*/;
  }
  else if ( kind == 1 )
  {
    v6 = &StringLiteral_17646/*"btn_txt_craftessence_off"*/;
    v7 = &StringLiteral_17647/*"btn_txt_craftessence_on"*/;
  }
  else
  {
    if ( kind )
    {
      v6 = &StringLiteral_1/*""*/;
      return (System_String_o *)*v6;
    }
    v6 = &StringLiteral_17686/*"btn_txt_servant_off"*/;
    v7 = &StringLiteral_17687/*"btn_txt_servant_on"*/;
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
    sub_1C942F0(0, method);
  ServantOperationManager__DestroyList(servantOperationManager, method);
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void ServantSellMenu__InitBackListView(ServantSellMenu_o *this, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C942F0(0, method);
  ServantOperationManager__InitBackListView(servantOperationManager, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantSellMenu__Init_35710424(ServantSellMenu_o *this, int32_t tabToInit, const MethodInfo *method)
{
  ServantOperationManager_o *servantOperationManager; // x0

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C942F0(0, tabToInit);
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

  if ( (byte_4D2885C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    byte_4D2885C = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  if ( selectedSvtIds && selectedCommandCodeIds )
  {
    if ( !v7 )
      goto LABEL_13;
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedSvtIds,
      (const MethodInfo_3853074 *)Method_System_Collections_Generic_List_long__AddRange__);
    System_Collections_Generic_List_long___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)selectedCommandCodeIds,
      (const MethodInfo_3853074 *)Method_System_Collections_Generic_List_long__AddRange__);
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
               (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !servantOperationManager )
        break;
      ServantOperationManager__ModifyListItem(servantOperationManager, Item, v13);
      if ( size == ++v11 )
        return;
    }
LABEL_13:
    sub_1C942F0(Item, v9);
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

  if ( (byte_4D28856 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantSellMenu_OnClickTabCommandCode__);
    byte_4D28856 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantSellMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 2, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C942F0(0, v6);
    ServantOperationManager__SetMode_35659176(servantOperationManager, 2, v7);
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

  if ( (byte_4D28854 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantSellMenu_OnClickTabServant__);
    byte_4D28854 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ServantSellMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantSellMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 0, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C942F0(0, v6);
    ServantOperationManager__SetMode_35659176(servantOperationManager, 2, v7);
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

  if ( (byte_4D28855 & 1) == 0 )
  {
    sub_1C94098(&Method_ServantSellMenu_OnClickTabServantEquip__);
    byte_4D28855 = 1;
  }
  if ( this->fields.state == 2 )
  {
    EventTutorialMaster__CheckTutorial(-1, 56, 0, 0, 0, 0, 0, 0);
    v3 = Method_ServantSellMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_ServantSellMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ServantSellMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ServantSellMenu__SetTabKind(this, 1, 0, v5);
    servantOperationManager = this->fields.servantOperationManager;
    if ( !servantOperationManager )
      sub_1C942F0(0, v6);
    ServantOperationManager__SetMode_35659176(servantOperationManager, 2, v7);
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
  Il2CppObject *Entity; // x20
  Il2CppObject *v14; // x21
  ServantStatusDialog_EndIndividualityDelegate_o *v15; // x22
  Il2CppObject *v16; // x0
  int64_t servantStatusId; // x20
  CommonUI_o *v18; // x21
  ServantStatusDialog_ResultDelegate_o *v19; // x22

  if ( (byte_4D28857 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
    sub_1C94098(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_EndShowCommandCode__);
    sub_1C94098(&Method_ServantSellMenu_EndShowServant__);
    sub_1C94098(&Method_ServantSellMenu_OnSelectSellServant__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D28857 = 1;
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
      v9 = (_QWORD *)sub_1C940B0(Method_ServantSellMenu_OnSelectSellServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C9407C(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    if ( this->fields.tabKind == 2 )
    {
      if ( !commandCodeList )
        goto LABEL_21;
      if ( LODWORD(commandCodeList->max_length) )
      {
        this->fields.commandCodeStatusId = commandCodeList->m_Items[0];
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
          if ( Instance )
          {
            Entity = DataMasterBase_object__object__long___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       this->fields.commandCodeStatusId,
                       (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
            v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v15 = (ServantStatusDialog_EndIndividualityDelegate_o *)sub_1C942E4(ServantStatusDialog_EndIndividualityDelegate_TypeInfo);
            ServantStatusDialog_EndIndividualityDelegate___ctor(
              v15,
              (Il2CppObject *)this,
              Method_ServantSellMenu_EndShowCommandCode__,
              0);
            if ( v14 )
            {
              CommonUI__OpenServantStatusDialog_31596292(
                (CommonUI_o *)v14,
                0,
                (UserCommandCodeEntity_o *)Entity,
                v15,
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
        this->fields.servantStatusId = servantList->m_Items[0];
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantStatusId = this->fields.servantStatusId;
        v18 = (CommonUI_o *)v16;
        v19 = (ServantStatusDialog_ResultDelegate_o *)sub_1C942E4(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(v19, (Il2CppObject *)this, Method_ServantSellMenu_EndShowServant__, 0);
        if ( v18 )
        {
          CommonUI__OpenServantStatusDialog_31593588(v18, 34, servantStatusId, v19, 0, 0);
          return;
        }
LABEL_21:
        sub_1C942F0(Instance, v12);
      }
    }
    sub_1C942F8(Instance);
  }
}


void ServantSellMenu__Open(
        ServantSellMenu_o *this,
        System_Action_ServantSellMenu_ResultKind__long____long____o *onSelectSellServant,
        System_Action_o *onOpen,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2
  System_Action_o *v29; // x20

  if ( (byte_4D2884E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ServantSellMenu_EndOpen__);
    byte_4D2884E = 1;
  }
  state = this->fields.state;
  if ( state )
  {
    if ( (state & 0xFFFFFFFE) == 2 )
    {
      this->fields.onSelectSellServant = onSelectSellServant;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.onSelectSellServant,
        (int32_t)onSelectSellServant,
        (int32_t)onOpen,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.onOpen = onOpen;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onOpen, (int32_t)onOpen, v12, v13, v14, v15, v16, v17);
      ServantSellMenu__EndOpen(this, v18);
    }
  }
  else
  {
    this->fields.onSelectSellServant = onSelectSellServant;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.onSelectSellServant,
      (int32_t)onSelectSellServant,
      (int32_t)onOpen,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.onOpen = onOpen;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onOpen, (int32_t)onOpen, v19, v20, v21, v22, v23, v24);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          ServantSellMenu__SetTabKind(this, this->fields.tabKind, 1, v27),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.servantOperationManager) == 0) )
    {
      sub_1C942F0(gameObject, v26);
    }
    ServantOperationManager__SetMode_35659176((ServantOperationManager_o *)gameObject, 1, v28);
    this->fields.state = 1;
    v29 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  _BOOL4 v17; // w20

  if ( (byte_4D28852 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_17530/*"btn_bg_12"*/);
    this = (ServantSellMenu_o *)sub_1C94098(&StringLiteral_17532/*"btn_bg_19"*/);
    byte_4D28852 = 1;
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
    sub_1C942F0(this, tabButton);
  }
  v16 = &StringLiteral_17532/*"btn_bg_19"*/;
  if ( selectedKind != tabKind )
    v16 = &StringLiteral_17530/*"btn_bg_12"*/;
  UISprite__set_spriteName(tabSprite, (System_String_o *)*v16, 0);
  v17 = isInit;
  ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, const MethodInfo *))tabButton->klass->vtable._14_SetState.methodPtr)(
    tabButton,
    0,
    v17,
    tabButton->klass->vtable._14_SetState.method);
  UICommonButton__SetColliderEnable(tabButton, selectedKind != tabKind, v17, 0);
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
    sub_1C942F0(servantOperationManager, v11);
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
  Il2CppObject *v22; // x26
  Il2CppObject *v23; // x0
  float v24; // s3
  float v25; // s2
  float v26; // s1
  float v27; // s0 OVERLAPPED
  UILabel_o *servantEquipTabLabel; // x24
  System_String_o *v29; // x25
  Il2CppObject *v30; // x26
  Il2CppObject *v31; // x0
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0 OVERLAPPED
  UILabel_o *commandCodeTabLabel; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x21
  BalanceConfig_c *v39; // x0
  Il2CppObject *v40; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v42; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D28851 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C94098(&StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C94098(&StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4D28851 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_39;
  UserServantMaster__getCount((UserServantMaster_o *)Instance, &servantEquipSum[1], servantEquipSum, 1, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_39;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Instance, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D26E67 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D26E67 = 1;
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
  if ( !byte_4D26E68 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    v9 = LocalizationManager_TypeInfo;
    byte_4D26E68 = 1;
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
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3346/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v42 = servantEquipSum[1];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  if ( !SelfUserGame )
    goto LABEL_39;
  v22 = (Il2CppObject *)Instance;
  svtKeep = SelfUserGame->fields.svtKeep;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_64459052(v21, v22, v23, 0);
  if ( !servantTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v24 = v13;
  v25 = v14;
  v26 = v11;
  v27 = v12;
  if ( !kind )
  {
    v24 = a;
    v25 = b;
    v26 = g;
    v27 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v27, 0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v42 = servantEquipSum[0];
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  svtKeep = SelfUserGame->fields.svtEquipKeep;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_64459052(v29, v30, v31, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_39;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v32 = v13;
  v33 = v14;
  v34 = v11;
  v35 = v12;
  if ( kind == 1 )
  {
    v32 = a;
    v33 = b;
    v34 = g;
    v35 = r;
  }
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v35, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3345/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v42 = Count;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  if ( !byte_4D269E5 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D269E5 = 1;
  }
  v39 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  svtKeep = v39->static_fields->CommandCodeFrameMax;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Instance = (DataManager_o *)System_String__Format_64459052(v37, v38, v40, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_39;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
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
    sub_1C942F0(Instance, v7);
  v44.fields.r = v12;
  v44.fields.g = v11;
  v44.fields.b = v14;
  v44.fields.a = v13;
  UILabel__set_effectColor((UILabel_o *)Instance, v44, 0);
}


bool ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(ServantSellMenu_o *this, const MethodInfo *method)
{
  struct ServantOperationManager_o *servantOperationManager; // x8

  servantOperationManager = this->fields.servantOperationManager;
  if ( !servantOperationManager )
    sub_1C942F0(this, method);
  return servantOperationManager->fields._IsSellEquipedCmdCodeLastServant_k__BackingField;
}