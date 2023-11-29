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
  __int64 v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  TargetFilterLowestHpValue___c_c *v25; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x21
  Il2CppObject *v28; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TargetFilterLowestHpValue___c_StaticFields *v36; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x22
  Il2CppObject *v38; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  TargetFilterLowestHpValue___c_c *v63; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v65; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_3; // x20
  Il2CppObject *v67; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  TargetFilterLowestHpValue___c_c *v80; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v81; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v82; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_4; // x20
  Il2CppObject *v84; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7

  if ( (byte_40F6C46 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_BattleServantData__int___ctor__, v10);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_BattleServantData__int__TypeInfo, v12);
    sub_B16FFC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v13);
    sub_B16FFC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v14);
    sub_B16FFC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v15);
    sub_B16FFC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v16);
    sub_B16FFC(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v17);
    sub_B16FFC(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v18);
    sub_B16FFC(&TargetFilterLowestHpValue___c_TypeInfo, v19);
    byte_40F6C46 = 1;
  }
  v20 = sub_B170CC(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, servantEnumerable, method, v3, v4);
  TargetFilterLowestHpValue___c__DisplayClass0_0___ctor((TargetFilterLowestHpValue___c__DisplayClass0_0_o *)v20, 0LL);
  v25 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v25 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v21,
                                                                                v22,
                                                                                v23,
                                                                                v24);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v28,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v29 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v29->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v25 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v36 = v25->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v36->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v36 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v21,
                                                                                v22,
                                                                                v23,
                                                                                v24);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v38,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v39 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v39->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  v46 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_WarBoardRoadEntity__int__int_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                 (System_Func_TSource__TKey__o *)_9__0_0,
                                 (System_Func_TSource__TElement__o *)_9__0_1,
                                 (const MethodInfo_19C4F74 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v20 )
    sub_B170D4();
  *(_QWORD *)(v20 + 16) = v46;
  sub_B16F98((BattleServantConfConponent_o *)(v20 + 16), v46, v47, v48, v49, v50, v51, v52);
  v57 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v53,
                                                                             v54,
                                                                             v55,
                                                                             v56);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v57,
    (Il2CppObject *)v20,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v57,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v63 = TargetFilterLowestHpValue___c_TypeInfo;
  v64 = v58;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v63 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v65 = v63->static_fields;
  _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v65->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v65 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__0_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v59,
                                                                                v60,
                                                                                v61,
                                                                                v62);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_3,
      v67,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_3__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v68 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v68->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v68->__9__0_3,
      (System_Int32_array **)_9__0_3,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v64,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v80 = TargetFilterLowestHpValue___c_TypeInfo;
  v81 = v75;
  if ( (BYTE3(TargetFilterLowestHpValue___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v80 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v82 = v80->static_fields;
  _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v82->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v82 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__0_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleServantData__int__TypeInfo,
                                                                                v76,
                                                                                v77,
                                                                                v78,
                                                                                v79);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_4,
      v84,
      Method_TargetFilterLowestHpValue___c__Apply_b__0_4__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
    v85 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v85->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v85->__9__0_4,
      (System_Int32_array **)_9__0_4,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                          v81,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F779F & 1) == 0 )
  {
    sub_B16FFC(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_40F779F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TargetFilterLowestHpValue___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
  int32_t v6; // w0
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  if ( (byte_40F77A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, x);
    byte_40F77A0 = 1;
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