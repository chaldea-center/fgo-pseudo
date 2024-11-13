void __fastcall RecommendSupportListViewManager___ctor(
        RecommendSupportListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  struct UIPanel_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct RecommendSupportSelectListViewObject_array *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B1241B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&RecommendSupportSelectListViewObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&UIPanel___TypeInfo, v6, v7);
    byte_4B1241B = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (struct UIPanel_array *)sub_1BCA888(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v8->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectPanels, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (struct RecommendSupportSelectListViewObject_array *)sub_1BCA888(
                                                               RecommendSupportSelectListViewObject___TypeInfo,
                                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v16;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectArray, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportListViewManager__Awake(
        RecommendSupportListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportListViewManager__ClearItem(
        RecommendSupportListViewManager_o *this,
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
  RecommendSupportListViewManager___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B12418 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, v7, v8);
    sub_1BCA7E0(&RecommendSupportListViewManager___c_TypeInfo, v9, v10);
    byte_4B12418 = 1;
  }
  v11 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, method);
    v11 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__7_0 = (System_Action_object__o *)v11->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_RecommendSupportSelectListViewObject__TypeInfo,
                                           method,
                                           v2,
                                           v3);
    System_Action_object____ctor(_9__7_0, v14, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__ClearItem_33170828(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__49290248; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4B12419 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index, method);
    byte_4B12419 = 1;
  }
  IsValidIndex_object__49290248 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__49290248(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__49290248 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BCAA44(IsValidIndex_object__49290248, v6);
    IsValidIndex_object__49290248 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__49290248 )
LABEL_9:
      sub_1BCAA3C(IsValidIndex_object__49290248, v6);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__49290248, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__CreateList(
        RecommendSupportListViewManager_o *this,
        int32_t maskPanelDepth,
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  RecommendSupportListViewManager___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *objectPanels; // x20
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v23; // x22
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Int32_array *v32; // x0
  struct System_Int32_array **p_cashedObjectPanelDepth; // x19
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  RecommendSupportListViewManager___c_c *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x19
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v46; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B1241A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&maskPanelDepth, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76841536, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_UIPanel__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&System_Func_UIPanel__int__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, v14, v15);
    sub_1BCA7E0(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, v16, v17);
    sub_1BCA7E0(&RecommendSupportListViewManager___c_TypeInfo, v18, v19);
    byte_4B1241A = 1;
  }
  this->fields.cashedEditMaskPanelDepth = maskPanelDepth;
  v20 = RecommendSupportListViewManager___c_TypeInfo;
  objectPanels = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectPanels;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, *(_QWORD *)&maskPanelDepth);
    v20 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v20->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, *(_QWORD *)&maskPanelDepth);
      v20 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_UIPanel__int__TypeInfo,
                                              *(_QWORD *)&maskPanelDepth,
                                              method,
                                              v3);
    System_Func_object__int____ctor(_9__9_0, v23, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v32;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_1BCA784((PartyOrganizationUtility_o *)p_cashedObjectPanelDepth, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v43 = RecommendSupportListViewManager___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_T__o *)*(p_cashedObjectPanelDepth - 2);
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, v40);
    v43 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_1 = (System_Action_T1__T2__o *)v43->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v40);
      v43 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__9_1 = (System_Action_T1__T2__o *)sub_1BCAA2C(
                                           System_Action_int__RecommendSupportSelectListViewObject__TypeInfo,
                                           v40,
                                           v41,
                                           v42);
    System_Action_int__object____ctor(
      _9__9_1,
      v46,
      Method_RecommendSupportListViewManager___c__CreateList_b__9_1__,
      0LL);
    v47 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v47->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->__9__9_1, (int64_t)_9__9_1, v48, v49, v50, v51, v52, v53);
  }
  BasicHelper__ForEach_object__49282948(
    v44,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_2EFFF84 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76841536);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItem(
        RecommendSupportListViewManager_o *this,
        int32_t index,
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x20
  System_Action_T1__T2__o *v35; // x22
  RecommendSupportListViewManager___c_c *v36; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__5_1; // x20
  Il2CppObject *v39; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B12416 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&System_Action_int__UIPanel__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_UIPanel___, v10, v11);
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, v12, v13);
    sub_1BCA7E0(&Method_RecommendSupportListViewManager___c__SetItem_b__5_1__, v14, v15);
    sub_1BCA7E0(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__, v16, v17);
    sub_1BCA7E0(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&RecommendSupportListViewManager___c_TypeInfo, v20, v21);
    byte_4B12416 = 1;
  }
  v22 = sub_1BCAA2C(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&index, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_DWORD *)(v22 + 24) = index;
  if ( BasicHelper__IsValidIndex_object__49290248(
         (System_Object_array *)this->fields.objectArray,
         index,
         (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___) )
  {
    objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
    v35 = (System_Action_T1__T2__o *)sub_1BCAA2C(System_Action_int__UIPanel__TypeInfo, v31, v32, v33);
    System_Action_int__object____ctor(
      v35,
      (Il2CppObject *)v22,
      Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__,
      0LL);
    BasicHelper__ForEach_object__49282948(
      objectPanels,
      (System_Action_int__T__o *)v35,
      (const MethodInfo_2EFFF84 *)Method_BasicHelper_ForEach_UIPanel___);
  }
  v36 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, v31);
    v36 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__5_1 = (System_Action_object__o *)v36->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v31);
      v36 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__5_1 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_RecommendSupportSelectListViewObject__TypeInfo,
                                           v31,
                                           v32,
                                           v33);
    System_Action_object____ctor(_9__5_1, v39, Method_RecommendSupportListViewManager___c__SetItem_b__5_1__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_1, (int64_t)_9__5_1, v41, v42, v43, v44, v45, v46);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__5_1,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__49290248; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4B12417 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index, method);
    byte_4B12417 = 1;
  }
  IsValidIndex_object__49290248 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__49290248(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2F01C08 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__49290248 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BCAA44(IsValidIndex_object__49290248, v6);
    IsValidIndex_object__49290248 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__49290248 )
