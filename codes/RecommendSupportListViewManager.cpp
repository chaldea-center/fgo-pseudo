void __fastcall RecommendSupportListViewManager___ctor(
        RecommendSupportListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct UIPanel_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct RecommendSupportSelectListViewObject_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFE006 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&RecommendSupportSelectListViewObject___TypeInfo, v3);
    sub_1BC3008(&UIPanel___TypeInfo, v4);
    byte_4AFE006 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UIPanel_array *)sub_1BC30B0(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v5->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v6;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectPanels, (int32_t)v6, v7, v8);
  v9 = (struct RecommendSupportSelectListViewObject_array *)sub_1BC30B0(
                                                              RecommendSupportSelectListViewObject___TypeInfo,
                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v9;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objectArray, (int32_t)v9, v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RecommendSupportListViewManager___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4AFE003 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v3);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, v4);
    sub_1BC3008(&RecommendSupportListViewManager___c_TypeInfo, v5);
    byte_4AFE003 = 1;
  }
  v6 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v6 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__7_0 = (System_Action_object__o *)v6->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_1BC3254(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__7_0, v9, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__ClearItem_33979544(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__50268300; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4AFE004 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_4AFE004 = 1;
  }
  IsValidIndex_object__50268300 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__50268300(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2FF088C *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__50268300 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BC326C(IsValidIndex_object__50268300, v6, v7);
    IsValidIndex_object__50268300 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__50268300 )
LABEL_9:
      sub_1BC3264(IsValidIndex_object__50268300, v6);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__50268300, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__CreateList(
        RecommendSupportListViewManager_o *this,
        int32_t maskPanelDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  RecommendSupportListViewManager___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *objectPanels; // x20
  System_Func_object__int__o *_9__9_0; // x21
  Il2CppObject *v15; // x22
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct System_Int32_array *v20; // x0
  struct System_Int32_array **p_cashedObjectPanelDepth; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  RecommendSupportListViewManager___c_c *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v27; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4AFE005 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&maskPanelDepth);
    sub_1BC3008(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76814032, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_UIPanel__int___, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&System_Func_UIPanel__int__TypeInfo, v8);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, v9);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, v10);
    sub_1BC3008(&RecommendSupportListViewManager___c_TypeInfo, v11);
    byte_4AFE005 = 1;
  }
  this->fields.cashedEditMaskPanelDepth = maskPanelDepth;
  v12 = RecommendSupportListViewManager___c_TypeInfo;
  objectPanels = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.objectPanels;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v12 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_0 = (System_Func_object__int__o *)v12->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_UIPanel__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v15, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_3035A44 *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v20;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_cashedObjectPanelDepth, (int32_t)v20, v22, v23);
  v24 = RecommendSupportListViewManager___c_TypeInfo;
  v25 = (System_Collections_Generic_IEnumerable_T__o *)*(p_cashedObjectPanelDepth - 2);
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v24 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_1 = (System_Action_T1__T2__o *)v24->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__9_1 = (System_Action_T1__T2__o *)sub_1BC3254(System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_int__object____ctor(
      _9__9_1,
      v27,
      Method_RecommendSupportListViewManager___c__CreateList_b__9_1__,
      0LL);
    v28 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v28->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v28->__9__9_1, (int32_t)_9__9_1, v29, v30);
  }
  BasicHelper__ForEach_object__50258428(
    v25,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_2FEE1FC *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76814032);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItem(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool IsValidIndex_object__50268300; // w0
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x20
  bool v21; // w23
  System_Action_T1__T2__o *v22; // x0
  System_Action_int__T__o *v23; // x22
  __int64 *v24; // x8
  RecommendSupportListViewManager___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__5_2; // x20
  Il2CppObject *v28; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4AFE001 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&System_Action_int__UIPanel__TypeInfo, v5);
    sub_1BC3008(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v6);
    sub_1BC3008(&Method_BasicHelper_ForEach_UIPanel___, v7);
    sub_1BC3008(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, v8);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__SetItem_b__5_2__, v9);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__, v10);
    sub_1BC3008(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__, v11);
    sub_1BC3008(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, v12);
    sub_1BC3008(&RecommendSupportListViewManager___c_TypeInfo, v13);
    byte_4AFE001 = 1;
  }
  v14 = sub_1BC3254(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BC3264(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v14 + 24) = index;
  IsValidIndex_object__50268300 = BasicHelper__IsValidIndex_object__50268300(
                                    (System_Object_array *)this->fields.objectArray,
                                    index,
                                    (const MethodInfo_2FF088C *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
  v21 = IsValidIndex_object__50268300;
  v22 = (System_Action_T1__T2__o *)sub_1BC3254(System_Action_int__UIPanel__TypeInfo);
  v23 = (System_Action_int__T__o *)v22;
  if ( v21 )
    v24 = &Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__;
  else
    v24 = &Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__;
  System_Action_int__object____ctor(v22, (Il2CppObject *)v14, *v24, 0LL);
  BasicHelper__ForEach_object__50258428(
    objectPanels,
    v23,
    (const MethodInfo_2FEE1FC *)Method_BasicHelper_ForEach_UIPanel___);
  v25 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v25 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__5_2 = (System_Action_object__o *)v25->static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__5_2 = (System_Action_object__o *)sub_1BC3254(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__5_2, v28, Method_RecommendSupportListViewManager___c__SetItem_b__5_2__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__5_2 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__5_2, (int32_t)_9__5_2, v30, v31);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__5_2,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__50268300; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4AFE002 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_4AFE002 = 1;
  }
  IsValidIndex_object__50268300 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__50268300(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2FF088C *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__50268300 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BC326C(IsValidIndex_object__50268300, v6, v7);
    IsValidIndex_object__50268300 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__50268300 )
LABEL_9:
      sub_1BC3264(IsValidIndex_object__50268300, v6);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__50268300, v6);
  }
}


