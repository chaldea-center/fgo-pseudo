void __fastcall ActEnemyEffectFlipProc___ctor(
        ActEnemyEffectFlipProc_o *this,
        EffectFlipData_array *effectFlipDataArray,
        const MethodInfo *method)
{
  struct EffectFlipData_array *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  long double inited; // q0
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0

  v3 = effectFlipDataArray;
  if ( (byte_4B186F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_EffectFlipData___, effectFlipDataArray, method);
    byte_4B186F9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v14 = Method_System_Array_Empty_EffectFlipData___;
    v15 = *((_QWORD *)Method_System_Array_Empty_EffectFlipData___ + 7);
    if ( !v15 )
    {
      sub_1C1C718(Method_System_Array_Empty_EffectFlipData___, v6);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16, v6);
    v5 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C1C6BC(inited);
    v3 = **(struct EffectFlipData_array ***)(v5 + 184);
  }
  if ( !this )
    sub_1BCAA3C(v5, v6);
  this->fields.flipDataArray = v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *flipDataArray; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B186FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___, *(_QWORD *)&effectId, method);
    sub_1BCA7E0(&System_Func_EffectFlipData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__, v8, v9);
    sub_1BCA7E0(&ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo, v10, v11);
    byte_4B186FA = 1;
  }
  v12 = sub_1BCAA2C(ActEnemyEffectFlipProc___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&effectId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = effectId;
  flipDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.flipDataArray;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EffectFlipData__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ActEnemyEffectFlipProc___c__DisplayClass2_0__GetFlipData_b__0__,
    0LL);
  return (EffectFlipData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                               flipDataArray,
                               (System_Func_TSource__bool__o *)v18,
                               (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EffectFlipData___);
}


bool __fastcall ActEnemyEffectFlipProc__IsApplyCond(
        ActEnemyEffectFlipProc_o *this,
        UnityEngine_GameObject_o *actorObj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B186FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, actorObj, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B186FB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObj, 0LL, 0LL);
  Component_object = 0LL;
  if ( v6 )
  {
    if ( !actorObj )
      goto LABEL_14;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         actorObj,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v6 )
  {
    if ( Component_object )
      return LOBYTE(Component_object[30].klass) != 0;
LABEL_14:
    sub_1BCAA3C(v6, v7);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.effectId == -1 || x->fields.effectId == this->fields.effectId;
}