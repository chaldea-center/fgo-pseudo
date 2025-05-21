void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_object__object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_object__object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_object__int__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_object__int__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  UnityEngine_Vector3_c *v31; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  __int64 v35; // d0
  float v36; // s1

  if ( (byte_4B471B0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v10);
    sub_1BDB878(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v11);
    byte_4B471B0 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetColliderAction, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v15,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v15;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetSkinnedMesh, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v18,
    (const MethodInfo_33968DC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetColliderUIColliderIndex, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v21,
    (const MethodInfo_33968DC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v21;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.targetSvtId, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v24;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.updatedSkinnedMeshs, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v27,
    (const MethodInfo_338D81C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.prevSkinnedMeshBounds, (int32_t)v27, v28, v29);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v30);
    byte_4B3E911 = 1;
  }
  v31 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4B3E916 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v30);
    v31 = UnityEngine_Vector3_TypeInfo;
    byte_4B3E916 = 1;
  }
  v34 = v31->static_fields;
  v35 = *(_QWORD *)&v34->oneVector.fields.x;
  v36 = v34->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v35;
  this->fields.enemyInputRootDefaultScale.fields.z = v36;
  this->fields.touchFinderID = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCameraHitJudgment__AddCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        int32_t svtId,
        System_Action_o *clickAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0

  if ( (byte_4B471AA & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, collider);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v16);
    byte_4B471AA = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_33A172C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_33A172C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_339873C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  }
  if ( clickAction )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( targetColliderAction )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        targetColliderAction,
        (Il2CppObject *)collider,
        (Il2CppObject *)clickAction,
        (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_3397290 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_15:
    sub_1BDBAD4(targetColliderAction, collider);
  }
}


