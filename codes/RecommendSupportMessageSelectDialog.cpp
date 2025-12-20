void RecommendSupportMessageSelectDialog___ctor(RecommendSupportMessageSelectDialog_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UILabel_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UISprite_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D28583 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&UILabel___TypeInfo);
    sub_1C94098(&UISprite___TypeInfo);
    byte_4D28583 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UILabel_array *)sub_1C94140(
                                 UILabel___TypeInfo,
                                 (unsigned int)v3->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageLabel = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bodyMessageLabel, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct UISprite_array *)sub_1C94140(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageHighlight = v11;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.bodyMessageHighlight,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  RecommendSupportMessageSelectDialog___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__34_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w0
  BalanceConfig_c *v15; // x8
  int32_t v16; // w19

  if ( (byte_4D2857B & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Count_int____79086088);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_4D2857B = 1;
  }
  v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__34_0 = v3->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__34_0 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__34_0,
      v6,
      Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__,
      0);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = _9__34_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Count_int__52156144(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__34_0,
          (const MethodInfo_31BD6F0 *)Method_System_Linq_Enumerable_Count_int____79086088);
  v15 = BalanceConfig_TypeInfo;
  v16 = v14;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  return v16 >= v15->static_fields->RecommendSupportAdviceMessageMax;
}


