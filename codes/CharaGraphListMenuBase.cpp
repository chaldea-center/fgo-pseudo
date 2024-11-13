void __fastcall CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphDefine_CharaGraphRootInfo_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1

  if ( (byte_4B1556B & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    sub_1BCA7E0(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo, v5, v6);
    byte_4B1556B = 1;
  }
  v7 = (CharaGraphDefine_CharaGraphRootInfo_o *)sub_1BCAA2C(
                                                  CharaGraphDefine_CharaGraphRootInfo_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  CharaGraphDefine_CharaGraphRootInfo___ctor(v7, 0LL);
  this->fields._RootInfo_k__BackingField = v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._RootInfo_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v14);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase__AssertionForSerializeField(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListMenuBase__Awake(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgTxtObject; // x19
  _BOOL8 IsActiveBgTxt; // x0
  __int64 v5; // x1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass->vtable._5_Init.methodPtr);
  bgTxtObject = this->fields.bgTxtObject;
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !bgTxtObject )
    sub_1BCAA3C(IsActiveBgTxt, v5);
  UnityEngine_GameObject__SetActive(bgTxtObject, IsActiveBgTxt, 0LL);
}


void __fastcall CharaGraphListMenuBase__CastItem(
        CharaGraphListViewItemBase_o *item,
        CharaGraphServantListViewItem_o **svtItem,
        CharaGraphCommandCodeListViewItem_o **commandCodeItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 methodPtr_low; // x11
  CharaGraphListViewItemBase_o *v14; // x9
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  CharaGraphListViewItemBase_o *v21; // x1
  __int64 v22; // x10
  CharaGraphListViewItemBase_o *v23; // x1
  __int64 v24; // x10
  CharaGraphListViewItemBase_o *v25; // x8
  __int64 v26; // x10

  if ( (byte_4B1556A & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphCommandCodeListViewItem_TypeInfo, svtItem, commandCodeItem);
    sub_1BCA7E0(&CharaGraphServantListViewItem_TypeInfo, v11, v12);
    byte_4B1556A = 1;
  }
  if ( item )
  {
    methodPtr_low = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantListViewItem_TypeInfo )
        v14 = item;
      else
        v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    *svtItem = (CharaGraphServantListViewItem_o *)v14;
    v22 = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v22 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v22 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v23 = item;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    sub_1BCA784(
      (PartyOrganizationUtility_o *)svtItem,
      (int64_t)v23,
      (int64_t)commandCodeItem,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v24 = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v24 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v24 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v25 = item;
      else
        v25 = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v25;
    v26 = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v26 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v26 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v21 = item;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
  }
  else
  {
    *svtItem = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)svtItem, 0LL, (int64_t)commandCodeItem, (int32_t)method, v4, v5, v6, v7);
    v21 = 0LL;
    *commandCodeItem = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)commandCodeItem, (int64_t)v21, v15, v16, v17, v18, v19, v20);
}


