void RecommendSupportMessageSelectDialog___ctor(RecommendSupportMessageSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UILabel_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UISprite_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2

  if ( (byte_596C48E & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&UILabel___TypeInfo);
    sub_2213A60(&UISprite___TypeInfo);
    byte_596C48E = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UILabel_array *)sub_2213B20(
                                 UILabel___TypeInfo,
                                 (unsigned int)v4->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageLabel = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bodyMessageLabel, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct UISprite_array *)sub_2213B20(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageHighlight = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bodyMessageHighlight,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v19, v20);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommendSupportMessageSelectDialog__Awake(RecommendSupportMessageSelectDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


bool RecommendSupportMessageSelectDialog__CheckSelectMessageNum(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportMessageSelectDialog___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__34_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  BalanceConfig_c *v19; // x8
  int32_t v20; // w19

  if ( (byte_596C486 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_int____91751104);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_596C486 = 1;
  }
  v4 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !*(&RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, method, v2);
    v4 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__34_0 = static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__34_0,
      v8,
      Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__,
      0);
    v9 = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    v9->__9__34_0 = _9__34_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__34_0, (int32_t)_9__34_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Count_int__59221488(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__34_0,
          (const MethodInfo_387A5F0 *)Method_System_Linq_Enumerable_Count_int____91751104);
  v19 = BalanceConfig_TypeInfo;
  v20 = v16;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17, v18);
    v19 = BalanceConfig_TypeInfo;
  }
  return v20 >= v19->static_fields->RecommendSupportAdviceMessageMax;
}


void RecommendSupportMessageSelectDialog__Close(
        RecommendSupportMessageSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t category; // w1
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_596C484 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo);
    byte_596C484 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  category = this->fields.category;
  this->fields.state = 4;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v21);
  v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0);
}


void RecommendSupportMessageSelectDialog__EndOpen(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t category; // w1

  category = this->fields.category;
  this->fields.state = 2;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v2);
}


RecommendSupportMessageSelectListViewManager_o *RecommendSupportMessageSelectDialog__GetManager(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewManager;
}


void RecommendSupportMessageSelectDialog__Init(RecommendSupportMessageSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x0
  struct System_Int32_array *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596C482 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    byte_596C482 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
    sub_2213CDC(gameObject, v4);
  }
  ListViewManager__DestroyList((ListViewManager_o *)gameObject, 0);
  v7 = BalanceConfig_TypeInfo;
  this->fields.state = 0;
  this->fields.category = 0;
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, v5, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct System_Int32_array *)sub_2213B20(
                                      int___TypeInfo,
                                      (unsigned int)v7->static_fields->RecommendSupportAdviceMessageMax);
  this->fields._SelectMessageIds_k__BackingField = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectDialog__ModifyList(
        RecommendSupportMessageSelectDialog_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  bool v7; // w21
  RecommendSupportMessageSelectListViewManager_o *listViewManager; // x0
  struct RecommendSupportMessageSelectListViewManager_o *v9; // x19
  const MethodInfo *v10; // x2

  v7 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, (const MethodInfo *)isNeedSort);
  if ( !byte_596C542 )
  {
    sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_596C542 = 1;
  }
  listViewManager = this->fields.listViewManager;
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v7;
  if ( !listViewManager
    || (RecommendSupportMessageSelectListViewManager__ModifyList(listViewManager, isNeedSort, v6),
        (v9 = this->fields.listViewManager) == 0) )
  {
    sub_2213CDC(listViewManager, v5);
  }
  v9->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v9, 0, 0);
  RecommendSupportMessageSelectListViewManager__RequestListObject(v9, 3, v10);
}


void RecommendSupportMessageSelectDialog__OnClickCancel(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  RecommendSupportMessageSelectDialog___c_c *v7; // x0
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596C488 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_596C488 = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  if ( !*(&RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, v5, v6);
    v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__36_0 = static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__36_0, v10, Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, 0);
    v11 = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    v11->__9__36_0 = _9__36_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__36_0, (int32_t)_9__36_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !this )
    sub_2213CDC(v7, v5);
  RecommendSupportMessageSelectDialog__Close(this, _9__36_0, v6);
}


