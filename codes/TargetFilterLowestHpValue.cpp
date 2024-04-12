void __fastcall TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v4; // x20
  TargetFilterLowestHpValue___c_c *v5; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v8; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v9; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *v10; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v12; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v13; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v14; // x0
  __int64 v15; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  TargetFilterLowestHpValue___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v20; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_3; // x20
  Il2CppObject *v22; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v23; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  TargetFilterLowestHpValue___c_c *v25; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v26; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v27; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v29; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v30; // x0

  if ( (byte_42ACFF4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__int__TypeInfo);
    sub_B52984(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__);
    sub_B52984(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__);
    sub_B52984(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__);
    sub_B52984(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__);
    sub_B52984(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__);
    sub_B52984(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
    sub_B52984(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_42ACFF4 = 1;
  }
  v4 = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B52A54(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(v4, 0LL);
  v5 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v8,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
    v9 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v9->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B52920(&v9->__9__0_0);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v10 = v5->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v10->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v10 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)v10->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v12,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
    v13 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v13->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B52920(&v13->__9__0_1);
  }
  v14 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1B6E9B8 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_B52A5C(v14, v15);
  v4->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v14;
  sub_B52920(&v4->fields);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v18 = TargetFilterLowestHpValue___c_TypeInfo;
  v19 = v17;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v18 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v20->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v20 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_3,
      v22,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_3__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
    v23 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v23->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_B52920(&v23->__9__0_3);
  }
  v24 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v19,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v25 = TargetFilterLowestHpValue___c_TypeInfo;
  v26 = v24;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v25 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v27 = v25->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v27->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v27 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v29,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_4__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BattleServantData__int___ctor__);
    v30 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v30->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B52920(&v30->__9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v26,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1B6DDDC *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0

  if ( (byte_42ADDC6 & 1) == 0 )
  {
    sub_B52984(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_42ADDC6 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  if ( (byte_42ADDC7 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_42ADDC7 = 1;
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
    sub_B52A5C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}