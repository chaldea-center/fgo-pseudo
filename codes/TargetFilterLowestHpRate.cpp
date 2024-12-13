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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v29; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Func_object__bool__o *v45; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_T__TResult__o *v47; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x0
  TargetFilterLowestHpRate___c_c *v49; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v52; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7

  if ( (byte_4B39F2D & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable);
    sub_1BD3458(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1BD3458(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1BD3458(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1BD3458(&System_Func_BattleServantData__float__TypeInfo, v9);
    sub_1BD3458(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v10);
    sub_1BD3458(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v11);
    sub_1BD3458(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v12);
    sub_1BD3458(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v13);
    sub_1BD3458(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v14);
    sub_1BD3458(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v15);
    sub_1BD3458(&TargetFilterLowestHpRate___c_TypeInfo, v16);
    byte_4B39F2D = 1;
  }
  v17 = sub_1BD36A4(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
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
    _9__0_0 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v20, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v22, v23, v24, v25, v26, v27);
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
    v29 = (Il2CppObject *)v18->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v29, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0LL);
    v30 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v30->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v30->__9__0_1, (int64_t)_9__0_1, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2F6B438 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v17 )
    sub_1BD36B4(v37, v38);
  *(_QWORD *)(v17 + 16) = v37;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)v37, v39, v40, v41, v42, v43, v44);
  v45 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v45,
    (Il2CppObject *)v17,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v46 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v45,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v47 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_BattleServantData__float__TypeInfo);
  System_Func_object__float____ctor(
    v47,
    (Il2CppObject *)v17,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0LL);
  v48 = System_Linq_Enumerable__OrderBy_object__float_(
          v46,
          (System_Func_TSource__TKey__o *)v47,
          (const MethodInfo_2F5A818 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v49 = TargetFilterLowestHpRate___c_TypeInfo;
  v50 = v48;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v49 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v49->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v49->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v52, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0LL);
    v53 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v53->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v53->__9__0_4, (int64_t)_9__0_4, v54, v55, v56, v57, v58, v59);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v50,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2F6A248 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B39F2E & 1) == 0 )
  {
    sub_1BD3458(&TargetFilterLowestHpRate___c_TypeInfo, v1);
    byte_4B39F2E = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BD36B4(this, 0LL);
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
  if ( (byte_4B39F2F & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1BD3458(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_4B39F2F = 1;
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
    sub_1BD36B4(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_321C288 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4B39F30 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1BD3458(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x);
    byte_4B39F30 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_1BD36B4(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_321C288 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}