void __fastcall CharaGraphListMenuBase__Close(
        CharaGraphListMenuBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x20

  if ( (byte_4B1554D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_EndClose__, v10, v11);
    byte_4B1554D = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackOnClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 4;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(v12, v13);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v14);
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *__fastcall CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CharaGraphListViewPatternServant_c **v13; // x8
  __int64 v14; // x21
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  int64_t *p_ServantCollectionSortManageUnit_k__BackingField; // x8
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct CharaGraphSortOwnerBase_o *v31; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B15550 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewPatternCommandCode_TypeInfo, *(_QWORD *)&kind, setupInfo);
    sub_1BCA7E0(&CharaGraphListViewPatternServantCollection_TypeInfo, v7, v8);
    sub_1BCA7E0(&CharaGraphListViewPatternServantEquip_TypeInfo, v9, v10);
    sub_1BCA7E0(&CharaGraphListViewPatternServant_TypeInfo, v11, v12);
    byte_4B15550 = 1;
  }
  if ( (unsigned int)(kind - 1) > 2 )
    v13 = &CharaGraphListViewPatternServant_TypeInfo;
  else
    v13 = (CharaGraphListViewPatternServant_c **)off_455AF28[kind - 1];
  v14 = sub_1BCAA2C(*v13, *(_QWORD *)&kind, setupInfo, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (kind == 3
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._ServantCollectionSortManageUnit_k__BackingField)
      : kind == 2
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._CommandCodeSortManageUnit_k__BackingField)
      : kind != 1
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields)
      : (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._ServantEquipSortManageUnit_k__BackingField),
        v24 = *p_ServantCollectionSortManageUnit_k__BackingField,
        SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)*p_ServantCollectionSortManageUnit_k__BackingField,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField,
          v24,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !v14) )
  {
    sub_1BCAA3C(SortOwner_k__BackingField, v15);
  }
  v31 = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v14 + 16) = v31;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v31, v25, v26, v27, v28, v29, v30);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v14 + 24) = RootInfo_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)RootInfo_k__BackingField, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v14 + 32) = setupInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)setupInfo, v39, v40, v41, v42, v43, v44);
  return (CharaGraphListViewPatternBase_o *)v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CharaGraphListMenuBase__DisplayPushButton(
        CharaGraphListMenuBase_o *this,
        bool value,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x23
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  CharaGraphManageButtonGroup_o *v13; // x0

  v7 = value;
  if ( (byte_4B15566 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, value, *(_QWORD *)&iModeKind);
    byte_4B15566 = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
    return iModeKind;
  v13 = this->fields.charaGraphManageButtonGroup;
  if ( !v13 )
    sub_1BCAA3C(0LL, v10);
  CharaGraphManageButtonGroup__SetPushButtonActive(v13, v7, isInit, v11);
  if ( iModeKind == 4 && !v7 )
    return 0;
  else
    return iModeKind;
}


void __fastcall CharaGraphListMenuBase__DoIfStateIsInput(
        CharaGraphListMenuBase_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
    ActionExtensions__Call(f, 0LL);
}


void __fastcall CharaGraphListMenuBase__EndClose(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_callbackOnClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackOnClose; // t1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_Init.method)(
    this,
    0LL,
    this->klass->vtable._6_SetupButtonCallback.methodPtr);
  callbackOnClose = this->fields.callbackOnClose;
  p_callbackOnClose = (PartyOrganizationUtility_o *)&this->fields.callbackOnClose;
  v10 = callbackOnClose;
  if ( callbackOnClose )
  {
    p_callbackOnClose->klass = 0LL;
    sub_1BCA784(p_callbackOnClose, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenuBase__EndOpen(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 2;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, method);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__Exit(CharaGraphListMenuBase_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v22; // x20
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2

  if ( (byte_4B1554E & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__, v6, v7);
    sub_1BCA7E0(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, v8, v9);
    byte_4B1554E = 1;
  }
  v10 = sub_1BCAA2C(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&result, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = result;
  v22 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                          v19,
                                                          v20,
                                                          v21);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v22,
    (Il2CppObject *)v10,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    v23);
  CharaGraphListMenuBase__StatusRequest(this, v22, v24);
}


System_String_o *__fastcall CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15553 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11764/*"SERVANT_LIST_EXPLANATION_STATUS"*/, method, v2);
    byte_4B15553 = 1;
  }
  return (System_String_o *)StringLiteral_11764/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__Init(
        CharaGraphListMenuBase_o *this,
        int32_t defaultTabKind,
        const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (CharaGraphListViewManager__DestroyList(listViewManager, *(const MethodInfo **)&defaultTabKind),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        this->fields.state = 0,
        this->fields.tabKind = defaultTabKind,
        !RootInfo_k__BackingField) )
  {
    sub_1BCAA3C(listViewManager, *(_QWORD *)&defaultTabKind);
  }
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__ModifyList(
        CharaGraphListMenuBase_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  struct CharaGraphListViewManager_o *v6; // x19
  const MethodInfo *v7; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (CharaGraphListViewManager__ModifyList(listViewManager, 0, isNeedSort, v3),
        (v6 = this->fields.listViewManager) == 0LL) )
  {
    sub_1BCAA3C(listViewManager, isNeedSort);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0LL);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void __fastcall CharaGraphListMenuBase__OnClickBonusFilterKind(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *listViewManager; // x21
  System_Action_o *v8; // x20

  if ( (byte_4B1555D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, v5, v6);
    byte_4B1555D = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v8, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickCancel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 0, v2);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickDecide(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 1, v2);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickFilterKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B1555A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__, v5, v6);
    byte_4B1555A = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v8 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v2, v3);
    System_Action_bool____ctor(
      v8,
      (Il2CppObject *)this,
      Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__,
      0LL);
    if ( !listViewManager )
      sub_1BCAA3C(v9, v10);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v8, v11);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  CharaGraphManageButtonGroup_o *v12; // x19
  const MethodInfo *v13; // x2

  if ( (byte_4B15558 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickScaleChange__, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B15558 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v6 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v8);
      charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
        return;
      listViewManager = this->fields.listViewManager;
      if ( listViewManager )
      {
        v12 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v8);
        if ( v12 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v12, (System_String_o *)listViewManager, v13);
          return;
        }
      }
    }
    sub_1BCAA3C(listViewManager, v8);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickSortAscendingOrder(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *listViewManager; // x21
  System_Action_o *v8; // x20

  if ( (byte_4B1555C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, v5, v6);
    byte_4B1555C = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v8, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *listViewManager; // x21
  System_Action_o *v8; // x20

  if ( (byte_4B1555B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickSortKind__, v5, v6);
    byte_4B1555B = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v8, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickTab(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *finishCallback,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x20
  struct CharaGraphListViewManager_o *listViewManager; // x8
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  v4 = this;
  if ( (byte_4B15557 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTab__, finishCallback, method);
    byte_4B15557 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    listViewManager = v4->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_16;
    ListViewPattern_k__BackingField = listViewManager->fields._ListViewPattern_k__BackingField;
    if ( ListViewPattern_k__BackingField )
    {
      SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
      if ( SortOwner_k__BackingField )
        CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, (const MethodInfo *)finishCallback);
    }
    v8 = Method_CharaGraphListMenuBase_OnClickTab__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_1BCAA3C(this, finishCallback);
    if ( (RootInfo_k__BackingField->fields._ModeKind_k__BackingField & 0xFFFFFFFE) == 2 )
    {
      CharaGraphListMenuBase__StatusRequest(v4, finishCallback, v10);
    }
    else if ( finishCallback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))finishCallback->fields.m_target)(
        finishCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&finishCallback->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenuBase__OnClickTabChoice(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 3, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabCommandCode(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListMenuBase_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B15556 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__, method, v2);
    sub_1BCA7E0(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B15556 = 1;
  }
  v7 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__,
    v8);
  CharaGraphListMenuBase__OnClickTab(this, v7, v9);
}


void __fastcall CharaGraphListMenuBase__OnClickTabLock(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 2, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabMain(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 0, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabPush(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 4, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServant(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListMenuBase_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B15554 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__, method, v2);
    sub_1BCA7E0(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B15554 = 1;
  }
  v7 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__,
    v8);
  CharaGraphListMenuBase__OnClickTab(this, v7, v9);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServantEquip(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListMenuBase_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B15555 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__, method, v2);
    sub_1BCA7E0(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B15555 = 1;
  }
  v7 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__,
    v8);
  CharaGraphListMenuBase__OnClickTab(this, v7, v9);
}


void __fastcall CharaGraphListMenuBase__OnCloseServantStatusWithQuestId(
        CharaGraphListMenuBase_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  this->fields.state = 3;
  CharaGraphListMenuBase__Exit(this, 2, method);
}


void __fastcall CharaGraphListMenuBase__OnCloseServantStatusWithoutQuestId(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v5; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BCAA3C(0LL, method);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v2);
  CharaGraphListMenuBase__ToInputState(this, 1, v5);
}


void __fastcall CharaGraphListMenuBase__OnEndSelectCommandCodeStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_OnEndSelectServantStatus.method)(
    this,
    isDecide,
    0LL,
    0LL,
    this->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr);
}


