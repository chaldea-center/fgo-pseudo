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
  const MethodInfo *v10; // x3
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v12; // x23
  struct TargetFilterLowestHpRate___c_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Func_object__bool__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  System_Func_T__TResult__o *v21; // x21
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x0
  TargetFilterLowestHpRate___c_c *v23; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v26; // x21
  struct TargetFilterLowestHpRate___c_StaticFields *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4C3AB96 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__float__TypeInfo);
    sub_1C32C20(&Method_TargetFilterLowestHpRate___c__Apply_b__0_0__);
    sub_1C32C20(&Method_TargetFilterLowestHpRate___c__Apply_b__0_1__);
    sub_1C32C20(&Method_TargetFilterLowestHpRate___c__Apply_b__0_4__);
    sub_1C32C20(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__);
    sub_1C32C20(&Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__);
    sub_1C32C20(&TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_4C3AB96 = 1;
  }
  v4 = sub_1C32E6C(TargetFilterLowestHpRate___c__DisplayClass0_0_TypeInfo);
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
    _9__0_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_TargetFilterLowestHpRate___c__Apply_b__0_0__, 0);
    static_fields = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v9, v10);
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
    v12 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v12, Method_TargetFilterLowestHpRate___c__Apply_b__0_1__, 0);
    v13 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v13->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v13->__9__0_1, (int32_t)_9__0_1, v14, v15);
  }
  v16 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_311D350 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_1C32E7C(v16);
  *(_QWORD *)(v4 + 16) = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v16, v17, v18);
  v19 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__2__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v21 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_BattleServantData__float__TypeInfo);
  System_Func_object__float____ctor(
    v21,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpRate___c__DisplayClass0_0__Apply_b__3__,
    0);
  v22 = System_Linq_Enumerable__OrderBy_object__float_(
          v20,
          (System_Func_TSource__TKey__o *)v21,
          (const MethodInfo_310CC88 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__float___);
  v23 = TargetFilterLowestHpRate___c_TypeInfo;
  v24 = v22;
  if ( !TargetFilterLowestHpRate___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpRate___c_TypeInfo);
    v23 = TargetFilterLowestHpRate___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v23->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = TargetFilterLowestHpRate___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v26, Method_TargetFilterLowestHpRate___c__Apply_b__0_4__, 0);
    v27 = TargetFilterLowestHpRate___c_TypeInfo->static_fields;
    v27->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1C32BC4((CGThumbnailListItem_o *)&v27->__9__0_4, (int32_t)_9__0_4, v28, v29);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v24,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_311BBF0 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void TargetFilterLowestHpRate___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3AB97 & 1) == 0 )
  {
    sub_1C32C20(&TargetFilterLowestHpRate___c_TypeInfo);
    byte_4C3AB97 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TargetFilterLowestHpRate___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetFilterLowestHpRate___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpRate___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)TargetFilterLowestHpRate___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
  return x->fields.uniqueId;
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_1(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleServantData__getMaxHp(x, 0);
}


int32_t TargetFilterLowestHpRate___c___Apply_b__0_4(
        TargetFilterLowestHpRate___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
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
  if ( (byte_4C3AB98 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C3AB98 = 1;
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
    sub_1C32E7C(this);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}


float TargetFilterLowestHpRate___c__DisplayClass0_0___Apply_b__3(
        TargetFilterLowestHpRate___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpRate___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4C3AB99 & 1) == 0 )
  {
    this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C3AB99 = 1;
  }
  if ( !x
    || (this = (TargetFilterLowestHpRate___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                                    x,
                                                                    x->klass->vtable._9_get_hp.method,
                                                                    method),
        (uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict) == 0) )
  {
    sub_1C32E7C(this);
  }
  return (float)(int)this
       / (float)System_Collections_Generic_Dictionary_int__int___get_Item(
                  uniqueIdToMaxHpDict,
                  x->fields.uniqueId,
                  (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}