void TargetFilterLowestHpValue___ctor(TargetFilterLowestHpValue_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *TargetFilterLowestHpValue__Apply(
        TargetFilterLowestHpValue_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  __int64 v4; // x20
  TargetFilterLowestHpValue___c_c *v5; // x0
  System_Func_object__int__o *_9__0_0; // x21
  Il2CppObject *v7; // x22
  struct TargetFilterLowestHpValue___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Func_object__int__o *_9__0_1; // x22
  Il2CppObject *v12; // x23
  struct TargetFilterLowestHpValue___c_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Func_object__bool__o *v20; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  TargetFilterLowestHpValue___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__int__o *_9__0_3; // x20
  Il2CppObject *v25; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  TargetFilterLowestHpValue___c_c *v30; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x19
  System_Func_object__int__o *_9__0_4; // x20
  Il2CppObject *v33; // x21
  struct TargetFilterLowestHpValue___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  if ( (byte_4C2A476 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C2D490(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_TargetFilterLowestHpValue___c__Apply_b__0_0__);
    sub_1C2D490(&Method_TargetFilterLowestHpValue___c__Apply_b__0_1__);
    sub_1C2D490(&Method_TargetFilterLowestHpValue___c__Apply_b__0_3__);
    sub_1C2D490(&Method_TargetFilterLowestHpValue___c__Apply_b__0_4__);
    sub_1C2D490(&Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__);
    sub_1C2D490(&TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
    sub_1C2D490(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_4C2A476 = 1;
  }
  v4 = sub_1C2D6DC(TargetFilterLowestHpValue___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
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
    _9__0_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v7, Method_TargetFilterLowestHpValue___c__Apply_b__0_0__, 0);
    static_fields = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_BattleServantData__int__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v9, v10);
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
    v12 = (Il2CppObject *)v5->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_1, v12, Method_TargetFilterLowestHpValue___c__Apply_b__0_1__, 0);
    v13 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v13->__9__0_1 = (struct System_Func_BattleServantData__int__o *)_9__0_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v13->__9__0_1, (int32_t)_9__0_1, v14, v15);
  }
  v16 = System_Linq_Enumerable__ToDictionary_object__int__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (System_Func_TSource__TElement__o *)_9__0_1,
          (const MethodInfo_310E8B0 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__int__int___);
  if ( !v4 )
    sub_1C2D6EC(v16, v17);
  *(_QWORD *)(v4 + 16) = v16;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v16, v18, v19);
  v20 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v4,
    Method_TargetFilterLowestHpValue___c__DisplayClass0_0__Apply_b__2__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v22 = TargetFilterLowestHpValue___c_TypeInfo;
  v23 = v21;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v22 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_3 = (System_Func_object__int__o *)v22->static_fields->__9__0_3;
  if ( !_9__0_3 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__0_3 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_3, v25, Method_TargetFilterLowestHpValue___c__Apply_b__0_3__, 0);
    v26 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v26->__9__0_3 = (struct System_Func_BattleServantData__int__o *)_9__0_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v26->__9__0_3, (int32_t)_9__0_3, v27, v28);
  }
  v29 = System_Linq_Enumerable__OrderBy_object__int_(
          v23,
          (System_Func_TSource__TKey__o *)_9__0_3,
          (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_BattleServantData__int___);
  v30 = TargetFilterLowestHpValue___c_TypeInfo;
  v31 = v29;
  if ( !TargetFilterLowestHpValue___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TargetFilterLowestHpValue___c_TypeInfo);
    v30 = TargetFilterLowestHpValue___c_TypeInfo;
  }
  _9__0_4 = (System_Func_object__int__o *)v30->static_fields->__9__0_4;
  if ( !_9__0_4 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = TargetFilterLowestHpValue___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__0_4 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_4, v33, Method_TargetFilterLowestHpValue___c__Apply_b__0_4__, 0);
    v34 = TargetFilterLowestHpValue___c_TypeInfo->static_fields;
    v34->__9__0_4 = (struct System_Func_BattleServantData__int__o *)_9__0_4;
    sub_1C2D434((CGThumbnailListItem_o *)&v34->__9__0_4, (int32_t)_9__0_4, v35, v36);
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                          v31,
                                                                          (System_Func_TSource__TKey__o *)_9__0_4,
                                                                          (const MethodInfo_310D150 *)Method_System_Linq_Enumerable_ThenBy_BattleServantData__int___);
}


void TargetFilterLowestHpValue___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A477 & 1) == 0 )
  {
    sub_1C2D490(&TargetFilterLowestHpValue___c_TypeInfo);
    byte_4C2A477 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(TargetFilterLowestHpValue___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TargetFilterLowestHpValue___c_TypeInfo->static_fields->__9 = (struct TargetFilterLowestHpValue___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)TargetFilterLowestHpValue___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void TargetFilterLowestHpValue___c___ctor(TargetFilterLowestHpValue___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_0(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.uniqueId;
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_1(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleServantData__getMaxHp(x, 0);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_3(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
           x,
           x->klass->vtable._9_get_hp.method);
}


int32_t TargetFilterLowestHpValue___c___Apply_b__0_4(
        TargetFilterLowestHpValue___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


void TargetFilterLowestHpValue___c__DisplayClass0_0___ctor(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TargetFilterLowestHpValue___c__DisplayClass0_0___Apply_b__2(
        TargetFilterLowestHpValue___c__DisplayClass0_0_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  TargetFilterLowestHpValue___c__DisplayClass0_0_o *v4; // x20
  System_Collections_Generic_Dictionary_int__int__o *uniqueIdToMaxHpDict; // x8

  v4 = this;
  if ( (byte_4C2A478 & 1) == 0 )
  {
    this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    byte_4C2A478 = 1;
  }
  if ( !x )
    goto LABEL_8;
  if ( BattleServantData__isDead(x, 0) )
    return 0;
  this = (TargetFilterLowestHpValue___c__DisplayClass0_0_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))x->klass->vtable._9_get_hp.methodPtr)(
                                                               x,
                                                               x->klass->vtable._9_get_hp.method);
  uniqueIdToMaxHpDict = v4->fields.uniqueIdToMaxHpDict;
  if ( !uniqueIdToMaxHpDict )
LABEL_8:
    sub_1C2D6EC(this, x);
  return (int)this < System_Collections_Generic_Dictionary_int__int___get_Item(
                       uniqueIdToMaxHpDict,
                       x->fields.uniqueId,
                       (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
}