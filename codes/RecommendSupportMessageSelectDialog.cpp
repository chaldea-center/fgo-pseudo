void __fastcall RecommendSupportMessageSelectDialog___ctor(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BalanceConfig_c *v10; // x0
  struct UILabel_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UISprite_array *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1

  if ( (byte_4B123A1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BaseDialog_TypeInfo, v4, v5);
    sub_1BCA7E0(&UILabel___TypeInfo, v6, v7);
    sub_1BCA7E0(&UISprite___TypeInfo, v8, v9);
    byte_4B123A1 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v10 = BalanceConfig_TypeInfo;
  }
  v11 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)v10->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageLabel = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bodyMessageLabel, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct UISprite_array *)sub_1BCA888(
                                   UISprite___TypeInfo,
                                   (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportAdviceMessageMax);
  this->fields.bodyMessageHighlight = v18;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.bodyMessageHighlight,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v25);
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
  RecommendSupportMessageSelectDialog___c_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__34_0; // x20
  Il2CppObject *v16; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t v24; // w0
  __int64 v25; // x1
  BalanceConfig_c *v26; // x8
  int32_t v27; // w19

  if ( (byte_4B12399 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_int____76879160, v5, v6);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__, v9, v10);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v11, v12);
    byte_4B12399 = 1;
  }
  v13 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, method);
    v13 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__34_0 = v13->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__34_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v2, v3);
    System_Func_int__bool____ctor(
      _9__34_0,
      v16,
      Method_RecommendSupportMessageSelectDialog___c__CheckSelectMessageNum_b__34_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = _9__34_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
      (int64_t)_9__34_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Count_int__49475144(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__34_0,
          (const MethodInfo_2F2EE48 *)Method_System_Linq_Enumerable_Count_int____76879160);
  v26 = BalanceConfig_TypeInfo;
  v27 = v24;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
    v26 = BalanceConfig_TypeInfo;
  }
  return v27 >= v26->static_fields->RecommendSupportAdviceMessageMax;
}


