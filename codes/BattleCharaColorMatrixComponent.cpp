void BattleCharaColorMatrixComponent___cctor(const MethodInfo *method)
{
  UnityEngine_Vector4_o v1; // x1
  UnityEngine_Vector4_o v2; // x3
  const MethodInfo *v3; // x5
  __int128 v4; // q0
  __int128 v5; // q1
  __int128 v6; // q3
  struct BattleCharaColorMatrixComponent_StaticFields *static_fields; // x8
  UnityEngine_Matrix4x4_o v8; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v10; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_5973F0E & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    byte_5973F0E = 1;
  }
  v9.fields.w = 0.0;
  v10.fields.w = 0.0;
  *(_QWORD *)&v1.fields.x = 0;
  memset(&v8, 0, sizeof(v8));
  v10.fields.x = 0.587;
  v9.fields.x = 0.299;
  v10.fields.y = 0.587;
  v10.fields.z = 0.587;
  v9.fields.y = 0.299;
  v9.fields.z = 0.299;
  UnityEngine_Matrix4x4___ctor(&v8, v9, v10, v1, v2, v3);
  v5 = *(_OWORD *)&v8.fields.m02;
  v4 = *(_OWORD *)&v8.fields.m03;
  v6 = *(_OWORD *)&v8.fields.m01;
  static_fields = BattleCharaColorMatrixComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m00 = *(_OWORD *)&v8.fields.m00;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m01 = v6;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m02 = v5;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m03 = v4;
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaColorMatrixComponent___ctor(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_HashSet_object__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_HashSet_object__o *v45; // x20
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_HashSet_object__o *v52; // x20
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_HashSet_object__o *v59; // x20
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Collections_Generic_List_object__o *v66; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  BattleCharaColorMatrixComponent_c *v74; // x0
  __int128 *static_fields; // x8
  __int128 v76; // q0
  __int128 v77; // q2
  __int128 v78; // q3
  BattleCharaColorMatrixComponent_c *v79; // x8
  struct BattleCharaColorMatrixComponent_StaticFields *v80; // x8
  BattleCharaColorMatrixComponent_c *v81; // x8
  struct BattleCharaColorMatrixComponent_StaticFields *v82; // x8
  BattleCharaColorMatrixComponent_c *v83; // x8
  struct BattleCharaColorMatrixComponent_StaticFields *v84; // x8
  UnityEngine_Matrix4x4_o v85; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Vector4_o Row; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Vector4_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_5973F0D & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_XWeaponTrail___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Renderer___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_XWeaponTrail__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_FGOEffectSheetAnimation__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_HashSet_Renderer__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_XWeaponTrail__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__TypeInfo);
    byte_5973F0D = 1;
  }
  memset(&v85, 0, sizeof(v85));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState___ctor__);
  this->fields._rendererMaterialStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rendererMaterialStates,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState___ctor__);
  this->fields._particleSystemStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._particleSystemStates,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState___ctor__);
  this->fields._rendererStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._rendererStates,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState___ctor__);
  this->fields._weaponTrailStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__o *)v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._weaponTrailStates,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor__);
  this->fields._effectSheetAnimationStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._effectSheetAnimationStates,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_Renderer__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v38,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_Renderer___ctor__);
  this->fields._trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._trackedRenderers,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v45,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
  this->fields._trackedParticleSystems = (struct System_Collections_Generic_HashSet_ParticleSystem__o *)v45;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._trackedParticleSystems,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_XWeaponTrail__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v52,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_XWeaponTrail___ctor__);
  this->fields._trackedWeaponTrails = (struct System_Collections_Generic_HashSet_XWeaponTrail__o *)v52;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._trackedWeaponTrails,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_FGOEffectSheetAnimation__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v59,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation___ctor__);
  this->fields._trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)v59;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._trackedEffectSheetAnimations,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields._tempWeaponTrails = (struct System_Collections_Generic_List_XWeaponTrail__o *)v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._tempWeaponTrails,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v74 = BattleCharaColorMatrixComponent_TypeInfo;
  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v73);
    v74 = BattleCharaColorMatrixComponent_TypeInfo;
  }
  static_fields = (__int128 *)v74->static_fields;
  v76 = static_fields[3];
  v78 = *static_fields;
  v77 = static_fields[1];
  *(_OWORD *)&v85.fields.m02 = static_fields[2];
  *(_OWORD *)&v85.fields.m03 = v76;
  *(_OWORD *)&v85.fields.m00 = v78;
  *(_OWORD *)&v85.fields.m01 = v77;
  Row = UnityEngine_Matrix4x4__GetRow(&v85, 0, 0);
  v79 = BattleCharaColorMatrixComponent_TypeInfo;
  this->fields._colorMatRow0 = Row;
  v80 = v79->static_fields;
  Row = *(UnityEngine_Vector4_o *)&v80->SaturationColorMatrix.fields.m03;
  *(UnityEngine_Vector4_o *)&Row.fields.z = *(UnityEngine_Vector4_o *)&v80->SaturationColorMatrix.fields.m00;
  *(UnityEngine_Vector4_o *)&Row.fields.w = *(UnityEngine_Vector4_o *)&v80->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v85.fields.m02 = *(_OWORD *)&v80->SaturationColorMatrix.fields.m02;
  *(UnityEngine_Vector4_o *)&v85.fields.m03 = Row;
  *(UnityEngine_Vector4_o *)&v85.fields.m00 = *(UnityEngine_Vector4_o *)&Row.fields.z;
  *(UnityEngine_Vector4_o *)&v85.fields.m01 = *(UnityEngine_Vector4_o *)&Row.fields.w;
  v87 = UnityEngine_Matrix4x4__GetRow(&v85, 1, 0);
  v81 = BattleCharaColorMatrixComponent_TypeInfo;
  this->fields._colorMatRow1 = v87;
  v82 = v81->static_fields;
  v87 = *(UnityEngine_Vector4_o *)&v82->SaturationColorMatrix.fields.m03;
  *(UnityEngine_Vector4_o *)&v87.fields.z = *(UnityEngine_Vector4_o *)&v82->SaturationColorMatrix.fields.m00;
  *(UnityEngine_Vector4_o *)&v87.fields.w = *(UnityEngine_Vector4_o *)&v82->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v85.fields.m02 = *(_OWORD *)&v82->SaturationColorMatrix.fields.m02;
  *(UnityEngine_Vector4_o *)&v85.fields.m03 = v87;
  *(UnityEngine_Vector4_o *)&v85.fields.m00 = *(UnityEngine_Vector4_o *)&v87.fields.z;
  *(UnityEngine_Vector4_o *)&v85.fields.m01 = *(UnityEngine_Vector4_o *)&v87.fields.w;
  v88 = UnityEngine_Matrix4x4__GetRow(&v85, 2, 0);
  v83 = BattleCharaColorMatrixComponent_TypeInfo;
  this->fields._colorMatRow2 = v88;
  v84 = v83->static_fields;
  v88 = *(UnityEngine_Vector4_o *)&v84->SaturationColorMatrix.fields.m03;
  *(UnityEngine_Vector4_o *)&v88.fields.z = *(UnityEngine_Vector4_o *)&v84->SaturationColorMatrix.fields.m00;
  *(UnityEngine_Vector4_o *)&v88.fields.w = *(UnityEngine_Vector4_o *)&v84->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v85.fields.m02 = *(_OWORD *)&v84->SaturationColorMatrix.fields.m02;
  *(UnityEngine_Vector4_o *)&v85.fields.m03 = v88;
  *(UnityEngine_Vector4_o *)&v85.fields.m00 = *(UnityEngine_Vector4_o *)&v88.fields.z;
  *(UnityEngine_Vector4_o *)&v85.fields.m01 = *(UnityEngine_Vector4_o *)&v88.fields.w;
  this->fields._colorMatRow3 = UnityEngine_Matrix4x4__GetRow(&v85, 3, 0);
  this->fields._matrixBlend = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaColorMatrixComponent__Apply(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_array *renderers,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *colorMatrixShader; // x22
  System_Collections_Generic_HashSet_object__o *trackedRenderers; // x0
  const MethodInfo *v9; // x1
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *rendererMaterialStates; // x8
  int32_t size; // w2
  int v12; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__o *particleSystemStates; // x8
  int32_t v14; // w2
  int v15; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__o *rendererStates; // x8
  int32_t v17; // w2
  int v18; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__o *weaponTrailStates; // x8
  int32_t v20; // w2
  int v21; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__o *effectSheetAnimationStates; // x8
  int32_t v23; // w2
  int v24; // w9
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  __int64 v27; // x0
  const MethodInfo *v28; // x3
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v30; // x22

  if ( (byte_5973EE7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Renderer__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EE7 = 1;
  }
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderers);
  trackedRenderers = (System_Collections_Generic_HashSet_object__o *)UnityEngine_Object__op_Equality(
                                                                       colorMatrixShader,
                                                                       0,
                                                                       0);
  if ( ((unsigned __int8)trackedRenderers & 1) == 0 && renderers )
  {
    if ( this->fields._isApplied )
      BattleCharaColorMatrixComponent__Restore(this, v9);
    rendererMaterialStates = this->fields._rendererMaterialStates;
    if ( !rendererMaterialStates )
      goto LABEL_35;
    size = rendererMaterialStates->fields._size;
    v12 = rendererMaterialStates->fields._version + 1;
    rendererMaterialStates->fields._size = 0;
    rendererMaterialStates->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)rendererMaterialStates->fields._items, 0, size, 0);
    particleSystemStates = this->fields._particleSystemStates;
    if ( !particleSystemStates )
      goto LABEL_35;
    v14 = particleSystemStates->fields._size;
    v15 = particleSystemStates->fields._version + 1;
    particleSystemStates->fields._size = 0;
    particleSystemStates->fields._version = v15;
    if ( v14 >= 1 )
      System_Array__Clear((System_Array_o *)particleSystemStates->fields._items, 0, v14, 0);
    rendererStates = this->fields._rendererStates;
    if ( !rendererStates )
      goto LABEL_35;
    v17 = rendererStates->fields._size;
    v18 = rendererStates->fields._version + 1;
    rendererStates->fields._size = 0;
    rendererStates->fields._version = v18;
    if ( v17 >= 1 )
      System_Array__Clear((System_Array_o *)rendererStates->fields._items, 0, v17, 0);
    weaponTrailStates = this->fields._weaponTrailStates;
    if ( !weaponTrailStates )
      goto LABEL_35;
    v20 = weaponTrailStates->fields._size;
    v21 = weaponTrailStates->fields._version + 1;
    weaponTrailStates->fields._size = 0;
    weaponTrailStates->fields._version = v21;
    if ( v20 >= 1 )
      System_Array__Clear((System_Array_o *)weaponTrailStates->fields._items, 0, v20, 0);
    effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
    if ( !effectSheetAnimationStates )
      goto LABEL_35;
    v23 = effectSheetAnimationStates->fields._size;
    v24 = effectSheetAnimationStates->fields._version + 1;
    effectSheetAnimationStates->fields._size = 0;
    effectSheetAnimationStates->fields._version = v24;
    if ( v23 >= 1 )
      System_Array__Clear((System_Array_o *)effectSheetAnimationStates->fields._items, 0, v23, 0);
    trackedRenderers = (System_Collections_Generic_HashSet_object__o *)this->fields._trackedRenderers;
    if ( !trackedRenderers
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_Renderer__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_object__o *)this->fields._trackedParticleSystems) == 0)
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_object__o *)this->fields._trackedWeaponTrails) == 0)
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_object__o *)this->fields._trackedEffectSheetAnimations) == 0) )
    {
LABEL_35:
      sub_2213CDC(trackedRenderers, v9);
    }
    System_Collections_Generic_HashSet_object___Clear(
      trackedRenderers,
      (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    BattleCharaColorMatrixComponent__PauseParticleSystems(this, renderers, data, v25);
    BattleCharaColorMatrixComponent__DisableWeaponTrails(this, v26);
    max_length = renderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v30 = 0;
      do
      {
        if ( v30 >= (unsigned int)max_length )
          sub_2213CE4(v27);
        BattleCharaColorMatrixComponent__ApplyRenderer(this, renderers->m_Items[v30], data, v28);
        LODWORD(max_length) = renderers->max_length;
        ++v30;
      }
      while ( (__int64)v30 < (int)max_length );
    }
    this->fields._isApplied = 1;
  }
}


void BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        UnityEngine_Material_array *materials,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  UnityEngine_Object_o *v11; // x24
  UnityEngine_MaterialPropertyBlock_o *v12; // x23
  _BOOL8 HasProperty_83277340; // x0
  __int64 v14; // x1

  if ( (byte_5973EF4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16819/*"_ColorMatRow1"*/);
    sub_2213A60(&StringLiteral_16821/*"_ColorMatRow3"*/);
    sub_2213A60(&StringLiteral_16818/*"_ColorMatRow0"*/);
    sub_2213A60(&StringLiteral_16820/*"_ColorMatRow2"*/);
    sub_2213A60(&StringLiteral_16920/*"_MatrixBlend"*/);
    byte_5973EF4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderer);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0);
  if ( !v7 )
  {
    if ( materials )
    {
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v10 = 0;
        do
        {
          if ( v10 >= (unsigned int)max_length )
            sub_2213CE4(v7);
          v11 = (UnityEngine_Object_o *)materials->m_Items[v10];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          v7 = UnityEngine_Object__op_Equality(v11, 0, 0);
          if ( !v7 )
          {
            v12 = (UnityEngine_MaterialPropertyBlock_o *)sub_2213CCC(UnityEngine_MaterialPropertyBlock_TypeInfo);
            UnityEngine_MaterialPropertyBlock___ctor(v12, 0);
            if ( !renderer || (UnityEngine_Renderer__GetPropertyBlock(renderer, v12, v10, 0), !v11) )
LABEL_33:
              sub_2213CDC(HasProperty_83277340, v14);
            HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(
                                     (UnityEngine_Material_o *)v11,
                                     (System_String_o *)StringLiteral_16920/*"_MatrixBlend"*/,
                                     0);
            if ( HasProperty_83277340 )
            {
              if ( !v12 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetFloat(
                v12,
                (System_String_o *)StringLiteral_16920/*"_MatrixBlend"*/,
                this->fields._matrixBlend,
                0);
            }
            HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(
                                     (UnityEngine_Material_o *)v11,
                                     (System_String_o *)StringLiteral_16818/*"_ColorMatRow0"*/,
                                     0);
            if ( HasProperty_83277340 )
            {
              if ( !v12 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v12,
                (System_String_o *)StringLiteral_16818/*"_ColorMatRow0"*/,
                this->fields._colorMatRow0,
                0);
            }
            HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(
                                     (UnityEngine_Material_o *)v11,
                                     (System_String_o *)StringLiteral_16819/*"_ColorMatRow1"*/,
                                     0);
            if ( HasProperty_83277340 )
            {
              if ( !v12 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v12,
                (System_String_o *)StringLiteral_16819/*"_ColorMatRow1"*/,
                this->fields._colorMatRow1,
                0);
            }
            HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(
                                     (UnityEngine_Material_o *)v11,
                                     (System_String_o *)StringLiteral_16820/*"_ColorMatRow2"*/,
                                     0);
            if ( HasProperty_83277340 )
            {
              if ( !v12 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v12,
                (System_String_o *)StringLiteral_16820/*"_ColorMatRow2"*/,
                this->fields._colorMatRow2,
                0);
            }
            HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(
                                     (UnityEngine_Material_o *)v11,
                                     (System_String_o *)StringLiteral_16821/*"_ColorMatRow3"*/,
                                     0);
            if ( HasProperty_83277340 )
            {
              if ( !v12 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v12,
                (System_String_o *)StringLiteral_16821/*"_ColorMatRow3"*/,
                this->fields._colorMatRow3,
                0);
            }
            UnityEngine_Renderer__SetPropertyBlock_83267612(renderer, v12, v10, 0);
          }
          LODWORD(max_length) = materials->max_length;
          ++v10;
        }
        while ( (__int64)v10 < (int)max_length );
      }
    }
  }
}


