void CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphDefine_CharaGraphRootInfo_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_596FA8A & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    sub_2213A60(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
    byte_596FA8A = 1;
  }
  v3 = (CharaGraphDefine_CharaGraphRootInfo_o *)sub_2213CCC(CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
  CharaGraphDefine_CharaGraphRootInfo___ctor(v3, 0);
  this->fields._RootInfo_k__BackingField = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RootInfo_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, v10, v11);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void CharaGraphListMenuBase__AfterCreateList(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  ;
}


void CharaGraphListMenuBase__AssertionForSerializeField(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  ;
}


void CharaGraphListMenuBase__Awake(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgTxtObject; // x19
  _BOOL8 IsActiveBgTxt; // x0
  __int64 v5; // x1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
  bgTxtObject = this->fields.bgTxtObject;
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0);
  if ( !bgTxtObject )
    sub_2213CDC(IsActiveBgTxt, v5);
  UnityEngine_GameObject__SetActive(bgTxtObject, IsActiveBgTxt, 0);
}


void CharaGraphListMenuBase__CastItem(
        CharaGraphListViewItemBase_o *item,
        CharaGraphServantListViewItemBase_o **svtItem,
        CharaGraphCommandCodeListViewItem_o **commandCodeItem,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 naturalAligment; // x11
  CharaGraphListViewItemBase_o *v12; // x9
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  __int64 v20; // x10
  int32_t v21; // w1
  __int64 v22; // x10
  CharaGraphListViewItemBase_o *v23; // x8
  __int64 v24; // x10

  if ( (byte_596FA89 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_2213A60(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_596FA89 = 1;
  }
  if ( item )
  {
    naturalAligment = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CharaGraphServantListViewItemBase_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphServantListViewItemBase_TypeInfo )
        v12 = item;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
    }
    *svtItem = (CharaGraphServantListViewItemBase_o *)v12;
    v20 = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v20 )
    {
      if ( (CharaGraphServantListViewItemBase_c *)item->klass->_2.typeHierarchy[v20 - 1] == CharaGraphServantListViewItemBase_TypeInfo )
        v21 = (int)item;
      else
        v21 = 0;
    }
    else
    {
      v21 = 0;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)svtItem,
      v21,
      (System_String_o *)commandCodeItem,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    v22 = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v22 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v22 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v23 = item;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v23;
    v24 = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v24 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v24 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v19 = (int)item;
      else
        v19 = 0;
    }
    else
    {
      v19 = 0;
    }
  }
  else
  {
    *svtItem = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)svtItem,
      0,
      (System_String_o *)commandCodeItem,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    v19 = 0;
    *commandCodeItem = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)commandCodeItem, v19, v13, v14, v15, v16, v17, v18);
}


void CharaGraphListMenuBase__Close(CharaGraphListMenuBase_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Action_o *v14; // x20

  if ( (byte_596FA6C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase_EndClose__);
    byte_596FA6C = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackOnClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 4;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(v10, v11);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v12);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0);
}


CharaGraphListViewPatternBase_o *CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServant_c **v7; // x8
  __int64 v8; // x22
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct CharaGraphSortOwnerBase_o *v18; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596FA6F & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewPatternCommandCode_TypeInfo);
    sub_2213A60(&CharaGraphListViewPatternServantCollection_TypeInfo);
    sub_2213A60(&CharaGraphListViewPatternServantEquip_TypeInfo);
    sub_2213A60(&CharaGraphListViewPatternServant_TypeInfo);
    byte_596FA6F = 1;
  }
  if ( (unsigned int)(kind - 1) > 2 )
    v7 = &CharaGraphListViewPatternServant_TypeInfo;
  else
    v7 = (CharaGraphListViewPatternServant_c **)off_52CA860[kind - 1];
  v8 = sub_2213CCC(*v7);
  System_Object___ctor((Il2CppObject *)v8, 0);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(SortOwner_k__BackingField, kind, v10), !v8) )
  {
    sub_2213CDC(SortOwner_k__BackingField, v9);
  }
  v18 = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v8 + 16) = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)v18, v12, v13, v14, v15, v16, v17);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v8 + 24) = RootInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v8 + 24),
    (int32_t)RootInfo_k__BackingField,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v8 + 32) = setupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)setupInfo, v26, v27, v28, v29, v30, v31);
  return (CharaGraphListViewPatternBase_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
int32_t CharaGraphListMenuBase__DisplayPushButton(
        CharaGraphListMenuBase_o *this,
        bool value,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  int32_t v6; // w19
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x23
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  CharaGraphManageButtonGroup_o *v12; // x0

  v6 = iModeKind;
  if ( (byte_596FA85 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA85 = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value, *(_QWORD *)&iModeKind);
  if ( !UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0, 0) )
  {
    v12 = this->fields.charaGraphManageButtonGroup;
    if ( !v12 )
      sub_2213CDC(0, v10);
    CharaGraphManageButtonGroup__SetPushButtonActive(v12, value, isInit, v11);
    if ( v6 == 4 && !value )
      return 0;
  }
  return v6;
}


void CharaGraphListMenuBase__DoIfStateIsInput(
        CharaGraphListMenuBase_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
    ActionExtensions__Call(f, 0);
}


void CharaGraphListMenuBase__EndClose(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_callbackOnClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackOnClose; // t1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_Init.methodPtr)(
    this,
    0,
    this->klass->vtable._5_Init.method);
  callbackOnClose = this->fields.callbackOnClose;
  p_callbackOnClose = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackOnClose;
  v10 = callbackOnClose;
  if ( callbackOnClose )
  {
    p_callbackOnClose->klass = 0;
    sub_2213A04(p_callbackOnClose, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void CharaGraphListMenuBase__EndOpen(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 2;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, method);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v2);
}


void CharaGraphListMenuBase__Exit(CharaGraphListMenuBase_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CharaGraphListMenuBase_RequestCallbackFunc_c *v14; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_596FA6D & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__);
    sub_2213A60(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
    byte_596FA6D = 1;
  }
  v5 = sub_2213CCC(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo;
  *(_DWORD *)(v5 + 24) = result;
  v15 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_2213CCC(v14);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    v16);
  CharaGraphListMenuBase__StatusRequest(this, v15, v17);
}


