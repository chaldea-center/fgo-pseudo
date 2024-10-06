void __fastcall RecommendSupportMessageSelectDialog___ctor(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UILabel_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct UISprite_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6C0A4 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&BaseDialog_TypeInfo, v3);
    sub_1B90010(&UILabel___TypeInfo, v4);
    sub_1B90010(&UISprite___TypeInfo, v5);
    byte_4A6C0A4 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UILabel_array *)sub_1B900B8(
                                 UILabel___TypeInfo,
                                 (unsigned int)v6->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageLabel = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.bodyMessageLabel, (int32_t)v7, v8, v9);
  v10 = (struct UISprite_array *)sub_1B900B8(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageHighlight = v10;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.bodyMessageHighlight, (int32_t)v10, v11, v12);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__Awake(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


bool __fastcall RecommendSupportMessageSelectDialog__CheckSelectMessageNum(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  RecommendSupportMessageSelectDialog___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__34_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w0
  BalanceConfig_c *v15; // x8
  int32_t v16; // w19

  if ( (byte_4A6C09C & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Count_int____76211744, v3);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v4);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__, v5);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v6);
    byte_4A6C09C = 1;
  }
  v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__34_0 = v7->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__34_0 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__34_0,
      v10,
      Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = _9__34_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v12, v13);
  }
  v14 = System_Linq_Enumerable__Count_int__48939508(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__34_0,
          (const MethodInfo_2EAC1F4 *)Method_System_Linq_Enumerable_Count_int____76211744);
  v15 = BalanceConfig_TypeInfo;
  v16 = v14;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  return v16 >= v15->static_fields->RecommendSupportAdviceMessageMax;
}


void __fastcall RecommendSupportMessageSelectDialog__Close(
        RecommendSupportMessageSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t category; // w1
  const MethodInfo *v15; // x3
  System_Action_o *v16; // x20

  if ( (byte_4A6C09A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__, v5);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo, v6);
    byte_4A6C09A = 1;
  }
  v7 = sub_1B9025C(RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B9026C(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  category = this->fields.category;
  this->fields.state = 4;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v15);
  v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__EndOpen(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t category; // w1

  category = this->fields.category;
  this->fields.state = 2;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v2);
}


RecommendSupportMessageSelectListViewManager_o *__fastcall RecommendSupportMessageSelectDialog__GetManager(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.listViewManager;
}


