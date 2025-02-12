void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_array *targetSvtArray,
        System_Func_BattleServantData__BattleServantSnapShot__o *svtSnapShotGenerator,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Func_object__object__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BB26DB & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___,
      targetSvtArray);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___, v7);
    sub_1C13D24(&System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo, v8);
    sub_1C13D24(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__, v9);
    byte_4BB26DB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SvtSnapShotGenerator_k__BackingField = svtSnapShotGenerator;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._SvtSnapShotGenerator_k__BackingField,
    (int64_t)svtSnapShotGenerator,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (System_Func_object__object__o *)sub_1C13F70(System_Func_BattleServantData__FunctionProgressCache_SvtCache__TypeInfo);
  System_Func_object__object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___ctor_b__7_0__,
    0LL);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetSvtArray,
                                                               (System_Func_TSource__TResult__o *)v16,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_BattleServantData__FunctionProgressCache_SvtCache___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_FunctionProgressCache_SvtCache___);
  this->fields._SvtCacheArray_k__BackingField = (struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *)v18;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_4BB26DE & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___,
      *(_QWORD *)&svtUniqueId);
    sub_1C13D24(&System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo, v5);
    sub_1C13D24(
      &Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
      v6);
    sub_1C13D24(&BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo, v7);
    byte_4BB26DE = 1;
  }
  v8 = sub_1C13F70(BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C13F80(v9, v10);
  *(_DWORD *)(v8 + 16) = svtUniqueId;
  SvtCacheArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._SvtCacheArray_k__BackingField;
  v12 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_FunctionProgressCache_SvtCache__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__DisplayClass10_0__GetElemByUniqueId_b__0__,
    0LL);
  return (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)System_Linq_Enumerable__FirstOrDefault_object__50015312(
                                                                            SvtCacheArray_k__BackingField,
                                                                            (System_Func_TSource__bool__o *)v12,
                                                                            (const MethodInfo_2FB2C50 *)Method_System_Linq_Enumerable_FirstOrDefault_FunctionProgressCache_SvtCache___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB26DD & 1) == 0 )
  {
    sub_1C13D24(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v3);
    sub_1C13D24(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__, v4);
    sub_1C13D24(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v5);
    byte_4BB26DD = 1;
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
    _9__9_0 = (System_Action_object__o *)sub_1C13F70(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__9_0,
      v9,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeAfterSvtCache_b__9_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__9_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__9_0,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB26DC & 1) == 0 )
  {
    sub_1C13D24(&System_Action_FunctionProgressCache_SvtCache__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___, v3);
    sub_1C13D24(&Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__, v4);
    sub_1C13D24(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v5);
    byte_4BB26DC = 1;
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
    _9__8_0 = (System_Action_object__o *)sub_1C13F70(System_Action_FunctionProgressCache_SvtCache__TypeInfo);
    System_Action_object____ctor(
      _9__8_0,
      v9,
      Method_BattleLogicFunctionUtilities_FunctionProgressCache___c__MakeBeforeSvtCache_b__8_0__,
      0LL);
    static_fields = BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Action_FunctionProgressCache_SvtCache__o *)_9__8_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    SvtCacheArray_k__BackingField,
    (System_Action_T__o *)_9__8_0,
    (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_FunctionProgressCache_SvtCache___);
}


BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *__fastcall BattleLogicFunctionUtilities_FunctionProgressCache____ctor_b__7_0(
        BattleLogicFunctionUtilities_FunctionProgressCache_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4BB26DF & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo, x);
    byte_4BB26DF = 1;
  }
  v5 = (BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *)sub_1C13F70(BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_TypeInfo);
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)root, v7, v8, v9, v10, v11, v12);
  this->fields._SvtData_k__BackingField = svtData;
  sub_1C13CC8(
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
    sub_1C13F80(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._After_k__BackingField = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields._After_k__BackingField, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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
    sub_1C13F80(this, method);
  v5 = (struct BattleServantSnapShot_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleServantData_o *, _QWORD))SvtSnapShotGenerator_k__BackingField->fields.m_target)(
                                           SvtSnapShotGenerator_k__BackingField->fields.original_method_info,
                                           this->fields._SvtData_k__BackingField,
                                           *(_QWORD *)&SvtSnapShotGenerator_k__BackingField->fields.extra_arg);
  this->fields._Before_k__BackingField = v5;
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB26E0 & 1) == 0 )
  {
    sub_1C13D24(&BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo, v1);
    byte_4BB26E0 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunctionUtilities_FunctionProgressCache___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleLogicFunctionUtilities_FunctionProgressCache___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C13F80(this, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache__MakeAfterCache(x, (const MethodInfo *)x);
}


void __fastcall BattleLogicFunctionUtilities_FunctionProgressCache___c___MakeBeforeSvtCache_b__8_0(
        BattleLogicFunctionUtilities_FunctionProgressCache___c_o *this,
        BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, x);
  return SvtData_k__BackingField->fields.uniqueId == this->fields.svtUniqueId;
}