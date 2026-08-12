void BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_object__int__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_object__int__o *v24; // x20
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int v45; // w10
  UnityEngine_Vector3_c *v46; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v49; // x8
  __int64 v50; // d0
  float v51; // s1

  if ( (byte_59731AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_59731AE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetColliderAction,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetSkinnedMesh,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v17,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetColliderUIColliderIndex,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.targetSvtId, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v31;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.updatedSkinnedMeshs,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v38,
    (const MethodInfo_3FE61F4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v38;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.prevSkinnedMeshBounds,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v45 = (unsigned __int8)byte_5969AE5;
  v46 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !v45 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    v46 = UnityEngine_Vector3_TypeInfo;
    byte_5969AE5 = 1;
  }
  v49 = v46->static_fields;
  v50 = *(_QWORD *)&v49->oneVector.fields.x;
  v51 = v49->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v50;
  this->fields.enemyInputRootDefaultScale.fields.z = v51;
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

  if ( (byte_59731A8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_59731A8 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3FF5584 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_3FF409C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_15:
    sub_2213CDC(targetColliderAction, collider);
  }
}


void BattleCameraHitJudgment__AddUiCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        int32_t uiColliderIndex,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0

  if ( (byte_59731A9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
    byte_59731A9 = 1;
  }
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    sub_2213CDC(0, collider);
  System_Collections_Generic_Dictionary_object__int___TryAdd(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderUIColliderIndex,
    (Il2CppObject *)collider,
    uiColliderIndex,
    (const MethodInfo_3FF5C30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__TryAdd__);
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
    sub_2213CDC(enemyInputRoot, method);
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(enemyInputRoot, 0);
}


void BattleCameraHitJudgment__BakeMesh(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *meshCollider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        const MethodInfo *method)
{
  BattleCameraHitJudgment___c__DisplayClass30_0_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 updatedSkinnedMeshs; // x0
  float v10; // s12
  __int64 v11; // kr10_8
  __int64 v12; // x1
  __int64 v13; // kr18_8
  __int64 v14; // kr20_8
  __int64 v15; // kr28_8
  float32x2_t v16; // d10
  float32x2_t v17; // d11
  float v18; // s9
  float v19; // s13
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  float v26; // s12
  float32x2_t v27; // d14
  float32x2_t v28; // d8
  float v29; // s15
  float v30; // s13
  float BakeMeshThresholdValue; // s0
  float32x2_t v32; // d1
  UnityEngine_Mesh_o *sharedMesh; // x23
  UnityEngine_Transform_o *v34; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v36; // x25
  float Float; // s11
  float v38; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v40; // s0
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x8
  float v46; // [xsp+8h] [xbp-C8h]
  float y; // [xsp+Ch] [xbp-C4h]
  float x; // [xsp+10h] [xbp-C0h]
  float z; // [xsp+14h] [xbp-BCh]
  float v50; // [xsp+14h] [xbp-BCh]
  UnityEngine_Bounds_o v51; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_Bounds_o v52; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59731AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    sub_2213A60(&Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__);
    sub_2213A60(&BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
    sub_2213A60(&StringLiteral_17290/*"_xscale"*/);
    byte_59731AC = 1;
  }
  v7 = (BattleCameraHitJudgment___c__DisplayClass30_0_o *)sub_2213CCC(BattleCameraHitJudgment___c__DisplayClass30_0_TypeInfo);
  BattleCameraHitJudgment___c__DisplayClass30_0___ctor(v7, 0);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_3FE6EB4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v52, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  y = v52.fields.m_Center.fields.y;
  x = v52.fields.m_Center.fields.x;
  v10 = v52.fields.m_Extents.fields.x;
  z = v52.fields.m_Center.fields.z;
  v11 = *(_QWORD *)&v52.fields.m_Extents.fields.y;
  v46 = v52.fields.m_Extents.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v52,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_3FE6B3C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v13 = *(_QWORD *)&v52.fields.m_Center.fields.x;
  v14 = *(_QWORD *)&v52.fields.m_Center.fields.z;
  v15 = *(_QWORD *)&v52.fields.m_Extents.fields.y;
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
  UnityEngine_Renderer__get_bounds(&v52, (UnityEngine_Renderer_o *)skinnedMesh, 0);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v16.n64_u64[0] = *(unsigned __int64 *)&v52.fields.m_Center.fields.x;
  v17.n64_u64[0] = *(unsigned __int64 *)&v52.fields.m_Extents.fields.x;
  v18 = v52.fields.m_Extents.fields.z;
  v19 = (float)((float)((float)(z - v46) - (float)(*(float *)&v14 - *((float *)&v15 + 1)))
              * (float)((float)(z - v46) - (float)(*(float *)&v14 - *((float *)&v15 + 1))))
      + (float)((float)((float)((float)(x - v10) - (float)(*(float *)&v13 - *((float *)&v14 + 1)))
                      * (float)((float)(x - v10) - (float)(*(float *)&v13 - *((float *)&v14 + 1))))
              + (float)((float)((float)(y - *(float *)&v11) - (float)(*((float *)&v13 + 1) - *(float *)&v15))
                      * (float)((float)(y - *(float *)&v11) - (float)(*((float *)&v13 + 1) - *(float *)&v15))));
  v50 = v52.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v52,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_3FE6B3C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v26 = v52.fields.m_Center.fields.z;
  v27.n64_u64[0] = *(unsigned __int64 *)&v52.fields.m_Center.fields.x;
  v28.n64_u64[0] = *(unsigned __int64 *)&v52.fields.m_Extents.fields.x;
  v29 = v52.fields.m_Extents.fields.z;
  if ( !byte_5969ADE )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADE = 1;
  }
  v30 = sqrtf(v19);
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v30 >= BakeMeshThresholdValue
    || (v32.n64_u64[0] = vsub_f32(vadd_f32(v16, v17), vadd_f32(v27, v28)).n64_u64[0],
        sqrtf(
          (float)((float)((float)(v50 + v18) - (float)(v26 + v29)) * (float)((float)(v50 + v18) - (float)(v26 + v29)))
        + vaddv_f32(vmul_f32(v32, v32))) >= BakeMeshThresholdValue) )
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
        v34 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_5969AE5 )
        {
          updatedSkinnedMeshs = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
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
                                    (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              v7->fields.svtId = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v36 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v36,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass30_0__BakeMesh_b__0__,
                0);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v36,
                                      (const MethodInfo_39A9D14 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_83277340(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_17290/*"_xscale"*/,
                       0) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_17290/*"_xscale"*/,
                            0);
                  if ( !byte_5969AE4 )
                  {
                    sub_2213A60(&UnityEngine_Mathf_TypeInfo);
                    byte_5969AE4 = 1;
                  }
                  v38 = vabds_f32(1.0, Float);
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  v40 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  if ( v40 <= (float)(static_fields->Epsilon * 8.0) )
                    v40 = static_fields->Epsilon * 8.0;
                  if ( v38 >= v40 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v54.fields.x = Float;
                    v54.fields.y = 1.0;
                    v54.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v54, 0);
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
                  v52 = v51;
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v52,
                    (const MethodInfo_3FE6BBC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_2213CDC(updatedSkinnedMeshs, v8);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = v42 + 8 * v44;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v44 + 1;
    *(_QWORD *)(v45 + 32) = skinnedMesh;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 32), (int32_t)skinnedMesh, v20, v21, v22, v23, v24, v25);
  }
}


void BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_59731A7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_59731A7 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_3FE6E48 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
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
          (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0) )
  {
LABEL_12:
    sub_2213CDC(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_touchedCollision + 8) = 0;
  *((_DWORD *)p_touchedCollision + 3) = -1;
}


System_Int32_array *BattleCameraHitJudgment__GetEnableUiColliderIndexes(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_int__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_IEnumerable_T__o *targetColliderUIColliderIndex; // x19
  System_Action_T__o *v14; // x21

  if ( (byte_59731AA & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_MeshCollider__int___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__);
    sub_2213A60(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    byte_59731AA = 1;
  }
  v3 = sub_2213CCC(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor((BattleCameraHitJudgment___c__DisplayClass28_0_o *)v3, 0);
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3
    || (*(_QWORD *)(v3 + 16) = v4,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12),
        targetColliderUIColliderIndex = (System_Collections_Generic_IEnumerable_T__o *)this->fields.targetColliderUIColliderIndex,
        v14 = (System_Action_T__o *)sub_2213CCC(System_Action_KeyValuePair_MeshCollider__int___TypeInfo),
        System_Action_KeyValuePair_object__int_____ctor(
          v14,
          (Il2CppObject *)v3,
          Method_BattleCameraHitJudgment___c__DisplayClass28_0__GetEnableUiColliderIndexes_b__0__,
          0),
        BasicHelper__ForEach_KeyValuePair_object__int__(
          targetColliderUIColliderIndex,
          v14,
          (const MethodInfo_3811470 *)Method_BasicHelper_ForEach_KeyValuePair_MeshCollider__int____),
        (v5 = *(System_Collections_Generic_List_int__o **)(v3 + 16)) == 0) )
  {
    sub_2213CDC(v5, v6);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActorCamera; // x20
  int v4; // w8
  __int64 v5; // x1
  UnityEngine_Object_o *battleUICamera; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *selectedObject; // x20
  __int64 enemyInputRoot; // x0
  __int64 v11; // x1
  UICamera_c *v12; // x0
  UnityEngine_Object_o *fallThrough; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  bool *p_isTouched; // x25
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v26; // w9
  float fieldOfView; // s0
  float v28; // s11
  UnityEngine_Transform_o *v29; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v31; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t i; // w20
  __int64 v42; // x1
  struct UnityEngine_Collider_o *v43; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Collider_o *v45; // x21
  UnityEngine_Camera_o *v46; // x21
  float distance; // s8
  _BOOL8 v48; // x0
  __int64 v49; // x1
  struct UnityEngine_BoxCollider_array *v50; // x8
  struct UnityEngine_Collider_o *v51; // x21
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  UnityEngine_Object_o *v59; // x21
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Object_array *uiCollider; // x21
  System_Predicate_object__o *v67; // x22
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v69; // x21
  float v70; // s8
  _BOOL8 v71; // x0
  __int64 v72; // x1
  Il2CppObject *key; // x21
  __int64 v74; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x3
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  UnityEngine_Camera_o *v84; // x20
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  Il2CppObject *Item; // x0
  const MethodInfo *v92; // x3
  unsigned int v93; // w21
  UnityEngine_Camera_o *v94; // x20
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v96; // x1
  UnityEngine_Ray_o v97; // [xsp+10h] [xbp-3E0h] BYREF
  UnityEngine_Ray_o v98; // [xsp+30h] [xbp-3C0h] BYREF
  __int128 v99; // [xsp+50h] [xbp-3A0h] BYREF
  __int64 v100; // [xsp+60h] [xbp-390h]
  UnityEngine_Ray_o v101; // [xsp+70h] [xbp-380h] BYREF
  UnityEngine_Bounds_o v102; // [xsp+90h] [xbp-360h] BYREF
  UnityEngine_Ray_o v103; // [xsp+A8h] [xbp-348h] BYREF
  UnityEngine_Touch_o src; // [xsp+C0h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v105; // [xsp+110h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v106; // [xsp+140h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v107; // [xsp+170h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v108[2]; // [xsp+1A0h] [xbp-250h] BYREF
  __int128 v109; // [xsp+1F0h] [xbp-200h]
  __int64 v110; // [xsp+200h] [xbp-1F0h]
  _BYTE v111[64]; // [xsp+210h] [xbp-1E0h] BYREF
  UnityEngine_RaycastHit_o v112; // [xsp+250h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+280h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v114; // [xsp+2D0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v115; // [xsp+310h] [xbp-E0h] BYREF
  int v116; // [xsp+32Ch] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v117; // [xsp+330h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v118; // [xsp+350h] [xbp-A0h] BYREF
  int v119; // [xsp+36Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v120; // 0:kr20_12.12
  UnityEngine_Vector3_o v121; // 0:kr40_12.12
  UnityEngine_Vector3_o v122; // 0:kr54_12.12
  UnityEngine_Vector3_o v123; // 0:kr60_12.12
  UnityEngine_Vector3_o v124; // 0:kr74_12.12
  UnityEngine_Vector2_o v125; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v126; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v127; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v128; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59731AD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindIndex_BoxCollider___);
    sub_2213A60(&Method_BattleCameraHitJudgment__LateUpdate_b__31_0__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_2213A60(&UnityEngine_MeshCollider_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_BoxCollider__TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59731AD = 1;
  }
  battleActorCamera = (UnityEngine_Object_o *)this->fields.battleActorCamera;
  memset(&v111[32], 0, 24);
  v4 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  memset(v108, 0, 40);
  memset(&v112, 0, sizeof(v112));
  memset(&dest, 0, sizeof(dest));
  memset(&v114, 0, sizeof(v114));
  memset(v111, 0, 24);
  v109 = 0u;
  v110 = 0;
  memset(&v108[1].fields._version, 0, 24);
  memset(&v106, 0, sizeof(v106));
  memset(&v107, 0, sizeof(v107));
  memset(&v105, 0, sizeof(v105));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battleActorCamera, 0, 0) )
  {
    battleUICamera = (UnityEngine_Object_o *)this->fields.battleUICamera;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(battleUICamera, 0, 0) )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      enemyInputRoot = UnityEngine_Object__op_Inequality(selectedObject, 0, 0);
      if ( (enemyInputRoot & 1) != 0 )
      {
        v12 = UICamera_TypeInfo;
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
          v12 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v12->static_fields->fallThrough;
        v15 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        enemyInputRoot = UnityEngine_Object__op_Inequality(fallThrough, v15, 0);
        if ( (enemyInputRoot & 1) != 0 )
        {
          this->fields.touchedCollision = 0;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p_touchedCollision, 0, v16, v17, v18, v19, v20, v21);
          p_isTouched = (bool *)(p_touchedCollision + 1);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          goto LABEL_123;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_125;
      size = updatedSkinnedMeshs->fields._size;
      v26 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v26;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_125;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition,
        0);
      enemyInputRoot = (__int64)this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_125;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)enemyInputRoot,
        this->fields.enemyInputRootDefaultScale,
        0);
      enemyInputRoot = (__int64)this->fields.battleActorCamera;
      if ( !enemyInputRoot )
        goto LABEL_125;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)enemyInputRoot, 0);
      v28 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v28 < 1.0 )
      {
        enemyInputRoot = (__int64)this->fields.battlePerformance;
        if ( !enemyInputRoot )
          goto LABEL_125;
        enemyInputRoot = (__int64)BattlePerformance__getRepopEnemyTacicalPos(
                                    (BattlePerformance_o *)enemyInputRoot,
                                    0,
                                    0);
        if ( !enemyInputRoot )
          goto LABEL_125;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)enemyInputRoot, 0);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_125;
        v131 = UnityEngine_Camera__WorldToScreenPoint_83198204((UnityEngine_Camera_o *)enemyInputRoot, position, 0);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_125;
        v120 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)enemyInputRoot, v131, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_125;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_125;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0);
        v114 = *(UnityEngine_Matrix4x4_o *)&src.fields.m_FingerId;
        LODWORD(v132.fields.x) = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v114, v120, 0);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_125;
        v132.fields.y = 0.0;
        v132.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)enemyInputRoot, v132, 0);
        v29 = this->fields.enemyInputRoot;
        if ( !byte_5969AE5 )
        {
          enemyInputRoot = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v29 )
          goto LABEL_125;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v129.fields.z = v28 * static_fields->oneVector.fields.z;
        v129.fields.y = v28 * static_fields->oneVector.fields.y;
        v129.fields.x = v28 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v29, v129, 0);
      }
      p_isTouched = &this->fields.isTouched;
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v31 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v31;
        if ( !*v31 )
          goto LABEL_125;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
        if ( UnityEngine_Object__op_Equality(gameObject, 0, 0) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v31;
        if ( !*v31 )
          goto LABEL_125;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0);
        if ( !enemyInputRoot )
          goto LABEL_125;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0) )
        {
LABEL_50:
          this->fields.touchedCollision = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision,
            0,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          this->fields.isTouched = 0;
          this->fields.touchFinderID = -1;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0) >= 1 )
      {
        for ( i = 0; i < UnityEngine_Input__get_touchCount(0); ++i )
        {
          UnityEngine_Input__GetTouch(&src, i, 0);
          memcpy(&dest, &src, sizeof(dest));
          if ( *p_isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0) == this->fields.touchFinderID )
            {
              v43 = this->fields.touchedCollision;
              if ( v43
                && (naturalAligment = UnityEngine_MeshCollider_TypeInfo->_2.naturalAligment,
                    v43->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (UnityEngine_MeshCollider_c *)v43->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v45 = this->fields.touchedCollision;
                else
                  v45 = 0;
              }
              else
              {
                v45 = 0;
              }
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0, 0) )
              {
                v84 = this->fields.battleActorCamera;
                v127 = UnityEngine_Touch__get_position(&dest, 0);
                if ( !v84 )
                  goto LABEL_125;
                *(UnityEngine_Vector2_o *)&v123.fields.x = v127;
                v123.fields.z = 0.0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_83198808(&v103, v84, v123, 0);
                *(UnityEngine_Ray_o *)&v111[32] = v103;
                if ( !v45 )
                  goto LABEL_125;
                UnityEngine_Collider__get_bounds(&v102, v45, 0);
                *(UnityEngine_Bounds_o *)v111 = v102;
                *(UnityEngine_Ray_o *)&src.fields.m_FingerId = *(UnityEngine_Ray_o *)&v111[32];
                v116 = 0;
                v115 = v102;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v115, (float *)&v116, 0) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_125;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v45,
                         (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v45,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v92);
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v45,
                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v45,
                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( enemyInputRoot )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(enemyInputRoot + 24))(
                          *(_QWORD *)(enemyInputRoot + 64),
                          *(_QWORD *)(enemyInputRoot + 40));
                        goto LABEL_122;
                      }
                    }
                  }