void __fastcall RecommendSupportMessageSelectDialog__Init(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A6C098 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&int___TypeInfo, v3);
    byte_4A6C098 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_1B9026C(gameObject, v5);
  }
  ListViewManager__DestroyList((ListViewManager_o *)gameObject, 0LL);
  this->fields.state = 0;
  this->fields.category = 0;
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct System_Int32_array *)sub_1B900B8(
                                      int___TypeInfo,
                                      (unsigned int)v6->static_fields->RecommendSupportAdviceMessageMax);
  this->fields._SelectMessageIds_k__BackingField = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._SelectMessageIds_k__BackingField, (int32_t)v7, v8, v9);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__ModifyList(
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
  if ( !byte_4A6C13C )
  {
    sub_1B90010(&RecommendSupportMessageSelectDialog_TypeInfo, v5);
    byte_4A6C13C = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v7;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (RecommendSupportMessageSelectListViewManager__ModifyList(listViewManager, isNeedSort, v6),
        (v9 = this->fields.listViewManager) == 0LL) )
  {
    sub_1B9026C(listViewManager, v5);
  }
  v9->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v9, 0, 0LL);
  RecommendSupportMessageSelectListViewManager__RequestListObject(v9, 3, v10);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickCancel(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  RecommendSupportMessageSelectDialog___c_c *v10; // x0
  System_Action_o *_9__36_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A6C09E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnClickCancel__, v3);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, v4);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v5);
    byte_4A6C09E = 1;
  }
  v6 = Method_RecommendSupportMessageSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__36_0 = v10->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__36_0 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(_9__36_0, v12, Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, 0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = _9__36_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v14, v15);
  }
  if ( !this )
    sub_1B9026C(v10, v8);
  RecommendSupportMessageSelectDialog__Close(this, _9__36_0, v9);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickDecide(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4A6C09D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnClickDecide__, v3);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__, v4);
    byte_4A6C09D = 1;
  }
  v5 = Method_RecommendSupportMessageSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__,
    0LL);
  RecommendSupportMessageSelectDialog__Close(this, v7, v8);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickFilter(
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

  if ( (byte_4A6C0A1 & 1) == 0 )
  {
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnClickFilter__, method);
    byte_4A6C0A1 = 1;
  }
  v3 = Method_RecommendSupportMessageSelectDialog_OnClickFilter__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickFilter__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  category = this->fields.category;
  v7 = 0;
  if ( (unsigned int)category <= 4 )
    v7 = dword_BEFC60[category];
  RecommendSupportMessageSelectDialog__SetCategory(this, v7, 0, v5);
  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1B9026C(0LL, v8);
  ListViewManager__CheckScroll(listViewManager, 0, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickReset(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x1
  il2cpp_array_size_t i; // w22
  UILabel_o *gameObject; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  struct UISprite_array *bodyMessageHighlight; // x8
  struct UISprite_array *v20; // x8
  RecommendSupportMessageSelectDialog___c_c *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_int__bool__o *_9__37_0; // x21
  Il2CppObject *v24; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2

  if ( (byte_4A6C09F & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_System_Linq_Enumerable_SequenceEqual_int___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v6);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnClickReset__, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__, v9);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v10);
    sub_1B90010(&StringLiteral_1/*""*/, v11);
    byte_4A6C09F = 1;
  }
  v12 = Method_RecommendSupportMessageSelectDialog_OnClickReset__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickReset__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnClickReset__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  for ( i = 0; ; ++i )
  {
    gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)&gameObject->fields.onChange[1].fields.method_is_virtual )
      break;
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( !SelectMessageIds_k__BackingField )
      goto LABEL_32;
    if ( i >= SelectMessageIds_k__BackingField->max_length )
      goto LABEL_33;
    SelectMessageIds_k__BackingField->m_Items[i + 1] = -1;
    bodyMessageLabel = this->fields.bodyMessageLabel;
    if ( !bodyMessageLabel )
      goto LABEL_32;
    if ( i >= bodyMessageLabel->max_length )
      goto LABEL_33;
    gameObject = bodyMessageLabel->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    bodyMessageHighlight = this->fields.bodyMessageHighlight;
    if ( !bodyMessageHighlight )
      goto LABEL_32;
    if ( i >= bodyMessageHighlight->max_length )
      goto LABEL_33;
    gameObject = (UILabel_o *)bodyMessageHighlight->m_Items[i];
    if ( !gameObject )
      goto LABEL_32;
    gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v20 = this->fields.bodyMessageHighlight;
  this->fields.cursorPos = 0;
  if ( !v20 )
    goto LABEL_32;
  if ( !v20->max_length )
LABEL_33:
    sub_1B90274(gameObject, v14);
  gameObject = (UILabel_o *)v20->m_Items[0];
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v21 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v21 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__37_0 = v21->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__37_0 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__37_0,
      v24,
      Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = _9__37_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v26, v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          v22,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
  decideButton = this->fields.decideButton;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  gameObject = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject
    || (SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)gameObject,
                                                                                  v14),
        gameObject = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    SelectMessageIds,
                                    v31,
                                    (const MethodInfo_2EC1748 *)Method_System_Linq_Enumerable_SequenceEqual_int___),
        !decideButton) )
  {
LABEL_32:
    sub_1B9026C(gameObject, v14);
  }
  UICommonButton__SetEnable(decideButton, ((unsigned __int8)gameObject & 1) == 0, 0LL);
  RecommendSupportMessageSelectDialog__ModifyList(this, 0, v33);
  RecommendSupportMessageSelectDialog__ToInputState(this, 1, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__OnSelect(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t iKind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *listViewManager; // x0
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v18; // x1
  RecommendSupportMessageSelectListViewItem_o *v19; // x20
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  unsigned __int64 i; // x21
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  char *v25; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  bool v27; // w1
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct System_Int32_array *v30; // x8
  __int64 cursorPos; // x9
  char *v32; // x9
  int32_t *v33; // x9
  int v34; // t1
  struct RecommendAdviceMessageEntity_o *v35; // x8
  struct UILabel_array *v36; // x9
  __int64 v37; // x10
  int32_t v38; // w0
  int32_t v39; // w8
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  bool v42; // w20
  il2cpp_array_size_t j; // w21
  struct UISprite_array *bodyMessageHighlight; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  RecommendSupportMessageSelectDialog___c_c *v46; // x0
  System_Func_int__bool__o *_9__38_0; // x21
  Il2CppObject *v48; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int32_array *v53; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v57; // x2

  if ( (byte_4A6C0A0 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_IndexOf_int___, *(_QWORD *)&iKind);
    sub_1B90010(&BalanceConfig_TypeInfo, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_SequenceEqual_int___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_int___, v9);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v10);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnSelect__, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v12);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__, v13);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v14);
    sub_1B90010(&StringLiteral_1/*""*/, v15);
    byte_4A6C0A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (index & 0x80000000) != 0 )
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
      v27 = 0;
