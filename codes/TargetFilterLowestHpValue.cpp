void __fastcall TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v4; // x20
  TargetFilterLowestHpValue___c_c *v5; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v7; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v16; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  TargetFilterLowestHpValue___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v37; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x0
  TargetFilterLowestHpValue___c_c *v46; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v49; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  if ( (byte_4BDF377 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C21E38(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__);
    sub_1C21E38(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__);
    sub_1C21E38(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__);
    sub_1C21E38(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__);
    sub_1C21E38(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__);
    sub_1C21E38(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
    sub_1C21E38(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_4BDF377 = 1;
  }
  v4 = sub_1C22084(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  v5 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v5->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v9, v10, v11, v12, v13, v14);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v5->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v16, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0LL);
    v17 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v17->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v17->__9__0_1, (int64_t)_9__0_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2FE9EF0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_1C22094(v24, v25);
  *(_QWORD *)(v4 + 16) = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 16), (int64_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v33 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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
    _9__0_3 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_3, v37, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0LL);
    v38 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v38->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v38->__9__0_3, (int64_t)_9__0_3, v39, v40, v41, v42, v43, v44);
  }
  v45 = System_Linq_Enumerable__OrderBy_object__int_(
          v35,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v46 = TargetFilterLowestHpValue___c_TypeInfo;
  v47 = v45;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v46 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v46->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v49, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0LL);
    v50 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v50->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v50->__9__0_4, (int64_t)_9__0_4, v51, v52, v53, v54, v55, v56);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v47,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF378 & 1) == 0 )
  {
    sub_1C21E38(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_4BDF378 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
  if ( (byte_4BDF379 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4BDF379 = 1;
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
    sub_1C22094(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}