void __fastcall RecommendSupportMessageSelectDialog__Close(
        RecommendSupportMessageSelectDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t category; // w1
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x20

  if ( (byte_4B12397 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo, v8, v9);
    byte_4B12397 = 1;
  }
  v10 = sub_1BCAA2C(RecommendSupportMessageSelectDialog___c__DisplayClass29_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  category = this->fields.category;
  this->fields.state = 4;
  RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v26);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v10,
    Method_RecommendSupportMessageSelectDialog___c__DisplayClass29_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v30, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  BalanceConfig_c *v9; // x0
  struct System_Int32_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12395 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    byte_4B12395 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager) == 0LL) )
  {
    sub_1BCAA3C(gameObject, v7);
  }
  ListViewManager__DestroyList((ListViewManager_o *)gameObject, 0LL);
  this->fields.state = 0;
  this->fields.category = 0;
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = (struct System_Int32_array *)sub_1BCA888(
                                       int___TypeInfo,
                                       (unsigned int)v9->static_fields->RecommendSupportAdviceMessageMax);
  this->fields._SelectMessageIds_k__BackingField = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  if ( !byte_4B12414 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_TypeInfo, v5, v6);
    byte_4B12414 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v7;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (RecommendSupportMessageSelectListViewManager__ModifyList(listViewManager, isNeedSort, v6),
        (v9 = this->fields.listViewManager) == 0LL) )
  {
    sub_1BCAA3C(listViewManager, v5);
  }
  v9->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v9, 0, 0LL);
  RecommendSupportMessageSelectListViewManager__RequestListObject(v9, 3, v10);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickCancel(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  RecommendSupportMessageSelectDialog___c_c *v15; // x0
  System_Action_o *_9__36_0; // x20
  Il2CppObject *v17; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1239B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, v6, v7);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v8, v9);
    byte_4B1239B = 1;
  }
  v10 = Method_RecommendSupportMessageSelectDialog_OnClickCancel__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnClickCancel__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
  v15 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, v12);
    v15 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__36_0 = v15->static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__36_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(_9__36_0, v17, Method_RecommendSupportMessageSelectDialog___c__OnClickCancel_b__36_0__, 0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__36_0 = _9__36_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
      (int64_t)_9__36_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !this )
    sub_1BCAA3C(v15, v12);
  RecommendSupportMessageSelectDialog__Close(this, _9__36_0, v13);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickDecide(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B1239A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__, v6, v7);
    byte_4B1239A = 1;
  }
  v8 = Method_RecommendSupportMessageSelectDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnClickDecide__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectDialog__OnClickDecide_b__35_0__,
    0LL);
  RecommendSupportMessageSelectDialog__Close(this, v13, v14);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickFilter(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 category; // x8
  int32_t v8; // w1
  __int64 v9; // x1
  ListViewManager_o *listViewManager; // x0

  if ( (byte_4B1239E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnClickFilter__, method, v2);
    byte_4B1239E = 1;
  }
  v4 = Method_RecommendSupportMessageSelectDialog_OnClickFilter__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickFilter__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnClickFilter__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  category = this->fields.category;
  v8 = 0;
  if ( (unsigned int)category <= 4 )
    v8 = dword_C0B5F0[category];
  RecommendSupportMessageSelectDialog__SetCategory(this, v8, 0, v6);
  listViewManager = (ListViewManager_o *)this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BCAA3C(0LL, v9);
  ListViewManager__CheckScroll(listViewManager, 0, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__OnClickReset(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  const MethodInfo *v24; // x1
  il2cpp_array_size_t i; // w22
  UILabel_o *gameObject; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  struct UISprite_array *bodyMessageHighlight; // x8
  struct UISprite_array *v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  RecommendSupportMessageSelectDialog___c_c *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Func_int__bool__o *_9__37_0; // x21
  Il2CppObject *v37; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Int32_array *v46; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2

  if ( (byte_4B1239C & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v8, v9);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnClickReset__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__, v16, v17);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B1239C = 1;
  }
  v22 = Method_RecommendSupportMessageSelectDialog_OnClickReset__;
  if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnClickReset__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnClickReset__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
  for ( i = 0; ; ++i )
  {
    gameObject = (UILabel_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v24);
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
  v30 = this->fields.bodyMessageHighlight;
  this->fields.cursorPos = 0;
  if ( !v30 )
    goto LABEL_32;
  if ( !v30->max_length )
LABEL_33:
    sub_1BCAA44(gameObject, v24);
  gameObject = (UILabel_o *)v30->m_Items[0];
  if ( !gameObject )
    goto LABEL_32;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v34 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, v31);
    v34 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__37_0 = v34->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34, v31);
      v34 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__37_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v31, v32, v33);
    System_Func_int__bool____ctor(
      _9__37_0,
      v37,
      Method_RecommendSupportMessageSelectDialog___c__OnClickReset_b__37_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = _9__37_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__37_0,
      (int64_t)_9__37_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__Where_int_(
          v35,
          (System_Func_TSource__bool__o *)_9__37_0,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v46 = System_Linq_Enumerable__ToArray_int_(
          v45,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  decideButton = this->fields.decideButton;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)v46;
  gameObject = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject
    || (SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)gameObject,
                                                                                  v24),
        gameObject = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                    SelectMessageIds,
                                    v48,
                                    (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___),
        !decideButton) )
  {
LABEL_32:
    sub_1BCAA3C(gameObject, v24);
  }
  UICommonButton__SetEnable(decideButton, ((unsigned __int8)gameObject & 1) == 0, 0LL);
  RecommendSupportMessageSelectDialog__ModifyList(this, 0, v50);
  RecommendSupportMessageSelectDialog__ToInputState(this, 1, v51);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__OnSelect(
        RecommendSupportMessageSelectDialog_o *this,
        int32_t iKind,
        int32_t index,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *listViewManager; // x0
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v28; // x1
  RecommendSupportMessageSelectListViewItem_o *v29; // x20
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  unsigned __int64 i; // x21
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x8
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  char *v35; // x8
  struct UILabel_array *bodyMessageLabel; // x8
  bool v37; // w1
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct System_Int32_array *v40; // x8
  __int64 cursorPos; // x9
  char *v42; // x9
  int32_t *v43; // x9
  int v44; // t1
  struct RecommendAdviceMessageEntity_o *v45; // x8
  struct UILabel_array *v46; // x9
  __int64 v47; // x10
  int32_t v48; // w0
  int32_t v49; // w8
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  __int64 v52; // x2
  __int64 v53; // x3
  bool v54; // w20
  il2cpp_array_size_t j; // w21
  struct UISprite_array *bodyMessageHighlight; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x20
  RecommendSupportMessageSelectDialog___c_c *v58; // x0
  System_Func_int__bool__o *_9__38_0; // x21
  Il2CppObject *v60; // x22
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Int32_array *v69; // x0
  UICommonButton_o *decideButton; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds; // x0
  const MethodInfo *v73; // x2

  if ( (byte_4B1239D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&iKind, *(_QWORD *)&index);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SequenceEqual_int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v12, v13);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnSelect__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__, v20, v21);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B1239D = 1;
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
      v37 = 0;
