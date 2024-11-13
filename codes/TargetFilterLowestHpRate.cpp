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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  TargetFilterLowestHpRate___c_c *v35; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v37; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v46; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Func_object__bool__o *v65; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x19
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Func_T__TResult__o *v70; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  TargetFilterLowestHpRate___c_c *v75; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v78; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  if ( (byte_4B18F4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___, servantEnumerable, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleServantData__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_BattleServantData__float__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, v17, v18);
    sub_1BCA7E0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, v19, v20);
    sub_1BCA7E0(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, v21, v22);
    sub_1BCA7E0(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__, v23, v24);
    sub_1BCA7E0(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__, v25, v26);
    sub_1BCA7E0(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&TargetFilterLowestHpRate___c_TypeInfo, v29, v30);
    byte_4B18F4F = 1;
  }
  v31 = sub_1BCAA2C(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo, servantEnumerable, method, v3);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  v35 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo, v32);
    v35 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v35->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v32, v33, v34);
    System_Func_object__int____ctor(_9__0_0, v37, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v39, v40, v41, v42, v43, v44);
    v35 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35, v32);
    v35 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v35->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v35->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v32, v33, v34);
    System_Func_object__int____ctor(_9__0_1, v46, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0LL);
    v47 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v47->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v47->__9__0_1, (int64_t)_9__0_1, v48, v49, v50, v51, v52, v53);
  }
  v54 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2F4C08C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v31 )
    sub_1BCAA3C(v54, v55);
  *(_QWORD *)(v31 + 16) = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)v54, v56, v57, v58, v59, v60, v61);
  v65 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v62, v63, v64);
  System_Func_object__bool____ctor(
    v65,
    (Il2CppObject *)v31,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v66 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v65,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v70 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_BattleServantData__float__TypeInfo, v67, v68, v69);
  System_Func_object__float____ctor(
    v70,
    (Il2CppObject *)v31,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0LL);
  v71 = System_Linq_Enumerable__OrderBy_object__float_(
          v66,
          (System_Func_TSource__TKey__o *)v70,
          (const MethodInfo_2F3B46C *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v75 = TargetFilterLowestHpRate___c_TypeInfo;
  v76 = v71;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo, v72);
    v75 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v75->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75, v72);
      v75 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v75->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v72, v73, v74);
    System_Func_object__int____ctor(_9__0_4, v78, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0LL);
    v79 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v79->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v79->__9__0_4, (int64_t)_9__0_4, v80, v81, v82, v83, v84, v85);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v76,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18F50 & 1) == 0 )
  {
    sub_1BCA7E0(&TargetFilterLowestHpRate___c_TypeInfo, v1, v2);
    byte_4B18F50 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TargetFilterLowestHpRate___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B18F51 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x,
                                                                method);
    byte_4B18F51 = 1;
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
    sub_1BCAA3C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float __fastcall TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4B18F52 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                x,
                                                                method);
    byte_4B18F52 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._9_get_hp.method)(
                                                                    x,
                                                                    x->klass->vtable._10_set_hp.methodPtr,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0LL) )
  {
    sub_1BCAA3C(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}