void __fastcall CharaGraphListMenuBase__OnEndSelectServantEquipStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_OnEndSelectServantStatus.method)(
    this,
    isDecide,
    0LL,
    0LL,
    this->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnEndSelectServantStatus(
        CharaGraphListMenuBase_o *this,
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
  __int64 v15; // x22
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v25; // x2
  int v26; // w21
  Il2CppObject *Instance; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x0
  bool v32; // cc
  System_Action_o *v33; // x21
  Il2CppObject *v34; // x1
  void *image; // x2

  if ( (byte_4B15560 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__, v11, v12);
    sub_1BCA7E0(&CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, v13, v14);
    byte_4B15560 = 1;
  }
  v15 = sub_1BCAA2C(CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v25);
  v26 = *(_DWORD *)(v15 + 24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
  v32 = v26 < 1;
  v33 = v31;
  if ( v32 )
  {
    v34 = (Il2CppObject *)this;
    image = this->klass[1]._1.image;
  }
  else
  {
    v34 = (Il2CppObject *)v15;
    LODWORD(image) = Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v31, v34, (intptr_t)image, 0LL);
  if ( !Instance )
LABEL_13:
    sub_1BCAA3C(scrollView, v17);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v33, 0LL);
}


bool __fastcall CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w19

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, item);
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( !ModeKind_k__BackingField )
    ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._11_OnSelectServantAtKindStatus.method)(
      this,
      item,
      this->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr);
  return ModeKind_k__BackingField == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnSelectServant(
        CharaGraphListMenuBase_o *this,
        int32_t iKind,
        int32_t n,
        const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  CharaGraphListViewItemBase_o *Item; // x0

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (n & 0x80000000) != 0 )
      goto LABEL_8;
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      sub_1BCAA3C(0LL, *(_QWORD *)&iKind);
    Item = CharaGraphListViewManager__GetItem(listViewManager, n, *(const MethodInfo **)&n);
    if ( !Item )
      goto LABEL_8;
    if ( iKind != 1 )
    {
      CharaGraphListMenuBase__OnSelectServantLocal(this, Item, *(const MethodInfo **)&n);
      return;
    }
    if ( (((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._9_OnLongTapServantLocal.method)(
            this,
            Item,
            this->klass->vtable._10_OnSelectServantAtKindMain.methodPtr) & 1) == 0 )
LABEL_8:
      CharaGraphListMenuBase__ToInputState(this, 0, *(const MethodInfo **)&n);
  }
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindChoice(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B15562 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__, item, method);
    byte_4B15562 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !item )
    sub_1BCAA3C(v7, v8);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B15561 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__, item, method);
    byte_4B15561 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !item )
    sub_1BCAA3C(v7, v8);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindMain(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._11_OnSelectServantAtKindStatus.method)(
    this,
    item,
    this->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindPush(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  CharaGraphCommandCodeListViewItem_o *v26; // [xsp+0h] [xbp-40h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B15563 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, item, method);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__, v5, v6);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__, v7, v8);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B15563 = 1;
  }
  v13 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  v26 = 0LL;
  svtItem = 0LL;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v26, v15);
  if ( !svtItem )
    sub_1BCAA3C(v16, v17);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v21 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v17, v18, v19);
  System_Action_bool____ctor(
    v21,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__,
    0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23, v24);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__,
    0LL);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v21, v25, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v12; // x3
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  int32_t tabKind; // w8
  __int64 v16; // x2
  __int64 v17; // x3
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  CommonUI_o *v19; // x20
  ServantStatusDialog_EndDelegate_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  CommonUI_o *v24; // x20
  ServantStatusDialog_ResultDelegate_o *v25; // x22
  __int64 v26; // x2
  __int64 v27; // x3
  UserServantEntity_o *v28; // x21
  CommonUI_o *v29; // x20
  ServantStatusDialog_EndDelegate_o *v30; // x22
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1555F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__, item, method);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v7, v8);
    this = (CharaGraphListMenuBase_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B1555F = 1;
  }
  svtItem = 0LL;
  commandCodeItem = 0LL;
  if ( v4->fields.tabKind == 3 )
  {
    CharaGraphListMenuBase__ToInputState(v4, 0, method);
    return;
  }
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager || (this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView) == 0LL )
LABEL_22:
    sub_1BCAA3C(this, item);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &commandCodeItem, v12);
  v13 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  tabKind = v4->fields.tabKind;
  v4->fields.state = 6;
  switch ( tabKind )
  {
    case 0:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
        v24 = (CommonUI_o *)this;
        v25 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        item,
                                                        v21,
                                                        v22);
        ServantStatusDialog_ResultDelegate___ctor(
          v25,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr,
          0LL);
        if ( v24 )
        {
          CommonUI__OpenServantStatusDialog_30777260(v24, 0, UserServantEntity_k__BackingField, v25, 0, 0LL);
          return;
        }
      }
      goto LABEL_22;
    case 1:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        v28 = svtItem->fields._UserServantEntity_k__BackingField;
        v29 = (CommonUI_o *)this;
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, item, v26, v27);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._13_OnEndSelectCommandCodeStatus.methodPtr,
          0LL);
        if ( v29 )
        {
          CommonUI__OpenServantStatusDialog_30776796(v29, 0, v28, v30, 0LL);
          return;
        }
      }
      goto LABEL_22;
    case 2:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( commandCodeItem )
      {
        UserCommandCodeEntity_k__BackingField = commandCodeItem->fields._UserCommandCodeEntity_k__BackingField;
        v19 = (CommonUI_o *)this;
        v20 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, item, v16, v17);
        ServantStatusDialog_EndDelegate___ctor(
          v20,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._14_OnEndSelectServantStatus.methodPtr,
          0LL);
        if ( v19 )
        {
          CommonUI__OpenServantStatusDialog_30778960(v19, 0, UserCommandCodeEntity_k__BackingField, v20, 0LL, 0LL);
          return;
        }
      }
      goto LABEL_22;
  }
}