LABEL_66:
      RecommendSupportMessageSelectDialog__ToInputState(this, v37, *(const MethodInfo **)&index);
      return;
    }
    v29 = Item;
    if ( Item->fields._IsUse_k__BackingField )
    {
      v30 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
      for ( i = 0LL; ; ++i )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&iKind);
          listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        }
        if ( (__int64)i >= *(int *)&listViewManager->fields.onChange[1].fields.method_is_virtual )
          break;
        SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
        if ( !SelectMessageIds_k__BackingField )
          goto LABEL_67;
        if ( i >= SelectMessageIds_k__BackingField->max_length )
          goto LABEL_68;
        RecommendAdviceMessageEntity_k__BackingField = v29->fields._RecommendAdviceMessageEntity_k__BackingField;
        if ( !RecommendAdviceMessageEntity_k__BackingField )
          goto LABEL_67;
        v35 = (char *)SelectMessageIds_k__BackingField + 4 * i;
        if ( *((_DWORD *)v35 + 8) == RecommendAdviceMessageEntity_k__BackingField->fields.id )
        {
          *((_DWORD *)v35 + 8) = -1;
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
      v54 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, *(const MethodInfo **)&iKind);
      for ( j = 0; ; ++j )
      {
        listViewManager = (UILabel_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&iKind);
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
        *(_QWORD *)&iKind = !v54 && (unsigned __int64)(j == this->fields.cursorPos);
        if ( !listViewManager )
          goto LABEL_67;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, iKind, 0LL);
      }
      v57 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
      v58 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, *(_QWORD *)&iKind);
        v58 = RecommendSupportMessageSelectDialog___c_TypeInfo;
      }
      _9__38_0 = v58->static_fields->__9__38_0;
      if ( !_9__38_0 )
      {
        if ( !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58, *(_QWORD *)&iKind);
          v58 = RecommendSupportMessageSelectDialog___c_TypeInfo;
        }
        v60 = (Il2CppObject *)v58->static_fields->__9;
        _9__38_0 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, *(_QWORD *)&iKind, v52, v53);
        System_Func_int__bool____ctor(
          _9__38_0,
          v60,
          Method_RecommendSupportMessageSelectDialog___c__OnSelect_b__38_0__,
          0LL);
        static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
        static_fields->__9__38_0 = _9__38_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
          (int64_t)_9__38_0,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67);
      }
      v68 = System_Linq_Enumerable__Where_int_(
              v57,
              (System_Func_TSource__bool__o *)_9__38_0,
              (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
      v69 = System_Linq_Enumerable__ToArray_int_(
              v68,
              (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      decideButton = this->fields.decideButton;
      v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
      listViewManager = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( listViewManager )
      {
        SelectMessageIds = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendSupportSelectControl__get_SelectMessageIds(
                                                                                  (RecommendSupportSelectControl_o *)listViewManager,
                                                                                  *(const MethodInfo **)&iKind);
        listViewManager = (UILabel_o *)System_Linq_Enumerable__SequenceEqual_int_(
                                         SelectMessageIds,
                                         v71,
                                         (const MethodInfo_2F4642C *)Method_System_Linq_Enumerable_SequenceEqual_int___);
        if ( decideButton )
        {
          UICommonButton__SetEnable(decideButton, ((unsigned __int8)listViewManager & 1) == 0, 0LL);
          RecommendSupportMessageSelectDialog__ModifyList(this, 0, v73);
          v37 = 1;
          goto LABEL_66;
        }
      }
LABEL_67:
      sub_1BCAA3C(listViewManager, *(_QWORD *)&iKind);
    }
    if ( !byte_4B12415 )
    {
      sub_1BCA7E0(&RecommendSupportMessageSelectDialog_TypeInfo, v28, *(_QWORD *)&index);
      byte_4B12415 = 1;
    }
    if ( RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField
      && !v29->fields._IsUse_k__BackingField )
    {
      v50 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
      if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnSelect__);
      v51 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 2, 0LL);
      goto LABEL_45;
    }
    v38 = Method_RecommendSupportMessageSelectDialog_OnSelect__;
    if ( (*((_BYTE *)Method_RecommendSupportMessageSelectDialog_OnSelect__ + 83) & 2) != 0 )
      v38 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportMessageSelectDialog_OnSelect__);
    v39 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v38, v38[4]);
    OverwriteAssetSoundName__PlaySystemSe(v39, 0, 0LL);
    v40 = this->fields._SelectMessageIds_k__BackingField;
    if ( !v40 )
      goto LABEL_67;
    cursorPos = this->fields.cursorPos;
    if ( (unsigned int)cursorPos < v40->max_length )
    {
      v42 = (char *)v40 + 4 * cursorPos;
      v44 = *((_DWORD *)v42 + 8);
      v43 = (int32_t *)(v42 + 32);
      if ( v44 != -1 )
        goto LABEL_45;
      v45 = v29->fields._RecommendAdviceMessageEntity_k__BackingField;
      if ( !v45 )
        goto LABEL_67;
      *v43 = v45->fields.id;
      v46 = this->fields.bodyMessageLabel;
      if ( !v46 )
        goto LABEL_67;
      v47 = this->fields.cursorPos;
      if ( (unsigned int)v47 < v46->max_length )
      {
        listViewManager = v46->m_Items[v47];
        if ( !listViewManager )
          goto LABEL_67;
        UILabel__set_text(listViewManager, v45->fields.message, 0LL);
        v48 = System_Array__IndexOf_int_(
                this->fields._SelectMessageIds_k__BackingField,
                -1,
                (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
        if ( v48 == -1 )
          v49 = 0;
        else
          v49 = v48;
        this->fields.cursorPos = v49;
        goto LABEL_45;
      }
    }
LABEL_68:
    sub_1BCAA44(listViewManager, *(_QWORD *)&iKind);
  }
}