void __fastcall BattleCameraHitJudgment__AddUiCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        int32_t uiColliderIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0

  if ( (byte_4B471AB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__, collider);
    byte_4B471AB = 1;
  }
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    sub_1BDBAD4(0LL, collider);
  System_Collections_Generic_Dictionary_object__int___TryAdd(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderUIColliderIndex,
    (Il2CppObject *)collider,
    uiColliderIndex,
    (const MethodInfo_3398AB8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
}


void __fastcall BattleCameraHitJudgment__Awake(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *enemyInputRoot; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  enemyInputRoot = this->fields.enemyInputRoot;
  if ( !enemyInputRoot
    || (localPosition = UnityEngine_Transform__get_localPosition(enemyInputRoot, 0LL),
        enemyInputRoot = this->fields.enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition = localPosition,
        !enemyInputRoot) )
  {
    sub_1BDBAD4(enemyInputRoot, method);
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(enemyInputRoot, 0LL);
}


void __fastcall BattleCameraHitJudgment__BakeMesh(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *meshCollider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  const MethodInfo *v18; // x1
  __int64 updatedSkinnedMeshs; // x0
  float z; // s13
  float v21; // s12
  __int64 v22; // x1
  __int64 v23; // kr00_8
  __int64 v24; // kr08_8
  __int64 v25; // kr10_8
  float32x2_t v26; // d9
  float v27; // s10
  float32x2_t v28; // d11
  float v29; // s0
  float v30; // s8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  float v33; // s12
  float32x2_t v34; // d13
  float v35; // s14
  float32x2_t v36; // d15
  float v37; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v39; // d2
  unsigned __int64 v40; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v42; // s8
  float v43; // s9
  float v44; // s10
  UnityEngine_Transform_o *v45; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v47; // x25
  __int64 v48; // x1
  float Float; // s11
  float v50; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  float v57; // [xsp+0h] [xbp-D0h]
  float v58; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v61; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v62; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B471AE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindIndex_int___, meshCollider);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v12);
    sub_1BDB878(&System_Predicate_int__TypeInfo, v13);
    sub_1BDB878(&Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__, v14);
    sub_1BDB878(&BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_16598/*"_xscale"*/, v16);
    byte_4B471AE = 1;
  }
  v17 = sub_1BDBAC4(BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_338E54C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v62, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v62.fields.m_Extents.fields.z;
  y = v62.fields.m_Center.fields.y;
  x = v62.fields.m_Center.fields.x;
  v21 = v62.fields.m_Extents.fields.y;
  v57 = v62.fields.m_Extents.fields.x;
  v58 = v62.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v62,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_338E194 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v23 = *(_QWORD *)&v62.fields.m_Center.fields.x;
  v24 = *(_QWORD *)&v62.fields.m_Center.fields.z;
  v25 = *(_QWORD *)&v62.fields.m_Extents.fields.y;
  if ( !byte_4B3E90F )
  {
    sub_1BDB878(&System_Math_TypeInfo, v22);
    byte_4B3E90F = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v62, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v26.n64_u64[0] = *(unsigned __int64 *)&v62.fields.m_Center.fields.y;
  v27 = v62.fields.m_Extents.fields.x;
  v28.n64_u64[0] = *(unsigned __int64 *)&v62.fields.m_Extents.fields.y;
  v29 = (float)((float)((float)(x - v57) - (float)(*(float *)&v23 - *((float *)&v24 + 1)))
              * (float)((float)(x - v57) - (float)(*(float *)&v23 - *((float *)&v24 + 1))))
      + (float)((float)((float)(y - v21) - (float)(*((float *)&v23 + 1) - *(float *)&v25))
              * (float)((float)(y - v21) - (float)(*((float *)&v23 + 1) - *(float *)&v25)));
  v61 = v62.fields.m_Center.fields.x;
  v30 = (float)((float)((float)(v58 - z) - (float)(*(float *)&v24 - *((float *)&v25 + 1)))
              * (float)((float)(v58 - z) - (float)(*(float *)&v24 - *((float *)&v25 + 1))))
      + v29;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v62,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_338E194 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v33 = v62.fields.m_Center.fields.x;
  v34.n64_u64[0] = *(unsigned __int64 *)&v62.fields.m_Center.fields.y;
  v35 = v62.fields.m_Extents.fields.x;
  v36.n64_u64[0] = *(unsigned __int64 *)&v62.fields.m_Extents.fields.y;
  if ( !byte_4B3E90F )
  {
    sub_1BDB878(&System_Math_TypeInfo, v18);
    byte_4B3E90F = 1;
  }
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  v37 = sqrtf(v30);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v37 >= BakeMeshThresholdValue
    || (v39.n64_u64[0] = vsub_f32(vadd_f32(v26, v28), vadd_f32(v34, v36)).n64_u64[0],
        v40 = vmul_f32(v39, v39).n64_u64[0],
        sqrtf(
          *((float *)&v40 + 1)
        + (float)((float)((float)((float)(v61 + v27) - (float)(v33 + v35))
                        * (float)((float)(v61 + v27) - (float)(v33 + v35)))
                + *(float *)&v40)) >= BakeMeshThresholdValue) )
  {
LABEL_52:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0LL);
        v42 = localScale.fields.x;
        v43 = localScale.fields.y;
        v44 = localScale.fields.z;
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)meshCollider,
                                         0LL);
        v45 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4B3E916 )
        {
          updatedSkinnedMeshs = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v18);
          byte_4B3E916 = 1;
        }
        if ( v45 )
        {
          UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_3397210 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v17 )
            {
              *(_DWORD *)(v17 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v18);
              v47 = (System_Predicate_int__o *)sub_1BDBAC4(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v47,
                (Il2CppObject *)v17,
                Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__,
                0LL);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v47,
                                      (const MethodInfo_3131A64 *)Method_System_Array_FindIndex_int___);
              if ( (updatedSkinnedMeshs & 0x80000000) != 0 )
              {
                if ( !skinnedMesh )
                  goto LABEL_49;
              }
              else
              {
                if ( !skinnedMesh )
                  goto LABEL_49;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0LL);
                if ( !updatedSkinnedMeshs )
                  goto LABEL_49;
                if ( UnityEngine_Material__HasProperty_70150152(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16598/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16598/*"_xscale"*/,
                            0LL);
                  if ( !byte_4B3E915 )
                  {
                    sub_1BDB878(&UnityEngine_Mathf_TypeInfo, v48);
                    byte_4B3E915 = 1;
                  }
                  v50 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v50 <= (float)(static_fields->Epsilon * 8.0) )
                    v50 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v50 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v64.fields.y = 1.0;
                    v64.fields.z = 1.0;
                    v64.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v64, 0LL);
                  }
                }
              }
              UnityEngine_SkinnedMeshRenderer__BakeMesh(skinnedMesh, sharedMesh, 0LL);
              UnityEngine_MeshCollider__set_sharedMesh(meshCollider, sharedMesh, 0LL);
              updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)meshCollider,
                                               0LL);
              if ( updatedSkinnedMeshs )
              {
                v65.fields.x = v42;
                v65.fields.y = v43;
                v65.fields.z = v44;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v65, 0LL);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v62,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v62,
                    (const MethodInfo_338E214 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BDBAD4(updatedSkinnedMeshs, v18);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v53 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v54 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v53 )
    goto LABEL_49;
  v55 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = v53 + 8 * v55;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v55 + 1;
    *(_QWORD *)(v56 + 32) = skinnedMesh;
    sub_1BDB81C((CGThumbnailListItem_o *)(v56 + 32), (int32_t)skinnedMesh, v31, v32);
  }
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B471A9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v6);
    byte_4B471A9 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_33A03B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_33A03B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_338E4E0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
  updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_12;
  size = updatedSkinnedMeshs->fields._size;
  v10 = updatedSkinnedMeshs->fields._version + 1;
  updatedSkinnedMeshs->fields._size = 0;
  updatedSkinnedMeshs->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0LL);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
          (const MethodInfo_3397418 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_3397418 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void __fastcall BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0LL;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v2, v3);
  *((_DWORD *)p_touchedCollision + 3) = -1;
  *((_BYTE *)p_touchedCollision + 8) = 0;
}


