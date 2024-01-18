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
  TargetFilterLowestHpValue___c_c *v19; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v22; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v23; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *v24; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v26; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v27; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v28; // x0
  __int64 v29; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  TargetFilterLowestHpValue___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v34; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_3; // x20
  Il2CppObject *v36; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v37; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  TargetFilterLowestHpValue___c_c *v39; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v41; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v43; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v44; // x0

  if ( (byte_4184534 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_BattleServantData__int___ctor__, v8);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_BattleServantData__int__TypeInfo, v10);
    sub_B2C35C(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v11);
    sub_B2C35C(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v12);
    sub_B2C35C(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v13);
    sub_B2C35C(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v14);
    sub_B2C35C(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v15);
    sub_B2C35C(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v16);
    sub_B2C35C(&TargetFilterLowestHpValue___c_TypeInfo, v17);
    byte_4184534 = 1;
  }
  v18 = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B2C42C(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(v18, 0LL);
  v19 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v22,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v23 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v23->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B2C2F8(&v23->__9__0_0, _9__0_0);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v24 = v19->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v24->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v24 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v26,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v27 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B2C2F8(&v27->__9__0_1, _9__0_1);
  }
  v28 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1A9B370 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v18 )
    sub_B2C434(v28, v29);
  v18->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v28;
  sub_B2C2F8(&v18->fields, v28);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v30,
    (Il2CppObject *)v18,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
  v31 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v32 = TargetFilterLowestHpValue___c_TypeInfo;
  v33 = v31;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v32 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v34->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v34 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_3,
      v36,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_3__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v37 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v37->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_B2C2F8(&v37->__9__0_3, _9__0_3);
  }
  v38 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v33,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v39 = TargetFilterLowestHpValue___c_TypeInfo;
  v40 = v38;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v39 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v41 = v39->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v41->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v41 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)v41->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v43,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_4__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v44 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v44->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B2C2F8(&v44->__9__0_4, _9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v40,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0

  if ( (byte_41847EA & 1) == 0 )
  {
    sub_B2C35C(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_41847EA = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  if ( (byte_41847EB & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x);
    byte_41847EB = 1;
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
    sub_B2C434(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}