void __fastcall RecommendSupportMessageSelectDialog__Open(
        RecommendSupportMessageSelectDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  UISprite_o *gameObject; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  Il2CppObject *Master_object; // x0
  __int64 v40; // x1
  UILabel_o *titleLabel; // x21
  RecommendAdviceMessageMaster_o *v42; // x20
  UILabel_o *explanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  UILabel_o *resetLabel; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entities_40298252; // x0
  __int64 v48; // x1
  System_Collections_Generic_List_T__o *v49; // x20
  unsigned __int64 i; // x21
  BalanceConfig_c *v51; // x0
  struct System_Int32_array *SelectMessageIds_k__BackingField; // x22
  struct UILabel_array *bodyMessageLabel; // x8
  UILabel_o *v54; // x22
  struct UISprite_array *bodyMessageHighlight; // x8
  bool v56; // w1
  struct UILabel_array *v57; // x8
  struct UISprite_array *v58; // x8
  struct UISprite_array *v59; // x8
  int32_t v60; // w9
  const MethodInfo *v61; // x1
  __int64 v62; // x2
  bool v63; // w20
  const MethodInfo *v64; // x3
  int32_t state; // w8
  int32_t category; // w1
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_o *v72; // x20

  if ( (byte_4B12396 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, v4, v5);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_EndOpen__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_11139/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11141/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11147/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v34, v35);
    byte_4B12396 = 1;
  }
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  titleLabel = this->fields.titleLabel;
  v42 = (RecommendAdviceMessageMaster_o *)Master_object;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11141/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_60;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_60;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  decideLabel = this->fields.decideLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_60;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_60;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  resetLabel = this->fields.resetLabel;
  gameObject = (UISprite_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11147/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_RESET"*/, 0LL);
  if ( !resetLabel )
    goto LABEL_60;
  UILabel__set_text(resetLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UISprite_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)RecommendSupportSelectControl__get_SelectMessageIds(
                               (RecommendSupportSelectControl_o *)gameObject,
                               v37);
  if ( !v42 )
    goto LABEL_60;
  Entities_40298252 = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities_40298252(
                                                                             v42,
                                                                             (System_Int32_array *)gameObject,
                                                                             0LL);
  v49 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  Entities_40298252,
                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendAdviceMessageEntity___);
  for ( i = 0LL; ; ++i )
  {
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
      v51 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)i >= v51->static_fields->RecommendSupportAdviceMessageMax )
      break;
    gameObject = (UISprite_o *)BasicHelper__IsValidIndex_object_(
                                 v49,
                                 i,
                                 (const MethodInfo_2F01BC4 *)Method_BasicHelper_IsValidIndex_RecommendAdviceMessageEntity___);
    SelectMessageIds_k__BackingField = this->fields._SelectMessageIds_k__BackingField;
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v49 )
        goto LABEL_60;
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v49,
                                   i,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
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
      v54 = bodyMessageLabel->m_Items[i];
      gameObject = (UISprite_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)v49,
                                   i,
                                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_RecommendAdviceMessageEntity__get_Item__);
      if ( !gameObject )
        goto LABEL_60;
      if ( !v54 )
        goto LABEL_60;
      UILabel__set_text(v54, (System_String_o *)gameObject->fields.m_CancellationTokenSource, 0LL);
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
      v56 = 1;
    }
    else
    {
      if ( !SelectMessageIds_k__BackingField )
        goto LABEL_60;
      if ( i >= SelectMessageIds_k__BackingField->max_length )
        goto LABEL_61;
      SelectMessageIds_k__BackingField->m_Items[i + 1] = -1;
      v57 = this->fields.bodyMessageLabel;
      if ( !v57 )
        goto LABEL_60;
      if ( i >= v57->max_length )
        goto LABEL_61;
      gameObject = (UISprite_o *)v57->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v58 = this->fields.bodyMessageHighlight;
      if ( !v58 )
        goto LABEL_60;
      if ( i >= v58->max_length )
        goto LABEL_61;
      gameObject = v58->m_Items[i];
      if ( !gameObject )
        goto LABEL_60;
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_60;
      v56 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v56, 0LL);
  }
  gameObject = (UISprite_o *)System_Array__IndexOf_int_(
                               this->fields._SelectMessageIds_k__BackingField,
                               -1,
                               (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  v59 = this->fields.bodyMessageHighlight;
  v60 = (_DWORD)gameObject == -1 ? 0 : (int)gameObject;
  this->fields.cursorPos = v60;
  if ( !v59 )
    goto LABEL_60;
  if ( v60 >= v59->max_length )
LABEL_61:
    sub_1BCAA44(gameObject, v37);
  gameObject = v59->m_Items[v60];
  if ( !gameObject )
    goto LABEL_60;
  gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v63 = RecommendSupportMessageSelectDialog__CheckSelectMessageNum(this, v61);
  if ( !byte_4B12414 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_TypeInfo, v37, v62);
    byte_4B12414 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = v63;
  gameObject = (UISprite_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_60;
  UICommonButton__SetEnable((UICommonButton_o *)gameObject, 0, 0LL);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 0, v64);
    category = this->fields.category;
    this->fields.state = 2;
    RecommendSupportMessageSelectDialog__SetCategory(this, category, 0, v67);
    return;
  }
  if ( !state )
  {
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      RecommendSupportMessageSelectDialog__SetCategory(this, this->fields.category, 1, v68);
      this->fields.state = 1;
      v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v69, v70, v71);
      System_Action___ctor(v72, (Il2CppObject *)this, Method_RecommendSupportMessageSelectDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v72, 1, 0LL);
      return;
    }