LABEL_66:
      RecommendSupportMessageSelectDialog__ToInputState(this, v27, *(const MethodInfo **)&index);
      return;
    }
    v19 = Item;
    if ( Item->fields._IsUse_k__BackingField )
    {
      v20 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v20 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v21 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v20, v20[4]);
      OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
      for ( i = 0LL; ; ++i )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)i >= *(int *)&listViewManager->fields.onChange[1].fields.method_is_virtual )
          break;
        SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
        if ( !SelectMessageIds_k__BackingField )
          goto LABEL_67;
        if ( i >= SelectMessageIds_k__BackingField->max_length )
          goto LABEL_68;
        RecommendAdviceMessageEntity_k__BackingField = v19->fields._RecommendAdviceMessageEntity_k__BackingField;
        if ( !RecommendAdviceMessageEntity_k__BackingField )
          goto LABEL_67;
        v25 = (char *)SelectMessageIds_k__BackingField + 4 * i;
        if ( *((_DWORD *)v25 + 8) == RecommendAdviceMessageEntity_k__BackingField->fields.id )
        {
          *((_DWORD *)v25 + 8) = -1;
          bodyMessageLabel = this->fields.bodyMessageLabel;
          if ( !bodyMessageLabel )
            goto LABEL_67;
          if ( i >= bodyMessageLabel->max_length )
            goto LABEL_68;
          listViewManager = bodyMessageLabel->m_Items[i];
          if ( !listViewManager )
            goto LABEL_67;
          UILabel__set_text(listViewManager, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          this->fields.cursorPos = i;
        }
      }
