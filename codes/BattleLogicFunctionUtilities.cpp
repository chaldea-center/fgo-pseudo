void BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_array *targetSvtArray,
        System_Func_BattleServantData__BattleServantSnapShot__o *svtSnapShotGenerator,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Func_object__object__o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Object_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC5227 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
    sub_1C713B0(&System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__);
    byte_4CC5227 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._SvtSnapShotGenerator_k__BackingField = svtSnapShotGenerator;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SvtSnapShotGenerator_k__BackingField,
    (int32_t)svtSnapShotGenerator,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
  System_Func_object__object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__,
    0);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetSvtArray,
                                                               (System_Func_TSource__TResult__o *)v13,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
  v15 = System_Linq_Enumerable__ToArray_object_(
          v14,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
  this->fields._SvtCacheArray_k__BackingField = (struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *)v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SvtCacheArray_k__BackingField; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CC522A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
    sub_1C713B0(&System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
    sub_1C713B0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__);
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
    byte_4CC522A = 1;
  }
  v5 = sub_1C715FC(BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = svtUniqueId;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SvtCacheArray_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
    0);
  return (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                                                                            SvtCacheArray_k__BackingField,
                                                                            (System_Func_TSource__bool__o *)v9,
                                                                            (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
}


void BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__9_0; // x20
  Il2CppObject *v6; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC5229 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
    sub_1C713B0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__);
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_4CC5229 = 1;
  }
  v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__9_0 = (System_Action_object__o *)v3->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_1C715FC(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__9_0,
      v6,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__,
      0);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__9_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


void BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v6; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC5228 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
    sub_1C713B0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__);
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_4CC5228 = 1;
  }
  v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__8_0 = (System_Action_object__o *)v3->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1C715FC(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v6,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__,
      0);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__8_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9, v10, v11, v12, v13);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *BattleLogicFunctionUtilities_FunctionProgressCache____ctor_b__7_0(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4CC522B & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
    byte_4CC522B = 1;
  }
  v5 = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_1C715FC(BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(v5, this, x, v6);
  return v5;
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtCacheArray(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtCacheArray_k__BackingField;
}


System_Func_BattleServantData__BattleServantSnapShot__o *BattleLogicFunctionUtilities_FunctionProgressCache__get_SvtSnapShotGenerator(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtSnapShotGenerator_k__BackingField;
}


void BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_o *root,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.root = root;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)root, v7, v8, v9, v10, v11, v12);
  this->fields._SvtData_k__BackingField = svtData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SvtData_k__BackingField,
    (int32_t)svtData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0 )
    sub_1C71608(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(intptr_t, struct BattleServantData_o *, intptr_t))SvtSnapShotGenerator_k__BackingField->fields.invoke_impl)(
                                           SvtSnapShotGenerator_k__BackingField->fields.method_code,
                                           this->fields._SvtData_k__BackingField,
                                           SvtSnapShotGenerator_k__BackingField->fields.method);
  this->fields._After_k__BackingField = v5;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._After_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0 )
    sub_1C71608(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(intptr_t, struct BattleServantData_o *, intptr_t))SvtSnapShotGenerator_k__BackingField->fields.invoke_impl)(
                                           SvtSnapShotGenerator_k__BackingField->fields.method_code,
                                           this->fields._SvtData_k__BackingField,
                                           SvtSnapShotGenerator_k__BackingField->fields.method);
  this->fields._Before_k__BackingField = v5;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Before_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


BattleServantSnapShot_o *BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._After_k__BackingField;
}


BattleServantSnapShot_o *BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._Before_k__BackingField;
}


BattleServantData_o *BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__get_SvtData(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  return this->fields._SvtData_k__BackingField;
}


void BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_After(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._After_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._After_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Before_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Before_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionUtilities_FunctionProgressCache___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC522C & 1) == 0 )
  {
    sub_1C713B0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
    byte_4CC522C = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionUtilities_FunctionProgressCache___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicFunctionUtilities_FunctionProgressCache___c___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeAfterSvtCache_b__9_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(x, (const MethodInfo *)x);
}


void BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeBeforeSvtCache_b__8_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(x, (const MethodInfo *)x);
}


void BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0___GetElemByUniqueId_b__0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *SvtData_k__BackingField; // x8

  if ( !x || (SvtData_k__BackingField = x->fields._SvtData_k__BackingField) == 0 )
    sub_1C71608(this, x);
  return SvtData_k__BackingField->fields.uniqueId == this->fields.svtUniqueId;
}