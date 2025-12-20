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
  TargetFilterLowestHpRate___c_c *v5; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v7; // x22
  struct TargetFilterLowestHpRate___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v16; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  System_Func_T__TResult__o *v34; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  TargetFilterLowestHpRate___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v39; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7

  if ( (byte_4D2FD13 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
    sub_1C94098(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C94098(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__float__TypeInfo);
    sub_1C94098(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__);
    sub_1C94098(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__);
    sub_1C94098(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__);
    sub_1C94098(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__);
    sub_1C94098(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__);
    sub_1C94098(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
    sub_1C94098(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_4D2FD13 = 1;
  }
  v4 = sub_1C942E4(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  v5 = TargetFilterLowestHpRate___c_TypeInfo;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v5->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0);
    static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v9, v10, v11, v12, v13, v14);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v5->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v16, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0);
    v17 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v17->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v17->__9__0_1, (int32_t)_9__0_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_31DD170 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_1C942F0(v24, v25);
  *(_QWORD *)(v4 + 16) = v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0);
  v33 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v34 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_BattleServantData__float__TypeInfo);
  System_Func_object__float____ctor(
    v34,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0);
  v35 = System_Linq_Enumerable__OrderBy_object__float_(
          v33,
          (System_Func_TSource__TKey__o *)v34,
          (const MethodInfo_31CC248 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v36 = TargetFilterLowestHpRate___c_TypeInfo;
  v37 = v35;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v36 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v36->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v39, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0);
    v40 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v40->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v40->__9__0_4, (int32_t)_9__0_4, v41, v42, v43, v44, v45, v46);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v37,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_31DBA10 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FD14 & 1) == 0 )
  {
    sub_1C94098(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_4D2FD14 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
  return x->fields.uniqueId;
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleServantData__getMaxHp(x, 0);
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
  if ( (byte_4D2FD15 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4D2FD15 = 1;
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
    sub_1C942F0(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4D2FD16 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4D2FD16 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                                    x,
                                                                    x->klass->vtable._9_get_hp.method,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0) )
  {
    sub_1C942F0(this, x);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}