LABEL_45:
      v42 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, *(const MethodInfo **)&iKind);
      for ( j = 0; ; ++j )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (signed int)j >= *(_DWORD *)&listViewManager->fields.onChange[1].fields.method_is_virtual )
          break;
        bodyMessageHighlight = this->fields.bodyMessageHighlight;
        if ( !bodyMessageHighlight )
          goto LABEL_67;
        if ( j >= bodyMessageHighlight->max_length )
          goto LABEL_68;
        listViewManager = (UILabel_o *)bodyMessageHighlight->m_Items[j];
        if ( !listViewManager )
          goto LABEL_67;
        listViewManager = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)listViewManager,
                                         0LL);
        *(_QWORD *)&iKind = !v42 && (unsigned __int64)(j == this->fields.cursorPos);
        if ( !listViewManager )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, iKind, 0LL);
      }
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
      v46 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
        v46 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      }
      _9__38_0 = v46->static_fields->__9__38_0;
      if ( !_9__38_0 )
      {
        if ( !v46->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v46);
          v46 = RecommendSupportMessageSelectDialog___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v46->static_fields->__9;
        _9__38_0 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__38_0,
          v48,
          Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__,
          0LL);
        static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
        static_fields->__9__38_0 = _9__38_0;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v50, v51);
      }
      v52 = System_Linq_Enumerable__Where_int_(
              v45,
              (System_Func_TSource__bool__o *)_9__38_0,
              (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
      v53 = System_Linq_Enumerable__ToArray_int_(
              v52,
              (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
      decideButton = this->fields.decideButton;
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)v53;
      listViewManager = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( listViewManager )
      {
        SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)listViewManager,
                                                                                  *(const MethodInfo **)&iKind);
        listViewManager = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                         SelectMessageIds,
                                         v55,
                                         (const MethodInfo_2EC1748 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
        if ( decideButton )
        {
          UICommonButton__SetEnable(decideButton, ((unsigned __int8)listViewManager & 1) == 0, 0LL);
          RecommendSupportMessageSelectDialog__ModifyList(this, 0, v57);
          v27 = 1;
          goto LABEL_66;
        }
      }
LABEL_67:
      sub_1B9026C(listViewManager, *(_QWORD *)&iKind);
    }
    if ( !byte_4A6C13D )
    {
      sub_1B90010(&RecommendSupportMessageSelectDialog_TypeInfo, v18);
      byte_4A6C13D = 1;
    }
    if ( RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField
      && !v19->fields._IsUse_k__BackingField )
    {
      v40 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v40 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v41 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v40, v40[4]);
      OverwriteAssetSoundName__PlaySystemSe(v41, 2, 0LL);
      goto LABEL_45;
    }
    v28 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
    if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B90028(Method_RecommendSupportMessageSelectDialog_OnSelect__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    v30 = this->fields._SelectMessageIds_k__BackingField;
    if ( !v30 )
      goto LABEL_67;
    cursorPos = this->fields.cursorPos;
    if ( (unsigned int)cursorPos < v30->max_length )
    {
      v32 = (char *)v30 + 4 * cursorPos;
      v34 = *((_DWORD *)v32 + 8);
      v33 = (int32_t *)(v32 + 32);
      if ( v34 != -1 )
        goto LABEL_45;
      v35 = v19->fields._RecommendAdviceMessageEntity_k__BackingField;
      if ( !v35 )
        goto LABEL_67;
      *v33 = v35->fields.id;
      v36 = this->fields.bodyMessageLabel;
      if ( !v36 )
        goto LABEL_67;
      v37 = this->fields.cursorPos;
      if ( (unsigned int)v37 < v36->max_length )
      {
        listViewManager = v36->m_Items[v37];
        if ( !listViewManager )
          goto LABEL_67;
        UILabel__set_text(listViewManager, v35->fields.message, 0LL);
        v38 = System_Array__IndexOf_int_(
                this->fields._SelectMessageIds_k__BackingField,
                -1,
                (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___);
        if ( v38 == -1 )
          v39 = 0;
        else
          v39 = v38;
        this->fields.cursorPos = v39;
        goto LABEL_45;
      }
    }
LABEL_68:
    sub_1B90274(listViewManager, *(_QWORD *)&iKind);
  }
}