System_Int32_array *__fastcall BattleCameraHitJudgment__GetEnableUiColliderIndexes(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  System_Collections_Generic_List_int__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_T__o *targetColliderUIColliderIndex; // x19
  System_Action_T__o *v16; // x21

  if ( (byte_4B471AC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_KeyValuePair_MeshCollider__int___TypeInfo, method);
    sub_1BDB878(&Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1BDB878(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__, v7);
    sub_1BDB878(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v8);
    byte_4B471AC = 1;
  }
  v9 = sub_1BDBAC4(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  v10 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = v10,
        sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v10, v13, v14),
        targetColliderUIColliderIndex = (System_Collections_Generic_IEnumerable_T__o *)this->fields.targetColliderUIColliderIndex,
        v16 = (System_Action_T__o *)sub_1BDBAC4(System_Action_KeyValuePair_MeshCollider__int___TypeInfo),
        System_Action_KeyValuePair_object__int_____ctor(
          v16,
          (Il2CppObject *)v9,
          Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__,
          0LL),
        BasicHelper__ForEach_KeyValuePair_object__int__(
          targetColliderUIColliderIndex,
          v16,
          (const MethodInfo_301E4C8 *)Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____),
        (v11 = *(System_Collections_Generic_List_int__o **)(v9 + 16)) == 0LL) )
  {
    sub_1BDBAD4(v11, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  __int64 enemyInputRoot; // x0
  __int64 v25; // x1
  UICamera_c *v26; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v28; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v34; // w9
  float fieldOfView; // s0
  float v36; // s11
  int v37; // s0
  int v40; // s0
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s8
  float v47; // s9
  float v48; // s10
  unsigned int v49; // s0
  int v50; // s1
  int v51; // s2
  UnityEngine_Transform_o *v52; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v54; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v59; // w21
  struct UnityEngine_Collider_o **v60; // x20
  struct UnityEngine_Collider_o *v61; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Collider_o *v63; // x22
  UnityEngine_Camera_o *v64; // x22
  UnityEngine_Vector2_o v65; // kr00_8
  int v66; // s2
  float distance; // s8
  _BOOL8 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  struct UnityEngine_BoxCollider_array *v71; // x8
  struct UnityEngine_Collider_o *v72; // x22
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UnityEngine_Object_o *v75; // x22
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v79; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v81; // x22
  UnityEngine_Vector2_o v82; // kr08_8
  int v83; // s2
  float v84; // s8
  _BOOL8 v85; // x0
  __int64 v86; // x1
  Il2CppObject *key; // x22
  __int64 v88; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v90; // x0
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  UnityEngine_Camera_o *v94; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v96; // s2
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v100; // x3
  UnityEngine_Camera_o *v101; // x21
  il2cpp_array_size_t v102; // w22
  UnityEngine_Vector2_o v103; // kr18_8
  int v104; // s2
  __int64 v105; // x2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  __int128 *v107; // x1
  UnityEngine_Ray_o v108; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v109; // [xsp+30h] [xbp-390h] BYREF
  __int128 v110; // [xsp+50h] [xbp-370h] BYREF
  __int64 v111; // [xsp+60h] [xbp-360h]
  __int128 v112; // [xsp+70h] [xbp-350h] BYREF
  __int64 v113; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v115; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v116; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v117; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v118[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v119; // [xsp+1C0h] [xbp-200h]
  __int64 v120; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v121; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v122; // [xsp+200h] [xbp-1C0h]
  __int64 v123; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v124; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v126; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v127; // [xsp+2E0h] [xbp-E0h] BYREF
  int v128; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v129; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v130; // [xsp+320h] [xbp-A0h] BYREF
  int v131; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B471AF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindIndex_BoxCollider___, method);
    sub_1BDB878(&Method_BattleCameraHitJudgment__LateUpdate_b__31_0__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v15);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v16);
    sub_1BDB878(&UnityEngine_MeshCollider_TypeInfo, v17);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v18);
    sub_1BDB878(&System_Predicate_BoxCollider__TypeInfo, v19);
    sub_1BDB878(&UICamera_TypeInfo, v20);
    byte_4B471AF = 1;
  }
  v122 = 0uLL;
  v123 = 0LL;
  memset(&v121, 0, sizeof(v121));
  v119 = 0uLL;
  v120 = 0LL;
  memset(&v118[1].fields._version, 0, 24);
  memset(&v126, 0, sizeof(v126));
  memset(&dest, 0, sizeof(dest));
  memset(&v124, 0, sizeof(v124));
  memset(v118, 0, 40);
  memset(&v117, 0, sizeof(v117));
  memset(&v116, 0, sizeof(v116));
  memset(&v115, 0, sizeof(v115));
  battleActorCamera = (UnityEngine_Object_o *)this->fields.battleActorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActorCamera, 0LL, 0LL) )
  {
    battleUICamera = (UnityEngine_Object_o *)this->fields.battleUICamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleUICamera, 0LL, 0LL) )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      enemyInputRoot = UnityEngine_Object__op_Inequality(selectedObject, 0LL, 0LL);
      if ( (enemyInputRoot & 1) != 0 )
      {
        v26 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v26 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v26->static_fields->fallThrough;
        v28 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        enemyInputRoot = UnityEngine_Object__op_Inequality(fallThrough, v28, 0LL);
        if ( (enemyInputRoot & 1) != 0 )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_1BDB81C((CGThumbnailListItem_o *)p_touchedCollision, 0, v29, v30);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v34 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v34;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0LL);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_124;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition,
        0LL);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_124;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultScale,
        0LL);
      enemyInputRoot = (__int64)this->fields.battleActorCamera;
      if ( !enemyInputRoot )
        goto LABEL_124;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)enemyInputRoot, 0LL);
      v36 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v36 < 1.0 )
      {
        enemyInputRoot = (__int64)this->fields.battlePerformance;
        if ( !enemyInputRoot )
          goto LABEL_124;
        enemyInputRoot = (__int64)BattlePerformance__getRepopEnemyTacicalPos(
                                    (BattlePerformance_o *)enemyInputRoot,
                                    0,
                                    0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)enemyInputRoot,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Camera__WorldToScreenPoint_70090008(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v37,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Camera__ScreenToWorldPoint_70090032(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v40,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v46 = v43;
        v47 = v44;
        v48 = v45;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0LL);
        *(_OWORD *)&v126.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v126.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v126.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v126.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v132.fields.x = v46;
        v132.fields.y = v47;
        v132.fields.z = v48;
        v49 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v126, v132, 0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v50 = 0;
        v51 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v49,
          0LL);
        v52 = this->fields.enemyInputRoot;
        if ( !byte_4B3E916 )
        {
          enemyInputRoot = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v25);
          byte_4B3E916 = 1;
        }
        if ( !v52 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v133.fields.z = v36 * static_fields->oneVector.fields.z;
        v133.fields.y = v36 * static_fields->oneVector.fields.y;
        v133.fields.x = v36 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v52, v133, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v54 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v54;
        if ( !*v54 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v54;
        if ( !*v54 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0LL) )
        {
LABEL_50:
          this->fields.touchedCollision = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v56, v57);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v59 = 0;
        v60 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v59, 0LL);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0LL) == this->fields.touchFinderID )
            {
              v61 = *v60;
              if ( *v60
                && (methodPtr_low = LOBYTE(UnityEngine_MeshCollider_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v61->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (UnityEngine_MeshCollider_c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v63 = *v60;
                else
                  v63 = 0LL;
              }
              else
              {
                v63 = 0LL;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL) )
              {
                v94 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&dest, 0LL);
                if ( !v94 )
                  goto LABEL_124;
                v96 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_70090496(
                                            (UnityEngine_Ray_o *)&src,
                                            v94,
                                            *(UnityEngine_Vector3_o *)&position.fields.x,
                                            0LL);
                v122 = *(_OWORD *)&src.fields.m_FingerId;
                v123 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v63 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v63, 0LL);
                v128 = 0;
                *(_QWORD *)&v121.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v121.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v122;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v123;
                v127 = v121;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v127, (float *)&v128, 0LL) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v63,
                         (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v63,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v100);
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v63,
                            (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v63,
                                                  (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( enemyInputRoot )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(enemyInputRoot + 24))(
                          *(_QWORD *)(enemyInputRoot + 64),
                          *(_QWORD *)(enemyInputRoot + 40));
                        goto LABEL_122;
                      }
                    }
                  }
