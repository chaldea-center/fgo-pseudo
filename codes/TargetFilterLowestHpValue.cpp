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
  __int64 v17; // x1
  __int64 v18; // x2
  TargetFilterLowestHpValue___c_c *v19; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v21; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v26; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_object__bool__o *v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  TargetFilterLowestHpValue___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v42; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  TargetFilterLowestHpValue___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v52; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3

  if ( (byte_49FF068 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1B640C8(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v9);
    sub_1B640C8(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v10);
    sub_1B640C8(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v11);
    sub_1B640C8(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v12);
    sub_1B640C8(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v13);
    sub_1B640C8(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v14);
    sub_1B640C8(&TargetFilterLowestHpValue___c_TypeInfo, v15);
    byte_49FF068 = 1;
  }
  v16 = sub_1B64314(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, servantEnumerable, method);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  v19 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v19->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v17, v18);
    System_Func_object__int____ctor(_9__0_0, v21, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v23, v24);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v19->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v19->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v17, v18);
    System_Func_object__int____ctor(_9__0_1, v26, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0LL);
    v27 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->__9__0_1, (int32_t)_9__0_1, v28, v29);
  }
  v30 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2E719F4 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v16 )
    sub_1B64324(v30);
  *(_QWORD *)(v16 + 16) = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)v30, v31, v32);
  v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v33, v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v16,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v36 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v39 = TargetFilterLowestHpValue___c_TypeInfo;
  v40 = v36;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v39 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_3 = (System_Func_object__int__o *)v39->static_fields->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v37, v38);
    System_Func_object__int____ctor(_9__0_3, v42, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0LL);
    v43 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v43->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v43->__9__0_3, (int32_t)_9__0_3, v44, v45);
  }
  v46 = System_Linq_Enumerable__OrderBy_object__int_(
          v40,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v49 = TargetFilterLowestHpValue___c_TypeInfo;
  v50 = v46;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v49 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v49->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v47, v48);
    System_Func_object__int____ctor(_9__0_4, v52, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0LL);
    v53 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v53->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v53->__9__0_4, (int32_t)_9__0_4, v54, v55);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v50,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF069 & 1) == 0 )
  {
    sub_1B640C8(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_49FF069 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TargetFilterLowestHpValue___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FF06A & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1B640C8(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x);
    byte_49FF06A = 1;
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
    sub_1B64324(this);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}