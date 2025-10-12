void CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  CharaGraphDefine_CharaGraphRootInfo_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C36C9A & 1) == 0 )
  {
    sub_1C32C20(&BaseMenu_TypeInfo);
    sub_1C32C20(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
    byte_4C36C9A = 1;
  }
  v3 = (CharaGraphDefine_CharaGraphRootInfo_o *)sub_1C32E6C(CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
  CharaGraphDefine_CharaGraphRootInfo___ctor(v3, 0);
  this->fields._RootInfo_k__BackingField = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._RootInfo_k__BackingField, (int32_t)v3, v4, v5);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
  bgTxtObject = this->fields.bgTxtObject;
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0);
  if ( !bgTxtObject )
    sub_1C32E7C(IsActiveBgTxt);
  UnityEngine_GameObject__SetActive(bgTxtObject, IsActiveBgTxt, 0);
}


void CharaGraphListMenuBase__CastItem(
        CharaGraphListViewItemBase_o *item,
        CharaGraphServantListViewItemBase_o **svtItem,
        CharaGraphCommandCodeListViewItem_o **commandCodeItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  CharaGraphListViewItemBase_o *v8; // x9
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  __int64 v12; // x10
  int32_t v13; // w1
  __int64 v14; // x10
  CharaGraphListViewItemBase_o *v15; // x8
  __int64 v16; // x10

  if ( (byte_4C36C99 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_1C32C20(&CharaGraphServantListViewItemBase_TypeInfo);
    byte_4C36C99 = 1;
  }
  if ( item )
  {
    naturalAligment = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CharaGraphServantListViewItemBase_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphServantListViewItemBase_TypeInfo )
        v8 = item;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    *svtItem = (CharaGraphServantListViewItemBase_o *)v8;
    v12 = CharaGraphServantListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v12 )
    {
      if ( (CharaGraphServantListViewItemBase_c *)item->klass->_2.typeHierarchy[v12 - 1] == CharaGraphServantListViewItemBase_TypeInfo )
        v13 = (int)item;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
    }
    sub_1C32BC4((CGThumbnailListItem_o *)svtItem, v13, (int32_t)commandCodeItem, method);
    v14 = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v14 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v14 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v15 = item;
      else
        v15 = 0;
    }
    else
    {
      v15 = 0;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v15;
    v16 = CharaGraphCommandCodeListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment >= (unsigned int)v16 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v16 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v11 = (int)item;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    *svtItem = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)svtItem, 0, (int32_t)commandCodeItem, method);
    v11 = 0;
    *commandCodeItem = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)commandCodeItem, v11, v9, v10);
}


void CharaGraphListMenuBase__Close(CharaGraphListMenuBase_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Action_o *v9; // x20

  if ( (byte_4C36C7C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase_EndClose__);
    byte_4C36C7C = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackOnClose, (int32_t)callback, (int32_t)method, v3);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 4;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(v6);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v7);
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0);
}


CharaGraphListViewPatternBase_o *CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  CharaGraphListViewPatternServant_c **v7; // x8
  __int64 v8; // x22
  const MethodInfo *v9; // x2
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CharaGraphSortOwnerBase_o *v13; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C36C7F & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListViewPatternCommandCode_TypeInfo);
    sub_1C32C20(&CharaGraphListViewPatternServantCollection_TypeInfo);
    sub_1C32C20(&CharaGraphListViewPatternServantEquip_TypeInfo);
    sub_1C32C20(&CharaGraphListViewPatternServant_TypeInfo);
    byte_4C36C7F = 1;
  }
  if ( (unsigned int)(kind - 1) > 2 )
    v7 = &CharaGraphListViewPatternServant_TypeInfo;
  else
    v7 = (CharaGraphListViewPatternServant_c **)off_46601D8[kind - 1];
  v8 = sub_1C32E6C(*v7);
  System_Object___ctor((Il2CppObject *)v8, 0);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(SortOwner_k__BackingField, kind, v9), !v8) )
  {
    sub_1C32E7C(SortOwner_k__BackingField);
  }
  v13 = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v8 + 16) = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), (int32_t)v13, v11, v12);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v8 + 24) = RootInfo_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 24), (int32_t)RootInfo_k__BackingField, v15, v16);
  *(_QWORD *)(v8 + 32) = setupInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 32), (int32_t)setupInfo, v17, v18);
  return (CharaGraphListViewPatternBase_o *)v8;
}