void __fastcall RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE007 & 1) == 0 )
  {
    sub_1BC3008(&RecommendSupportListViewManager___c_TypeInfo, v1);
    byte_4AFE007 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(RecommendSupportListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BC3264(this, 0LL);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t __fastcall RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_1BC3264(this, 0LL);
  return panel->fields.mDepth;
}


void __fastcall RecommendSupportListViewManager___c___CreateList_b__9_1(
        RecommendSupportListViewManager___c_o *this,
        int32_t index,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( !obj )
    sub_1BC3264(this, index);
  RecommendSupportSelectListViewObject__Init(obj, index, (const MethodInfo *)obj);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void __fastcall RecommendSupportListViewManager___c___SetItem_b__5_2(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BC3264(this, 0LL);
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
  struct RecommendSupportListViewManager_o *_4__this; // x8
  struct System_Int32_array *cashedObjectPanelDepth; // x9
  int32_t cashedEditMaskPanelDepth; // w22
  int32_t v11; // w23
  bool v12; // w20

  v6 = this;
  if ( (byte_4AFE008 & 1) == 0 )
  {
    sub_1BC3008(&System_Convert_TypeInfo, *(_QWORD *)&i);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_1BC3008(
                                                                       &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                       v7);
    byte_4AFE008 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( cashedObjectPanelDepth->max_length <= i )
    sub_1BC326C(this, *(_QWORD *)&i, panel);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v11 = cashedObjectPanelDepth->m_Items[i + 1];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v12 = *((_BYTE *)&this[3].fields.index + 4) && v6->fields.index == i;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_63402508(v12, 0LL);
  if ( !panel )
LABEL_14:
    sub_1BC3264(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, v11 + (_DWORD)this * cashedEditMaskPanelDepth, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager___c__DisplayClass5_0___SetItem_b__1(
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
  if ( cashedObjectPanelDepth->max_length <= i )
    sub_1BC326C(this, *(_QWORD *)&i, panel);
  if ( !panel )
LABEL_6:
    sub_1BC3264(this, i);
  UIPanel__set_depth(panel, cashedObjectPanelDepth->m_Items[i + 1], 0LL);
}