void __fastcall CharaGraphListMenuBase__OnSelectServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B1555E & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServantLocal__, item, method);
    byte_4B1555E = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v6 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    CharaGraphListMenuBase__ToInputState(v4, 0, v8);
    return;
  }
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_1BCAA3C(this, item);
  switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
  {
    case 0:
      if ( (((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))item->klass->vtable._7_get_IsCanNotSelect.method)(
              item,
              item->klass->vtable._8_get_SortPriority.methodPtr,
              method) & 1) != 0 )
        goto LABEL_8;
      v10 = v4->klass->vtable._10_OnSelectServantAtKindMain.method;
      methodPtr = v4->klass->vtable._11_OnSelectServantAtKindStatus.methodPtr;
      goto LABEL_16;
    case 1:
      v10 = v4->klass->vtable._11_OnSelectServantAtKindStatus.method;
      methodPtr = v4->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr;
LABEL_16:
      ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v10)(
        v4,
        item,
        methodPtr);
      break;
    case 2:
      CharaGraphListMenuBase__OnSelectServantAtKindLock(v4, item, method);
      break;
    case 3:
      CharaGraphListMenuBase__OnSelectServantAtKindChoice(v4, item, method);
      break;
    case 4:
      CharaGraphListMenuBase__OnSelectServantAtKindPush(v4, item, method);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2

  if ( (byte_4B15559 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__, *(_QWORD *)&modeKindToUpdate, method);
    sub_1BCA7E0(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__, v8, v9);
    sub_1BCA7E0(&CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, v10, v11);
    byte_4B15559 = 1;
  }
  v12 = sub_1BCAA2C(CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&modeKindToUpdate, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_1BCAA3C(v13, v14);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v22 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
    if ( *(_DWORD *)(v12 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v27 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                            v24,
                                                            v25,
                                                            v26);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v27,
      (Il2CppObject *)v12,
      Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__,
      v28);
    CharaGraphListMenuBase__StatusRequest(this, v27, v29);
  }
}


