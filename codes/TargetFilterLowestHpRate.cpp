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
  __int64 v4; // x4
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  TargetFilterLowestHpRate___c_c *v27; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v30; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct TargetFilterLowestHpRate___c_StaticFields *v38; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v40; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x19
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Func_WarBoardAIRoute_RouteData__float__o *v65; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  TargetFilterLowestHpRate___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v73; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v75; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_40F6C45 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__float___ctor__, v9);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Func_BattleServantData__int___ctor__, v11);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v12);
    sub_B16FFC(&System_Func_BattleServantData__int__TypeInfo, v13);
    sub_B16FFC(&System_Func_BattleServantData__float__TypeInfo, v14);
    sub_B16FFC(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v15);
    sub_B16FFC(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v16);
    sub_B16FFC(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v17);
    sub_B16FFC(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v18);
    sub_B16FFC(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v19);
    sub_B16FFC(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v20);
    sub_B16FFC(&TargetFilterLowestHpRate___c_TypeInfo, v21);
    byte_40F6C45 = 1;
  }
  v22 = sub_B170CC(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, servantEnumerable, method, v3, v4);
  TargetFilterLowestHpRate___c__DisplayClass0_0___ctor((TargetFilterLowestHpRate___c__DisplayClass0_0_o *)v22, 0LL);
  v27 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v27 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v23,
                                                                                v24,
                                                                                v25,
                                                                                v26);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v30,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v31 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v31->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v31->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v27 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v38 = v27->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v38->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v38 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v23,
                                                                                v24,
                                                                                v25,
                                                                                v26);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v40,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v41 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v41->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v41->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                 (System_Func_TSource__TKey__o *)_9__0_0,
                                 (System_Func_TSource__TElement__o *)_9__0_1,
                                 (const MethodInfo_19C4F74 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v22 )
    sub_B170D4();
  *(_QWORD *)(v22 + 16) = v48;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), v48, v49, v50, v51, v52, v53, v54);
  v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v55,
                                                                             v56,
                                                                             v57,
                                                                             v58);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v59,
    (Il2CppObject *)v22,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v60 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v59,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v65 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B170CC(
                                                             System_Func_BattleServantData__float__TypeInfo,
                                                             v61,
                                                             v62,
                                                             v63,
                                                             v64);
  System_Func_WarBoardAIRoute_RouteData__float____ctor(
    v65,
    (Il2CppObject *)v22,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    (const MethodInfo_2B6CA34 *)Method_System_Func_BattleServantData__float___ctor__);
  v66 = System_Linq_Enumerable__OrderBy_USInternalKeyframe__float_(
          v60,
          (System_Func_TSource__TKey__o *)v65,
          (const MethodInfo_19BD83C *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v71 = TargetFilterLowestHpRate___c_TypeInfo;
  v72 = v66;
  if ( (BYTE3(TargetFilterLowestHpRate___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v71 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v73 = v71->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v73->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v73 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v67,
                                                                                v68,
                                                                                v69,
                                                                                v70);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v75,
      Method_TargetFilterLowestHpRate___c__Apply_b__0_4__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v76 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v76->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v76->__9__0_4,
      (System_Int32_array **)_9__0_4,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v72,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F779C & 1) == 0 )
  {
    sub_B16FFC(&TargetFilterLowestHpRate___c_TypeInfo, v1);
    byte_40F779C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TargetFilterLowestHpRate___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  int32_t v6; // w0
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  if ( (byte_40F779D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, x);
    byte_40F779D = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0LL) )
    return 0;
  v6 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))x->klass->vtable._9_get_hp.method)(
         x,
         x->klass->vtable._10_set_hp.methodPtr);
  uniqueIdToMaxHpDict = this->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_B170D4();
  return v6 < System_Collections_Generic_Dictionary_int__int___get_Item(
                uniqueIdToMaxHpDict,
                x->fields.uniqueId,
                (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  int v5; // w0
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  if ( (byte_40F779E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, x);
    byte_40F779E = 1;
  }
  if ( !x
    || (v5 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
               x,
               x->klass->vtable._10_set_hp.methodPtr,
               method),
        (uniqueIdToMaxHpDict = this->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_B170D4();
  }
  return (float)v5
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}