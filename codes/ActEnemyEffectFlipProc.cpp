void ActEnemyEffectFlipProc___ctor(
        ActEnemyEffectFlipProc_o *this,
        EffectFlipData_array *effectFlipDataArray,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  long double v13; // q0
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0

  if ( (byte_5973358 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_EffectFlipData___);
    byte_5973358 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !effectFlipDataArray )
  {
    v14 = Method_System_Array_Empty_EffectFlipData___;
    v15 = *((_QWORD *)Method_System_Array_Empty_EffectFlipData___ + 7);
    if ( !v15 )
    {
      sub_224B964(Method_System_Array_Empty_EffectFlipData___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_224B908(v13);
    if ( !*(_DWORD *)(v16 + 228) )
      *(__n128 *)&v13 = j_il2cpp_runtime_class_init_0(v16, v6);
    v5 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_224B908(v13);
    effectFlipDataArray = **(EffectFlipData_array ***)(v5 + 184);
  }
  if ( !this )
    sub_2213CDC(v5, v6);
  this->fields.flipDataArray = effectFlipDataArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)effectFlipDataArray,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  System_Collections_Generic_IEnumerable_TSource__o *flipDataArray; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_5973359 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
    sub_2213A60(&System_Func_EffectFlipData__bool__TypeInfo);
    sub_2213A60(&Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__);
    sub_2213A60(&ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo);
    byte_5973359 = 1;
  }
  v5 = sub_2213CCC(ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  flipDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.flipDataArray;
  *(_DWORD *)(v5 + 16) = effectId;
  v9 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EffectFlipData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__,
    0);
  return (EffectFlipData_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                               flipDataArray,
                               (System_Func_TSource__bool__o *)v9,
                               (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
}


bool ActEnemyEffectFlipProc__IsApplyCond(
        ActEnemyEffectFlipProc_o *this,
        UnityEngine_GameObject_o *actorObj,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_597335A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597335A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObj, 0, 0);
  Component_object = 0;
  if ( v4 )
  {
    if ( !actorObj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         actorObj,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( Component_object )
      return LOBYTE(Component_object[36].klass) != 0;
LABEL_14:
    sub_2213CDC(v4, v5);
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
  int32_t effectId; // w8

  if ( !x )
    sub_2213CDC(this, 0);
  effectId = x->fields.effectId;
  return effectId == -1 || effectId == this->fields.effectId;
}