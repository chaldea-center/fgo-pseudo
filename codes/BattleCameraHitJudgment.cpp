void BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_object__int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_c *v21; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v24; // x8
  __int64 v25; // d0
  float v26; // s1

  if ( (byte_4CB8C63 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4CB8C63 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetColliderAction, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetSkinnedMesh, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v9,
    (const MethodInfo_34B2258 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetColliderUIColliderIndex, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v12,
    (const MethodInfo_34B2258 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.targetSvtId, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.updatedSkinnedMeshs, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v18,
    (const MethodInfo_34A8E58 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.prevSkinnedMeshBounds, (int32_t)v18, v19, v20);
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4CAFC0E )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    v21 = UnityEngine_Vector3_TypeInfo;
    byte_4CAFC0E = 1;
  }
  v24 = v21->static_fields;
  v25 = *(_QWORD *)&v24->oneVector.fields.x;
  v26 = v24->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v25;
  this->fields.enemyInputRootDefaultScale.fields.z = v26;
  this->fields.touchFinderID = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCameraHitJudgment__AddCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        int32_t svtId,
        System_Action_o *clickAction,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0

  if ( (byte_4CB8C5D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_4CB8C5D = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34B40B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_34B2C0C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_15:
    sub_1C6BC60(targetColliderAction, collider);
  }
}


void BattleCameraHitJudgment__AddUiCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        int32_t uiColliderIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0

  if ( (byte_4CB8C5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
    byte_4CB8C5E = 1;
  }
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    sub_1C6BC60(0, collider);
  System_Collections_Generic_Dictionary_object__int___TryAdd(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderUIColliderIndex,
    (Il2CppObject *)collider,
    uiColliderIndex,
    (const MethodInfo_34B4434 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
}


void BattleCameraHitJudgment__Awake(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *enemyInputRoot; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  enemyInputRoot = this->fields.enemyInputRoot;
  if ( !enemyInputRoot
    || (localPosition = UnityEngine_Transform__get_localPosition(enemyInputRoot, 0),
        enemyInputRoot = this->fields.enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition = localPosition,
        !enemyInputRoot) )
  {
    sub_1C6BC60(enemyInputRoot, method);
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(enemyInputRoot, 0);
}


void BattleCameraHitJudgment__BakeMesh(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *meshCollider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x1
  __int64 updatedSkinnedMeshs; // x0
  float z; // s13
  float v11; // s12
  __int64 v12; // kr00_8
  __int64 v13; // kr08_8
  __int64 v14; // kr10_8
  float32x2_t v15; // d9
  float v16; // s10
  float32x2_t v17; // d11
  float v18; // s0
  float v19; // s8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float v22; // s12
  float32x2_t v23; // d13
  float v24; // s14
  float32x2_t v25; // d15
  float v26; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v28; // d2
  unsigned __int64 v29; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v31; // s8
  float v32; // s9
  float v33; // s10
  UnityEngine_Transform_o *v34; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v36; // x25
  float Float; // s11
  float v38; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  float v45; // [xsp+0h] [xbp-D0h]
  float v46; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v49; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v50; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB8C61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindIndex_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_1C6BA08(&System_Predicate_int__TypeInfo);
    sub_1C6BA08(&Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__);
    sub_1C6BA08(&BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_16610/*"_xscale"*/);
    byte_4CB8C61 = 1;
  }
  v7 = sub_1C6BC54(BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_34A9B88 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v50, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v50.fields.m_Extents.fields.z;
  y = v50.fields.m_Center.fields.y;
  x = v50.fields.m_Center.fields.x;
  v11 = v50.fields.m_Extents.fields.y;
  v45 = v50.fields.m_Extents.fields.x;
  v46 = v50.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v50,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_34A97D0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v12 = *(_QWORD *)&v50.fields.m_Center.fields.x;
  v13 = *(_QWORD *)&v50.fields.m_Center.fields.z;
  v14 = *(_QWORD *)&v50.fields.m_Extents.fields.y;
  if ( !byte_4CAFC07 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC07 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v50, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v15.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Center.fields.y;
  v16 = v50.fields.m_Extents.fields.x;
  v17.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Extents.fields.y;
  v18 = (float)((float)((float)(x - v45) - (float)(*(float *)&v12 - *((float *)&v13 + 1)))
              * (float)((float)(x - v45) - (float)(*(float *)&v12 - *((float *)&v13 + 1))))
      + (float)((float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14))
              * (float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14)));
  v49 = v50.fields.m_Center.fields.x;
  v19 = (float)((float)((float)(v46 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1)))
              * (float)((float)(v46 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1))))
      + v18;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v50,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_34A97D0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v22 = v50.fields.m_Center.fields.x;
  v23.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Center.fields.y;
  v24 = v50.fields.m_Extents.fields.x;
  v25.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Extents.fields.y;
  if ( !byte_4CAFC07 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC07 = 1;
  }
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  v26 = sqrtf(v19);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v26 >= BakeMeshThresholdValue
    || (v28.n64_u64[0] = vsub_f32(vadd_f32(v15, v17), vadd_f32(v23, v25)).n64_u64[0],
        v29 = vmul_f32(v28, v28).n64_u64[0],
        sqrtf(
          *((float *)&v29 + 1)
        + (float)((float)((float)((float)(v49 + v16) - (float)(v22 + v24))
                        * (float)((float)(v49 + v16) - (float)(v22 + v24)))
                + *(float *)&v29)) >= BakeMeshThresholdValue) )
  {
LABEL_52:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0);
      updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0);
        v31 = localScale.fields.x;
        v32 = localScale.fields.y;
        v33 = localScale.fields.z;
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0);
        v34 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4CAFC0E )
        {
          updatedSkinnedMeshs = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        if ( v34 )
        {
          UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_34B2B8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v36 = (System_Predicate_int__o *)sub_1C6BC54(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v36,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__,
                0);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v36,
                                      (const MethodInfo_3241CB8 *)Method_System_Array_FindIndex_int___);
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
                                                 0);
                if ( !updatedSkinnedMeshs )
                  goto LABEL_49;
                if ( UnityEngine_Material__HasProperty_71525148(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16610/*"_xscale"*/,
                       0) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16610/*"_xscale"*/,
                            0);
                  if ( !byte_4CAFC0D )
                  {
                    sub_1C6BA08(&UnityEngine_Mathf_TypeInfo);
                    byte_4CAFC0D = 1;
                  }
                  v38 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v38 <= (float)(static_fields->Epsilon * 8.0) )
                    v38 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v38 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v52.fields.y = 1.0;
                    v52.fields.z = 1.0;
                    v52.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v52, 0);
                  }
                }
              }
              UnityEngine_SkinnedMeshRenderer__BakeMesh(skinnedMesh, sharedMesh, 0);
              UnityEngine_MeshCollider__set_sharedMesh(meshCollider, sharedMesh, 0);
              updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)meshCollider,
                                               0);
              if ( updatedSkinnedMeshs )
              {
                v53.fields.x = v31;
                v53.fields.y = v32;
                v53.fields.z = v33;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v53, 0);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v50,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v50,
                    (const MethodInfo_34A9850 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C6BC60(updatedSkinnedMeshs, v8);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v41 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v42 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v41 )
    goto LABEL_49;
  v43 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = v41 + 8 * v43;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v43 + 1;
    *(_QWORD *)(v44 + 32) = skinnedMesh;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v44 + 32), (int32_t)skinnedMesh, v20, v21);
  }
}


void BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4CB8C5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_4CB8C5C = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_34A9B1C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
  updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_12;
  size = updatedSkinnedMeshs->fields._size;
  v6 = updatedSkinnedMeshs->fields._version + 1;
  updatedSkinnedMeshs->fields._size = 0;
  updatedSkinnedMeshs->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
          (const MethodInfo_34B2D94 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0) )
  {
LABEL_12:
    sub_1C6BC60(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_34B2D94 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v2, v3);
  *((_DWORD *)p_touchedCollision + 3) = -1;
  *((_BYTE *)p_touchedCollision + 8) = 0;
}


System_Int32_array *BattleCameraHitJudgment__GetEnableUiColliderIndexes(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_int__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_T__o *targetColliderUIColliderIndex; // x19
  System_Action_T__o *v10; // x21

  if ( (byte_4CB8C5F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_KeyValuePair_MeshCollider__int___TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__);
    sub_1C6BA08(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    byte_4CB8C5F = 1;
  }
  v3 = sub_1C6BC54(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = v4,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v4, v7, v8),
        targetColliderUIColliderIndex = (System_Collections_Generic_IEnumerable_T__o *)this->fields.targetColliderUIColliderIndex,
        v10 = (System_Action_T__o *)sub_1C6BC54(System_Action_KeyValuePair_MeshCollider__int___TypeInfo),
        System_Action_KeyValuePair_object__int_____ctor(
          v10,
          (Il2CppObject *)v3,
          Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__,
          0),
        BasicHelper__ForEach_KeyValuePair_object__int__(
          targetColliderUIColliderIndex,
          v10,
          (const MethodInfo_3125AFC *)Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____),
        (v5 = *(System_Collections_Generic_List_int__o **)(v3 + 16)) == 0) )
  {
    sub_1C6BC60(v5, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  __int64 enemyInputRoot; // x0
  __int64 v7; // x1
  UICamera_c *v8; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v16; // w9
  float fieldOfView; // s0
  float v18; // s11
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned int v22; // s0 OVERLAPPED
  int v23; // s1
  int v24; // s2
  UnityEngine_Transform_o *v25; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v27; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v32; // w21
  struct UnityEngine_Collider_o **v33; // x20
  struct UnityEngine_Collider_o *v34; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Collider_o *v36; // x22
  UnityEngine_Camera_o *v37; // x22
  UnityEngine_Vector2_o v38; // kr00_8 OVERLAPPED
  int v39; // s2
  float distance; // s8
  _BOOL8 v41; // x0
  __int64 v42; // x1
  struct UnityEngine_BoxCollider_array *v43; // x8
  struct UnityEngine_Collider_o *v44; // x22
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UnityEngine_Object_o *v47; // x22
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v51; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v53; // x22
  UnityEngine_Vector2_o v54; // kr08_8 OVERLAPPED
  int v55; // s2
  float v56; // s8
  _BOOL8 v57; // x0
  __int64 v58; // x1
  Il2CppObject *key; // x22
  __int64 v60; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v62; // x0
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_Camera_o *v66; // x21
  UnityEngine_Vector2_o v67; // kr10_8 OVERLAPPED
  int v68; // s2
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v72; // x3
  UnityEngine_Camera_o *v73; // x21
  unsigned int v74; // w22
  UnityEngine_Vector2_o v75; // kr18_8 OVERLAPPED
  int v76; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v78; // x1
  UnityEngine_Ray_o v79; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v80; // [xsp+30h] [xbp-390h] BYREF
  __int128 v81; // [xsp+50h] [xbp-370h] BYREF
  __int64 v82; // [xsp+60h] [xbp-360h]
  __int128 v83; // [xsp+70h] [xbp-350h] BYREF
  __int64 v84; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v86; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v88; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v90; // [xsp+1C0h] [xbp-200h]
  __int64 v91; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v92; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v93; // [xsp+200h] [xbp-1C0h]
  __int64 v94; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v95; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v97; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v98; // [xsp+2E0h] [xbp-E0h] BYREF
  int v99; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v100; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v101; // [xsp+320h] [xbp-A0h] BYREF
  int v102; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB8C62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_FindIndex_BoxCollider___);
    sub_1C6BA08(&Method_BattleCameraHitJudgment__LateUpdate_b__31_0__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_1C6BA08(&UnityEngine_MeshCollider_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&System_Predicate_BoxCollider__TypeInfo);
    sub_1C6BA08(&UICamera_TypeInfo);
    byte_4CB8C62 = 1;
  }
  v93 = 0u;
  v94 = 0;
  memset(&v92, 0, sizeof(v92));
  v90 = 0u;
  v91 = 0;
  memset(&v89[1].fields._version, 0, 24);
  memset(&v97, 0, sizeof(v97));
  memset(&dest, 0, sizeof(dest));
  memset(&v95, 0, sizeof(v95));
  memset(v89, 0, 40);
  memset(&v88, 0, sizeof(v88));
  memset(&v87, 0, sizeof(v87));
  memset(&v86, 0, sizeof(v86));
  battleActorCamera = (UnityEngine_Object_o *)this->fields.battleActorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleActorCamera, 0, 0) )
  {
    battleUICamera = (UnityEngine_Object_o *)this->fields.battleUICamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battleUICamera, 0, 0) )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      enemyInputRoot = UnityEngine_Object__op_Inequality(selectedObject, 0, 0);
      if ( (enemyInputRoot & 1) != 0 )
      {
        v8 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v8 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v8->static_fields->fallThrough;
        v10 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        enemyInputRoot = UnityEngine_Object__op_Inequality(fallThrough, v10, 0);
        if ( (enemyInputRoot & 1) != 0 )
        {
          this->fields.touchedCollision = 0;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_1C6B9AC((CGThumbnailListItem_o *)p_touchedCollision, 0, v11, v12);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v16 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v16;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_124;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition,
        0);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_124;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultScale,
        0);
      enemyInputRoot = (__int64)this->fields.battleActorCamera;
      if ( !enemyInputRoot )
        goto LABEL_124;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)enemyInputRoot, 0);
      v18 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v18 < 1.0 )
      {
        enemyInputRoot = (__int64)this->fields.battlePerformance;
        if ( !enemyInputRoot )
          goto LABEL_124;
        enemyInputRoot = (__int64)BattlePerformance__getRepopEnemyTacicalPos(
                                    (BattlePerformance_o *)enemyInputRoot,
                                    0,
                                    0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)enemyInputRoot, 0);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v104 = UnityEngine_Camera__WorldToScreenPoint_71464248((UnityEngine_Camera_o *)enemyInputRoot, position, 0);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v105 = UnityEngine_Camera__ScreenToWorldPoint_71464272((UnityEngine_Camera_o *)enemyInputRoot, v104, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        x = v105.fields.x;
        y = v105.fields.y;
        z = v105.fields.z;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0);
        *(_OWORD *)&v97.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v97.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v97.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v97.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v106.fields.x = x;
        v106.fields.y = y;
        v106.fields.z = z;
        v22 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v97, v106, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v23 = 0;
        v24 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v22,
          0);
        v25 = this->fields.enemyInputRoot;
        if ( !byte_4CAFC0E )
        {
          enemyInputRoot = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        if ( !v25 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v107.fields.z = v18 * static_fields->oneVector.fields.z;
        v107.fields.y = v18 * static_fields->oneVector.fields.y;
        v107.fields.x = v18 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v25, v107, 0);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v27 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v27;
        if ( !*v27 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v27;
        if ( !*v27 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0) )
        {
LABEL_50:
          this->fields.touchedCollision = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v29, v30);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0) >= 1 )
      {
        v32 = 0;
        v33 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v32, 0);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0) == this->fields.touchFinderID )
            {
              v34 = *v33;
              if ( *v33
                && (naturalAligment = UnityEngine_MeshCollider_TypeInfo->_2.naturalAligment,
                    v34->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (UnityEngine_MeshCollider_c *)v34->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v36 = *v33;
                else
                  v36 = 0;
              }
              else
              {
                v36 = 0;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0, 0) )
              {
                v66 = this->fields.battleActorCamera;
                v67 = UnityEngine_Touch__get_position(&dest, 0);
                if ( !v66 )
                  goto LABEL_124;
                v68 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_71464736(
                                            (UnityEngine_Ray_o *)&src,
                                            v66,
                                            *(UnityEngine_Vector3_o *)&v67.fields.x,
                                            0);
                v93 = *(_OWORD *)&src.fields.m_FingerId;
                v94 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v36 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v36, 0);
                v99 = 0;
                *(_QWORD *)&v92.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v92.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v93;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v94;
                v98 = v92;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v98, (float *)&v99, 0) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v36,
                         (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v36,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v72);
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v36,
                            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v36,
                                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1C6BC60(enemyInputRoot, v7);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                  goto LABEL_122;
                v78 = (UnityEngine_Ray_o *)&v83;
                v84 = v94;
                v83 = v93;
                enemyInputRoot = (__int64)v36;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_71990856(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       v78,
                       &v95,
                       3.4028e38,
                       0) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0;
                sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v69, v70);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v47 = (UnityEngine_Object_o *)*v33;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v47, 0, 0) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v51 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v51,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__31_0__,
                  0);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v51,
                                 (const MethodInfo_3241E50 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v73 = this->fields.battleUICamera;
                  v74 = Index_object;
                  v75 = UnityEngine_Touch__get_position(&dest, 0);
                  if ( !v73 )
                    goto LABEL_124;
                  v76 = 0;
                  UnityEngine_Camera__ScreenPointToRay_71464736(
                    (UnityEngine_Ray_o *)&src,
                    v73,
                    *(UnityEngine_Vector3_o *)&v75.fields.x,
                    0);
                  v90 = *(_OWORD *)&src.fields.m_FingerId;
                  v91 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v74 >= LODWORD(uiColliderAction->max_length) )
                      sub_1C6BC68(enemyInputRoot);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v74];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v33;
                  *(_OWORD *)&src.fields.m_FingerId = v90;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v91;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v78 = (UnityEngine_Ray_o *)&v81;
                  v82 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v81 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0;
              sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v48, v49);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0) != 3 && UnityEngine_Touch__get_phase(&dest, 0) != 4 )
          {
            v37 = this->fields.battleUICamera;
            v38 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v37 )
              goto LABEL_124;
            v39 = 0;
            UnityEngine_Camera__ScreenPointToRay_71464736(
              (UnityEngine_Ray_o *)&src,
              v37,
              *(UnityEngine_Vector3_o *)&v38.fields.x,
              0);
            *(_OWORD *)&v89[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v89[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_34B2FFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v89[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v89[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v89[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v41 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v89,
                      (const MethodInfo_35B7470 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v41 )
                break;
              v43 = this->fields.uiCollider;
              if ( !v43 )
                sub_1C6BC60(v41, v42);
              if ( LODWORD(v89[0].fields._current.fields.value) >= LODWORD(v43->max_length) )
                sub_1C6BC68(v41);
              v44 = (struct UnityEngine_Collider_o *)v43->m_Items[SLODWORD(v89[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v89[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v89[1].fields._current.fields.value;
              if ( !v44 )
                sub_1C6BC60(v41, v42);
              *(_OWORD *)&v80.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v80.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_71990856(v44, &v80, &v88, 3.4028e38, 0) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v88, 0) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v88, 0);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v44;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, (int32_t)v44, v45, v46);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v89,
              (const MethodInfo_35B7594 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v53 = this->fields.battleActorCamera;
            v54 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v53 )
              goto LABEL_124;
            v55 = 0;
            UnityEngine_Camera__ScreenPointToRay_71464736(
              (UnityEngine_Ray_o *)&src,
              v53,
              *(UnityEngine_Vector3_o *)&v54.fields.x,
              0);
            *(_OWORD *)&v89[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v89[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v56 = 3.4028e38;
            *(_OWORD *)&v87.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v87.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v87.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v57 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v87,
                      (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v57 )
                break;
              key = v87.fields._current.fields.key;
              if ( !v87.fields._current.fields.key )
                sub_1C6BC60(v57, v58);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v87.fields._current.fields.key,
                0);
              v102 = 0;
              *(_OWORD *)&v92.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v92.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v101 = *(UnityEngine_Ray_o *)&v89[1].fields._version;
              *(_OWORD *)&v100.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v100.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v101, &v100, (float *)&v102, 0) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1C6BC60(0, v60);
                v62 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v62,
                  v63);
                v79 = *(UnityEngine_Ray_o *)&v89[1].fields._version;
                if ( UnityEngine_Collider__Raycast_71990856((UnityEngine_Collider_o *)key, &v79, &v86, 3.4028e38, 0) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                  if ( v56 > UnityEngine_RaycastHit__get_distance(&v86, 0) )
                  {
                    *v33 = (struct UnityEngine_Collider_o *)key;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, (int32_t)key, v64, v65);
                    this->fields.isTouched = 1;
                    v56 = UnityEngine_RaycastHit__get_distance(&v86, 0);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v87,
              (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v32;
        }
        while ( v32 < UnityEngine_Input__get_touchCount(0) );
      }
    }
  }
}


void BattleCameraHitJudgment__RemoveCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB8C60 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C60 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_34AAEF4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1C6BC60(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34B40B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34B40B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0) )
  {
    this->fields.touchedCollision = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.touchedCollision, 0, v9, v10);
    this->fields.touchFinderID = -1;
    this->fields.isTouched = 0;
  }
}


void BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battlePerformance = battlePerformance;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.battlePerformance, (int32_t)battlePerformance, (int32_t)method, v3);
}


void BattleCameraHitJudgment__SetCamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleActorCamera = camera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.battleActorCamera, (int32_t)camera, (int32_t)method, v3);
}


void BattleCameraHitJudgment__SetUICamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battleUICamera = camera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.battleUICamera, (int32_t)camera, (int32_t)method, v3);
}


bool BattleCameraHitJudgment___LateUpdate_b__31_0(
        BattleCameraHitJudgment_o *this,
        UnityEngine_BoxCollider_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_4CB8C64 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8C64 = 1;
  }
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, touchedCollision, 0);
}


System_Int32_array *BattleCameraHitJudgment__get_XScaleApplySvtId(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB8C5B & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_15732/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_4CB8C5B = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (CGThumbnailListItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15732/*"X_SCALE_APPLY_SVTIDS"*/, 0);
    if ( System_String__IsNullOrEmpty(Value, 0) )
      v6 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0);
    p_xScaleApplySvtId->klass = (CGThumbnailListItem_c *)v6;
    sub_1C6B9AC(p_xScaleApplySvtId, (int32_t)v6, v7, v8);
  }
  return (System_Int32_array *)p_xScaleApplySvtId->klass;
}


void BattleCameraHitJudgment___c__DisplayClass28_0___ctor(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleCameraHitJudgment___c__DisplayClass28_0___GetEnableUiColliderIndexes_b__0(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        System_Collections_Generic_KeyValuePair_MeshCollider__int__o x,
        const MethodInfo *method)
{
  int32_t value; // w19
  struct System_Collections_Generic_List_int__o *retList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  value = x.fields.value;
  if ( (byte_4CB8C65 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    byte_4CB8C65 = 1;
  }
  retList = this->fields.retList;
  if ( !retList
    || (items = retList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C6BC60(retList, x.fields.key);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      retList,
      value,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    retList->fields._size = size + 1;
    items->m_Items[size] = value;
  }
}


void BattleCameraHitJudgment___c__DisplayClass30_0___ctor(
        BattleCameraHitJudgment___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleCameraHitJudgment___c__DisplayClass30_0___BakeMesh_b__0(
        BattleCameraHitJudgment___c__DisplayClass30_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}