void __fastcall TargetFilterLowestHpRate___ctor(TargetFilterLowestHpRate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpRate__Apply(
        TargetFilterLowestHpRate_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  TargetFilterLowestHpRate___c_c *v23; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v26; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v27; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *v28; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v30; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v31; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_WarBoardAIRoute_RouteData__float__o *v39; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  TargetFilterLowestHpRate___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v45; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v47; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v48; // x0

  if ( (byte_4211936 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Func_BattleServantData__float___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_BattleServantData__int___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_BattleServantData__int__TypeInfo, v11);
    sub_B0D8A4(&System_Func_BattleServantData__float__TypeInfo, v12);
    sub_B0D8A4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v13);
    sub_B0D8A4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v14);
    sub_B0D8A4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v15);
    sub_B0D8A4(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v16);
    sub_B0D8A4(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v17);
    sub_B0D8A4(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v18);
    sub_B0D8A4(&TargetFilterLowestHpRate___c_TypeInfo, v19);
    byte_4211936 = 1;
  }
  v20 = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B0D974(
                                                             TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo,
                                                             servantEnumerable,
                                                             method);
  TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(v20, 0LL);
  v23 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v23 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v21,
                                                                                v22);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v26,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v27 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v27->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B0D840(&v27->__9__0_0, _9__0_0);
    v23 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v28 = v23->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v28 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v21,
                                                                                v22);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v30,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_1__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v31 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v31->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B0D840(&v31->__9__0_1, _9__0_1);
  }
  v32 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1B5663C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v20 )
    sub_B0D97C(v32);
  v20->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v32;
  sub_B0D840(&v20->fields, v32);
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v33,
                                                                             v34);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v20,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v36 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v39 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B0D974(
                                                             System_Func_BattleServantData__float__TypeInfo,
                                                             v37,
                                                             v38);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v39,
    (Il2CppObject *)v20,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    (const MethodInfo_261A8AC *)Method_System_Func_BattleServantData__float___ctor__);
  v40 = System_Linq_Enumerable__OrderBy_USInternalKeyframe__float_(
          v36,
          (System_Func_TSource__TKey__o *)v39,
          (const MethodInfo_1B4EA0C *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v43 = TargetFilterLowestHpRate___c_TypeInfo;
  v44 = v40;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v43 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v45->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v41,
                                                                                v42);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v47,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_4__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v48 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v48->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B0D840(&v48->__9__0_4, _9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v44,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0

  if ( (byte_421177C & 1) == 0 )
  {
    sub_B0D8A4(&TargetFilterLowestHpRate___c_TypeInfo, v1);
    byte_421177C = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TargetFilterLowestHpRate___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall TargetFilterLowestHpRate___c___ctor(TargetFilterLowestHpRate___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_0(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__getDeckIndex(x, 0LL);
}


void __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__2(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_421177D & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B0D8A4(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_421177D = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0LL) )
    return 0;
  this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
                                                              x,
                                                              x->klass->vtable._10_set_hp.methodPtr);
  uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_B0D97C(this);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_421177E & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B0D8A4(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_421177E = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_B0D97C(this);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_2E69794 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}