void RecommendSupportMessageSelectDialog__Close(
        RecommendSupportMessageSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t category; // w1
  const MethodInfo *v21; // x3
  System_Action_o *v22; // x20

  if ( (byte_4D28579 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo);
    byte_4D28579 = 1;
  }
  v5 = sub_1C942E4(RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  category = this->fields.category;
  this->fields.state = 4;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v21);
  v22 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  BalanceConfig_c *v5; // x0
  struct System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D28577 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&int___TypeInfo);
    byte_4D28577 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0) )
  {
    sub_1C942F0(gameObject, v4);
  }
  ListViewManager__DestroyList((ListViewManager_o *)gameObject, 0);
  this->fields.state = 0;
  this->fields.category = 0;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct System_Int32_array *)sub_1C94140(
                                      int___TypeInfo,
                                      (unsigned int)v5->static_fields->RecommendSupportAdviceMessageMax);
  this->fields._SelectMessageIds_k__BackingField = v6;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int32_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  if ( !byte_4D28633 )
  {
    sub_1C94098(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_4D28633 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v7;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (RecommendSupportMessageSelectListViewManager__ModifyList(listViewManager, isNeedSort, v6),
        (v9 = this->fields.listViewManager) == 0) )
  {
    sub_1C942F0(listViewManager, v5);
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
  System_Action_o *_9__36_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2857D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_4D2857D = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__36_0 = v7->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__36_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(_9__36_0, v9, Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, 0);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = _9__36_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
      (int32_t)_9__36_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !this )
    sub_1C942F0(v7, v5);
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

  if ( (byte_4D2857C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__);
    byte_4D2857C = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D28580 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
    byte_4D28580 = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickFilter__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  category = this->fields.category;
  v7 = 0;
  if ( (unsigned int)category <= 4 )
    v7 = dword_D3142C[category];
  RecommendSupportMessageSelectDialog__SetCategory(this, v7, 0, v5);
  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C942F0(0, v8);
  ListViewManager__CheckScroll(listViewManager, 0, 0);
}


void RecommendSupportMessageSelectDialog__OnClickReset(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  unsigned int i; // w22
  UILabel_o *gameObject; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  struct UISprite_array *bodyMessageHighlight; // x8
  struct UISprite_array *v11; // x8
  RecommendSupportMessageSelectDialog___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_int__bool__o *_9__37_0; // x21
  Il2CppObject *v15; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int32_array *v24; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  if ( (byte_4D2857E & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnClickReset__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2857E = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickReset__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickReset__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnClickReset__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  for ( i = 0; ; ++i )
  {
    gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= SLODWORD(gameObject->fields.onChange[1].fields.method_code) )
      break;
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( !SelectMessageIds_k__BackingField )
      goto LABEL_32;
    if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
      goto LABEL_33;
    SelectMessageIds_k__BackingField->m_Items[i] = -1;
    bodyMessageLabel = this->fields.bodyMessageLabel;
    if ( !bodyMessageLabel )
      goto LABEL_32;
    if ( i >= LODWORD(bodyMessageLabel->max_length) )
      goto LABEL_33;
    gameObject = bodyMessageLabel->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    bodyMessageHighlight = this->fields.bodyMessageHighlight;
    if ( !bodyMessageHighlight )
      goto LABEL_32;
    if ( i >= LODWORD(bodyMessageHighlight->max_length) )
      goto LABEL_33;
    gameObject = (UILabel_o *)bodyMessageHighlight->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v11 = this->fields.bodyMessageHighlight;
  this->fields.cursorPos = 0;
  if ( !v11 )
    goto LABEL_32;
  if ( !LODWORD(v11->max_length) )
LABEL_33:
    sub_1C942F8(gameObject);
  gameObject = (UILabel_o *)v11->m_Items[0];
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v12 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v12 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__37_0 = v12->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__37_0 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__37_0,
      v15,
      Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__,
      0);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = _9__37_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0,
      (int32_t)_9__37_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_int_(
          v13,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
  v24 = System_Linq_Enumerable__ToArray_int_(
          v23,
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  decideButton = this->fields.decideButton;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  gameObject = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject
    || (SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)gameObject,
                                                                                  v5),
        gameObject = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    SelectMessageIds,
                                    v26,
                                    (const MethodInfo_31D66A0 *)Method_System_Linq_Enumerable_SequenceEqual_int___),
        !decideButton) )
  {
LABEL_32:
    sub_1C942F0(gameObject, v5);
  }
  UICommonButton__SetEnable(decideButton, ((unsigned __int8)gameObject & 1) == 0, 0);
  RecommendSupportMessageSelectDialog__ModifyList(this, 0, v28);
  RecommendSupportMessageSelectDialog__ToInputState(this, 1, v29);
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
  unsigned __int64 i; // x21
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  char *v14; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  bool v16; // w1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct System_Int32_array *v19; // x8
  __int64 cursorPos; // x9
  char *v21; // x9
  int32_t *v22; // x9
  int v23; // t1
  struct RecommendAdviceMessageEntity_o *v24; // x8
  struct UILabel_array *v25; // x9
  __int64 v26; // x10
  int32_t v27; // w0
  int32_t v28; // w8
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  bool v31; // w20
  int32_t j; // w21
  struct UISprite_array *bodyMessageHighlight; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  RecommendSupportMessageSelectDialog___c_c *v35; // x0
  System_Func_int__bool__o *_9__38_0; // x21
  Il2CppObject *v37; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Int32_array *v46; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v50; // x2

  if ( (byte_4D2857F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnSelect__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2857F = 1;
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
      v16 = 0;
LABEL_66:
      RecommendSupportMessageSelectDialog__ToInputState(this, v16, *(const MethodInfo **)&index);
      return;
    }
    v8 = Item;
    if ( Item->fields._IsUse_k__BackingField )
    {
      v9 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C9407C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
      for ( i = 0; ; ++i )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)i >= SLODWORD(listViewManager->fields.onChange[1].fields.method_code) )
          break;
        SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
        if ( !SelectMessageIds_k__BackingField )
          goto LABEL_67;
        if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
          goto LABEL_68;
        RecommendAdviceMessageEntity_k__BackingField = v8->fields._RecommendAdviceMessageEntity_k__BackingField;
        if ( !RecommendAdviceMessageEntity_k__BackingField )
          goto LABEL_67;
        v14 = (char *)SelectMessageIds_k__BackingField + 4 * i;
        if ( *((_DWORD *)v14 + 8) == RecommendAdviceMessageEntity_k__BackingField->fields.id )
        {
          *((_DWORD *)v14 + 8) = -1;
          bodyMessageLabel = this->fields.bodyMessageLabel;
          if ( !bodyMessageLabel )
            goto LABEL_67;
          if ( i >= LODWORD(bodyMessageLabel->max_length) )
            goto LABEL_68;
          listViewManager = bodyMessageLabel->m_Items[i];
          if ( !listViewManager )
            goto LABEL_67;
          UILabel__set_text(listViewManager, (System_String_o *)StringLiteral_1/*""*/, 0);
          this->fields.cursorPos = i;
        }
      }