int32_t CharaGraphListMenuBase__DisplayPushButton(
        CharaGraphListMenuBase_o *this,
        bool value,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x23
  const MethodInfo *v10; // x3
  CharaGraphManageButtonGroup_o *v12; // x0

  v7 = value;
  if ( (byte_4C36C95 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C95 = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0, 0) )
    return iModeKind;
  v12 = this->fields.charaGraphManageButtonGroup;
  if ( !v12 )
    sub_1C32E7C(0);
  CharaGraphManageButtonGroup__SetPushButtonActive(v12, v7, isInit, v10);
  if ( iModeKind == 4 && !v7 )
    return 0;
  else
    return iModeKind;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_callbackOnClose; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *callbackOnClose; // t1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_Init.methodPtr)(
    this,
    0,
    this->klass->vtable._5_Init.method);
  callbackOnClose = this->fields.callbackOnClose;
  p_callbackOnClose = (CGThumbnailListItem_o *)&this->fields.callbackOnClose;
  v6 = callbackOnClose;
  if ( callbackOnClose )
  {
    p_callbackOnClose->klass = 0;
    sub_1C32BC4(p_callbackOnClose, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void CharaGraphListMenuBase__EndOpen(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 2;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(this);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C36C7D & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__);
    sub_1C32C20(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
    byte_4C36C7D = 1;
  }
  v5 = sub_1C32E6C(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = result;
  v9 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    v10);
  CharaGraphListMenuBase__StatusRequest(this, v9, v11);
}


System_String_o *CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C36C82 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    byte_4C36C82 = 1;
  }
  return (System_String_o *)StringLiteral_11658/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
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
    sub_1C32E7C(listViewManager);
  }
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


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
    sub_1C32E7C(listViewManager);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void CharaGraphListMenuBase__OnClickBonusFilterKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_4C36C8C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_4C36C8C = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  const MethodInfo *v6; // x2

  if ( (byte_4C36C89 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__55_0__);
    byte_4C36C89 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v4 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(v4, (Il2CppObject *)this, Method_CharaGraphListMenuBase__OnClickFilterKind_b__55_0__, 0);
    if ( !listViewManager )
      sub_1C32E7C(v5);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v4, v6);
  }
}


void CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  const MethodInfo *v8; // x1
  CharaGraphManageButtonGroup_o *v9; // x19
  const MethodInfo *v10; // x2

  if ( (byte_4C36C87 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C87 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v5);
      charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0, 0) )
        return;
      listViewManager = this->fields.listViewManager;
      if ( listViewManager )
      {
        v9 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v8);
        if ( v9 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v9, (System_String_o *)listViewManager, v10);
          return;
        }
      }
    }
    sub_1C32E7C(listViewManager);
  }
}


void CharaGraphListMenuBase__OnClickSortAscendingOrder(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_4C36C8B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4C36C8B = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0);
}


void CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_4C36C8A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListViewManager_OnClickSortKind__);
    byte_4C36C8A = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  if ( (byte_4C36C86 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTab__);
    byte_4C36C86 = 1;
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
      v8 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_1C32E7C(this);
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

  if ( (byte_4C36C85 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__47_0__);
    sub_1C32C20(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_4C36C85 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C36C83 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnClickTabServant_b__45_0__);
    sub_1C32C20(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_4C36C83 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
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

  if ( (byte_4C36C84 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__46_0__);
    sub_1C32C20(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_4C36C84 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
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
    sub_1C32E7C(0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v14; // x2
  int v15; // w21
  Il2CppObject *Instance; // x20
  System_Action_o *v17; // x0
  bool v18; // cc
  System_Action_o *v19; // x21
  Il2CppObject *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_4C36C8F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_CharaGraphListMenuBase___c__DisplayClass67_0__OnEndSelectServantStatus_b__0__);
    sub_1C32C20(&CharaGraphListMenuBase___c__DisplayClass67_0_TypeInfo);
    byte_4C36C8F = 1;
  }
  v9 = sub_1C32E6C(CharaGraphListMenuBase___c__DisplayClass67_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v9 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v14);
  v15 = *(_DWORD *)(v9 + 24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  v18 = v15 < 1;
  v19 = v17;
  if ( v18 )
  {
    v20 = (Il2CppObject *)this;
    v21 = this->klass->vtable._17_OnCloseServantStatusWithoutQuestId.method;
  }
  else
  {
    v20 = (Il2CppObject *)v9;
    v21 = (const MethodInfo *)Method_CharaGraphListMenuBase___c__DisplayClass67_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v17, v20, (intptr_t)v21, 0);
  if ( !Instance )
LABEL_13:
    sub_1C32E7C(scrollView);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0);
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
    sub_1C32E7C(this);
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
      sub_1C32E7C(0);
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
  const MethodInfo *v8; // x2

  if ( (byte_4C36C91 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
    byte_4C36C91 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !item )
    sub_1C32E7C(v7);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v8);
}


void CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C36C90 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
    byte_4C36C90 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0);
  if ( !item )
    sub_1C32E7C(v7);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v8);
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
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v10; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x3
  CharaGraphCommandCodeListViewItem_o *v13; // [xsp+0h] [xbp-40h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C36C92 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_bool__TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_72_1__);
    sub_1C32C20(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_72_0__);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C36C92 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  v13 = 0;
  svtItem = 0;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v13, v7);
  if ( !svtItem )
    sub_1C32E7C(v8);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v10 = (System_Action_bool__o *)sub_1C32E6C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_72_0__,
    0);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_72_1__,
    0);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v10, v11, v12);
}


void CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t tabKind; // w8
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  CommonUI_o *v11; // x20
  ServantStatusDialog_EndDelegate_o *v12; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  CommonUI_o *v14; // x20
  ServantStatusDialog_ResultDelegate_o *v15; // x22
  UserServantEntity_o *v16; // x21
  CommonUI_o *v17; // x20
  ServantStatusDialog_EndDelegate_o *v18; // x22
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C36C8E & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&ServantStatusDialog_ResultDelegate_TypeInfo);
    this = (CharaGraphListMenuBase_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C36C8E = 1;
  }
  svtItem = 0;
  commandCodeItem = 0;
  if ( v4->fields.tabKind == 3 )
  {
    CharaGraphListMenuBase__ToInputState(v4, 0, method);
    return;
  }
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager || (this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView) == 0 )
LABEL_22:
    sub_1C32E7C(this);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &commandCodeItem, v6);
  v7 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  tabKind = v4->fields.tabKind;
  v4->fields.state = 6;
  switch ( tabKind )
  {
    case 0:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
        v14 = (CommonUI_o *)this;
        v15 = (ServantStatusDialog_ResultDelegate_o *)sub_1C32E6C(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v15,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._15_OnEndSelectServantStatus.method,
          0);
        if ( v14 )
        {
          CommonUI__OpenServantStatusDialog_31201624(v14, 0, UserServantEntity_k__BackingField, v15, 0, 0, 0);
          return;
        }
      }
      goto LABEL_22;
    case 1:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        v16 = svtItem->fields._UserServantEntity_k__BackingField;
        v17 = (CommonUI_o *)this;
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._13_OnEndSelectServantEquipStatus.method,
          0);
        if ( v17 )
        {
          CommonUI__OpenServantStatusDialog_31201148(v17, 0, v16, v18, 0);
          return;
        }
      }
      goto LABEL_22;
    case 2:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( commandCodeItem )
      {
        UserCommandCodeEntity_k__BackingField = commandCodeItem->fields._UserCommandCodeEntity_k__BackingField;
        v11 = (CommonUI_o *)this;
        v12 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v12,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._14_OnEndSelectCommandCodeStatus.method,
          0);
        if ( v11 )
        {
          CommonUI__OpenServantStatusDialog_31203372(v11, 0, UserCommandCodeEntity_k__BackingField, v12, 0, 0);
          return;
        }
      }
      goto LABEL_22;
  }
}


