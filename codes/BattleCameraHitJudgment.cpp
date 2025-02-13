void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_Dictionary_object__object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_object__int__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_object__int__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Vector3_c *v45; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v48; // x8
  __int64 v49; // d0
  float v50; // s1

  if ( (byte_4BDEAD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4BDEAD9 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetColliderAction, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetSkinnedMesh, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v17,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetColliderUIColliderIndex,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v24,
    (const MethodInfo_330CDE4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.targetSvtId, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v31;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.updatedSkinnedMeshs,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v38,
    (const MethodInfo_3303D0C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v38;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.prevSkinnedMeshBounds,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  v45 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v45 = UnityEngine_Vector3_TypeInfo;
    byte_4BD6BB6 = 1;
  }
  v48 = v45->static_fields;
  v49 = *(_QWORD *)&v48->oneVector.fields.x;
  v50 = v48->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v49;
  this->fields.enemyInputRootDefaultScale.fields.z = v50;
  this->fields.touchFinderID = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCameraHitJudgment__AddCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        int32_t uiColliderIndex,
        int32_t svtId,
        System_Action_o *clickAction,
        bool isEnableUiCollider,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0

  if ( (byte_4BDEAD5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_4BDEAD5 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_330EC44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_330EC44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            uiColliderIndex,
            (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_330D798 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_1C22094(targetColliderAction, collider);
  }
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
    sub_1C22094(enemyInputRoot, method);
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(enemyInputRoot, 0LL);
}


void __fastcall BattleCameraHitJudgment__BakeMesh(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *meshCollider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        const MethodInfo *method)
{
  __int64 v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *updatedSkinnedMeshs; // x0
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
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
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x8
  float v49; // [xsp+0h] [xbp-D0h]
  float v50; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v53; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v54; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDEAD7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindIndex_int___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    sub_1C21E38(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__);
    sub_1C21E38(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    sub_1C21E38(&StringLiteral_16886/*"_xscale"*/);
    byte_4BDEAD7 = 1;
  }
  v7 = sub_1C22084(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                                                                       (Il2CppObject *)skinnedMesh,
                                                                       (const MethodInfo_3304A3C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v54, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
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
    (const MethodInfo_3304684 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v12 = *(_QWORD *)&v54.fields.m_Center.fields.x;
  v13 = *(_QWORD *)&v54.fields.m_Center.fields.z;
  v14 = *(_QWORD *)&v54.fields.m_Extents.fields.y;
  if ( !byte_4BD6BAF )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BAF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v54, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
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
    (const MethodInfo_3304684 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v26 = v54.fields.m_Center.fields.x;
  v27.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Center.fields.y;
  v28 = v54.fields.m_Extents.fields.x;
  v29.n64_u64[0] = *(unsigned __int64 *)&v54.fields.m_Extents.fields.y;
  if ( !byte_4BD6BAF )
  {
    sub_1C21E38(&System_Math_TypeInfo);
    byte_4BD6BAF = 1;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Math_TypeInfo;
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
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)meshCollider,
                                                                           0LL);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0LL);
        v35 = localScale.fields.x;
        v36 = localScale.fields.y;
        v37 = localScale.fields.z;
        updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)meshCollider,
                                                                             0LL);
        v38 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4BD6BB6 )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        if ( v38 )
        {
          UnityEngine_Transform__set_localScale(v38, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                                                                 (Il2CppObject *)meshCollider,
                                                                                 (const MethodInfo_330D718 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 16) = (_DWORD)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v40 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v40,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                0LL);
              updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Array__FindIndex_int_(
                                                                                   XScaleApplySvtId,
                                                                                   (System_Predicate_T__o *)v40,
                                                                                   (const MethodInfo_30AB808 *)Method_System_Array_FindIndex_int___);
              if ( ((unsigned int)updatedSkinnedMeshs & 0x80000000) != 0 )
              {
                if ( !skinnedMesh )
                  goto LABEL_49;
              }
              else
              {
                if ( !skinnedMesh )
                  goto LABEL_49;
                updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_material(
                                                                                     (UnityEngine_Renderer_o *)skinnedMesh,
                                                                                     0LL);
                if ( !updatedSkinnedMeshs )
                  goto LABEL_49;
                if ( UnityEngine_Material__HasProperty_70735792(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16886/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_material(
                                                                                       (UnityEngine_Renderer_o *)skinnedMesh,
                                                                                       0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16886/*"_xscale"*/,
                            0LL);
                  if ( !byte_4BD6BB5 )
                  {
                    sub_1C21E38(&UnityEngine_Mathf_TypeInfo);
                    byte_4BD6BB5 = 1;
                  }
                  v42 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v42 <= (float)(static_fields->Epsilon * 8.0) )
                    v42 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v42 )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)meshCollider,
                                                                                         0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v56.fields.y = 1.0;
                    v56.fields.z = 1.0;
                    v56.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v56, 0LL);
                  }
                }
              }
              UnityEngine_SkinnedMeshRenderer__BakeMesh(skinnedMesh, sharedMesh, 0LL);
              UnityEngine_MeshCollider__set_sharedMesh(meshCollider, sharedMesh, 0LL);
              updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)meshCollider,
                                                                                   0LL);
              if ( updatedSkinnedMeshs )
              {
                v57.fields.x = v35;
                v57.fields.y = v36;
                v57.fields.z = v37;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v57, 0LL);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_bounds(
                                                                                     &v54,
                                                                                     (UnityEngine_Renderer_o *)skinnedMesh,
                                                                                     0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v54,
                    (const MethodInfo_3304704 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C22094(updatedSkinnedMeshs, v8);
  }
LABEL_43:
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  items = updatedSkinnedMeshs->fields._items;
  v46 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++updatedSkinnedMeshs->fields._version;
  if ( !items )
    goto LABEL_49;
  size = updatedSkinnedMeshs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    updatedSkinnedMeshs->fields._size = size + 1;
    v48[4] = (Il2CppClass *)skinnedMesh;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)skinnedMesh, v20, v21, v22, v23, v24, v25);
  }
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4BDEAD4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_4BDEAD4 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_3316808 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_33049D0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
  updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_12;
  size = updatedSkinnedMeshs->fields._size;
  v6 = updatedSkinnedMeshs->fields._version + 1;
  updatedSkinnedMeshs->fields._size = 0;
  updatedSkinnedMeshs->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0LL);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
          (const MethodInfo_330D920 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_12:
    sub_1C22094(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_330D920 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void __fastcall BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0LL;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 3) = -1;
  *((_BYTE *)p_touchedCollision + 8) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  __int64 enemyInputRoot; // x0
  __int64 v7; // x1
  UICamera_c *v8; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v20; // w9
  float fieldOfView; // s0
  float v22; // s11
  int v23; // s0
  int v26; // s0
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s10
  unsigned int v35; // s0
  int v36; // s1
  int v37; // s2
  UnityEngine_Transform_o *v38; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v40; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_Object_o *gameObject; // x21
  int32_t v49; // w21
  struct UnityEngine_Collider_o **v50; // x20
  struct UnityEngine_Collider_o *v51; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Collider_o *v53; // x22
  UnityEngine_Camera_o *v54; // x22
  UnityEngine_Vector2_o v55; // kr00_8
  int v56; // s2
  float distance; // s8
  _BOOL8 v58; // x0
  __int64 v59; // x1
  struct UnityEngine_BoxCollider_array *v60; // x8
  struct UnityEngine_Collider_o *v61; // x22
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  UnityEngine_Object_o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v76; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v78; // x22
  UnityEngine_Vector2_o v79; // kr08_8
  int v80; // s2
  float v81; // s8
  _BOOL8 v82; // x0
  __int64 v83; // x1
  Il2CppObject *key; // x22
  __int64 v85; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v87; // x0
  const MethodInfo *v88; // x3
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  UnityEngine_Camera_o *v95; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v97; // s2
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v105; // x3
  UnityEngine_Camera_o *v106; // x21
  il2cpp_array_size_t v107; // w22
  UnityEngine_Vector2_o v108; // kr18_8
  int v109; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  __int128 *v111; // x1
  UnityEngine_Ray_o v112; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v113; // [xsp+30h] [xbp-390h] BYREF
  __int128 v114; // [xsp+50h] [xbp-370h] BYREF
  __int64 v115; // [xsp+60h] [xbp-360h]
  __int128 v116; // [xsp+70h] [xbp-350h] BYREF
  __int64 v117; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v119; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v121; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v122[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v123; // [xsp+1C0h] [xbp-200h]
  __int64 v124; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v125; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v126; // [xsp+200h] [xbp-1C0h]
  __int64 v127; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v128; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v130; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v131; // [xsp+2E0h] [xbp-E0h] BYREF
  int v132; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v133; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v134; // [xsp+320h] [xbp-A0h] BYREF
  int v135; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDEAD8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindIndex_BoxCollider___);
    sub_1C21E38(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_1C21E38(&UnityEngine_MeshCollider_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_BoxCollider__TypeInfo);
    sub_1C21E38(&UICamera_TypeInfo);
    byte_4BDEAD8 = 1;
  }
  v126 = 0uLL;
  v127 = 0LL;
  memset(&v125, 0, sizeof(v125));
  v123 = 0uLL;
  v124 = 0LL;
  memset(&v122[1].fields._version, 0, 24);
  memset(&v130, 0, sizeof(v130));
  memset(&dest, 0, sizeof(dest));
  memset(&v128, 0, sizeof(v128));
  memset(v122, 0, 40);
  memset(&v121, 0, sizeof(v121));
  memset(&v120, 0, sizeof(v120));
  memset(&v119, 0, sizeof(v119));
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
        v8 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v8 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v8->static_fields->fallThrough;
        v10 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        enemyInputRoot = UnityEngine_Object__op_Inequality(fallThrough, v10, 0LL);
        if ( (enemyInputRoot & 1) != 0 )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_1C21DDC((PartyOrganizationUtility_o *)p_touchedCollision, 0LL, v11, v12, v13, v14, v15, v16);
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
      v22 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v22 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)enemyInputRoot,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Camera__WorldToScreenPoint_70675584(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v23,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Camera__ScreenToWorldPoint_70675608(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v26,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v32 = v29;
        v33 = v30;
        v34 = v31;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0LL);
        *(_OWORD *)&v130.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v130.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v130.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v130.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v136.fields.x = v32;
        v136.fields.y = v33;
        v136.fields.z = v34;
        v35 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v130, v136, 0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v36 = 0;
        v37 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v35,
          0LL);
        v38 = this->fields.enemyInputRoot;
        if ( !byte_4BD6BB6 )
        {
          enemyInputRoot = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        if ( !v38 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v137.fields.z = v22 * static_fields->oneVector.fields.z;
        v137.fields.y = v22 * static_fields->oneVector.fields.y;
        v137.fields.x = v22 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v38, v137, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v40 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v40;
        if ( !*v40 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v40;
        if ( !*v40 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0LL) )
        {
LABEL_50:
          this->fields.touchedCollision = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v42, v43, v44, v45, v46, v47);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v49 = 0;
        v50 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v49, 0LL);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0LL) == this->fields.touchFinderID )
            {
              v51 = *v50;
              if ( *v50
                && (methodPtr_low = LOBYTE(UnityEngine_MeshCollider_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v51->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (UnityEngine_MeshCollider_c *)v51->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v53 = *v50;
                else
                  v53 = 0LL;
              }
              else
              {
                v53 = 0LL;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
              {
                v95 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&dest, 0LL);
                if ( !v95 )
                  goto LABEL_124;
                v97 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_70676072(
                                            (UnityEngine_Ray_o *)&src,
                                            v95,
                                            *(UnityEngine_Vector3_o *)&position.fields.x,
                                            0LL);
                v126 = *(_OWORD *)&src.fields.m_FingerId;
                v127 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v53 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v53, 0LL);
                v132 = 0;
                *(_QWORD *)&v125.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v125.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v126;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v127;
                v131 = v125;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v131, (float *)&v132, 0LL) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v53,
                         (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v53,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v105);
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v53,
                            (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v53,
                                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1C22094(enemyInputRoot, v7);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                  goto LABEL_122;
                v111 = &v116;
                v117 = v127;
                v116 = v126;
                enemyInputRoot = (__int64)v53;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_71195160(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       (UnityEngine_Ray_o *)v111,
                       &v128,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0LL;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                  0LL,
                  v98,
                  v99,
                  v100,
                  v101,
                  v102,
                  v103);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v68 = (UnityEngine_Object_o *)*v50;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v68, 0LL, 0LL) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v76 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v76,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  0LL);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v76,
                                 (const MethodInfo_30AB9A0 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v106 = this->fields.battleUICamera;
                  v107 = Index_object;
                  v108 = UnityEngine_Touch__get_position(&dest, 0LL);
                  if ( !v106 )
                    goto LABEL_124;
                  v109 = 0;
                  UnityEngine_Camera__ScreenPointToRay_70676072(
                    (UnityEngine_Ray_o *)&src,
                    v106,
                    *(UnityEngine_Vector3_o *)&v108.fields.x,
                    0LL);
                  v123 = *(_OWORD *)&src.fields.m_FingerId;
                  v124 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0LL);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v107 >= uiColliderAction->max_length )
                      sub_1C2209C(enemyInputRoot, v7);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v107];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0LL);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v50;
                  *(_OWORD *)&src.fields.m_FingerId = v123;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v124;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v111 = &v114;
                  v115 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v114 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                0LL,
                v69,
                v70,
                v71,
                v72,
                v73,
                v74);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0LL) != 3 && UnityEngine_Touch__get_phase(&dest, 0LL) != 4 )
          {
            v54 = this->fields.battleUICamera;
            v55 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v54 )
              goto LABEL_124;
            v56 = 0;
            UnityEngine_Camera__ScreenPointToRay_70676072(
              (UnityEngine_Ray_o *)&src,
              v54,
              *(UnityEngine_Vector3_o *)&v55.fields.x,
              0LL);
            *(_OWORD *)&v122[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v122[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_330DB88 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v122[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v122[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v122[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v58 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v122,
                      (const MethodInfo_3410920 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v58 )
                break;
              v60 = this->fields.uiCollider;
              if ( !v60 )
                sub_1C22094(v58, v59);
              if ( LODWORD(v122[0].fields._current.fields.value) >= v60->max_length )
                sub_1C2209C(v58, v59);
              v61 = (struct UnityEngine_Collider_o *)v60->m_Items[SLODWORD(v122[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v122[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v122[1].fields._current.fields.value;
              if ( !v61 )
                sub_1C22094(v58, v59);
              *(_OWORD *)&v113.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v113.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_71195160(v61, &v113, &v121, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v121, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v121, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v61;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                    (int64_t)v61,
                    v62,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v122,
              (const MethodInfo_3410A44 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v78 = this->fields.battleActorCamera;
            v79 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v78 )
              goto LABEL_124;
            v80 = 0;
            UnityEngine_Camera__ScreenPointToRay_70676072(
              (UnityEngine_Ray_o *)&src,
              v78,
              *(UnityEngine_Vector3_o *)&v79.fields.x,
              0LL);
            *(_OWORD *)&v122[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v122[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v81 = 3.4028e38;
            *(_OWORD *)&v120.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v120.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v120.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v82 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v120,
                      (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v82 )
                break;
              key = v120.fields._current.fields.key;
              if ( !v120.fields._current.fields.key )
                sub_1C22094(v82, v83);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v120.fields._current.fields.key,
                0LL);
              v135 = 0;
              *(_OWORD *)&v125.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v125.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v134 = *(UnityEngine_Ray_o *)&v122[1].fields._version;
              *(_OWORD *)&v133.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v133.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v134, &v133, (float *)&v135, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1C22094(0LL, v85);
                v87 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v87,
                  v88);
                v112 = *(UnityEngine_Ray_o *)&v122[1].fields._version;
                if ( UnityEngine_Collider__Raycast_71195160((UnityEngine_Collider_o *)key, &v112, &v119, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                  if ( v81 > UnityEngine_RaycastHit__get_distance(&v119, 0LL) )
                  {
                    *v50 = (struct UnityEngine_Collider_o *)key;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                      (int64_t)key,
                      v89,
                      v90,
                      v91,
                      v92,
                      v93,
                      v94);
                    this->fields.isTouched = 1;
                    v81 = UnityEngine_RaycastHit__get_distance(&v119, 0LL);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v120,
              (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v49;
        }
        while ( v49 < UnityEngine_Input__get_touchCount(0LL) );
      }
    }
  }
}


void __fastcall BattleCameraHitJudgment__RemoveCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDEAD6 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEAD6 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_3305DA8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1C22094(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_330EC44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_330EC44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v9, v10, v11, v12, v13, v14);
    this->fields.touchFinderID = -1;
    this->fields.isTouched = 0;
  }
}


void __fastcall BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battlePerformance = battlePerformance;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battlePerformance,
    (int64_t)battlePerformance,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleCameraHitJudgment__SetCamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battleActorCamera = camera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battleActorCamera,
    (int64_t)camera,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleCameraHitJudgment__SetUICamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.battleUICamera = camera;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battleUICamera,
    (int64_t)camera,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall BattleCameraHitJudgment___LateUpdate_b__29_0(
        BattleCameraHitJudgment_o *this,
        UnityEngine_BoxCollider_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_4BDEADA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEADA = 1;
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
  PartyOrganizationUtility_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDEAD3 & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_16013/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_4BDEAD3 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (PartyOrganizationUtility_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_16013/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v6 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (PartyOrganizationUtility_c *)v6;
    sub_1C21DDC(p_xScaleApplySvtId, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  }
  return (System_Int32_array *)p_xScaleApplySvtId->klass;
}


void __fastcall BattleCameraHitJudgment___c__DisplayClass28_0___ctor(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleCameraHitJudgment___c__DisplayClass28_0___BakeMesh_b__0(
        BattleCameraHitJudgment___c__DisplayClass28_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.svtId == x;
}