void RecommendSupportMessageSelectDialog__OnClickDecide(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_596C487 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__);
    byte_596C487 = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__, 0);
  RecommendSupportMessageSelectDialog__Close(this, v5, v6);
}


void RecommendSupportMessageSelectDialog__OnClickFilter(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 category; // x8
  int32_t v7; // w1
  __int64 v8; // x1
  ListViewManager_o *listViewManager; // x0

  if ( (byte_596C48B & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
    byte_596C48B = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickFilter__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  category = (unsigned int)this->fields.category;
  v7 = 0;
  if ( (unsigned int)category <= 4 )
    v7 = dword_ED8FC0[category];
  RecommendSupportMessageSelectDialog__SetCategory(this, v7, 0, v5);
  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_2213CDC(0, v8);
  ListViewManager__CheckScroll(listViewManager, 0, 0);
}


void RecommendSupportMessageSelectDialog__OnClickReset(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  __int64 i; // x22
  UILabel_o *gameObject; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  char *v10; // x9
  struct UILabel_array *bodyMessageLabel; // x8
  struct UISprite_array *bodyMessageHighlight; // x8
  struct UISprite_array *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  RecommendSupportMessageSelectDialog___c_c *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__37_0; // x21
  Il2CppObject *v20; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2

  if ( (byte_596C489 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnClickReset__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C489 = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickReset__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  for ( i = 0; ; ++i )
  {
    gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
      gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    }
    if ( (int)i >= SLODWORD(gameObject->fields.onChange[1].fields.method_code) )
      break;
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( !SelectMessageIds_k__BackingField )
      goto LABEL_32;
    if ( (unsigned int)i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
      goto LABEL_33;
    v10 = (char *)SelectMessageIds_k__BackingField + 4 * i;
    bodyMessageLabel = this->fields.bodyMessageLabel;
    *((_DWORD *)v10 + 8) = -1;
    if ( !bodyMessageLabel )
      goto LABEL_32;
    if ( (unsigned int)i >= LODWORD(bodyMessageLabel->max_length) )
      goto LABEL_33;
    gameObject = bodyMessageLabel->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    bodyMessageHighlight = this->fields.bodyMessageHighlight;
    if ( !bodyMessageHighlight )
      goto LABEL_32;
    if ( (unsigned int)i >= LODWORD(bodyMessageHighlight->max_length) )
      goto LABEL_33;
    gameObject = (UILabel_o *)bodyMessageHighlight->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v13 = this->fields.bodyMessageHighlight;
  this->fields.cursorPos = 0;
  if ( !v13 )
    goto LABEL_32;
  if ( !LODWORD(v13->max_length) )
LABEL_33:
    sub_2213CE4(gameObject);
  gameObject = (UILabel_o *)v13->m_Items[0];
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v16 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !*(&RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, v14, v15);
    v16 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__37_0,
      v20,
      Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__,
      0);
    v21 = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    v21->__9__37_0 = _9__37_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__37_0, (int32_t)_9__37_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          v17,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  decideButton = this->fields.decideButton;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  gameObject = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject
    || (SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)gameObject,
                                                                                  v5),
        gameObject = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    SelectMessageIds,
                                    v31,
                                    (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___),
        !decideButton) )
  {
LABEL_32:
    sub_2213CDC(gameObject, v5);
  }
  UICommonButton__SetEnable(decideButton, ((unsigned __int8)gameObject & 1) == 0, 0);
  RecommendSupportMessageSelectDialog__ModifyList(this, 0, v33);
  RecommendSupportMessageSelectDialog__ToInputState(this, 1, v34);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectDialog__OnSelect(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t iKind,
        int32_t index,
        const MethodInfo *method)
{
  UILabel_o *listViewManager; // x0
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  RecommendSupportMessageSelectListViewItem_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x2
  unsigned __int64 v12; // x21
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  char *v15; // x8
  struct UILabel_array *bodyMessageLabel; // x9
  bool v17; // w21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  struct System_Int32_array *v20; // x8
  __int64 cursorPos; // x9
  char *v22; // x9
  int32_t *v23; // x9
  int v24; // t1
  struct RecommendAdviceMessageEntity_o *v25; // x8
  struct UILabel_array *v26; // x10
  __int64 v27; // x9
  int32_t v28; // w0
  int32_t v29; // w8
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  __int64 v32; // x2
  bool v33; // w20
  unsigned int i; // w22
  struct UISprite_array *bodyMessageHighlight; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  RecommendSupportMessageSelectDialog___c_c *v37; // x0
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__38_0; // x21
  Il2CppObject *v40; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v52; // x2

  if ( (byte_596C48A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnSelect__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C48A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( index < 0 )
      goto LABEL_24;
    listViewManager = (UILabel_o *)this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_67;
    Item = RecommendSupportMessageSelectListViewManager__GetItem(
             (RecommendSupportMessageSelectListViewManager_o *)listViewManager,
             index,
             *(const MethodInfo **)&index);
    if ( !Item )
    {
LABEL_24:
      v17 = 0;
LABEL_66:
      RecommendSupportMessageSelectDialog__ToInputState(this, v17, *(const MethodInfo **)&index);
      return;
    }
    v8 = Item;
    if ( Item->fields._IsUse_k__BackingField )
    {
      v9 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      v12 = 0;
      listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
      while ( 1 )
      {
        if ( !HIDWORD(listViewManager->fields.hitCheck) )
        {
          j_il2cpp_runtime_class_init_0(listViewManager, *(_QWORD *)&iKind, v11);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)v12 >= SLODWORD(listViewManager->fields.onChange[1].fields.method_code) )
          break;
        SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
        if ( !SelectMessageIds_k__BackingField )
          goto LABEL_67;
        if ( v12 >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
          goto LABEL_68;
        RecommendAdviceMessageEntity_k__BackingField = v8->fields._RecommendAdviceMessageEntity_k__BackingField;
        if ( !RecommendAdviceMessageEntity_k__BackingField )
          goto LABEL_67;
        v15 = (char *)SelectMessageIds_k__BackingField + 4 * v12;
        if ( *((_DWORD *)v15 + 8) == RecommendAdviceMessageEntity_k__BackingField->fields.id )
        {
          bodyMessageLabel = this->fields.bodyMessageLabel;
          *((_DWORD *)v15 + 8) = -1;
          if ( !bodyMessageLabel )
            goto LABEL_67;
          if ( v12 >= LODWORD(bodyMessageLabel->max_length) )
            goto LABEL_68;
          listViewManager = bodyMessageLabel->m_Items[v12];
          if ( !listViewManager )
            goto LABEL_67;
          UILabel__set_text(listViewManager, (System_String_o *)StringLiteral_1/*""*/, 0);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
          this->fields.cursorPos = v12;
        }
        ++v12;
      }
LABEL_45:
      v33 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, *(const MethodInfo **)&iKind);
      for ( i = 0; ; ++i )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&iKind, v32);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)i >= SLODWORD(listViewManager->fields.onChange[1].fields.method_code) )
          break;
        bodyMessageHighlight = this->fields.bodyMessageHighlight;
        if ( !bodyMessageHighlight )
          goto LABEL_67;
        if ( i >= LODWORD(bodyMessageHighlight->max_length) )
          goto LABEL_68;
        listViewManager = (UILabel_o *)bodyMessageHighlight->m_Items[i];
        if ( !listViewManager )
          goto LABEL_67;
        listViewManager = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)listViewManager,
                                         0);
        *(_QWORD *)&iKind = !v33 && (unsigned __int64)(i == this->fields.cursorPos);
        if ( !listViewManager )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, iKind, 0);
      }
      v36 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
      v37 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      if ( !*(&RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, *(_QWORD *)&iKind, v32);
        v37 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      }
      static_fields = v37->static_fields;
      _9__38_0 = static_fields->__9__38_0;
      if ( !_9__38_0 )
      {
        if ( !*(&v37->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v37, *(_QWORD *)&iKind, v32);
          static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
        }
        v40 = (Il2CppObject *)static_fields->__9;
        _9__38_0 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__38_0,
          v40,
          Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__,
          0);
        v41 = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
        v41->__9__38_0 = _9__38_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v41->__9__38_0,
          (int32_t)_9__38_0,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
      }
      v48 = System_Linq_Enumerable__Where_int_(
              v36,
              (System_Func_TSource__bool__o *)_9__38_0,
              (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                   v48,
                                                                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
      decideButton = this->fields.decideButton;
      listViewManager = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( listViewManager )
      {
        SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)listViewManager,
                                                                                  *(const MethodInfo **)&iKind);
        listViewManager = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                         SelectMessageIds,
                                         v49,
                                         (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
        if ( decideButton )
        {
          v17 = 1;
          UICommonButton__SetEnable(decideButton, ((unsigned __int8)listViewManager & 1) == 0, 0);
          RecommendSupportMessageSelectDialog__ModifyList(this, 0, v52);
          goto LABEL_66;
        }
      }
LABEL_67:
      sub_2213CDC(listViewManager, *(_QWORD *)&iKind);
    }
    if ( !byte_596C543 )
    {
      sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_596C543 = 1;
    }
    if ( RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField
      && !v8->fields._IsUse_k__BackingField )
    {
      v30 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v31 = (System_Reflection_MethodBase_o *)sub_2213A44(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 2, 0, 0);
      goto LABEL_45;
    }
    v18 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
    if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_2213A78(Method_RecommendSupportMessageSelectDialog_OnSelect__);
    v19 = (System_Reflection_MethodBase_o *)sub_2213A44(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    v20 = this->fields._SelectMessageIds_k__BackingField;
    if ( !v20 )
      goto LABEL_67;
    cursorPos = this->fields.cursorPos;
    if ( (unsigned int)cursorPos < LODWORD(v20->max_length) )
    {
      v22 = (char *)v20 + 4 * cursorPos;
      v24 = *((_DWORD *)v22 + 8);
      v23 = (int32_t *)(v22 + 32);
      if ( v24 != -1 )
        goto LABEL_45;
      v25 = v8->fields._RecommendAdviceMessageEntity_k__BackingField;
      if ( !v25 )
        goto LABEL_67;
      v26 = this->fields.bodyMessageLabel;
      *v23 = v25->fields.id;
      if ( !v26 )
        goto LABEL_67;
      v27 = this->fields.cursorPos;
      if ( (unsigned int)v27 < LODWORD(v26->max_length) )
      {
        listViewManager = v26->m_Items[v27];
        if ( !listViewManager )
          goto LABEL_67;
        UILabel__set_text(listViewManager, v25->fields.message, 0);
        v28 = System_Array__IndexOf_int_(
                this->fields._SelectMessageIds_k__BackingField,
                -1,
                (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
        if ( v28 == -1 )
          v29 = 0;
        else
          v29 = v28;
        this->fields.cursorPos = v29;
        goto LABEL_45;
      }
    }
LABEL_68:
    sub_2213CE4(listViewManager);
  }
}


void RecommendSupportMessageSelectDialog__Open(
        RecommendSupportMessageSelectDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  UISprite_o *gameObject; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *titleLabel; // x21
  RecommendAdviceMessageMaster_o *v12; // x20
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *resetLabel; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entities_49608016; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_T__o *v20; // x20
  unsigned __int64 i; // x21
  BalanceConfig_c *v22; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x22
  struct UILabel_array *bodyMessageLabel; // x8
  UILabel_o *v25; // x22
  struct UISprite_array *bodyMessageHighlight; // x8
  bool v27; // w1
  struct UILabel_array *v28; // x8
  struct UISprite_array *v29; // x8
  struct UISprite_array *v30; // x8
  int32_t v31; // w9
  const MethodInfo *v32; // x1
  bool v33; // w20
  const MethodInfo *v34; // x3
  int32_t state; // w8
  int32_t category; // w1
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  System_Action_o *v39; // x20

  if ( (byte_596C483 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    sub_2213A60(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_EndOpen__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&StringLiteral_11503/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_11505/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_11511/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C483 = 1;
  }
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  titleLabel = this->fields.titleLabel;
  v12 = (RecommendAdviceMessageMaster_o *)Master_object;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11505/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11503/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_60;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_60;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
  resetLabel = this->fields.resetLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11511/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, 0);
  if ( !resetLabel )
    goto LABEL_60;
  UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
  gameObject = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)RecommendSupportSelectControl__get_SelectMessageIds(
                               (RecommendSupportSelectControl_o *)gameObject,
                               v5);
  if ( !v12 )
    goto LABEL_60;
  Entities_49608016 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities_49608016(
                                                                             v12,
                                                                             (System_Int32_array *)gameObject,
                                                                             0);
  v20 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  Entities_49608016,
                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
  for ( i = 0; ; ++i )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v19);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v22->static_fields->RecommendSupportAdviceMessageMax )
      break;
    gameObject = (UISprite_o *)BasicHelper__IsValidIndex_object_(
                                 v20,
                                 i,
                                 (const MethodInfo_3814F8C *)Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_60;
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v20,
                                   i,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject || !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
        goto LABEL_61;
      bodyMessageLabel = this->fields.bodyMessageLabel;
      SelectMessageIds_k__BackingField->m_Items[i] = gameObject->fields.m_CachedPtr;
      if ( !bodyMessageLabel )
        goto LABEL_60;
      if ( i >= LODWORD(bodyMessageLabel->max_length) )
        goto LABEL_61;
      v25 = bodyMessageLabel->m_Items[i];
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v20,
                                   i,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject )
        goto LABEL_60;
      if ( !v25 )
        goto LABEL_60;
      UILabel__set_text(v25, (System_String_o *)gameObject->fields.m_CancellationTokenSource, 0);
      bodyMessageHighlight = this->fields.bodyMessageHighlight;
      if ( !bodyMessageHighlight )
        goto LABEL_60;
      if ( i >= LODWORD(bodyMessageHighlight->max_length) )
        goto LABEL_61;
      gameObject = bodyMessageHighlight->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_60;
      v27 = 1;
    }
    else
    {
      if ( !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
        goto LABEL_61;
      v28 = this->fields.bodyMessageLabel;
      SelectMessageIds_k__BackingField->m_Items[i] = -1;
      if ( !v28 )
        goto LABEL_60;
      if ( i >= LODWORD(v28->max_length) )
        goto LABEL_61;
      gameObject = (UISprite_o *)v28->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      v29 = this->fields.bodyMessageHighlight;
      if ( !v29 )
        goto LABEL_60;
      if ( i >= LODWORD(v29->max_length) )
        goto LABEL_61;
      gameObject = v29->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_60;
      v27 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v27, 0);
  }
  gameObject = (UISprite_o *)System_Array__IndexOf_int_(
                               this->fields._SelectMessageIds_k__BackingField,
                               -1,
                               (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  v30 = this->fields.bodyMessageHighlight;
  v31 = (_DWORD)gameObject == -1 ? 0 : (int)gameObject;
  this->fields.cursorPos = v31;
  if ( !v30 )
    goto LABEL_60;
  if ( (unsigned int)v31 >= LODWORD(v30->max_length) )
LABEL_61:
    sub_2213CE4(gameObject);
  gameObject = v30->m_Items[v31];
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v33 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, v32);
  if ( !byte_596C542 )
  {
    sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_596C542 = 1;
  }
  gameObject = (UISprite_o *)this->fields.decideButton;
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v33;
  if ( !gameObject )
    goto LABEL_60;
  UICommonButton__SetEnable((UICommonButton_o *)gameObject, 0, 0);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 0, v34);
    category = this->fields.category;
    this->fields.state = 2;
    RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v37);
    return;
  }
  if ( !state )
  {
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 1, v38);
      this->fields.state = 1;
      v39 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v39, (Il2CppObject *)this, Method_RecommendSupportMessageSelectDialog_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v39, 1, 0, 0);
      return;
    }