System_String_o *CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_596FA72 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12167/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    byte_596FA72 = 1;
  }
  return (System_String_o *)StringLiteral_12167/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__Init(CharaGraphListMenuBase_o *this, int32_t defaultTabKind, const MethodInfo *method)
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
    sub_2213CDC(listViewManager, *(_QWORD *)&defaultTabKind);
  }
  this->fields.isInitTab = 0;
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__ModifyList(CharaGraphListMenuBase_o *this, bool isNeedSort, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  struct CharaGraphListViewManager_o *v6; // x19
  const MethodInfo *v7; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (CharaGraphListViewManager__ModifyList(listViewManager, 0, isNeedSort, v3),
        (v6 = this->fields.listViewManager) == 0) )
  {
    sub_2213CDC(listViewManager, isNeedSort);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void CharaGraphListMenuBase__OnClickBonusFilterKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_596FA7C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_596FA7C = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0);
}


void CharaGraphListMenuBase__OnClickCancel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 0, v2);
  }
}


void CharaGraphListMenuBase__OnClickDecide(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 1, v2);
  }
}


void CharaGraphListMenuBase__OnClickFilterKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_596FA79 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__55_0__);
    byte_596FA79 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v4 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v4, (Il2CppObject *)this, Method_CharaGraphListMenuBase__OnClickFilterKind_b__55_0__, 0);
    if ( !listViewManager )
      sub_2213CDC(v5, v6);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v4, v7);
  }
}


void CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  CharaGraphManageButtonGroup_o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_596FA77 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA77 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v5);
      charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0, 0) )
        return;
      listViewManager = this->fields.listViewManager;
      if ( listViewManager )
      {
        v10 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v5);
        if ( v10 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v10, (System_String_o *)listViewManager, v11);
          return;
        }
      }
    }
    sub_2213CDC(listViewManager, v5);
  }
}


void CharaGraphListMenuBase__OnClickSortAscendingOrder(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_596FA7B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_596FA7B = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0);
}


void CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_596FA7A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListViewManager_OnClickSortKind__);
    byte_596FA7A = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0);
}


void CharaGraphListMenuBase__OnClickTab(
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
  if ( (byte_596FA76 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTab__);
    byte_596FA76 = 1;
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
      v8 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_2213CDC(this, finishCallback);
    if ( (RootInfo_k__BackingField->fields._ModeKind_k__BackingField & 0xFFFFFFFE) == 2 )
    {
      CharaGraphListMenuBase__StatusRequest(v4, finishCallback, v10);
    }
    else if ( finishCallback )
    {
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))finishCallback->fields.invoke_impl)(
        finishCallback->fields.method_code,
        0,
        finishCallback->fields.method);
    }
  }
}


void CharaGraphListMenuBase__OnClickTabChoice(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 3, v2);
}


void CharaGraphListMenuBase__OnClickTabCommandCode(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596FA75 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__47_0__);
    sub_2213A60(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_596FA75 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__47_0__,
    v4);
  CharaGraphListMenuBase__OnClickTab(this, v3, v5);
}


void CharaGraphListMenuBase__OnClickTabLock(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 2, v2);
}


void CharaGraphListMenuBase__OnClickTabMain(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 0, v2);
}


void CharaGraphListMenuBase__OnClickTabPush(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 4, v2);
}


void CharaGraphListMenuBase__OnClickTabServant(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596FA73 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase__OnClickTabServant_b__45_0__);
    sub_2213A60(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_596FA73 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__45_0__,
    v4);
  CharaGraphListMenuBase__OnClickTab(this, v3, v5);
}


void CharaGraphListMenuBase__OnClickTabServantEquip(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596FA74 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__46_0__);
    sub_2213A60(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_596FA74 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__46_0__,
    v4);
  CharaGraphListMenuBase__OnClickTab(this, v3, v5);
}


void CharaGraphListMenuBase__OnCloseServantStatusWithQuestId(
        CharaGraphListMenuBase_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  this->fields.state = 3;
  CharaGraphListMenuBase__Exit(this, 2, method);
}


