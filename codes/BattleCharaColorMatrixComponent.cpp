void BattleCharaColorMatrixComponent___cctor(const MethodInfo *method)
{
  UnityEngine_Vector4_o v1; // x1
  UnityEngine_Vector4_o v2; // x3
  const MethodInfo *v3; // x5
  __int128 v4; // q0
  __int128 v5; // q2
  __int128 v6; // q3
  struct BattleCharaColorMatrixComponent_StaticFields *static_fields; // x8
  UnityEngine_Matrix4x4_o v8; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Vector4_o v10; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( (byte_4E7AC94 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    byte_4E7AC94 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  v9.fields.x = 0.299;
  v10.fields.x = 0.587;
  v9.fields.w = 0.0;
  v10.fields.w = 0.0;
  v9.fields.y = 0.299;
  v9.fields.z = 0.299;
  v10.fields.y = 0.587;
  v10.fields.z = 0.587;
  *(_QWORD *)&v1.fields.x = 0;
  UnityEngine_Matrix4x4___ctor(&v8, v9, v10, v1, v2, v3);
  v4 = *(_OWORD *)&v8.fields.m03;
  v6 = *(_OWORD *)&v8.fields.m00;
  v5 = *(_OWORD *)&v8.fields.m01;
  static_fields = BattleCharaColorMatrixComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m02 = *(_OWORD *)&v8.fields.m02;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m03 = v4;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m00 = v6;
  *(_OWORD *)&static_fields->SaturationColorMatrix.fields.m01 = v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaColorMatrixComponent___ctor(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_HashSet_T__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_HashSet_T__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_HashSet_T__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_HashSet_T__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_List_object__o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  BattleCharaColorMatrixComponent_c *v73; // x0
  __int128 *static_fields; // x8
  __int128 v75; // q0
  __int128 v76; // q2
  __int128 v77; // q3
  struct BattleCharaColorMatrixComponent_StaticFields *v78; // x8
  __int128 v79; // q1
  __int128 v80; // q2
  __int128 v81; // q3
  struct BattleCharaColorMatrixComponent_StaticFields *v82; // x8
  __int128 v83; // q1
  __int128 v84; // q2
  __int128 v85; // q3
  struct BattleCharaColorMatrixComponent_StaticFields *v86; // x8
  __int128 v87; // q1
  __int128 v88; // q2
  __int128 v89; // q3
  UnityEngine_Matrix4x4_o v90; // [xsp+0h] [xbp-A0h] BYREF

  if ( (byte_4E7AC93 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_XWeaponTrail___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Renderer___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_XWeaponTrail__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_FGOEffectSheetAnimation__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_Renderer__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_XWeaponTrail__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__TypeInfo);
    byte_4E7AC93 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v3 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState___ctor__);
  this->fields._rendererMaterialStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields._rendererMaterialStates, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState___ctor__);
  this->fields._particleSystemStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__o *)v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._particleSystemStates,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState___ctor__);
  this->fields._rendererStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__o *)v17;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields._rendererStates, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState___ctor__);
  this->fields._weaponTrailStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__o *)v24;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._weaponTrailStates,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor__);
  this->fields._effectSheetAnimationStates = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__o *)v31;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._effectSheetAnimationStates,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_Renderer__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v38,
    (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_Renderer___ctor__);
  this->fields._trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)v38;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._trackedRenderers,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v45,
    (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
  this->fields._trackedParticleSystems = (struct System_Collections_Generic_HashSet_ParticleSystem__o *)v45;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._trackedParticleSystems,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_XWeaponTrail__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v52,
    (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_XWeaponTrail___ctor__);
  this->fields._trackedWeaponTrails = (struct System_Collections_Generic_HashSet_XWeaponTrail__o *)v52;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._trackedWeaponTrails,
    (int32_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_FGOEffectSheetAnimation__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v59,
    (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation___ctor__);
  this->fields._trackedEffectSheetAnimations = (struct System_Collections_Generic_HashSet_FGOEffectSheetAnimation__o *)v59;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._trackedEffectSheetAnimations,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_XWeaponTrail__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v66,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_XWeaponTrail___ctor__);
  this->fields._tempWeaponTrails = (struct System_Collections_Generic_List_XWeaponTrail__o *)v66;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._tempWeaponTrails,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  v73 = BattleCharaColorMatrixComponent_TypeInfo;
  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
    v73 = BattleCharaColorMatrixComponent_TypeInfo;
  }
  static_fields = (__int128 *)v73->static_fields;
  v75 = static_fields[3];
  v77 = *static_fields;
  v76 = static_fields[1];
  *(_OWORD *)&v90.fields.m02 = static_fields[2];
  *(_OWORD *)&v90.fields.m03 = v75;
  *(_OWORD *)&v90.fields.m00 = v77;
  *(_OWORD *)&v90.fields.m01 = v76;
  this->fields._colorMatRow0 = UnityEngine_Matrix4x4__GetRow(&v90, 0, 0);
  v78 = BattleCharaColorMatrixComponent_TypeInfo->static_fields;
  v79 = *(_OWORD *)&v78->SaturationColorMatrix.fields.m03;
  v81 = *(_OWORD *)&v78->SaturationColorMatrix.fields.m00;
  v80 = *(_OWORD *)&v78->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v90.fields.m02 = *(_OWORD *)&v78->SaturationColorMatrix.fields.m02;
  *(_OWORD *)&v90.fields.m03 = v79;
  *(_OWORD *)&v90.fields.m00 = v81;
  *(_OWORD *)&v90.fields.m01 = v80;
  this->fields._colorMatRow1 = UnityEngine_Matrix4x4__GetRow(&v90, 1, 0);
  v82 = BattleCharaColorMatrixComponent_TypeInfo->static_fields;
  v83 = *(_OWORD *)&v82->SaturationColorMatrix.fields.m03;
  v85 = *(_OWORD *)&v82->SaturationColorMatrix.fields.m00;
  v84 = *(_OWORD *)&v82->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v90.fields.m02 = *(_OWORD *)&v82->SaturationColorMatrix.fields.m02;
  *(_OWORD *)&v90.fields.m03 = v83;
  *(_OWORD *)&v90.fields.m00 = v85;
  *(_OWORD *)&v90.fields.m01 = v84;
  this->fields._colorMatRow2 = UnityEngine_Matrix4x4__GetRow(&v90, 2, 0);
  v86 = BattleCharaColorMatrixComponent_TypeInfo->static_fields;
  v87 = *(_OWORD *)&v86->SaturationColorMatrix.fields.m03;
  v89 = *(_OWORD *)&v86->SaturationColorMatrix.fields.m00;
  v88 = *(_OWORD *)&v86->SaturationColorMatrix.fields.m01;
  *(_OWORD *)&v90.fields.m02 = *(_OWORD *)&v86->SaturationColorMatrix.fields.m02;
  *(_OWORD *)&v90.fields.m03 = v87;
  *(_OWORD *)&v90.fields.m00 = v89;
  *(_OWORD *)&v90.fields.m01 = v88;
  this->fields._colorMatRow3 = UnityEngine_Matrix4x4__GetRow(&v90, 3, 0);
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
  System_Collections_Generic_HashSet_T__o *trackedRenderers; // x0
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

  if ( (byte_4E7AC6F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Renderer__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Clear__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC6F = 1;
  }
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  trackedRenderers = (System_Collections_Generic_HashSet_T__o *)UnityEngine_Object__op_Equality(colorMatrixShader, 0, 0);
  if ( renderers && ((unsigned __int8)trackedRenderers & 1) == 0 )
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
    trackedRenderers = (System_Collections_Generic_HashSet_T__o *)this->fields._trackedRenderers;
    if ( !trackedRenderers
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_Renderer__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_T__o *)this->fields._trackedParticleSystems) == 0)
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_T__o *)this->fields._trackedWeaponTrails) == 0)
      || (System_Collections_Generic_HashSet_object___Clear(
            trackedRenderers,
            (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__),
          (trackedRenderers = (System_Collections_Generic_HashSet_T__o *)this->fields._trackedEffectSheetAnimations) == 0) )
    {
LABEL_35:
      sub_1D0F30C(trackedRenderers, v9);
    }
    System_Collections_Generic_HashSet_object___Clear(
      trackedRenderers,
      (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    BattleCharaColorMatrixComponent__PauseParticleSystems(this, renderers, data, v25);
    BattleCharaColorMatrixComponent__DisableWeaponTrails(this, v26);
    max_length = renderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v30 = 0;
      do
      {
        if ( v30 >= (unsigned int)max_length )
          sub_1D0F314(v27);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x24
  UnityEngine_MaterialPropertyBlock_o *v11; // x23
  _BOOL8 HasProperty_73224956; // x0
  __int64 v13; // x1

  if ( (byte_4E7AC7B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16388/*"_ColorMatRow1"*/);
    sub_1D0F0B4(&StringLiteral_16390/*"_ColorMatRow3"*/);
    sub_1D0F0B4(&StringLiteral_16387/*"_ColorMatRow0"*/);
    sub_1D0F0B4(&StringLiteral_16389/*"_ColorMatRow2"*/);
    sub_1D0F0B4(&StringLiteral_16487/*"_MatrixBlend"*/);
    byte_4E7AC7B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0);
  if ( materials )
  {
    if ( !v7 )
    {
      max_length = materials->max_length;
      if ( (int)max_length >= 1 )
      {
        v9 = 0;
        do
        {
          if ( v9 >= (unsigned int)max_length )
            sub_1D0F314(v7);
          v10 = (UnityEngine_Object_o *)materials->m_Items[v9];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v7 = UnityEngine_Object__op_Equality(v10, 0, 0);
          if ( !v7 )
          {
            v11 = (UnityEngine_MaterialPropertyBlock_o *)sub_1D0F300(UnityEngine_MaterialPropertyBlock_TypeInfo);
            UnityEngine_MaterialPropertyBlock___ctor(v11, 0);
            if ( !renderer || (UnityEngine_Renderer__GetPropertyBlock(renderer, v11, v9, 0), !v10) )
LABEL_33:
              sub_1D0F30C(HasProperty_73224956, v13);
            HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(
                                     (UnityEngine_Material_o *)v10,
                                     (System_String_o *)StringLiteral_16487/*"_MatrixBlend"*/,
                                     0);
            if ( HasProperty_73224956 )
            {
              if ( !v11 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetFloat(
                v11,
                (System_String_o *)StringLiteral_16487/*"_MatrixBlend"*/,
                this->fields._matrixBlend,
                0);
            }
            HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(
                                     (UnityEngine_Material_o *)v10,
                                     (System_String_o *)StringLiteral_16387/*"_ColorMatRow0"*/,
                                     0);
            if ( HasProperty_73224956 )
            {
              if ( !v11 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v11,
                (System_String_o *)StringLiteral_16387/*"_ColorMatRow0"*/,
                this->fields._colorMatRow0,
                0);
            }
            HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(
                                     (UnityEngine_Material_o *)v10,
                                     (System_String_o *)StringLiteral_16388/*"_ColorMatRow1"*/,
                                     0);
            if ( HasProperty_73224956 )
            {
              if ( !v11 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v11,
                (System_String_o *)StringLiteral_16388/*"_ColorMatRow1"*/,
                this->fields._colorMatRow1,
                0);
            }
            HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(
                                     (UnityEngine_Material_o *)v10,
                                     (System_String_o *)StringLiteral_16389/*"_ColorMatRow2"*/,
                                     0);
            if ( HasProperty_73224956 )
            {
              if ( !v11 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v11,
                (System_String_o *)StringLiteral_16389/*"_ColorMatRow2"*/,
                this->fields._colorMatRow2,
                0);
            }
            HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(
                                     (UnityEngine_Material_o *)v10,
                                     (System_String_o *)StringLiteral_16390/*"_ColorMatRow3"*/,
                                     0);
            if ( HasProperty_73224956 )
            {
              if ( !v11 )
                goto LABEL_33;
              UnityEngine_MaterialPropertyBlock__SetVector(
                v11,
                (System_String_o *)StringLiteral_16390/*"_ColorMatRow3"*/,
                this->fields._colorMatRow3,
                0);
            }
            UnityEngine_Renderer__SetPropertyBlock_73218116(renderer, v11, v9, 0);
          }
          LODWORD(max_length) = materials->max_length;
          ++v9;
        }
        while ( (__int64)v9 < (int)max_length );
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

  if ( (byte_4E7AC7A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC7A = 1;
  }
  if ( this->fields._isApplied )
  {
    rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
    if ( !rendererMaterialStates )
LABEL_14:
      sub_1D0F30C(rendererMaterialStates, method);
    v4 = 0;
    while ( v4 < rendererMaterialStates->fields._size )
    {
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              rendererMaterialStates,
                                                                              v4,
                                                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
      if ( !rendererMaterialStates )
        goto LABEL_14;
      v5 = rendererMaterialStates;
      items = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Vector4_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E7AC87 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16391/*"_ColorMatrixTime"*/);
    sub_1D0F0B4(&StringLiteral_16618/*"_UseColorMatrixTime"*/);
    byte_4E7AC87 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  if ( !v3 )
  {
    if ( !material )
      sub_1D0F30C(v3, v4);
    if ( UnityEngine_Material__HasProperty_73224956(material, (System_String_o *)StringLiteral_16618/*"_UseColorMatrixTime"*/, 0)
      && UnityEngine_Material__HasProperty_73224956(material, (System_String_o *)StringLiteral_16391/*"_ColorMatrixTime"*/, 0) )
    {
      UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16618/*"_UseColorMatrixTime"*/, 1.0, 0);
      v5.fields.y = UnityEngine_Time__get_timeSinceLevelLoad(0);
      v5.fields.x = v5.fields.y / 20.0;
      v5.fields.z = v5.fields.y + v5.fields.y;
      v5.fields.w = v5.fields.y * 3.0;
      UnityEngine_Material__SetVector(material, (System_String_o *)StringLiteral_16391/*"_ColorMatrixTime"*/, v5, 0);
    }
  }
}


void BattleCharaColorMatrixComponent__ApplyInheritedAlphaClipProperties(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E7AC86 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16400/*"_Cutoff"*/);
    byte_4E7AC86 = 1;
  }
  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16400/*"_Cutoff"*/,
    v3);
}


void BattleCharaColorMatrixComponent__ApplyInheritedRenderStateProperties(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_4E7AC85 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16343/*"_BlendDst"*/);
    sub_1D0F0B4(&StringLiteral_16397/*"_CullMode"*/);
    sub_1D0F0B4(&StringLiteral_16643/*"_ZTestMode"*/);
    sub_1D0F0B4(&StringLiteral_16644/*"_ZWrite"*/);
    sub_1D0F0B4(&StringLiteral_16344/*"_BlendSrc"*/);
    byte_4E7AC85 = 1;
  }
  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16344/*"_BlendSrc"*/,
    v3);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16343/*"_BlendDst"*/,
    v6);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16643/*"_ZTestMode"*/,
    v7);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16397/*"_CullMode"*/,
    v8);
  BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
    source,
    destination,
    (System_String_o *)StringLiteral_16644/*"_ZWrite"*/,
    v9);
}


void BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  _BOOL8 IsMultiTextureEnabled; // x0
  __int64 v7; // x1

  if ( (byte_4E7AC7C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16607/*"_USE_MULTI_TEXTURE"*/);
    byte_4E7AC7C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)source, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)destination, 0, 0) )
    {
      if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
      IsMultiTextureEnabled = BattleCharaColorMatrixComponent__IsMultiTextureEnabled(source, v5);
      if ( !destination )
        sub_1D0F30C(IsMultiTextureEnabled, v7);
      if ( IsMultiTextureEnabled )
        UnityEngine_Material__EnableKeyword(destination, (System_String_o *)StringLiteral_16607/*"_USE_MULTI_TEXTURE"*/, 0);
      else
        UnityEngine_Material__DisableKeyword(destination, (System_String_o *)StringLiteral_16607/*"_USE_MULTI_TEXTURE"*/, 0);
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
  UnityEngine_Object_o *sharedMaterial; // x22
  UnityEngine_Renderer_o *v8; // x2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *ReplacementShader; // x24
  UnityEngine_Object_o *trailMaterial; // x23
  UnityEngine_Material_o *v13; // x25
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_object__o *v17; // x24
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  UnityEngine_ParticleSystemRenderer_o *v28; // x0
  UnityEngine_Material_o *v29; // x1
  UnityEngine_Renderer_o *v30; // x2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  BattleCharaColorMatrixComponent_o *v33; // x25
  __int64 v34; // x29
  unsigned __int64 v35; // x26
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o **p_rendererMaterialStates; // x21
  UnityEngine_MaterialPropertyBlock_o *v37; // x27
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_List_object__o *rendererMaterialStates; // x26
  __int64 v45; // x27
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Object_array *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  UnityEngine_Object_o *v93; // x21
  UnityEngine_Material_array *v94; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  BattleCharaColorMatrixComponent_o *v101; // x22
  GrandQuestFolderBoardItem_o *m_Items; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  BattleCharaColorMatrixComponent_o *v109; // x22
  const MethodInfo *v110; // x3
  UnityEngine_Shader_o *v111; // x26
  UnityEngine_Material_o *v112; // x25
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x2
  const MethodInfo *v115; // x2
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  __int64 v126; // x0

  v6 = this;
  if ( (byte_4E7AC78 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Material__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1D0F0B4(&UnityEngine_MaterialPropertyBlock___TypeInfo);
    sub_1D0F0B4(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Material___TypeInfo);
    sub_1D0F0B4(&UnityEngine_Material_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    this = (BattleCharaColorMatrixComponent_o *)sub_1D0F0B4(&BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
    byte_4E7AC78 = 1;
  }
  if ( !particleRenderer )
    goto LABEL_72;
  sharedMaterial = (UnityEngine_Object_o *)UnityEngine_Renderer__get_sharedMaterial(
                                             (UnityEngine_Renderer_o *)particleRenderer,
                                             0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sharedMaterial, 0, 0) )
    return 0;
  ReplacementShader = (UnityEngine_Object_o *)BattleCharaColorMatrixComponent__GetReplacementShader(
                                                v6,
                                                (UnityEngine_Material_o *)sharedMaterial,
                                                v8,
                                                v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(ReplacementShader, 0, 0) )
    return 0;
  trailMaterial = (UnityEngine_Object_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  v13 = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_73222048(v13, (UnityEngine_Material_o *)sharedMaterial, 0);
  if ( !v13 )
    goto LABEL_72;
  UnityEngine_Material__set_shader(v13, (UnityEngine_Shader_o *)ReplacementShader, 0);
  BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(v6, (UnityEngine_Renderer_o *)particleRenderer, v13, v14);
  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
  BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords((UnityEngine_Material_o *)sharedMaterial, v13, v15);
  BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings((UnityEngine_Material_o *)sharedMaterial, v13, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !v17 )
    goto LABEL_72;
  items = v17->fields._items;
  v25 = Method_System_Collections_Generic_List_Material__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_72;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v13,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v13;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)v13, v18, v19, v20, v21, v22, v23);
  }
  UnityEngine_Renderer__set_sharedMaterial((UnityEngine_Renderer_o *)particleRenderer, v13, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trailMaterial, 0, 0) )
  {
    v28 = particleRenderer;
    v29 = 0;
LABEL_27:
    UnityEngine_ParticleSystemRenderer__set_trailMaterial(v28, v29, 0);
    goto LABEL_28;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trailMaterial, sharedMaterial, 0) )
  {
    v28 = particleRenderer;
    v29 = v13;
    goto LABEL_27;
  }
  v111 = BattleCharaColorMatrixComponent__GetReplacementShader(v6, (UnityEngine_Material_o *)trailMaterial, v30, v31);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v111, 0, 0) )
  {
    v112 = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_73222048(v112, (UnityEngine_Material_o *)trailMaterial, 0);
    if ( !v112 )
      goto LABEL_72;
    UnityEngine_Material__set_shader(v112, v111, 0);
    BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(
      v6,
      (UnityEngine_Renderer_o *)particleRenderer,
      v112,
      v113);
    if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
    BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords((UnityEngine_Material_o *)trailMaterial, v112, v114);
    BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(
      (UnityEngine_Material_o *)trailMaterial,
      v112,
      v115);
    UnityEngine_ParticleSystemRenderer__set_trailMaterial(particleRenderer, v112, 0);
    v122 = v17->fields._items;
    v123 = Method_System_Collections_Generic_List_Material__Add__;
    ++v17->fields._version;
    if ( !v122 )
      goto LABEL_72;
    v124 = v17->fields._size;
    if ( (unsigned int)v124 >= LODWORD(v122->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v17,
        (Il2CppObject *)v112,
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
    }
    else
    {
      v125 = &v122->obj.klass + v124;
      v17->fields._size = v124 + 1;
      v125[4] = (Il2CppClass *)v112;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v125 + 4), (int32_t)v112, v116, v117, v118, v119, v120, v121);
    }
  }
LABEL_28:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(trailMaterial, 0, 0) )
    v32 = 1;
  else
    v32 = 2;
  this = (BattleCharaColorMatrixComponent_o *)sub_1D0F15C(UnityEngine_MaterialPropertyBlock___TypeInfo, v32);
  if ( !this )
    goto LABEL_72;
  v33 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
  {
    v34 = 0;
    v35 = 0;
    p_rendererMaterialStates = &this->fields._rendererMaterialStates;
    while ( 1 )
    {
      v37 = (UnityEngine_MaterialPropertyBlock_o *)sub_1D0F300(UnityEngine_MaterialPropertyBlock_TypeInfo);
      UnityEngine_MaterialPropertyBlock___ctor(v37, 0);
      UnityEngine_Renderer__GetPropertyBlock((UnityEngine_Renderer_o *)particleRenderer, v37, v35, 0);
      if ( v35 >= LODWORD(v33->fields.m_CancellationTokenSource) )
        break;
      p_rendererMaterialStates[v35] = (struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *)v37;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&p_rendererMaterialStates[v34],
        (int32_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      ++v35;
      ++v34;
      if ( (__int64)v35 >= SLODWORD(v33->fields.m_CancellationTokenSource) )
        goto LABEL_38;
    }
LABEL_71:
    sub_1D0F314(this);
  }
LABEL_38:
  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v6->fields._rendererMaterialStates;
  v45 = sub_1D0F300(BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
  BattleCharaColorMatrixComponent_RendererMaterialState___ctor(
    (BattleCharaColorMatrixComponent_RendererMaterialState_o *)v45,
    0);
  if ( !v45 )
    goto LABEL_72;
  *(_QWORD *)(v45 + 16) = particleRenderer;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 16), (int32_t)particleRenderer, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v45 + 24) = originalMaterials;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 24), (int32_t)originalMaterials, v52, v53, v54, v55, v56, v57);
  v58 = System_Collections_Generic_List_object___ToArray(
          v17,
          (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_Material__ToArray__);
  *(_QWORD *)(v45 + 32) = v58;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)v58, v59, v60, v61, v62, v63, v64);
  *(_QWORD *)(v45 + 40) = v33;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 40), (int32_t)v33, v65, v66, v67, v68, v69, v70);
  *(_QWORD *)(v45 + 48) = sharedMaterial;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 48), (int32_t)sharedMaterial, v71, v72, v73, v74, v75, v76);
  *(_QWORD *)(v45 + 56) = trailMaterial;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v45 + 56), (int32_t)trailMaterial, v77, v78, v79, v80, v81, v82);
  *(_BYTE *)(v45 + 64) = 1;
  if ( !rendererMaterialStates )
    goto LABEL_72;
  v89 = rendererMaterialStates->fields._items;
  v90 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__;
  ++rendererMaterialStates->fields._version;
  if ( !v89 )
    goto LABEL_72;
  v91 = rendererMaterialStates->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      rendererMaterialStates,
      (Il2CppObject *)v45,
      *(const MethodInfo_395C410 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v89->obj.klass + v91;
    rendererMaterialStates->fields._size = v91 + 1;
    v92[4] = (Il2CppClass *)v45;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v92 + 4), v45, v83, v84, v85, v86, v87, v88);
  }
  v93 = (UnityEngine_Object_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v93, 0, 0) )
  {
    v94 = (UnityEngine_Material_array *)sub_1D0F15C(UnityEngine_Material___TypeInfo, 1);
    this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                  (UnityEngine_Renderer_o *)particleRenderer,
                                                  0);
    if ( v94 )
    {
      v101 = this;
      if ( !this
        || (this = (BattleCharaColorMatrixComponent_o *)sub_1D0F1F0(this, v94->obj.klass->_1.element_class)) != 0 )
      {
        if ( !LODWORD(v94->max_length) )
          goto LABEL_71;
        v94->m_Items[0] = (UnityEngine_Material_o *)v101;
        m_Items = (GrandQuestFolderBoardItem_o *)v94->m_Items;
        goto LABEL_60;
      }
LABEL_73:
      v126 = sub_1D0F330(this);
      sub_1D0F1DC(v126, 0);
    }