void BattleCharaColorMatrixComponent__ApplyColorMatrixPropertiesToAppliedMaterials(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rendererMaterialStates; // x0
  int32_t v4; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  UnityEngine_Object_o *items; // x22
  UnityEngine_Renderer_o *v7; // x21
  UnityEngine_Material_array *sharedMaterials; // x0
  const MethodInfo *v9; // x3

  if ( (byte_5973EF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EF3 = 1;
  }
  if ( this->fields._isApplied )
  {
    rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
    if ( !rendererMaterialStates )
LABEL_14:
      sub_2213CDC(rendererMaterialStates, method);
    v4 = 0;
    while ( v4 < rendererMaterialStates->fields._size )
    {
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              rendererMaterialStates,
                                                                              v4,
                                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
      if ( !rendererMaterialStates )
        goto LABEL_14;
      v5 = rendererMaterialStates;
      items = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(items, 0, 0);
      if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
      {
        v7 = (UnityEngine_Renderer_o *)v5->fields._items;
        if ( !v7 )
          goto LABEL_14;
        sharedMaterials = UnityEngine_Renderer__get_sharedMaterials(v7, 0);
        BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(this, v7, sharedMaterials, v9);
      }
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
      ++v4;
      if ( !rendererMaterialStates )
        goto LABEL_14;
    }
  }
}


void BattleCharaColorMatrixComponent__ApplyColorMatrixTimeSettings(
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1
  float timeSinceLevelLoad; // s0
  UnityEngine_Vector4_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973F00 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16822/*"_ColorMatrixTime"*/);
    sub_2213A60(&StringLiteral_17051/*"_UseColorMatrixTime"*/);
    byte_5973F00 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  if ( !v3 )
  {
    if ( !material )
      sub_2213CDC(v3, v4);
    if ( UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)StringLiteral_17051/*"_UseColorMatrixTime"*/, 0)
      && UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)StringLiteral_16822/*"_ColorMatrixTime"*/, 0) )
    {
      UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_17051/*"_UseColorMatrixTime"*/, 1.0, 0);
      timeSinceLevelLoad = UnityEngine_Time__get_timeSinceLevelLoad(0);
      v6.fields.z = timeSinceLevelLoad + timeSinceLevelLoad;
      v6.fields.w = timeSinceLevelLoad * 3.0;
      v6.fields.y = timeSinceLevelLoad;
      v6.fields.x = timeSinceLevelLoad / 20.0;
      UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16822/*"_ColorMatrixTime"*/, v6, 0);
    }
  }
}


void BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  _BOOL8 IsMultiTextureEnabled; // x0
  __int64 v8; // x1

  if ( (byte_5973EF5 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17040/*"_USE_MULTI_TEXTURE"*/);
    byte_5973EF5 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, destination);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)source, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)destination, 0, 0) )
    {
      if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v6);
      IsMultiTextureEnabled = BattleCharaColorMatrixComponent__IsMultiTextureEnabled(source, v6);
      if ( IsMultiTextureEnabled )
      {
        if ( destination )
        {
          UnityEngine_Material__EnableKeyword(destination, (System_String_o *)StringLiteral_17040/*"_USE_MULTI_TEXTURE"*/, 0);
          return;
        }
      }
      else if ( destination )
      {
        UnityEngine_Material__DisableKeyword(destination, (System_String_o *)StringLiteral_17040/*"_USE_MULTI_TEXTURE"*/, 0);
        return;
      }
      sub_2213CDC(IsMultiTextureEnabled, v8);
    }
  }
}


bool BattleCharaColorMatrixComponent__ApplyParticleRenderer(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_ParticleSystemRenderer_o *particleRenderer,
        UnityEngine_Material_array *originalMaterials,
        const MethodInfo *method)
{
  BattleCharaColorMatrixComponent_o *v6; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *sharedMaterial; // x22
  struct UnityEngine_Matrix4x4_StaticFields *static_fields; // x8
  __int128 v10; // q1
  __int128 v11; // q2
  UnityEngine_Renderer_o *v12; // x2
  const MethodInfo *v13; // x3
  bool IsKeywordEnabled; // w24
  __int64 v15; // x1
  UnityEngine_Object_o *ReplacementShader; // x26
  UnityEngine_Object_o *trailMaterial; // x23
  UnityEngine_Material_o *v19; // x25
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_object__o *v24; // x24
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  __int64 v35; // x1
  __int64 v36; // x1
  UnityEngine_ParticleSystemRenderer_o *v37; // x0
  UnityEngine_Material_o *v38; // x1
  UnityEngine_Renderer_o *v39; // x2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  __int64 v42; // x1
  BattleCharaColorMatrixComponent_o *v43; // x25
  unsigned __int64 v44; // x26
  MissionNaviTransitionBoardItem_o *p_rendererMaterialStates; // x29
  UnityEngine_MaterialPropertyBlock_o *v46; // x28
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_List_object__o *rendererMaterialStates; // x26
  __int64 v54; // x27
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Object_array *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  __int64 v102; // x1
  UnityEngine_Object_o *v103; // x21
  UnityEngine_Material_array *v104; // x21
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  BattleCharaColorMatrixComponent_o *v111; // x22
  __int64 v112; // x1
  MissionNaviTransitionBoardItem_o *m_Items; // x0
  System_String_o *v114; // x2
  System_String_o *v115; // x3
  int32_t v116; // w4
  int32_t v117; // w5
  bool v118; // w6
  bool v119; // w7
  BattleCharaColorMatrixComponent_o *v120; // x22
  const MethodInfo *v121; // x3
  __int64 v122; // x1
  UnityEngine_Shader_o *v123; // x26
  UnityEngine_Material_o *v124; // x25
  const MethodInfo *v125; // x3
  __int64 v126; // x1
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x2
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  Il2CppClass **v138; // x0
  __int64 v139; // x0
  UnityEngine_Material_array *v140; // [xsp+8h] [xbp-E8h]
  UnityEngine_Matrix4x4_o v141; // [xsp+10h] [xbp-E0h] BYREF
  UnityEngine_Matrix4x4_o v142; // [xsp+50h] [xbp-A0h] BYREF

  v6 = this;
  if ( (byte_5973EF1 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Material__TypeInfo);
    sub_2213A60(&UnityEngine_MaterialPropertyBlock___TypeInfo);
    sub_2213A60(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
    sub_2213A60(&StringLiteral_17259/*"_targetMatrix"*/);
    this = (BattleCharaColorMatrixComponent_o *)sub_2213A60(&StringLiteral_17039/*"_USE_CULLOBJECT"*/);
    byte_5973EF1 = 1;
  }
  memset(&v142, 0, sizeof(v142));
  if ( !particleRenderer )
    goto LABEL_80;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                             (UnityEngine_Renderer_o *)particleRenderer,
                                             0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Object__op_Equality(sharedMaterial, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !byte_5972286 )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_2213A60(&UnityEngine_Matrix4x4_TypeInfo);
    byte_5972286 = 1;
  }
  static_fields = UnityEngine_Matrix4x4_TypeInfo->static_fields;
  v10 = *(_OWORD *)&static_fields->identityMatrix.fields.m01;
  *(_OWORD *)&v142.fields.m00 = *(_OWORD *)&static_fields->identityMatrix.fields.m00;
  *(_OWORD *)&v142.fields.m01 = v10;
  v11 = *(_OWORD *)&static_fields->identityMatrix.fields.m03;
  *(_OWORD *)&v142.fields.m02 = *(_OWORD *)&static_fields->identityMatrix.fields.m02;
  *(_OWORD *)&v142.fields.m03 = v11;
  if ( !sharedMaterial )
    goto LABEL_80;
  IsKeywordEnabled = UnityEngine_Material__IsKeywordEnabled(
                       (UnityEngine_Material_o *)sharedMaterial,
                       (System_String_o *)StringLiteral_17039/*"_USE_CULLOBJECT"*/,
                       0);
  if ( IsKeywordEnabled )
    UnityEngine_Material__GetMatrix(
      &v142,
      (UnityEngine_Material_o *)sharedMaterial,
      (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/,
      0);
  ReplacementShader = (UnityEngine_Object_o *)BattleCharaColorMatrixComponent__GetReplacementShader(
                                                v6,
                                                (UnityEngine_Material_o *)sharedMaterial,
                                                v12,
                                                v13);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Equality(ReplacementShader, 0, 0) )
    return 0;
  trailMaterial = (UnityEngine_Object_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  v19 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_83274924(v19, (UnityEngine_Material_o *)sharedMaterial, 0);
  if ( !v19 )
    goto LABEL_80;
  UnityEngine_Material__set_shader(v19, (UnityEngine_Shader_o *)ReplacementShader, 0);
  BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(v6, (UnityEngine_Renderer_o *)particleRenderer, v19, v20);
  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v21);
  BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords((UnityEngine_Material_o *)sharedMaterial, v19, v22);
  BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings((UnityEngine_Material_o *)sharedMaterial, v19, v23);
  if ( IsKeywordEnabled )
  {
    v141 = v142;
    UnityEngine_Material__SetMatrix(v19, (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/, &v141, 0);
  }
  v140 = originalMaterials;
  v24 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !v24 )
    goto LABEL_80;
  items = v24->fields._items;
  v32 = Method_System_Collections_Generic_List_Material__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_80;
  size = v24->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v19,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v19, v25, v26, v27, v28, v29, v30);
  }
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)particleRenderer, v19, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(trailMaterial, 0, 0) )
  {
    v37 = particleRenderer;
    v38 = 0;
LABEL_34:
    UnityEngine_ParticleSystemRenderer__set_trailMaterial(v37, v38, 0);
    goto LABEL_35;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
  if ( UnityEngine_Object__op_Equality(trailMaterial, sharedMaterial, 0) )
  {
    v37 = particleRenderer;
    v38 = v19;
    goto LABEL_34;
  }
  v123 = BattleCharaColorMatrixComponent__GetReplacementShader(v6, (UnityEngine_Material_o *)trailMaterial, v39, v40);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v122);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v123, 0, 0) )
  {
    v124 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83274924(v124, (UnityEngine_Material_o *)trailMaterial, 0);
    if ( !v124 )
      goto LABEL_80;
    UnityEngine_Material__set_shader(v124, v123, 0);
    BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(
      v6,
      (UnityEngine_Renderer_o *)particleRenderer,
      v124,
      v125);
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v126);
    BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords((UnityEngine_Material_o *)trailMaterial, v124, v127);
    BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(
      (UnityEngine_Material_o *)trailMaterial,
      v124,
      v128);
    UnityEngine_ParticleSystemRenderer__set_trailMaterial(particleRenderer, v124, 0);
    v135 = v24->fields._items;
    v136 = Method_System_Collections_Generic_List_Material__Add__;
    ++v24->fields._version;
    if ( !v135 )
      goto LABEL_80;
    v137 = v24->fields._size;
    if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        (Il2CppObject *)v124,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    }
    else
    {
      v138 = &v135->obj.klass + v137;
      v24->fields._size = v137 + 1;
      v138[4] = (Il2CppClass *)v124;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v138 + 4), (int32_t)v124, v129, v130, v131, v132, v133, v134);
    }
  }
LABEL_35:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( UnityEngine_Object__op_Equality(trailMaterial, 0, 0) )
    v42 = 1;
  else
    v42 = 2;
  this = (BattleCharaColorMatrixComponent_o *)sub_2213B20(UnityEngine_MaterialPropertyBlock___TypeInfo, v42);
  if ( !this )
    goto LABEL_80;
  v43 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v44 = 0;
    p_rendererMaterialStates = (MissionNaviTransitionBoardItem_o *)&this->fields._rendererMaterialStates;
    while ( 1 )
    {
      v46 = (UnityEngine_MaterialPropertyBlock_o *)sub_2213CCC(UnityEngine_MaterialPropertyBlock_TypeInfo);
      UnityEngine_MaterialPropertyBlock___ctor(v46, 0);
      UnityEngine_Renderer__GetPropertyBlock((UnityEngine_Renderer_o *)particleRenderer, v46, v44, 0);
      if ( v44 >= LODWORD(v43->fields.m_CancellationTokenSource) )
        break;
      p_rendererMaterialStates->klass = (MissionNaviTransitionBoardItem_c *)v46;
      sub_2213A04(p_rendererMaterialStates, (int32_t)v46, v47, v48, v49, v50, v51, v52);
      ++v44;
      p_rendererMaterialStates = (MissionNaviTransitionBoardItem_o *)((char *)p_rendererMaterialStates + 8);
      if ( (__int64)v44 >= SLODWORD(v43->fields.m_CancellationTokenSource) )
        goto LABEL_45;
    }
LABEL_79:
    sub_2213CE4(this);
  }