void CharaGraphListMenuBase__OnCloseServantStatusWithoutQuestId(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v5; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, method);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v2);
  CharaGraphListMenuBase__ToInputState(this, 1, v5);
}


void CharaGraphListMenuBase__OnEndSelectCommandCodeStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._15_OnEndSelectServantStatus.methodPtr)(
    this,
    isDecide,
    0,
    0,
    this->klass->vtable._15_OnEndSelectServantStatus.method);
}


void CharaGraphListMenuBase__OnEndSelectServantEquipStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._15_OnEndSelectServantStatus.methodPtr)(
    this,
    isDecide,
    0,
    0,
    this->klass->vtable._15_OnEndSelectServantStatus.method);
}


void CharaGraphListMenuBase__OnEndSelectServantStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v19; // x2
  int v20; // w21
  Il2CppObject *Instance; // x20
  System_Action_o *v22; // x0
  bool v23; // cc
  System_Action_o *v24; // x21
  Il2CppObject *v25; // x1
  const MethodInfo *v26; // x2

  if ( (byte_596FA7F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_CharaGraphListMenuBase___c__DisplayClass67_0__OnEndSelectServantStatus_b__0__);
    sub_2213A60(&CharaGraphListMenuBase___c__DisplayClass67_0_TypeInfo);
    byte_596FA7F = 1;
  }
  v9 = sub_2213CCC(CharaGraphListMenuBase___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  listViewManager = this->fields.listViewManager;
  *(_DWORD *)(v9 + 24) = questId;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v19);
  v20 = *(_DWORD *)(v9 + 24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v23 = v20 < 1;
  v24 = v22;
  if ( v23 )
  {
    v25 = (Il2CppObject *)this;
    v26 = this->klass->vtable._17_OnCloseServantStatusWithoutQuestId.method;
  }
  else
  {
    v25 = (Il2CppObject *)v9;
    v26 = (const MethodInfo *)Method_CharaGraphListMenuBase___c__DisplayClass67_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v22, v25, (intptr_t)v26, 0);
  if ( !Instance )
LABEL_13:
    sub_2213CDC(scrollView, v11);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v24, 0);
}


bool CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w19

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, item);
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( !ModeKind_k__BackingField )
    ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._12_OnSelectServantAtKindStatus.methodPtr)(
      this,
      item,
      this->klass->vtable._12_OnSelectServantAtKindStatus.method);
  return ModeKind_k__BackingField == 0;
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__OnSelectServant(
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
    if ( n < 0 )
      goto LABEL_8;
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      sub_2213CDC(0, *(_QWORD *)&iKind);
    Item = CharaGraphListViewManager__GetItem(listViewManager, n, *(const MethodInfo **)&n);
    if ( !Item )
      goto LABEL_8;
    if ( iKind != 1 )
    {
      CharaGraphListMenuBase__OnSelectServantLocal(this, Item, *(const MethodInfo **)&n);
      return;
    }
    if ( (((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._10_OnLongTapServantLocal.methodPtr)(
            this,
            Item,
            this->klass->vtable._10_OnLongTapServantLocal.method)
        & 1) == 0 )
LABEL_8:
      CharaGraphListMenuBase__ToInputState(this, 0, *(const MethodInfo **)&n);
  }
}


void CharaGraphListMenuBase__OnSelectServantAtKindChoice(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596FA81 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
    byte_596FA81 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !item )
    sub_2213CDC(v7, v8);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596FA80 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
    byte_596FA80 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !item )
    sub_2213CDC(v7, v8);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void CharaGraphListMenuBase__OnSelectServantAtKindMain(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))this->klass->vtable._12_OnSelectServantAtKindStatus.methodPtr)(
    this,
    item,
    this->klass->vtable._12_OnSelectServantAtKindStatus.method);
}


void CharaGraphListMenuBase__OnSelectServantAtKindPush(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v11; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  CharaGraphCommandCodeListViewItem_o *v14; // [xsp+0h] [xbp-40h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FA82 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
    sub_2213A60(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_72_1__);
    sub_2213A60(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_72_0__);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596FA82 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  v14 = 0;
  svtItem = 0;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v14, v7);
  if ( !svtItem )
    sub_2213CDC(v8, v9);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v11 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v11,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_72_0__,
    0);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_72_1__,
    0);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v11, v12, v13);
}


void CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  int32_t tabKind; // w8
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w8
  CommonUI_o *v11; // x20
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v13; // x22
  CommonUI_o *v14; // x20
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v16; // x22
  CommonUI_o *v17; // x20
  UserServantEntity_o *v18; // x21
  ServantStatusDialog_ResultDelegate_o *v19; // x22
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_596FA7E & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&ServantStatusDialog_ResultDelegate_TypeInfo);
    this = (CharaGraphListMenuBase_o *)sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596FA7E = 1;
  }
  tabKind = v4->fields.tabKind;
  svtItem = 0;
  commandCodeItem = 0;
  if ( tabKind == 3 )
  {
    CharaGraphListMenuBase__ToInputState(v4, 0, method);
    return;
  }
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_22;
  this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView;
  if ( !this )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &commandCodeItem, v7);
  v8 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  v10 = v4->fields.tabKind;
  v4->fields.state = 6;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !svtItem )
        goto LABEL_22;
      v14 = (CommonUI_o *)this;
      UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
      v16 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v16,
        (Il2CppObject *)v4,
        (intptr_t)v4->klass->vtable._13_OnEndSelectServantEquipStatus.method,
        0);
      if ( !v14 )
        goto LABEL_22;
      CommonUI__OpenServantStatusDialog_37383588(v14, 0, UserServantEntity_k__BackingField, v16, 0);
    }
    else if ( v10 == 2 )
    {
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( commandCodeItem )
      {
        v11 = (CommonUI_o *)this;
        UserCommandCodeEntity_k__BackingField = commandCodeItem->fields._UserCommandCodeEntity_k__BackingField;
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._14_OnEndSelectCommandCodeStatus.method,
          0);
        if ( v11 )
        {
          CommonUI__OpenServantStatusDialog_37385832(v11, 0, UserCommandCodeEntity_k__BackingField, v13, 0, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(this, item);
    }
  }
  else
  {
    this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !svtItem )
      goto LABEL_22;
    v17 = (CommonUI_o *)this;
    v18 = svtItem->fields._UserServantEntity_k__BackingField;
    v19 = (ServantStatusDialog_ResultDelegate_o *)sub_2213CCC(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v19,
      (Il2CppObject *)v4,
      (intptr_t)v4->klass->vtable._15_OnEndSelectServantStatus.method,
      0);
    if ( !v17 )
      goto LABEL_22;
    CommonUI__OpenServantStatusDialog_37384068(v17, 0, v18, v19, 0, 0, 0);
  }
}


void CharaGraphListMenuBase__OnSelectServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int ModeKind_k__BackingField; // w8
  const MethodInfo *v7; // x2
  void (__fastcall *methodPtr)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *); // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_596FA7D & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    byte_596FA7D = 1;
  }
  if ( !item )
    goto LABEL_23;
  if ( !item->fields._IsEnabled_k__BackingField )
    goto LABEL_17;
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_23:
    sub_2213CDC(this, item);
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField > 1 )
  {
    switch ( ModeKind_k__BackingField )
    {
      case 2:
        CharaGraphListMenuBase__OnSelectServantAtKindLock(v4, item, method);
        break;
      case 3:
        CharaGraphListMenuBase__OnSelectServantAtKindChoice(v4, item, method);
        break;
      case 4:
        CharaGraphListMenuBase__OnSelectServantAtKindPush(v4, item, method);
        break;
    }
    return;
  }
  if ( ModeKind_k__BackingField )
  {
    if ( ModeKind_k__BackingField != 1 )
      return;
    methodPtr = (void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v4->klass->vtable._12_OnSelectServantAtKindStatus.methodPtr;
    v7 = v4->klass->vtable._12_OnSelectServantAtKindStatus.method;
LABEL_22:
    methodPtr(v4, item, v7);
    return;
  }
  if ( (((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))item->klass->vtable._7_get_IsCanNotSelect.methodPtr)(
          item,
          item->klass->vtable._7_get_IsCanNotSelect.method,
          method)
      & 1) == 0 )
  {
    methodPtr = (void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v4->klass->vtable._11_OnSelectServantAtKindMain.methodPtr;
    v7 = v4->klass->vtable._11_OnSelectServantAtKindMain.method;
    goto LABEL_22;
  }
LABEL_17:
  v9 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  CharaGraphListMenuBase__ToInputState(v4, 0, v11);
}


void CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t state; // w8
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2

  if ( (byte_596FA78 & 1) == 0 )
  {
    sub_2213A60(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    sub_2213A60(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase___c__DisplayClass54_0__OnServantManageTabSelected_b__0__);
    sub_2213A60(&CharaGraphListMenuBase___c__DisplayClass54_0_TypeInfo);
    byte_596FA78 = 1;
  }
  v5 = sub_2213CCC(CharaGraphListMenuBase___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  state = this->fields.state;
  *(_DWORD *)(v5 + 24) = modeKindToUpdate;
  if ( state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_2213CDC(v6, v7);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v16 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_2213A78(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    if ( *(_DWORD *)(v5 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v18 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v18,
      (Il2CppObject *)v5,
      Method_CharaGraphListMenuBase___c__DisplayClass54_0__OnServantManageTabSelected_b__0__,
      v19);
    CharaGraphListMenuBase__StatusRequest(this, v18, v20);
  }
}


void CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  CharaGraphSortOwnerAllKind_o *v5; // x22
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v26; // x8
  System_Action_o *v27; // x20

  if ( (byte_596FA6A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase_EndOpen__);
    sub_2213A60(&CharaGraphSortOwnerNoSave_TypeInfo);
    byte_596FA6A = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v5 = (CharaGraphSortOwnerAllKind_o *)sub_2213CCC(CharaGraphSortOwnerNoSave_TypeInfo);
    CharaGraphSortOwnerAllKind___ctor(v5, v6);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._SortOwner_k__BackingField,
      (int32_t)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.methodPtr)(
    this,
    this->klass->vtable._6_SetupButtonCallback.method,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackOnExit,
      (int32_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v22);
      CharaGraphListMenuBase__EndOpen(this, v24);
      return;
    }
LABEL_13:
    sub_2213CDC(gameObject, v21);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackOnExit,
      (int32_t)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v26 = this->fields._RootInfo_k__BackingField;
    if ( !v26 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v26->fields._ModeKind_k__BackingField, 1, v25);
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v27, 0);
  }
}


void CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_596FA87 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA87 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v5 = this->fields.charaGraphSortButtonGroup) == 0 )
      sub_2213CDC(v5, v6);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v5, listViewManager->fields.sort, v7);
  }
}


void CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_596FA88 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA88 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v5 = this->fields.charaGraphSortButtonGroup) == 0 )
      sub_2213CDC(v5, v6);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v5,
      listViewManager->fields.sort,
      listViewManager->fields._AlignedBonusFilterInfos_k__BackingField,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__SetTabKind(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  EventMaster_o *Master_object; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v14; // x8
  int32_t v15; // w9
  bool v16; // w20
  __int64 v17; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v19; // w24
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v21; // x21
  EventUpValSetupInfo_o *v22; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v26; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v27; // x8
  struct CharaGraphListViewManager_o *v28; // x20
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  ListViewManager_o *v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *v34; // x20
  CharaGraphManageButtonGroup_o *v35; // x19
  const MethodInfo *v36; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *v37; // x8
  int32_t ModeKind_k__BackingField; // w9

  if ( (byte_596FA70 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&EventUpValSetupInfo_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA70 = 1;
  }
  if ( !this->fields.isInitTab )
  {
    this->fields.isInitTab = 1;
    CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, 1, (const MethodInfo *)isInit);
    goto LABEL_10;
  }
  CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, isInit, (const MethodInfo *)isInit);
  if ( isInit )
  {
LABEL_10:
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 1, v13);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_38;
    v19 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_object;
    v16 = 1;
    goto LABEL_12;
  }
  if ( this->fields.tabKind != iTabKind )
  {
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 0, v13);
    v37 = this->fields._RootInfo_k__BackingField;
    if ( !v37 )
      goto LABEL_38;
    ModeKind_k__BackingField = v37->fields._ModeKind_k__BackingField;
    v16 = 0;
    this->fields.tabKind = iTabKind;
    v37->fields._ModeKind_k__BackingField = (int)Master_object;
    v19 = (_DWORD)Master_object == ModeKind_k__BackingField;
LABEL_12:
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v17);
    Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_object )
      goto LABEL_38;
    EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
    v21 = System_Linq_Enumerable__ToArray_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
            (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
    v22 = (EventUpValSetupInfo_o *)sub_2213CCC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_48741124(v22, v21, 0, 0, 0, 0);
    listViewManager = this->fields.listViewManager;
    Master_object = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, const MethodInfo *))this->klass->vtable._7_CreateListViewPattern.methodPtr)(
                                       this,
                                       (unsigned int)this->fields.tabKind,
                                       v22,
                                       this->klass->vtable._7_CreateListViewPattern.method);
    if ( !listViewManager )
      goto LABEL_38;
    ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, const MethodInfo *))listViewManager->klass->vtable._14_CreateList.methodPtr)(
      listViewManager,
      Master_object,
      listViewManager->klass->vtable._14_CreateList.method);
    ((void (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *))this->klass->vtable._8_AfterCreateList.methodPtr)(
      this,
      this->klass->vtable._8_AfterCreateList.method);
    CharaGraphListMenuBase__SetupSortUi(this, v24);
    if ( v19 )
      goto LABEL_24;
    goto LABEL_17;
  }
  v14 = this->fields._RootInfo_k__BackingField;
  if ( !v14 )
    goto LABEL_38;
  v15 = v14->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v14->fields._ModeKind_k__BackingField = iModeKind;
  if ( v15 == iModeKind )
    goto LABEL_24;
  v16 = 0;
LABEL_17:
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  Master_object = (EventMaster_o *)UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v27 = this->fields._RootInfo_k__BackingField;
    if ( !v27 )
      goto LABEL_38;
    Master_object = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
    if ( !Master_object )
      goto LABEL_38;
    CharaGraphManageButtonGroup__UpdateDisplay(
      (CharaGraphManageButtonGroup_o *)Master_object,
      v27->fields._ModeKind_k__BackingField,
      v16,
      v26);
  }
  CharaGraphListMenuBase__SetupExplanationLabel(this, v10);
LABEL_24:
  v28 = this->fields.listViewManager;
  if ( this->fields.state == 2 )
  {
    if ( !v28 )
      goto LABEL_38;
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v12);
    CharaGraphListMenuBase__ToInputState(this, 1, v29);
  }
  else
  {
    if ( !v28 )
      goto LABEL_38;
    v32 = (ListViewManager_o *)this->fields.listViewManager;
    v28->fields.initMode = 1;
    ListViewManager__set_IsInput(v32, 0, 0);
    CharaGraphListViewManager__RequestListObject(v28, 1, v33);
  }
  v34 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
  {
    Master_object = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_object )
    {
      v35 = this->fields.charaGraphManageButtonGroup;
      Master_object = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                         (CharaGraphListViewManager_o *)Master_object,
                                         v10);
      if ( v35 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v35, (System_String_o *)Master_object, v36);
        return;
      }
    }
