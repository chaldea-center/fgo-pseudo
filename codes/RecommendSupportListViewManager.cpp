void RecommendSupportListViewManager___ctor(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UIPanel_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct RecommendSupportSelectListViewObject_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596C51F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&RecommendSupportSelectListViewObject___TypeInfo);
    sub_2213A60(&UIPanel___TypeInfo);
    byte_596C51F = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UIPanel_array *)sub_2213B20(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v4->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectPanels, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (struct RecommendSupportSelectListViewObject_array *)sub_2213B20(
                                                               RecommendSupportSelectListViewObject___TypeInfo,
                                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectArray, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportListViewManager__Awake(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void RecommendSupportListViewManager__ClearItem(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportListViewManager___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C51B & 1) == 0 )
  {
    sub_2213A60(&System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__);
    sub_2213A60(&RecommendSupportListViewManager___c_TypeInfo);
    byte_596C51B = 1;
  }
  v4 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !*(&RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, method, v2);
    v4 = RecommendSupportListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__7_0 = (System_Action_object__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_2213CCC(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__7_0, v8, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0);
    v9 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v9->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__7_0, (int32_t)_9__7_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


void RecommendSupportListViewManager__ClearItem_41637768(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__58806224; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_596C51C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    byte_596C51C = 1;
  }
  IsValidIndex_object__58806224 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__58806224(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__58806224 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( LODWORD(objectArray->max_length) <= index )
      sub_2213CE4(IsValidIndex_object__58806224);
    IsValidIndex_object__58806224 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__58806224 )
LABEL_9:
      sub_2213CDC(IsValidIndex_object__58806224, v6);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__58806224, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewManager__CreateList(
        RecommendSupportListViewManager_o *this,
        int32_t maskPanelDepth,
        const MethodInfo *method)
{
  RecommendSupportListViewManager___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *objectPanels; // x20
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v9; // x22
  struct RecommendSupportListViewManager___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct System_Int32_array *v18; // x0
  struct System_Int32_array **p_cashedObjectPanelDepth; // x19
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  RecommendSupportListViewManager___c_c *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x19
  struct RecommendSupportListViewManager___c_StaticFields *v30; // x8
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v32; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596C51D & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____91713040);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UIPanel__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_UIPanel__int__TypeInfo);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__);
    sub_2213A60(&RecommendSupportListViewManager___c_TypeInfo);
    byte_596C51D = 1;
  }
  v5 = RecommendSupportListViewManager___c_TypeInfo;
  objectPanels = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectPanels;
  this->fields.cashedEditMaskPanelDepth = maskPanelDepth;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maskPanelDepth, method);
    v5 = RecommendSupportListViewManager___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__9_0 = (System_Func_object__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&maskPanelDepth, method);
      static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UIPanel__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v9, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0);
    v10 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v10->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__9_0, (int32_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v17,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v18;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_cashedObjectPanelDepth, (int32_t)v18, v20, v21, v22, v23, v24, v25);
  v28 = RecommendSupportListViewManager___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)*(p_cashedObjectPanelDepth - 2);
  if ( !*(&RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, v26, v27);
    v28 = RecommendSupportListViewManager___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__9_1 = (System_Action_T1__T2__o *)v30->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !*(&v28->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v28, v26, v27);
      v30 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__9_1 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_int__object____ctor(_9__9_1, v32, Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, 0);
    v33 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v33->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->__9__9_1, (int32_t)_9__9_1, v34, v35, v36, v37, v38, v39);
  }
  BasicHelper__ForEach_object__58796788(
    v29,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_3812AF4 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____91713040);
}


void RecommendSupportListViewManager__SetItem(
        RecommendSupportListViewManager_o *this,
        int32_t index,
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
  System_Object_array *objectArray; // x0
  const MethodInfo_3814FD0 *v15; // x2
  bool IsValidIndex_object__58806224; // w0
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x20
  bool v18; // w22
  System_Action_T1__T2__o *v19; // x0
  intptr_t *v20; // x8
  System_Action_int__T__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  RecommendSupportListViewManager___c_c *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__5_2; // x20
  Il2CppObject *v28; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596C519 & 1) == 0 )
  {
    sub_2213A60(&System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    sub_2213A60(&System_Action_int__UIPanel__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
    sub_2213A60(&Method_BasicHelper_ForEach_UIPanel___);
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__SetItem_b__5_2__);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__);
    sub_2213A60(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
    sub_2213A60(&RecommendSupportListViewManager___c_TypeInfo);
    byte_596C519 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  objectArray = (System_Object_array *)this->fields.objectArray;
  v15 = (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___;
  *(_DWORD *)(v5 + 24) = index;
  IsValidIndex_object__58806224 = BasicHelper__IsValidIndex_object__58806224(objectArray, index, v15);
  objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
  v18 = IsValidIndex_object__58806224;
  v19 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__UIPanel__TypeInfo);
  if ( v18 )
    v20 = (intptr_t *)&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__;
  else
    v20 = (intptr_t *)&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__;
  v21 = (System_Action_int__T__o *)v19;
  System_Action_int__object____ctor(v19, (Il2CppObject *)v5, *v20, 0);
  BasicHelper__ForEach_object__58796788(
    objectPanels,
    v21,
    (const MethodInfo_3812AF4 *)Method_BasicHelper_ForEach_UIPanel___);
  v24 = RecommendSupportListViewManager___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !*(&RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, v22, v23);
    v24 = RecommendSupportListViewManager___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__5_2 = (System_Action_object__o *)static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v22, v23);
      static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__5_2 = (System_Action_object__o *)sub_2213CCC(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__5_2, v28, Method_RecommendSupportListViewManager___c__SetItem_b__5_2__, 0);
    v29 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v29->__9__5_2 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v29->__9__5_2, (int32_t)_9__5_2, v30, v31, v32, v33, v34, v35);
  }
  BasicHelper__ForEach_object_(
    v25,
    (System_Action_T__o *)_9__5_2,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


void RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__58806224; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_596C51A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    byte_596C51A = 1;
  }
  IsValidIndex_object__58806224 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__58806224(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_3814FD0 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__58806224 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( LODWORD(objectArray->max_length) <= index )
      sub_2213CE4(IsValidIndex_object__58806224);
    IsValidIndex_object__58806224 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__58806224 )
