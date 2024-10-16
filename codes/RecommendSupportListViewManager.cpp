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

  if ( (byte_4AB1FB5 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&RecommendSupportSelectListViewObject___TypeInfo, v3);
    sub_1BAB41C(&UIPanel___TypeInfo, v4);
    byte_4AB1FB5 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct UIPanel_array *)sub_1BAB4C4(
                                 UIPanel___TypeInfo,
                                 (unsigned int)v5->static_fields->RecommendSupportMemberMax);
  this->fields.objectPanels = v6;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.objectPanels, (int32_t)v6, v7, v8);
  v9 = (struct RecommendSupportSelectListViewObject_array *)sub_1BAB4C4(
                                                              RecommendSupportSelectListViewObject___TypeInfo,
                                                              (unsigned int)BalanceConfig_TypeInfo->static_fields->RecommendSupportMemberMax);
  this->fields.objectArray = v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.objectArray, (int32_t)v9, v10, v11);
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
  int32_t v12; // w3

  if ( (byte_4AB1FB2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v3);
    sub_1BAB41C(&Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, v4);
    sub_1BAB41C(&RecommendSupportListViewManager___c_TypeInfo, v5);
    byte_4AB1FB2 = 1;
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
    _9__7_0 = (System_Action_object__o *)sub_1BAB668(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__7_0, v9, Method_RecommendSupportListViewManager___c__ClearItem_b__7_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__7_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__ClearItem_32861664(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__48969072; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4AB1FB3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_4AB1FB3 = 1;
  }
  IsValidIndex_object__48969072 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__48969072(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2EB3570 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__48969072 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BAB680(IsValidIndex_object__48969072, v6);
    IsValidIndex_object__48969072 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__48969072 )
LABEL_9:
      sub_1BAB678(IsValidIndex_object__48969072, v6);
    RecommendSupportSelectListViewObject__ClearItem(IsValidIndex_object__48969072, v6);
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
  RecommendSupportListViewManager___c_c *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  System_Action_T1__T2__o *_9__9_1; // x20
  Il2CppObject *v27; // x21
  struct RecommendSupportListViewManager___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4AB1FB4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_int__RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&maskPanelDepth);
    sub_1BAB41C(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76455688, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_Select_UIPanel__int___, v6);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BAB41C(&System_Func_UIPanel__int__TypeInfo, v8);
    sub_1BAB41C(&Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, v9);
    sub_1BAB41C(&Method_RecommendSupportListViewManager___c__CreateList_b__9_1__, v10);
    sub_1BAB41C(&RecommendSupportListViewManager___c_TypeInfo, v11);
    byte_4AB1FB4 = 1;
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
    _9__9_0 = (System_Func_object__int__o *)sub_1BAB668(System_Func_UIPanel__int__TypeInfo);
    System_Func_object__int____ctor(_9__9_0, v15, Method_RecommendSupportListViewManager___c__CreateList_b__9_0__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_UIPanel__int__o *)_9__9_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               objectPanels,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2EF3A3C *)Method_System_Linq_Enumerable_Select_UIPanel__int___);
  v20 = System_Linq_Enumerable__ToArray_int_(
          v19,
          (const MethodInfo_2EFCF54 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.cashedObjectPanelDepth = v20;
  p_cashedObjectPanelDepth = &this->fields.cashedObjectPanelDepth;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_cashedObjectPanelDepth, (int32_t)v20, v22, v23);
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
    _9__9_1 = (System_Action_T1__T2__o *)sub_1BAB668(System_Action_int__RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_int__object____ctor(
      _9__9_1,
      v27,
      Method_RecommendSupportListViewManager___c__CreateList_b__9_1__,
      0LL);
    v28 = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    v28->__9__9_1 = (struct System_Action_int__RecommendSupportSelectListViewObject__o *)_9__9_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v28->__9__9_1, (int32_t)_9__9_1, v29, v30);
  }
  BasicHelper__ForEach_object__48962092(
    v25,
    (System_Action_int__T__o *)_9__9_1,
    (const MethodInfo_2EB1A2C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject____76455688);
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
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_T__o *objectPanels; // x20
  System_Action_T1__T2__o *v19; // x22
  RecommendSupportListViewManager___c_c *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *objectArray; // x19
  System_Action_object__o *_9__5_1; // x20
  Il2CppObject *v23; // x21
  struct RecommendSupportListViewManager___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4AB1FB0 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_RecommendSupportSelectListViewObject__TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&System_Action_int__UIPanel__TypeInfo, v5);
    sub_1BAB41C(&Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___, v6);
    sub_1BAB41C(&Method_BasicHelper_ForEach_UIPanel___, v7);
    sub_1BAB41C(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, v8);
    sub_1BAB41C(&Method_RecommendSupportListViewManager___c__SetItem_b__5_1__, v9);
    sub_1BAB41C(&Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__, v10);
    sub_1BAB41C(&RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo, v11);
    sub_1BAB41C(&RecommendSupportListViewManager___c_TypeInfo, v12);
    byte_4AB1FB0 = 1;
  }
  v13 = sub_1BAB668(RecommendSupportListViewManager___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BAB678(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_DWORD *)(v13 + 24) = index;
  if ( BasicHelper__IsValidIndex_object__48969072(
         (System_Object_array *)this->fields.objectArray,
         index,
         (const MethodInfo_2EB3570 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___) )
  {
    objectPanels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectPanels;
    v19 = (System_Action_T1__T2__o *)sub_1BAB668(System_Action_int__UIPanel__TypeInfo);
    System_Action_int__object____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_RecommendSupportListViewManager___c__DisplayClass5_0__SetItem_b__0__,
      0LL);
    BasicHelper__ForEach_object__48962092(
      objectPanels,
      (System_Action_int__T__o *)v19,
      (const MethodInfo_2EB1A2C *)Method_BasicHelper_ForEach_UIPanel___);
  }
  v20 = RecommendSupportListViewManager___c_TypeInfo;
  objectArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectArray;
  if ( !RecommendSupportListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportListViewManager___c_TypeInfo);
    v20 = RecommendSupportListViewManager___c_TypeInfo;
  }
  _9__5_1 = (System_Action_object__o *)v20->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = RecommendSupportListViewManager___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__5_1 = (System_Action_object__o *)sub_1BAB668(System_Action_RecommendSupportSelectListViewObject__TypeInfo);
    System_Action_object____ctor(_9__5_1, v23, Method_RecommendSupportListViewManager___c__SetItem_b__5_1__, 0LL);
    static_fields = RecommendSupportListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__5_1 = (struct System_Action_RecommendSupportSelectListViewObject__o *)_9__5_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_1, (int32_t)_9__5_1, v25, v26);
  }
  BasicHelper__ForEach_object_(
    objectArray,
    (System_Action_T__o *)_9__5_1,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_RecommendSupportSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportListViewManager__SetItemSub(
        RecommendSupportListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportSelectListViewObject_o *IsValidIndex_object__48969072; // x0
  const MethodInfo *v6; // x1
  struct RecommendSupportSelectListViewObject_array *objectArray; // x8

  if ( (byte_4AB1FB1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___, *(_QWORD *)&index);
    byte_4AB1FB1 = 1;
  }
  IsValidIndex_object__48969072 = (RecommendSupportSelectListViewObject_o *)BasicHelper__IsValidIndex_object__48969072(
                                                                              (System_Object_array *)this->fields.objectArray,
                                                                              index,
                                                                              (const MethodInfo_2EB3570 *)Method_BasicHelper_IsValidIndex_RecommendSupportSelectListViewObject___);
  if ( ((unsigned __int8)IsValidIndex_object__48969072 & 1) != 0 )
  {
    objectArray = this->fields.objectArray;
    if ( !objectArray )
      goto LABEL_9;
    if ( objectArray->max_length <= index )
      sub_1BAB680(IsValidIndex_object__48969072, v6);
    IsValidIndex_object__48969072 = objectArray->m_Items[index];
    if ( !IsValidIndex_object__48969072 )
LABEL_9:
      sub_1BAB678(IsValidIndex_object__48969072, v6);
    RecommendSupportSelectListViewObject__SetItem(IsValidIndex_object__48969072, v6);
  }
}


void __fastcall RecommendSupportListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB1FB6 & 1) == 0 )
  {
    sub_1BAB41C(&RecommendSupportListViewManager___c_TypeInfo, v1);
    byte_4AB1FB6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(RecommendSupportListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportListViewManager___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)RecommendSupportListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1BAB678(this, 0LL);
  RecommendSupportSelectListViewObject__ClearItem(obj, (const MethodInfo *)obj);
}