LABEL_45:
      v31 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, *(const MethodInfo **)&iKind);
      for ( j = 0; ; ++j )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( j >= SLODWORD(listViewManager->fields.onChange[1].fields.method_code) )
          break;
        bodyMessageHighlight = this->fields.bodyMessageHighlight;
        if ( !bodyMessageHighlight )
          goto LABEL_67;
        if ( (unsigned int)j >= LODWORD(bodyMessageHighlight->max_length) )
          goto LABEL_68;
        listViewManager = (UILabel_o *)bodyMessageHighlight->m_Items[j];
        if ( !listViewManager )
          goto LABEL_67;
        listViewManager = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)listViewManager,
                                         0);
        *(_QWORD *)&iKind = !v31 && (unsigned __int64)(j == this->fields.cursorPos);
        if ( !listViewManager )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, iKind, 0);
      }
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
      v35 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
        v35 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      }
      _9__38_0 = v35->static_fields->__9__38_0;
      if ( !_9__38_0 )
      {
        if ( !v35->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v35);
          v35 = RecommendSupportMessageSelectDialog___c_TypeInfo;
        }
        v37 = (Il2CppObject *)v35->static_fields->__9;
        _9__38_0 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__38_0,
          v37,
          Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__,
          0);
        static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
        static_fields->__9__38_0 = _9__38_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__38_0,
          (int32_t)_9__38_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      v45 = System_Linq_Enumerable__Where_int_(
              v34,
              (System_Func_TSource__bool__o *)_9__38_0,
              (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
      v46 = System_Linq_Enumerable__ToArray_int_(
              v45,
              (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
      decideButton = this->fields.decideButton;
      v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
      listViewManager = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( listViewManager )
      {
        SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)listViewManager,
                                                                                  *(const MethodInfo **)&iKind);
        listViewManager = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                         SelectMessageIds,
                                         v48,
                                         (const MethodInfo_31D66A0 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
        if ( decideButton )
        {
          UICommonButton__SetEnable(decideButton, ((unsigned __int8)listViewManager & 1) == 0, 0);
          RecommendSupportMessageSelectDialog__ModifyList(this, 0, v50);
          v16 = 1;
          goto LABEL_66;
        }
      }
LABEL_67:
      sub_1C942F0(listViewManager, *(_QWORD *)&iKind);
    }
    if ( !byte_4D28634 )
    {
      sub_1C94098(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_4D28634 = 1;
    }
    if ( RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField
      && !v8->fields._IsUse_k__BackingField )
    {
      v29 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v29 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v30 = (System_Reflection_MethodBase_o *)sub_1C9407C(v29, v29[4]);
      OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
      goto LABEL_45;
    }
    v17 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
    if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C940B0(Method_RecommendSupportMessageSelectDialog_OnSelect__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C9407C(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0, 0);
    v19 = this->fields._SelectMessageIds_k__BackingField;
    if ( !v19 )
      goto LABEL_67;
    cursorPos = this->fields.cursorPos;
    if ( (unsigned int)cursorPos < LODWORD(v19->max_length) )
    {
      v21 = (char *)v19 + 4 * cursorPos;
      v23 = *((_DWORD *)v21 + 8);
      v22 = (int32_t *)(v21 + 32);
      if ( v23 != -1 )
        goto LABEL_45;
      v24 = v8->fields._RecommendAdviceMessageEntity_k__BackingField;
      if ( !v24 )
        goto LABEL_67;
      *v22 = v24->fields.id;
      v25 = this->fields.bodyMessageLabel;
      if ( !v25 )
        goto LABEL_67;
      v26 = this->fields.cursorPos;
      if ( (unsigned int)v26 < LODWORD(v25->max_length) )
      {
        listViewManager = v25->m_Items[v26];
        if ( !listViewManager )
          goto LABEL_67;
        UILabel__set_text(listViewManager, v24->fields.message, 0);
        v27 = System_Array__IndexOf_int_(
                this->fields._SelectMessageIds_k__BackingField,
                -1,
                (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
        if ( v27 == -1 )
          v28 = 0;
        else
          v28 = v27;
        this->fields.cursorPos = v28;
        goto LABEL_45;
      }
    }
LABEL_68:
    sub_1C942F8(listViewManager);
  }
}


void RecommendSupportMessageSelectDialog__Open(
        RecommendSupportMessageSelectDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  UISprite_o *gameObject; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Master_object; // x0
  UILabel_o *titleLabel; // x21
  RecommendAdviceMessageMaster_o *v8; // x20
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *resetLabel; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entities_43353872; // x0
  System_Collections_Generic_List_T__o *v14; // x20
  unsigned __int64 i; // x21
  BalanceConfig_c *v16; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x22
  struct UILabel_array *bodyMessageLabel; // x8
  UILabel_o *v19; // x22
  struct UISprite_array *bodyMessageHighlight; // x8
  bool v21; // w1
  struct UILabel_array *v22; // x8
  struct UISprite_array *v23; // x8
  struct UISprite_array *v24; // x8
  int32_t v25; // w9
  const MethodInfo *v26; // x1
  bool v27; // w20
  const MethodInfo *v28; // x3
  int32_t state; // w8
  int32_t category; // w1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  System_Action_o *v33; // x20

  if ( (byte_4D28578 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Array_IndexOf_int___);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    sub_1C94098(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
    sub_1C94098(&Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_EndOpen__);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&StringLiteral_11067/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_11069/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/);
    sub_1C94098(&StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_11075/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28578 = 1;
  }
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  titleLabel = this->fields.titleLabel;
  v8 = (RecommendAdviceMessageMaster_o *)Master_object;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11069/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11067/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_60;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  decideLabel = this->fields.decideLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_60;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
  resetLabel = this->fields.resetLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, 0);
  if ( !resetLabel )
    goto LABEL_60;
  UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0);
  gameObject = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)RecommendSupportSelectControl__get_SelectMessageIds(
                               (RecommendSupportSelectControl_o *)gameObject,
                               v5);
  if ( !v8 )
    goto LABEL_60;
  Entities_43353872 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities_43353872(
                                                                             v8,
                                                                             (System_Int32_array *)gameObject,
                                                                             0);
  v14 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  Entities_43353872,
                                                  (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
  for ( i = 0; ; ++i )
  {
    v16 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v16->static_fields->RecommendSupportAdviceMessageMax )
      break;
    gameObject = (UISprite_o *)BasicHelper__IsValidIndex_object_(
                                 v14,
                                 i,
                                 (const MethodInfo_318A9D4 *)Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_60;
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v14,
                                   i,
                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject || !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
        goto LABEL_61;
      SelectMessageIds_k__BackingField->m_Items[i] = gameObject->fields.m_CachedPtr;
      bodyMessageLabel = this->fields.bodyMessageLabel;
      if ( !bodyMessageLabel )
        goto LABEL_60;
      if ( i >= LODWORD(bodyMessageLabel->max_length) )
        goto LABEL_61;
      v19 = bodyMessageLabel->m_Items[i];
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v14,
                                   i,
                                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject )
        goto LABEL_60;
      if ( !v19 )
        goto LABEL_60;
      UILabel__set_text(v19, (System_String_o *)gameObject->fields.m_CancellationTokenSource, 0);
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
      v21 = 1;
    }
    else
    {
      if ( !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= LODWORD(SelectMessageIds_k__BackingField->max_length) )
        goto LABEL_61;
      SelectMessageIds_k__BackingField->m_Items[i] = -1;
      v22 = this->fields.bodyMessageLabel;
      if ( !v22 )
        goto LABEL_60;
      if ( i >= LODWORD(v22->max_length) )
        goto LABEL_61;
      gameObject = (UISprite_o *)v22->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
      v23 = this->fields.bodyMessageHighlight;
      if ( !v23 )
        goto LABEL_60;
      if ( i >= LODWORD(v23->max_length) )
        goto LABEL_61;
      gameObject = v23->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_60;
      v21 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v21, 0);
  }
  gameObject = (UISprite_o *)System_Array__IndexOf_int_(
                               this->fields._SelectMessageIds_k__BackingField,
                               -1,
                               (const MethodInfo_32A4AE8 *)Method_System_Array_IndexOf_int___);
  v24 = this->fields.bodyMessageHighlight;
  v25 = (_DWORD)gameObject == -1 ? 0 : (int)gameObject;
  this->fields.cursorPos = v25;
  if ( !v24 )
    goto LABEL_60;
  if ( (unsigned int)v25 >= LODWORD(v24->max_length) )
LABEL_61:
    sub_1C942F8(gameObject);
  gameObject = v24->m_Items[v25];
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v27 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, v26);
  if ( !byte_4D28633 )
  {
    sub_1C94098(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_4D28633 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v27;
  gameObject = (UISprite_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_60;
  UICommonButton__SetEnable((UICommonButton_o *)gameObject, 0, 0);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 0, v28);
    category = this->fields.category;
    this->fields.state = 2;
    RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v31);
    return;
  }
  if ( !state )
  {
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 1, v32);
      this->fields.state = 1;
      v33 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_RecommendSupportMessageSelectDialog_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v33, 1, 0, 0);
      return;
    }