LABEL_72:
    sub_1D0F30C(this, particleRenderer);
  }
  v94 = (UnityEngine_Material_array *)sub_1D0F15C(UnityEngine_Material___TypeInfo, 2);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Renderer__get_sharedMaterial(
                                                (UnityEngine_Renderer_o *)particleRenderer,
                                                0);
  if ( !v94 )
    goto LABEL_72;
  v109 = this;
  if ( this )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_1D0F1F0(this, v94->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( !LODWORD(v94->max_length) )
    goto LABEL_71;
  v94->m_Items[0] = (UnityEngine_Material_o *)v109;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)v94->m_Items, (int32_t)v109, v103, v104, v105, v106, v107, v108);
  this = (BattleCharaColorMatrixComponent_o *)UnityEngine_ParticleSystemRenderer__get_trailMaterial(particleRenderer, 0);
  v101 = this;
  if ( this )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_1D0F1F0(this, v94->obj.klass->_1.element_class);
    if ( !this )
      goto LABEL_73;
  }
  if ( LODWORD(v94->max_length) <= 1 )
    goto LABEL_71;
  v94->m_Items[1] = (UnityEngine_Material_o *)v101;
  m_Items = (GrandQuestFolderBoardItem_o *)&v94->m_Items[1];
LABEL_60:
  sub_1D0F058(m_Items, (int32_t)v101, v95, v96, v97, v98, v99, v100);
  BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(v6, (UnityEngine_Renderer_o *)particleRenderer, v94, v110);
  return 1;
}


void BattleCharaColorMatrixComponent__ApplyParticleSystemStates(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *particleSystemStates; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *items; // x21

  if ( (byte_4E7AC92 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC92 = 1;
  }
  particleSystemStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
  if ( !particleSystemStates )
LABEL_14:
    sub_1D0F30C(particleSystemStates, method);
  v4 = 0;
  while ( v4 < particleSystemStates->fields._size )
  {
    particleSystemStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          particleSystemStates,
                                                                          v4,
                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    if ( !particleSystemStates )
      goto LABEL_14;
    items = (UnityEngine_Object_o *)particleSystemStates->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  System_Array_o *v11; // x22
  UnityEngine_Renderer_c *klass; // x8
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x23
  __int64 v15; // x25
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *rendererStates; // x21
  __int64 v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  __int64 v37; // x0
  __int64 v38; // x23
  unsigned __int64 v39; // x24
  char v40; // w9
  __int64 v41; // x29
  __int64 v42; // x26
  UnityEngine_MaterialPropertyBlock_o *v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  UnityEngine_Material_o *v50; // x25
  UnityEngine_Renderer_o *v51; // x2
  const MethodInfo *v52; // x3
  UnityEngine_Shader_o *ReplacementShader; // x27
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  UnityEngine_Material_array *v57; // x25
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_Collections_Generic_List_object__o *rendererMaterialStates; // x24
  UnityEngine_Material_array *v65; // x21
  __int64 v66; // x25
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  const MethodInfo *v101; // x3
  __int64 v102; // x0
  __int64 v103; // [xsp+8h] [xbp-78h]
  char material; // [xsp+10h] [xbp-70h]
  UnityEngine_Material_o *materiala; // [xsp+10h] [xbp-70h]
  UnityEngine_Material_array *materials; // [xsp+18h] [xbp-68h]

  if ( (byte_4E7AC71 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Renderer__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Renderer__Contains__);
    sub_1D0F0B4(&UnityEngine_LineRenderer_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Add__);
    sub_1D0F0B4(&UnityEngine_MaterialPropertyBlock___TypeInfo);
    sub_1D0F0B4(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Material___TypeInfo);
    sub_1D0F0B4(&UnityEngine_Material_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_RendererState_TypeInfo);
    sub_1D0F0B4(&UnityEngine_TrailRenderer_TypeInfo);
    byte_4E7AC71 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0) )
    return;
  trackedRenderers = this->fields._trackedRenderers;
  if ( !trackedRenderers )
    goto LABEL_59;
  if ( System_Collections_Generic_HashSet_object___Contains(
         (System_Collections_Generic_HashSet_T__o *)trackedRenderers,
         (Il2CppObject *)renderer,
         (const MethodInfo_3807288 *)Method_System_Collections_Generic_HashSet_Renderer__Contains__) )
  {
    return;
  }
  BattleCharaColorMatrixComponent__RegisterEffectSheetAnimationState(this, renderer, v9);
  if ( !renderer )
    goto LABEL_59;
  sharedMaterials = (System_Array_o *)UnityEngine_Renderer__get_sharedMaterials(renderer, 0);
  if ( !sharedMaterials )
    return;
  v11 = sharedMaterials;
  klass = renderer->klass;
  if ( (UnityEngine_ParticleSystemRenderer_c *)renderer->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
    goto LABEL_16;
  if ( klass == (UnityEngine_Renderer_c *)UnityEngine_TrailRenderer_TypeInfo
    || klass == (UnityEngine_Renderer_c *)UnityEngine_LineRenderer_TypeInfo )
  {
    rendererStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
    v20 = sub_1D0F300(BattleCharaColorMatrixComponent_RendererState_TypeInfo);
    BattleCharaColorMatrixComponent_RendererState___ctor((BattleCharaColorMatrixComponent_RendererState_o *)v20, 0);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 16) = renderer;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v20 + 16), (int32_t)renderer, v21, v22, v23, v24, v25, v26);
      trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)UnityEngine_Renderer__get_enabled(
                                                                                    renderer,
                                                                                    0);
      *(_BYTE *)(v20 + 24) = (unsigned __int8)trackedRenderers & 1;
      if ( rendererStates )
      {
        items = rendererStates->fields._items;
        v34 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Add__;
        ++rendererStates->fields._version;
        if ( items )
        {
          size = rendererStates->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              rendererStates,
              (Il2CppObject *)v20,
              *(const MethodInfo_395C410 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            rendererStates->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v20;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v36 + 4), v20, v27, v28, v29, v30, v31, v32);
          }
          UnityEngine_Renderer__set_enabled(renderer, 0, 0);
          goto LABEL_57;
        }
      }
    }
    goto LABEL_59;
  }
  v13 = System_Array__Clone(sharedMaterials, 0);
  if ( v13 )
  {
    v14 = v13;
    v15 = sub_1D0F1F0(v13, UnityEngine_Material___TypeInfo);
    if ( !v15 )
    {
      sub_1D0F6A8(v14);
LABEL_16:
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)renderer,
                           (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      BattleCharaColorMatrixComponent__RegisterParticleSystemState(
        this,
        (UnityEngine_ParticleSystem_o *)Component_object,
        0,
        data,
        v17);
      if ( !BattleCharaColorMatrixComponent__ApplyParticleRenderer(
              this,
              (UnityEngine_ParticleSystemRenderer_o *)renderer,
              (UnityEngine_Material_array *)v11,
              v18) )
        return;
LABEL_57:
      trackedRenderers = this->fields._trackedRenderers;
      if ( trackedRenderers )
      {
        System_Collections_Generic_HashSet_object___Add(
          (System_Collections_Generic_HashSet_T__o *)trackedRenderers,
          (Il2CppObject *)renderer,
          (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_Renderer__Add__);
        return;
      }
      goto LABEL_59;
    }
  }
  else
  {
    v15 = 0;
  }
  v37 = sub_1D0F15C(UnityEngine_MaterialPropertyBlock___TypeInfo, LODWORD(v11[1].monitor));
  if ( SLODWORD(v11[1].monitor) < 1 )
    return;
  v38 = v37;
  v39 = 0;
  v40 = 0;
  v41 = v37 + 32;
  v103 = v15 + 32;
  materials = (UnityEngine_Material_array *)v15;
LABEL_28:
  v42 = 8 * v39;
  material = v40;
  do
  {
    v43 = (UnityEngine_MaterialPropertyBlock_o *)sub_1D0F300(UnityEngine_MaterialPropertyBlock_TypeInfo);
    UnityEngine_MaterialPropertyBlock___ctor(v43, 0);
    UnityEngine_Renderer__GetPropertyBlock(renderer, v43, v39, 0);
    if ( !v38 )
      goto LABEL_59;
    if ( v39 >= *(unsigned int *)(v38 + 24) )
      goto LABEL_60;
    *(_QWORD *)(v41 + 8 * v39) = v43;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v41 + v42), (int32_t)v43, v44, v45, v46, v47, v48, v49);
    if ( v39 >= LODWORD(v11[1].monitor) )
      goto LABEL_60;
    v50 = (UnityEngine_Material_o *)*((_QWORD *)&v11[2].klass + v39);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v50, 0, 0) )
    {
      ReplacementShader = BattleCharaColorMatrixComponent__GetReplacementShader(this, v50, v51, v52);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ReplacementShader, 0, 0) )
      {
        materiala = (UnityEngine_Material_o *)sub_1D0F300(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor_73222048(materiala, v50, 0);
        if ( !materiala )
          goto LABEL_59;
        UnityEngine_Material__set_shader(materiala, ReplacementShader, 0);
        BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(this, renderer, materiala, v54);
        if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
        BattleCharaColorMatrixComponent__ApplyInheritedShaderKeywords(v50, materiala, v55);
        BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(v50, materiala, v56);
        v57 = materials;
        if ( !materials )
          goto LABEL_59;
        trackedRenderers = (struct System_Collections_Generic_HashSet_Renderer__o *)sub_1D0F1F0(
                                                                                      materiala,
                                                                                      materials->obj.klass->_1.element_class);
        if ( !trackedRenderers )
        {
          v102 = sub_1D0F330(0);
          sub_1D0F1DC(v102, 0);
        }
        if ( v39 >= LODWORD(materials->max_length) )
LABEL_60:
          sub_1D0F314(trackedRenderers);
        *(_QWORD *)(v103 + 8 * v39) = materiala;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v103 + v42), (int32_t)materiala, v58, v59, v60, v61, v62, v63);
        ++v39;
        v40 = 1;
        if ( (__int64)v39 >= SLODWORD(v11[1].monitor) )
        {
LABEL_49:
          UnityEngine_Renderer__set_sharedMaterials(renderer, v57, 0);
          rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
          v65 = v57;
          v66 = sub_1D0F300(BattleCharaColorMatrixComponent_RendererMaterialState_TypeInfo);
          BattleCharaColorMatrixComponent_RendererMaterialState___ctor(
            (BattleCharaColorMatrixComponent_RendererMaterialState_o *)v66,
            0);
          if ( v66 )
          {
            *(_QWORD *)(v66 + 16) = renderer;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 16), (int32_t)renderer, v67, v68, v69, v70, v71, v72);
            *(_QWORD *)(v66 + 24) = v11;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 24), (int32_t)v11, v73, v74, v75, v76, v77, v78);
            *(_QWORD *)(v66 + 32) = v65;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 32), (int32_t)v65, v79, v80, v81, v82, v83, v84);
            *(_QWORD *)(v66 + 40) = v38;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v66 + 40), v38, v85, v86, v87, v88, v89, v90);
            if ( rendererMaterialStates )
            {
              v97 = rendererMaterialStates->fields._items;
              v98 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Add__;
              ++rendererMaterialStates->fields._version;
              if ( v97 )
              {
                v99 = rendererMaterialStates->fields._size;
                if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    rendererMaterialStates,
                    (Il2CppObject *)v66,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                }
                else
                {
                  v100 = &v97->obj.klass + v99;
                  rendererMaterialStates->fields._size = v99 + 1;
                  v100[4] = (Il2CppClass *)v66;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v100 + 4), v66, v91, v92, v93, v94, v95, v96);
                }
                BattleCharaColorMatrixComponent__ApplyColorMatrixProperties(this, renderer, materials, v101);
                goto LABEL_57;
              }
            }
          }