LABEL_45:
  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v6->fields._rendererMaterialStates;
  v54 = sub_2213CCC(BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
  BattleCharaColorMatrixComponent_RendererMaterialState___ctor(
    (BattleCharaColorMatrixComponent_RendererMaterialState_o *)v54,
    0);
  if ( !v54 )
    goto LABEL_80;
  *(_QWORD *)(v54 + 16) = particleRenderer;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 16), (int32_t)particleRenderer, v55, v56, v57, v58, v59, v60);
  *(_QWORD *)(v54 + 24) = v140;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 24), (int32_t)v140, v61, v62, v63, v64, v65, v66);
  v67 = System_Collections_Generic_List_object___ToArray(
          v24,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Material__ToArray__);
  *(_QWORD *)(v54 + 32) = v67;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 32), (int32_t)v67, v68, v69, v70, v71, v72, v73);
  *(_QWORD *)(v54 + 40) = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 40), (int32_t)v43, v74, v75, v76, v77, v78, v79);
  *(_QWORD *)(v54 + 48) = sharedMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 48), (int32_t)sharedMaterial, v80, v81, v82, v83, v84, v85);
  *(_QWORD *)(v54 + 56) = trailMaterial;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 56), (int32_t)trailMaterial, v86, v87, v88, v89, v90, v91);
  *(_BYTE *)(v54 + 64) = 1;
  if ( !rendererMaterialStates )
    goto LABEL_80;
  v98 = rendererMaterialStates->fields._items;
  v99 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__;
  ++rendererMaterialStates->fields._version;
  if ( !v98 )
    goto LABEL_80;
  v100 = rendererMaterialStates->fields._size;
  if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      rendererMaterialStates,
      (Il2CppObject *)v54,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    rendererMaterialStates->fields._size = v100 + 1;
    v101[4] = (Il2CppClass *)v54;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v101 + 4), v54, v92, v93, v94, v95, v96, v97);
  }
  v103 = (UnityEngine_Object_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102);
  if ( UnityEngine_Object__op_Equality(v103, 0, 0) )
  {
    v104 = (UnityEngine_Material_array *)sub_2213B20(UnityEngine_Material___TypeInfo, 1);
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                  (UnityEngine_Renderer_o *)particleRenderer,
                                                  0);
    if ( v104 )
    {
      v111 = this;
      if ( !this
        || (this = (BattleCharaColorMatrixComponent_o *)sub_2213BB4(this, v104->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v104->max_length) )
          goto LABEL_79;
        v104->m_Items[0] = (UnityEngine_Material_o *)v111;
        m_Items = (MissionNaviTransitionBoardItem_o *)v104->m_Items;
        goto LABEL_67;
      }
LABEL_81:
      v139 = sub_2213D00(this, v112);
      sub_2213BA0(v139, 0);
    }
LABEL_80:
    sub_2213CDC(this, particleRenderer);
  }
  v104 = (UnityEngine_Material_array *)sub_2213B20(UnityEngine_Material___TypeInfo, 2);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                (UnityEngine_Renderer_o *)particleRenderer,
                                                0);
  if ( !v104 )
    goto LABEL_80;
  v120 = this;
  if ( this )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_2213BB4(this, v104->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_81;
  }
  if ( !LODWORD(v104->max_length) )
    goto LABEL_79;
  v104->m_Items[0] = (UnityEngine_Material_o *)v120;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v104->m_Items, (int32_t)v120, v114, v115, v116, v117, v118, v119);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  v111 = this;
  if ( this )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_2213BB4(this, v104->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_81;
  }
  if ( (v104->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_79;
  v104->m_Items[1] = (UnityEngine_Material_o *)v111;
  m_Items = (MissionNaviTransitionBoardItem_o *)&v104->m_Items[1];
LABEL_67:
  sub_2213A04(m_Items, (int32_t)v111, v105, v106, v107, v108, v109, v110);
  BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(
    v6,
    (UnityEngine_Renderer_o *)particleRenderer,
    v104,
    v121);
  return 1;
}


void BattleCharaColorMatrixComponent__ApplyParticleSystemStates(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *particleSystemStates; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *items; // x21

  if ( (byte_5973F0C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F0C = 1;
  }
  particleSystemStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
  if ( !particleSystemStates )
LABEL_14:
    sub_2213CDC(particleSystemStates, method);
  v4 = 0;
  while ( v4 < particleSystemStates->fields._size )
  {
    particleSystemStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          particleSystemStates,
                                                                          v4,
                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    if ( !particleSystemStates )
      goto LABEL_14;
    items = (UnityEngine_Object_o *)particleSystemStates->fields._items;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    particleSystemStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(items, 0, 0);
    if ( ((unsigned __int8)particleSystemStates & 1) == 0 )
    {
      if ( !items )
        goto LABEL_14;
      if ( UnityEngine_ParticleSystem__get_isPlaying((UnityEngine_ParticleSystem_o *)items, 0) )
        UnityEngine_ParticleSystem__Pause((UnityEngine_ParticleSystem_o *)items, 0, 0);
    }
    particleSystemStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
    ++v4;
    if ( !particleSystemStates )
      goto LABEL_14;
  }
}


void BattleCharaColorMatrixComponent__ApplyRenderer(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_HashSet_Renderer__o *trackedRenderers; // x0
  const MethodInfo *v9; // x2
  System_Array_o *sharedMaterials; // x0
  System_Array_o *v11; // x21
  UnityEngine_Renderer_c *klass; // x8
  Il2CppObject *v13; // x0
  __int64 v14; // x25
  __int64 v15; // x0
  __int64 v16; // x23
  unsigned __int64 v17; // x24
  char v18; // w9
  __int64 v19; // x22
  __int64 v20; // x29
  UnityEngine_MaterialPropertyBlock_o *v21; // x25
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  UnityEngine_Material_o *v29; // x25
  UnityEngine_Renderer_o *v30; // x2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  UnityEngine_Shader_o *ReplacementShader; // x27
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  UnityEngine_Material_array *v38; // x25
  __int64 v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  Il2CppObject *Component_object; // x0
  const MethodInfo *v47; // x4
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_object__o *rendererStates; // x21
  __int64 v50; // x22
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *rendererMaterialStates; // x24
  UnityEngine_Material_array *v68; // x22
  __int64 v69; // x25
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  const MethodInfo *v94; // x3
  __int64 v95; // x0
  __int64 v96; // [xsp+8h] [xbp-78h]
  char material; // [xsp+10h] [xbp-70h]
  UnityEngine_Material_o *materiala; // [xsp+10h] [xbp-70h]
  unsigned int *v99; // [xsp+18h] [xbp-68h]

  if ( (byte_5973EE9 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Renderer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Renderer__Contains__);
    sub_2213A60(&UnityEngine_LineRenderer_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Add__);
    sub_2213A60(&UnityEngine_MaterialPropertyBlock___TypeInfo);
    sub_2213A60(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_2213A60(&UnityEngine_Material___TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_2213A60(&BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
    sub_2213A60(&BattleCharaColorMatrixComponent_RendererState_TypeInfo);
    sub_2213A60(&UnityEngine_TrailRenderer_TypeInfo);
    byte_5973EE9 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderer);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0) )
    return;
  trackedRenderers = this->fields._trackedRenderers;
  if ( !trackedRenderers )
    goto LABEL_51;
  if ( System_Collections_Generic_HashSet_object___Contains(
         (System_Collections_Generic_HashSet_object__o *)trackedRenderers,
         (Il2CppObject *)renderer,
         (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_Renderer__Contains__) )
  {
    return;
  }
  BattleCharaColorMatrixComponent__RegisterEffectSheetAnimationState(this, renderer, v9);
  if ( !renderer )
    goto LABEL_51;
  sharedMaterials = (System_Array_o *)UnityEngine_Renderer__get_sharedMaterials(renderer, 0);
  if ( !sharedMaterials )
    return;
  v11 = sharedMaterials;
  klass = renderer->klass;
  if ( (UnityEngine_ParticleSystemRenderer_c *)renderer->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)renderer,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    BattleCharaColorMatrixComponent__RegisterParticleSystemState(
      this,
      (UnityEngine_ParticleSystem_o *)Component_object,
      0,
      data,
      v47);
    if ( !BattleCharaColorMatrixComponent__ApplyParticleRenderer(
            this,
            (UnityEngine_ParticleSystemRenderer_o *)renderer,
            (UnityEngine_Material_array *)v11,
            v48) )
      return;
LABEL_49:
    trackedRenderers = this->fields._trackedRenderers;
    if ( trackedRenderers )
    {
      System_Collections_Generic_HashSet_object___Add(
        (System_Collections_Generic_HashSet_object__o *)trackedRenderers,
        (Il2CppObject *)renderer,
        (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_Renderer__Add__);
      return;
    }
LABEL_51:
    sub_2213CDC(trackedRenderers, v7);
  }
  if ( klass == (UnityEngine_Renderer_c *)UnityEngine_TrailRenderer_TypeInfo
    || klass == (UnityEngine_Renderer_c *)UnityEngine_LineRenderer_TypeInfo )
  {
    rendererStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
    v50 = sub_2213CCC(BattleCharaColorMatrixComponent_RendererState_TypeInfo);
    BattleCharaColorMatrixComponent_RendererState___ctor((BattleCharaColorMatrixComponent_RendererState_o *)v50, 0);
    if ( v50 )
    {
      *(_QWORD *)(v50 + 16) = renderer;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v50 + 16), (int32_t)renderer, v51, v52, v53, v54, v55, v56);
      trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)UnityEngine_Renderer__get_enabled(
                                                                                    renderer,
                                                                                    0);
      *(_BYTE *)(v50 + 24) = (unsigned __int8)trackedRenderers & 1;
      if ( rendererStates )
      {
        items = rendererStates->fields._items;
        v64 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Add__;
        ++rendererStates->fields._version;
        if ( items )
        {
          size = rendererStates->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              rendererStates,
              (Il2CppObject *)v50,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &items->obj.klass + size;
            rendererStates->fields._size = size + 1;
            v66[4] = (Il2CppClass *)v50;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 4), v50, v57, v58, v59, v60, v61, v62);
          }
          UnityEngine_Renderer__set_enabled(renderer, 0, 0);
          goto LABEL_49;
        }
      }
    }
    goto LABEL_51;
  }
  v13 = System_Array__Clone(sharedMaterials, 0);
  v14 = sub_2004A4C(v13, UnityEngine_Material___TypeInfo);
  v15 = sub_2213B20(UnityEngine_MaterialPropertyBlock___TypeInfo, LODWORD(v11[1].monitor));
  if ( SLODWORD(v11[1].monitor) < 1 )
    return;
  v16 = v15;
  v17 = 0;
  v18 = 0;
  v19 = v15 + 32;
  v96 = v14 + 32;
  v99 = (unsigned int *)v14;
LABEL_15:
  v20 = 8 * v17;
  material = v18;
  do
  {
    v21 = (UnityEngine_MaterialPropertyBlock_o *)sub_2213CCC(UnityEngine_MaterialPropertyBlock_TypeInfo);
    UnityEngine_MaterialPropertyBlock___ctor(v21, 0);
    UnityEngine_Renderer__GetPropertyBlock(renderer, v21, v17, 0);
    if ( !v16 )
      goto LABEL_51;
    if ( v17 >= *(unsigned int *)(v16 + 24) )
      goto LABEL_52;
    *(_QWORD *)(v19 + 8 * v17) = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + v20), (int32_t)v21, v22, v23, v24, v25, v26, v27);
    if ( v17 >= LODWORD(v11[1].monitor) )
      goto LABEL_52;
    v29 = (UnityEngine_Material_o *)*((_QWORD *)&v11[2].klass + v17);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0, 0) )
    {
      ReplacementShader = BattleCharaColorMatrixComponent__GetReplacementShader(this, v29, v30, v31);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ReplacementShader, 0, 0) )
      {
        materiala = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor_83274924(materiala, v29, 0);
        if ( !materiala )
          goto LABEL_51;
        UnityEngine_Material__set_shader(materiala, ReplacementShader, 0);
        BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(this, renderer, materiala, v34);
        if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v35);
        BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords(v29, materiala, v36);
        BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(v29, materiala, v37);
        v38 = (UnityEngine_Material_array *)v99;
        if ( !v99 )
          goto LABEL_51;
        trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)sub_2213BB4(
                                                                                      materiala,
                                                                                      *(_QWORD *)(*(_QWORD *)v99 + 64LL));
        if ( !trackedRenderers )
        {
          v95 = sub_2213D00(0, v39);
          sub_2213BA0(v95, 0);
        }
        if ( v17 >= v99[6] )
LABEL_52:
          sub_2213CE4(trackedRenderers);
        *(_QWORD *)(v96 + 8 * v17) = materiala;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v96 + v20), (int32_t)materiala, v40, v41, v42, v43, v44, v45);
        ++v17;
        v18 = 1;
        if ( (__int64)v17 >= SLODWORD(v11[1].monitor) )
        {
LABEL_43:
          UnityEngine_Renderer__set_sharedMaterials(renderer, v38, 0);
          rendererMaterialStates = this->fields._rendererMaterialStates;
          v68 = v38;
          v69 = sub_2213CCC(BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
          BattleCharaColorMatrixComponent_RendererMaterialState___ctor(
            (BattleCharaColorMatrixComponent_RendererMaterialState_o *)v69,
            0);
          if ( v69 )
          {
            *(_QWORD *)(v69 + 16) = renderer;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 16), (int32_t)renderer, v70, v71, v72, v73, v74, v75);
            *(_QWORD *)(v69 + 24) = v11;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 24), (int32_t)v11, v76, v77, v78, v79, v80, v81);
            *(_QWORD *)(v69 + 32) = v68;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 32), (int32_t)v68, v82, v83, v84, v85, v86, v87);
            *(_QWORD *)(v69 + 40) = v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 40), v16, v88, v89, v90, v91, v92, v93);
            if ( rendererMaterialStates )
            {
              sub_1FFEDA8(
                rendererMaterialStates,
                v69,
                Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__);
              BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(this, renderer, v68, v94);
              goto LABEL_49;
            }
          }
          goto LABEL_51;
        }
        goto LABEL_15;
      }
    }
    ++v17;
    v20 += 8;
  }
  while ( (__int64)v17 < SLODWORD(v11[1].monitor) );
  v38 = (UnityEngine_Material_array *)v99;
  if ( (material & 1) != 0 )
    goto LABEL_43;
}


void BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *shader; // x21
  __int64 v9; // x1
  bool HasProperty_83277340; // w0
  float Float; // s0
  const MethodInfo *v12; // x1
  System_String_o *name; // x21
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  float v17; // s8
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  float v20; // s8
  System_String_o *v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x1
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  const MethodInfo *v30; // x2
  float v31; // s8
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  float v35; // s0
  const MethodInfo *v36; // x2
  __int64 *v37; // x8
  System_String_o *v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  System_String_o *v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  System_String_o *v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  System_String_o *v52; // x0
  __int64 v53; // x1
  BattleCharaColorMatrixComponent_c *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  UnityEngine_Matrix4x4_o v57; // [xsp+0h] [xbp-B0h] BYREF
  UnityEngine_Matrix4x4_o v58; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_5973EFF & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15733/*"Unlit/Transparent Colored (NoCull)"*/);
    sub_2213A60(&StringLiteral_16775/*"_BlendDst"*/);
    sub_2213A60(&StringLiteral_6695/*"FGO_EF_Particles/tex0_mul_vcol0/Additive"*/);
    sub_2213A60(&StringLiteral_17259/*"_targetMatrix"*/);
    sub_2213A60(&StringLiteral_9504/*"Mobile/Particles/Alpha Blended+1"*/);
    sub_2213A60(&StringLiteral_9502/*"Mobile/Particles/Additive"*/);
    sub_2213A60(&StringLiteral_16828/*"_CullMode"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_17049/*"_UseAlphaTest"*/);
    sub_2213A60(&StringLiteral_17077/*"_ZTestMode"*/);
    sub_2213A60(&StringLiteral_6696/*"FGO_EF_Particles/tex0_mul_vcol0/AlphaBlend"*/);
    sub_2213A60(&StringLiteral_8751/*"Legacy Shaders/Particles/Additive (Soft)"*/);
    sub_2213A60(&StringLiteral_9503/*"Mobile/Particles/Additive (SoftClip)"*/);
    sub_2213A60(&StringLiteral_5096/*"Custom/SoftEdgeUnlitCutZ"*/);
    sub_2213A60(&StringLiteral_17078/*"_ZWrite"*/);
    sub_2213A60(&StringLiteral_10999/*"Particles/Additive+1"*/);
    sub_2213A60(&StringLiteral_17039/*"_USE_CULLOBJECT"*/);
    sub_2213A60(&StringLiteral_8750/*"Legacy Shaders/Particles/Additive"*/);
    sub_2213A60(&StringLiteral_17243/*"_oneValue"*/);
    sub_2213A60(&StringLiteral_16823/*"_ColorScale"*/);
    sub_2213A60(&StringLiteral_16776/*"_BlendSrc"*/);
    byte_5973EFF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, destination);
  v5 = (UnityEngine_Shader_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)source, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return;
  if ( !source )
    goto LABEL_81;
  shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(source, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(shader, 0, 0) )
    return;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v5 = (UnityEngine_Shader_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)destination, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return;
  if ( !destination )
    goto LABEL_81;
  if ( UnityEngine_Material__HasProperty_83277340(destination, (System_String_o *)StringLiteral_17243/*"_oneValue"*/, 0) )
  {
    HasProperty_83277340 = UnityEngine_Material__HasProperty_83277340(source, (System_String_o *)StringLiteral_17243/*"_oneValue"*/, 0);
    Float = 1.0;
    if ( HasProperty_83277340 )
      Float = UnityEngine_Material__GetFloat(source, (System_String_o *)StringLiteral_17243/*"_oneValue"*/, 0);
    UnityEngine_Material__SetFloat(destination, (System_String_o *)StringLiteral_17243/*"_oneValue"*/, Float, 0);
  }
  if ( UnityEngine_Material__IsKeywordEnabled(source, (System_String_o *)StringLiteral_17039/*"_USE_CULLOBJECT"*/, 0) )
  {
    UnityEngine_Material__GetMatrix(&v58, source, (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/, 0);
    v57 = v58;
    UnityEngine_Material__SetMatrix(destination, (System_String_o *)StringLiteral_17259/*"_targetMatrix"*/, &v57, 0);
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v12);
  if ( BattleCharaColorMatrixComponent__IsSingleFlatShader(name, v12) )
  {
    if ( UnityEngine_Material__HasProperty_83277340(source, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, 0) )
    {
      v17 = UnityEngine_Material__GetFloat(source, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, 0);
      if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v15);
      BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
        destination,
        (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/,
        v17,
        v16);
    }
    if ( UnityEngine_Material__HasProperty_83277340(source, (System_String_o *)StringLiteral_17078/*"_ZWrite"*/, 0) )
    {
      v20 = UnityEngine_Material__GetFloat(source, (System_String_o *)StringLiteral_17078/*"_ZWrite"*/, 0);
      if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v18);
      BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
        destination,
        (System_String_o *)StringLiteral_17078/*"_ZWrite"*/,
        v20,
        v19);
    }
  }
  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v14);
  BattleCharaColorMatrixComponent__ApplyColorMatrixTimeSettings(destination, v14);
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v21 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_9502/*"Mobile/Particles/Additive"*/, 0) )
    goto LABEL_48;
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v24 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_9503/*"Mobile/Particles/Additive (SoftClip)"*/, 0) )
    goto LABEL_48;
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v25 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_8750/*"Legacy Shaders/Particles/Additive"*/, 0) )
    goto LABEL_48;
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v26, (System_String_o *)StringLiteral_8751/*"Legacy Shaders/Particles/Additive (Soft)"*/, 0) )
  {
LABEL_48:
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v22);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16776/*"_BlendSrc"*/,
      5.0,
      v23);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16775/*"_BlendDst"*/,
      1.0,
      v30);
    v31 = 0.0;
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16828/*"_CullMode"*/,
      0.0,
      v32);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_17078/*"_ZWrite"*/,
      0.0,
      v33);
    v35 = 1.0;
LABEL_51:
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16823/*"_ColorScale"*/,
      v35,
      v34);
LABEL_52:
    v37 = &StringLiteral_17049/*"_UseAlphaTest"*/;
LABEL_53:
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(destination, (System_String_o *)*v37, v31, v36);
    return;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v28 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v27);
  if ( BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(v28, v27) )
    goto LABEL_48;
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v29 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v29, (System_String_o *)StringLiteral_6695/*"FGO_EF_Particles/tex0_mul_vcol0/Additive"*/, 0) )
    goto LABEL_48;
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v38 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v38, (System_String_o *)StringLiteral_6696/*"FGO_EF_Particles/tex0_mul_vcol0/AlphaBlend"*/, 0) )
  {
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v39);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16776/*"_BlendSrc"*/,
      5.0,
      v40);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16775/*"_BlendDst"*/,
      10.0,
      v41);
    v31 = 0.0;
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16828/*"_CullMode"*/,
      0.0,
      v42);
    v37 = &StringLiteral_17078/*"_ZWrite"*/;
    goto LABEL_53;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v43 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v43, (System_String_o *)StringLiteral_10999/*"Particles/Additive+1"*/, 0) )
  {
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v44);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16776/*"_BlendSrc"*/,
      5.0,
      v45);
    v31 = 1.0;
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16775/*"_BlendDst"*/,
      1.0,
      v46);
    v35 = 2.0;
    goto LABEL_51;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v47 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v47, (System_String_o *)StringLiteral_9504/*"Mobile/Particles/Alpha Blended+1"*/, 0) )
  {
    if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v48);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16776/*"_BlendSrc"*/,
      5.0,
      v49);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16775/*"_BlendDst"*/,
      10.0,
      v50);
    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
      destination,
      (System_String_o *)StringLiteral_16823/*"_ColorScale"*/,
      1.0,
      v51);
    v31 = 0.0;
    goto LABEL_52;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v52 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v52, (System_String_o *)StringLiteral_15732/*"Unlit/Transparent Colored"*/, 0) )
  {
    v54 = BattleCharaColorMatrixComponent_TypeInfo;
    v31 = 2.0;
LABEL_78:
    if ( !*(&v54->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v54, v53);
    v37 = &StringLiteral_16828/*"_CullMode"*/;
    goto LABEL_53;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
    goto LABEL_81;
  v55 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v55, (System_String_o *)StringLiteral_15733/*"Unlit/Transparent Colored (NoCull)"*/, 0) )
  {
LABEL_77:
    v54 = BattleCharaColorMatrixComponent_TypeInfo;
    v31 = 0.0;
    goto LABEL_78;
  }
  v5 = UnityEngine_Material__get_shader(source, 0);
  if ( !v5 )
LABEL_81:
    sub_2213CDC(v5, v6);
  v56 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
  if ( System_String__op_Equality(v56, (System_String_o *)StringLiteral_5096/*"Custom/SoftEdgeUnlitCutZ"*/, 0) )
    goto LABEL_77;
}


void BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *effectSheetAnimationStates; // x0
  __int64 v9; // x1
  int32_t v10; // w22
  char *v11; // x23
  UnityEngine_Object_o *v12; // x24

  if ( (byte_5973EED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    byte_5973EED = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderer);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    effectSheetAnimationStates = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
    if ( ((unsigned __int8)effectSheetAnimationStates & 1) == 0 )
    {
      if ( !material )
        goto LABEL_19;
      if ( !UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, 0) )
        return;
      effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
      if ( !effectSheetAnimationStates )
LABEL_19:
        sub_2213CDC(effectSheetAnimationStates, v9);
      v10 = 0;
      while ( v10 < *((_DWORD *)effectSheetAnimationStates + 6) )
      {
        effectSheetAnimationStates = System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)effectSheetAnimationStates,
                                       v10,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
        if ( !effectSheetAnimationStates )
          goto LABEL_19;
        v11 = (char *)effectSheetAnimationStates;
        v12 = (UnityEngine_Object_o *)*((_QWORD *)effectSheetAnimationStates + 3);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( !UnityEngine_Object__op_Inequality(v12, (UnityEngine_Object_o *)renderer, 0) )
        {
          UnityEngine_Material__set_mainTextureScale(material, *(UnityEngine_Vector2_o *)(v11 + 36), 0);
          UnityEngine_Material__set_mainTextureOffset(material, *(UnityEngine_Vector2_o *)(v11 + 44), 0);
          return;
        }
        effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
        ++v10;
        if ( !effectSheetAnimationStates )
          goto LABEL_19;
      }
    }
  }
}


void BattleCharaColorMatrixComponent__Change(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_array *renderers,
        bool enable,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( enable )
  {
    if ( BattleCharaColorMatrixComponent__EnsureShader(this, (const MethodInfo *)renderers) )
      BattleCharaColorMatrixComponent__Apply(this, renderers, data, v8);
  }
  else
  {
    BattleCharaColorMatrixComponent__Restore(this, (const MethodInfo *)renderers);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaColorMatrixComponent__ConvertSimulationSpaceToLocal(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_ParticleSystem_o *ps,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_MainModule_o v4; // x0
  UnityEngine_ParticleSystem_MainModule_o v5; // x0
  UnityEngine_ParticleSystem_MainModule_o v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *customSimulationSpace; // x20
  UnityEngine_ParticleSystem_MainModule_o v9; // x0
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s4
  float v19; // s5
  float v20; // s6
  float w; // s7
  float v22; // s4
  float v23; // s5
  float v24; // s6
  UnityEngine_ParticleSystem_MainModule_o v25; // x0
  UnityEngine_ParticleSystem_MainModule_o v26; // x0
  UnityEngine_ParticleSystem_MainModule_o v27; // x0
  unsigned int particleCount; // w0
  __int64 v29; // x20
  int32_t v30; // w21
  unsigned __int64 v31; // x23
  UnityEngine_ParticleSystem_Particle_o *v32; // x22
  UnityEngine_Vector3_o v33; // [xsp+0h] [xbp-210h]
  UnityEngine_Matrix4x4_o v34; // [xsp+10h] [xbp-200h] BYREF
  UnityEngine_Matrix4x4_o v35; // [xsp+50h] [xbp-1C0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+90h] [xbp-180h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+D0h] [xbp-140h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+110h] [xbp-100h] BYREF
  UnityEngine_Matrix4x4_o v39; // [xsp+150h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+198h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o velocity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_5973EEF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCharaColorMatrixComponent_o *)sub_2213A60(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_5973EEF = 1;
  }
  m_ParticleSystem = 0;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  if ( !ps )
    goto LABEL_32;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
  v4.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  if ( !UnityEngine_ParticleSystem_MainModule__get_simulationSpace(v4, 0) )
    return;
  v5.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  if ( UnityEngine_ParticleSystem_MainModule__get_simulationSpace(v5, 0) == 2 )
  {
    v6.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    customSimulationSpace = (UnityEngine_Object_o *)UnityEngine_ParticleSystem_MainModule__get_customSimulationSpace(
                                                      v6,
                                                      0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(customSimulationSpace, 0, 0) )
    {
      v9.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v9, 0, 0);
      return;
    }
  }
  v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  if ( UnityEngine_ParticleSystem_MainModule__get_scalingMode(v10, 0) == 2 )
  {
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  else
  {
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ps, 0);
    if ( !this )
      goto LABEL_32;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
  }
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ps, 0);
  if ( !this
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0),
        v15 = position.fields.x,
        v16 = position.fields.y,
        v17 = position.fields.z,
        (this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)ps,
                                                       0)) == 0) )
  {
LABEL_32:
    sub_2213CDC(this, ps);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0);
  v18 = rotation.fields.x;
  v19 = rotation.fields.y;
  v20 = rotation.fields.z;
  w = rotation.fields.w;
  rotation.fields.x = v15;
  rotation.fields.y = v16;
  *(_QWORD *)&v33.fields.y = __PAIR64__(LODWORD(z), LODWORD(y));
  rotation.fields.z = v17;
  v33.fields.x = x;
  rotation.fields.w = v18;
  v22 = v19;
  v23 = v20;
  v24 = w;
  UnityEngine_Matrix4x4__TRS(
    &v37,
    *(UnityEngine_Vector3_o *)&rotation.fields.x,
    *(UnityEngine_Quaternion_o *)&rotation.fields.w,
    v33,
    0);
  v38 = v37;
  UnityEngine_Matrix4x4__get_inverse(&v36, &v38, 0);
  v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  v39 = v36;
  if ( UnityEngine_ParticleSystem_MainModule__get_simulationSpace(v25, 0) == 2 )
  {
    v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    v37 = v39;
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystem_MainModule__get_customSimulationSpace(v26, 0);
    if ( !this )
      goto LABEL_32;
    UnityEngine_Transform__get_localToWorldMatrix(&v36, (UnityEngine_Transform_o *)this, 0);
    v35 = v37;
    v34 = v36;
    UnityEngine_Matrix4x4__op_Multiply(&v39, &v35, &v34, 0);
  }
  v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v27, 0, 0);
  particleCount = UnityEngine_ParticleSystem__get_particleCount(ps, 0);
  v29 = sub_2213B20(UnityEngine_ParticleSystem_Particle___TypeInfo, particleCount);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystem__GetParticles_83835248(
                                                ps,
                                                (UnityEngine_ParticleSystem_Particle_array *)v29,
                                                0);
  v30 = (int)this;
  if ( (int)this >= 1 )
  {
    if ( v29 )
    {
      v31 = 0;
      v32 = (UnityEngine_ParticleSystem_Particle_o *)(v29 + 32);
      do
      {
        if ( v31 >= *(unsigned int *)(v29 + 24)
          || (v43 = UnityEngine_ParticleSystem_Particle__get_position(v32, 0),
              v44 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v39, v43, 0),
              v31 >= *(unsigned int *)(v29 + 24))
          || (UnityEngine_ParticleSystem_Particle__set_position(v32, v44, 0), v31 >= *(unsigned int *)(v29 + 24))
          || (velocity = UnityEngine_ParticleSystem_Particle__get_velocity(v32, 0),
              v46 = UnityEngine_Matrix4x4__MultiplyVector(&v39, velocity, 0),
              v31 >= *(unsigned int *)(v29 + 24)) )
        {
          sub_2213CE4(this);
        }
        UnityEngine_ParticleSystem_Particle__set_velocity(v32, v46, 0);
        ++v31;
        v32 = (UnityEngine_ParticleSystem_Particle_o *)((char *)v32 + 132);
      }
      while ( v30 != v31 );
      goto LABEL_29;
    }
    goto LABEL_32;
  }
LABEL_29:
  UnityEngine_ParticleSystem__SetParticles_83834724(ps, (UnityEngine_ParticleSystem_Particle_array *)v29, v30, 0);
}


void BattleCharaColorMatrixComponent__DestroyMaterial(UnityEngine_Material_o *material, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  bool isPlaying; // w8
  int v6; // w9

  if ( (byte_5973F0B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F0B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0) )
  {
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v3);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    v6 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( isPlaying )
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)material, 0);
    }
    else
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      UnityEngine_Object__DestroyImmediate_83460132((UnityEngine_Object_o *)material, 0);
    }
  }
}


