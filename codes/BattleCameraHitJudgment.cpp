void BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_object__int__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_object__int__o *v24; // x20
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  UnityEngine_Vector3_c *v45; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v48; // x8
  __int64 v49; // d0
  float v50; // s1

  if ( (byte_4CF0FC7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4CF0FC7 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.targetColliderAction, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetSkinnedMesh,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v17,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v17;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetColliderUIColliderIndex,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v24;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.targetSvtId, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.updatedSkinnedMeshs,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v38,
    (const MethodInfo_34DFCE8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v38;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.prevSkinnedMeshBounds,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  v45 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4CE7E5E )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    v45 = UnityEngine_Vector3_TypeInfo;
    byte_4CE7E5E = 1;
  }
  v48 = v45->static_fields;
  v49 = *(_QWORD *)&v48->oneVector.fields.x;
  v50 = v48->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v49;
  this->fields.enemyInputRootDefaultScale.fields.z = v50;
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

  if ( (byte_4CF0FC1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_4CF0FC1 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_34EAC08 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_15:
    sub_1C7BD40(targetColliderAction, collider);
  }
}


void BattleCameraHitJudgment__AddUiCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        int32_t uiColliderIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0

  if ( (byte_4CF0FC2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
    byte_4CF0FC2 = 1;
  }
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    sub_1C7BD40(0, collider);
  System_Collections_Generic_Dictionary_object__int___TryAdd(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderUIColliderIndex,
    (Il2CppObject *)collider,
    uiColliderIndex,
    (const MethodInfo_34EAF84 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
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
    sub_1C7BD40(enemyInputRoot, method);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  float v26; // s12
  float32x2_t v27; // d13
  float v28; // s14
  float32x2_t v29; // d15
  float v30; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v32; // d2
  unsigned __int64 v33; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v35; // s8
  float v36; // s9
  float v37; // s10
  UnityEngine_Transform_o *v38; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v40; // x25
  float Float; // s11
  float v42; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  float v49; // [xsp+0h] [xbp-D0h]
  float v50; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v53; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v54; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF0FC5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_FindIndex_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_1C7BAE8(&System_Predicate_int__TypeInfo);
    sub_1C7BAE8(&Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__);
    sub_1C7BAE8(&BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16677/*"_xscale"*/);
    byte_4CF0FC5 = 1;
  }
  v7 = sub_1C7BD34(BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_34E0A18 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v54, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v54.fields.m_Extents.fields.z;
  y = v54.fields.m_Center.fields.y;
  x = v54.fields.m_Center.fields.x;
  v11 = v54.fields.m_Extents.fields.y;
  v49 = v54.fields.m_Extents.fields.x;
  v50 = v54.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v54,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_34E0660 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v12 = *(_QWORD *)&v54.fields.m_Center.fields.x;
  v13 = *(_QWORD *)&v54.fields.m_Center.fields.z;
  v14 = *(_QWORD *)&v54.fields.m_Extents.fields.y;
  if ( !byte_4CE7E57 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E57 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v54, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v15.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Center.fields.y;
  v16 = v54.fields.m_Extents.fields.x;
  v17.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Extents.fields.y;
  v18 = (float)((float)((float)(x - v49) - (float)(*(float *)&v12 - *((float *)&v13 + 1)))
              * (float)((float)(x - v49) - (float)(*(float *)&v12 - *((float *)&v13 + 1))))
      + (float)((float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14))
              * (float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14)));
  v53 = v54.fields.m_Center.fields.x;
  v19 = (float)((float)((float)(v50 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1)))
              * (float)((float)(v50 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1))))
      + v18;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v54,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_34E0660 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v26 = v54.fields.m_Center.fields.x;
  v27.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Center.fields.y;
  v28 = v54.fields.m_Extents.fields.x;
  v29.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Extents.fields.y;
  if ( !byte_4CE7E57 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E57 = 1;
  }
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  v30 = sqrtf(v19);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v30 >= BakeMeshThresholdValue
    || (v32.n64_u64[0] = vsub_f32(vadd_f32(v15, v17), vadd_f32(v27, v29)).n64_u64[0],
        v33 = vmul_f32(v32, v32).n64_u64[0],
        sqrtf(
          *((float *)&v33 + 1)
        + (float)((float)((float)((float)(v53 + v16) - (float)(v26 + v28))
                        * (float)((float)(v53 + v16) - (float)(v26 + v28)))
                + *(float *)&v33)) >= BakeMeshThresholdValue) )
  {
LABEL_52:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0);
      updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0);
        v35 = localScale.fields.x;
        v36 = localScale.fields.y;
        v37 = localScale.fields.z;
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0);
        v38 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4CE7E5E )
        {
          updatedSkinnedMeshs = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E5E = 1;
        }
        if ( v38 )
        {
          UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v40 = (System_Predicate_int__o *)sub_1C7BD34(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v40,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__,
                0);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v40,
                                      (const MethodInfo_3273D3C *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_71735620(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16677/*"_xscale"*/,
                       0) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16677/*"_xscale"*/,
                            0);
                  if ( !byte_4CE7E5D )
                  {
                    sub_1C7BAE8(&UnityEngine_Mathf_TypeInfo);
                    byte_4CE7E5D = 1;
                  }
                  v42 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v42 <= (float)(static_fields->Epsilon * 8.0) )
                    v42 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v42 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v56.fields.y = 1.0;
                    v56.fields.z = 1.0;
                    v56.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v56, 0);
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
                v57.fields.x = v35;
                v57.fields.y = v36;
                v57.fields.z = v37;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v57, 0);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v54,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v54,
                    (const MethodInfo_34E06E0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C7BD40(updatedSkinnedMeshs, v8);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v45 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v46 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v45 )
    goto LABEL_49;
  v47 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = v45 + 8 * v47;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v47 + 1;
    *(_QWORD *)(v48 + 32) = skinnedMesh;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v48 + 32), (int32_t)skinnedMesh, v20, v21, v22, v23, v24, v25);
  }
}


void BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4CF0FC0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_4CF0FC0 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_34E09AC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
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
          (const MethodInfo_34E98E4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0) )
  {
LABEL_12:
    sub_1C7BD40(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_34E98E4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_IEnumerable_T__o *targetColliderUIColliderIndex; // x19
  System_Action_T__o *v14; // x21

  if ( (byte_4CF0FC3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_KeyValuePair_MeshCollider__int___TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__);
    sub_1C7BAE8(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    byte_4CF0FC3 = 1;
  }
  v3 = sub_1C7BD34(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = v4,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12),
        targetColliderUIColliderIndex = (System_Collections_Generic_IEnumerable_T__o *)this->fields.targetColliderUIColliderIndex,
        v14 = (System_Action_T__o *)sub_1C7BD34(System_Action_KeyValuePair_MeshCollider__int___TypeInfo),
        System_Action_KeyValuePair_object__int_____ctor(
          v14,
          (Il2CppObject *)v3,
          Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__,
          0),
        BasicHelper__ForEach_KeyValuePair_object__int__(
          targetColliderUIColliderIndex,
          v14,
          (const MethodInfo_315ADF4 *)Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____),
        (v5 = *(System_Collections_Generic_List_int__o **)(v3 + 16)) == 0) )
  {
    sub_1C7BD40(v5, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v20; // w9
  float fieldOfView; // s0
  float v22; // s11
  float x; // s8
  float y; // s9
  float z; // s10
  unsigned int v26; // s0 OVERLAPPED
  int v27; // s1
  int v28; // s2
  UnityEngine_Transform_o *v29; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v31; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Object_o *gameObject; // x21
  int32_t v40; // w21
  struct UnityEngine_Collider_o **v41; // x20
  struct UnityEngine_Collider_o *v42; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Collider_o *v44; // x22
  UnityEngine_Camera_o *v45; // x22
  UnityEngine_Vector2_o v46; // kr00_8 OVERLAPPED
  int v47; // s2
  float distance; // s8
  _BOOL8 v49; // x0
  __int64 v50; // x1
  struct UnityEngine_BoxCollider_array *v51; // x8
  struct UnityEngine_Collider_o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  UnityEngine_Object_o *v59; // x22
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v67; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v69; // x22
  UnityEngine_Vector2_o v70; // kr08_8 OVERLAPPED
  int v71; // s2
  float v72; // s8
  _BOOL8 v73; // x0
  __int64 v74; // x1
  Il2CppObject *key; // x22
  __int64 v76; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v78; // x0
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  UnityEngine_Camera_o *v86; // x21
  UnityEngine_Vector2_o v87; // kr10_8 OVERLAPPED
  int v88; // s2
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v96; // x3
  UnityEngine_Camera_o *v97; // x21
  unsigned int v98; // w22
  UnityEngine_Vector2_o v99; // kr18_8 OVERLAPPED
  int v100; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v102; // x1
  UnityEngine_Ray_o v103; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v104; // [xsp+30h] [xbp-390h] BYREF
  __int128 v105; // [xsp+50h] [xbp-370h] BYREF
  __int64 v106; // [xsp+60h] [xbp-360h]
  __int128 v107; // [xsp+70h] [xbp-350h] BYREF
  __int64 v108; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v110; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v111; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v112; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v113[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v114; // [xsp+1C0h] [xbp-200h]
  __int64 v115; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v116; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v117; // [xsp+200h] [xbp-1C0h]
  __int64 v118; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v119; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v121; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v122; // [xsp+2E0h] [xbp-E0h] BYREF
  int v123; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v124; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v125; // [xsp+320h] [xbp-A0h] BYREF
  int v126; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF0FC6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_FindIndex_BoxCollider___);
    sub_1C7BAE8(&Method_BattleCameraHitJudgment__LateUpdate_b__31_0__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_1C7BAE8(&UnityEngine_MeshCollider_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_BoxCollider__TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CF0FC6 = 1;
  }
  v117 = 0u;
  v118 = 0;
  memset(&v116, 0, sizeof(v116));
  v114 = 0u;
  v115 = 0;
  memset(&v113[1].fields._version, 0, 24);
  memset(&v121, 0, sizeof(v121));
  memset(&dest, 0, sizeof(dest));
  memset(&v119, 0, sizeof(v119));
  memset(v113, 0, 40);
  memset(&v112, 0, sizeof(v112));
  memset(&v111, 0, sizeof(v111));
  memset(&v110, 0, sizeof(v110));
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
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_touchedCollision, 0, v11, v12, v13, v14, v15, v16);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v20 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v20;
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
      v22 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v22 < 1.0 )
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
        v128 = UnityEngine_Camera__WorldToScreenPoint_71674720((UnityEngine_Camera_o *)enemyInputRoot, position, 0);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v129 = UnityEngine_Camera__ScreenToWorldPoint_71674744((UnityEngine_Camera_o *)enemyInputRoot, v128, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        x = v129.fields.x;
        y = v129.fields.y;
        z = v129.fields.z;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0);
        *(_OWORD *)&v121.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v121.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v121.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v121.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v130.fields.x = x;
        v130.fields.y = y;
        v130.fields.z = z;
        v26 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v121, v130, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v27 = 0;
        v28 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v26,
          0);
        v29 = this->fields.enemyInputRoot;
        if ( !byte_4CE7E5E )
        {
          enemyInputRoot = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
          byte_4CE7E5E = 1;
        }
        if ( !v29 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v131.fields.z = v22 * static_fields->oneVector.fields.z;
        v131.fields.y = v22 * static_fields->oneVector.fields.y;
        v131.fields.x = v22 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v29, v131, 0);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v31 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v31;
        if ( !*v31 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v31;
        if ( !*v31 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0) )
        {
LABEL_50:
          this->fields.touchedCollision = 0;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v33, v34, v35, v36, v37, v38);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0) >= 1 )
      {
        v40 = 0;
        v41 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v40, 0);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0) == this->fields.touchFinderID )
            {
              v42 = *v41;
              if ( *v41
                && (naturalAligment = UnityEngine_MeshCollider_TypeInfo->_2.naturalAligment,
                    v42->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (UnityEngine_MeshCollider_c *)v42->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v44 = *v41;
                else
                  v44 = 0;
              }
              else
              {
                v44 = 0;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0) )
              {
                v86 = this->fields.battleActorCamera;
                v87 = UnityEngine_Touch__get_position(&dest, 0);
                if ( !v86 )
                  goto LABEL_124;
                v88 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_71675208(
                                            (UnityEngine_Ray_o *)&src,
                                            v86,
                                            *(UnityEngine_Vector3_o *)&v87.fields.x,
                                            0);
                v117 = *(_OWORD *)&src.fields.m_FingerId;
                v118 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v44 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v44, 0);
                v123 = 0;
                *(_QWORD *)&v116.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v116.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v117;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v118;
                v122 = v116;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v122, (float *)&v123, 0) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v44,
                         (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v44,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v96);
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v44,
                            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v44,
                                                  (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1C7BD40(enemyInputRoot, v7);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                  goto LABEL_122;
                v102 = (UnityEngine_Ray_o *)&v107;
                v108 = v118;
                v107 = v117;
                enemyInputRoot = (__int64)v44;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_72201328(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       v102,
                       &v119,
                       3.4028e38,
                       0) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                  0,
                  v89,
                  v90,
                  v91,
                  v92,
                  v93,
                  v94);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v59 = (UnityEngine_Object_o *)*v41;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v67 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v67,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__31_0__,
                  0);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v67,
                                 (const MethodInfo_3273ED4 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v97 = this->fields.battleUICamera;
                  v98 = Index_object;
                  v99 = UnityEngine_Touch__get_position(&dest, 0);
                  if ( !v97 )
                    goto LABEL_124;
                  v100 = 0;
                  UnityEngine_Camera__ScreenPointToRay_71675208(
                    (UnityEngine_Ray_o *)&src,
                    v97,
                    *(UnityEngine_Vector3_o *)&v99.fields.x,
                    0);
                  v114 = *(_OWORD *)&src.fields.m_FingerId;
                  v115 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v98 >= LODWORD(uiColliderAction->max_length) )
                      sub_1C7BD48(enemyInputRoot);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v98];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v41;
                  *(_OWORD *)&src.fields.m_FingerId = v114;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v115;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v102 = (UnityEngine_Ray_o *)&v105;
                  v106 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v105 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                0,
                v60,
                v61,
                v62,
                v63,
                v64,
                v65);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0) != 3 && UnityEngine_Touch__get_phase(&dest, 0) != 4 )
          {
            v45 = this->fields.battleUICamera;
            v46 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v45 )
              goto LABEL_124;
            v47 = 0;
            UnityEngine_Camera__ScreenPointToRay_71675208(
              (UnityEngine_Ray_o *)&src,
              v45,
              *(UnityEngine_Vector3_o *)&v46.fields.x,
              0);
            *(_OWORD *)&v113[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v113[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_34E9B4C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v113[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v113[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v113[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v49 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v113,
                      (const MethodInfo_35EF56C *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v49 )
                break;
              v51 = this->fields.uiCollider;
              if ( !v51 )
                sub_1C7BD40(v49, v50);
              if ( LODWORD(v113[0].fields._current.fields.value) >= LODWORD(v51->max_length) )
                sub_1C7BD48(v49);
              v52 = (struct UnityEngine_Collider_o *)v51->m_Items[SLODWORD(v113[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v113[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v113[1].fields._current.fields.value;
              if ( !v52 )
                sub_1C7BD40(v49, v50);
              *(_OWORD *)&v104.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v104.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_72201328(v52, &v104, &v112, 3.4028e38, 0) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v112, 0) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v112, 0);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v52;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                    (int32_t)v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v113,
              (const MethodInfo_35EF690 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v69 = this->fields.battleActorCamera;
            v70 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v69 )
              goto LABEL_124;
            v71 = 0;
            UnityEngine_Camera__ScreenPointToRay_71675208(
              (UnityEngine_Ray_o *)&src,
              v69,
              *(UnityEngine_Vector3_o *)&v70.fields.x,
              0);
            *(_OWORD *)&v113[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v113[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v72 = 3.4028e38;
            *(_OWORD *)&v111.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v111.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v111.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v73 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v111,
                      (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v73 )
                break;
              key = v111.fields._current.fields.key;
              if ( !v111.fields._current.fields.key )
                sub_1C7BD40(v73, v74);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v111.fields._current.fields.key,
                0);
              v126 = 0;
              *(_OWORD *)&v116.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v116.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v125 = *(UnityEngine_Ray_o *)&v113[1].fields._version;
              *(_OWORD *)&v124.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v124.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v125, &v124, (float *)&v126, 0) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1C7BD40(0, v76);
                v78 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v78,
                  v79);
                v103 = *(UnityEngine_Ray_o *)&v113[1].fields._version;
                if ( UnityEngine_Collider__Raycast_72201328((UnityEngine_Collider_o *)key, &v103, &v110, 3.4028e38, 0) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                  if ( v72 > UnityEngine_RaycastHit__get_distance(&v110, 0) )
                  {
                    *v41 = (struct UnityEngine_Collider_o *)key;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                      (int32_t)key,
                      v80,
                      v81,
                      v82,
                      v83,
                      v84,
                      v85);
                    this->fields.isTouched = 1;
                    v72 = UnityEngine_RaycastHit__get_distance(&v110, 0);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v111,
              (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v40;
        }
        while ( v40 < UnityEngine_Input__get_touchCount(0) );
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CF0FC4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0FC4 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_34E1D84 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1C7BD40(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34EAC08 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_34EAC08 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0) )
  {
    this->fields.touchedCollision = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v9, v10, v11, v12, v13, v14);
    this->fields.touchFinderID = -1;
    this->fields.isTouched = 0;
  }
}


void BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battlePerformance = battlePerformance;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battlePerformance,
    (int32_t)battlePerformance,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCameraHitJudgment__SetCamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleActorCamera = camera;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleActorCamera,
    (int32_t)camera,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleCameraHitJudgment__SetUICamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battleUICamera = camera;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleUICamera,
    (int32_t)camera,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool BattleCameraHitJudgment___LateUpdate_b__31_0(
        BattleCameraHitJudgment_o *this,
        UnityEngine_BoxCollider_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_4CF0FC8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0FC8 = 1;
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
  GrandQuestFolderBoardItem_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CF0FBF & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&StringLiteral_15793/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_4CF0FBF = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (GrandQuestFolderBoardItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15793/*"X_SCALE_APPLY_SVTIDS"*/, 0);
    if ( System_String__IsNullOrEmpty(Value, 0) )
      v6 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0);
    p_xScaleApplySvtId->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C7BA8C(p_xScaleApplySvtId, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4CF0FC9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    byte_4CF0FC9 = 1;
  }
  retList = this->fields.retList;
  if ( !retList
    || (items = retList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C7BD40(retList, x.fields.key);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      retList,
      value,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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