int32_t __fastcall RecommendSupportListViewManager___c___CreateList_b__9_0(
        RecommendSupportListViewManager___c_o *this,
        UIPanel_o *panel,
        const MethodInfo *method)
{
  if ( !panel )
    sub_1BAB678(this, 0LL);
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
    sub_1BAB678(this, index);
  RecommendSupportSelectListViewObject__Init(obj, index, (const MethodInfo *)obj);
  RecommendSupportSelectListViewObject__SetItem(obj, v5);
}


void __fastcall RecommendSupportListViewManager___c___SetItem_b__5_1(
        RecommendSupportListViewManager___c_o *this,
        RecommendSupportSelectListViewObject_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BAB678(this, 0LL);
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
  if ( (byte_4AB1FB7 & 1) == 0 )
  {
    sub_1BAB41C(&System_Convert_TypeInfo, *(_QWORD *)&i);
    this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)sub_1BAB41C(
                                                                       &Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__,
                                                                       v7);
    byte_4AB1FB7 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  cashedObjectPanelDepth = _4__this->fields.cashedObjectPanelDepth;
  if ( !cashedObjectPanelDepth )
    goto LABEL_14;
  if ( cashedObjectPanelDepth->max_length <= i )
    sub_1BAB680(this, *(_QWORD *)&i);
  cashedEditMaskPanelDepth = _4__this->fields.cashedEditMaskPanelDepth;
  v11 = cashedObjectPanelDepth->m_Items[i + 1];
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v12 = *((_BYTE *)&this[3].fields.index + 4) && v6->fields.index == i;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  this = (RecommendSupportListViewManager___c__DisplayClass5_0_o *)System_Convert__ToInt32_62670464(v12, 0LL);
  if ( !panel )
LABEL_14:
    sub_1BAB678(this, *(_QWORD *)&i);
  UIPanel__set_depth(panel, v11 + (_DWORD)this * cashedEditMaskPanelDepth, 0LL);
}