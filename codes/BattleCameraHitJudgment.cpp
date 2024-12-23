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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_Dictionary_object__object__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_Dictionary_object__int__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_object__int__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  UnityEngine_Vector3_c *v55; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v58; // x8
  __int64 v59; // d0
  float v60; // s1

  if ( (byte_4B69103 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v11);
    byte_4B69103 = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v12;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.targetColliderAction,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.targetSkinnedMesh, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v26,
    (const MethodInfo_32A6B28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v26;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.targetColliderUIColliderIndex,
    (int64_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v33,
    (const MethodInfo_32A6B28 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v33;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.targetSvtId, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v40;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.updatedSkinnedMeshs,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v47,
    (const MethodInfo_329D7E0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v47;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.prevSkinnedMeshBounds,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v54);
    byte_4B612E1 = 1;
  }
  v55 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4B612E6 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v54);
    v55 = UnityEngine_Vector3_TypeInfo;
    byte_4B612E6 = 1;
  }
  v58 = v55->static_fields;
  v59 = *(_QWORD *)&v58->oneVector.fields.x;
  v60 = v58->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v59;
  this->fields.enemyInputRootDefaultScale.fields.z = v60;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0

  if ( (byte_4B690FF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, collider);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v20);
    byte_4B690FF = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_32B1720 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_32B1720 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_32A8988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_32A8988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_32B0224 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_32B0224 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            uiColliderIndex,
            (const MethodInfo_32A74DC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_32A74DC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_1BE4D28(targetColliderAction, collider);
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
    sub_1BE4D28(enemyInputRoot, method);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  float v37; // s12
  float32x2_t v38; // d13
  float v39; // s14
  float32x2_t v40; // d15
  float v41; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v43; // d2
  unsigned __int64 v44; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v46; // s8
  float v47; // s9
  float v48; // s10
  UnityEngine_Transform_o *v49; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v51; // x25
  __int64 v52; // x1
  float Float; // s11
  float v54; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  float v61; // [xsp+0h] [xbp-D0h]
  float v62; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v65; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v66; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B69101 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindIndex_int___, meshCollider);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v12);
    sub_1BE4ACC(&System_Predicate_int__TypeInfo, v13);
    sub_1BE4ACC(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v14);
    sub_1BE4ACC(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_16816/*"_xscale"*/, v16);
    byte_4B69101 = 1;
  }
  v17 = sub_1BE4D18(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_329E510 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v66, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v66.fields.m_Extents.fields.z;
  y = v66.fields.m_Center.fields.y;
  x = v66.fields.m_Center.fields.x;
  v21 = v66.fields.m_Extents.fields.y;
  v61 = v66.fields.m_Extents.fields.x;
  v62 = v66.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v66,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_329E158 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v23 = *(_QWORD *)&v66.fields.m_Center.fields.x;
  v24 = *(_QWORD *)&v66.fields.m_Center.fields.z;
  v25 = *(_QWORD *)&v66.fields.m_Extents.fields.y;
  if ( !byte_4B612DF )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v22);
    byte_4B612DF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v66, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v26.n64_u64[0] = *(unsigned __int64 *)&v66.fields.m_Center.fields.y;
  v27 = v66.fields.m_Extents.fields.x;
  v28.n64_u64[0] = *(unsigned __int64 *)&v66.fields.m_Extents.fields.y;
  v29 = (float)((float)((float)(x - v61) - (float)(*(float *)&v23 - *((float *)&v24 + 1)))
              * (float)((float)(x - v61) - (float)(*(float *)&v23 - *((float *)&v24 + 1))))
      + (float)((float)((float)(y - v21) - (float)(*((float *)&v23 + 1) - *(float *)&v25))
              * (float)((float)(y - v21) - (float)(*((float *)&v23 + 1) - *(float *)&v25)));
  v65 = v66.fields.m_Center.fields.x;
  v30 = (float)((float)((float)(v62 - z) - (float)(*(float *)&v24 - *((float *)&v25 + 1)))
              * (float)((float)(v62 - z) - (float)(*(float *)&v24 - *((float *)&v25 + 1))))
      + v29;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v66,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_329E158 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v37 = v66.fields.m_Center.fields.x;
  v38.n64_u64[0] = *(unsigned __int64 *)&v66.fields.m_Center.fields.y;
  v39 = v66.fields.m_Extents.fields.x;
  v40.n64_u64[0] = *(unsigned __int64 *)&v66.fields.m_Extents.fields.y;
  if ( !byte_4B612DF )
  {
    sub_1BE4ACC(&System_Math_TypeInfo, v18);
    byte_4B612DF = 1;
  }
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  v41 = sqrtf(v30);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v41 >= BakeMeshThresholdValue
    || (v43.n64_u64[0] = vsub_f32(vadd_f32(v26, v28), vadd_f32(v38, v40)).n64_u64[0],
        v44 = vmul_f32(v43, v43).n64_u64[0],
        sqrtf(
          *((float *)&v44 + 1)
        + (float)((float)((float)((float)(v65 + v27) - (float)(v37 + v39))
                        * (float)((float)(v65 + v27) - (float)(v37 + v39)))
                + *(float *)&v44)) >= BakeMeshThresholdValue) )
  {
LABEL_52:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0LL);
        v46 = localScale.fields.x;
        v47 = localScale.fields.y;
        v48 = localScale.fields.z;
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)meshCollider,
                                         0LL);
        v49 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4B612E6 )
        {
          updatedSkinnedMeshs = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v18);
          byte_4B612E6 = 1;
        }
        if ( v49 )
        {
          UnityEngine_Transform__set_localScale(v49, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_32A745C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v17 )
            {
              *(_DWORD *)(v17 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v18);
              v51 = (System_Predicate_int__o *)sub_1BE4D18(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v51,
                (Il2CppObject *)v17,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                0LL);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v51,
                                      (const MethodInfo_30548D4 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_70318180(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16816/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16816/*"_xscale"*/,
                            0LL);
                  if ( !byte_4B612E5 )
                  {
                    sub_1BE4ACC(&UnityEngine_Mathf_TypeInfo, v52);
                    byte_4B612E5 = 1;
                  }
                  v54 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v54 <= (float)(static_fields->Epsilon * 8.0) )
                    v54 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v54 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v68.fields.y = 1.0;
                    v68.fields.z = 1.0;
                    v68.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v68, 0LL);
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
                v69.fields.x = v46;
                v69.fields.y = v47;
                v69.fields.z = v48;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v69, 0LL);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v66,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v66,
                    (const MethodInfo_329E1D8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BE4D28(updatedSkinnedMeshs, v18);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v57 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v58 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v57 )
    goto LABEL_49;
  v59 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = v57 + 8 * v59;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v59 + 1;
    *(_QWORD *)(v60 + 32) = skinnedMesh;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 32), (int64_t)skinnedMesh, v31, v32, v33, v34, v35, v36);
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

  if ( (byte_4B690FE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v6);
    byte_4B690FE = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_32B03AC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_32B03AC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_329E4A4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
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
          (const MethodInfo_32A7664 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_12:
    sub_1BE4D28(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_32A7664 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 3) = -1;
  *((_BYTE *)p_touchedCollision + 8) = 0;
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
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v38; // w9
  float fieldOfView; // s0
  float v40; // s11
  int v41; // s0
  int v44; // s0
  float v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s8
  float v51; // s9
  float v52; // s10
  unsigned int v53; // s0
  int v54; // s1
  int v55; // s2
  UnityEngine_Transform_o *v56; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v58; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  UnityEngine_Object_o *gameObject; // x21
  int32_t v67; // w21
  struct UnityEngine_Collider_o **v68; // x20
  struct UnityEngine_Collider_o *v69; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Collider_o *v71; // x22
  UnityEngine_Camera_o *v72; // x22
  UnityEngine_Vector2_o v73; // kr00_8
  int v74; // s2
  float distance; // s8
  _BOOL8 v76; // x0
  __int64 v77; // x1
  struct UnityEngine_BoxCollider_array *v78; // x8
  struct UnityEngine_Collider_o *v79; // x22
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  UnityEngine_Object_o *v86; // x22
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v94; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v96; // x22
  UnityEngine_Vector2_o v97; // kr08_8
  int v98; // s2
  float v99; // s8
  _BOOL8 v100; // x0
  __int64 v101; // x1
  Il2CppObject *key; // x22
  __int64 v103; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v105; // x0
  const MethodInfo *v106; // x3
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  UnityEngine_Camera_o *v113; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v115; // s2
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v123; // x3
  UnityEngine_Camera_o *v124; // x21
  il2cpp_array_size_t v125; // w22
  UnityEngine_Vector2_o v126; // kr18_8
  int v127; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  __int128 *v129; // x1
  UnityEngine_Ray_o v130; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v131; // [xsp+30h] [xbp-390h] BYREF
  __int128 v132; // [xsp+50h] [xbp-370h] BYREF
  __int64 v133; // [xsp+60h] [xbp-360h]
  __int128 v134; // [xsp+70h] [xbp-350h] BYREF
  __int64 v135; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v137; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v138; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v139; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v140[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v141; // [xsp+1C0h] [xbp-200h]
  __int64 v142; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v143; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v144; // [xsp+200h] [xbp-1C0h]
  __int64 v145; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v146; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v148; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v149; // [xsp+2E0h] [xbp-E0h] BYREF
  int v150; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v151; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v152; // [xsp+320h] [xbp-A0h] BYREF
  int v153; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B69102 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_FindIndex_BoxCollider___, method);
    sub_1BE4ACC(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v16);
    sub_1BE4ACC(&UnityEngine_MeshCollider_TypeInfo, v17);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v18);
    sub_1BE4ACC(&System_Predicate_BoxCollider__TypeInfo, v19);
    sub_1BE4ACC(&UICamera_TypeInfo, v20);
    byte_4B69102 = 1;
  }
  v144 = 0uLL;
  v145 = 0LL;
  memset(&v143, 0, sizeof(v143));
  v141 = 0uLL;
  v142 = 0LL;
  memset(&v140[1].fields._version, 0, 24);
  memset(&v148, 0, sizeof(v148));
  memset(&dest, 0, sizeof(dest));
  memset(&v146, 0, sizeof(v146));
  memset(v140, 0, 40);
  memset(&v139, 0, sizeof(v139));
  memset(&v138, 0, sizeof(v138));
  memset(&v137, 0, sizeof(v137));
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
          sub_1BE4A70((PartyOrganizationUtility_o *)p_touchedCollision, 0LL, v29, v30, v31, v32, v33, v34);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v38 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v38;
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
      v40 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v40 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)enemyInputRoot,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Camera__WorldToScreenPoint_70258204(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v41,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Camera__ScreenToWorldPoint_70258228(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v44,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v50 = v47;
        v51 = v48;
        v52 = v49;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0LL);
        *(_OWORD *)&v148.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v148.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v148.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v148.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v154.fields.x = v50;
        v154.fields.y = v51;
        v154.fields.z = v52;
        v53 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v148, v154, 0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v54 = 0;
        v55 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v53,
          0LL);
        v56 = this->fields.enemyInputRoot;
        if ( !byte_4B612E6 )
        {
          enemyInputRoot = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v25);
          byte_4B612E6 = 1;
        }
        if ( !v56 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v155.fields.z = v40 * static_fields->oneVector.fields.z;
        v155.fields.y = v40 * static_fields->oneVector.fields.y;
        v155.fields.x = v40 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v56, v155, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v58 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v58;
        if ( !*v58 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0LL) )
        {
LABEL_50:
          this->fields.touchedCollision = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v60, v61, v62, v63, v64, v65);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v67 = 0;
        v68 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v67, 0LL);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0LL) == this->fields.touchFinderID )
            {
              v69 = *v68;
              if ( *v68
                && (methodPtr_low = LOBYTE(UnityEngine_MeshCollider_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v69->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (UnityEngine_MeshCollider_c *)v69->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v71 = *v68;
                else
                  v71 = 0LL;
              }
              else
              {
                v71 = 0LL;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v71, 0LL, 0LL) )
              {
                v113 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&dest, 0LL);
                if ( !v113 )
                  goto LABEL_124;
                v115 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_70258692(
                                            (UnityEngine_Ray_o *)&src,
                                            v113,
                                            *(UnityEngine_Vector3_o *)&position.fields.x,
                                            0LL);
                v144 = *(_OWORD *)&src.fields.m_FingerId;
                v145 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v71 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v71, 0LL);
                v150 = 0;
                *(_QWORD *)&v143.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v143.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v144;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v145;
                v149 = v143;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v149, (float *)&v150, 0LL) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v71,
                         (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v71,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v123);
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v71,
                            (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v71,
                                                  (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1BE4D28(enemyInputRoot, v25);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                  goto LABEL_122;
                v129 = &v134;
                v135 = v145;
                v134 = v144;
                enemyInputRoot = (__int64)v71;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_70777380(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       (UnityEngine_Ray_o *)v129,
                       &v146,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0LL;
                sub_1BE4A70(
                  (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                  0LL,
                  v116,
                  v117,
                  v118,
                  v119,
                  v120,
                  v121);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v86 = (UnityEngine_Object_o *)*v68;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v94 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v94,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  0LL);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v94,
                                 (const MethodInfo_3054A6C *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v124 = this->fields.battleUICamera;
                  v125 = Index_object;
                  v126 = UnityEngine_Touch__get_position(&dest, 0LL);
                  if ( !v124 )
                    goto LABEL_124;
                  v127 = 0;
                  UnityEngine_Camera__ScreenPointToRay_70258692(
                    (UnityEngine_Ray_o *)&src,
                    v124,
                    *(UnityEngine_Vector3_o *)&v126.fields.x,
                    0LL);
                  v141 = *(_OWORD *)&src.fields.m_FingerId;
                  v142 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0LL);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v125 >= uiColliderAction->max_length )
                      sub_1BE4D30(enemyInputRoot, v25);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v125];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0LL);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v68;
                  *(_OWORD *)&src.fields.m_FingerId = v141;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v142;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v129 = &v132;
                  v133 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v132 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_1BE4A70(
                (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                0LL,
                v87,
                v88,
                v89,
                v90,
                v91,
                v92);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0LL) != 3 && UnityEngine_Touch__get_phase(&dest, 0LL) != 4 )
          {
            v72 = this->fields.battleUICamera;
            v73 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v72 )
              goto LABEL_124;
            v74 = 0;
            UnityEngine_Camera__ScreenPointToRay_70258692(
              (UnityEngine_Ray_o *)&src,
              v72,
              *(UnityEngine_Vector3_o *)&v73.fields.x,
              0LL);
            *(_OWORD *)&v140[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v140[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_32A78CC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v140[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v140[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v140[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v76 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v140,
                      (const MethodInfo_33ACDBC *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v76 )
                break;
              v78 = this->fields.uiCollider;
              if ( !v78 )
                sub_1BE4D28(v76, v77);
              if ( LODWORD(v140[0].fields._current.fields.value) >= v78->max_length )
                sub_1BE4D30(v76, v77);
              v79 = (struct UnityEngine_Collider_o *)v78->m_Items[SLODWORD(v140[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v140[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v140[1].fields._current.fields.value;
              if ( !v79 )
                sub_1BE4D28(v76, v77);
              *(_OWORD *)&v131.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v131.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_70777380(v79, &v131, &v139, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v139, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v139, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v79;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                    (int64_t)v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v140,
              (const MethodInfo_33ACEE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v96 = this->fields.battleActorCamera;
            v97 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v96 )
              goto LABEL_124;
            v98 = 0;
            UnityEngine_Camera__ScreenPointToRay_70258692(
              (UnityEngine_Ray_o *)&src,
              v96,
              *(UnityEngine_Vector3_o *)&v97.fields.x,
              0LL);
            *(_OWORD *)&v140[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v140[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_32B0654 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v99 = 3.4028e38;
            *(_OWORD *)&v138.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v138.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v138.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v100 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                       &v138,
                       (const MethodInfo_33AE940 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v100 )
                break;
              key = v138.fields._current.fields.key;
              if ( !v138.fields._current.fields.key )
                sub_1BE4D28(v100, v101);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v138.fields._current.fields.key,
                0LL);
              v153 = 0;
              *(_OWORD *)&v143.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v143.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v152 = *(UnityEngine_Ray_o *)&v140[1].fields._version;
              *(_OWORD *)&v151.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v151.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v152, &v151, (float *)&v153, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1BE4D28(0LL, v103);
                v105 = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                         key,
                         (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v105,
                  v106);
                v130 = *(UnityEngine_Ray_o *)&v140[1].fields._version;
                if ( UnityEngine_Collider__Raycast_70777380((UnityEngine_Collider_o *)key, &v130, &v137, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                  if ( v99 > UnityEngine_RaycastHit__get_distance(&v137, 0LL) )
                  {
                    *v68 = (struct UnityEngine_Collider_o *)key;
                    sub_1BE4A70(
                      (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                      (int64_t)key,
                      v107,
                      v108,
                      v109,
                      v110,
                      v111,
                      v112);
                    this->fields.isTouched = 1;
                    v99 = UnityEngine_RaycastHit__get_distance(&v137, 0LL);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v138,
              (const MethodInfo_33AEA60 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v67;
        }
        while ( v67 < UnityEngine_Input__get_touchCount(0LL) );
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B69100 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, collider);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    byte_4B69100 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_32B1720 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_32B0418 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_329F87C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_32B01A4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_35ED74C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1BE4D28(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_32B1720 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_32A8988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_32A8988 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v17, v18, v19, v20, v21, v22);
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
  sub_1BE4A70(
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
  sub_1BE4A70(
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
  sub_1BE4A70(
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

  if ( (byte_4B69104 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, x);
    byte_4B69104 = 1;
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
  PartyOrganizationUtility_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B690FD & 1) == 0 )
  {
    sub_1BE4ACC(&int___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_15945/*"X_SCALE_APPLY_SVTIDS"*/, v3);
    byte_4B690FD = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (PartyOrganizationUtility_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15945/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v7 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
    else
      v7 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (PartyOrganizationUtility_c *)v7;
    sub_1BE4A70(p_xScaleApplySvtId, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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