LABEL_124:
                  sub_1BDBAD4(enemyInputRoot, v25);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                  goto LABEL_122;
                v107 = &v112;
                v113 = v123;
                v112 = v122;
                enemyInputRoot = (__int64)v63;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_70613756(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       (UnityEngine_Ray_o *)v107,
                       &v124,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0LL;
                sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v97, v98);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v75 = (UnityEngine_Object_o *)*v60;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v79 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v79,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__31_0__,
                  0LL);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v79,
                                 (const MethodInfo_3131BFC *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v101 = this->fields.battleUICamera;
                  v102 = Index_object;
                  v103 = UnityEngine_Touch__get_position(&dest, 0LL);
                  if ( !v101 )
                    goto LABEL_124;
                  v104 = 0;
                  UnityEngine_Camera__ScreenPointToRay_70090496(
                    (UnityEngine_Ray_o *)&src,
                    v101,
                    *(UnityEngine_Vector3_o *)&v103.fields.x,
                    0LL);
                  v119 = *(_OWORD *)&src.fields.m_FingerId;
                  v120 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0LL);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v102 >= uiColliderAction->max_length )
                      sub_1BDBADC(enemyInputRoot, v25, v105);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v102];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0LL);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v60;
                  *(_OWORD *)&src.fields.m_FingerId = v119;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v120;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v107 = &v110;
                  v111 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v110 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v76, v77);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0LL) != 3 && UnityEngine_Touch__get_phase(&dest, 0LL) != 4 )
          {
            v64 = this->fields.battleUICamera;
            v65 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v64 )
              goto LABEL_124;
            v66 = 0;
            UnityEngine_Camera__ScreenPointToRay_70090496(
              (UnityEngine_Ray_o *)&src,
              v64,
              *(UnityEngine_Vector3_o *)&v65.fields.x,
              0LL);
            *(_OWORD *)&v118[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v118[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_3397680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v118[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v118[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v118[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v68 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v118,
                      (const MethodInfo_349A410 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v68 )
                break;
              v71 = this->fields.uiCollider;
              if ( !v71 )
                sub_1BDBAD4(v68, v69);
              if ( LODWORD(v118[0].fields._current.fields.value) >= v71->max_length )
                sub_1BDBADC(v68, v69, v70);
              v72 = (struct UnityEngine_Collider_o *)v71->m_Items[SLODWORD(v118[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v118[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v118[1].fields._current.fields.value;
              if ( !v72 )
                sub_1BDBAD4(v68, v69);
              *(_OWORD *)&v109.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v109.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_70613756(v72, &v109, &v117, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v117, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v117, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v72;
                  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, (int32_t)v72, v73, v74);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v118,
              (const MethodInfo_349A534 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v81 = this->fields.battleActorCamera;
            v82 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v81 )
              goto LABEL_124;
            v83 = 0;
            UnityEngine_Camera__ScreenPointToRay_70090496(
              (UnityEngine_Ray_o *)&src,
              v81,
              *(UnityEngine_Vector3_o *)&v82.fields.x,
              0LL);
            *(_OWORD *)&v118[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v118[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_33A0660 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v84 = 3.4028e38;
            *(_OWORD *)&v116.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v116.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v116.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v85 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v116,
                      (const MethodInfo_349BF94 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v85 )
                break;
              key = v116.fields._current.fields.key;
              if ( !v116.fields._current.fields.key )
                sub_1BDBAD4(v85, v86);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v116.fields._current.fields.key,
                0LL);
              v131 = 0;
              *(_OWORD *)&v121.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v121.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v130 = *(UnityEngine_Ray_o *)&v118[1].fields._version;
              *(_OWORD *)&v129.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v129.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v130, &v129, (float *)&v131, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1BDBAD4(0LL, v88);
                v90 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v90,
                  v91);
                v108 = *(UnityEngine_Ray_o *)&v118[1].fields._version;
                if ( UnityEngine_Collider__Raycast_70613756((UnityEngine_Collider_o *)key, &v108, &v115, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                  if ( v84 > UnityEngine_RaycastHit__get_distance(&v115, 0LL) )
                  {
                    *v60 = (struct UnityEngine_Collider_o *)key;
                    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, (int32_t)key, v92, v93);
                    this->fields.isTouched = 1;
                    v84 = UnityEngine_RaycastHit__get_distance(&v115, 0LL);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v116,
              (const MethodInfo_349C0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v59;
        }
        while ( v59 < UnityEngine_Input__get_touchCount(0LL) );
      }
    }
  }
}


void __fastcall BattleCameraHitJudgment__RemoveCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4B471AD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, collider);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    byte_4B471AD = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_33A172C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_338F8B8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_33A172C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_339873C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_339873C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v17, v18);
    this->fields.touchFinderID = -1;
    this->fields.isTouched = 0;
  }
}


void __fastcall BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battlePerformance = battlePerformance;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.battlePerformance, (int32_t)battlePerformance, (int32_t)method, v3);
}


void __fastcall BattleCameraHitJudgment__SetCamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleActorCamera = camera;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.battleActorCamera, (int32_t)camera, (int32_t)method, v3);
}


