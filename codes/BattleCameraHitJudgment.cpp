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

  if ( (byte_4D33385 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4D33385 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetColliderAction, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetSkinnedMesh,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v17,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetColliderUIColliderIndex,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_3525324 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.targetSvtId, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v31;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.updatedSkinnedMeshs,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v38,
    (const MethodInfo_351C264 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v38;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.prevSkinnedMeshBounds,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v45 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4D2A13E )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    v45 = UnityEngine_Vector3_TypeInfo;
    byte_4D2A13E = 1;
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

  if ( (byte_4D3337F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_4D3337F = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3527184 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_3525CD8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_15:
    sub_1C93D2C(targetColliderAction, collider);
  }
}


void BattleCameraHitJudgment__AddUiCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        int32_t uiColliderIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0

  if ( (byte_4D33380 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
    byte_4D33380 = 1;
  }
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    sub_1C93D2C(0, collider);
  System_Collections_Generic_Dictionary_object__int___TryAdd(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderUIColliderIndex,
    (Il2CppObject *)collider,
    uiColliderIndex,
    (const MethodInfo_3527500 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
}


void BattleCameraHitJudgment__Awake(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *enemyInputRoot; // x0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  enemyInputRoot = this->fields.enemyInputRoot;
  if ( !enemyInputRoot
    || (localPosition = UnityEngine_Transform__get_localPosition(enemyInputRoot, 0),
        enemyInputRoot = this->fields.enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition = localPosition,
        !enemyInputRoot) )
  {
    sub_1C93D2C(enemyInputRoot, method);
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
  __int64 v12; // kr10_8
  __int64 v13; // kr18_8
  __int64 v14; // kr20_8
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
  UnityEngine_Transform_o *v35; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v37; // x25
  float Float; // s11
  float v39; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  float v46; // [xsp+0h] [xbp-D0h]
  float v47; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v50; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v51; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33383 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__);
    sub_1C93AD4(&BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_16719/*"_xscale"*/);
    byte_4D33383 = 1;
  }
  v7 = sub_1C93D20(BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_351CF94 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v51, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v51.fields.m_Extents.fields.z;
  y = v51.fields.m_Center.fields.y;
  x = v51.fields.m_Center.fields.x;
  v11 = v51.fields.m_Extents.fields.y;
  v46 = v51.fields.m_Extents.fields.x;
  v47 = v51.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v51,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_351CBDC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v12 = *(_QWORD *)&v51.fields.m_Center.fields.x;
  v13 = *(_QWORD *)&v51.fields.m_Center.fields.z;
  v14 = *(_QWORD *)&v51.fields.m_Extents.fields.y;
  if ( !byte_4D2A137 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A137 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v51, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v15.n64_u64[0] = *(unsigned __int64 *)&v51.fields.m_Center.fields.y;
  v16 = v51.fields.m_Extents.fields.x;
  v17.n64_u64[0] = *(unsigned __int64 *)&v51.fields.m_Extents.fields.y;
  v18 = (float)((float)((float)(x - v46) - (float)(*(float *)&v12 - *((float *)&v13 + 1)))
              * (float)((float)(x - v46) - (float)(*(float *)&v12 - *((float *)&v13 + 1))))
      + (float)((float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14))
              * (float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14)));
  v50 = v51.fields.m_Center.fields.x;
  v19 = (float)((float)((float)(v47 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1)))
              * (float)((float)(v47 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1))))
      + v18;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v51,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_351CBDC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v26 = v51.fields.m_Center.fields.x;
  v27.n64_u64[0] = *(unsigned __int64 *)&v51.fields.m_Center.fields.y;
  v28 = v51.fields.m_Extents.fields.x;
  v29.n64_u64[0] = *(unsigned __int64 *)&v51.fields.m_Extents.fields.y;
  if ( !byte_4D2A137 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A137 = 1;
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
        + (float)((float)((float)((float)(v50 + v16) - (float)(v26 + v28))
                        * (float)((float)(v50 + v16) - (float)(v26 + v28)))
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
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0);
        v35 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4D2A13E )
        {
          updatedSkinnedMeshs = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( v35 )
        {
          UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v37 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v37,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__,
                0);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v37,
                                      (const MethodInfo_32A9C90 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_71985380(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16719/*"_xscale"*/,
                       0) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16719/*"_xscale"*/,
                            0);
                  if ( !byte_4D2A13D )
                  {
                    sub_1C93AD4(&UnityEngine_Mathf_TypeInfo);
                    byte_4D2A13D = 1;
                  }
                  v39 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v39 <= (float)(static_fields->Epsilon * 8.0) )
                    v39 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v39 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v53.fields.y = 1.0;
                    v53.fields.z = 1.0;
                    v53.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v53, 0);
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
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, localScale, 0);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v51,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v51,
                    (const MethodInfo_351CC5C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C93D2C(updatedSkinnedMeshs, v8);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v42 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v43 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v42 )
    goto LABEL_49;
  v44 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = v42 + 8 * v44;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v44 + 1;
    *(_QWORD *)(v45 + 32) = skinnedMesh;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v45 + 32), (int32_t)skinnedMesh, v20, v21, v22, v23, v24, v25);
  }
}


void BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4D3337E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_4D3337E = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_352ED30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_351CF28 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
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
          (const MethodInfo_3525E60 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0) )
  {
LABEL_12:
    sub_1C93D2C(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_3525E60 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4D33381 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_KeyValuePair_MeshCollider__int___TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__);
    sub_1C93AD4(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    byte_4D33381 = 1;
  }
  v3 = sub_1C93D20(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = v4,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12),
        targetColliderUIColliderIndex = (System_Collections_Generic_IEnumerable_T__o *)this->fields.targetColliderUIColliderIndex,
        v14 = (System_Action_T__o *)sub_1C93D20(System_Action_KeyValuePair_MeshCollider__int___TypeInfo),
        System_Action_KeyValuePair_object__int_____ctor(
          v14,
          (Il2CppObject *)v3,
          Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__,
          0),
        BasicHelper__ForEach_KeyValuePair_object__int__(
          targetColliderUIColliderIndex,
          v14,
          (const MethodInfo_318F244 *)Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____),
        (v5 = *(System_Collections_Generic_List_int__o **)(v3 + 16)) == 0) )
  {
    sub_1C93D2C(v5, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


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
  UnityEngine_Transform_o *v23; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v25; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Object_o *gameObject; // x21
  int32_t v34; // w21
  struct UnityEngine_Collider_o **v35; // x20
  struct UnityEngine_Collider_o *v36; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Collider_o *v38; // x22
  UnityEngine_Camera_o *v39; // x22
  float distance; // s8
  _BOOL8 v41; // x0
  __int64 v42; // x1
  struct UnityEngine_BoxCollider_array *v43; // x8
  struct UnityEngine_Collider_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  UnityEngine_Object_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v59; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v61; // x22
  float v62; // s8
  _BOOL8 v63; // x0
  __int64 v64; // x1
  Il2CppObject *key; // x22
  __int64 v66; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v68; // x0
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  UnityEngine_Camera_o *v76; // x21
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v84; // x3
  UnityEngine_Camera_o *v85; // x21
  unsigned int v86; // w22
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v88; // x1
  UnityEngine_Ray_o v89; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v90; // [xsp+30h] [xbp-390h] BYREF
  __int128 v91; // [xsp+50h] [xbp-370h] BYREF
  __int64 v92; // [xsp+60h] [xbp-360h]
  __int128 v93; // [xsp+70h] [xbp-350h] BYREF
  __int64 v94; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v96; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v97; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v98; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v99[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v100; // [xsp+1C0h] [xbp-200h]
  __int64 v101; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v102; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v103; // [xsp+200h] [xbp-1C0h]
  __int64 v104; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v105; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v107; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v108; // [xsp+2E0h] [xbp-E0h] BYREF
  int v109; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v110; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v111; // [xsp+320h] [xbp-A0h] BYREF
  int v112; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v113; // 0:kr20_12.12
  UnityEngine_Vector3_o v114; // 0:kr40_12.12
  UnityEngine_Vector3_o v115; // 0:kr54_12.12
  UnityEngine_Vector3_o v116; // 0:kr60_12.12
  UnityEngine_Vector3_o v117; // 0:kr74_12.12
  UnityEngine_Vector2_o v118; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v119; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v120; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v121; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D33384 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_BoxCollider___);
    sub_1C93AD4(&Method_BattleCameraHitJudgment__LateUpdate_b__31_0__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_1C93AD4(&UnityEngine_MeshCollider_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_BoxCollider__TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D33384 = 1;
  }
  v103 = 0u;
  v104 = 0;
  memset(&v102, 0, sizeof(v102));
  v100 = 0u;
  v101 = 0;
  memset(&v99[1].fields._version, 0, 24);
  memset(&v107, 0, sizeof(v107));
  memset(&dest, 0, sizeof(dest));
  memset(&v105, 0, sizeof(v105));
  memset(v99, 0, 40);
  memset(&v98, 0, sizeof(v98));
  memset(&v97, 0, sizeof(v97));
  memset(&v96, 0, sizeof(v96));
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
          sub_1C93A78((GrandQuestFolderBoardItem_o *)p_touchedCollision, 0, v11, v12, v13, v14, v15, v16);
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
        v124 = UnityEngine_Camera__WorldToScreenPoint_71924480((UnityEngine_Camera_o *)enemyInputRoot, position, 0);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v113 = UnityEngine_Camera__ScreenToWorldPoint_71924504((UnityEngine_Camera_o *)enemyInputRoot, v124, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0);
        v107 = *(UnityEngine_Matrix4x4_o *)&src.fields.m_FingerId;
        LODWORD(v125.fields.x) = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v107, v113, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v125.fields.y = 0.0;
        v125.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)enemyInputRoot, v125, 0);
        v23 = this->fields.enemyInputRoot;
        if ( !byte_4D2A13E )
        {
          enemyInputRoot = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( !v23 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v122.fields.z = v22 * static_fields->oneVector.fields.z;
        v122.fields.y = v22 * static_fields->oneVector.fields.y;
        v122.fields.x = v22 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v23, v122, 0);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v25 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v25;
        if ( !*v25 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v25;
        if ( !*v25 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0) )
        {
LABEL_50:
          this->fields.touchedCollision = 0;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v27, v28, v29, v30, v31, v32);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0) >= 1 )
      {
        v34 = 0;
        v35 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v34, 0);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0) == this->fields.touchFinderID )
            {
              v36 = *v35;
              if ( *v35
                && (naturalAligment = UnityEngine_MeshCollider_TypeInfo->_2.naturalAligment,
                    v36->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (UnityEngine_MeshCollider_c *)v36->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v38 = *v35;
                else
                  v38 = 0;
              }
              else
              {
                v38 = 0;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0, 0) )
              {
                v76 = this->fields.battleActorCamera;
                v120 = UnityEngine_Touch__get_position(&dest, 0);
                if ( !v76 )
                  goto LABEL_124;
                *(UnityEngine_Vector2_o *)&v116.fields.x = v120;
                v116.fields.z = 0.0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_71924968(
                                            (UnityEngine_Ray_o *)&src,
                                            v76,
                                            v116,
                                            0);
                v103 = *(_OWORD *)&src.fields.m_FingerId;
                v104 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v38 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v38, 0);
                v109 = 0;
                v102 = *(UnityEngine_Bounds_o *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v103;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v104;
                v108 = v102;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v108, (float *)&v109, 0) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v38,
                         (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v38,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v84);
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v38,
                            (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v38,
                                                  (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1C93D2C(enemyInputRoot, v7);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                  goto LABEL_122;
                v88 = (UnityEngine_Ray_o *)&v93;
                v94 = v104;
                v93 = v103;
                enemyInputRoot = (__int64)v38;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_72451088(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       v88,
                       &v105,
                       3.4028e38,
                       0) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                  0,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v51 = (UnityEngine_Object_o *)*v35;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v59 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v59,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__31_0__,
                  0);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v59,
                                 (const MethodInfo_32A9E28 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v85 = this->fields.battleUICamera;
                  v86 = Index_object;
                  v121 = UnityEngine_Touch__get_position(&dest, 0);
                  if ( !v85 )
                    goto LABEL_124;
                  *(UnityEngine_Vector2_o *)&v117.fields.x = v121;
                  v117.fields.z = 0.0;
                  UnityEngine_Camera__ScreenPointToRay_71924968((UnityEngine_Ray_o *)&src, v85, v117, 0);
                  v100 = *(_OWORD *)&src.fields.m_FingerId;
                  v101 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v86 >= LODWORD(uiColliderAction->max_length) )
                      sub_1C93D34(enemyInputRoot);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v86];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v35;
                  *(_OWORD *)&src.fields.m_FingerId = v100;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v101;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v88 = (UnityEngine_Ray_o *)&v91;
                  v92 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v91 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                0,
                v52,
                v53,
                v54,
                v55,
                v56,
                v57);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0) != 3 && UnityEngine_Touch__get_phase(&dest, 0) != 4 )
          {
            v39 = this->fields.battleUICamera;
            v118 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v39 )
              goto LABEL_124;
            *(UnityEngine_Vector2_o *)&v114.fields.x = v118;
            v114.fields.z = 0.0;
            UnityEngine_Camera__ScreenPointToRay_71924968((UnityEngine_Ray_o *)&src, v39, v114, 0);
            *(UnityEngine_Ray_o *)&v99[1].fields._version = *(UnityEngine_Ray_o *)&src.fields.m_FingerId;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_35260C8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v99[0] = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src.fields.m_FingerId;
            while ( 1 )
            {
              v41 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v99,
                      (const MethodInfo_362C6A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v41 )
                break;
              v43 = this->fields.uiCollider;
              if ( !v43 )
                sub_1C93D2C(v41, v42);
              if ( LODWORD(v99[0].fields._current.fields.value) >= LODWORD(v43->max_length) )
                sub_1C93D34(v41);
              v44 = (struct UnityEngine_Collider_o *)v43->m_Items[SLODWORD(v99[0].fields._current.fields.value)];
              *(UnityEngine_Ray_o *)&src.fields.m_FingerId = *(UnityEngine_Ray_o *)&v99[1].fields._version;
              if ( !v44 )
                sub_1C93D2C(v41, v42);
              v90 = *(UnityEngine_Ray_o *)&src.fields.m_FingerId;
              if ( UnityEngine_Collider__Raycast_72451088(v44, &v90, &v98, 3.4028e38, 0) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v98, 0) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v98, 0);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v44;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                    (int32_t)v44,
                    v45,
                    v46,
                    v47,
                    v48,
                    v49,
                    v50);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v99,
              (const MethodInfo_362C7C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v61 = this->fields.battleActorCamera;
            v119 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v61 )
              goto LABEL_124;
            *(UnityEngine_Vector2_o *)&v115.fields.x = v119;
            v115.fields.z = 0.0;
            UnityEngine_Camera__ScreenPointToRay_71924968((UnityEngine_Ray_o *)&src, v61, v115, 0);
            *(UnityEngine_Ray_o *)&v99[1].fields._version = *(UnityEngine_Ray_o *)&src.fields.m_FingerId;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v62 = 3.4028e38;
            v97 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src.fields.m_FingerId;
            while ( 1 )
            {
              v63 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v97,
                      (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v63 )
                break;
              key = v97.fields._current.fields.key;
              if ( !v97.fields._current.fields.key )
                sub_1C93D2C(v63, v64);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v97.fields._current.fields.key,
                0);
              v112 = 0;
              v102 = *(UnityEngine_Bounds_o *)&src.fields.m_FingerId;
              v111 = *(UnityEngine_Ray_o *)&v99[1].fields._version;
              v110 = *(UnityEngine_Bounds_o *)&src.fields.m_FingerId;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v111, &v110, (float *)&v112, 0) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1C93D2C(0, v66);
                v68 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v68,
                  v69);
                v89 = *(UnityEngine_Ray_o *)&v99[1].fields._version;
                if ( UnityEngine_Collider__Raycast_72451088((UnityEngine_Collider_o *)key, &v89, &v96, 3.4028e38, 0) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                  if ( v62 > UnityEngine_RaycastHit__get_distance(&v96, 0) )
                  {
                    *v35 = (struct UnityEngine_Collider_o *)key;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision,
                      (int32_t)key,
                      v70,
                      v71,
                      v72,
                      v73,
                      v74,
                      v75);
                    this->fields.isTouched = 1;
                    v62 = UnityEngine_RaycastHit__get_distance(&v96, 0);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v97,
              (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v34;
        }
        while ( v34 < UnityEngine_Input__get_touchCount(0) );
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

  if ( (byte_4D33382 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33382 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_351E300 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1C93D2C(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_35300A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3527184 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3527184 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0) )
  {
    this->fields.touchedCollision = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.touchedCollision, 0, v9, v10, v11, v12, v13, v14);
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
  sub_1C93A78(
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
  sub_1C93A78(
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
  sub_1C93A78(
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

  if ( (byte_4D33386 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33386 = 1;
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

  if ( (byte_4D3337D & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&StringLiteral_15835/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_4D3337D = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (GrandQuestFolderBoardItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15835/*"X_SCALE_APPLY_SVTIDS"*/, 0);
    if ( System_String__IsNullOrEmpty(Value, 0) )
      v6 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0);
    p_xScaleApplySvtId->klass = (GrandQuestFolderBoardItem_c *)v6;
    sub_1C93A78(p_xScaleApplySvtId, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4D33387 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    byte_4D33387 = 1;
  }
  retList = this->fields.retList;
  if ( !retList
    || (items = retList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_1C93D2C(retList, x.fields.key);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      retList,
      value,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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