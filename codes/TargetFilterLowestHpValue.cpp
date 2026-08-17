void TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x1
  TargetFilterLowestHpValue___c_c *v6; // x0
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v9; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TargetFilterLowestHpValue___c_StaticFields *v17; // x8
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v19; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Func_object__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  TargetFilterLowestHpValue___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v40; // x9
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v42; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  __int64 v51; // x1
  TargetFilterLowestHpValue___c_c *v52; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x19
  struct TargetFilterLowestHpValue___c_StaticFields *v54; // x9
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v56; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_5973E53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__int__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__);
    sub_2213A60(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__);
    sub_2213A60(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__);
    sub_2213A60(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__);
    sub_2213A60(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__);
    sub_2213A60(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
    sub_2213A60(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_5973E53 = 1;
  }
  v4 = sub_2213CCC(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v6 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( !*(&TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v5);
    v6 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v9, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0);
    v10 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v10->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__0_0, (int32_t)_9__0_0, v11, v12, v13, v14, v15, v16);
    v6 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, v5);
    v6 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v17 = v6->static_fields;
  _9__0_1 = (System_Func_object__int__o *)v17->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      v17 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)v17->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v19, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0);
    v20 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v20->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__0_1, (int32_t)_9__0_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_389C478 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_2213CDC(v27, v28);
  *(_QWORD *)(v4 + 16) = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0);
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v38 = TargetFilterLowestHpValue___c_TypeInfo;
  v39 = v36;
  if ( !*(&TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v37);
    v38 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v40 = v38->static_fields;
  _9__0_3 = (System_Func_object__int__o *)v40->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !*(&v38->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v38, v37);
      v40 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v40->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_3, v42, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0);
    v43 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v43->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->__9__0_3, (int32_t)_9__0_3, v44, v45, v46, v47, v48, v49);
  }
  v50 = System_Linq_Enumerable__OrderBy_object__int_(
          v39,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v52 = TargetFilterLowestHpValue___c_TypeInfo;
  v53 = v50;
  if ( !*(&TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v51);
    v52 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  v54 = v52->static_fields;
  _9__0_4 = (System_Func_object__int__o *)v54->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !*(&v52->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v52, v51);
      v54 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v56, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0);
    v57 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v57->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->__9__0_4, (int32_t)_9__0_4, v58, v59, v60, v61, v62, v63);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v53,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973E54 & 1) == 0 )
  {
    sub_2213A60(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_5973E54 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TargetFilterLowestHpValue___c___ctor(TargetFilterLowestHpValue___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_0(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.uniqueId;
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__getMaxHp(x, 0);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
           x,
           x->klass->vtable._9_get_hp.method);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_4(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


void TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TargetFilterLowestHpValue___c__DisplayClass0_0___Apply_b__2(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_5973E55 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_5973E55 = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0) )
    return 0;
  this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                               x,
                                                               x->klass->vtable._9_get_hp.method);
  uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_2213CDC(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}