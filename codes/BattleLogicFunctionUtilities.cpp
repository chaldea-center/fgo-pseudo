void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_array *targetSvtArray,
        System_Func_BattleServantData__BattleServantSnapShot__o *svtSnapShotGenerator,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_object__object__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Object_array *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B14236 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___,
      targetSvtArray,
      svtSnapShotGenerator);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___, v7, v8);
    sub_1BCA7E0(&System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__, v11, v12);
    byte_4B14236 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtSnapShotGenerator_k__BackingField = svtSnapShotGenerator;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SvtSnapShotGenerator_k__BackingField,
    (int64_t)svtSnapShotGenerator,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo,
                                           v19,
                                           v20,
                                           v21);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__,
    0LL);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetSvtArray,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
  v24 = System_Linq_Enumerable__ToArray_object_(
          v23,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
  this->fields._SvtCacheArray_k__BackingField = (struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *)v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v24, v25, v26, v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *SvtCacheArray_k__BackingField; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B14239 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___,
      *(_QWORD *)&svtUniqueId,
      method);
    sub_1BCA7E0(&System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(
      &Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
      v8,
      v9);
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo, v10, v11);
    byte_4B14239 = 1;
  }
  v12 = sub_1BCAA2C(
          BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&svtUniqueId,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = svtUniqueId;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SvtCacheArray_k__BackingField;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo,
                                         v14,
                                         v15,
                                         v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
    0LL);
  return (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                                            SvtCacheArray_k__BackingField,
                                                                            (System_Func_TSource__bool__o *)v18,
                                                                            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
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
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__9_0; // x20
  Il2CppObject *v14; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B14238 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v5, v6);
    sub_1BCA7E0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__, v7, v8);
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v9, v10);
    byte_4B14238 = 1;
  }
  v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, method);
    v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__9_0 = (System_Action_object__o *)v11->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__9_0 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_FunctionProgressCache_SvtCache__TypeInfo,
                                           method,
                                           v2,
                                           v3);
    System_Action_object____ctor(
      _9__9_0,
      v14,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__9_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
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
  BattleLogicFunctionUtilities_FunctionProgressCache___c_c *v11; // x0
  System_Collections_Generic_IEnumerable_T__o *SvtCacheArray_k__BackingField; // x19
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v14; // x21
  struct BattleLogicFunctionUtilities_FunctionProgressCache___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B14237 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v5, v6);
    sub_1BCA7E0(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__, v7, v8);
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v9, v10);
    byte_4B14237 = 1;
  }
  v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._SvtCacheArray_k__BackingField;
  if ( !BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, method);
    v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
  }
  _9__8_0 = (System_Action_object__o *)v11->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__8_0 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_FunctionProgressCache_SvtCache__TypeInfo,
                                           method,
                                           v2,
                                           v3);
    System_Action_object____ctor(
      _9__8_0,
      v14,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v16, v17, v18, v19, v20, v21);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache____ctor_b__7_0(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4B1423A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo, x, method);
    byte_4B1423A = 1;
  }
  v6 = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_1BCAA2C(
                                                                          BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo,
                                                                          x,
                                                                          method,
                                                                          v3);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache___ctor(v6, this, x, v7);
  return v6;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.root = root;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)root, v7, v8, v9, v10, v11, v12);
  this->fields._SvtData_k__BackingField = svtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SvtData_k__BackingField,
    (int64_t)svtData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
    sub_1BCAA3C(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._After_k__BackingField = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._After_k__BackingField, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeBeforeCache(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunctionUtilities_FunctionProgressCache_o *root; // x8
  struct System_Func_BattleServantData__BattleServantSnapShot__o *SvtSnapShotGenerator_k__BackingField; // x8
  struct BattleServantSnapShot_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  root = this->fields.root;
  if ( !root || (SvtSnapShotGenerator_k__BackingField = root->fields._SvtSnapShotGenerator_k__BackingField) == 0LL )
    sub_1BCAA3C(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._Before_k__BackingField = v5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Before_k__BackingField,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._After_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._After_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__set_Before(
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *this,
        BattleServantSnapShot_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Before_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Before_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B1423B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v1, v2);
    byte_4B1423B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionUtilities_FunctionProgressCache___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeBeforeSvtCache_b__8_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
  return SvtData_k__BackingField->fields.uniqueId == this->fields.svtUniqueId;
}