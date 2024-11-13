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
  __int64 v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  TargetFilterLowestHpValue___c_c *v33; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v35; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v44; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Func_object__bool__o *v63; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  TargetFilterLowestHpValue___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v71; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  TargetFilterLowestHpValue___c_c *v83; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v84; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v86; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7

  if ( (byte_4B18F4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleServantData__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v15, v16);
    sub_1BCA7E0(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v17, v18);
    sub_1BCA7E0(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v19, v20);
    sub_1BCA7E0(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v21, v22);
    sub_1BCA7E0(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v23, v24);
    sub_1BCA7E0(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v25, v26);
    sub_1BCA7E0(&TargetFilterLowestHpValue___c_TypeInfo, v27, v28);
    byte_4B18F4C = 1;
  }
  v29 = sub_1BCAA2C(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, servantEnumerable, method, v3);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  v33 = TargetFilterLowestHpValue___c_TypeInfo;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v30);
    v33 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v33->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v30, v31, v32);
    System_Func_object__int____ctor(_9__0_0, v35, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v37, v38, v39, v40, v41, v42);
    v33 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33, v30);
    v33 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v33->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v33->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v30, v31, v32);
    System_Func_object__int____ctor(_9__0_1, v44, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0LL);
    v45 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v45->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v45->__9__0_1, (int64_t)_9__0_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2F4C08C *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v29 )
    sub_1BCAA3C(v52, v53);
  *(_QWORD *)(v29 + 16) = v52;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)v52, v54, v55, v56, v57, v58, v59);
  v63 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v60, v61, v62);
  System_Func_object__bool____ctor(
    v63,
    (Il2CppObject *)v29,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v64 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v63,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v68 = TargetFilterLowestHpValue___c_TypeInfo;
  v69 = v64;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v65);
    v68 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_3 = (System_Func_object__int__o *)v68->static_fields->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68, v65);
      v68 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v65, v66, v67);
    System_Func_object__int____ctor(_9__0_3, v71, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0LL);
    v72 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v72->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v72->__9__0_3, (int64_t)_9__0_3, v73, v74, v75, v76, v77, v78);
  }
  v79 = System_Linq_Enumerable__OrderBy_object__int_(
          v69,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v83 = TargetFilterLowestHpValue___c_TypeInfo;
  v84 = v79;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo, v80);
    v83 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v83->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v83->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v83, v80);
      v83 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v86 = (Il2CppObject *)v83->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleServantData__int__TypeInfo, v80, v81, v82);
    System_Func_object__int____ctor(_9__0_4, v86, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0LL);
    v87 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v87->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1BCA784((PartyOrganizationUtility_o *)&v87->__9__0_4, (int64_t)_9__0_4, v88, v89, v90, v91, v92, v93);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v84,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B18F4D & 1) == 0 )
  {
    sub_1BCA7E0(&TargetFilterLowestHpValue___c_TypeInfo, v1, v2);
    byte_4B18F4D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TargetFilterLowestHpValue___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B18F4E & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1BCA7E0(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x,
                                                                 method);
    byte_4B18F4E = 1;
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
    sub_1BCAA3C(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}