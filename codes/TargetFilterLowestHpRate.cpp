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
  __int64 v17; // x20
  TargetFilterLowestHpRate___c_c *v18; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v20; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v25; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_Func_object__bool__o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_T__TResult__o *v35; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x0
  TargetFilterLowestHpRate___c_c *v37; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v40; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3

  if ( (byte_4A30BE2 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable);
    sub_1B761C0(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_1B761C0(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_1B761C0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1B761C0(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1B761C0(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1B761C0(&System_Func_BattleServantData__float__TypeInfo, v9);
    sub_1B761C0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v10);
    sub_1B761C0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v11);
    sub_1B761C0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v12);
    sub_1B761C0(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v13);
    sub_1B761C0(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v14);
    sub_1B761C0(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v15);
    sub_1B761C0(&TargetFilterLowestHpRate___c_TypeInfo, v16);
    byte_4A30BE2 = 1;
  }
  v17 = sub_1B7640C(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  v18 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v18 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v18->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1B7640C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v20, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v22, v23);
    v18 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v18->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1B7640C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v25, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0LL);
    v26 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v26->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v26->__9__0_1, (int32_t)_9__0_1, v27, v28);
  }
  v29 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2E9B814 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v17 )
    sub_1B7641C(v29, v30);
  *(_QWORD *)(v17 + 16) = v29;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v29, v31, v32);
  v33 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v17,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2EA0B7C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v35 = (System_Func_T__TResult__o *)sub_1B7640C(System_Func_BattleServantData__float__TypeInfo);
  System_Func_object__float____ctor(
    v35,
    (Il2CppObject *)v17,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0LL);
  v36 = System_Linq_Enumerable__OrderBy_object__float_(
          v34,
          (System_Func_TSource__TKey__o *)v35,
          (const MethodInfo_2E8C998 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v37 = TargetFilterLowestHpRate___c_TypeInfo;
  v38 = v36;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v37 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v37->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1B7640C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v40, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0LL);
    v41 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v41->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v41->__9__0_4, (int32_t)_9__0_4, v42, v43);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v38,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2E9A338 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A30BE3 & 1) == 0 )
  {
    sub_1B761C0(&TargetFilterLowestHpRate___c_TypeInfo, v1);
    byte_4A30BE3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v2;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B7641C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
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
  if ( (byte_4A30BE4 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1B761C0(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_4A30BE4 = 1;
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
    sub_1B7641C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_3146D08 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4A30BE5 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1B761C0(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_4A30BE5 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_1B7641C(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_3146D08 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}