LABEL_125:
                  sub_2213CDC(enemyInputRoot, v11);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                  goto LABEL_122;
                v96 = &v101;
                enemyInputRoot = (__int64)v45;
                v101 = *(UnityEngine_Ray_o *)&v111[32];
LABEL_121:
                if ( UnityEngine_Collider__Raycast_83882544(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       v96,
                       &v112,
                       3.4028e38,
                       0) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision,
                  0,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89,
                  v90);
                this->fields.touchFinderID = -1;
LABEL_123:
                *p_isTouched = 0;
                return;
              }
              v59 = (UnityEngine_Object_o *)this->fields.touchedCollision;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
              if ( UnityEngine_Object__op_Inequality(v59, 0, 0) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v67 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v67,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__31_0__,
                  0);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v67,
                                 (const MethodInfo_39A9EAC *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v93 = Index_object;
                  v94 = this->fields.battleUICamera;
                  v128 = UnityEngine_Touch__get_position(&dest, 0);
                  if ( !v94 )
                    goto LABEL_125;
                  *(UnityEngine_Vector2_o *)&v124.fields.x = v128;
                  v124.fields.z = 0.0;
                  UnityEngine_Camera__ScreenPointToRay_83198808((UnityEngine_Ray_o *)&src, v94, v124, 0);
                  v109 = *(_OWORD *)&src.fields.m_FingerId;
                  v110 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_125;
                    if ( v93 >= LODWORD(uiColliderAction->max_length) )
                      sub_2213CE4(enemyInputRoot);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v93];
                    if ( !enemyInputRoot )
                      goto LABEL_125;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)this->fields.touchedCollision;
                  if ( !enemyInputRoot )
                    goto LABEL_125;
                  v96 = (UnityEngine_Ray_o *)&v99;
                  v100 = v110;
                  v99 = v109;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision,
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
            v46 = this->fields.battleUICamera;
            v125 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v46 )
              goto LABEL_125;
            *(UnityEngine_Vector2_o *)&v121.fields.x = v125;
            v121.fields.z = 0.0;
            UnityEngine_Camera__ScreenPointToRay_83198808((UnityEngine_Ray_o *)&v115, v46, v121, 0);
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            *(UnityEngine_Bounds_o *)&v108[1].fields._version = v115;
            if ( !enemyInputRoot )
              goto LABEL_125;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_3FF4498 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            v108[0] = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src.fields.m_FingerId;
            distance = 3.4028e38;
            *(_QWORD *)&src.fields.m_FingerId = 0;
            *(_QWORD *)&src.fields.m_Position.fields.y = v108;
            while ( 1 )
            {
              v48 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v108,
                      (const MethodInfo_4167460 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v48 )
                break;
              v50 = this->fields.uiCollider;
              if ( !v50 )
                sub_2213CDC(v48, v49);
              if ( LODWORD(v108[0].fields._current.fields.value) >= LODWORD(v50->max_length) )
                sub_2213CE4(v48);
              v51 = (struct UnityEngine_Collider_o *)v50->m_Items[SLODWORD(v108[0].fields._current.fields.value)];
              if ( !v51 )
                sub_2213CDC(v48, v49);
              v98 = *(UnityEngine_Ray_o *)&v108[1].fields._version;
              if ( UnityEngine_Collider__Raycast_83882544(v51, &v98, &v107, 3.4028e38, 0) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v107, 0) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v107, 0);
                  this->fields.touchedCollision = v51;
                  *p_isTouched = 1;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision,
                    (int32_t)v51,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v108,
              (const MethodInfo_4167584 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( *p_isTouched )
              return;
            v69 = this->fields.battleActorCamera;
            v126 = UnityEngine_Touch__get_position(&dest, 0);
            if ( !v69 )
              goto LABEL_125;
            *(UnityEngine_Vector2_o *)&v122.fields.x = v126;
            v122.fields.z = 0.0;
            UnityEngine_Camera__ScreenPointToRay_83198808((UnityEngine_Ray_o *)&v115, v69, v122, 0);
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            *(UnityEngine_Bounds_o *)&v108[1].fields._version = v115;
            if ( !enemyInputRoot )
              goto LABEL_125;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            *(_QWORD *)&v115.fields.m_Center.fields.x = 0;
            v106 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src.fields.m_FingerId;
            v70 = 3.4028e38;
            *(_QWORD *)&v115.fields.m_Center.fields.z = &v106;
            while ( 1 )
            {
              v71 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v106,
                      (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v71 )
                break;
              key = v106.fields._current.fields.key;
              if ( !v106.fields._current.fields.key )
                sub_2213CDC(v71, v72);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v106.fields._current.fields.key,
                0);
              v119 = 0;
              *(UnityEngine_Bounds_o *)v111 = *(UnityEngine_Bounds_o *)&src.fields.m_FingerId;
              v118 = *(UnityEngine_Ray_o *)&v108[1].fields._version;
              v117 = *(UnityEngine_Bounds_o *)&src.fields.m_FingerId;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v118, &v117, (float *)&v119, 0) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_2213CDC(0, v74);
                v76 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v76,
                  v77);
                v97 = *(UnityEngine_Ray_o *)&v108[1].fields._version;
                if ( UnityEngine_Collider__Raycast_83882544((UnityEngine_Collider_o *)key, &v97, &v105, 3.4028e38, 0) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0);
                  if ( v70 > UnityEngine_RaycastHit__get_distance(&v105, 0) )
                  {
                    this->fields.touchedCollision = (struct UnityEngine_Collider_o *)key;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision,
                      (int32_t)key,
                      v78,
                      v79,
                      v80,
                      v81,
                      v82,
                      v83);
                    *p_isTouched = 1;
                    v70 = UnityEngine_RaycastHit__get_distance(&v105, 0);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v106,
              (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( *p_isTouched )
              return;
          }
        }
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
  __int64 v8; // x1
  UnityEngine_Object_o *touchedCollision; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59731AB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59731AB = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_3FE8224 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3FF5584 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3FF5584 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0) )
  {
    this->fields.touchedCollision = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.touchedCollision, 0, v10, v11, v12, v13, v14, v15);
    this->fields.isTouched = 0;
    this->fields.touchFinderID = -1;
  }
}


void BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battlePerformance = battlePerformance;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battlePerformance,
    (int32_t)battlePerformance,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battleActorCamera = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleActorCamera,
    (int32_t)camera,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battleUICamera = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleUICamera,
    (int32_t)camera,
    (System_String_o *)method,
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

  if ( (byte_59731AF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59731AF = 1;
  }
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, touchedCollision, 0);
}


System_Int32_array *BattleCameraHitJudgment__get_XScaleApplySvtId(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59731A6 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_16353/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_59731A6 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (MissionNaviTransitionBoardItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_16353/*"X_SCALE_APPLY_SVTIDS"*/, 0);
    if ( System_String__IsNullOrEmpty(Value, 0) )
      v6 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0);
    p_xScaleApplySvtId->klass = (MissionNaviTransitionBoardItem_c *)v6;
    sub_2213A04(p_xScaleApplySvtId, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_5973319 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    byte_5973319 = 1;
  }
  retList = this->fields.retList;
  if ( !retList
    || (items = retList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++retList->fields._version,
        !items) )
  {
    sub_2213CDC(retList, x.fields.key);
  }
  size = retList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      retList,
      value,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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