void CharaGraphListMenuBase__OnSelectServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  void (__fastcall *methodPtr)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *); // x3

  v4 = this;
  if ( (byte_4C36C8D & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    byte_4C36C8D = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v6 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
    CharaGraphListMenuBase__ToInputState(v4, 0, v8);
    return;
  }
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_1C32E7C(this);
  switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
  {
    case 0:
      if ( (((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))item->klass->vtable._7_get_IsCanNotSelect.methodPtr)(
              item,
              item->klass->vtable._7_get_IsCanNotSelect.method,
              method)
          & 1) != 0 )
        goto LABEL_8;
      methodPtr = (void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v4->klass->vtable._11_OnSelectServantAtKindMain.methodPtr;
      v9 = v4->klass->vtable._11_OnSelectServantAtKindMain.method;
      goto LABEL_16;
    case 1:
      methodPtr = (void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, const MethodInfo *))v4->klass->vtable._12_OnSelectServantAtKindStatus.methodPtr;
      v9 = v4->klass->vtable._12_OnSelectServantAtKindStatus.method;
LABEL_16:
      methodPtr(v4, item, v9);
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


void CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4C36C88 & 1) == 0 )
  {
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    sub_1C32C20(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase___c__DisplayClass54_0__OnServantManageTabSelected_b__0__);
    sub_1C32C20(&CharaGraphListMenuBase___c__DisplayClass54_0_TypeInfo);
    byte_4C36C88 = 1;
  }
  v5 = sub_1C32E6C(CharaGraphListMenuBase___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_1C32E7C(v6);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v10 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1C32C38(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v11 = (System_Reflection_MethodBase_o *)sub_1C32C04(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
    if ( *(_DWORD *)(v5 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0, 0, 0, 0, 0, 0);
    v12 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_CharaGraphListMenuBase___c__DisplayClass54_0__OnServantManageTabSelected_b__0__,
      v13);
    CharaGraphListMenuBase__StatusRequest(this, v12, v14);
  }
}


void CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  CharaGraphSortOwnerAllKind_o *v5; // x22
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v17; // x8
  System_Action_o *v18; // x20

  if ( (byte_4C36C7A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase_EndOpen__);
    sub_1C32C20(&CharaGraphSortOwnerNoSave_TypeInfo);
    byte_4C36C7A = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v5 = (CharaGraphSortOwnerAllKind_o *)sub_1C32E6C(CharaGraphSortOwnerNoSave_TypeInfo);
    CharaGraphSortOwnerAllKind___ctor(v5, v6);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SortOwner_k__BackingField, (int32_t)v5, v7, v8);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.methodPtr)(
    this,
    this->klass->vtable._6_SetupButtonCallback.method,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.CallbackOnExit, (int32_t)callback, v9, v10);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v13);
      CharaGraphListMenuBase__EndOpen(this, v15);
      return;
    }
LABEL_13:
    sub_1C32E7C(gameObject);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.CallbackOnExit, (int32_t)callback, v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v17 = this->fields._RootInfo_k__BackingField;
    if ( !v17 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v17->fields._ModeKind_k__BackingField, 1, v16);
    this->fields.state = 1;
    v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0);
    BaseMenu__Open((BaseMenu_o *)this, v18, 0);
  }
}


void CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  const MethodInfo *v5; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4C36C97 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C97 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0 )
      sub_1C32E7C(v4);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v4, listViewManager->fields.sort, v5);
  }
}


void CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  const MethodInfo *v5; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4C36C98 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C98 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0 )
      sub_1C32E7C(v4);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v4,
      listViewManager->fields.sort,
      listViewManager->fields._AlignedBonusFilterInfos_k__BackingField,
      v5);
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
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  int32_t tabKind; // w22
  struct CharaGraphDefine_CharaGraphRootInfo_o *v13; // x8
  int32_t ModeKind_k__BackingField; // w9
  bool v15; // w24
  bool v16; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v19; // x21
  EventUpValSetupInfo_o *v20; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v22; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v26; // x8
  struct CharaGraphListViewManager_o *v27; // x20
  const MethodInfo *v28; // x2
  ListViewManager_o *v29; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *v31; // x20
  const MethodInfo *v32; // x1
  CharaGraphManageButtonGroup_o *v33; // x19
  const MethodInfo *v34; // x2

  if ( (byte_4C36C80 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&EventUpValSetupInfo_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C80 = 1;
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
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 1, v11);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_38;
    v15 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_object;
    v16 = 1;
    goto LABEL_14;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind != iTabKind )
  {
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 0, v11);
    iModeKind = (int)Master_object;
  }
  v13 = this->fields._RootInfo_k__BackingField;
  if ( !v13 )
    goto LABEL_38;
  ModeKind_k__BackingField = v13->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v13->fields._ModeKind_k__BackingField = iModeKind;
  v15 = iModeKind == ModeKind_k__BackingField;
  if ( tabKind == iTabKind )
  {
    if ( iModeKind == ModeKind_k__BackingField )
      goto LABEL_26;
    v16 = 0;
    goto LABEL_19;
  }
  v16 = 0;
LABEL_14:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_38;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0, 0);
  v19 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v20 = (EventUpValSetupInfo_o *)sub_1C32E6C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41638188(v20, v19, 0, 0, 0, 0);
  listViewManager = this->fields.listViewManager;
  Master_object = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, const MethodInfo *))this->klass->vtable._7_CreateListViewPattern.methodPtr)(
                                     this,
                                     (unsigned int)this->fields.tabKind,
                                     v20,
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
  CharaGraphListMenuBase__SetupSortUi(this, v22);
  if ( !v15 )
  {
LABEL_19:
    charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (EventMaster_o *)UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v26 = this->fields._RootInfo_k__BackingField;
      if ( !v26 )
        goto LABEL_38;
      Master_object = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
      if ( !Master_object )
        goto LABEL_38;
      CharaGraphManageButtonGroup__UpdateDisplay(
        (CharaGraphManageButtonGroup_o *)Master_object,
        v26->fields._ModeKind_k__BackingField,
        v16,
        v25);
    }
    CharaGraphListMenuBase__SetupExplanationLabel(this, v24);
  }
LABEL_26:
  v27 = this->fields.listViewManager;
  if ( !v27 )
    goto LABEL_38;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v10);
    CharaGraphListMenuBase__ToInputState(this, 1, v28);
  }
  else
  {
    v29 = (ListViewManager_o *)this->fields.listViewManager;
    v27->fields.initMode = 1;
    ListViewManager__set_IsInput(v29, 0, 0);
    CharaGraphListViewManager__RequestListObject(v27, 1, v30);
  }
  v31 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    Master_object = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_object )
    {
      v33 = this->fields.charaGraphManageButtonGroup;
      Master_object = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                         (CharaGraphListViewManager_o *)Master_object,
                                         v32);
      if ( v33 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v33, (System_String_o *)Master_object, v34);
        return;
      }
    }
LABEL_38:
    sub_1C32E7C(Master_object);
  }
}


void CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  struct CharaGraphKindTabButtonGroup_o *v9; // x20
  System_Action_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct CharaGraphKindTabButtonGroup_o *v13; // x20
  System_Action_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *v17; // x20
  System_Action_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  struct CharaGraphManageButtonGroup_o *v22; // x20
  System_Action_o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct CharaGraphManageButtonGroup_o *v26; // x20
  System_Action_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct CharaGraphManageButtonGroup_o *v30; // x20
  System_Action_o *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct CharaGraphManageButtonGroup_o *v34; // x20
  System_Action_o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CGThumbnailListItem_o *v38; // x20
  System_Action_o *v39; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  struct CharaGraphSortButtonGroup_o *v43; // x20
  System_Action_o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct CharaGraphSortButtonGroup_o *v47; // x20
  System_Action_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct CharaGraphSortButtonGroup_o *v51; // x20
  System_Action_o *v52; // x21
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct CharaGraphSortButtonGroup_o *v55; // x20
  System_Action_o *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3

  if ( (byte_4C36C7B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickFilterKind__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickSortKind__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabChoice__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabLock__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabMain__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabPush__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnClickTabServant__);
    sub_1C32C20(&Method_CharaGraphListMenuBase_SetSortButtonImage__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C7B = 1;
  }
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0);
  if ( !listViewManager )
    goto LABEL_29;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v4;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (int32_t)v4,
    v6,
    v7);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0, 0) )
  {
    v9 = this->fields.charaGraphKindTabButtonGroup;
    v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0);
    if ( !v9 )
      goto LABEL_29;
    v9->fields._OnClickTabServant_k__BackingField = v10;
    sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields._OnClickTabServant_k__BackingField, (int32_t)v10, v11, v12);
    v13 = this->fields.charaGraphKindTabButtonGroup;
    v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0);
    if ( !v13 )
      goto LABEL_29;
    v13->fields._OnClickTabServantEquip_k__BackingField = v14;
    sub_1C32BC4((CGThumbnailListItem_o *)&v13->fields._OnClickTabServantEquip_k__BackingField, (int32_t)v14, v15, v16);
    v17 = (CGThumbnailListItem_o *)this->fields.charaGraphKindTabButtonGroup;
    v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0);
    if ( !v17 )
      goto LABEL_29;
    v17[1].klass = (CGThumbnailListItem_c *)v18;
    sub_1C32BC4(v17 + 1, (int32_t)v18, v19, v20);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0, 0) )
  {
    v22 = this->fields.charaGraphManageButtonGroup;
    v23 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0);
    if ( !v22 )
      goto LABEL_29;
    v22->fields._OnClickTabMain_k__BackingField = v23;
    sub_1C32BC4((CGThumbnailListItem_o *)&v22->fields._OnClickTabMain_k__BackingField, (int32_t)v23, v24, v25);
    v26 = this->fields.charaGraphManageButtonGroup;
    v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0);
    if ( !v26 )
      goto LABEL_29;
    v26->fields._OnClickTabLock_k__BackingField = v27;
    sub_1C32BC4((CGThumbnailListItem_o *)&v26->fields._OnClickTabLock_k__BackingField, (int32_t)v27, v28, v29);
    v30 = this->fields.charaGraphManageButtonGroup;
    v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0);
    if ( !v30 )
      goto LABEL_29;
    v30->fields._OnClickTabChoice_k__BackingField = v31;
    sub_1C32BC4((CGThumbnailListItem_o *)&v30->fields._OnClickTabChoice_k__BackingField, (int32_t)v31, v32, v33);
    v34 = this->fields.charaGraphManageButtonGroup;
    v35 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0);
    if ( !v34 )
      goto LABEL_29;
    v34->fields._OnClickTabPush_k__BackingField = v35;
    sub_1C32BC4((CGThumbnailListItem_o *)&v34->fields._OnClickTabPush_k__BackingField, (int32_t)v35, v36, v37);
    v38 = (CGThumbnailListItem_o *)this->fields.charaGraphManageButtonGroup;
    v39 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0);
    if ( !v38 )
      goto LABEL_29;
    v38[1].klass = (CGThumbnailListItem_c *)v39;
    sub_1C32BC4(v38 + 1, (int32_t)v39, v40, v41);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0, 0) )
  {
    v43 = this->fields.charaGraphSortButtonGroup;
    v44 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0);
    if ( v43 )
    {
      v43->fields._OnClickFilterKind_k__BackingField = v44;
      sub_1C32BC4((CGThumbnailListItem_o *)&v43->fields._OnClickFilterKind_k__BackingField, (int32_t)v44, v45, v46);
      v47 = this->fields.charaGraphSortButtonGroup;
      v48 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v48, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0);
      if ( v47 )
      {
        v47->fields._OnClickSortKind_k__BackingField = v48;
        sub_1C32BC4((CGThumbnailListItem_o *)&v47->fields._OnClickSortKind_k__BackingField, (int32_t)v48, v49, v50);
        v51 = this->fields.charaGraphSortButtonGroup;
        v52 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v52, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0);
        if ( v51 )
        {
          v51->fields._OnClickSortAscendingOrder_k__BackingField = v52;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&v51->fields._OnClickSortAscendingOrder_k__BackingField,
            (int32_t)v52,
            v53,
            v54);
          v55 = this->fields.charaGraphSortButtonGroup;
          v56 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v56, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0);
          if ( v55 )
          {
            v55->fields._OnClickBonusFilterKind_k__BackingField = v56;
            sub_1C32BC4(
              (CGThumbnailListItem_o *)&v55->fields._OnClickBonusFilterKind_k__BackingField,
              (int32_t)v56,
              v57,
              v58);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_1C32E7C(v5);
  }
}


void CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v4; // x0
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v6; // x20
  __int64 *v7; // x8
  UILabel_o *v8; // x19

  if ( (byte_4C36C81 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_1C32C20(&StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_1C32C20(&StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    byte_4C36C81 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_18:
      sub_1C32E7C(v4);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v6 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, const MethodInfo *))this->klass->vtable._9_GetLocalizationKeyForModeKindMain.methodPtr)(
                                  this,
                                  this->klass->vtable._9_GetLocalizationKeyForModeKindMain.method);
        if ( !v6 )
          return;
        goto LABEL_14;
      case 2:
        v7 = &StringLiteral_11656/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_13;
      case 3:
        v7 = &StringLiteral_11655/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_13;
      case 4:
        v7 = &StringLiteral_11657/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_13:
        v6 = (System_String_o *)*v7;
        if ( !*v7 )
          return;
LABEL_14:
        v8 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v4 = LocalizationManager__Get(v6, 0);
        if ( !v8 )
          goto LABEL_18;
        UILabel__set_text(v8, v4, 0);
        break;
      default:
        return;
    }
  }
}


void CharaGraphListMenuBase__SetupServantKindTabButtonGroup(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x22
  const MethodInfo *v8; // x2
  CharaGraphKindTabButtonGroup_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4C36C7E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C7E = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0, 0) )
  {
    v9 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v9
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v9, iTabKind, v8),
          (v9 = this->fields.charaGraphKindTabButtonGroup) == 0) )
    {
      sub_1C32E7C(v9);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v9, iTabKind, isInit, v10);
  }
}


void CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  CharaGraphSortButtonGroup_o *v6; // x0
  const MethodInfo *v7; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4C36C96 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C36C96 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0, 0) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v4);
    v6 = this->fields.charaGraphSortButtonGroup;
    if ( !v6
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v6, 0, 1, v5),
          (listViewManager = this->fields.listViewManager) == 0)
      || (v6 = this->fields.charaGraphSortButtonGroup) == 0 )
    {
      sub_1C32E7C(v6);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v6, listViewManager->fields.sort, v7);
  }
}


void CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  CharaGraphListViewManager_o *listViewManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x23
  const MethodInfo *v10; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v13; // w21
  bool v14; // w22
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v16; // x19
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C36C93 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_1C32C20(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase___c__DisplayClass73_0__StatusRequest_g__EndStatusSync_0__);
    sub_1C32C20(&CharaGraphListMenuBase___c__DisplayClass73_0_TypeInfo);
    byte_4C36C93 = 1;
  }
  v5 = sub_1C32E6C(CharaGraphListMenuBase___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_24;
  *(_QWORD *)(v5 + 16) = callback;
  v9 = v5 + 16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  lockArray = 0;
  unlockArray = 0;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_24;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField == 3 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v10);
    v14 = 0;
    v13 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v10);
    v13 = 0;
    v14 = 1;
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0) )
  {
    listViewManager = (CharaGraphListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                       (System_Collections_ICollection_o *)unlockArray,
                                                       0);
    if ( ((unsigned __int8)listViewManager & 1) != 0 )
    {
      if ( *(_QWORD *)v9 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v9 + 64LL),
          0,
          *(_QWORD *)(*(_QWORD *)v9 + 40LL));
        return;
      }
