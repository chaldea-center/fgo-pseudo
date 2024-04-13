void __fastcall TargetFilterLowestHpRate___ctor(TargetFilterLowestHpRate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpRate__Apply(
        TargetFilterLowestHpRate_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v53; // x20
  TargetFilterLowestHpRate___c_c *v54; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v57; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v58; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *v59; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v61; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v62; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v63; // x0
  __int64 v64; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x19
  System_Func_WarBoardAIRoute_RouteData__float__o *v67; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v68; // x0
  TargetFilterLowestHpRate___c_c *v69; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v71; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v73; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v74; // x0

  if ( (byte_42E5B2C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___,
      (_DWORD)servantEnumerable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_BattleServantData__float___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleServantData__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_BattleServantData__int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Func_BattleServantData__float__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v32, v33, v34);
    sub_B5D5C4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v35, v36, v37);
    sub_B5D5C4(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v38, v39, v40);
    sub_B5D5C4(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v41, v42, v43);
    sub_B5D5C4(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v44, v45, v46);
    sub_B5D5C4(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&TargetFilterLowestHpRate___c_TypeInfo, v50, v51, v52);
    byte_42E5B2C = 1;
  }
  v53 = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B5D694(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(v53, 0LL);
  v54 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v54 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v54->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v57 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v57,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v58 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v58->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B5D560(&v58->__9__0_0);
    v54 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v54);
    v54 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v59 = v54->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v59->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v59 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v61,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v62 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v62->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B5D560(&v62->__9__0_1);
  }
  v63 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1CB7C08 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v53 )
    sub_B5D69C(v63, v64);
  v53->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v63;
  sub_B5D560(&v53->fields);
  v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v65,
    (Il2CppObject *)v53,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v66 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v65,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v67 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_BattleServantData__float__TypeInfo);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v67,
    (Il2CppObject *)v53,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    (const MethodInfo_2C30BC4 *)Method_System_Func_BattleServantData__float___ctor__);
  v68 = System_Linq_Enumerable__OrderBy_USInternalKeyframe__float_(
          v66,
          (System_Func_TSource__TKey__o *)v67,
          (const MethodInfo_1CAF2F0 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v69 = TargetFilterLowestHpRate___c_TypeInfo;
  v70 = v68;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v69 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v71 = v69->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v71->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v71 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v73 = (Il2CppObject *)v71->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v73,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_4__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v74 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v74->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B5D560(&v74->__9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v70,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0

  if ( (byte_42E649D & 1) == 0 )
  {
    sub_B5D5C4(&TargetFilterLowestHpRate___c_TypeInfo, v1, v2, v3);
    byte_42E649D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v5; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v5 = this;
  if ( (byte_42E649E & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                (_DWORD)x,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E649E = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0LL) )
    return 0;
  this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
                                                              x,
                                                              x->klass->vtable._10_set_hp.methodPtr);
  uniqueIdToMaxHpDict = v5->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_B5D69C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v5; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v5 = this;
  if ( (byte_42E649F & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                (_DWORD)x,
                                                                (_DWORD)method,
                                                                v3);
    byte_42E649F = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v5->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_B5D69C(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}