LABEL_59:
          sub_1D0F30C(trackedRenderers, v7);
        }
        goto LABEL_28;
      }
    }
    ++v39;
    v42 += 8;
  }
  while ( (__int64)v39 < SLODWORD(v11[1].monitor) );
  v57 = materials;
  if ( (material & 1) != 0 )
    goto LABEL_49;
}


void BattleCharaColorMatrixComponent__ApplyReplacementMaterialSettings(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        const MethodInfo *method)
{
  UnityEngine_Shader_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *shader; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_String_o *name; // x0
  const MethodInfo *v12; // x2
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x21
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  __int64 *v19; // x8
  float v20; // s0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  __int64 *v23; // x8
  System_String_o *v24; // x1
  float v25; // s0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  __int64 *v30; // x8
  System_String_o *v31; // x0
  const MethodInfo *v32; // x2
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2

  if ( (byte_4E7AC84 & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_15335/*"Unlit/Transparent Colored (NoCull)"*/);
    sub_1D0F0B4(&StringLiteral_16343/*"_BlendDst"*/);
    sub_1D0F0B4(&StringLiteral_9234/*"Mobile/Particles/Alpha Blended+1"*/);
    sub_1D0F0B4(&StringLiteral_9232/*"Mobile/Particles/Additive"*/);
    sub_1D0F0B4(&StringLiteral_16397/*"_CullMode"*/);
    sub_1D0F0B4(&StringLiteral_15334/*"Unlit/Transparent Colored"*/);
    sub_1D0F0B4(&StringLiteral_16616/*"_UseAlphaTest"*/);
    sub_1D0F0B4(&StringLiteral_9233/*"Mobile/Particles/Additive (SoftClip)"*/);
    sub_1D0F0B4(&StringLiteral_4960/*"Custom/SoftEdgeUnlitCutZ"*/);
    sub_1D0F0B4(&StringLiteral_16644/*"_ZWrite"*/);
    sub_1D0F0B4(&StringLiteral_10709/*"Particles/Additive+1"*/);
    sub_1D0F0B4(&StringLiteral_16392/*"_ColorScale"*/);
    sub_1D0F0B4(&StringLiteral_16344/*"_BlendSrc"*/);
    byte_4E7AC84 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_Shader_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)source, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( source )
    {
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(source, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(shader, 0, 0) )
        return;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)destination, 0, 0) )
        return;
      if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
      BattleCharaColorMatrixComponent__ApplyInheritedRenderStateProperties(source, destination, v8);
      BattleCharaColorMatrixComponent__ApplyInheritedAlphaClipProperties(source, destination, v9);
      BattleCharaColorMatrixComponent__ApplyColorMatrixTimeSettings(destination, v10);
      v5 = UnityEngine_Material__get_shader(source, 0);
      if ( v5 )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
        if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9232/*"Mobile/Particles/Additive"*/, 0) )
          goto LABEL_24;
        v5 = UnityEngine_Material__get_shader(source, 0);
        if ( !v5 )
          goto LABEL_56;
        v13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
        if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_9233/*"Mobile/Particles/Additive (SoftClip)"*/, 0) )
        {
LABEL_24:
          if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
            destination,
            (System_String_o *)StringLiteral_16344/*"_BlendSrc"*/,
            5.0,
            v12);
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
            destination,
            (System_String_o *)StringLiteral_16343/*"_BlendDst"*/,
            1.0,
            v16);
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
            destination,
            (System_String_o *)StringLiteral_16397/*"_CullMode"*/,
            0.0,
            v17);
          v19 = &StringLiteral_16644/*"_ZWrite"*/;
          v20 = 0.0;
LABEL_27:
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(destination, (System_String_o *)*v19, v20, v18);
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
            destination,
            (System_String_o *)StringLiteral_16392/*"_ColorScale"*/,
            1.0,
            v21);
          v23 = &StringLiteral_16616/*"_UseAlphaTest"*/;
LABEL_28:
          v24 = (System_String_o *)*v23;
          v25 = 0.0;
LABEL_29:
          BattleCharaColorMatrixComponent__SetFloatIfHasProperty(destination, v24, v25, v22);
          return;
        }
        v5 = UnityEngine_Material__get_shader(source, 0);
        if ( v5 )
        {
          v15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
          if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
          if ( BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(v15, v14) )
            goto LABEL_24;
          v5 = UnityEngine_Material__get_shader(source, 0);
          if ( v5 )
          {
            v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
            if ( System_String__op_Equality(v26, (System_String_o *)StringLiteral_10709/*"Particles/Additive+1"*/, 0) )
            {
              if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
              BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
                destination,
                (System_String_o *)StringLiteral_16344/*"_BlendSrc"*/,
                5.0,
                v27);
              BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
                destination,
                (System_String_o *)StringLiteral_16343/*"_BlendDst"*/,
                1.0,
                v28);
              BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
                destination,
                (System_String_o *)StringLiteral_16392/*"_ColorScale"*/,
                2.0,
                v29);
              v30 = &StringLiteral_16616/*"_UseAlphaTest"*/;
LABEL_35:
              v24 = (System_String_o *)*v30;
              v25 = 1.0;
              goto LABEL_29;
            }
            v5 = UnityEngine_Material__get_shader(source, 0);
            if ( v5 )
            {
              v31 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
              if ( System_String__op_Equality(v31, (System_String_o *)StringLiteral_9234/*"Mobile/Particles/Alpha Blended+1"*/, 0) )
              {
                if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
                  destination,
                  (System_String_o *)StringLiteral_16344/*"_BlendSrc"*/,
                  5.0,
                  v32);
                v19 = &StringLiteral_16343/*"_BlendDst"*/;
                v20 = 10.0;
                goto LABEL_27;
              }
              v5 = UnityEngine_Material__get_shader(source, 0);
              if ( v5 )
              {
                v33 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
                if ( System_String__op_Equality(v33, (System_String_o *)StringLiteral_15334/*"Unlit/Transparent Colored"*/, 0) )
                {
                  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                  v25 = 2.0;
                  v24 = (System_String_o *)StringLiteral_16397/*"_CullMode"*/;
                  goto LABEL_29;
                }
                v5 = UnityEngine_Material__get_shader(source, 0);
                if ( v5 )
                {
                  v34 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
                  if ( System_String__op_Equality(v34, (System_String_o *)StringLiteral_15335/*"Unlit/Transparent Colored (NoCull)"*/, 0) )
                  {
                    if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                    v23 = &StringLiteral_16397/*"_CullMode"*/;
                    goto LABEL_28;
                  }
                  v5 = UnityEngine_Material__get_shader(source, 0);
                  if ( v5 )
                  {
                    v35 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0);
                    if ( !System_String__op_Equality(v35, (System_String_o *)StringLiteral_4960/*"Custom/SoftEdgeUnlitCutZ"*/, 0) )
                      return;
                    if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                    BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
                      destination,
                      (System_String_o *)StringLiteral_16397/*"_CullMode"*/,
                      0.0,
                      v36);
                    v30 = &StringLiteral_16644/*"_ZWrite"*/;
                    goto LABEL_35;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_1D0F30C(v5, v6);
  }
}