void __fastcall CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  CharaGraphSortOwnerAllKind_o *v10; // x22
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x20

  if ( (byte_4B1554B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_EndOpen__, v6, v7);
    sub_1BCA7E0(&CharaGraphSortOwnerNoSave_TypeInfo, v8, v9);
    byte_4B1554B = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v10 = (CharaGraphSortOwnerAllKind_o *)sub_1BCAA2C(CharaGraphSortOwnerNoSave_TypeInfo, callback, method, v3);
    CharaGraphSortOwnerAllKind___ctor(v10, v11);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v10;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._SortOwner_k__BackingField,
      (int64_t)v10,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.method)(
    this,
    this->klass->vtable._7_CreateListViewPattern.methodPtr,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.CallbackOnExit,
      (int64_t)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v27);
      CharaGraphListMenuBase__EndOpen(this, v29);
      return;
    }
LABEL_13:
    sub_1BCAA3C(gameObject, v26);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.CallbackOnExit,
      (int64_t)callback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v31 = this->fields._RootInfo_k__BackingField;
    if ( !v31 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v31->fields._ModeKind_k__BackingField, 1, v30);
    this->fields.state = 1;
    v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v35, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v5; // x0
  __int64 v6; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4B15568 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15568 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v5 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_1BCAA3C(v5, v6);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v5, listViewManager->fields.sort, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v5; // x0
  __int64 v6; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4B15569 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15569 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v5 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_1BCAA3C(v5, v6);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v5,
      listViewManager->fields.sort,
      listViewManager->fields._AlignedBonusFilterInfos_k__BackingField,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__SetTabKind(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  int32_t v6; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  EventMaster_o *Master_object; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  int32_t tabKind; // w22
  struct CharaGraphDefine_CharaGraphRootInfo_o *v22; // x8
  int32_t ModeKind_k__BackingField; // w9
  bool v24; // w24
  bool v25; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  EventUpValSetupInfo_o *v32; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v36; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v37; // x8
  struct CharaGraphListViewManager_o *v38; // x20
  const MethodInfo *v39; // x2
  __int64 v40; // x1
  ListViewManager_o *v41; // x0
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *v43; // x20
  CharaGraphManageButtonGroup_o *v44; // x19
  const MethodInfo *v45; // x2

  v6 = iModeKind;
  if ( (byte_4B15551 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&iTabKind, *(_QWORD *)&iModeKind);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B15551 = 1;
  }
  if ( !this->fields.isInitTab )
  {
    this->fields.isInitTab = 1;
    CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, 1, (const MethodInfo *)isInit);
    goto LABEL_12;
  }
  CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, isInit, (const MethodInfo *)isInit);
  if ( isInit )
  {
LABEL_12:
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, v6, 1, v20);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_38;
    v24 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_object;
    v25 = 1;
    goto LABEL_14;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind != iTabKind )
  {
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, v6, 0, v20);
    v6 = (int)Master_object;
  }
  v22 = this->fields._RootInfo_k__BackingField;
  if ( !v22 )
    goto LABEL_38;
  ModeKind_k__BackingField = v22->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v22->fields._ModeKind_k__BackingField = v6;
  v24 = v6 == ModeKind_k__BackingField;
  if ( tabKind == iTabKind )
  {
    if ( v6 == ModeKind_k__BackingField )
      goto LABEL_26;
    v25 = 0;
    goto LABEL_19;
  }
  v25 = 0;
LABEL_14:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_38;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  v28 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v32 = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, v29, v30, v31);
  EventUpValSetupInfo___ctor_39629568(v32, v28, 0, 0, 0, 0LL);
  listViewManager = this->fields.listViewManager;
  Master_object = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_CreateListViewPattern.method)(
                                     this,
                                     (unsigned int)this->fields.tabKind,
                                     v32,
                                     this->klass->vtable._8_GetLocalizationKeyForModeKindMain.methodPtr);
  if ( !listViewManager )
    goto LABEL_38;
  ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, void *))listViewManager->klass->vtable._14_CreateList.method)(
    listViewManager,
    Master_object,
    listViewManager->klass[1]._1.image);
  CharaGraphListMenuBase__SetupSortUi(this, v34);
  if ( !v24 )
  {
LABEL_19:
    charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    Master_object = (EventMaster_o *)UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v37 = this->fields._RootInfo_k__BackingField;
      if ( !v37 )
        goto LABEL_38;
      Master_object = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
      if ( !Master_object )
        goto LABEL_38;
      CharaGraphManageButtonGroup__UpdateDisplay(
        (CharaGraphManageButtonGroup_o *)Master_object,
        v37->fields._ModeKind_k__BackingField,
        v25,
        v36);
    }
    CharaGraphListMenuBase__SetupExplanationLabel(this, v18);
  }