LABEL_38:
    sub_2213CDC(Master_object, v10);
  }
}


void CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  struct CharaGraphKindTabButtonGroup_o *v18; // x20
  System_Action_o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct CharaGraphKindTabButtonGroup_o *v26; // x20
  System_Action_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct CharaGraphKindTabButtonGroup_o *v34; // x20
  System_Action_o *v35; // x21
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  struct CharaGraphManageButtonGroup_o *v45; // x20
  System_Action_o *v46; // x21
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct CharaGraphManageButtonGroup_o *v53; // x20
  System_Action_o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct CharaGraphManageButtonGroup_o *v61; // x20
  System_Action_o *v62; // x21
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct CharaGraphManageButtonGroup_o *v69; // x20
  System_Action_o *v70; // x21
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct CharaGraphManageButtonGroup_o *v77; // x20
  System_Action_o *v78; // x21
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  struct CharaGraphSortButtonGroup_o *v86; // x20
  System_Action_o *v87; // x21
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct CharaGraphSortButtonGroup_o *v94; // x20
  System_Action_o *v95; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct CharaGraphSortButtonGroup_o *v102; // x20
  System_Action_o *v103; // x21
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct CharaGraphSortButtonGroup_o *v110; // x20
  System_Action_o *v111; // x21
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7

  if ( (byte_596FA6B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickFilterKind__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickSortKind__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabChoice__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabLock__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabMain__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabPush__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnClickTabServant__);
    sub_2213A60(&Method_CharaGraphListMenuBase_SetSortButtonImage__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA6B = 1;
  }
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0);
  if ( !listViewManager )
    goto LABEL_29;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0, 0) )
  {
    v18 = this->fields.charaGraphKindTabButtonGroup;
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0);
    if ( !v18 )
      goto LABEL_29;
    v18->fields._OnClickTabServant_k__BackingField = v19;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v18->fields._OnClickTabServant_k__BackingField,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = this->fields.charaGraphKindTabButtonGroup;
    v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0);
    if ( !v26 )
      goto LABEL_29;
    v26->fields._OnClickTabServantEquip_k__BackingField = v27;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v26->fields._OnClickTabServantEquip_k__BackingField,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v34 = this->fields.charaGraphKindTabButtonGroup;
    v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0);
    if ( !v34 )
      goto LABEL_29;
    v34->fields._OnClickTabCommandCode_k__BackingField = v35;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v34->fields._OnClickTabCommandCode_k__BackingField,
      (int32_t)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0, 0) )
  {
    v45 = this->fields.charaGraphManageButtonGroup;
    v46 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0);
    if ( !v45 )
      goto LABEL_29;
    v45->fields._OnClickTabMain_k__BackingField = v46;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v45->fields._OnClickTabMain_k__BackingField,
      (int32_t)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v53 = this->fields.charaGraphManageButtonGroup;
    v54 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v54, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0);
    if ( !v53 )
      goto LABEL_29;
    v53->fields._OnClickTabLock_k__BackingField = v54;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v53->fields._OnClickTabLock_k__BackingField,
      (int32_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v61 = this->fields.charaGraphManageButtonGroup;
    v62 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0);
    if ( !v61 )
      goto LABEL_29;
    v61->fields._OnClickTabChoice_k__BackingField = v62;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v61->fields._OnClickTabChoice_k__BackingField,
      (int32_t)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v69 = this->fields.charaGraphManageButtonGroup;
    v70 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0);
    if ( !v69 )
      goto LABEL_29;
    v69->fields._OnClickTabPush_k__BackingField = v70;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v69->fields._OnClickTabPush_k__BackingField,
      (int32_t)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    v77 = this->fields.charaGraphManageButtonGroup;
    v78 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0);
    if ( !v77 )
      goto LABEL_29;
    v77->fields._OnClickScaleChange_k__BackingField = v78;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v77->fields._OnClickScaleChange_k__BackingField,
      (int32_t)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0, 0) )
  {
    v86 = this->fields.charaGraphSortButtonGroup;
    v87 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v87, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0);
    if ( v86 )
    {
      v86->fields._OnClickFilterKind_k__BackingField = v87;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v86->fields._OnClickFilterKind_k__BackingField,
        (int32_t)v87,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      v94 = this->fields.charaGraphSortButtonGroup;
      v95 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v95, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0);
      if ( v94 )
      {
        v94->fields._OnClickSortKind_k__BackingField = v95;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v94->fields._OnClickSortKind_k__BackingField,
          (int32_t)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        v102 = this->fields.charaGraphSortButtonGroup;
        v103 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v103, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0);
        if ( v102 )
        {
          v102->fields._OnClickSortAscendingOrder_k__BackingField = v103;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v102->fields._OnClickSortAscendingOrder_k__BackingField,
            (int32_t)v103,
            v104,
            v105,
            v106,
            v107,
            v108,
            v109);
          v110 = this->fields.charaGraphSortButtonGroup;
          v111 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v111, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0);
          if ( v110 )
          {
            v110->fields._OnClickBonusFilterKind_k__BackingField = v111;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v110->fields._OnClickBonusFilterKind_k__BackingField,
              (int32_t)v111,
              v112,
              v113,
              v114,
              v115,
              v116,
              v117);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_2213CDC(v5, v6);
  }
}


void CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int ModeKind_k__BackingField; // w8
  __int64 *v10; // x8
  System_String_o *v11; // x20
  UILabel_o *v12; // x19

  if ( (byte_596FA71 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_2213A60(&StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_2213A60(&StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    byte_596FA71 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_22;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField > 2 )
  {
    if ( ModeKind_k__BackingField == 3 )
    {
      v10 = &StringLiteral_12164/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
    }
    else
    {
      if ( ModeKind_k__BackingField != 4 )
        return;
      v10 = &StringLiteral_12166/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
    }
  }
  else
  {
    if ( !ModeKind_k__BackingField )
    {
      v11 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *))this->klass->vtable._9_GetLocalizationKeyForModeKindMain.methodPtr)(
                                 this,
                                 this->klass->vtable._9_GetLocalizationKeyForModeKindMain.method);
      if ( v11 )
        goto LABEL_18;
      return;
    }
    if ( ModeKind_k__BackingField != 2 )
      return;
    v10 = &StringLiteral_12165/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
  }
  v11 = (System_String_o *)*v10;
  if ( *v10 )
  {
LABEL_18:
    v12 = this->fields.explanationLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v5 = LocalizationManager__Get(v11, 0);
    if ( v12 )
    {
      UILabel__set_text(v12, v5, 0);
      return;
    }
LABEL_22:
    sub_2213CDC(v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__SetupServantKindTabButtonGroup(
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

  if ( (byte_596FA6E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA6E = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&iTabKind, isInit);
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0, 0) )
  {
    v10 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v10
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v10, iTabKind, v9),
          (v10 = this->fields.charaGraphKindTabButtonGroup) == 0) )
    {
      sub_2213CDC(v10, v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v10, iTabKind, isInit, v11);
  }
}


void CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  CharaGraphSortButtonGroup_o *v8; // x0
  const MethodInfo *v9; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_596FA86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA86 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v5);
    v8 = this->fields.charaGraphSortButtonGroup;
    if ( !v8
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v8, 0, 1, v7),
          (listViewManager = this->fields.listViewManager) == 0)
      || (v8 = this->fields.charaGraphSortButtonGroup) == 0 )
    {
      sub_2213CDC(v8, v6);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v8, listViewManager->fields.sort, v9);
  }
}


void CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x23
  const MethodInfo *v15; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v18; // w20
  bool v19; // w22
  int32_t tabKind; // w25
  NetworkManager_ResultCallbackFunc_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  int v24; // w8
  System_Collections_ICollection_o *self; // [xsp+0h] [xbp-50h] BYREF
  System_Int64_array *lockArray; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596FA83 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_2213A60(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase___c__DisplayClass73_0__StatusRequest_g__EndStatusSync_0__);
    sub_2213A60(&CharaGraphListMenuBase___c__DisplayClass73_0_TypeInfo);
    byte_596FA83 = 1;
  }
  self = 0;
  lockArray = 0;
  v5 = sub_2213CCC(CharaGraphListMenuBase___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = callback;
  v14 = v5 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  self = 0;
  lockArray = 0;
  if ( !RootInfo_k__BackingField )
    goto LABEL_26;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField == 3 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_26;
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, (System_Int64_array **)&self, v15);
    v19 = 0;
    v18 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_26;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, (System_Int64_array **)&self, v15);
    v18 = 0;
    v19 = 1;
  }
  else
  {
    v18 = 0;
    v19 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0) )
  {
    listViewManager = (CharaGraphListViewManager_o *)BasicHelper__IsNullOrEmpty(self, 0);
    if ( ((unsigned __int8)listViewManager & 1) != 0 )
    {
      if ( *(_QWORD *)v14 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v14 + 64LL),
          0,
          *(_QWORD *)(*(_QWORD *)v14 + 40LL));
        return;
      }
LABEL_26:
      sub_2213CDC(listViewManager, v7);
    }
  }
  tabKind = this->fields.tabKind;
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_CharaGraphListMenuBase___c__DisplayClass73_0__StatusRequest_g__EndStatusSync_0__,
    0);
  v24 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  if ( tabKind == 2 )
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v21,
                                                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_26;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      (System_Int64_array *)self,
      v19,
      v18,
      0);
  }
  else
  {
    if ( !v24 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v21,
                                                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_26;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      (System_Int64_array *)self,
      0,
      v19,
      v18,
      0);
  }
}