LABEL_9:
      sub_1BCAA3C(IsValidIndex_object__49290248, v6);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__49290248, v6);
  }
}


void __fastcall RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1241C & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportListViewManager___c_TypeInfo, v1, v2);
    byte_4B1241C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall RecommendSupportListViewManager___c___ctor(
        RecommendSupportListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportListViewManager___c___ClearItem_b__7_0(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BCAA3C(this, 0LL);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t __fastcall RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_1BCAA3C(this, 0LL);
  return panel->fields.mDepth;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager___c___CreateList_b__9_1(
        RecommendSupportListViewManager___c_o *this,
        int32_t index,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !obj )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  RecommendSupportSelectListViewObject__Init(obj, index, (const MethodInfo *)obj);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void __fastcall RecommendSupportListViewManager___c___SetItem_b__5_1(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BCAA3C(this, 0LL);
  RecommendSupportSelectListViewObject__SetItem(obj, (const MethodInfo *)obj);
}


void __fastcall RecommendSupportListViewManager___c__DisplayClass5_0___ctor(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager___c__DisplayClass5_0___SetItem_b__0(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        int32_t i,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  RecommendSupportListViewManager___c__DisplayClass5_0_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  struct RecommendSupportListViewManager_o *_4__this; // x8
  struct System_Int32_array *cashedObjectPanelDepth; // x9
  int32_t cashedEditMaskPanelDepth; // w22
  int32_t v12; // w23
  bool v13; // w20

  v6 = this;
  if ( (byte_4B1241D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&i, panel);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_1BCA7E0(
                                                                       &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                       v7,
                                                                       v8);
    byte_4B1241D = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( cashedObjectPanelDepth->max_length <= i )
    sub_1BCAA44(this, *(_QWORD *)&i);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v12 = cashedObjectPanelDepth->m_Items[i + 1];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v13 = *((_BYTE *)&this[3].fields.index + 4) && v6->fields.index == i;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, *(_QWORD *)&i);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_63023884(v13, 0LL);
  if ( !panel )
LABEL_14:
    sub_1BCAA3C(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, v12 + (_DWORD)this * cashedEditMaskPanelDepth, 0LL);
}