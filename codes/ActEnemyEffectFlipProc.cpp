void __fastcall ActEnemyEffectFlipProc___ctor(
        ActEnemyEffectFlipProc_o *this,
        EffectFlipData_array *effectFlipDataArray,
        const MethodInfo *method)
{
  struct EffectFlipData_array *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0

  v3 = effectFlipDataArray;
  if ( (byte_4A00F93 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Empty_EffectFlipData___, effectFlipDataArray);
    byte_4A00F93 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v9 = Method_System_Array_Empty_EffectFlipData___;
    v10 = *((_QWORD *)Method_System_Array_Empty_EffectFlipData___ + 7);
    if ( !v10 )
    {
      sub_1BB6938(Method_System_Array_Empty_EffectFlipData___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BB68DC(v11);
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11);
    v5 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1BB68DC(v5);
    v3 = **(struct EffectFlipData_array ***)(v5 + 184);
  }
  if ( !this )
    sub_1B64C5C(v5, v6);
  this->fields.flipDataArray = v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v7, v8);
}


void __fastcall ActEnemyEffectFlipProc__FlipIfApplyCond(
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


// local variable allocation has failed, the output may be wrong!
EffectFlipData_o *__fastcall ActEnemyEffectFlipProc__GetFlipData(
        ActEnemyEffectFlipProc_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *flipDataArray; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4A00F94 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___, *(_QWORD *)&effectId);
    sub_1B64A00(&System_Func_EffectFlipData__bool__TypeInfo, v5);
    sub_1B64A00(&Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__, v6);
    sub_1B64A00(&ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo, v7);
    byte_4A00F94 = 1;
  }
  v8 = sub_1B64C4C(ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64C5C(v9, v10);
  *(_DWORD *)(v8 + 16) = effectId;
  flipDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.flipDataArray;
  v12 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_EffectFlipData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__,
    0LL);
  return (EffectFlipData_o *)System_Linq_Enumerable__FirstOrDefault_object__48628184(
                               flipDataArray,
                               (System_Func_TSource__bool__o *)v12,
                               (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
}


bool __fastcall ActEnemyEffectFlipProc__IsApplyCond(
        ActEnemyEffectFlipProc_o *this,
        UnityEngine_GameObject_o *actorObj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4A00F95 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, actorObj);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    byte_4A00F95 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObj, 0LL, 0LL);
  Component_object = 0LL;
  if ( v5 )
  {
    if ( !actorObj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         actorObj,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v5 )
  {
    if ( Component_object )
      return LOBYTE(Component_object[30].klass) != 0;
LABEL_14:
    sub_1B64C5C(v5, v6);
  }
  return 0;
}


void __fastcall ActEnemyEffectFlipProc__OverwriteNodeName(
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


void __fastcall ActEnemyEffectFlipProc___c__DisplayClass2_0___ctor(
        ActEnemyEffectFlipProc___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ActEnemyEffectFlipProc___c__DisplayClass2_0___GetFlipData_b__0(
        ActEnemyEffectFlipProc___c__DisplayClass2_0_o *this,
        EffectFlipData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
  return x->fields.effectId == -1 || x->fields.effectId == this->fields.effectId;
}