LABEL_60:
    sub_1C942F0(gameObject, v5);
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
      goto LABEL_9;
    listViewManager = (struct RecommendSupportMessageSelectListViewManager_o *)((__int64 (__fastcall *)(struct RecommendSupportMessageSelectListViewManager_o *, _QWORD, const MethodInfo *))listViewManager->klass->vtable._13_CreateList.methodPtr)(
                                                                                 listViewManager,
                                                                                 (unsigned int)kind,
                                                                                 listViewManager->klass->vtable._13_CreateList.method);
    this->fields.category = kind;
  }
  v10 = this->fields.listViewManager;
  if ( !v10 )
LABEL_9:
    sub_1C942F0(listViewManager, v8);
  if ( this->fields.state == 2 )
  {
    RecommendSupportMessageSelectListViewManager__ModifyList(this->fields.listViewManager, 0, v9);
    RecommendSupportMessageSelectDialog__ToInputState(this, 1, v11);
  }
  else
  {
    v12 = (ListViewManager_o *)this->fields.listViewManager;
    v10->fields.initMode = 1;
    ListViewManager__set_IsInput(v12, 0, 0);
    RecommendSupportMessageSelectListViewManager__RequestListObject(v10, 1, v13);
  }
}


void RecommendSupportMessageSelectDialog__SetupFilterButton(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *filterLabel; // x8

  if ( (byte_4D28581 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11070/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/);
    sub_1C94098(&StringLiteral_11072/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/);
    sub_1C94098(&StringLiteral_11071/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/);
    sub_1C94098(&StringLiteral_11074/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/);
    sub_1C94098(&StringLiteral_11073/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/);
    byte_4D28581 = 1;
  }
  switch ( kind )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_11073/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/;
      break;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_11072/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/;
      break;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_11074/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/;
      break;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_11070/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_11071/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/;
      break;
  }
  v6 = LocalizationManager__Get((System_String_o *)*v5, 0);
  filterLabel = this->fields.filterLabel;
  if ( !filterLabel )
    sub_1C942F0(v6, v7);
  UILabel__set_text(filterLabel, v6, 0);
}