void CharaGraphListMenuBase__ToInputState(CharaGraphListMenuBase_o *this, bool changeMode, const MethodInfo *method)
{
  CharaGraphListViewManager_CallbackFunc_c *v5; // x0
  struct CharaGraphListViewManager_o *listViewManager; // x19
  CharaGraphListViewManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2

  if ( (byte_596FA84 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_CharaGraphListMenuBase_OnSelectServant__);
    byte_596FA84 = 1;
  }
  v5 = CharaGraphListViewManager_CallbackFunc_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v7 = (CharaGraphListViewManager_CallbackFunc_o *)sub_2213CCC(v5);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    v8);
  if ( changeMode )
  {
    if ( listViewManager )
    {
      listViewManager->fields.FuncOnClick = v7;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&listViewManager->fields.FuncOnClick,
        (int32_t)v7,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      listViewManager->fields.initMode = 2;
      ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0);
      CharaGraphListViewManager__RequestListObject(listViewManager, 2, v17);
      return;
    }
LABEL_8:
    sub_2213CDC(v9, v10);
  }
  if ( !listViewManager )
    goto LABEL_8;
  listViewManager->fields.FuncOnClick = v7;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&listViewManager->fields.FuncOnClick,
    (int32_t)v7,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___OnClickFilterKind_b__55_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( isDecide )
    CharaGraphListMenuBase__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___OnClickTabCommandCode_b__47_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 2, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void CharaGraphListMenuBase___OnClickTabServantEquip_b__46_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  EventTutorialMaster__CheckTutorial(-1, 54, 0, 0, 0, 0, 0, 0);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(v4, v5);
  CharaGraphListMenuBase__SetTabKind(this, 1, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___OnClickTabServant_b__45_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 0, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_72_1(
        CharaGraphListMenuBase_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v6; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, result);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v3);
  CharaGraphListMenuBase__ToInputState(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___OnSelectServantAtKindPush_g__OnCloseDialog_72_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !isDecide )
    CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_72_1(this, (System_String_o *)isDecide, method);
}


void CharaGraphListMenuBase__add_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CharaGraphListMenuBase_o *v13; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596FA68 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_596FA68 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackOnExit, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, CharaGraphListMenuBase_CallbackFunc_TypeInfo, v9, v10);
  CharaGraphListMenuBase__remove_CallbackOnExit(v13, v14, v15);
}


int32_t CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, method);
  return RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
}


CharaGraphDefine_CharaGraphRootInfo_o *CharaGraphListMenuBase__get_RootInfo(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


CharaGraphSortOwnerBase_o *CharaGraphListMenuBase__get_SortOwner(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortOwner_k__BackingField;
}


void CharaGraphListMenuBase__remove_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  CharaGraphListMenuBase_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596FA69 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_596FA69 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackOnExit, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, CharaGraphListMenuBase_CallbackFunc_TypeInfo, v9, v10);
  CharaGraphListMenuBase__get_ModeKind(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase__set_ModeKind(CharaGraphListMenuBase_o *this, int32_t value, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_2213CDC(this, *(_QWORD *)&value);
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = value;
}


void CharaGraphListMenuBase__set_SortOwner(
        CharaGraphListMenuBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SortOwner_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SortOwner_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListMenuBase_CallbackFunc___ctor(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200CF78;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200CF30;
}


System_IAsyncResult_o *CharaGraphListMenuBase_CallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_596FA8B & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_ResultKind_TypeInfo);
    byte_596FA8B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void CharaGraphListMenuBase_CallbackFunc__Invoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void CharaGraphListMenuBase_RequestCallbackFunc___ctor(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200CF14;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_200CECC;
}


System_IAsyncResult_o *CharaGraphListMenuBase_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isRequest,
    this->fields.method);
}


void CharaGraphListMenuBase___c__DisplayClass38_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___c__DisplayClass38_0___Exit_g__OnEnd_0(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListMenuBase_o *_4__this; // x0
  MissionNaviTransitionBoardItem_o *p_CallbackOnExit; // x0
  struct CharaGraphListMenuBase_CallbackFunc_o *v11; // x20
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, isRequest);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.CallbackOnExit;
  v11 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    p_CallbackOnExit->klass = 0;
    sub_2213A04(p_CallbackOnExit, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v11->fields.invoke_impl)(
      v11->fields.method_code,
      (unsigned int)this->fields.result,
      v11->fields.method);
  }
}


void CharaGraphListMenuBase___c__DisplayClass54_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListMenuBase___c__DisplayClass54_0___OnServantManageTabSelected_b__0(
        CharaGraphListMenuBase___c__DisplayClass54_0_o *this,
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
    sub_2213CDC(_4__this, isRequest);
  CharaGraphListMenuBase__SetTabKind(_4__this, _4__this->fields.tabKind, this->fields.modeKindToUpdate, 0, v3);
}


void CharaGraphListMenuBase___c__DisplayClass67_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListMenuBase___c__DisplayClass67_0___OnEndSelectServantStatus_b__0(
        CharaGraphListMenuBase___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ((void (__fastcall *)(struct CharaGraphListMenuBase_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._16_OnCloseServantStatusWithQuestId.methodPtr)(
    _4__this,
    (unsigned int)this->fields.questId,
    _4__this->klass->vtable._16_OnCloseServantStatusWithQuestId.method);
}


void CharaGraphListMenuBase___c__DisplayClass73_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListMenuBase___c__DisplayClass73_0___StatusRequest_g__EndStatusSync_0(
        CharaGraphListMenuBase___c__DisplayClass73_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_RequestCallbackFunc_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}