LABEL_26:
  v38 = this->fields.listViewManager;
  if ( !v38 )
    goto LABEL_38;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v19);
    CharaGraphListMenuBase__ToInputState(this, 1, v39);
  }
  else
  {
    v41 = (ListViewManager_o *)this->fields.listViewManager;
    v38->fields.initMode = 1;
    ListViewManager__set_IsInput(v41, 0, 0LL);
    CharaGraphListViewManager__RequestListObject(v38, 1, v42);
  }
  v43 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    Master_object = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_object )
    {
      v44 = this->fields.charaGraphManageButtonGroup;
      Master_object = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                         (CharaGraphListViewManager_o *)Master_object,
                                         v18);
      if ( v44 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v44, (System_String_o *)Master_object, v45);
        return;
      }
    }
LABEL_38:
    sub_1BCAA3C(Master_object, v18);
  }
}


void __fastcall CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  struct CharaGraphKindTabButtonGroup_o *v48; // x20
  System_Action_o *v49; // x21
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct CharaGraphKindTabButtonGroup_o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_o *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  PartyOrganizationUtility_o *v67; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_o *v71; // x21
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  struct CharaGraphManageButtonGroup_o *v82; // x20
  System_Action_o *v83; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct CharaGraphManageButtonGroup_o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Action_o *v94; // x21
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct CharaGraphManageButtonGroup_o *v101; // x20
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  System_Action_o *v105; // x21
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct CharaGraphManageButtonGroup_o *v112; // x20
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  System_Action_o *v116; // x21
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  PartyOrganizationUtility_o *v123; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  System_Action_o *v127; // x21
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  struct CharaGraphSortButtonGroup_o *v138; // x20
  System_Action_o *v139; // x21
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct CharaGraphSortButtonGroup_o *v146; // x20
  __int64 v147; // x1
  __int64 v148; // x2
  __int64 v149; // x3
  System_Action_o *v150; // x21
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  struct CharaGraphSortButtonGroup_o *v157; // x20
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  System_Action_o *v161; // x21
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct CharaGraphSortButtonGroup_o *v168; // x20
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x3
  System_Action_o *v172; // x21
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7

  if ( (byte_4B1554C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, v5, v6);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickFilterKind__, v7, v8);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickScaleChange__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, v11, v12);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickSortKind__, v13, v14);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabChoice__, v15, v16);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__, v17, v18);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabLock__, v19, v20);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabMain__, v21, v22);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabPush__, v23, v24);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__, v25, v26);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnClickTabServant__, v27, v28);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_SetSortButtonImage__, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    byte_4B1554C = 1;
  }
  listViewManager = this->fields.listViewManager;
  v34 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0LL);
  if ( !listViewManager )
    goto LABEL_29;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (int64_t)v34,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v48 = this->fields.charaGraphKindTabButtonGroup;
    v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v45, v46, v47);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0LL);
    if ( !v48 )
      goto LABEL_29;
    v48->fields._OnClickTabServant_k__BackingField = v49;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v48->fields._OnClickTabServant_k__BackingField,
      (int64_t)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v56 = this->fields.charaGraphKindTabButtonGroup;
    v60 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v57, v58, v59);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0LL);
    if ( !v56 )
      goto LABEL_29;
    v56->fields._OnClickTabServantEquip_k__BackingField = v60;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v56->fields._OnClickTabServantEquip_k__BackingField,
      (int64_t)v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
    v67 = (PartyOrganizationUtility_o *)this->fields.charaGraphKindTabButtonGroup;
    v71 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v68, v69, v70);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0LL);
    if ( !v67 )
      goto LABEL_29;
    v67[1].klass = (PartyOrganizationUtility_c *)v71;
    sub_1BCA784(v67 + 1, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL) )
  {
    v82 = this->fields.charaGraphManageButtonGroup;
    v83 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v79, v80, v81);
    System_Action___ctor(v83, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0LL);
    if ( !v82 )
      goto LABEL_29;
    v82->fields._OnClickTabMain_k__BackingField = v83;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v82->fields._OnClickTabMain_k__BackingField,
      (int64_t)v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
    v90 = this->fields.charaGraphManageButtonGroup;
    v94 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v91, v92, v93);
    System_Action___ctor(v94, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0LL);
    if ( !v90 )
      goto LABEL_29;
    v90->fields._OnClickTabLock_k__BackingField = v94;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v90->fields._OnClickTabLock_k__BackingField,
      (int64_t)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v101 = this->fields.charaGraphManageButtonGroup;
    v105 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v102, v103, v104);
    System_Action___ctor(v105, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0LL);
    if ( !v101 )
      goto LABEL_29;
    v101->fields._OnClickTabChoice_k__BackingField = v105;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v101->fields._OnClickTabChoice_k__BackingField,
      (int64_t)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    v112 = this->fields.charaGraphManageButtonGroup;
    v116 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v113, v114, v115);
    System_Action___ctor(v116, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0LL);
    if ( !v112 )
      goto LABEL_29;
    v112->fields._OnClickTabPush_k__BackingField = v116;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v112->fields._OnClickTabPush_k__BackingField,
      (int64_t)v116,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    v123 = (PartyOrganizationUtility_o *)this->fields.charaGraphManageButtonGroup;
    v127 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v124, v125, v126);
    System_Action___ctor(v127, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0LL);
    if ( !v123 )
      goto LABEL_29;
    v123[1].klass = (PartyOrganizationUtility_c *)v127;
    sub_1BCA784(v123 + 1, (int64_t)v127, v128, v129, v130, v131, v132, v133);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79);
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    v138 = this->fields.charaGraphSortButtonGroup;
    v139 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v135, v136, v137);
    System_Action___ctor(v139, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0LL);
    if ( v138 )
    {
      v138->fields._OnClickFilterKind_k__BackingField = v139;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v138->fields._OnClickFilterKind_k__BackingField,
        (int64_t)v139,
        v140,
        v141,
        v142,
        v143,
        v144,
        v145);
      v146 = this->fields.charaGraphSortButtonGroup;
      v150 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v147, v148, v149);
      System_Action___ctor(v150, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0LL);
      if ( v146 )
      {
        v146->fields._OnClickSortKind_k__BackingField = v150;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v146->fields._OnClickSortKind_k__BackingField,
          (int64_t)v150,
          v151,
          v152,
          v153,
          v154,
          v155,
          v156);
        v157 = this->fields.charaGraphSortButtonGroup;
        v161 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v158, v159, v160);
        System_Action___ctor(v161, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0LL);
        if ( v157 )
        {
          v157->fields._OnClickSortAscendingOrder_k__BackingField = v161;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v157->fields._OnClickSortAscendingOrder_k__BackingField,
            (int64_t)v161,
            v162,
            v163,
            v164,
            v165,
            v166,
            v167);
          v168 = this->fields.charaGraphSortButtonGroup;
          v172 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v169, v170, v171);
          System_Action___ctor(v172, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0LL);
          if ( v168 )
          {
            v168->fields._OnClickBonusFilterKind_k__BackingField = v172;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v168->fields._OnClickBonusFilterKind_k__BackingField,
              (int64_t)v172,
              v173,
              v174,
              v175,
              v176,
              v177,
              v178);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(v35, v36);
  }
}