LABEL_60:
    sub_1BCAA3C(gameObject, v37);
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
    sub_1BCAA3C(listViewManager, v8);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 *v15; // x8
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *filterLabel; // x8

  if ( (byte_4B1239F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&StringLiteral_11142/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_11144/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_11143/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11146/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11145/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/, v13, v14);
    byte_4B1239F = 1;
  }
  switch ( kind )
  {
    case 1:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v15 = &StringLiteral_11145/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_COMPOSITION"*/;
      break;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v15 = &StringLiteral_11144/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_CLASSIFICATION"*/;
      break;
    case 3:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v15 = &StringLiteral_11146/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_EFFECT"*/;
      break;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v15 = &StringLiteral_11142/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ADVICE"*/;
      break;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind);
      v15 = &StringLiteral_11143/*"RECOMMEND_SUPPORT_ADVICE_MESSAGE_FILTER_ALL"*/;
      break;
  }
  v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
  filterLabel = this->fields.filterLabel;
  if ( !filterLabel )
    sub_1BCAA3C(v16, v17);
  UILabel__set_text(filterLabel, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectDialog__ToInputState(
        RecommendSupportMessageSelectDialog_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  struct RecommendSupportMessageSelectListViewManager_o *listViewManager; // x20
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v9; // x22
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

  if ( (byte_4B12398 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, changeMode, method);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog_OnSelect__, v6, v7);
    byte_4B12398 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v9 = (RecommendSupportMessageSelectListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                        RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo,
                                                                        changeMode,
                                                                        method,
                                                                        v3);
  RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_RecommendSupportMessageSelectDialog_OnSelect__,
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
    RecommendSupportMessageSelectListViewManager__RequestListObject(listViewManager, 2, v19);
  }
}