void BattleCharaColorMatrixComponent__ApplySavedEffectSheetTiling(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  void *effectSheetAnimationStates; // x0
  __int64 v8; // x1
  int32_t v9; // w22
  char *v10; // x23
  UnityEngine_Object_o *v11; // x24

  if ( (byte_4E7AC75 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16481/*"_MainTex"*/);
    byte_4E7AC75 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    effectSheetAnimationStates = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
    if ( ((unsigned __int8)effectSheetAnimationStates & 1) == 0 )
    {
      if ( !material )
        goto LABEL_19;
      if ( !UnityEngine_Material__HasProperty_73224956(material, (System_String_o *)StringLiteral_16481/*"_MainTex"*/, 0) )
        return;
      effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
      if ( !effectSheetAnimationStates )
LABEL_19:
        sub_1D0F30C(effectSheetAnimationStates, v8);
      v9 = 0;
      while ( v9 < *((_DWORD *)effectSheetAnimationStates + 6) )
      {
        effectSheetAnimationStates = System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)effectSheetAnimationStates,
                                       v9,
                                       (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
        if ( !effectSheetAnimationStates )
          goto LABEL_19;
        v10 = (char *)effectSheetAnimationStates;
        v11 = (UnityEngine_Object_o *)*((_QWORD *)effectSheetAnimationStates + 3);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(v11, (UnityEngine_Object_o *)renderer, 0) )
        {
          UnityEngine_Material__set_mainTextureScale(material, *(UnityEngine_Vector2_o *)(v10 + 36), 0);
          UnityEngine_Material__set_mainTextureOffset(material, *(UnityEngine_Vector2_o *)(v10 + 44), 0);
          return;
        }
        effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
        ++v9;
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


void BattleCharaColorMatrixComponent__CopyFloatPropertyIfExists(
        UnityEngine_Material_o *source,
        UnityEngine_Material_o *destination,
        System_String_o *propertyName,
        const MethodInfo *method)
{
  _BOOL8 HasProperty_73224956; // x0
  __int64 v8; // x1
  float Float; // s0

  if ( (byte_4E7AC89 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC89 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)source, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    HasProperty_73224956 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)destination, 0, 0);
    if ( !HasProperty_73224956 )
    {
      if ( !source )
        goto LABEL_15;
      HasProperty_73224956 = UnityEngine_Material__HasProperty_73224956(source, propertyName, 0);
      if ( !HasProperty_73224956 )
        return;
      if ( !destination )
LABEL_15:
        sub_1D0F30C(HasProperty_73224956, v8);
      if ( UnityEngine_Material__HasProperty_73224956(destination, propertyName, 0) )
      {
        Float = UnityEngine_Material__GetFloat(source, propertyName, 0);
        UnityEngine_Material__SetFloat(destination, propertyName, Float, 0);
      }
    }
  }
}


void BattleCharaColorMatrixComponent__DestroyMaterial(UnityEngine_Material_o *material, const MethodInfo *method)
{
  bool isPlaying; // w20

  if ( (byte_4E7AC91 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Application_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC91 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0) )
  {
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    isPlaying = UnityEngine_Application__get_isPlaying(0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( isPlaying )
      UnityEngine_Object__Destroy_73359484((UnityEngine_Object_o *)material, 0);
    else
      UnityEngine_Object__DestroyImmediate_73359672((UnityEngine_Object_o *)material, 0);
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
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_object__o *weaponTrailStates; // x22
  __int64 v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  v2 = this;
  if ( (byte_4E7AC72 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponentsInChildren_XWeaponTrail___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_XWeaponTrail__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_XWeaponTrail__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_XWeaponTrail__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    this = (BattleCharaColorMatrixComponent_o *)sub_1D0F0B4(&BattleCharaColorMatrixComponent_WeaponTrailState_TypeInfo);
    byte_4E7AC72 = 1;
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
    || (UnityEngine_Component__GetComponentsInChildren_object__52717532(
          (UnityEngine_Component_o *)this,
          1,
          (System_Collections_Generic_List_T__o *)v2->fields._tempWeaponTrails,
          (const MethodInfo_32467DC *)Method_UnityEngine_Component_GetComponentsInChildren_XWeaponTrail___),
        (this = (BattleCharaColorMatrixComponent_o *)v2->fields._tempWeaponTrails) == 0) )
  {
LABEL_24:
    sub_1D0F30C(this, method);
  }
  v6 = 0;
  while ( v6 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v6,
             (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_XWeaponTrail__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      this = (BattleCharaColorMatrixComponent_o *)v2->fields._trackedWeaponTrails;
      if ( !this )
        goto LABEL_24;
      if ( System_Collections_Generic_HashSet_object___Add(
             (System_Collections_Generic_HashSet_T__o *)this,
             Item,
             (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Add__) )
      {
        weaponTrailStates = (System_Collections_Generic_List_object__o *)v2->fields._weaponTrailStates;
        v9 = sub_1D0F300(BattleCharaColorMatrixComponent_WeaponTrailState_TypeInfo);
        BattleCharaColorMatrixComponent_WeaponTrailState___ctor(
          (BattleCharaColorMatrixComponent_WeaponTrailState_o *)v9,
          0);
        if ( !v9 )
          goto LABEL_24;
        *(_QWORD *)(v9 + 16) = Item;
        sub_1D0F058((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)Item, v10, v11, v12, v13, v14, v15);
        if ( !Item )
          goto LABEL_24;
        this = (BattleCharaColorMatrixComponent_o *)UnityEngine_Behaviour__get_enabled(
                                                      (UnityEngine_Behaviour_o *)Item,
                                                      0);
        *(_BYTE *)(v9 + 24) = (unsigned __int8)this & 1;
        if ( !weaponTrailStates )
          goto LABEL_24;
        items = weaponTrailStates->fields._items;
        v23 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Add__;
        ++weaponTrailStates->fields._version;
        if ( !items )
          goto LABEL_24;
        v24 = weaponTrailStates->fields._size;
        if ( (unsigned int)v24 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            weaponTrailStates,
            (Il2CppObject *)v9,
            *(const MethodInfo_395C410 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + v24;
          weaponTrailStates->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)v9;
          sub_1D0F058((GrandQuestFolderBoardItem_o *)(v25 + 4), v9, v16, v17, v18, v19, v20, v21);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8A & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6479/*"FGO_Battle/Particle/Base_ColorMatrix"*/);
    byte_4E7AC8A = 1;
  }
  p_battleParticleBaseColorMatrixShader = &this->fields._battleParticleBaseColorMatrixShader;
  battleParticleBaseColorMatrixShader = (UnityEngine_Object_o *)this->fields._battleParticleBaseColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleParticleBaseColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_6479/*"FGO_Battle/Particle/Base_ColorMatrix"*/, 0);
  *p_battleParticleBaseColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleParticleBaseColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_battleParticleBaseColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8C & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7404/*"Hidden/Particle/Additive_ColorMatrix"*/);
    byte_4E7AC8C = 1;
  }
  p_hiddenParticleAdditiveColorMatrixShader = &this->fields._hiddenParticleAdditiveColorMatrixShader;
  hiddenParticleAdditiveColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleAdditiveColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleAdditiveColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7404/*"Hidden/Particle/Additive_ColorMatrix"*/, 0);
  *p_hiddenParticleAdditiveColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._hiddenParticleAdditiveColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_hiddenParticleAdditiveColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8B & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7406/*"Hidden/Particle/Base-Stencil_ColorMatrix"*/);
    byte_4E7AC8B = 1;
  }
  p_hiddenParticleBaseStencilColorMatrixShader = &this->fields._hiddenParticleBaseStencilColorMatrixShader;
  hiddenParticleBaseStencilColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleBaseStencilColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleBaseStencilColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7406/*"Hidden/Particle/Base-Stencil_ColorMatrix"*/, 0);
  *p_hiddenParticleBaseStencilColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._hiddenParticleBaseStencilColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_hiddenParticleBaseStencilColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7416/*"Hidden/Particle/distortion_ColorMatrix"*/);
    byte_4E7AC8E = 1;
  }
  p_hiddenParticleDistortionColorMatrixShader = &this->fields._hiddenParticleDistortionColorMatrixShader;
  hiddenParticleDistortionColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleDistortionColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleDistortionColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7416/*"Hidden/Particle/distortion_ColorMatrix"*/, 0);
  *p_hiddenParticleDistortionColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._hiddenParticleDistortionColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_hiddenParticleDistortionColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8F & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7415/*"Hidden/Particle/distortion-Stencil_ColorMatrix"*/);
    byte_4E7AC8F = 1;
  }
  p_hiddenParticleDistortionStencilColorMatrixShader = &this->fields._hiddenParticleDistortionStencilColorMatrixShader;
  hiddenParticleDistortionStencilColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticleDistortionStencilColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hiddenParticleDistortionStencilColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7415/*"Hidden/Particle/distortion-Stencil_ColorMatrix"*/, 0);
  *p_hiddenParticleDistortionStencilColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._hiddenParticleDistortionStencilColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_hiddenParticleDistortionStencilColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingHiddenParticleDistortionStencilShader )
    this->fields._hasLoggedMissingHiddenParticleDistortionStencilShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureHiddenParticlePlusOneColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_hiddenParticlePlusOneColorMatrixShader; // x20
  UnityEngine_Object_o *hiddenParticlePlusOneColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC8D & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_7403/*"Hidden/Particle/Additive+1_ColorMatrix"*/);
    byte_4E7AC8D = 1;
  }
  p_hiddenParticlePlusOneColorMatrixShader = &this->fields._hiddenParticlePlusOneColorMatrixShader;
  hiddenParticlePlusOneColorMatrixShader = (UnityEngine_Object_o *)this->fields._hiddenParticlePlusOneColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(hiddenParticlePlusOneColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_7403/*"Hidden/Particle/Additive+1_ColorMatrix"*/, 0);
  *p_hiddenParticlePlusOneColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._hiddenParticlePlusOneColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_hiddenParticlePlusOneColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC7E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6470/*"FGO/fgo_ch_ColorMatrix"*/);
    byte_4E7AC7E = 1;
  }
  p_colorMatrixShader = &this->fields._colorMatrixShader;
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(colorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_6470/*"FGO/fgo_ch_ColorMatrix"*/, 0);
  *p_colorMatrixShader = v5;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields._colorMatrixShader, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (UnityEngine_Object_o *)*p_colorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
    return 1;
  result = 0;
  if ( !this->fields._hasLoggedMissingShader )
    this->fields._hasLoggedMissingShader = 1;
  return result;
}


bool BattleCharaColorMatrixComponent__EnsureUnlitTransparentColoredColorMatrixShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Shader_o **p_unlitTransparentColoredColorMatrixShader; // x20
  UnityEngine_Object_o *unlitTransparentColoredColorMatrixShader; // x21
  UnityEngine_Shader_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *v12; // x20
  bool result; // w0

  if ( (byte_4E7AC90 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_15336/*"Unlit/Transparent Colored ColorMatrix"*/);
    byte_4E7AC90 = 1;
  }
  p_unlitTransparentColoredColorMatrixShader = &this->fields._unlitTransparentColoredColorMatrixShader;
  unlitTransparentColoredColorMatrixShader = (UnityEngine_Object_o *)this->fields._unlitTransparentColoredColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(unlitTransparentColoredColorMatrixShader, 0, 0) )
    return 1;
  v5 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_15336/*"Unlit/Transparent Colored ColorMatrix"*/, 0);
  *p_unlitTransparentColoredColorMatrixShader = v5;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._unlitTransparentColoredColorMatrixShader,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (UnityEngine_Object_o *)*p_unlitTransparentColoredColorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v12, 0, 0) )
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

  if ( (byte_4E7AC70 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC70 = 1;
  }
  monitorRoot = (UnityEngine_Object_o *)this->fields._monitorRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  UnityEngine_Object_o *shader; // x21
  bool v10; // w8
  System_String_o *name; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4E7AC7F & 1) == 0 )
  {
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_15335/*"Unlit/Transparent Colored (NoCull)"*/);
    sub_1D0F0B4(&StringLiteral_7414/*"Hidden/Particle/distortion-Stencil"*/);
    sub_1D0F0B4(&StringLiteral_9234/*"Mobile/Particles/Alpha Blended+1"*/);
    sub_1D0F0B4(&StringLiteral_9232/*"Mobile/Particles/Additive"*/);
    sub_1D0F0B4(&StringLiteral_7412/*"Hidden/Particle/distortion"*/);
    sub_1D0F0B4(&StringLiteral_6477/*"FGO_Battle/Particle/Base"*/);
    sub_1D0F0B4(&StringLiteral_15334/*"Unlit/Transparent Colored"*/);
    sub_1D0F0B4(&StringLiteral_9233/*"Mobile/Particles/Additive (SoftClip)"*/);
    sub_1D0F0B4(&StringLiteral_4960/*"Custom/SoftEdgeUnlitCutZ"*/);
    sub_1D0F0B4(&StringLiteral_7405/*"Hidden/Particle/Base-Stencil"*/);
    sub_1D0F0B4(&StringLiteral_10709/*"Particles/Additive+1"*/);
    byte_4E7AC7F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  result = 0;
  if ( !v7 )
  {
    if ( !material )
      goto LABEL_51;
    shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(material, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality(shader, 0, 0);
    result = 0;
    if ( !v10 )
    {
      result = UnityEngine_Material__get_shader(material, 0);
      if ( result )
      {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)result, 0);
        if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_6477/*"FGO_Battle/Particle/Base"*/, 0) )
          goto LABEL_12;
        if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_7405/*"Hidden/Particle/Base-Stencil"*/, 0) )
        {
          if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleBaseStencilColorMatrixShader(this, v13) )
            return this->fields._hiddenParticleBaseStencilColorMatrixShader;
        }
        else
        {
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_10709/*"Particles/Additive+1"*/, 0)
            || System_String__op_Equality(name, (System_String_o *)StringLiteral_9234/*"Mobile/Particles/Alpha Blended+1"*/, 0) )
          {
            if ( BattleCharaColorMatrixComponent__EnsureHiddenParticlePlusOneColorMatrixShader(this, v14) )
              return this->fields._hiddenParticlePlusOneColorMatrixShader;
            return this->fields._colorMatrixShader;
          }
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9232/*"Mobile/Particles/Additive"*/, 0)
            || System_String__op_Equality(name, (System_String_o *)StringLiteral_9233/*"Mobile/Particles/Additive (SoftClip)"*/, 0) )
          {
            goto LABEL_12;
          }
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_7412/*"Hidden/Particle/distortion"*/, 0) )
          {
            if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionColorMatrixShader(this, v15) )
              return this->fields._hiddenParticleDistortionColorMatrixShader;
            return this->fields._colorMatrixShader;
          }
          if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_7414/*"Hidden/Particle/distortion-Stencil"*/, 0) )
          {
            if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_15334/*"Unlit/Transparent Colored"*/, 0)
              || System_String__op_Equality(name, (System_String_o *)StringLiteral_15335/*"Unlit/Transparent Colored (NoCull)"*/, 0) )
            {
              if ( BattleCharaColorMatrixComponent__EnsureUnlitTransparentColoredColorMatrixShader(this, v17) )
                return this->fields._unlitTransparentColoredColorMatrixShader;
              return this->fields._colorMatrixShader;
            }
            if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_4960/*"Custom/SoftEdgeUnlitCutZ"*/, 0) )
            {
              if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
              if ( BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(name, v18) )
              {
                if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleAdditiveColorMatrixShader(this, v19) )
                  return this->fields._hiddenParticleAdditiveColorMatrixShader;
                goto LABEL_12;
              }
              if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
              if ( BattleCharaColorMatrixComponent__IsParticleShader(name, v19) )
              {
LABEL_12:
                if ( BattleCharaColorMatrixComponent__EnsureBattleParticleBaseColorMatrixShader(this, v12) )
                  return this->fields._battleParticleBaseColorMatrixShader;
                return this->fields._colorMatrixShader;
              }
              if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
              if ( !BattleCharaColorMatrixComponent__IsUnsupportedEffectShader(name, v12) )
              {
                if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                BattleCharaColorMatrixComponent__IsCharacterShader(name, v20);
              }
            }
            return this->fields._colorMatrixShader;
          }
          if ( BattleCharaColorMatrixComponent__EnsureHiddenParticleDistortionStencilColorMatrixShader(this, v16) )
            return this->fields._hiddenParticleDistortionStencilColorMatrixShader;
        }
        return 0;
      }
