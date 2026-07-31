void TargetFilterLowestHpRate___ctor(TargetFilterLowestHpRate_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *TargetFilterLowestHpRate__Apply(
        TargetFilterLowestHpRate_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x1
  TargetFilterLowestHpRate___c_c *v6; // x0
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v9; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct TargetFilterLowestHpRate___c_StaticFields *v17; // x8
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v19; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v20; // x0
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
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Func_T__TResult__o *v37; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  TargetFilterLowestHpRate___c_c *v40; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x19
  struct TargetFilterLowestHpRate___c_StaticFields *v42; // x9
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v44; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_593BC4A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_21FFC50(&System_Func_BattleServantData__int__TypeInfo);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleServantData__float__TypeInfo);
    sub_21FFC50(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__);
    sub_21FFC50(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__);
    sub_21FFC50(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__);
    sub_21FFC50(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__);
    sub_21FFC50(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__);
    sub_21FFC50(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_593BC4A = 1;
  }
  v4 = sub_21FFEBC(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v6 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( !*(&TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo, v5);
    v6 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__0_0 = (System_Func_object__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v9, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0);
    v10 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v10->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__0_0, (int32_t)_9__0_0, v11, v12, v13, v14, v15, v16);
    v6 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( !*(&v6->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v6, v5);
    v6 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v17 = v6->static_fields;
  _9__0_1 = (System_Func_object__int__o *)v17->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      v17 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)v17->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v19, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0);
    v20 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v20->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__0_1, (int32_t)_9__0_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_3868FB0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_21FFECC(v27, v28);
  *(_QWORD *)(v4 + 16) = v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0);
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v37 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_BattleServantData__float__TypeInfo);
  System_Func_object__float____ctor(
    v37,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0);
  v38 = System_Linq_Enumerable__OrderBy_object__float_(
          v36,
          (System_Func_TSource__TKey__o *)v37,
          (const MethodInfo_3855828 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v40 = TargetFilterLowestHpRate___c_TypeInfo;
  v41 = v38;
  if ( !*(&TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo, v39);
    v40 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  v42 = v40->static_fields;
  _9__0_4 = (System_Func_object__int__o *)v42->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v39);
      v42 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v44, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0);
    v45 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v45->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__0_4, (int32_t)_9__0_4, v46, v47, v48, v49, v50, v51);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v41,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593BC4B & 1) == 0 )
  {
    sub_21FFC50(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_593BC4B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TargetFilterLowestHpRate___c___ctor(TargetFilterLowestHpRate___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_0(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.uniqueId;
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleServantData__getMaxHp(x, 0);
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


void TargetFilterLowestHpRate___c__DisplayClass0_0___ctor(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__2(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_593BC4C & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_593BC4C = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0) )
    return 0;
  this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                              x,
                                                              x->klass->vtable._9_get_hp.method);
  uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_21FFECC(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_593BC4D & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_593BC4D = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                                    x,
                                                                    x->klass->vtable._9_get_hp.method,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0) )
  {
    sub_21FFECC(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}