void __fastcall RecommendSupportMessageSelectDialog__Open(
        RecommendSupportMessageSelectDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UISprite_o *gameObject; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *Master_object; // x0
  UILabel_o *titleLabel; // x21
  RecommendAdviceMessageMaster_o *v24; // x20
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *resetLabel; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entities_39624200; // x0
  System_Collections_Generic_List_T__o *v30; // x20
  unsigned __int64 i; // x21
  BalanceConfig_c *v32; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x22
  struct UILabel_array *bodyMessageLabel; // x8
  UILabel_o *v35; // x22
  struct UISprite_array *bodyMessageHighlight; // x8
  bool v37; // w1
  struct UILabel_array *v38; // x8
  struct UISprite_array *v39; // x8
  struct UISprite_array *v40; // x8
  int32_t v41; // w9
  const MethodInfo *v42; // x1
  bool v43; // w20
  const MethodInfo *v44; // x3
  int32_t state; // w8
  int32_t category; // w1
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  System_Action_o *v49; // x20

  if ( (byte_4A6C099 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, callback);
    sub_1B90010(&Method_System_Array_IndexOf_int___, v4);
    sub_1B90010(&BalanceConfig_TypeInfo, v5);
    sub_1B90010(&Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___, v6);
    sub_1B90010(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__, v10);
    sub_1B90010(&LocalizationManager_TypeInfo, v11);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_EndOpen__, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v13);
    sub_1B90010(&StringLiteral_11009/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, v14);
    sub_1B90010(&StringLiteral_11011/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, v15);
    sub_1B90010(&StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_1B90010(&StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1B90010(&StringLiteral_11017/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, v18);
    sub_1B90010(&StringLiteral_1/*""*/, v19);
    byte_4A6C099 = 1;
  }
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  titleLabel = this->fields.titleLabel;
  v24 = (RecommendAdviceMessageMaster_o *)Master_object;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11011/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11009/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_60;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_60;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  resetLabel = this->fields.resetLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11017/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, 0LL);
  if ( !resetLabel )
    goto LABEL_60;
  UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)RecommendSupportSelectControl__get_SelectMessageIds(
                               (RecommendSupportSelectControl_o *)gameObject,
                               v21);
  if ( !v24 )
    goto LABEL_60;
  Entities_39624200 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities_39624200(
                                                                             v24,
                                                                             (System_Int32_array *)gameObject,
                                                                             0LL);
  v30 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  Entities_39624200,
                                                  (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
  for ( i = 0LL; ; ++i )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v32->static_fields->RecommendSupportAdviceMessageMax )
      break;
    gameObject = (UISprite_o *)BasicHelper__IsValidIndex_object_(
                                 v30,
                                 i,
                                 (const MethodInfo_2E7D3D4 *)Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_60;
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v30,
                                   i,
                                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject || !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= SelectMessageIds_k__BackingField->max_length )
        goto LABEL_61;
      SelectMessageIds_k__BackingField->m_Items[i + 1] = gameObject->fields.m_CachedPtr;
      bodyMessageLabel = this->fields.bodyMessageLabel;
      if ( !bodyMessageLabel )
        goto LABEL_60;
      if ( i >= bodyMessageLabel->max_length )
        goto LABEL_61;
      v35 = bodyMessageLabel->m_Items[i];
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v30,
                                   i,
                                   (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject )
        goto LABEL_60;
      if ( !v35 )
        goto LABEL_60;
      UILabel__set_text(v35, (System_String_o *)gameObject->fields.m_CancellationTokenSource, 0LL);
      bodyMessageHighlight = this->fields.bodyMessageHighlight;
      if ( !bodyMessageHighlight )
        goto LABEL_60;
      if ( i >= bodyMessageHighlight->max_length )
        goto LABEL_61;
      gameObject = bodyMessageHighlight->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_60;
      v37 = 1;
    }
    else
    {
      if ( !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= SelectMessageIds_k__BackingField->max_length )
        goto LABEL_61;
      SelectMessageIds_k__BackingField->m_Items[i + 1] = -1;
      v38 = this->fields.bodyMessageLabel;
      if ( !v38 )
        goto LABEL_60;
      if ( i >= v38->max_length )
        goto LABEL_61;
      gameObject = (UISprite_o *)v38->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v39 = this->fields.bodyMessageHighlight;
      if ( !v39 )
        goto LABEL_60;
      if ( i >= v39->max_length )
        goto LABEL_61;
      gameObject = v39->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_60;
      v37 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v37, 0LL);
  }
  gameObject = (UISprite_o *)System_Array__IndexOf_int_(
                               this->fields._SelectMessageIds_k__BackingField,
                               -1,
                               (const MethodInfo_2F88D58 *)Method_System_Array_IndexOf_int___);
  v40 = this->fields.bodyMessageHighlight;
  v41 = (_DWORD)gameObject == -1 ? 0 : (int)gameObject;
  this->fields.cursorPos = v41;
  if ( !v40 )
    goto LABEL_60;
  if ( v41 >= v40->max_length )