void BattleCharaColorMatrixComponent__DisableWeaponTrails(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  BattleCharaColorMatrixComponent_o *v2; // x19
  struct System_Collections_Generic_List_XWeaponTrail__o *tempWeaponTrails; // x8
  int32_t size; // w2
  int v5; // w9
  int32_t v6; // w20
  __int64 v7; // x1
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *weaponTrailStates; // x22
  __int64 v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  v2 = this;
  if ( (byte_5973EEA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_XWeaponTrail___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_XWeaponTrail__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_XWeaponTrail__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_XWeaponTrail__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCharaColorMatrixComponent_o *)sub_2213A60(&BattleCharaColorMatrixComponent_WeaponTrailState_TypeInfo);
    byte_5973EEA = 1;
  }
  tempWeaponTrails = v2->fields._tempWeaponTrails;
  if ( !tempWeaponTrails )
    goto LABEL_24;
  size = tempWeaponTrails->fields._size;
  v5 = tempWeaponTrails->fields._version + 1;
  tempWeaponTrails->fields._size = 0;
  tempWeaponTrails->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)tempWeaponTrails->fields._items, 0, size, 0);
  this = (BattleCharaColorMatrixComponent_o *)BattleCharaColorMatrixComponent__GetMonitorRoot(v2, method);
  if ( !this
    || (UnityEngine_Component__GetComponentsInChildren_object__58857724(
          (UnityEngine_Component_o *)this,
          1,
          (System_Collections_Generic_List_T__o *)v2->fields._tempWeaponTrails,
          (const MethodInfo_38218FC *)Method_UnityEngine_Component_GetComponentsInChildren_XWeaponTrail___),
        (this = (BattleCharaColorMatrixComponent_o *)v2->fields._tempWeaponTrails) == 0) )
  {
LABEL_24:
    sub_2213CDC(this, method);
  }
  v6 = 0;
  while ( v6 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v6,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_XWeaponTrail__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      this = (BattleCharaColorMatrixComponent_o *)v2->fields._trackedWeaponTrails;
      if ( !this )
        goto LABEL_24;
      if ( System_Collections_Generic_HashSet_object___Add(
             (System_Collections_Generic_HashSet_object__o *)this,
             Item,
             (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Add__) )
      {
        weaponTrailStates = (System_Collections_Generic_List_object__o *)v2->fields._weaponTrailStates;
        v10 = sub_2213CCC(BattleCharaColorMatrixComponent_WeaponTrailState_TypeInfo);
        BattleCharaColorMatrixComponent_WeaponTrailState___ctor(
          (BattleCharaColorMatrixComponent_WeaponTrailState_o *)v10,
          0);
        if ( !v10 )
          goto LABEL_24;
        *(_QWORD *)(v10 + 16) = Item;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)Item, v11, v12, v13, v14, v15, v16);
        if ( !Item )
          goto LABEL_24;
        this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Behaviour__get_enabled(
                                                      (UnityEngine_Behaviour_o *)Item,
                                                      0);
        *(_BYTE *)(v10 + 24) = (unsigned __int8)this & 1;
        if ( !weaponTrailStates )
          goto LABEL_24;
        items = weaponTrailStates->fields._items;
        v24 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Add__;
        ++weaponTrailStates->fields._version;
        if ( !items )
          goto LABEL_24;
        v25 = weaponTrailStates->fields._size;
        if ( (unsigned int)v25 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            weaponTrailStates,
            (Il2CppObject *)v10,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          weaponTrailStates->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v10, v17, v18, v19, v20, v21, v22);
        }
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, 0, 0);
      }
    }
    this = (BattleCharaColorMatrixComponent_o *)v2->fields._tempWeaponTrails;
    ++v6;
    if ( !this )
      goto LABEL_24;
  }
}


bool BattleCharaColorMatrixComponent__EnsureBattleParticleBaseColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_battleParticleBaseColorMatrixShader; // x20
  UnityEngine_Object_o *battleParticleBaseColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F02 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6687/*"FGO_Battle/Particle/Base_ColorMatrix"*/);
    byte_5973F02 = 1;
  }
  p_battleParticleBaseColorMatrixShader = &this->fields._battleParticleBaseColorMatrixShader;
  battleParticleBaseColorMatrixShader = (UnityEngine_Object_o *)this->fields._battleParticleBaseColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(battleParticleBaseColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_6687/*"FGO_Battle/Particle/Base_ColorMatrix"*/, 0);
  *p_battleParticleBaseColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleParticleBaseColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_battleParticleBaseColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingBattleParticleBaseShader )
    this->fields._hasLoggedMissingBattleParticleBaseShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticleAdditiveColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticleAdditiveColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticleAdditiveColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F05 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7625/*"Hidden/Particle/Additive_ColorMatrix"*/);
    byte_5973F05 = 1;
  }
  p_hiddenParticleAdditiveColorMatrixShader = &this->fields._hiddenParticleAdditiveColorMatrixShader;
  hiddenParticleAdditiveColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleAdditiveColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleAdditiveColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7625/*"Hidden/Particle/Additive_ColorMatrix"*/, 0);
  *p_hiddenParticleAdditiveColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticleAdditiveColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticleAdditiveColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleAdditiveShader )
    this->fields._hasLoggedMissingHiddenParticleAdditiveShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticleBaseStencilColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticleBaseStencilColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticleBaseStencilColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F04 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7627/*"Hidden/Particle/Base-Stencil_ColorMatrix"*/);
    byte_5973F04 = 1;
  }
  p_hiddenParticleBaseStencilColorMatrixShader = &this->fields._hiddenParticleBaseStencilColorMatrixShader;
  hiddenParticleBaseStencilColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleBaseStencilColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleBaseStencilColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7627/*"Hidden/Particle/Base-Stencil_ColorMatrix"*/, 0);
  *p_hiddenParticleBaseStencilColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticleBaseStencilColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticleBaseStencilColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleBaseStencilShader )
    this->fields._hasLoggedMissingHiddenParticleBaseStencilShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticleDistortionColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticleDistortionColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F07 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7638/*"Hidden/Particle/distortion_ColorMatrix"*/);
    byte_5973F07 = 1;
  }
  p_hiddenParticleDistortionColorMatrixShader = &this->fields._hiddenParticleDistortionColorMatrixShader;
  hiddenParticleDistortionColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleDistortionColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleDistortionColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7638/*"Hidden/Particle/distortion_ColorMatrix"*/, 0);
  *p_hiddenParticleDistortionColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticleDistortionColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticleDistortionColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleDistortionShader )
    this->fields._hasLoggedMissingHiddenParticleDistortionShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionStencilColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticleDistortionStencilColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticleDistortionStencilColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F08 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7637/*"Hidden/Particle/distortion-Stencil_ColorMatrix"*/);
    byte_5973F08 = 1;
  }
  p_hiddenParticleDistortionStencilColorMatrixShader = &this->fields._hiddenParticleDistortionStencilColorMatrixShader;
  hiddenParticleDistortionStencilColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleDistortionStencilColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleDistortionStencilColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7637/*"Hidden/Particle/distortion-Stencil_ColorMatrix"*/, 0);
  *p_hiddenParticleDistortionStencilColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticleDistortionStencilColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticleDistortionStencilColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleDistortionStencilShader )
    this->fields._hasLoggedMissingHiddenParticleDistortionStencilShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticleMultiplyAddColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticleMultiplyAddColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticleMultiplyAddColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F09 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7632/*"Hidden/Particle/MultiplyAdd_ColorMatrix"*/);
    byte_5973F09 = 1;
  }
  p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleMultiplyAddColorMatrixShader;
  hiddenParticleMultiplyAddColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleMultiplyAddColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleMultiplyAddColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7632/*"Hidden/Particle/MultiplyAdd_ColorMatrix"*/, 0);
  *p_hiddenParticleMultiplyAddColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticleMultiplyAddColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticleMultiplyAddColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleMultiplyAddShader )
    this->fields._hasLoggedMissingHiddenParticleMultiplyAddShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticlePlusOneColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticlePlusOneColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticlePlusOneColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F06 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_7624/*"Hidden/Particle/Additive+1_ColorMatrix"*/);
    byte_5973F06 = 1;
  }
  p_hiddenParticlePlusOneColorMatrixShader = &this->fields._hiddenParticlePlusOneColorMatrixShader;
  hiddenParticlePlusOneColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticlePlusOneColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(hiddenParticlePlusOneColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7624/*"Hidden/Particle/Additive+1_ColorMatrix"*/, 0);
  *p_hiddenParticlePlusOneColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._hiddenParticlePlusOneColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_hiddenParticlePlusOneColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticlePlusOneShader )
    this->fields._hasLoggedMissingHiddenParticlePlusOneShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureShader(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_colorMatrixShader; // x20
  UnityEngine_Object_o *colorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973EF7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6677/*"FGO/fgo_ch_ColorMatrix"*/);
    byte_5973EF7 = 1;
  }
  p_colorMatrixShader = &this->fields._colorMatrixShader;
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(colorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_6677/*"FGO/fgo_ch_ColorMatrix"*/, 0);
  *p_colorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._colorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_colorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingShader )
    this->fields._hasLoggedMissingShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureSingleFlatColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_singleFlatColorMatrixShader; // x20
  UnityEngine_Object_o *singleFlatColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F03 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6678/*"FGO/fgo_ch_SingleFlat_ColorMatrix"*/);
    byte_5973F03 = 1;
  }
  p_singleFlatColorMatrixShader = &this->fields._singleFlatColorMatrixShader;
  singleFlatColorMatrixShader = (UnityEngine_Object_o *)this->fields._singleFlatColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(singleFlatColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_6678/*"FGO/fgo_ch_SingleFlat_ColorMatrix"*/, 0);
  *p_singleFlatColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._singleFlatColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_singleFlatColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingSingleFlatShader )
    this->fields._hasLoggedMissingSingleFlatShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureUnlitTransparentColoredColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_unlitTransparentColoredColorMatrixShader; // x20
  UnityEngine_Object_o *unlitTransparentColoredColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x20
  bool result; // w0

  if ( (byte_5973F0A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15734/*"Unlit/Transparent Colored ColorMatrix"*/);
    byte_5973F0A = 1;
  }
  p_unlitTransparentColoredColorMatrixShader = &this->fields._unlitTransparentColoredColorMatrixShader;
  unlitTransparentColoredColorMatrixShader = (UnityEngine_Object_o *)this->fields._unlitTransparentColoredColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(unlitTransparentColoredColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15734/*"Unlit/Transparent Colored ColorMatrix"*/, 0);
  *p_unlitTransparentColoredColorMatrixShader = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._unlitTransparentColoredColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = (UnityEngine_Object_o *)*p_unlitTransparentColoredColorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Equality(v13, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingUnlitTransparentColoredShader )
    this->fields._hasLoggedMissingUnlitTransparentColoredShader = 1;
  return result;
}


UnityEngine_Transform_o *BattleCharaColorMatrixComponent__GetMonitorRoot(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *monitorRoot; // x20

  if ( (byte_5973EE8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EE8 = 1;
  }
  monitorRoot = (UnityEngine_Object_o *)this->fields._monitorRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(monitorRoot, 0, 0) )
    return this->fields._monitorRoot;
  else
    return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Shader_o *BattleCharaColorMatrixComponent__GetReplacementShader(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Renderer_o *renderer,
        const MethodInfo *method)
{
  __int64 v6; // x1
  bool v7; // w8
  UnityEngine_Shader_o *result; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *shader; // x21
  bool v11; // w8
  System_String_o *name; // x20
  uint32_t v13; // w0
  const MethodInfo *v14; // x1
  __int64 *v15; // x8
  __int64 *v16; // x8
  __int64 *v17; // x8
  UnityEngine_Shader_o **p_hiddenParticleMultiplyAddColorMatrixShader; // x8
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_5973EF8 & 1) == 0 )
  {
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15733/*"Unlit/Transparent Colored (NoCull)"*/);
    sub_2213A60(&StringLiteral_7636/*"Hidden/Particle/distortion-Stencil"*/);
    sub_2213A60(&StringLiteral_9504/*"Mobile/Particles/Alpha Blended+1"*/);
    sub_2213A60(&StringLiteral_9502/*"Mobile/Particles/Additive"*/);
    sub_2213A60(&StringLiteral_7634/*"Hidden/Particle/distortion"*/);
    sub_2213A60(&StringLiteral_6685/*"FGO_Battle/Particle/Base"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_8751/*"Legacy Shaders/Particles/Additive (Soft)"*/);
    sub_2213A60(&StringLiteral_9503/*"Mobile/Particles/Additive (SoftClip)"*/);
    sub_2213A60(&StringLiteral_5096/*"Custom/SoftEdgeUnlitCutZ"*/);
    sub_2213A60(&StringLiteral_7626/*"Hidden/Particle/Base-Stencil"*/);
    sub_2213A60(&StringLiteral_7628/*"Hidden/Particle/MultiplyAdd"*/);
    sub_2213A60(&StringLiteral_10999/*"Particles/Additive+1"*/);
    sub_2213A60(&StringLiteral_8750/*"Legacy Shaders/Particles/Additive"*/);
    byte_5973EF8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, material);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  result = 0;
  if ( !v7 )
  {
    if ( !material )
      goto LABEL_92;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v11 = UnityEngine_Object__op_Equality(shader, 0, 0);
    result = 0;
    if ( !v11 )
    {
      result = UnityEngine_Material__get_shader(material, 0);
      if ( result )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)result, 0);
        v13 = PrivateImplementationDetails___ComputeStringHash(name, 0);
        if ( v13 > 0x95199268 )
        {
          if ( v13 <= 0xB8B0E79D )
          {
            switch ( v13 )
            {
              case 0xA5B47E27:
                v16 = &StringLiteral_6685/*"FGO_Battle/Particle/Base"*/;
                break;
              case 0xA8F41698:
                if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_7628/*"Hidden/Particle/MultiplyAdd"*/, 0) )
                  goto LABEL_61;
                if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticleMultiplyAddColorMatrixShader(this, v14) )
                {
                  if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticleAdditiveColorMatrixShader(this, v19) )
                    goto LABEL_89;
                  goto LABEL_75;
                }
                p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleMultiplyAddColorMatrixShader;
                return *p_hiddenParticleMultiplyAddColorMatrixShader;
              case 0xB8B0E79D:
                v16 = &StringLiteral_9503/*"Mobile/Particles/Additive (SoftClip)"*/;
                break;
              default:
                goto LABEL_61;
            }
            goto LABEL_46;
          }
          if ( v13 > 0xD24D125E )
          {
            if ( v13 == -603444049 )
            {
              if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_7636/*"Hidden/Particle/distortion-Stencil"*/, 0) )
              {
                if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionStencilColorMatrixShader(this, v14) )
                {
                  p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleDistortionStencilColorMatrixShader;
                  return *p_hiddenParticleMultiplyAddColorMatrixShader;
                }
                return 0;
              }
              goto LABEL_61;
            }
            if ( v13 != -546393826 || !System_String__op_Equality(name, (System_String_o *)StringLiteral_7634/*"Hidden/Particle/distortion"*/, 0) )
              goto LABEL_61;
            if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionColorMatrixShader(this, v14) )
              goto LABEL_89;
            p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleDistortionColorMatrixShader;
            return *p_hiddenParticleMultiplyAddColorMatrixShader;
          }
          if ( v13 == -1030043024 )
          {
            v15 = &StringLiteral_15732/*"Unlit/Transparent Colored"*/;
LABEL_53:
            if ( System_String__op_Equality(name, (System_String_o *)*v15, 0) )
            {
              if ( BattleCharaColorMatrixComponent__EnsureUnlitTransparentColoredColorMatrixShader(this, v14) )
              {
                p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._unlitTransparentColoredColorMatrixShader;
                return *p_hiddenParticleMultiplyAddColorMatrixShader;
              }
LABEL_89:
              p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._colorMatrixShader;
              return *p_hiddenParticleMultiplyAddColorMatrixShader;
            }
            goto LABEL_61;
          }
          if ( v13 == -766700962 )
          {
            v17 = &StringLiteral_9504/*"Mobile/Particles/Alpha Blended+1"*/;
            goto LABEL_49;
          }
        }
        else
        {
          if ( v13 <= 0x38C86356 )
          {
            if ( v13 != 158589216 )
            {
              if ( v13 != 518096073 )
              {
                if ( v13 == 952656726 )
                {
                  v15 = &StringLiteral_15733/*"Unlit/Transparent Colored (NoCull)"*/;
                  goto LABEL_53;
                }
                goto LABEL_61;
              }
              if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_7626/*"Hidden/Particle/Base-Stencil"*/, 0) )
                goto LABEL_61;
              if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticleBaseStencilColorMatrixShader(this, v14) )
                return 0;
              p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleBaseStencilColorMatrixShader;
              return *p_hiddenParticleMultiplyAddColorMatrixShader;
            }
            v16 = &StringLiteral_9502/*"Mobile/Particles/Additive"*/;
