void __fastcall TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
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
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  TargetFilterLowestHpValue___c_c *v21; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v24; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v25; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *v26; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v28; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v29; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  TargetFilterLowestHpValue___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v39; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_3; // x20
  Il2CppObject *v41; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v42; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  TargetFilterLowestHpValue___c_c *v46; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v48; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v50; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v51; // x0

  if ( (byte_4211937 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleServantData__int___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_BattleServantData__int__TypeInfo, v10);
    sub_B0D8A4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v11);
    sub_B0D8A4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v12);
    sub_B0D8A4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v13);
    sub_B0D8A4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v14);
    sub_B0D8A4(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v15);
    sub_B0D8A4(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v16);
    sub_B0D8A4(&TargetFilterLowestHpValue___c_TypeInfo, v17);
    byte_4211937 = 1;
  }
  v18 = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B0D974(
                                                              TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo,
                                                              servantEnumerable,
                                                              method);
  TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(v18, 0LL);
  v21 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v21 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v19,
                                                                                v20);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v24,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_0__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v25 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v25->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B0D840(&v25->__9__0_0, _9__0_0);
    v21 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v26 = v21->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v26->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v26 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v19,
                                                                                v20);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v28,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_1__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v29 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v29->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B0D840(&v29->__9__0_1, _9__0_1);
  }
  v30 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1B5663C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v18 )
    sub_B0D97C(v30);
  v18->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v30;
  sub_B0D840(&v18->fields, v30);
  v33 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v31,
                                                                             v32);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v33,
    (Il2CppObject *)v18,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v37 = TargetFilterLowestHpValue___c_TypeInfo;
  v38 = v34;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v37 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v39 = v37->static_fields;
  _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v39->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v39 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)v39->__9;
    _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v35,
                                                                                v36);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_3,
      v41,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_3__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v42 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v42->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_B0D840(&v42->__9__0_3, _9__0_3);
  }
  v43 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v38,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v46 = TargetFilterLowestHpValue___c_TypeInfo;
  v47 = v43;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v46 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v48->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v48 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v44,
                                                                                v45);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v50,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_4__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
    v51 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v51->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B0D840(&v51->__9__0_4, _9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v47,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0

  if ( (byte_421177F & 1) == 0 )
  {
    sub_B0D8A4(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_421177F = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TargetFilterLowestHpValue___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall TargetFilterLowestHpValue___c___ctor(TargetFilterLowestHpValue___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_0(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
           x,
           x->klass->vtable._10_set_hp.methodPtr);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_4(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__getDeckIndex(x, 0LL);
}


void __fastcall TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TargetFilterLowestHpValue___c__DisplayClass0_0___Apply_b__2(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4211780 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B0D8A4(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x);
    byte_4211780 = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0LL) )
    return 0;
  this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
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