LABEL_61:
    sub_1B90274(gameObject, v21);
  gameObject = v40->m_Items[v41];
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v43 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, v42);
  if ( !byte_4A6C13C )
  {
    sub_1B90010(&RecommendSupportMessageSelectDialog_TypeInfo, v21);
    byte_4A6C13C = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v43;
  gameObject = (UISprite_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_60;
  UICommonButton__SetEnable((UICommonButton_o *)gameObject, 0, 0LL);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 0, v44);
    category = this->fields.category;
    this->fields.state = 2;
    RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v47);
    return;
  }
  if ( !state )
  {
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 1, v48);
      this->fields.state = 1;
      v49 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v49, (Il2CppObject *)this, Method_RecommendSupportMessageSelectDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v49, 1, 0LL);
      return;
    }
LABEL_60:
    sub_1B9026C(gameObject, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__SetCategory(
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
    listViewManager = (struct RecommendSupportMessageSelectListViewManager_o *)((__int64 (__fastcall *)(struct RecommendSupportMessageSelectListViewManager_o *, _QWORD, void *))listViewManager->klass->vtable._13_CreateList.method)(
                                                                                 listViewManager,
                                                                                 (unsigned int)kind,
                                                                                 listViewManager->klass[1]._1.image);
    this->fields.category = kind;
  }
  v10 = this->fields.listViewManager;
  if ( !v10 )
LABEL_9:
    sub_1B9026C(listViewManager, v8);
  if ( this->fields.state == 2 )
  {
    RecommendSupportMessageSelectListViewManager__ModifyList(this->fields.listViewManager, 0, v9);
    RecommendSupportMessageSelectDialog__ToInputState(this, 1, v11);
  }
  else
  {
    v12 = (ListViewManager_o *)this->fields.listViewManager;
    v10->fields.initMode = 1;
    ListViewManager__set_IsInput(v12, 0, 0LL);
    RecommendSupportMessageSelectListViewManager__RequestListObject(v10, 1, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__SetupFilterButton(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 *v10; // x8
  System_String_o *v11; // x0
  __int64 v12; // x1
  UILabel_o *filterLabel; // x8

  if ( (byte_4A6C0A2 & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&StringLiteral_11012/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/, v5);
    sub_1B90010(&StringLiteral_11014/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/, v6);
    sub_1B90010(&StringLiteral_11013/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/, v7);
    sub_1B90010(&StringLiteral_11016/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/, v8);
    sub_1B90010(&StringLiteral_11015/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/, v9);
    byte_4A6C0A2 = 1;
  }
  switch ( kind )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_11015/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/;
      break;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_11014/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/;
      break;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_11016/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/;
      break;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_11012/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_11013/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/;
      break;
  }
  v11 = LocalizationManager__Get((System_String_o *)*v10, 0LL);
  filterLabel = this->fields.filterLabel;
  if ( !filterLabel )
    sub_1B9026C(v11, v12);
  UILabel__set_text(filterLabel, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__ToInputState(
        RecommendSupportMessageSelectDialog_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct RecommendSupportMessageSelectListViewManager_o *listViewManager; // x20
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_4A6C09B & 1) == 0 )
  {
    sub_1B90010(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, changeMode);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog_OnSelect__, v5);
    byte_4A6C09B = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v7 = (RecommendSupportMessageSelectListViewManager_CallbackFunc_o *)sub_1B9025C(RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
  RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportMessageSelectDialog_OnSelect__,
    v8);
  if ( !listViewManager )
    sub_1B9026C(v9, v10);
  listViewManager->fields.FuncOnClick = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&listViewManager->fields.FuncOnClick, (int32_t)v7, v11, v12);
  if ( changeMode )
  {
    listViewManager->fields.initMode = 2;
    ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0LL);
    RecommendSupportMessageSelectListViewManager__RequestListObject(listViewManager, 2, v13);
  }
}