LABEL_46:
            if ( System_String__op_Equality(name, (System_String_o *)*v16, 0) )
              goto LABEL_79;
            goto LABEL_61;
          }
          if ( v13 <= 0x3FF88410 )
          {
            if ( v13 != 973735189 )
            {
              if ( v13 != 1073251344 )
                goto LABEL_61;
              v16 = &StringLiteral_8751/*"Legacy Shaders/Particles/Additive (Soft)"*/;
              goto LABEL_46;
            }
            v17 = &StringLiteral_10999/*"Particles/Additive+1"*/;
LABEL_49:
            if ( !System_String__op_Equality(name, (System_String_o *)*v17, 0) )
              goto LABEL_61;
            if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticlePlusOneColorMatrixShader(this, v14) )
              goto LABEL_89;
            p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticlePlusOneColorMatrixShader;
            return *p_hiddenParticleMultiplyAddColorMatrixShader;
          }
          if ( v13 == -1793486232 )
          {
            if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_5096/*"Custom/SoftEdgeUnlitCutZ"*/, 0) )
              goto LABEL_89;
            goto LABEL_61;
          }
          if ( v13 == 1116299825 )
          {
            v16 = &StringLiteral_8750/*"Legacy Shaders/Particles/Additive"*/;
            goto LABEL_46;
          }
        }
LABEL_61:
        if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v14);
        if ( BattleCharaColorMatrixComponent__IsSingleFlatShader(name, v14) )
        {
          if ( BattleCharaColorMatrixComponent__EnsureSingleFlatColorMatrixShader(this, v20) )
          {
            p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._singleFlatColorMatrixShader;
            return *p_hiddenParticleMultiplyAddColorMatrixShader;
          }
          goto LABEL_89;
        }
        if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v20);
        if ( BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(name, v20) )
        {
          if ( !BattleCharaColorMatrixComponent__EnsureHiddenParticleAdditiveColorMatrixShader(this, v21) )
          {
LABEL_79:
            if ( BattleCharaColorMatrixComponent__EnsureBattleParticleBaseColorMatrixShader(this, v14) )
            {
              p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._battleParticleBaseColorMatrixShader;
              return *p_hiddenParticleMultiplyAddColorMatrixShader;
            }
            goto LABEL_89;
          }
LABEL_75:
          p_hiddenParticleMultiplyAddColorMatrixShader = &this->fields._hiddenParticleAdditiveColorMatrixShader;
          return *p_hiddenParticleMultiplyAddColorMatrixShader;
        }
        if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v21);
        if ( !BattleCharaColorMatrixComponent__IsFgoEfTex0MulVcol0ParticleShader(name, v21) )
        {
          if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v22);
          if ( !BattleCharaColorMatrixComponent__IsParticleShader(name, v22) )
          {
            if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v14);
            if ( !BattleCharaColorMatrixComponent__IsUnsupportedEffectShader(name, v14) )
            {
              if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, v23);
              BattleCharaColorMatrixComponent__IsCharacterShader(name, v23);
            }
            goto LABEL_89;
          }
          goto LABEL_79;
        }
        if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleAdditiveColorMatrixShader(this, v22) )
          goto LABEL_75;
        return 0;
      }
LABEL_92:
      sub_2213CDC(result, v6);
    }
  }
  return result;
}


// attributes: thunk
void BattleCharaColorMatrixComponent__Initialize(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  BattleCharaColorMatrixComponent__EnsureShader(this, method);
}


void BattleCharaColorMatrixComponent__Initialize_54481704(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Shader_o *colorMatrixShader,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields._colorMatrixShader = colorMatrixShader;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._colorMatrixShader,
    (int32_t)colorMatrixShader,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleCharaColorMatrixComponent__EnsureShader(this, v9);
}


bool BattleCharaColorMatrixComponent__IsCharacterShader(System_String_o *shaderName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_5973EFA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6688/*"FGO_CH/"*/);
    sub_2213A60(&StringLiteral_6676/*"FGO/fgo_ch"*/);
    byte_5973EFA = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_2213CDC(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6688/*"FGO_CH/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6676/*"FGO/fgo_ch"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(
        System_String_o *shaderName,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_5973EFC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1134/*"/Additive"*/);
    sub_2213A60(&StringLiteral_6681/*"FGO_BG_Particles/"*/);
    byte_5973EFC = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_2213CDC(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6681/*"FGO_BG_Particles/"*/, 0)
      && System_String__Contains(shaderName, (System_String_o *)StringLiteral_1134/*"/Additive"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsFgoEfTex0MulVcol0ParticleShader(
        System_String_o *shaderName,
        const MethodInfo *method)
{
  if ( (byte_5973EFD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6695/*"FGO_EF_Particles/tex0_mul_vcol0/Additive"*/);
    sub_2213A60(&StringLiteral_6696/*"FGO_EF_Particles/tex0_mul_vcol0/AlphaBlend"*/);
    byte_5973EFD = 1;
  }
  if ( System_String__IsNullOrEmpty(shaderName, 0) )
    return 0;
  if ( System_String__op_Equality(shaderName, (System_String_o *)StringLiteral_6696/*"FGO_EF_Particles/tex0_mul_vcol0/AlphaBlend"*/, 0) )
    return 1;
  return System_String__op_Equality(shaderName, (System_String_o *)StringLiteral_6695/*"FGO_EF_Particles/tex0_mul_vcol0/Additive"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsMultiTextureEnabled(UnityEngine_Material_o *material, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_5973EF6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17040/*"_USE_MULTI_TEXTURE"*/);
    sub_2213A60(&StringLiteral_17056/*"_Use_Multi_Texture"*/);
    byte_5973EF6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  if ( v3 )
    return 0;
  if ( !material )
    sub_2213CDC(v3, v4);
  if ( UnityEngine_Material__IsKeywordEnabled(material, (System_String_o *)StringLiteral_17040/*"_USE_MULTI_TEXTURE"*/, 0) )
    return 1;
  if ( !UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)StringLiteral_17056/*"_Use_Multi_Texture"*/, 0) )
    return 0;
  return UnityEngine_Material__GetFloat(material, (System_String_o *)StringLiteral_17056/*"_Use_Multi_Texture"*/, 0) > 0.0;
}


bool BattleCharaColorMatrixComponent__IsParticleShader(System_String_o *shaderName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_5973EFB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7623/*"Hidden/Particle/"*/);
    sub_2213A60(&StringLiteral_10998/*"Particles/"*/);
    sub_2213A60(&StringLiteral_6694/*"FGO_EF_Particles/"*/);
    sub_2213A60(&StringLiteral_9501/*"Mobile/Particles/"*/);
    sub_2213A60(&StringLiteral_6681/*"FGO_BG_Particles/"*/);
    sub_2213A60(&StringLiteral_6684/*"FGO_Battle/Particle/"*/);
    sub_2213A60(&StringLiteral_8749/*"Legacy Shaders/Particles/"*/);
    byte_5973EFB = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_2213CDC(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6684/*"FGO_Battle/Particle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6681/*"FGO_BG_Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6694/*"FGO_EF_Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7623/*"Hidden/Particle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_9501/*"Mobile/Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_8749/*"Legacy Shaders/Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_10998/*"Particles/"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsSingleFlatShader(System_String_o *shaderName, const MethodInfo *method)
{
  if ( (byte_5973EF9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6692/*"FGO_CH/SingleFlat"*/);
    sub_2213A60(&StringLiteral_6693/*"FGO_CH/SingleFlat1Pass"*/);
    byte_5973EF9 = 1;
  }
  if ( System_String__IsNullOrEmpty(shaderName, 0) )
    return 0;
  if ( System_String__op_Equality(shaderName, (System_String_o *)StringLiteral_6692/*"FGO_CH/SingleFlat"*/, 0) )
    return 1;
  return System_String__op_Equality(shaderName, (System_String_o *)StringLiteral_6693/*"FGO_CH/SingleFlat1Pass"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsUnsupportedEffectShader(System_String_o *shaderName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_5973EFE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6697/*"FGO_Noble/"*/);
    sub_2213A60(&StringLiteral_7617/*"Hidden/Ken/"*/);
    sub_2213A60(&StringLiteral_7622/*"Hidden/Noble/"*/);
    sub_2213A60(&StringLiteral_6682/*"FGO_Battle/"*/);
    byte_5973EFE = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_2213CDC(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6682/*"FGO_Battle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6697/*"FGO_Noble/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7617/*"Hidden/Ken/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7622/*"Hidden/Noble/"*/, 0);
}


void BattleCharaColorMatrixComponent__LateUpdate(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  if ( this->fields._isApplied )
    BattleCharaColorMatrixComponent__ApplyParticleSystemStates(this, method);
}


// attributes: thunk
void BattleCharaColorMatrixComponent__OnDestroy(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  BattleCharaColorMatrixComponent__Restore(this, method);
}


void BattleCharaColorMatrixComponent__PauseParticleSystems(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_array *renderers,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v7; // x22
  UnityEngine_Component_o *v8; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  __int64 v12; // x1
  Il2CppObject *Component_object; // x23
  const MethodInfo *v14; // x4
  __int64 v15; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_HashSet_Enumerator_T__o *v16; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_HashSet_Enumerator_T__o v17; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5973EEB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_5973EEB = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( renderers )
  {
    v7 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v7,
      (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    max_length = renderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_2213CE4(v8);
        v8 = (UnityEngine_Component_o *)renderers->m_Items[v11];
        if ( v8 && (UnityEngine_ParticleSystemRenderer_c *)v8->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               v8,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
          v8 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
          if ( ((unsigned __int8)v8 & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_22;
            v8 = (UnityEngine_Component_o *)System_Collections_Generic_HashSet_object___Add(
                                              v7,
                                              Component_object,
                                              (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
          }
        }
        LODWORD(max_length) = renderers->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
    }
    if ( !v7 )
LABEL_22:
      sub_2213CDC(v8, v9);
    System_Collections_Generic_HashSet_object___GetEnumerator(
      &v17,
      v7,
      (const MethodInfo_42BAE44 *)Method_System_Collections_Generic_HashSet_ParticleSystem__GetEnumerator__);
    v15 = 0;
    v16 = &v17;
    while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FB544 *)Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__MoveNext__) )
      BattleCharaColorMatrixComponent__RegisterParticleSystemState(
        this,
        (UnityEngine_ParticleSystem_o *)v17.fields._current,
        1,
        data,
        v14);
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FB540 *)Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__Dispose__);
  }
}


void BattleCharaColorMatrixComponent__RegisterEffectSheetAnimationState(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *trackedEffectSheetAnimations; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *effectSheetAnimationStates; // x21
  __int64 v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_Vector2_o v30; // x8
  UnityEngine_Vector2_o v31; // x10
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  UnityEngine_Vector2_o zeroVector; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o scale; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973EEC & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_FGOEffectSheetAnimation___);
    sub_2213A60(&BattleCharaColorMatrixComponent_EffectSheetAnimationState_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EEC = 1;
  }
  zeroVector = 0;
  scale = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, renderer);
  trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0);
  if ( ((unsigned __int8)trackedEffectSheetAnimations & 1) == 0 )
  {
    if ( !renderer )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)renderer,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_FGOEffectSheetAnimation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      trackedEffectSheetAnimations = this->fields._trackedEffectSheetAnimations;
      if ( trackedEffectSheetAnimations )
      {
        trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)System_Collections_Generic_HashSet_object___Add((System_Collections_Generic_HashSet_object__o *)trackedEffectSheetAnimations, Component_object, (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Add__);
        if ( ((unsigned __int8)trackedEffectSheetAnimations & 1) == 0 )
          return;
        if ( !byte_596F578 )
        {
          trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
          byte_596F578 = 1;
        }
        static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
        scale = static_fields->oneVector;
        if ( !byte_59699C0 )
        {
          trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
          byte_59699C0 = 1;
          static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
        }
        zeroVector = static_fields->zeroVector;
        if ( Component_object )
        {
          FGOEffectSheetAnimation__TryGetMainTexTiling(
            (FGOEffectSheetAnimation_o *)Component_object,
            &scale,
            &zeroVector,
            0);
          effectSheetAnimationStates = (System_Collections_Generic_List_object__o *)this->fields._effectSheetAnimationStates;
          v11 = sub_2213CCC(BattleCharaColorMatrixComponent_EffectSheetAnimationState_TypeInfo);
          BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor(
            (BattleCharaColorMatrixComponent_EffectSheetAnimationState_o *)v11,
            0);
          if ( v11 )
          {
            *(_QWORD *)(v11 + 16) = Component_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v11 + 16),
              (int32_t)Component_object,
              v12,
              v13,
              v14,
              v15,
              v16,
              v17);
            *(_QWORD *)(v11 + 24) = renderer;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)renderer, v18, v19, v20, v21, v22, v23);
            trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0);
            v31 = zeroVector;
            v30 = scale;
            *(_BYTE *)(v11 + 32) = (unsigned __int8)trackedEffectSheetAnimations & 1;
            *(UnityEngine_Vector2_o *)(v11 + 36) = v30;
            *(UnityEngine_Vector2_o *)(v11 + 44) = v31;
            if ( effectSheetAnimationStates )
            {
              items = effectSheetAnimationStates->fields._items;
              v33 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Add__;
              ++effectSheetAnimationStates->fields._version;
              if ( items )
              {
                size = effectSheetAnimationStates->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    effectSheetAnimationStates,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = &items->obj.klass + size;
                  effectSheetAnimationStates->fields._size = size + 1;
                  v35[4] = (Il2CppClass *)v11;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 4), v11, v24, v25, v26, v27, v28, v29);
                }
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
                return;
              }
            }
          }
        }
      }