void __fastcall CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v16; // x20
  __int64 *v17; // x8
  UILabel_o *v18; // x19

  if ( (byte_4B15552 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v10, v11);
    byte_4B15552 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v13 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_18:
      sub_1BCAA3C(v13, v14);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v16 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._8_GetLocalizationKeyForModeKindMain.method)(
                                   this,
                                   this->klass->vtable._9_OnLongTapServantLocal.methodPtr);
        if ( !v16 )
          return;
        goto LABEL_14;
      case 2:
        v17 = &StringLiteral_11762/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_13;
      case 3:
        v17 = &StringLiteral_11761/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_13;
      case 4:
        v17 = &StringLiteral_11763/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_13:
        v16 = (System_String_o *)*v17;
        if ( !*v17 )
          return;
LABEL_14:
        v18 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
        v13 = LocalizationManager__Get(v16, 0LL);
        if ( !v18 )
          goto LABEL_18;
        UILabel__set_text(v18, v13, 0LL);
        break;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__SetupServantKindTabButtonGroup(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CharaGraphKindTabButtonGroup_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4B1554F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&iTabKind, isInit);
    byte_4B1554F = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&iTabKind);
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v10 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v10
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v10, iTabKind, v9),
          (v10 = this->fields.charaGraphKindTabButtonGroup) == 0LL) )
    {
      sub_1BCAA3C(v10, v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v10, iTabKind, isInit, v11);
  }
}


void __fastcall CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  CharaGraphSortButtonGroup_o *v7; // x0
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4B15567 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15567 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v5);
    v7 = this->fields.charaGraphSortButtonGroup;
    if ( !v7
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v7, 0, 1, 0LL),
          (listViewManager = this->fields.listViewManager) == 0LL)
      || (v7 = this->fields.charaGraphSortButtonGroup) == 0LL )
    {
      sub_1BCAA3C(v7, v6);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v7, listViewManager->fields.sort, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v16; // x20
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x23
  const MethodInfo *v26; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v29; // w21
  bool v30; // w22
  __int64 v31; // x2
  __int64 v32; // x3
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v34; // x19
  __int64 v35; // x1
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B15564 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__, v12, v13);
    sub_1BCA7E0(&CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, v14, v15);
    byte_4B15564 = 1;
  }
  v16 = sub_1BCAA2C(CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_24;
  *(_QWORD *)(v16 + 16) = callback;
  v25 = v16 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)callback, v19, v20, v21, v22, v23, v24);
  lockArray = 0LL;
  unlockArray = 0LL;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_24;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField == 3 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v26);
    v30 = 0;
    v29 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v26);
    v29 = 0;
    v30 = 1;
  }
  else
  {
    v29 = 0;
    v30 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0LL) )
  {
    listViewManager = (CharaGraphListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                       (System_Collections_ICollection_o *)unlockArray,
                                                       0LL);
    if ( ((unsigned __int8)listViewManager & 1) != 0 )
    {
      if ( *(_QWORD *)v25 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v25 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v25 + 64LL),
          0LL,
          *(_QWORD *)(*(_QWORD *)v25 + 40LL));
        return;
      }
