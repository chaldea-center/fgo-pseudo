void ActEnemyEffectFlipProc___ctor(
        ActEnemyEffectFlipProc_o *this,
        EffectFlipData_array *effectFlipDataArray,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  long double inited; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0

  if ( (byte_4CB8CA2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_EffectFlipData___);
    byte_4CB8CA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !effectFlipDataArray )
  {
    v10 = Method_System_Array_Empty_EffectFlipData___;
    v11 = *((_QWORD *)Method_System_Array_Empty_EffectFlipData___ + 7);
    if ( !v11 )
    {
      sub_1C41AF8(Method_System_Array_Empty_EffectFlipData___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v5 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C41A9C(inited);
    effectFlipDataArray = **(EffectFlipData_array ***)(v5 + 184);
  }
  if ( !this )
    sub_1C6BC60(v5, v6);
  this->fields.flipDataArray = effectFlipDataArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)effectFlipDataArray, v7, v8);
}


void ActEnemyEffectFlipProc__FlipIfApplyCond(
        ActEnemyEffectFlipProc_o *this,
        int32_t effectId,
        UnityEngine_GameObject_o *actorObj,
        UnityEngine_Transform_o *trEffect,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2
  EffectFlipData_o *FlipData; // x0
  const MethodInfo *v10; // x2

  if ( ActEnemyEffectFlipProc__IsApplyCond(this, actorObj, (const MethodInfo *)actorObj) )
  {
    FlipData = ActEnemyEffectFlipProc__GetFlipData(this, effectId, v8);
    if ( FlipData )
      EffectFlipData__Flip(FlipData, trEffect, v10);
  }
}


EffectFlipData_o *ActEnemyEffectFlipProc__GetFlipData(
        ActEnemyEffectFlipProc_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *flipDataArray; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4CB8CA3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
    sub_1C6BA08(&System_Func_EffectFlipData__bool__TypeInfo);
    sub_1C6BA08(&Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__);
    sub_1C6BA08(&ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo);
    byte_4CB8CA3 = 1;
  }
  v5 = sub_1C6BC54(ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = effectId;
  flipDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.flipDataArray;
  v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EffectFlipData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__,
    0);
  return (EffectFlipData_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                               flipDataArray,
                               (System_Func_TSource__bool__o *)v9,
                               (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
}


bool ActEnemyEffectFlipProc__IsApplyCond(
        ActEnemyEffectFlipProc_o *this,
        UnityEngine_GameObject_o *actorObj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB8CA4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8CA4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObj, 0, 0);
  Component_object = 0;
  if ( v4 )
  {
    if ( !actorObj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         actorObj,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( Component_object )
      return LOBYTE(Component_object[35].klass) != 0;
LABEL_14:
    sub_1C6BC60(v4, v5);
  }
  return 0;
}


void ActEnemyEffectFlipProc__OverwriteNodeName(
        ActEnemyEffectFlipProc_o *this,
        int32_t effectId,
        System_String_o **baseNodeName,
        const MethodInfo *method)
{
  EffectFlipData_o *FlipData; // x0
  const MethodInfo *v6; // x2

  FlipData = ActEnemyEffectFlipProc__GetFlipData(this, effectId, (const MethodInfo *)baseNodeName);
  if ( FlipData )
    EffectFlipData__OverwriteNodeName(FlipData, baseNodeName, v6);
}


void ActEnemyEffectFlipProc___c__DisplayClass2_0___ctor(
        ActEnemyEffectFlipProc___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ActEnemyEffectFlipProc___c__DisplayClass2_0___GetFlipData_b__0(
        ActEnemyEffectFlipProc___c__DisplayClass2_0_o *this,
        EffectFlipData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.effectId == -1 || x->fields.effectId == this->fields.effectId;
}