LABEL_25:
      sub_2213CDC(trackedEffectSheetAnimations, v6);
    }
  }
}


void BattleCharaColorMatrixComponent__RegisterParticleSystemState(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_ParticleSystem_o *particleSystem,
        bool pausePlaying,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_Collections_Generic_HashSet_ParticleSystem__o *trackedParticleSystems; // x0
  System_Collections_Generic_List_object__o *particleSystemStates; // x22
  __int64 v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  BattleCharaColorMatrixComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  UnityEngine_ParticleSystem_MainModule_o v33; // x0
  float duration; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973EEE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&BattleCharaColorMatrixComponent_ParticleSystemState_TypeInfo);
    byte_5973EEE = 1;
  }
  m_ParticleSystem = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, particleSystem);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)particleSystem, 0, 0) )
  {
    trackedParticleSystems = this->fields._trackedParticleSystems;
    if ( !trackedParticleSystems )
      goto LABEL_26;
    if ( !System_Collections_Generic_HashSet_object___Add(
            (System_Collections_Generic_HashSet_object__o *)trackedParticleSystems,
            (Il2CppObject *)particleSystem,
            (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Add__) )
      return;
    particleSystemStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
    v12 = sub_2213CCC(BattleCharaColorMatrixComponent_ParticleSystemState_TypeInfo);
    BattleCharaColorMatrixComponent_ParticleSystemState___ctor(
      (BattleCharaColorMatrixComponent_ParticleSystemState_o *)v12,
      0);
    if ( !v12 )
      goto LABEL_26;
    *(_QWORD *)(v12 + 16) = particleSystem;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)particleSystem, v13, v14, v15, v16, v17, v18);
    if ( !particleSystem )
      goto LABEL_26;
    *(_BYTE *)(v12 + 24) = UnityEngine_ParticleSystem__get_isPlaying(particleSystem, 0);
    *(_BYTE *)(v12 + 25) = UnityEngine_ParticleSystem__get_isPaused(particleSystem, 0);
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main(particleSystem, 0).fields.m_ParticleSystem;
    v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    trackedParticleSystems = (struct System_Collections_Generic_HashSet_ParticleSystem__o *)UnityEngine_ParticleSystem_MainModule__get_simulationSpace(
                                                                                              v19,
                                                                                              0);
    *(_DWORD *)(v12 + 28) = (_DWORD)trackedParticleSystems;
    if ( !particleSystemStates )
      goto LABEL_26;
    items = particleSystemStates->fields._items;
    v27 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Add__;
    ++particleSystemStates->fields._version;
    if ( !items )
      goto LABEL_26;
    size = particleSystemStates->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        particleSystemStates,
        (Il2CppObject *)v12,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      if ( !pausePlaying )
        return;
    }
    else
    {
      v29 = &items->obj.klass + size;
      particleSystemStates->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v12;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), v12, v20, v21, v22, v23, v24, v25);
      if ( !pausePlaying )
        return;
    }
    BattleCharaColorMatrixComponent__ConvertSimulationSpaceToLocal(v30, particleSystem, v31);
    if ( UnityEngine_ParticleSystem__get_isPlaying(particleSystem, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      trackedParticleSystems = (struct System_Collections_Generic_HashSet_ParticleSystem__o *)UnityEngine_Object__op_Inequality(
                                                                                                (UnityEngine_Object_o *)data,
                                                                                                0,
                                                                                                0);
      if ( ((unsigned __int8)trackedParticleSystems & 1) == 0 )
      {
LABEL_22:
        if ( UnityEngine_ParticleSystem__get_time(particleSystem, 0) > 0.0 )
        {
LABEL_24:
          UnityEngine_ParticleSystem__Pause(particleSystem, 0, 0);
          return;
        }
LABEL_23:
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(particleSystem, 0).fields.m_ParticleSystem;
        v33.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v33, 0);
        UnityEngine_ParticleSystem__Simulate_83836764(particleSystem, duration, 0, 1, 0);
        goto LABEL_24;
      }
      if ( data )
      {
        if ( data->fields._IsLoadingSaveData_k__BackingField )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_26:
      sub_2213CDC(trackedParticleSystems, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaColorMatrixComponent__ResetSimulationSpace(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_ParticleSystem_o *ps,
        BattleCharaColorMatrixComponent_ParticleSystemState_o *state,
        const MethodInfo *method)
{
  int32_t SimulationSpace; // w8
  UnityEngine_ParticleSystem_MainModule_o v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *customSimulationSpace; // x21
  UnityEngine_ParticleSystem_MainModule_o v10; // x0
  UnityEngine_ParticleSystem_MainModule_o v11; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float w; // s7
  float v23; // s4
  float v24; // s5
  float v25; // s6
  int32_t v26; // w1
  UnityEngine_ParticleSystem_MainModule_o v27; // x0
  UnityEngine_ParticleSystem_MainModule_o v28; // x0
  unsigned int particleCount; // w0
  __int64 v30; // x20
  int32_t v31; // w21
  unsigned __int64 v32; // x23
  UnityEngine_ParticleSystem_Particle_o *v33; // x22
  UnityEngine_Vector3_o v34; // [xsp+0h] [xbp-1E0h]
  UnityEngine_Matrix4x4_o v35; // [xsp+10h] [xbp-1D0h] BYREF
  UnityEngine_Matrix4x4_o v36; // [xsp+50h] [xbp-190h] BYREF
  UnityEngine_Matrix4x4_o v37; // [xsp+98h] [xbp-148h] BYREF
  UnityEngine_Matrix4x4_o v38; // [xsp+D8h] [xbp-108h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+118h] [xbp-C8h] BYREF
  UnityEngine_Matrix4x4_o v40; // [xsp+120h] [xbp-C0h] BYREF
  BattleCharaColorMatrixComponent_o *v41; // [xsp+168h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o velocity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_5973EF0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleCharaColorMatrixComponent_o *)sub_2213A60(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_5973EF0 = 1;
  }
  v41 = 0;
  m_ParticleSystem = 0;
  memset(&v40, 0, sizeof(v40));
  if ( !ps )
    goto LABEL_33;
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
  v41 = this;
  if ( !state )
    goto LABEL_33;
  SimulationSpace = state->fields.SimulationSpace;
  if ( !SimulationSpace )
    return;
  if ( SimulationSpace == 2 )
  {
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
    v7.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    customSimulationSpace = (UnityEngine_Object_o *)UnityEngine_ParticleSystem_MainModule__get_customSimulationSpace(
                                                      v7,
                                                      0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(customSimulationSpace, 0, 0) )
    {
      v10.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v41;
      UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v10, state->fields.SimulationSpace, 0);
      return;
    }
  }
  v11.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v41;
  if ( UnityEngine_ParticleSystem_MainModule__get_scalingMode(v11, 0) == 2 )
  {
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->oneVector.fields.x;
    y = static_fields->oneVector.fields.y;
    z = static_fields->oneVector.fields.z;
  }
  else
  {
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ps, 0);
    if ( !this )
      goto LABEL_33;
    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
    x = localScale.fields.x;
    y = localScale.fields.y;
    z = localScale.fields.z;
  }
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ps, 0);
  if ( !this
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0),
        v16 = position.fields.x,
        v17 = position.fields.y,
        v18 = position.fields.z,
        (this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)ps,
                                                       0)) == 0) )
  {
LABEL_33:
    sub_2213CDC(this, ps);
  }
  rotation = UnityEngine_Transform__get_rotation((UnityEngine_Transform_o *)this, 0);
  v19 = rotation.fields.x;
  v20 = rotation.fields.y;
  v21 = rotation.fields.z;
  w = rotation.fields.w;
  rotation.fields.x = v16;
  rotation.fields.y = v17;
  *(_QWORD *)&v34.fields.y = __PAIR64__(LODWORD(z), LODWORD(y));
  rotation.fields.z = v18;
  v34.fields.x = x;
  rotation.fields.w = v19;
  v23 = v20;
  v24 = v21;
  v25 = w;
  UnityEngine_Matrix4x4__TRS(
    &v40,
    *(UnityEngine_Vector3_o *)&rotation.fields.x,
    *(UnityEngine_Quaternion_o *)&rotation.fields.w,
    v34,
    0);
  v26 = state->fields.SimulationSpace;
  if ( v26 == 2 )
  {
    m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
    v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystem_MainModule__get_customSimulationSpace(v27, 0);
    if ( !this )
      goto LABEL_33;
    UnityEngine_Transform__get_worldToLocalMatrix(&v38, (UnityEngine_Transform_o *)this, 0);
    v35 = v40;
    v36 = v38;
    UnityEngine_Matrix4x4__op_Multiply(&v37, &v36, &v35, 0);
    v26 = state->fields.SimulationSpace;
    v40 = v37;
  }
  v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v41;
  UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v28, v26, 0);
  particleCount = UnityEngine_ParticleSystem__get_particleCount(ps, 0);
  v30 = sub_2213B20(UnityEngine_ParticleSystem_Particle___TypeInfo, particleCount);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystem__GetParticles_83835248(
                                                ps,
                                                (UnityEngine_ParticleSystem_Particle_array *)v30,
                                                0);
  v31 = (int)this;
  if ( (int)this >= 1 )
  {
    if ( v30 )
    {
      v32 = 0;
      v33 = (UnityEngine_ParticleSystem_Particle_o *)(v30 + 32);
      do
      {
        if ( v32 >= *(unsigned int *)(v30 + 24)
          || (v44 = UnityEngine_ParticleSystem_Particle__get_position(v33, 0),
              v45 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&v40, v44, 0),
              v32 >= *(unsigned int *)(v30 + 24))
          || (UnityEngine_ParticleSystem_Particle__set_position(v33, v45, 0), v32 >= *(unsigned int *)(v30 + 24))
          || (velocity = UnityEngine_ParticleSystem_Particle__get_velocity(v33, 0),
              v47 = UnityEngine_Matrix4x4__MultiplyVector(&v40, velocity, 0),
              v32 >= *(unsigned int *)(v30 + 24)) )
        {
          sub_2213CE4(this);
        }
        UnityEngine_ParticleSystem_Particle__set_velocity(v33, v47, 0);
        ++v32;
        v33 = (UnityEngine_ParticleSystem_Particle_o *)((char *)v33 + 132);
      }
      while ( v31 != v32 );
      goto LABEL_30;
    }
    goto LABEL_33;
  }
LABEL_30:
  UnityEngine_ParticleSystem__SetParticles_83834724(ps, (UnityEngine_ParticleSystem_Particle_array *)v30, v31, 0);
}