void __fastcall RecommendSupportMessageSelectDialog___OnClickDecide_b__35_0(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  RecommendSupportMessageSelectDialog___c_c *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__35_1; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v20; // x1
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x20
  System_Collections_Generic_IEnumerable_TSource__o *Message; // x0
  RecommendSupportData_o *v23; // x20
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v25; // x2

  if ( (byte_4A6C0A5 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_SequenceEqual_int___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_int___, v4);
    sub_1B90010(&System_Func_int__bool__TypeInfo, v5);
    sub_1B90010(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v7);
    sub_1B90010(&Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__, v8);
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v9);
    byte_4A6C0A5 = 1;
  }
  v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo);
    v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__35_1 = v10->static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__35_1 = (System_Func_int__bool__o *)sub_1B9025C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__35_1,
      v13,
      Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__35_1 = _9__35_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__35_1, (int32_t)_9__35_1, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_int_(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__35_1,
          (const MethodInfo_2ECC658 *)Method_System_Linq_Enumerable_Where_int___);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                               v17,
                                                               (const MethodInfo_2EC6DFC *)Method_System_Linq_Enumerable_ToArray_int___);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  RecommendSupportData_k__BackingField = Instance->fields._RecommendSupportData_k__BackingField;
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !RecommendSupportData_k__BackingField )
    goto LABEL_19;
  Message = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportData__GetMessage(
                                                                   RecommendSupportData_k__BackingField,
                                                                   Instance->fields._SelectIndex_k__BackingField,
                                                                   0LL);
  System_Linq_Enumerable__SequenceEqual_int_(
    Message,
    v18,
    (const MethodInfo_2EC1748 *)Method_System_Linq_Enumerable_SequenceEqual_int___);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (v23 = Instance->fields._RecommendSupportData_k__BackingField,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !v23
    || (RecommendSupportData__SetAdviceMessage(
          v23,
          Instance->fields._SelectIndex_k__BackingField,
          (System_Int32_array *)v18,
          0LL),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_2F1F1A0 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !Menu_object )
  {
LABEL_19:
    sub_1B9026C(Instance, v20);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    v25);
}


bool __fastcall RecommendSupportMessageSelectDialog__get_IsSelectLimit(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6C096 & 1) == 0 )
  {
    sub_1B90010(&RecommendSupportMessageSelectDialog_TypeInfo, v1);
    byte_4A6C096 = 1;
  }
  return RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField;
}


System_Int32_array *__fastcall RecommendSupportMessageSelectDialog__get_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  return this->fields._SelectMessageIds_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall RecommendSupportMessageSelectDialog__get_closeBtnObject(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A6C0A3 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A6C0A3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B9026C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__set_IsSelectLimit(bool value, const MethodInfo *method)
{
  if ( (byte_4A6C097 & 1) == 0 )
  {
    sub_1B90010(&RecommendSupportMessageSelectDialog_TypeInfo, method);
    byte_4A6C097 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectDialog__set_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SelectMessageIds_k__BackingField = value;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall RecommendSupportMessageSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6C0A6 & 1) == 0 )
  {
    sub_1B90010(&RecommendSupportMessageSelectDialog___c_TypeInfo, v1);
    byte_4A6C0A6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(RecommendSupportMessageSelectDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectDialog___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportMessageSelectDialog___c___ctor(
        RecommendSupportMessageSelectDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall RecommendSupportMessageSelectDialog___c___CheckSelectMessageNum_b__34_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


void __fastcall RecommendSupportMessageSelectDialog___c___OnClickCancel_b__36_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Menu_object; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4A6C0A7 & 1) == 0 )
  {
    sub_1B90010(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v2);
    byte_4A6C0A7 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_2F1F1A0 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !Menu_object )
  {
    sub_1B9026C(Instance, v4);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    v6);
}


bool __fastcall RecommendSupportMessageSelectDialog___c___OnClickDecide_b__35_1(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


bool __fastcall RecommendSupportMessageSelectDialog___c___OnClickReset_b__37_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


bool __fastcall RecommendSupportMessageSelectDialog___c___OnSelect_b__38_0(
        RecommendSupportMessageSelectDialog___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id >= 0;
}


void __fastcall RecommendSupportMessageSelectDialog___c__DisplayClass29_0___ctor(
        RecommendSupportMessageSelectDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog___c__DisplayClass29_0___Close_b__0(
        RecommendSupportMessageSelectDialog___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  RecommendSupportMessageSelectDialog_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(0LL, method);
  RecommendSupportMessageSelectDialog__Init(_4__this, method);
}