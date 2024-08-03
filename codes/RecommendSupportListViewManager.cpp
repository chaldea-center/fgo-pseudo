void __fastcall RecommendSupportListViewManager___ctor(
        RecommendSupportListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct UIPanel_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct RecommendSupportSelectListViewObject_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F876E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&RecommendSupportSelectListViewObject___TypeInfo, v3);
    sub_1B640C8(&UIPanel___TypeInfo, v4);
    byte_49F876E = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UIPanel_array *)sub_1B64170(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v5->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectPanels, (int32_t)v6, v7, v8);
  v9 = (struct RecommendSupportSelectListViewObject_array *)sub_1B64170(
                                                              RecommendSupportSelectListViewObject___TypeInfo,
                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectArray, (int32_t)v9, v10, v11);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  RecommendSupportListViewManager___c_c *v7; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__7_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F876B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v4);
    sub_1B640C8(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, v5);
    sub_1B640C8(&RecommendSupportListViewManager___c_TypeInfo, v6);
    byte_49F876B = 1;
  }
  v7 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v7 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__7_0 = (System_Action_object__o *)v7->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_1B64314(
                                           System_Action_RecommendSupportSelectListViewObject__TypeInfo,
                                           method,
                                           v2);
    System_Action_object____ctor(_9__7_0, v10, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__ClearItem_32248516(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__48399848; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_49F876C & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_49F876C = 1;
  }
  IsValidIndex_object__48399848 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__48399848(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2E285E8 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__48399848 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1B6432C(IsValidIndex_object__48399848, v6);
    IsValidIndex_object__48399848 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__48399848 )
LABEL_9:
      sub_1B64324(IsValidIndex_object__48399848);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__48399848, v6);
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
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct System_Int32_array *v20; // x0
  struct System_Int32_array **p_cashedObjectPanelDepth; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  RecommendSupportListViewManager___c_c *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v29; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_49F876D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&maskPanelDepth);
    sub_1B640C8(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____75710736, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_UIPanel__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&System_Func_UIPanel__int__TypeInfo, v8);
    sub_1B640C8(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, v9);
    sub_1B640C8(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, v10);
    sub_1B640C8(&RecommendSupportListViewManager___c_TypeInfo, v11);
    byte_49F876D = 1;
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
    _9__9_0 = (System_Func_object__int__o *)sub_1B64314(
                                              System_Func_UIPanel__int__TypeInfo,
                                              *(_QWORD *)&maskPanelDepth,
                                              method);
    System_Func_object__int____ctor(_9__9_0, v15, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v20;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_cashedObjectPanelDepth, (int32_t)v20, v22, v23);
  v26 = RecommendSupportListViewManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_T__o *)*(p_cashedObjectPanelDepth - 2);
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v26 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__9_1 = (System_Action_T1__T2__o *)v26->static_fields->__9__9_1;
  if ( !_9__9_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__9_1 = (System_Action_T1__T2__o *)sub_1B64314(
                                           System_Action_int__RecommendSupportSelectListViewObject__TypeInfo,
                                           v24,
                                           v25);
    System_Action_int__object____ctor(
      _9__9_1,
      v29,
      Method_RecommendSupportListViewManager___c__CreateList_b__9_1__,
      0LL);
    v30 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v30->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v30->__9__9_1, (int32_t)_9__9_1, v31, v32);
  }
  BasicHelper__ForEach_object__48393056(
    v27,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_2E26B60 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____75710736);
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
  __int64 v13; // x20
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__48399848; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  struct RecommendSupportSelectListViewObject_array *objectArray; // x21
  __int64 v20; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  RecommendSupportListViewManager___c_c *v23; // x0
  System_Action_object__o *_9__5_0; // x22
  Il2CppObject *v25; // x23
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x19
  System_Action_T1__T2__o *v30; // x21

  if ( (byte_49F8769 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&index);
    sub_1B640C8(&System_Action_int__UIPanel__TypeInfo, v5);
    sub_1B640C8(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v6);
    sub_1B640C8(&Method_BasicHelper_ForEach_UIPanel___, v7);
    sub_1B640C8(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, v8);
    sub_1B640C8(&Method_RecommendSupportListViewManager___c__SetItem_b__5_0__, v9);
    sub_1B640C8(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__, v10);
    sub_1B640C8(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, v11);
    sub_1B640C8(&RecommendSupportListViewManager___c_TypeInfo, v12);
    byte_49F8769 = 1;
  }
  v13 = sub_1B64314(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, *(_QWORD *)&index, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_17;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_DWORD *)(v13 + 24) = index;
  IsValidIndex_object__48399848 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__48399848(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2E285E8 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  objectArray = this->fields.objectArray;
  if ( ((unsigned __int8)IsValidIndex_object__48399848 & 1) != 0 )
  {
    if ( objectArray )
    {
      v20 = *(int *)(v13 + 24);
      if ( (unsigned int)v20 >= objectArray->max_length )
        sub_1B6432C(IsValidIndex_object__48399848, v17);
      IsValidIndex_object__48399848 = objectArray->m_Items[v20];
      if ( IsValidIndex_object__48399848 )
      {
        RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__48399848, v17);
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1B64324(IsValidIndex_object__48399848);
  }
  v23 = RecommendSupportListViewManager___c_TypeInfo;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v23 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__5_0 = (System_Action_object__o *)v23->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__5_0 = (System_Action_object__o *)sub_1B64314(
                                           System_Action_RecommendSupportSelectListViewObject__TypeInfo,
                                           v17,
                                           v18);
    System_Action_object____ctor(_9__5_0, v25, Method_RecommendSupportListViewManager___c__SetItem_b__5_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v27, v28);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)objectArray,
    (System_Action_T__o *)_9__5_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
LABEL_16:
  objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
  v30 = (System_Action_T1__T2__o *)sub_1B64314(System_Action_int__UIPanel__TypeInfo, v21, v22);
  System_Action_int__object____ctor(
    v30,
    (Il2CppObject *)v13,
    Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__1__,
    0LL);
  BasicHelper__ForEach_object__48393056(
    objectPanels,
    (System_Action_int__T__o *)v30,
    (const MethodInfo_2E26B60 *)Method_BasicHelper_ForEach_UIPanel___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__48399848; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_49F876A & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_49F876A = 1;
  }
  IsValidIndex_object__48399848 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__48399848(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2E285E8 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__48399848 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1B6432C(IsValidIndex_object__48399848, v6);
    IsValidIndex_object__48399848 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__48399848 )
LABEL_9:
      sub_1B64324(IsValidIndex_object__48399848);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__48399848, v6);
  }
}