LABEL_51:
      sub_1D0F30C(result, v6);
    }
  }
  return result;
}


// attributes: thunk
void BattleCharaColorMatrixComponent__Initialize(BattleCharaColorMatrixComponent_o *this, const MethodInfo *method)
{
  BattleCharaColorMatrixComponent__EnsureShader(this, method);
}


void BattleCharaColorMatrixComponent__Initialize_48789892(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Shader_o *colorMatrixShader,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields._colorMatrixShader = colorMatrixShader;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._colorMatrixShader,
    (int32_t)colorMatrixShader,
    (int32_t)method,
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

  if ( (byte_4E7AC80 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6480/*"FGO_CH/"*/);
    sub_1D0F0B4(&StringLiteral_6469/*"FGO/fgo_ch"*/);
    byte_4E7AC80 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_1D0F30C(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6480/*"FGO_CH/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6469/*"FGO/fgo_ch"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsFgoBgAdditiveParticleShader(
        System_String_o *shaderName,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_4E7AC82 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1054/*"/Additive"*/);
    sub_1D0F0B4(&StringLiteral_6473/*"FGO_BG_Particles/"*/);
    byte_4E7AC82 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_1D0F30C(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6473/*"FGO_BG_Particles/"*/, 0)
      && System_String__Contains(shaderName, (System_String_o *)StringLiteral_1054/*"/Additive"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsMultiTextureEnabled(UnityEngine_Material_o *material, const MethodInfo *method)
{
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4E7AC7D & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16607/*"_USE_MULTI_TEXTURE"*/);
    sub_1D0F0B4(&StringLiteral_16623/*"_Use_Multi_Texture"*/);
    byte_4E7AC7D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  if ( v3 )
    return 0;
  if ( !material )
    sub_1D0F30C(v3, v4);
  if ( UnityEngine_Material__IsKeywordEnabled(material, (System_String_o *)StringLiteral_16607/*"_USE_MULTI_TEXTURE"*/, 0) )
    return 1;
  if ( !UnityEngine_Material__HasProperty_73224956(material, (System_String_o *)StringLiteral_16623/*"_Use_Multi_Texture"*/, 0) )
    return 0;
  return UnityEngine_Material__GetFloat(material, (System_String_o *)StringLiteral_16623/*"_Use_Multi_Texture"*/, 0) > 0.0;
}


bool BattleCharaColorMatrixComponent__IsParticleShader(System_String_o *shaderName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_4E7AC81 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_7402/*"Hidden/Particle/"*/);
    sub_1D0F0B4(&StringLiteral_10708/*"Particles/"*/);
    sub_1D0F0B4(&StringLiteral_9231/*"Mobile/Particles/"*/);
    sub_1D0F0B4(&StringLiteral_6473/*"FGO_BG_Particles/"*/);
    sub_1D0F0B4(&StringLiteral_6476/*"FGO_Battle/Particle/"*/);
    byte_4E7AC81 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_1D0F30C(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6476/*"FGO_Battle/Particle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6473/*"FGO_BG_Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7402/*"Hidden/Particle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_9231/*"Mobile/Particles/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_10708/*"Particles/"*/, 0);
}


bool BattleCharaColorMatrixComponent__IsUnsupportedEffectShader(System_String_o *shaderName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_4E7AC83 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6485/*"FGO_Noble/"*/);
    sub_1D0F0B4(&StringLiteral_7396/*"Hidden/Ken/"*/);
    sub_1D0F0B4(&StringLiteral_7401/*"Hidden/Noble/"*/);
    sub_1D0F0B4(&StringLiteral_6474/*"FGO_Battle/"*/);
    byte_4E7AC83 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(shaderName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !shaderName )
    sub_1D0F30C(IsNullOrEmpty, v4);
  return System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6474/*"FGO_Battle/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_6485/*"FGO_Noble/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7396/*"Hidden/Ken/"*/, 0)
      || System_String__StartsWith(shaderName, (System_String_o *)StringLiteral_7401/*"Hidden/Noble/"*/, 0);
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
  System_Collections_Generic_HashSet_T__o *v7; // x22
  UnityEngine_Component_o *v8; // x0
  __int64 v9; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  Il2CppObject *Component_object; // x23
  const MethodInfo *v13; // x4
  System_Collections_Generic_HashSet_Enumerator_T__o v14; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4E7AC73 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4E7AC73 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( renderers )
  {
    v7 = (System_Collections_Generic_HashSet_T__o *)sub_1D0F300(System_Collections_Generic_HashSet_ParticleSystem__TypeInfo);
    System_Collections_Generic_HashSet_object____ctor(
      v7,
      (const MethodInfo_3806B94 *)Method_System_Collections_Generic_HashSet_ParticleSystem___ctor__);
    max_length = renderers->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1D0F314(v8);
        v8 = (UnityEngine_Component_o *)renderers->m_Items[v11];
        if ( v8 && (UnityEngine_ParticleSystemRenderer_c *)v8->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
        {
          Component_object = UnityEngine_Component__GetComponent_object_(
                               v8,
                               (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                              (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
          }
        }
        LODWORD(max_length) = renderers->max_length;
        ++v11;
      }
      while ( (__int64)v11 < (int)max_length );
    }
    if ( !v7 )
LABEL_22:
      sub_1D0F30C(v8, v9);
    System_Collections_Generic_HashSet_object___GetEnumerator(
      &v14,
      v7,
      (const MethodInfo_38076FC *)Method_System_Collections_Generic_HashSet_ParticleSystem__GetEnumerator__);
    while ( System_Collections_Generic_HashSet_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_36CDA18 *)Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__MoveNext__) )
      BattleCharaColorMatrixComponent__RegisterParticleSystemState(
        this,
        (UnityEngine_ParticleSystem_o *)v14.fields._current,
        1,
        data,
        v13);
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_36CDA14 *)Method_System_Collections_Generic_HashSet_Enumerator_ParticleSystem__Dispose__);
  }
}


void BattleCharaColorMatrixComponent__RegisterEffectSheetAnimationState(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Renderer_o *renderer,
        const MethodInfo *method)
{
  __int64 trackedEffectSheetAnimations; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *effectSheetAnimationStates; // x21
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  UnityEngine_Vector2_o zeroVector; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Vector2_o scale; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7AC74 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_FGOEffectSheetAnimation___);
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_EffectSheetAnimationState_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Add__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC74 = 1;
  }
  zeroVector = 0;
  scale = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  trackedEffectSheetAnimations = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer, 0, 0);
  if ( (trackedEffectSheetAnimations & 1) == 0 )
  {
    if ( !renderer )
      goto LABEL_25;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)renderer,
                         (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_FGOEffectSheetAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      trackedEffectSheetAnimations = (__int64)this->fields._trackedEffectSheetAnimations;
      if ( trackedEffectSheetAnimations )
      {
        trackedEffectSheetAnimations = System_Collections_Generic_HashSet_object___Add(
                                         (System_Collections_Generic_HashSet_T__o *)trackedEffectSheetAnimations,
                                         Component_object,
                                         (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Add__);
        if ( (trackedEffectSheetAnimations & 1) == 0 )
          return;
        if ( !byte_4E76475 )
        {
          trackedEffectSheetAnimations = sub_1D0F0B4(&UnityEngine_Vector2_TypeInfo);
          byte_4E76475 = 1;
        }
        static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
        scale = static_fields->oneVector;
        if ( !byte_4E70B79 )
        {
          trackedEffectSheetAnimations = sub_1D0F0B4(&UnityEngine_Vector2_TypeInfo);
          byte_4E70B79 = 1;
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
          v10 = sub_1D0F300(BattleCharaColorMatrixComponent_EffectSheetAnimationState_TypeInfo);
          BattleCharaColorMatrixComponent_EffectSheetAnimationState___ctor(
            (BattleCharaColorMatrixComponent_EffectSheetAnimationState_o *)v10,
            0);
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = Component_object;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)(v10 + 16),
              (int32_t)Component_object,
              v11,
              v12,
              v13,
              v14,
              v15,
              v16);
            *(_QWORD *)(v10 + 24) = renderer;
            sub_1D0F058((GrandQuestFolderBoardItem_o *)(v10 + 24), (int32_t)renderer, v17, v18, v19, v20, v21, v22);
            trackedEffectSheetAnimations = UnityEngine_Behaviour__get_enabled(
                                             (UnityEngine_Behaviour_o *)Component_object,
                                             0);
            *(_BYTE *)(v10 + 32) = trackedEffectSheetAnimations & 1;
            *(UnityEngine_Vector2_o *)(v10 + 36) = scale;
            *(UnityEngine_Vector2_o *)(v10 + 44) = zeroVector;
            if ( effectSheetAnimationStates )
            {
              items = effectSheetAnimationStates->fields._items;
              v30 = Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Add__;
              ++effectSheetAnimationStates->fields._version;
              if ( items )
              {
                size = effectSheetAnimationStates->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    effectSheetAnimationStates,
                    (Il2CppObject *)v10,
                    *(const MethodInfo_395C410 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  effectSheetAnimationStates->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)v10;
                  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v32 + 4), v10, v23, v24, v25, v26, v27, v28);
                }
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
                return;
              }
            }
          }
        }
      }