LABEL_60:
    sub_2213CDC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectDialog__SetCategory(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t kind,
        bool isInit,
        const MethodInfo *method)
{
  struct RecommendSupportMessageSelectListViewManager_o *listViewManager; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct RecommendSupportMessageSelectListViewManager_o *v10; // x20
  const MethodInfo *v11; // x2
  ListViewManager_o *v12; // x0
  const MethodInfo *v13; // x2

  RecommendSupportMessageSelectDialog__SetupFilterButton(this, kind, (const MethodInfo *)isInit);
  if ( isInit || this->fields.category != kind )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_10;
    listViewManager = (struct RecommendSupportMessageSelectListViewManager_o *)((__int64 (__fastcall *)(struct RecommendSupportMessageSelectListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._13_CreateList.methodPtr)(
                                                                                 listViewManager,
                                                                                 (unsigned int)kind,
                                                                                 listViewManager->klass->vtable._13_CreateList.method);
    this->fields.category = kind;
  }
  v10 = this->fields.listViewManager;
  if ( this->fields.state == 2 )
  {
    if ( v10 )
    {
      RecommendSupportMessageSelectListViewManager__ModifyList(this->fields.listViewManager, 0, v9);
      RecommendSupportMessageSelectDialog__ToInputState(this, 1, v11);
      return;
    }
LABEL_10:
    sub_2213CDC(listViewManager, v8);
  }
  if ( !v10 )
    goto LABEL_10;
  v12 = (ListViewManager_o *)this->fields.listViewManager;
  v10->fields.initMode = 1;
  ListViewManager__set_IsInput(v12, 0, 0);
  RecommendSupportMessageSelectListViewManager__RequestListObject(v10, 1, v13);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectDialog__SetupFilterButton(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int v5; // w8
  __int64 *v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1
  UILabel_o *filterLabel; // x8

  if ( (byte_596C48C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11506/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/);
    sub_2213A60(&StringLiteral_11508/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/);
    sub_2213A60(&StringLiteral_11507/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/);
    sub_2213A60(&StringLiteral_11510/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/);
    sub_2213A60(&StringLiteral_11509/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/);
    byte_596C48C = 1;
  }
  v5 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( kind <= 1 )
  {
    if ( kind == 1 )
    {
      v6 = &StringLiteral_11509/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/;
      if ( v5 )
        goto LABEL_14;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  switch ( kind )
  {
    case 2:
      v6 = &StringLiteral_11508/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/;
      if ( !v5 )
        goto LABEL_13;
      break;
    case 3:
      v6 = &StringLiteral_11510/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/;
      if ( !v5 )
LABEL_13:
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, method);
      break;
    case 4:
      v6 = &StringLiteral_11506/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/;
      if ( v5 )
        break;
      goto LABEL_13;
    default:
LABEL_12:
      v6 = &StringLiteral_11507/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/;
      if ( v5 )
        break;
      goto LABEL_13;
  }
LABEL_14:
  v7 = LocalizationManager__Get((System_String_o *)*v6, 0);
  filterLabel = this->fields.filterLabel;
  if ( !filterLabel )
    sub_2213CDC(v7, v8);
  UILabel__set_text(filterLabel, v7, 0);
}


void RecommendSupportMessageSelectDialog__ToInputState(
        RecommendSupportMessageSelectDialog_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewManager_CallbackFunc_c *v5; // x0
  struct RecommendSupportMessageSelectListViewManager_o *listViewManager; // x19
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v7; // x22
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

  if ( (byte_596C485 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog_OnSelect__);
    byte_596C485 = 1;
  }
  v5 = RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo;
  listViewManager = this->fields.listViewManager;
  this->fields.state = 2;
  v7 = (RecommendSupportMessageSelectListViewManager_CallbackFunc_o *)sub_2213CCC(v5);
  RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportMessageSelectDialog_OnSelect__,
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
      RecommendSupportMessageSelectListViewManager__RequestListObject(listViewManager, 2, v17);
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


void RecommendSupportMessageSelectDialog___OnClickDecide_b__35_0(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportMessageSelectDialog___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__35_1; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x19
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v19; // x1
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x20
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v22; // x2

  if ( (byte_596C48F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_int___);
    sub_2213A60(&System_Func_int__bool__TypeInfo);
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__);
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_596C48F = 1;
  }
  v4 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !*(&RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, method, v2);
    v4 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__35_1 = static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__35_1 = (System_Func_int__bool__o *)sub_2213CCC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__35_1,
      v8,
      Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__,
      0);
    v9 = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    v9->__9__35_1 = _9__35_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__35_1, (int32_t)_9__35_1, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_int_(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__35_1,
          (const MethodInfo_38A2E70 *)Method_System_Linq_Enumerable_Where_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (RecommendSupportData_k__BackingField = Instance->fields._RecommendSupportData_k__BackingField,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !RecommendSupportData_k__BackingField
    || (RecommendSupportData__SetAdviceMessage(
          RecommendSupportData_k__BackingField,
          Instance->fields._SelectIndex_k__BackingField,
          v17,
          0),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !Menu_object )
  {
    sub_2213CDC(Instance, v19);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    v22);
}


bool RecommendSupportMessageSelectDialog__get_IsSelectLimit(const MethodInfo *method)
{
  if ( (byte_596C480 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_596C480 = 1;
  }
  return RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField;
}


System_Int32_array *RecommendSupportMessageSelectDialog__get_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectMessageIds_k__BackingField;
}


UnityEngine_GameObject_o *RecommendSupportMessageSelectDialog__get_closeBtnObject(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596C48D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C48D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void RecommendSupportMessageSelectDialog__set_IsSelectLimit(bool value, const MethodInfo *method)
{
  if ( (byte_596C481 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_596C481 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = value;
}


void RecommendSupportMessageSelectDialog__set_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SelectMessageIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportMessageSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C490 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_596C490 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportMessageSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportMessageSelectDialog___c___ctor(
        RecommendSupportMessageSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool RecommendSupportMessageSelectDialog___c___CheckSelectMessageNum_b__34_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


void RecommendSupportMessageSelectDialog___c___OnClickCancel_b__36_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        const MethodInfo *method)
{
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v5; // x2

  if ( (byte_596C491 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C491 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_3973FF4 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !Menu_object )
  {
    sub_2213CDC(Instance, v3);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    v5);
}


bool RecommendSupportMessageSelectDialog___c___OnClickDecide_b__35_1(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


bool RecommendSupportMessageSelectDialog___c___OnClickReset_b__37_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


bool RecommendSupportMessageSelectDialog___c___OnSelect_b__38_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


void RecommendSupportMessageSelectDialog___c__DisplayClass29_0___ctor(
        RecommendSupportMessageSelectDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportMessageSelectDialog___c__DisplayClass29_0___Close_b__0(
        RecommendSupportMessageSelectDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  RecommendSupportMessageSelectDialog_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  RecommendSupportMessageSelectDialog__Init(_4__this, method);
}