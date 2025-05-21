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
  __int64 v16; // x20
  TargetFilterLowestHpValue___c_c *v17; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v19; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v24; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  TargetFilterLowestHpValue___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v37; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  TargetFilterLowestHpValue___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v45; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3

  if ( (byte_4B47B7C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_1BDB878(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1BDB878(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1BDB878(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1BDB878(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v9);
    sub_1BDB878(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v10);
    sub_1BDB878(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v11);
    sub_1BDB878(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v12);
    sub_1BDB878(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v13);
    sub_1BDB878(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v14);
    sub_1BDB878(&TargetFilterLowestHpValue___c_TypeInfo, v15);
    byte_4B47B7C = 1;
  }
  v16 = sub_1BDBAC4(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  v17 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v17 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v17->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v19, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v21, v22);
    v17 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v17->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v17->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v24, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0LL);
    v25 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v25->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v25->__9__0_1, (int32_t)_9__0_1, v26, v27);
  }
  v28 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_3071018 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v16 )
    sub_1BDBAD4(v28, v29);
  *(_QWORD *)(v16 + 16) = v28;
  sub_1BDB81C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)v28, v30, v31);
  v32 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v16,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v33 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v34 = TargetFilterLowestHpValue___c_TypeInfo;
  v35 = v33;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v34 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_3 = (System_Func_object__int__o *)v34->static_fields->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_3, v37, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0LL);
    v38 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v38->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v38->__9__0_3, (int32_t)_9__0_3, v39, v40);
  }
  v41 = System_Linq_Enumerable__OrderBy_object__int_(
          v35,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v42 = TargetFilterLowestHpValue___c_TypeInfo;
  v43 = v41;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v42 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v42->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v45, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0LL);
    v46 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v46->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1BDB81C((CGThumbnailListItem_o *)&v46->__9__0_4, (int32_t)_9__0_4, v47, v48);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v43,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_306FC3C *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B47B7D & 1) == 0 )
  {
    sub_1BDB878(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_4B47B7D = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
  if ( (byte_4B47B7E & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1BDB878(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x);
    byte_4B47B7E = 1;
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
    sub_1BDBAD4(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_33327CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}