LABEL_9:
      sub_2213CDC(IsValidIndex_object__58806224, v6);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__58806224, v6);
  }
}


void RecommendSupportListViewManager__UpdateQuestExpired(
        RecommendSupportListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  RecommendSupportListViewManager___c_c *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__10_0; // x20
  Il2CppObject *v8; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C51E & 1) == 0 )
  {
    sub_2213A60(&System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
    sub_2213A60(&Method_RecommendSupportListViewManager___c__UpdateQuestExpired_b__10_0__);
    sub_2213A60(&RecommendSupportListViewManager___c_TypeInfo);
    byte_596C51E = 1;
  }
  v4 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !*(&RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo, method, v2);
    v4 = RecommendSupportListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__10_0 = (System_Action_object__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_2213CCC(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(
      _9__10_0,
      v8,
      Method_RecommendSupportListViewManager___c__UpdateQuestExpired_b__10_0__,
      0);
    v9 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v9->__9__10_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__10_0, (int32_t)_9__10_0, v10, v11, v12, v13, v14, v15);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


void RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C520 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportListViewManager___c_TypeInfo);
    byte_596C520 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportListViewManager___c___ctor(RecommendSupportListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportListViewManager___c___ClearItem_b__7_0(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_2213CDC(this, 0);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_2213CDC(this, 0);
  return panel->fields.mDepth;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewManager___c___CreateList_b__9_1(
        RecommendSupportListViewManager___c_o *this,
        int32_t index,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !obj
    || (this = (RecommendSupportListViewManager___c_o *)obj->fields.itemDraw,
        obj->fields._ItemIndex_k__BackingField = index,
        !this) )
  {
    sub_2213CDC(this, *(_QWORD *)&index);
  }
  RecommendSupportListViewItemDraw__Init((RecommendSupportListViewItemDraw_o *)this, *(const MethodInfo **)&index);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void RecommendSupportListViewManager___c___SetItem_b__5_2(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_2213CDC(this, 0);
  RecommendSupportSelectListViewObject__SetItem(obj, (const MethodInfo *)obj);
}


void RecommendSupportListViewManager___c___UpdateQuestExpired_b__10_0(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_2213CDC(this, 0);
  RecommendSupportSelectListViewObject__UpdateQuestExpired(obj, (const MethodInfo *)obj);
}


void RecommendSupportListViewManager___c__DisplayClass5_0___ctor(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewManager___c__DisplayClass5_0___SetItem_b__0(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        int32_t i,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  RecommendSupportListViewManager___c__DisplayClass5_0_o *v6; // x21
  struct RecommendSupportListViewManager_o *_4__this; // x8
  struct System_Int32_array *cashedObjectPanelDepth; // x9
  int32_t cashedEditMaskPanelDepth; // w23
  int32_t v10; // w22
  __int64 v11; // x2
  bool v12; // w20

  v6 = this;
  if ( (byte_596C521 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C521 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( LODWORD(cashedObjectPanelDepth->max_length) <= i )
    sub_2213CE4(this);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v10 = cashedObjectPanelDepth->m_Items[i];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v12 = *((_BYTE *)this + 124) && v6->fields.index == i;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, *(_QWORD *)&i, v11);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_76657380(v12, 0);
  if ( !panel )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, v10 + (_DWORD)this * cashedEditMaskPanelDepth, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportListViewManager___c__DisplayClass5_0___SetItem_b__1(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        int32_t i,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  struct RecommendSupportListViewManager_o *_4__this; // x8
  struct System_Int32_array *cashedObjectPanelDepth; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_6;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_6;
  if ( LODWORD(cashedObjectPanelDepth->max_length) <= i )
    sub_2213CE4(this);
  if ( !panel )
LABEL_6:
    sub_2213CDC(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, cashedObjectPanelDepth->m_Items[i], 0);
}