LABEL_24:
      sub_1C32E7C(listViewManager);
    }
  }
  tabKind = this->fields.tabKind;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)v5,
    Method_CharaGraphListMenuBase___c__DisplayClass73_0__StatusRequest_g__EndStatusSync_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( tabKind == 2 )
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v16,
                                                       (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v14,
      v13,
      0);
  }
  else
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v16,
                                                       (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v14,
      v13,
      0);
  }
}


void CharaGraphListMenuBase__ToInputState(CharaGraphListMenuBase_o *this, bool changeMode, const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *listViewManager; // x20
  CharaGraphListViewManager_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C36C94 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_CharaGraphListMenuBase_OnSelectServant__);
    byte_4C36C94 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v6 = (CharaGraphListViewManager_CallbackFunc_o *)sub_1C32E6C(CharaGraphListViewManager_CallbackFunc_TypeInfo);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    v7);
  if ( !listViewManager )
    sub_1C32E7C(v8);
  listViewManager->fields.FuncOnClick = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&listViewManager->fields.FuncOnClick, (int32_t)v6, v9, v10);
  if ( changeMode )
  {
    listViewManager->fields.initMode = 2;
    ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0);
    CharaGraphListViewManager__RequestListObject(listViewManager, 2, v11);
  }
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


void CharaGraphListMenuBase___OnClickTabCommandCode_b__47_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(this);
  CharaGraphListMenuBase__SetTabKind(this, 2, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void CharaGraphListMenuBase___OnClickTabServantEquip_b__46_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x0
  const MethodInfo *v5; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  EventTutorialMaster__CheckTutorial(-1, 54, 0, 0, 0, 0, 0, 0);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(v4);
  CharaGraphListMenuBase__SetTabKind(this, 1, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v5);
}


void CharaGraphListMenuBase___OnClickTabServant_b__45_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
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
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C36C78 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_4C36C78 = 1;
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
    v9 = sub_1C6CE78(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  CharaGraphListMenuBase__remove_CallbackOnExit(v11, v12, v13);
}


int32_t CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(this);
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
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C36C79 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_4C36C79 = 1;
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
    v9 = sub_1C6CE78(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  CharaGraphListMenuBase__get_ModeKind(v11, v12);
}


void CharaGraphListMenuBase__set_ModeKind(CharaGraphListMenuBase_o *this, int32_t value, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C32E7C(this);
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = value;
}


void CharaGraphListMenuBase__set_SortOwner(
        CharaGraphListMenuBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SortOwner_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SortOwner_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void CharaGraphListMenuBase_CallbackFunc___ctor(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A77440;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A773F8;
}


System_IAsyncResult_o *CharaGraphListMenuBase_CallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C36C9C & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListMenuBase_ResultKind_TypeInfo);
    byte_4C36C9C = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A773DC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1A77394;
}


System_IAsyncResult_o *CharaGraphListMenuBase_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isRequest;
  if ( (byte_4C36C9B & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C36C9B = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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


void CharaGraphListMenuBase___c__DisplayClass38_0___Exit_g__OnEnd_0(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CharaGraphListMenuBase_o *_4__this; // x0
  CGThumbnailListItem_o *p_CallbackOnExit; // x0
  struct CharaGraphListMenuBase_CallbackFunc_o *v7; // x20
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = (CGThumbnailListItem_o *)&_4__this->fields.CallbackOnExit;
  v7 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    p_CallbackOnExit->klass = 0;
    sub_1C32BC4(p_CallbackOnExit, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v7->fields.invoke_impl)(
      v7->fields.method_code,
      (unsigned int)this->fields.result,
      v7->fields.method);
  }
}


void CharaGraphListMenuBase___c__DisplayClass54_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


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
    sub_1C32E7C(_4__this);
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
    sub_1C32E7C(0);
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