void __fastcall RecommendSupportMessageSelectDialog___OnClickDecide_b__35_0(
        RecommendSupportMessageSelectDialog_o *this,
        const MethodInfo *method)
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
  RecommendSupportMessageSelectDialog___c_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *SelectMessageIds_k__BackingField; // x19
  System_Func_int__bool__o *_9__35_1; // x20
  Il2CppObject *v20; // x21
  struct RecommendSupportMessageSelectDialog___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x19
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v31; // x1
  RecommendSupportData_o *RecommendSupportData_k__BackingField; // x20
  Il2CppObject *Menu_object; // x19

  if ( (byte_4B123A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v5, v6);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__, v13, v14);
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v15, v16);
    byte_4B123A2 = 1;
  }
  v17 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  SelectMessageIds_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SelectMessageIds_k__BackingField;
  if ( !RecommendSupportMessageSelectDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectDialog___c_TypeInfo, method);
    v17 = RecommendSupportMessageSelectDialog___c_TypeInfo;
  }
  _9__35_1 = v17->static_fields->__9__35_1;
  if ( !_9__35_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, method);
      v17 = RecommendSupportMessageSelectDialog___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__35_1 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v2, v3);
    System_Func_int__bool____ctor(
      _9__35_1,
      v20,
      Method_RecommendSupportMessageSelectDialog___c__OnClickDecide_b__35_1__,
      0LL);
    static_fields = RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields;
    static_fields->__9__35_1 = _9__35_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__35_1,
      (int64_t)_9__35_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          SelectMessageIds_k__BackingField,
          (System_Func_TSource__bool__o *)_9__35_1,
          (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (RecommendSupportData_k__BackingField = Instance->fields._RecommendSupportData_k__BackingField,
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !RecommendSupportData_k__BackingField
    || (RecommendSupportData__SetAdviceMessage(
          RecommendSupportData_k__BackingField,
          Instance->fields._SelectIndex_k__BackingField,
          v29,
          0LL),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !Menu_object )
  {
    sub_1BCAA3C(Instance, v31);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    0LL);
}


bool __fastcall RecommendSupportMessageSelectDialog__get_IsSelectLimit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12393 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_TypeInfo, v1, v2);
    byte_4B12393 = 1;
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B123A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B123A0 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}


void __fastcall RecommendSupportMessageSelectDialog__set_IsSelectLimit(bool value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12394 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog_TypeInfo, method, v2);
    byte_4B12394 = 1;
  }
  RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectDialog__set_SelectMessageIds(
        RecommendSupportMessageSelectDialog_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SelectMessageIds_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SelectMessageIds_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportMessageSelectDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B123A3 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectDialog___c_TypeInfo, v1, v2);
    byte_4B123A3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportMessageSelectDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportMessageSelectDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  RecommendSupportSelectControl_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *Menu_object; // x19

  if ( (byte_4B123A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v3, v4);
    byte_4B123A4 = 1;
  }
  Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Menu_object = RecommendSupportSelectControl__GetMenu_object_(
                        Instance,
                        (const MethodInfo_2FA4760 *)Method_RecommendSupportSelectControl_GetMenu_RecommendSupportSelectListViewMenu___),
        (Instance = (RecommendSupportSelectControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__)) == 0LL)
    || !Menu_object )
  {
    sub_1BCAA3C(Instance, v6);
  }
  RecommendSupportSelectListViewMenu__Redisplay(
    (RecommendSupportSelectListViewMenu_o *)Menu_object,
    Instance->fields._SelectIndex_k__BackingField,
    0LL);
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
    sub_1BCAA3C(0LL, method);
  RecommendSupportMessageSelectDialog__Init(_4__this, method);
}