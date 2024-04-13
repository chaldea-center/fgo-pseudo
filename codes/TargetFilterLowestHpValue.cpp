void __fastcall TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
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
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v47; // x20
  TargetFilterLowestHpValue___c_c *v48; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v51; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v52; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *v53; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v55; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v56; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v57; // x0
  __int64 v58; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  TargetFilterLowestHpValue___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v63; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_3; // x20
  Il2CppObject *v65; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v66; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x0
  TargetFilterLowestHpValue___c_c *v68; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v69; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v70; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v72; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v73; // x0

  if ( (byte_42E5B2D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___,
      (_DWORD)servantEnumerable,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleServantData__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleServantData__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v26, v27, v28);
    sub_B5D5C4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v29, v30, v31);
    sub_B5D5C4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v32, v33, v34);
    sub_B5D5C4(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v35, v36, v37);
    sub_B5D5C4(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v38, v39, v40);
    sub_B5D5C4(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TargetFilterLowestHpValue___c_TypeInfo, v44, v45, v46);
    byte_42E5B2D = 1;
  }
  v47 = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B5D694(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(v47, 0LL);
  v48 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v48 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v51,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v52 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v52->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B5D560(&v52->__9__0_0);
    v48 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v48);
    v48 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v53 = v48->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v53->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v53 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v55,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v56 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v56->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B5D560(&v56->__9__0_1);
  }
  v57 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1CB7C08 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v47 )
    sub_B5D69C(v57, v58);
  v47->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v57;
  sub_B5D560(&v47->fields);
  v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v59,
    (Il2CppObject *)v47,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v60 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v59,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v61 = TargetFilterLowestHpValue___c_TypeInfo;
  v62 = v60;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v61 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v63->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v63 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_3,
      v65,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_3__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v66 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v66->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_B5D560(&v66->__9__0_3);
  }
  v67 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v62,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v68 = TargetFilterLowestHpValue___c_TypeInfo;
  v69 = v67;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v68 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v70 = v68->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v70->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v70 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v72 = (Il2CppObject *)v70->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v72,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_4__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
    v73 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v73->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B5D560(&v73->__9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v69,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0

  if ( (byte_42E64A0 & 1) == 0 )
  {
    sub_B5D5C4(&TargetFilterLowestHpValue___c_TypeInfo, v1, v2, v3);
    byte_42E64A0 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v5; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v5 = this;
  if ( (byte_42E64A1 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B5D5C4(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 (_DWORD)x,
                                                                 (_DWORD)method,
                                                                 v3);
    byte_42E64A1 = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0LL) )
    return 0;
  this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
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