LABEL_24:
      sub_1BCAA3C(listViewManager, v18);
    }
  }
  tabKind = this->fields.tabKind;
  v34 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v31, v32);
  NetworkManager_ResultCallbackFunc___ctor(
    v34,
    (Il2CppObject *)v16,
    Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  if ( tabKind == 2 )
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v34,
                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v30,
      v29,
      0LL);
  }
  else
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v34,
                                                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v30,
      v29,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__ToInputState(
        CharaGraphListMenuBase_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x20
  CharaGraphListViewManager_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_4B15565 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_CallbackFunc_TypeInfo, changeMode, method);
    sub_1BCA7E0(&Method_CharaGraphListMenuBase_OnSelectServant__, v6, v7);
    byte_4B15565 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v9 = (CharaGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                     CharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                     changeMode,
                                                     method,
                                                     v3);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    v10);
  if ( !listViewManager )
    sub_1BCAA3C(v11, v12);
  listViewManager->fields.FuncOnClick = v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&listViewManager->fields.FuncOnClick,
    (int64_t)v9,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( changeMode )
  {
    listViewManager->fields.initMode = 2;
    ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0LL);
    CharaGraphListViewManager__RequestListObject(listViewManager, 2, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnClickFilterKind_b__54_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( isDecide )
    CharaGraphListMenuBase__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnClickTabCommandCode_b__46_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 2, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void __fastcall CharaGraphListMenuBase___OnClickTabServantEquip_b__45_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  EventTutorialMaster__CheckTutorial(-1, 54, 0LL, 0, 0, 0, 0, 0LL);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(v4, v5);
  CharaGraphListMenuBase__SetTabKind(this, 1, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnClickTabServant_b__44_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 0, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void __fastcall CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_71_1(
        CharaGraphListMenuBase_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v6; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BCAA3C(0LL, result);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v3);
  CharaGraphListMenuBase__ToInputState(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnSelectServantAtKindPush_g__OnCloseDialog_71_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !isDecide )
    CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_71_1(this, (System_String_o *)isDecide, method);
}


void __fastcall CharaGraphListMenuBase__add_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B15549 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value, method);
    byte_4B15549 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CharaGraphListMenuBase__remove_CallbackOnExit(v11, v12, v13);
}


int32_t __fastcall CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, method);
  return RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
}


CharaGraphDefine_CharaGraphRootInfo_o *__fastcall CharaGraphListMenuBase__get_RootInfo(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


CharaGraphSortOwnerBase_o *__fastcall CharaGraphListMenuBase__get_SortOwner(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortOwner_k__BackingField;
}


void __fastcall CharaGraphListMenuBase__remove_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1554A & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value, method);
    byte_4B1554A = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  CharaGraphListMenuBase__get_ModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__set_ModeKind(
        CharaGraphListMenuBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1BCAA3C(this, *(_QWORD *)&value);
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = value;
}


void __fastcall CharaGraphListMenuBase__set_SortOwner(
        CharaGraphListMenuBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortOwner_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SortOwner_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_CallbackFunc___ctor(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0CCF4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CCAC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_CallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B1556D & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListMenuBase_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B1556D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__Invoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_RequestCallbackFunc___ctor(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0CC90;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_1A0CC48;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B1556C & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B1556C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass38_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___c__DisplayClass38_0___Exit_g__OnEnd_0(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenuBase_o *_4__this; // x0
  PartyOrganizationUtility_o *p_CallbackOnExit; // x0
  struct CharaGraphListMenuBase_CallbackFunc_o *v11; // x20
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, isRequest);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = (PartyOrganizationUtility_o *)&_4__this->fields.CallbackOnExit;
  v11 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    p_CallbackOnExit->klass = 0LL;
    sub_1BCA784(p_CallbackOnExit, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      (unsigned int)this->fields.result,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass53_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___c__DisplayClass53_0___OnServantManageTabSelected_b__0(
        CharaGraphListMenuBase___c__DisplayClass53_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphListMenuBase_o *_4__this; // x0

  if ( isRequest )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_6;
    CharaGraphListMenuBase__ModifyList(_4__this, 0, method);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_6:
    sub_1BCAA3C(_4__this, isRequest);
  CharaGraphListMenuBase__SetTabKind(_4__this, _4__this->fields.tabKind, this->fields.modeKindToUpdate, 0, v3);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass66_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass66_0___OnEndSelectServantStatus_b__0(
        CharaGraphListMenuBase___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct CharaGraphListMenuBase_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_OnCloseServantStatusWithQuestId.method)(
    _4__this,
    (unsigned int)this->fields.questId,
    _4__this->klass->vtable._16_OnCloseServantStatusWithoutQuestId.methodPtr);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass72_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass72_0___StatusRequest_g__EndStatusSync_0(
        CharaGraphListMenuBase___c__DisplayClass72_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_RequestCallbackFunc_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
}