void RecommendSupportMessageSelectDialog__ToInputState(
        RecommendSupportMessageSelectDialog_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  struct RecommendSupportMessageSelectListViewManager_o *listViewManager; // x20
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_4D2857A & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog_OnSelect__);
    byte_4D2857A = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v6 = (RecommendSupportMessageSelectListViewManager_CallbackFunc_o *)sub_1C942E4(RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportMessageSelectDialog_OnSelect__,
    v7);
  if ( !listViewManager )
    sub_1C942F0(v8, v9);
  listViewManager->fields.FuncOnClick = v6;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&listViewManager->fields.FuncOnClick,
    (int32_t)v6,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( changeMode )
  {
    listViewManager->fields.initMode = 2;
    ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0);
    RecommendSupportMessageSelectListViewManager__RequestListObject(listViewManager, 2, v16);
  }
}


void RecommendSupportMessageSelectDialog___OnClickDecide_b__35_0(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectDialog___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__35_1; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x19
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v17; // x1
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x20
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v20; // x2

  if ( (byte_4D28584 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C94098(&Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__);
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_4D28584 = 1;
  }
  v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__35_1 = v3->static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__35_1 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__35_1,
      v6,
      Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__,
      0);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__35_1 = _9__35_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__35_1, (int32_t)_9__35_1, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_int_(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__35_1,
          (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (RecommendSupportData_k__BackingField = Instance->fields._RecommendSupportData_k__BackingField,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !RecommendSupportData_k__BackingField
    || (RecommendSupportData__SetAdviceMessage(
          RecommendSupportData_k__BackingField,
          Instance->fields._SelectIndex_k__BackingField,
          v15,
          0),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_3236F98 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !Menu_object )
  {
    sub_1C942F0(Instance, v17);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    v20);
}


bool RecommendSupportMessageSelectDialog__get_IsSelectLimit(const MethodInfo *method)
{
  if ( (byte_4D28575 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_4D28575 = 1;
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
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D28582 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28582 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C942F0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void RecommendSupportMessageSelectDialog__set_IsSelectLimit(bool value, const MethodInfo *method)
{
  if ( (byte_4D28576 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportMessageSelectDialog_TypeInfo);
    byte_4D28576 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = value;
}


void RecommendSupportMessageSelectDialog__set_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SelectMessageIds_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportMessageSelectDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28585 & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportMessageSelectDialog___c_TypeInfo);
    byte_4D28585 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(RecommendSupportMessageSelectDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectDialog___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields,
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

  if ( (byte_4D28586 & 1) == 0 )
  {
    sub_1C94098(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___);
    sub_1C94098(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4D28586 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_3236F98 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0)
    || !Menu_object )
  {
    sub_1C942F0(Instance, v3);
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
    sub_1C942F0(0, method);
  RecommendSupportMessageSelectDialog__Init(_4__this, method);
}