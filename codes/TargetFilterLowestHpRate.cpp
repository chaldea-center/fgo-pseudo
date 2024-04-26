void __fastcall TargetFilterLowestHpRate___ctor(TargetFilterLowestHpRate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpRate__Apply(
        TargetFilterLowestHpRate_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  TargetFilterLowestHpRate___c_c *v5; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v8; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v9; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *v10; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v12; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v13; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v14; // x0
  __int64 v15; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_WarBoardAIRoute_RouteData__float__o *v18; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  TargetFilterLowestHpRate___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v22; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v24; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v25; // x0

  if ( (byte_434EE15 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
    sub_B70694(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B70694(&Method_System_Func_BattleServantData__float___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B70694(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B70694(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B70694(&System_Func_BattleServantData__int__TypeInfo);
    sub_B70694(&System_Func_BattleServantData__float__TypeInfo);
    sub_B70694(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__);
    sub_B70694(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__);
    sub_B70694(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__);
    sub_B70694(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__);
    sub_B70694(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__);
    sub_B70694(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
    sub_B70694(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_434EE15 = 1;
  }
  v4 = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B70764(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(v4, 0LL);
  v5 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v8,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleServantData__int___ctor__);
    v9 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v9->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B70630(&v9->__9__0_0);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v10 = v5->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v10->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v10 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)v10->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v12,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleServantData__int___ctor__);
    v13 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v13->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B70630(&v13->__9__0_1);
  }
  v14 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1CC8B3C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_B7076C(v14, v15);
  v4->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v14;
  sub_B70630(&v4->fields);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleServantData__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v18 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B70764(System_Func_BattleServantData__float__TypeInfo);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v18,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    (const MethodInfo_29AE46C *)Method_System_Func_BattleServantData__float___ctor__);
  v19 = System_Linq_Enumerable__OrderBy_USInternalKeyframe__float_(
          v17,
          (System_Func_TSource__TKey__o *)v18,
          (const MethodInfo_1CBFC34 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v20 = TargetFilterLowestHpRate___c_TypeInfo;
  v21 = v19;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v20 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v22->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v22 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v24,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_4__,
      (const MethodInfo_29AD124 *)Method_System_Func_BattleServantData__int___ctor__);
    v25 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v25->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B70630(&v25->__9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v21,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1CC7F60 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0

  if ( (byte_434F10D & 1) == 0 )
  {
    sub_B70694(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_434F10D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
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
  if ( (byte_434F10E & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_434F10E = 1;
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
    sub_B7076C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_434F10F & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_434F10F = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_B7076C(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}