void __fastcall BattleCameraHitJudgment__SetUICamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleUICamera = camera;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.battleUICamera, (int32_t)camera, (int32_t)method, v3);
}


bool __fastcall BattleCameraHitJudgment___LateUpdate_b__31_0(
        BattleCameraHitJudgment_o *this,
        UnityEngine_BoxCollider_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_4B471B1 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B471B1 = 1;
  }
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, touchedCollision, 0LL);
}


System_Int32_array *__fastcall BattleCameraHitJudgment__get_XScaleApplySvtId(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CGThumbnailListItem_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B471A8 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_15712/*"X_SCALE_APPLY_SVTIDS"*/, v3);
    byte_4B471A8 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (CGThumbnailListItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15712/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v7 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
    else
      v7 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (CGThumbnailListItem_c *)v7;
    sub_1BDB81C(p_xScaleApplySvtId, (int32_t)v7, v8, v9);
  }
  return (System_Int32_array *)p_xScaleApplySvtId->klass;
}


void __fastcall BattleCameraHitJudgment___c__DisplayClass28_0___ctor(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleCameraHitJudgment___c__DisplayClass28_0___GetEnableUiColliderIndexes_b__0(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        System_Collections_Generic_KeyValuePair_MeshCollider__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *retList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10

  value = x.fields.value;
  if ( (byte_4B471B2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, x.fields.key);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v5);
    byte_4B471B2 = 1;
  }
  retList = this->fields.retList;
  if ( !retList
    || (items = retList->fields._items,
        v8 = Method_System_Collections_Generic_List_int__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1BDBAD4(retList, x.fields.key);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      retList,
      value,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    items->m_Items[size + 1] = value;
  }
}


void __fastcall BattleCameraHitJudgment___c__DisplayClass30_0___ctor(
        BattleCameraHitJudgment___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCameraHitJudgment___c__DisplayClass30_0___BakeMesh_b__0(
        BattleCameraHitJudgment___c__DisplayClass30_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}