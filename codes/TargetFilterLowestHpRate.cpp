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
  TargetFilterLowestHpRate___c_c *v21; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v24; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v25; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *v26; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v28; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v29; // x0
  System_Collections_Generic_Dictionary_TKey__TElement__o *v30; // x0
  __int64 v31; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  System_Func_WarBoardAIRoute_RouteData__float__o *v34; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  TargetFilterLowestHpRate___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v38; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v40; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v41; // x0

  if ( (byte_4184533 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B2C35C(&Method_System_Func_BattleServantData__float___ctor__, v7);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_BattleServantData__int___ctor__, v9);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_BattleServantData__int__TypeInfo, v11);
    sub_B2C35C(&System_Func_BattleServantData__float__TypeInfo, v12);
    sub_B2C35C(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v13);
    sub_B2C35C(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v14);
    sub_B2C35C(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v15);
    sub_B2C35C(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v16);
    sub_B2C35C(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v17);
    sub_B2C35C(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v18);
    sub_B2C35C(&TargetFilterLowestHpRate___c_TypeInfo, v19);
    byte_4184533 = 1;
  }
  v20 = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B2C42C(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(v20, 0LL);
  v21 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v21 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v24,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v25 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v25->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B2C2F8(&v25->__9__0_0, _9__0_0);
    v21 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v26 = v21->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v26->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v26 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v28,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v29 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v29->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B2C2F8(&v29->__9__0_1, _9__0_1);
  }
  v30 = System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_1A9B370 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v20 )
    sub_B2C434(v30, v31);
  v20->fields.uniqueIdToMaxHpDict = (struct System_Collections_Generic_Dictionary_int__int__o *)v30;
  sub_B2C2F8(&v20->fields, v30);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v20,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
  v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v34 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B2C42C(System_Func_BattleServantData__float__TypeInfo);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v34,
    (Il2CppObject *)v20,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    (const MethodInfo_2713AF8 *)Method_System_Func_BattleServantData__float___ctor__);
  v35 = System_Linq_Enumerable__OrderBy_USInternalKeyframe__float_(
          v33,
          (System_Func_TSource__TKey__o *)v34,
          (const MethodInfo_1A93740 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v36 = TargetFilterLowestHpRate___c_TypeInfo;
  v37 = v35;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v36 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v38->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v38 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v40,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_4__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
    v41 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v41->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B2C2F8(&v41->__9__0_4, _9__0_4);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v37,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0

  if ( (byte_41847E7 & 1) == 0 )
  {
    sub_B2C35C(&TargetFilterLowestHpRate___c_TypeInfo, v1);
    byte_41847E7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
  if ( (byte_41847E8 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_41847E8 = 1;
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
    sub_B2C434(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_41847E9 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_B2C35C(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_41847E9 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_B2C434(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}