LABEL_25:
      sub_1D0F30C(trackedEffectSheetAnimations, v6);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  UnityEngine_ParticleSystem_MainModule_o v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  BattleCharaColorMatrixComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_ParticleSystem_MainModule_o v32; // x0
  float duration; // s0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E7AC76 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Add__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_ParticleSystemState_TypeInfo);
    byte_4E7AC76 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)particleSystem, 0, 0) )
  {
    trackedParticleSystems = this->fields._trackedParticleSystems;
    if ( !trackedParticleSystems )
      goto LABEL_26;
    if ( !System_Collections_Generic_HashSet_object___Add(
            (System_Collections_Generic_HashSet_T__o *)trackedParticleSystems,
            (Il2CppObject *)particleSystem,
            (const MethodInfo_3807D78 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Add__) )
      return;
    particleSystemStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
    v12 = sub_1D0F300(BattleCharaColorMatrixComponent_ParticleSystemState_TypeInfo);
    BattleCharaColorMatrixComponent_ParticleSystemState___ctor(
      (BattleCharaColorMatrixComponent_ParticleSystemState_o *)v12,
      0);
    if ( !v12 )
      goto LABEL_26;
    *(_QWORD *)(v12 + 16) = particleSystem;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v12 + 16), (int32_t)particleSystem, v13, v14, v15, v16, v17, v18);
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
        *(const MethodInfo_395C410 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      if ( !pausePlaying )
        return;
    }
    else
    {
      v29 = &items->obj.klass + size;
      particleSystemStates->fields._size = size + 1;
      v29[4] = (Il2CppClass *)v12;
      sub_1D0F058((GrandQuestFolderBoardItem_o *)(v29 + 4), v12, v20, v21, v22, v23, v24, v25);
      if ( !pausePlaying )
        return;
    }
    BattleCharaColorMatrixComponent__SwitchToLocalAndFreeze(v30, particleSystem, v31);
    if ( UnityEngine_ParticleSystem__get_isPlaying(particleSystem, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v32.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
        duration = UnityEngine_ParticleSystem_MainModule__get_duration(v32, 0);
        UnityEngine_ParticleSystem__Simulate_73644888(particleSystem, duration, 0, 1, 0);
        goto LABEL_24;
      }
      if ( data )
      {
        if ( data->fields._IsLoadingSaveData_k__BackingField )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_26:
      sub_1D0F30C(trackedParticleSystems, v9);
    }
  }
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
  System_Collections_Generic_List_object__o *v19; // x21
  UnityEngine_Object_o *items; // x22
  UnityEngine_ParticleSystem_MainModule_o v21; // x0
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  UnityEngine_Object_o *v24; // x22
  int32_t v25; // w20
  System_Collections_Generic_List_object__o *v26; // x21
  UnityEngine_Object_o *v27; // x22
  int32_t v28; // w20
  System_Collections_Generic_List_object__o *v29; // x21
  UnityEngine_Object_o *v30; // x22
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__o *v31; // x8
  int32_t size; // w2
  int v33; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__o *particleSystemStates; // x8
  int32_t v35; // w2
  int v36; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__o *rendererStates; // x8
  int32_t v38; // w2
  int v39; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__o *weaponTrailStates; // x8
  int32_t v41; // w2
  int v42; // w9
  struct System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__o *effectSheetAnimationStates; // x8
  int32_t v44; // w2
  int v45; // w9
  struct UnityEngine_Transform_o **p_monitorRoot; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E7AC79 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_IndexOf_Material___);
    sub_1D0F0B4(&BattleCharaColorMatrixComponent_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_Renderer__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__Clear__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Item__);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&UnityEngine_ParticleSystemRenderer_TypeInfo);
    byte_4E7AC79 = 1;
  }
  m_ParticleSystem = 0;
  if ( this->fields._isApplied )
  {
    rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
    if ( !rendererMaterialStates )
      goto LABEL_122;
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
                                                                                    (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_ParticleSystemState__get_Item__);
            if ( !rendererMaterialStates )
              goto LABEL_122;
            v19 = rendererMaterialStates;
            items = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(items, 0, 0) )
            {
              if ( BYTE1(v19->fields._size) )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields._items;
                if ( !rendererMaterialStates )
                  goto LABEL_122;
                if ( !UnityEngine_ParticleSystem__get_isPaused(
                        (UnityEngine_ParticleSystem_o *)rendererMaterialStates,
                        0) )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields._items;
                  if ( !rendererMaterialStates )
                    goto LABEL_122;
                  UnityEngine_ParticleSystem__Pause((UnityEngine_ParticleSystem_o *)rendererMaterialStates, 0, 0);
                }
              }
              else if ( LOBYTE(v19->fields._size) )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields._items;
                if ( !rendererMaterialStates )
                  goto LABEL_122;
                if ( UnityEngine_ParticleSystem__get_isPaused((UnityEngine_ParticleSystem_o *)rendererMaterialStates, 0) )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields._items;
                  if ( !rendererMaterialStates )
                    goto LABEL_122;
                  UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)rendererMaterialStates, 0, 0);
                }
              }
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)v19->fields._items;
              if ( !rendererMaterialStates )
                goto LABEL_122;
              m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                                   (UnityEngine_ParticleSystem_o *)rendererMaterialStates,
                                   0).fields.m_ParticleSystem;
              v21.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
              UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v21, v19->fields._version, 0);
            }
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._particleSystemStates;
            ++v18;
            if ( !rendererMaterialStates )
              goto LABEL_122;
          }
          rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
          if ( rendererMaterialStates )
          {
            v22 = 0;
            while ( v22 < rendererMaterialStates->fields._size )
            {
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                      rendererMaterialStates,
                                                                                      v22,
                                                                                      (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererState__get_Item__);
              if ( !rendererMaterialStates )
                goto LABEL_122;
              v23 = rendererMaterialStates;
              v24 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v24, 0, 0) )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)v23->fields._items;
                if ( !rendererMaterialStates )
                  goto LABEL_122;
                UnityEngine_Renderer__set_enabled(
                  (UnityEngine_Renderer_o *)rendererMaterialStates,
                  v23->fields._size,
                  0);
              }
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererStates;
              ++v22;
              if ( !rendererMaterialStates )
                goto LABEL_122;
            }
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._weaponTrailStates;
            if ( rendererMaterialStates )
            {
              v25 = 0;
              while ( v25 < rendererMaterialStates->fields._size )
              {
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                        rendererMaterialStates,
                                                                                        v25,
                                                                                        (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_WeaponTrailState__get_Item__);
                if ( !rendererMaterialStates )
                  goto LABEL_122;
                v26 = rendererMaterialStates;
                v27 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v27, 0, 0) )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)v26->fields._items;
                  if ( !rendererMaterialStates )
                    goto LABEL_122;
                  UnityEngine_Behaviour__set_enabled(
                    (UnityEngine_Behaviour_o *)rendererMaterialStates,
                    v26->fields._size,
                    0);
                }
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._weaponTrailStates;
                ++v25;
                if ( !rendererMaterialStates )
                  goto LABEL_122;
              }
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._effectSheetAnimationStates;
              if ( rendererMaterialStates )
              {
                v28 = 0;
                while ( v28 < rendererMaterialStates->fields._size )
                {
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                          rendererMaterialStates,
                                                                                          v28,
                                                                                          (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_EffectSheetAnimationState__get_Item__);
                  if ( !rendererMaterialStates )
                    goto LABEL_122;
                  v29 = rendererMaterialStates;
                  v30 = (UnityEngine_Object_o *)rendererMaterialStates->fields._items;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Equality(v30, 0, 0) )
                  {
                    rendererMaterialStates = (System_Collections_Generic_List_object__o *)v29->fields._items;
                    if ( !rendererMaterialStates )
                      goto LABEL_122;
                    UnityEngine_Behaviour__set_enabled(
                      (UnityEngine_Behaviour_o *)rendererMaterialStates,
                      (bool)v29->fields._syncRoot,
                      0);
                  }
                  rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._effectSheetAnimationStates;
                  ++v28;
                  if ( !rendererMaterialStates )
                    goto LABEL_122;
                }
                v31 = this->fields._rendererMaterialStates;
                if ( v31 )
                {
                  size = v31->fields._size;
                  v33 = v31->fields._version + 1;
                  v31->fields._size = 0;
                  v31->fields._version = v33;
                  if ( size >= 1 )
                    System_Array__Clear((System_Array_o *)v31->fields._items, 0, size, 0);
                  particleSystemStates = this->fields._particleSystemStates;
                  if ( particleSystemStates )
                  {
                    v35 = particleSystemStates->fields._size;
                    v36 = particleSystemStates->fields._version + 1;
                    particleSystemStates->fields._size = 0;
                    particleSystemStates->fields._version = v36;
                    if ( v35 >= 1 )
                      System_Array__Clear((System_Array_o *)particleSystemStates->fields._items, 0, v35, 0);
                    rendererStates = this->fields._rendererStates;
                    if ( rendererStates )
                    {
                      v38 = rendererStates->fields._size;
                      v39 = rendererStates->fields._version + 1;
                      rendererStates->fields._size = 0;
                      rendererStates->fields._version = v39;
                      if ( v38 >= 1 )
                        System_Array__Clear((System_Array_o *)rendererStates->fields._items, 0, v38, 0);
                      weaponTrailStates = this->fields._weaponTrailStates;
                      if ( weaponTrailStates )
                      {
                        v41 = weaponTrailStates->fields._size;
                        v42 = weaponTrailStates->fields._version + 1;
                        weaponTrailStates->fields._size = 0;
                        weaponTrailStates->fields._version = v42;
                        if ( v41 >= 1 )
                          System_Array__Clear((System_Array_o *)weaponTrailStates->fields._items, 0, v41, 0);
                        effectSheetAnimationStates = this->fields._effectSheetAnimationStates;
                        if ( effectSheetAnimationStates )
                        {
                          v44 = effectSheetAnimationStates->fields._size;
                          v45 = effectSheetAnimationStates->fields._version + 1;
                          effectSheetAnimationStates->fields._size = 0;
                          effectSheetAnimationStates->fields._version = v45;
                          if ( v44 >= 1 )
                            System_Array__Clear((System_Array_o *)effectSheetAnimationStates->fields._items, 0, v44, 0);
                          rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedRenderers;
                          if ( rendererMaterialStates )
                          {
                            System_Collections_Generic_HashSet_object___Clear(
                              (System_Collections_Generic_HashSet_T__o *)rendererMaterialStates,
                              (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_Renderer__Clear__);
                            rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedParticleSystems;
                            if ( rendererMaterialStates )
                            {
                              System_Collections_Generic_HashSet_object___Clear(
                                (System_Collections_Generic_HashSet_T__o *)rendererMaterialStates,
                                (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_ParticleSystem__Clear__);
                              rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedWeaponTrails;
                              if ( rendererMaterialStates )
                              {
                                System_Collections_Generic_HashSet_object___Clear(
                                  (System_Collections_Generic_HashSet_T__o *)rendererMaterialStates,
                                  (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_XWeaponTrail__Clear__);
                                rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._trackedEffectSheetAnimations;
                                if ( rendererMaterialStates )
                                {
                                  System_Collections_Generic_HashSet_object___Clear(
                                    (System_Collections_Generic_HashSet_T__o *)rendererMaterialStates,
                                    (const MethodInfo_3807228 *)Method_System_Collections_Generic_HashSet_FGOEffectSheetAnimation__Clear__);
                                  this->fields._monitorRoot = 0;
                                  p_monitorRoot = &this->fields._monitorRoot;
                                  sub_1D0F058(
                                    (GrandQuestFolderBoardItem_o *)p_monitorRoot,
                                    0,
                                    v47,
                                    v48,
                                    v49,
                                    v50,
                                    v51,
                                    v52);
                                  *((_BYTE *)p_monitorRoot + 140) = 0;
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
LABEL_122:
        sub_1D0F30C(rendererMaterialStates, method);
      }
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                              rendererMaterialStates,
                                                                              v4,
                                                                              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_BattleCharaColorMatrixComponent_RendererMaterialState__get_Item__);
      if ( !rendererMaterialStates )
        goto LABEL_122;
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
LABEL_123:
            sub_1D0F314(rendererMaterialStates);
          v9 = (UnityEngine_Object_o *)*((_QWORD *)&syncRoot[2].klass + v7);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                                          (const MethodInfo_335927C *)Method_System_Array_IndexOf_Material___),
                  ((unsigned int)rendererMaterialStates & 0x80000000) != 0) )
            {
              monitor = (UnityEngine_Object_o *)v6[1].monitor;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                      monitor,
                                                                                      v9,
                                                                                      0);
              if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
              {
                v12 = (UnityEngine_Object_o *)v6[1].fields._items;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                        v12,
                                                                                        v9,
                                                                                        0);
                if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
                {
                  if ( !BattleCharaColorMatrixComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleCharaColorMatrixComponent_TypeInfo);
                  BattleCharaColorMatrixComponent__DestroyMaterial((UnityEngine_Material_o *)v9, method);
                }
              }
            }
          }
          syncRoot = v6->fields._syncRoot;
          ++v7;
          if ( !syncRoot )
            goto LABEL_122;
        }
      }
      v13 = (UnityEngine_Object_o *)v6->fields._items;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(v13, 0, 0);
      if ( ((unsigned __int8)rendererMaterialStates & 1) == 0 )
        break;
LABEL_45:
      rendererMaterialStates = (System_Collections_Generic_List_object__o *)this->fields._rendererMaterialStates;
      ++v4;
      if ( !rendererMaterialStates )
        goto LABEL_122;
    }
    if ( LOBYTE(v6[1].fields._size) )
    {
      v14 = (UnityEngine_ParticleSystemRenderer_o *)v6->fields._items;
      if ( v14 )
      {
        if ( v14->klass == UnityEngine_ParticleSystemRenderer_TypeInfo )
        {
          UnityEngine_Renderer__set_sharedMaterial(
            (UnityEngine_Renderer_o *)v6->fields._items,
            (UnityEngine_Material_o *)v6[1].monitor,
            0);
          UnityEngine_ParticleSystemRenderer__set_trailMaterial(v14, (UnityEngine_Material_o *)v6[1].fields._items, 0);
          goto LABEL_38;
        }
LABEL_37:
        UnityEngine_Renderer__set_sharedMaterials(
          (UnityEngine_Renderer_o *)v14,
          *(UnityEngine_Material_array **)&v6->fields._size,
          0);
LABEL_38:
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
              goto LABEL_123;
            rendererMaterialStates = (System_Collections_Generic_List_object__o *)v6->fields._items;
            if ( rendererMaterialStates )
            {
              UnityEngine_Renderer__SetPropertyBlock_73218116(
                (UnityEngine_Renderer_o *)rendererMaterialStates,
                *((UnityEngine_MaterialPropertyBlock_o **)&klass->_1.byval_arg.data + v16),
                v16,
                0);
              klass = v6[1].klass;
              ++v16;
              if ( klass )
                continue;
            }
            goto LABEL_122;
          }
        }
        goto LABEL_45;
      }
    }
    else
    {
      v14 = (UnityEngine_ParticleSystemRenderer_o *)v6->fields._items;
    }
    if ( !v14 )
      goto LABEL_122;
    goto LABEL_37;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int128 v19; // q0
  __int128 v20; // q2
  __int128 v21; // q3
  UnityEngine_Matrix4x4_o v22; // [xsp+0h] [xbp-80h] BYREF

  if ( (byte_4E7AC6E & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC6E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0, 0);
  if ( v9 )
  {
    if ( !actor )
      sub_1D0F30C(v9, v10);
    transform = UnityEngine_GameObject__get_transform(actor, 0);
    this->fields._monitorRoot = transform;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields._monitorRoot,
      (int32_t)transform,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = *(_OWORD *)&colorMatrix->fields.m03;
  v21 = *(_OWORD *)&colorMatrix->fields.m00;
  v20 = *(_OWORD *)&colorMatrix->fields.m01;
  *(_OWORD *)&v22.fields.m02 = *(_OWORD *)&colorMatrix->fields.m02;
  *(_OWORD *)&v22.fields.m03 = v19;
  *(_OWORD *)&v22.fields.m00 = v21;
  *(_OWORD *)&v22.fields.m01 = v20;
  BattleCharaColorMatrixComponent__SetColorMatrixInternal(this, &v22, matrixBlend, v11);
}


void BattleCharaColorMatrixComponent__SetColorMatrixInternal(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  float v8; // s0
  UnityEngine_Vector4_o Row; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  this->fields._colorMatRow0 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 0, 0);
  this->fields._colorMatRow1 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 1, 0);
  this->fields._colorMatRow2 = UnityEngine_Matrix4x4__GetRow(colorMatrix, 2, 0);
  Row = UnityEngine_Matrix4x4__GetRow(colorMatrix, 3, 0);
  this->fields._colorMatRow3.fields.x = Row.fields.x;
  this->fields._colorMatRow3.fields.y = Row.fields.y;
  v8 = fminf(matrixBlend, 1.0);
  if ( matrixBlend < 0.0 )
    v8 = 0.0;
  this->fields._colorMatRow3.fields.z = Row.fields.z;
  this->fields._colorMatRow3.fields.w = Row.fields.w;
  this->fields._matrixBlend = v8;
  BattleCharaColorMatrixComponent__ApplyColorMatrixPropertiesToAppliedMaterials(this, v7);
}