void BattleCharaColorMatrixComponent__Restore(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rendererMaterialStates; // x0
  int32_t v4; // w20
  Il2CppObject *syncRoot; // x8
  System_Collections_Generic_List_object__o *v6; // x21
  unsigned __int64 v7; // x25
  unsigned __int64 monitor_low; // x9
  UnityEngine_Object_o *v9; // x22
  System_Object_array *v10; // x0
  UnityEngine_Object_o *monitor; // x23
  UnityEngine_Object_o *v12; // x23
  UnityEngine_Object_o *v13; // x22
  UnityEngine_ParticleSystemRenderer_o *v14; // x22
  System_Collections_Generic_List_object__c *klass; // x8
  unsigned __int64 v16; // x22
  unsigned __int64 namespaze_low; // x9
  int32_t v18; // w20
  BattleCharaColorMatrixComponent_ParticleSystemState_o *v19; // x21
  UnityEngine_Object_o *items; // x22
  _BOOL8 isPaused; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w20
  System_Collections_Generic_List_object__o *v24; // x21
  UnityEngine_Object_o *v25; // x22
  int32_t v26; // w20
  System_Collections_Generic_List_object__o *v27; // x21
  UnityEngine_Object_o *v28; // x22
  int32_t v29; // w20
  System_Collections_Generic_List_object__o *v30; // x21
  UnityEngine_Object_o *v31; // x22
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *v32; // x8
  int32_t size; // w2
  int v34; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__o *particleSystemStates; // x8
  int32_t v36; // w2
  int v37; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__o *rendererStates; // x8
  int32_t v39; // w2
  int v40; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__o *weaponTrailStates; // x8
  int32_t v42; // w2
  int v43; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__o *effectSheetAnimationStates; // x8
  int32_t v45; // w2
  int v46; // w9
  struct UnityEngine_Transform_o **p_monitorRoot; // x19
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7

  if ( (byte_5973EF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_Material___);
    sub_2213A60(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_Renderer__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_5973EF2 = 1;
  }
  if ( this->fields._isApplied )
  {
    rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
    if ( !rendererMaterialStates )
      goto LABEL_98;
    v4 = 0;
    while ( 1 )
    {
      if ( v4 >= rendererMaterialStates->fields._size )
      {
        rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
        if ( rendererMaterialStates )
        {
          v18 = 0;
          while ( v18 < rendererMaterialStates->fields._size )
          {
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                    rendererMaterialStates,
                                                                                    v18,
                                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
            if ( !rendererMaterialStates )
              goto LABEL_98;
            v19 = (BattleCharaColorMatrixComponent_ParticleSystemState_o *)rendererMaterialStates;
            items = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            isPaused = UnityEngine_Object__op_Equality(items, 0, 0);
            if ( !isPaused )
            {
              if ( v19->fields.IsPaused )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields.ParticleSystem;
                if ( !rendererMaterialStates )
                  goto LABEL_98;
                isPaused = UnityEngine_ParticleSystem__get_isPaused(
                             (UnityEngine_ParticleSystem_o *)rendererMaterialStates,
                             0);
                if ( !isPaused )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields.ParticleSystem;
                  if ( !rendererMaterialStates )
                    goto LABEL_98;
                  UnityEngine_ParticleSystem__Pause((UnityEngine_ParticleSystem_o *)rendererMaterialStates, 0, 0);
                }
              }
              else if ( v19->fields.IsPlaying )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields.ParticleSystem;
                if ( !rendererMaterialStates )
                  goto LABEL_98;
                isPaused = UnityEngine_ParticleSystem__get_isPaused(
                             (UnityEngine_ParticleSystem_o *)rendererMaterialStates,
                             0);
                if ( isPaused )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields.ParticleSystem;
                  if ( !rendererMaterialStates )
                    goto LABEL_98;
                  UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)rendererMaterialStates, 0, 0);
                }
              }
              BattleCharaColorMatrixComponent__ResetSimulationSpace(
                (BattleCharaColorMatrixComponent_o *)isPaused,
                v19->fields.ParticleSystem,
                v19,
                v22);
            }
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
            ++v18;
            if ( !rendererMaterialStates )
              goto LABEL_98;
          }
          rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
          if ( rendererMaterialStates )
          {
            v23 = 0;
            while ( v23 < rendererMaterialStates->fields._size )
            {
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      rendererMaterialStates,
                                                                                      v23,
                                                                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Item__);
              if ( !rendererMaterialStates )
                goto LABEL_98;
              v24 = rendererMaterialStates;
              v25 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
              if ( !UnityEngine_Object__op_Equality(v25, 0, 0) )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v24->fields._items;
                if ( !rendererMaterialStates )
                  goto LABEL_98;
                UnityEngine_Renderer__set_enabled(
                  (UnityEngine_Renderer_o *)rendererMaterialStates,
                  v24->fields._size,
                  0);
              }
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
              ++v23;
              if ( !rendererMaterialStates )
                goto LABEL_98;
            }
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._weaponTrailStates;
            if ( rendererMaterialStates )
            {
              v26 = 0;
              while ( v26 < rendererMaterialStates->fields._size )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        rendererMaterialStates,
                                                                                        v26,
                                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Item__);
                if ( !rendererMaterialStates )
                  goto LABEL_98;
                v27 = rendererMaterialStates;
                v28 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                if ( !UnityEngine_Object__op_Equality(v28, 0, 0) )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v27->fields._items;
                  if ( !rendererMaterialStates )
                    goto LABEL_98;
                  UnityEngine_Behaviour__set_enabled(
                    (UnityEngine_Behaviour_o *)rendererMaterialStates,
                    v27->fields._size,
                    0);
                }
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._weaponTrailStates;
                ++v26;
                if ( !rendererMaterialStates )
                  goto LABEL_98;
              }
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._effectSheetAnimationStates;
              if ( rendererMaterialStates )
              {
                v29 = 0;
                while ( v29 < rendererMaterialStates->fields._size )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                          rendererMaterialStates,
                                                                                          v29,
                                                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
                  if ( !rendererMaterialStates )
                    goto LABEL_98;
                  v30 = rendererMaterialStates;
                  v31 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
                  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                  if ( !UnityEngine_Object__op_Equality(v31, 0, 0) )
                  {
                    rendererMaterialStates = (System_Collections_Generic_List_object__o *)v30->fields._items;
                    if ( !rendererMaterialStates )
                      goto LABEL_98;
                    UnityEngine_Behaviour__set_enabled(
                      (UnityEngine_Behaviour_o *)rendererMaterialStates,
                      (bool)v30->fields._syncRoot,
                      0);
                  }
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._effectSheetAnimationStates;
                  ++v29;
                  if ( !rendererMaterialStates )
                    goto LABEL_98;
                }
                v32 = this->fields._rendererMaterialStates;
                if ( v32 )
                {
                  size = v32->fields._size;
                  v34 = v32->fields._version + 1;
                  v32->fields._size = 0;
                  v32->fields._version = v34;
                  if ( size >= 1 )
                    System_Array__Clear((System_Array_o *)v32->fields._items, 0, size, 0);
                  particleSystemStates = this->fields._particleSystemStates;
                  if ( particleSystemStates )
                  {
                    v36 = particleSystemStates->fields._size;
                    v37 = particleSystemStates->fields._version + 1;
                    particleSystemStates->fields._size = 0;
                    particleSystemStates->fields._version = v37;
                    if ( v36 >= 1 )
                      System_Array__Clear((System_Array_o *)particleSystemStates->fields._items, 0, v36, 0);
                    rendererStates = this->fields._rendererStates;
                    if ( rendererStates )
                    {
                      v39 = rendererStates->fields._size;
                      v40 = rendererStates->fields._version + 1;
                      rendererStates->fields._size = 0;
                      rendererStates->fields._version = v40;
                      if ( v39 >= 1 )
                        System_Array__Clear((System_Array_o *)rendererStates->fields._items, 0, v39, 0);
                      weaponTrailStates = this->fields._weaponTrailStates;
                      if ( weaponTrailStates )
                      {
                        v42 = weaponTrailStates->fields._size;
                        v43 = weaponTrailStates->fields._version + 1;
                        weaponTrailStates->fields._size = 0;
                        weaponTrailStates->fields._version = v43;
                        if ( v42 >= 1 )
                          System_Array__Clear((System_Array_o *)weaponTrailStates->fields._items, 0, v42, 0);
                        effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
                        if ( effectSheetAnimationStates )
                        {
                          v45 = effectSheetAnimationStates->fields._size;
                          v46 = effectSheetAnimationStates->fields._version + 1;
                          effectSheetAnimationStates->fields._size = 0;
                          effectSheetAnimationStates->fields._version = v46;
                          if ( v45 >= 1 )
                            System_Array__Clear((System_Array_o *)effectSheetAnimationStates->fields._items, 0, v45, 0);
                          rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedRenderers;
                          if ( rendererMaterialStates )
                          {
                            System_Collections_Generic_HashSet_object___Clear(
                              (System_Collections_Generic_HashSet_object__o *)rendererMaterialStates,
                              (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_Renderer__Clear__);
                            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedParticleSystems;
                            if ( rendererMaterialStates )
                            {
                              System_Collections_Generic_HashSet_object___Clear(
                                (System_Collections_Generic_HashSet_object__o *)rendererMaterialStates,
                                (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
                              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedWeaponTrails;
                              if ( rendererMaterialStates )
                              {
                                System_Collections_Generic_HashSet_object___Clear(
                                  (System_Collections_Generic_HashSet_object__o *)rendererMaterialStates,
                                  (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
                                rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedEffectSheetAnimations;
                                if ( rendererMaterialStates )
                                {
                                  System_Collections_Generic_HashSet_object___Clear(
                                    (System_Collections_Generic_HashSet_object__o *)rendererMaterialStates,
                                    (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
                                  this->fields._monitorRoot = 0;
                                  p_monitorRoot = &this->fields._monitorRoot;
                                  sub_2213A04(
                                    (MissionNaviTransitionBoardItem_o *)p_monitorRoot,
                                    0,
                                    v48,
                                    v49,
                                    v50,
                                    v51,
                                    v52,
                                    v53);
                                  *((_BYTE *)p_monitorRoot + 156) = 0;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_98:
        sub_2213CDC(rendererMaterialStates, method);
      }
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              rendererMaterialStates,
                                                                              v4,
                                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
      if ( !rendererMaterialStates )
        goto LABEL_98;
      syncRoot = rendererMaterialStates->fields._syncRoot;
      v6 = rendererMaterialStates;
      if ( syncRoot )
      {
        v7 = 0;
        while ( 1 )
        {
          monitor_low = LODWORD(syncRoot[1].monitor);
          if ( (__int64)v7 >= (int)monitor_low )
            break;
          if ( v7 >= monitor_low )
LABEL_120:
            sub_2213CE4(rendererMaterialStates);
          v9 = (UnityEngine_Object_o *)*((_QWORD *)&syncRoot[2].klass + v7);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
          rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                  v9,
                                                                                  0,
                                                                                  0);
          if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
          {
            v10 = *(System_Object_array **)&v6->fields._size;
            if ( !v10
              || (rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Array__IndexOf_object_(
                                                                                          v10,
                                                                                          (Il2CppObject *)v9,
                                                                                          (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_Material___),
                  ((unsigned int)rendererMaterialStates & 0x80000000) != 0) )
            {
              monitor = (UnityEngine_Object_o *)v6[1].monitor;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                      monitor,
                                                                                      v9,
                                                                                      0);
              if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
              {
                v12 = (UnityEngine_Object_o *)v6[1].fields._items;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                        v12,
                                                                                        v9,
                                                                                        0);
                if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
                {
                  if ( !*(&BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo, method);
                  BattleCharaColorMatrixComponent__DestroyMaterial((UnityEngine_Material_o *)v9, method);
                }
              }
            }
          }
          syncRoot = v6->fields._syncRoot;
          ++v7;
          if ( !syncRoot )
            goto LABEL_98;
        }
      }
      v13 = (UnityEngine_Object_o *)v6->fields._items;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
        break;
LABEL_44:
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
      ++v4;
      if ( !rendererMaterialStates )
        goto LABEL_98;
    }
    v14 = (UnityEngine_ParticleSystemRenderer_o *)v6->fields._items;
    if ( LOBYTE(v6[1].fields._size) )
    {
      if ( !v14 )
        goto LABEL_98;
      if ( v14->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
      {
        UnityEngine_Renderer__set_sharedMaterial(
          (UnityEngine_Renderer_o *)v6->fields._items,
          (UnityEngine_Material_o *)v6[1].monitor,
          0);
        UnityEngine_ParticleSystemRenderer__set_trailMaterial(v14, (UnityEngine_Material_o *)v6[1].fields._items, 0);
        goto LABEL_37;
      }
    }
    else if ( !v14 )
    {
      goto LABEL_98;
    }
    UnityEngine_Renderer__set_sharedMaterials(
      (UnityEngine_Renderer_o *)v6->fields._items,
      *(UnityEngine_Material_array **)&v6->fields._size,
      0);
LABEL_37:
    klass = v6[1].klass;
    if ( klass )
    {
      v16 = 0;
      while ( 1 )
      {
        namespaze_low = LODWORD(klass->_1.namespaze);
        if ( (__int64)v16 >= (int)namespaze_low )
          break;
        if ( v16 >= namespaze_low )
          goto LABEL_120;
        rendererMaterialStates = (System_Collections_Generic_List_object__o *)v6->fields._items;
        if ( rendererMaterialStates )
        {
          UnityEngine_Renderer__SetPropertyBlock_83267612(
            (UnityEngine_Renderer_o *)rendererMaterialStates,
            *((UnityEngine_MaterialPropertyBlock_o **)&klass->_1.byval_arg.data + v16),
            v16,
            0);
          klass = v6[1].klass;
          ++v16;
          if ( klass )
            continue;
        }
        goto LABEL_98;
      }
    }
    goto LABEL_44;
  }
}


void BattleCharaColorMatrixComponent__SetColorMatrix(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        UnityEngine_GameObject_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int128 v19; // q1
  __int128 v20; // q2
  UnityEngine_Matrix4x4_o v21; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_5973EE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EE6 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, colorMatrix);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v9 )
  {
    if ( !actor )
      sub_2213CDC(v9, v10);
    transform = UnityEngine_GameObject__get_transform(actor, 0);
    this->fields._monitorRoot = transform;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._monitorRoot,
      (int32_t)transform,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = *(_OWORD *)&colorMatrix->fields.m01;
  *(_OWORD *)&v21.fields.m00 = *(_OWORD *)&colorMatrix->fields.m00;
  *(_OWORD *)&v21.fields.m01 = v19;
  v20 = *(_OWORD *)&colorMatrix->fields.m03;
  *(_OWORD *)&v21.fields.m02 = *(_OWORD *)&colorMatrix->fields.m02;
  *(_OWORD *)&v21.fields.m03 = v20;
  BattleCharaColorMatrixComponent__SetColorMatrixInternal(this, &v21, matrixBlend, v11);
}


void BattleCharaColorMatrixComponent__SetColorMatrixInternal(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  float v8; // s4
  UnityEngine_Vector4_o Row; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields._colorMatRow0 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 0, 0);
  this->fields._colorMatRow1 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 1, 0);
  this->fields._colorMatRow2 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 2, 0);
  Row = UnityEngine_Matrix4x4__GetRow(colorMatrix, 3, 0);
  v8 = 1.0;
  this->fields._colorMatRow3 = Row;
  if ( matrixBlend <= 1.0 )
    v8 = matrixBlend;
  if ( matrixBlend < 0.0 )
    v8 = 0.0;
  this->fields._matrixBlend = v8;
  BattleCharaColorMatrixComponent__ApplyColorMatrixPropertiesToAppliedMaterials(this, v7);
}


void BattleCharaColorMatrixComponent__SetColorMatrix_54482108(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        const MethodInfo *method)
{
  __int128 v4; // q2
  __int128 v5; // q3
  UnityEngine_Matrix4x4_o v6; // [xsp+0h] [xbp-50h] BYREF

  v4 = *(_OWORD *)&colorMatrix->fields.m01;
  *(_OWORD *)&v6.fields.m00 = *(_OWORD *)&colorMatrix->fields.m00;
  *(_OWORD *)&v6.fields.m01 = v4;
  v5 = *(_OWORD *)&colorMatrix->fields.m03;
  *(_OWORD *)&v6.fields.m02 = *(_OWORD *)&colorMatrix->fields.m02;
  *(_OWORD *)&v6.fields.m03 = v5;
  BattleCharaColorMatrixComponent__SetColorMatrixInternal(this, &v6, matrixBlend, method);
}


void BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
        UnityEngine_Material_o *material,
        System_String_o *propertyName,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5973F01 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F01 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, propertyName);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)material, 0, 0);
  if ( v7 )
  {
    if ( !material )
      sub_2213CDC(v7, v8);
    if ( UnityEngine_Material__HasProperty_83277340(material, propertyName, 0) )
      UnityEngine_Material__SetFloat(material, propertyName, value, 0);
  }
}


void BattleCharaColorMatrixComponent__SetMatrixBlend(
        BattleCharaColorMatrixComponent_o *this,
        float matrixBlend,
        const MethodInfo *method)
{
  float v3; // s1
  float v4; // s0

  v3 = 1.0;
  if ( matrixBlend <= 1.0 )
    v3 = matrixBlend;
  if ( matrixBlend >= 0.0 )
    v4 = v3;
  else
    v4 = 0.0;
  this->fields._matrixBlend = v4;
  BattleCharaColorMatrixComponent__ApplyColorMatrixPropertiesToAppliedMaterials(this, method);
}


bool BattleCharaColorMatrixComponent__get_HasValidShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *colorMatrixShader; // x19

  if ( (byte_5973EE5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973EE5 = 1;
  }
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(colorMatrixShader, 0, 0);
}


bool BattleCharaColorMatrixComponent__get_IsApplied(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  return this->fields._isApplied;
}


void BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor(
        BattleCharaColorMatrixComponent_EffectSheetAnimationState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaColorMatrixComponent_ParticleSystemState___ctor(
        BattleCharaColorMatrixComponent_ParticleSystemState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaColorMatrixComponent_RendererMaterialState___ctor(
        BattleCharaColorMatrixComponent_RendererMaterialState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaColorMatrixComponent_RendererState___ctor(
        BattleCharaColorMatrixComponent_RendererState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCharaColorMatrixComponent_WeaponTrailState___ctor(
        BattleCharaColorMatrixComponent_WeaponTrailState_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}