void __fastcall RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F876F & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportListViewManager___c_TypeInfo, v1);
    byte_49F876F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t __fastcall RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_1B64324(this);
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
    sub_1B64324(this);
  RecommendSupportSelectListViewObject__Init(obj, index, (const MethodInfo *)obj);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void __fastcall RecommendSupportListViewManager___c___SetItem_b__5_0(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1B64324(this);
  RecommendSupportSelectListViewObject__SetItem(obj, (const MethodInfo *)obj);
}


void __fastcall RecommendSupportListViewManager___c__DisplayClass5_0___ctor(
        RecommendSupportListViewManager___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager___c__DisplayClass5_0___SetItem_b__1(
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
  if ( (byte_49F8770 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, *(_QWORD *)&i);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_1B640C8(
                                                                       &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                       v7);
    byte_49F8770 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( cashedObjectPanelDepth->max_length <= i )
    sub_1B6432C(this, *(_QWORD *)&i);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v11 = cashedObjectPanelDepth->m_Items[i + 1];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v12 = *((_BYTE *)&this[3].fields.index + 4) && v6->fields.index == i;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_61997724(v12, 0LL);
  if ( !panel )
LABEL_14:
    sub_1B64324(this);
  UIPanel__set_depth(panel, v11 + (_DWORD)this * cashedEditMaskPanelDepth, 0LL);
}