void BattleCharaColorMatrixComponent__SetColorMatrix_48790288(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_Matrix4x4_o *colorMatrix,
        float matrixBlend,
        const MethodInfo *method)
{
  __int128 v4; // q1
  __int128 v5; // q3
  __int128 v6; // q4
  UnityEngine_Matrix4x4_o v7; // [xsp+0h] [xbp-50h] BYREF

  v4 = *(_OWORD *)&colorMatrix->fields.m03;
  v6 = *(_OWORD *)&colorMatrix->fields.m00;
  v5 = *(_OWORD *)&colorMatrix->fields.m01;
  *(_OWORD *)&v7.fields.m02 = *(_OWORD *)&colorMatrix->fields.m02;
  *(_OWORD *)&v7.fields.m03 = v4;
  *(_OWORD *)&v7.fields.m00 = v6;
  *(_OWORD *)&v7.fields.m01 = v5;
  BattleCharaColorMatrixComponent__SetColorMatrixInternal(this, &v7, matrixBlend, method);
}


void BattleCharaColorMatrixComponent__SetFloatIfHasProperty(
        UnityEngine_Material_o *material,
        System_String_o *propertyName,
        float value,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4E7AC88 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC88 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)material, 0, 0);
  if ( v7 )
  {
    if ( !material )
      sub_1D0F30C(v7, v8);
    if ( UnityEngine_Material__HasProperty_73224956(material, propertyName, 0) )
      UnityEngine_Material__SetFloat(material, propertyName, value, 0);
  }
}


void BattleCharaColorMatrixComponent__SetMatrixBlend(
        BattleCharaColorMatrixComponent_o *this,
        float matrixBlend,
        const MethodInfo *method)
{
  bool v3; // nf
  float v4; // s0

  v3 = matrixBlend < 0.0;
  v4 = fminf(matrixBlend, 1.0);
  if ( v3 )
    v4 = 0.0;
  this->fields._matrixBlend = v4;
  BattleCharaColorMatrixComponent__ApplyColorMatrixPropertiesToAppliedMaterials(this, method);
}


void BattleCharaColorMatrixComponent__SwitchToLocalAndFreeze(
        BattleCharaColorMatrixComponent_o *this,
        UnityEngine_ParticleSystem_o *ps,
        const MethodInfo *method)
{
  UnityEngine_ParticleSystem_MainModule_o v4; // x0
  unsigned int particleCount; // w0
  __int64 v6; // x20
  int Particles_73644536; // w21
  UnityEngine_ParticleSystem_MainModule_o v8; // x0
  unsigned __int64 v9; // x24
  UnityEngine_ParticleSystem_Particle_o *v10; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v12; // x23
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+0h] [xbp-50h] BYREF
  struct UnityEngine_ParticleSystem_o *v14; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E7AC77 & 1) == 0 )
  {
    this = (BattleCharaColorMatrixComponent_o *)sub_1D0F0B4(&UnityEngine_ParticleSystem_Particle___TypeInfo);
    byte_4E7AC77 = 1;
  }
  v14 = 0;
  if ( !ps )
    goto LABEL_15;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
  v4.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  if ( !UnityEngine_ParticleSystem_MainModule__get_simulationSpace(v4, 0) )
    return;
  particleCount = UnityEngine_ParticleSystem__get_particleCount(ps, 0);
  v6 = sub_1D0F15C(UnityEngine_ParticleSystem_Particle___TypeInfo, particleCount);
  Particles_73644536 = UnityEngine_ParticleSystem__GetParticles_73644536(
                         ps,
                         (UnityEngine_ParticleSystem_Particle_array *)v6,
                         0);
  v14 = UnityEngine_ParticleSystem__get_main(ps, 0).fields.m_ParticleSystem;
  v8.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v14;
  UnityEngine_ParticleSystem_MainModule__set_simulationSpace(v8, 0, 0);
  if ( Particles_73644536 >= 1 )
  {
    if ( v6 )
    {
      v9 = 0;
      v10 = (UnityEngine_ParticleSystem_Particle_o *)(v6 + 32);
      do
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ps, 0);
        if ( v9 >= *(unsigned int *)(v6 + 24) )
          goto LABEL_14;
        v12 = transform;
        position = UnityEngine_ParticleSystem_Particle__get_position(v10, 0);
        if ( !v12 )
          goto LABEL_15;
        v16 = UnityEngine_Transform__InverseTransformPoint(v12, position, 0);
        if ( v9 >= *(unsigned int *)(v6 + 24) )
LABEL_14:
          sub_1D0F314(transform);
        UnityEngine_ParticleSystem_Particle__set_position(v10, v16, 0);
        ++v9;
        v10 = (UnityEngine_ParticleSystem_Particle_o *)((char *)v10 + 132);
      }
      while ( Particles_73644536 != v9 );
      goto LABEL_12;
    }
LABEL_15:
    sub_1D0F30C(this, ps);
  }
LABEL_12:
  UnityEngine_ParticleSystem__SetParticles_73644268(
    ps,
    (UnityEngine_ParticleSystem_Particle_array *)v6,
    Particles_73644536,
    0);
}


bool BattleCharaColorMatrixComponent__get_HasValidShader(
        BattleCharaColorMatrixComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *colorMatrixShader; // x19

  if ( (byte_4E7AC6D & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7AC6D = 1;
  }
  colorMatrixShader = (UnityEngine_Object_o *)this->fields._colorMatrixShader;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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