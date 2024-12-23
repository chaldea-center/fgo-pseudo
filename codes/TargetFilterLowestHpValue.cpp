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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v28; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Func_object__bool__o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  TargetFilterLowestHpValue___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v49; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v57; // x0
  TargetFilterLowestHpValue___c_c *v58; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v61; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7

  if ( (byte_4B699AF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___, servantEnumerable);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1BE4ACC(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1BE4ACC(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1BE4ACC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, v9);
    sub_1BE4ACC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, v10);
    sub_1BE4ACC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, v11);
    sub_1BE4ACC(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, v12);
    sub_1BE4ACC(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__, v13);
    sub_1BE4ACC(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo, v14);
    sub_1BE4ACC(&TargetFilterLowestHpValue___c_TypeInfo, v15);
    byte_4B699AF = 1;
  }
  v16 = sub_1BE4D18(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
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
    _9__0_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v19, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0LL);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__0_0, (int64_t)_9__0_0, v21, v22, v23, v24, v25, v26);
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
    v28 = (Il2CppObject *)v17->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v28, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0LL);
    v29 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v29->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v29->__9__0_1, (int64_t)_9__0_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_2F93158 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v16 )
    sub_1BE4D28(v36, v37);
  *(_QWORD *)(v16 + 16) = v36;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)v36, v38, v39, v40, v41, v42, v43);
  v44 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v16,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0LL);
  v45 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v46 = TargetFilterLowestHpValue___c_TypeInfo;
  v47 = v45;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v46 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_3 = (System_Func_object__int__o *)v46->static_fields->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_3, v49, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0LL);
    v50 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v50->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v50->__9__0_3, (int64_t)_9__0_3, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__OrderBy_object__int_(
          v47,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v58 = TargetFilterLowestHpValue___c_TypeInfo;
  v59 = v57;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v58 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v58->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v58->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v61, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0LL);
    v62 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v62->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v62->__9__0_4, (int64_t)_9__0_4, v63, v64, v65, v66, v67, v68);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v59,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_2F91F68 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void __fastcall TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B699B0 & 1) == 0 )
  {
    sub_1BE4ACC(&TargetFilterLowestHpValue___c_TypeInfo, v1);
    byte_4B699B0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BE4D28(this, 0LL);
  return x->fields.uniqueId;
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return BattleServantData__getMaxHp(x, 0LL);
}


int32_t __fastcall TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
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
    sub_1BE4D28(this, 0LL);
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
  if ( (byte_4B699B1 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1BE4ACC(
                                                                 &Method_System_Collections_Generic_Dictionary_int__int__get_Item__,
                                                                 x);
    byte_4B699B1 = 1;
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
    sub_1BE4D28(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_3247B5C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}