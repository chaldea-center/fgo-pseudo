void RecommendSupportListViewManager___ctor(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UIPanel_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct RecommendSupportSelectListViewObject_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC32ED & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&RecommendSupportSelectListViewObject___TypeInfo);
    sub_1C713B0(&UIPanel___TypeInfo);
    byte_4CC32ED = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct UIPanel_array *)sub_1C71458(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v3->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectPanels, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct RecommendSupportSelectListViewObject_array *)sub_1C71458(
                                                               RecommendSupportSelectListViewObject___TypeInfo,
                                                               (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectArray, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportListViewManager__Awake(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void RecommendSupportListViewManager__ClearItem(RecommendSupportListViewManager_o *this, const MethodInfo *method)
{
  RecommendSupportListViewManager___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v6; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC32EA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__);
    sub_1C713B0(&RecommendSupportListViewManager___c_TypeInfo);
    byte_4CC32EA = 1;
  }
  v3 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v3 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__7_0 = (System_Action_object__o *)v3->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_1C715FC(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__7_0, v6, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


void RecommendSupportListViewManager__ClearItem_35137576(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__51615620; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4CC32EB & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    byte_4CC32EB = 1;
  }
  IsValidIndex_object__51615620 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__51615620(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_3139784 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__51615620 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( LODWORD(objectArray->max_length) <= index )
      sub_1C71610(IsValidIndex_object__51615620);
    IsValidIndex_object__51615620 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__51615620 )
LABEL_9:
      sub_1C71608(IsValidIndex_object__51615620, v6);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__51615620, v6);
  }
}


void RecommendSupportListViewManager__CreateList(
        RecommendSupportListViewManager_o *this,
        int32_t maskPanelDepth,
        const MethodInfo *method)
{
  RecommendSupportListViewManager___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *objectPanels; // x20
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v8; // x22
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct System_Int32_array *v17; // x0
  struct System_Int32_array **p_cashedObjectPanelDepth; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  RecommendSupportListViewManager___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x19
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v28; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4CC32EC & 1) == 0 )
  {
    sub_1C713B0(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____78641480);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UIPanel__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&System_Func_UIPanel__int__TypeInfo);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__);
    sub_1C713B0(&RecommendSupportListViewManager___c_TypeInfo);
    byte_4CC32EC = 1;
  }
  this->fields.cashedEditMaskPanelDepth = maskPanelDepth;
  v5 = RecommendSupportListViewManager___c_TypeInfo;
  objectPanels = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectPanels;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v5 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v5->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_UIPanel__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v8, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_3180FD8 *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v17;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_cashedObjectPanelDepth, (int32_t)v17, v19, v20, v21, v22, v23, v24);
  v25 = RecommendSupportListViewManager___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_T__o *)*(p_cashedObjectPanelDepth - 2);
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v25 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_1 = (System_Action_T1__T2__o *)v25->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__9_1 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_int__object____ctor(_9__9_1, v28, Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, 0);
    v29 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v29->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v29->__9__9_1, (int32_t)_9__9_1, v30, v31, v32, v33, v34, v35);
  }
  BasicHelper__ForEach_object__51605748(
    v26,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_31370F4 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____78641480);
}


void RecommendSupportListViewManager__SetItem(
        RecommendSupportListViewManager_o *this,
        int32_t index,
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
  bool IsValidIndex_object__51615620; // w0
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x20
  bool v16; // w23
  System_Action_T1__T2__o *v17; // x0
  System_Action_int__T__o *v18; // x22
  intptr_t *v19; // x8
  RecommendSupportListViewManager___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__5_2; // x20
  Il2CppObject *v23; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC32E8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    sub_1C713B0(&System_Action_int__UIPanel__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
    sub_1C713B0(&Method_BasicHelper_ForEach_UIPanel___);
    sub_1C713B0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__SetItem_b__5_2__);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__);
    sub_1C713B0(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__);
    sub_1C713B0(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
    sub_1C713B0(&RecommendSupportListViewManager___c_TypeInfo);
    byte_4CC32E8 = 1;
  }
  v5 = sub_1C715FC(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = index;
  IsValidIndex_object__51615620 = BasicHelper__IsValidIndex_object__51615620(
                                    (System_Object_array *)this->fields.objectArray,
                                    index,
                                    (const MethodInfo_3139784 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
  v16 = IsValidIndex_object__51615620;
  v17 = (System_Action_T1__T2__o *)sub_1C715FC(System_Action_int__UIPanel__TypeInfo);
  v18 = (System_Action_int__T__o *)v17;
  if ( v16 )
    v19 = &Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__;
  else
    v19 = &Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__;
  System_Action_int__object____ctor(v17, (Il2CppObject *)v5, *v19, 0);
  BasicHelper__ForEach_object__51605748(
    objectPanels,
    v18,
    (const MethodInfo_31370F4 *)Method_BasicHelper_ForEach_UIPanel___);
  v20 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v20 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__5_2 = (System_Action_object__o *)v20->static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__5_2 = (System_Action_object__o *)sub_1C715FC(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__5_2, v23, Method_RecommendSupportListViewManager___c__SetItem_b__5_2__, 0);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__5_2 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__5_2, (int32_t)_9__5_2, v25, v26, v27, v28, v29, v30);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__5_2,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


void RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__51615620; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4CC32E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
    byte_4CC32E9 = 1;
  }
  IsValidIndex_object__51615620 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__51615620(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_3139784 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__51615620 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( LODWORD(objectArray->max_length) <= index )
      sub_1C71610(IsValidIndex_object__51615620);
    IsValidIndex_object__51615620 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__51615620 )
LABEL_9:
      sub_1C71608(IsValidIndex_object__51615620, v6);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__51615620, v6);
  }
}


void RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC32EE & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportListViewManager___c_TypeInfo);
    byte_4CC32EE = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_1C71608(this, 0);
  return panel->fields.mDepth;
}


void RecommendSupportListViewManager___c___CreateList_b__9_1(
        RecommendSupportListViewManager___c_o *this,
        int32_t index,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !obj )
    sub_1C71608(this, index);
  RecommendSupportSelectListViewObject__Init(obj, index, (const MethodInfo *)obj);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void RecommendSupportListViewManager___c___SetItem_b__5_2(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1C71608(this, 0);
  RecommendSupportSelectListViewObject__SetItem(obj, (const MethodInfo *)obj);
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
  int32_t cashedEditMaskPanelDepth; // w22
  int32_t v10; // w23
  bool v11; // w20

  v6 = this;
  if ( (byte_4CC32EF & 1) == 0 )
  {
    sub_1C713B0(&System_Convert_TypeInfo);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CC32EF = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( LODWORD(cashedObjectPanelDepth->max_length) <= i )
    sub_1C71610(this);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v10 = cashedObjectPanelDepth->m_Items[i];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v11 = *((_BYTE *)&this[3].fields.index + 4) && v6->fields.index == i;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_65085040(v11, 0);
  if ( !panel )
LABEL_14:
    sub_1C71608(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, v10 + (_DWORD)this * cashedEditMaskPanelDepth, 0);
}


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
    sub_1C71610(this);
  if ( !panel )
LABEL_6:
    sub_1C71608(this, i);
  UIPanel__set_depth(panel, cashedObjectPanelDepth->m_Items[i], 0);
}