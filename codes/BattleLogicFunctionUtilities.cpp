void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_array *targetSvtArray,
        System_Func_BattleServantData__BattleServantSnapShot__o *svtSnapShotGenerator,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Func_object__object__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Object_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4AB3DBA & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___,
      targetSvtArray);
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___, v7);
    sub_1BAB41C(&System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo, v8);
    sub_1BAB41C(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__, v9);
    byte_4AB3DBA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtSnapShotGenerator_k__BackingField = svtSnapShotGenerator;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._SvtSnapShotGenerator_k__BackingField,
    (int32_t)svtSnapShotGenerator,
    v10,
    v11);
  v12 = (System_Func_object__object__o *)sub_1BAB668(System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
  System_Func_object__object____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__,
    0LL);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetSvtArray,
                                                               (System_Func_TSource__TResult__o *)v12,
                                                               (const MethodInfo_2EF4318 *)Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
  v14 = System_Linq_Enumerable__ToArray_object_(
          v13,
          (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
  this->fields._SvtCacheArray_k__BackingField = (struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *)v14;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SvtCacheArray_k__BackingField; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4AB3DBD & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___,
      *(_QWORD *)&svtUniqueId);
    sub_1BAB41C(&System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo, v5);
    sub_1BAB41C(
      &Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
      v6);
    sub_1BAB41C(&BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo, v7);
    byte_4AB3DBD = 1;
  }
  v8 = sub_1BAB668(BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BAB678(v9, v10);
  *(_DWORD *)(v8 + 16) = svtUniqueId;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SvtCacheArray_k__BackingField;
  v12 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
    0LL);
  return (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)System_Linq_Enumerable__FirstOrDefault_object__49186032(
                                                                            SvtCacheArray_k__BackingField,
                                                                            (System_Func_TSource__bool__o *)v12,
                                                                            (const MethodInfo_2EE84F0 *)Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__9_0; // x20
  Il2CppObject *v9; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB3DBC & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v3);
    sub_1BAB41C(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__, v4);
    sub_1BAB41C(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v5);
    byte_4AB3DBC = 1;
  }
  v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__9_0 = (System_Action_object__o *)v6->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_1BAB668(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__9_0,
      v9,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__9_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4AB3DBB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method);
    sub_1BAB41C(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v3);
    sub_1BAB41C(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__, v4);
    sub_1BAB41C(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v5);
    byte_4AB3DBB = 1;
  }
  v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__8_0 = (System_Action_object__o *)v6->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1BAB668(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v9,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__8_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2EB172C *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache____ctor_b__7_0(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4AB3DBE & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo, x);
    byte_4AB3DBE = 1;
  }
  v5 = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_1BAB668(BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(v5, this, x, v6);
  return v5;
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtCacheArray(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtCacheArray_k__BackingField;
}


System_Func_BattleServantData__BattleServantSnapShot__o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtSnapShotGenerator(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtSnapShotGenerator_k__BackingField;
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_o *root,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.root = root;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)root, v7, v8);
  this->fields._SvtData_k__BackingField = svtData;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._SvtData_k__BackingField, (int32_t)svtData, v9, v10);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
    sub_1BAB678(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._After_k__BackingField = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._After_k__BackingField, (int32_t)v5, v6, v7);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
    sub_1BAB678(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._Before_k__BackingField = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._Before_k__BackingField, (int32_t)v5, v6, v7);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._After_k__BackingField;
}


BattleServantSnapShot_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._Before_k__BackingField;
}


BattleServantData_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_SvtData(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._After_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._After_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Before_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._Before_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB3DBF & 1) == 0 )
  {
    sub_1BAB41C(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v1);
    byte_4AB3DBF = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionUtilities_FunctionProgressCache___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeAfterSvtCache_b__9_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeBeforeSvtCache_b__8_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___GetElemByUniqueId_b__0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *SvtData_k__BackingField; // x8

  if ( !x || (SvtData_k__BackingField = x->fields._SvtData_k__BackingField) == 0LL )
    sub_1BAB678(this, x);
  return SvtData_k__BackingField->fields.uniqueId == this->fields.svtUniqueId;
}