void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_object__object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_Dictionary_object__object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Collections_Generic_Dictionary_object__int__o *v43; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Collections_Generic_Dictionary_object__int__o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  System_Collections_Generic_List_object__o *v63; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v73; // x20
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  UnityEngine_Vector3_c *v82; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v85; // x8
  __int64 v86; // d0
  float v87; // s1

  if ( (byte_4B186C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v21, v22);
    byte_4B186C3 = 1;
  }
  v23 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v23,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v23;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetColliderAction,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v33 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo,
                                                                     v30,
                                                                     v31,
                                                                     v32);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v33,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetSkinnedMesh, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v43 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                  v40,
                                                                  v41,
                                                                  v42);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v43,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.targetColliderUIColliderIndex,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v53 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                  v50,
                                                                  v51,
                                                                  v52);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v53,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.targetSvtId, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  v63 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                       v60,
                                                       v61,
                                                       v62);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v63;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.updatedSkinnedMeshs,
    (int64_t)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v73 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo,
                                                                   v70,
                                                                   v71,
                                                                   v72);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v73,
    (const MethodInfo_325281C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v73;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.prevSkinnedMeshBounds,
    (int64_t)v73,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v80, v81);
    byte_4B109C1 = 1;
  }
  v82 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v80, v81);
    v82 = UnityEngine_Vector3_TypeInfo;
    byte_4B109C6 = 1;
  }
  v85 = v82->static_fields;
  v86 = *(_QWORD *)&v85->oneVector.fields.x;
  v87 = v85->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v86;
  this->fields.enemyInputRootDefaultScale.fields.z = v87;
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0

  if ( (byte_4B186BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, collider, skinnedMesh);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v25, v26);
    byte_4B186BF = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_325D9C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_325D9C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            uiColliderIndex,
            (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_325C518 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(targetColliderAction, collider);
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
    sub_1BCAA3C(enemyInputRoot, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x22
  const MethodInfo *v28; // x1
  __int64 updatedSkinnedMeshs; // x0
  float z; // s13
  float v31; // s12
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // kr00_8
  __int64 v35; // kr08_8
  __int64 v36; // kr10_8
  float32x2_t v37; // d9
  float v38; // s10
  float32x2_t v39; // d11
  float v40; // s0
  float v41; // s8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  float v48; // s12
  float32x2_t v49; // d13
  float v50; // s14
  float32x2_t v51; // d15
  float v52; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v54; // d2
  unsigned __int64 v55; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v57; // s8
  float v58; // s9
  float v59; // s10
  __int64 v60; // x2
  UnityEngine_Transform_o *v61; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Predicate_int__o *v66; // x25
  __int64 v67; // x1
  __int64 v68; // x2
  float Float; // s11
  float v70; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x8
  float v77; // [xsp+0h] [xbp-D0h]
  float v78; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v81; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v82; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B186C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_int___, meshCollider, skinnedMesh);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v17, v18);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v21, v22);
    sub_1BCA7E0(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_16775/*"_xscale"*/, v25, v26);
    byte_4B186C1 = 1;
  }
  v27 = sub_1BCAA2C(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, meshCollider, skinnedMesh, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                          (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                          (Il2CppObject *)skinnedMesh,
                          (const MethodInfo_325354C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( (updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v82, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v82.fields.m_Extents.fields.z;
  y = v82.fields.m_Center.fields.y;
  x = v82.fields.m_Center.fields.x;
  v31 = v82.fields.m_Extents.fields.y;
  v77 = v82.fields.m_Extents.fields.x;
  v78 = v82.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v82,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_3253194 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v34 = *(_QWORD *)&v82.fields.m_Center.fields.x;
  v35 = *(_QWORD *)&v82.fields.m_Center.fields.z;
  v36 = *(_QWORD *)&v82.fields.m_Extents.fields.y;
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v32, v33);
    byte_4B109BF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v32);
  UnityEngine_Renderer__get_bounds(&v82, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (__int64)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v37.n64_u64[0] = *(unsigned __int64 *)&v82.fields.m_Center.fields.y;
  v38 = v82.fields.m_Extents.fields.x;
  v39.n64_u64[0] = *(unsigned __int64 *)&v82.fields.m_Extents.fields.y;
  v40 = (float)((float)((float)(x - v77) - (float)(*(float *)&v34 - *((float *)&v35 + 1)))
              * (float)((float)(x - v77) - (float)(*(float *)&v34 - *((float *)&v35 + 1))))
      + (float)((float)((float)(y - v31) - (float)(*((float *)&v34 + 1) - *(float *)&v36))
              * (float)((float)(y - v31) - (float)(*((float *)&v34 + 1) - *(float *)&v36)));
  v81 = v82.fields.m_Center.fields.x;
  v41 = (float)((float)((float)(v78 - z) - (float)(*(float *)&v35 - *((float *)&v36 + 1)))
              * (float)((float)(v78 - z) - (float)(*(float *)&v35 - *((float *)&v36 + 1))))
      + v40;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v82,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_3253194 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v48 = v82.fields.m_Center.fields.x;
  v49.n64_u64[0] = *(unsigned __int64 *)&v82.fields.m_Center.fields.y;
  v50 = v82.fields.m_Extents.fields.x;
  v51.n64_u64[0] = *(unsigned __int64 *)&v82.fields.m_Extents.fields.y;
  if ( !byte_4B109BF )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v28, v42);
    byte_4B109BF = 1;
  }
  updatedSkinnedMeshs = (__int64)System_Math_TypeInfo;
  v52 = sqrtf(v41);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v52 >= BakeMeshThresholdValue
    || (v54.n64_u64[0] = vsub_f32(vadd_f32(v37, v39), vadd_f32(v49, v51)).n64_u64[0],
        v55 = vmul_f32(v54, v54).n64_u64[0],
        sqrtf(
          *((float *)&v55 + 1)
        + (float)((float)((float)((float)(v81 + v38) - (float)(v48 + v50))
                        * (float)((float)(v81 + v38) - (float)(v48 + v50)))
                + *(float *)&v55)) >= BakeMeshThresholdValue) )
  {
LABEL_52:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0LL);
        v57 = localScale.fields.x;
        v58 = localScale.fields.y;
        v59 = localScale.fields.z;
        updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)meshCollider,
                                         0LL);
        v61 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4B109C6 )
        {
          updatedSkinnedMeshs = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v60);
          byte_4B109C6 = 1;
        }
        if ( v61 )
        {
          UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          updatedSkinnedMeshs = (__int64)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = System_Collections_Generic_Dictionary_object__int___get_Item(
                                    (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                    (Il2CppObject *)meshCollider,
                                    (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v27 )
            {
              *(_DWORD *)(v27 + 16) = updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v28);
              v66 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v63, v64, v65);
              System_Predicate_int____ctor(
                v66,
                (Il2CppObject *)v27,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                0LL);
              updatedSkinnedMeshs = System_Array__FindIndex_int_(
                                      XScaleApplySvtId,
                                      (System_Predicate_T__o *)v66,
                                      (const MethodInfo_300D4DC *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_70020424(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16775/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_material(
                                                   (UnityEngine_Renderer_o *)skinnedMesh,
                                                   0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16775/*"_xscale"*/,
                            0LL);
                  if ( !byte_4B109C5 )
                  {
                    sub_1BCA7E0(&UnityEngine_Mathf_TypeInfo, v67, v68);
                    byte_4B109C5 = 1;
                  }
                  v70 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v70 <= (float)(static_fields->Epsilon * 8.0) )
                    v70 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v70 )
                  {
                    updatedSkinnedMeshs = (__int64)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)meshCollider,
                                                     0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v84.fields.y = 1.0;
                    v84.fields.z = 1.0;
                    v84.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v84, 0LL);
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
                v85.fields.x = v57;
                v85.fields.y = v58;
                v85.fields.z = v59;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v85, 0LL);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (__int64)UnityEngine_Renderer__get_bounds(
                                                 &v82,
                                                 (UnityEngine_Renderer_o *)skinnedMesh,
                                                 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v82,
                    (const MethodInfo_3253214 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(updatedSkinnedMeshs, v28);
  }
LABEL_43:
  updatedSkinnedMeshs = (__int64)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v73 = *(_QWORD *)(updatedSkinnedMeshs + 16);
  v74 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++*(_DWORD *)(updatedSkinnedMeshs + 28);
  if ( !v73 )
    goto LABEL_49;
  v75 = *(int *)(updatedSkinnedMeshs + 24);
  if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = v73 + 8 * v75;
    *(_DWORD *)(updatedSkinnedMeshs + 24) = v75 + 1;
    *(_QWORD *)(v76 + 32) = skinnedMesh;
    sub_1BCA784((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)skinnedMesh, v42, v43, v44, v45, v46, v47);
  }
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4B186BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v10, v11);
    byte_4B186BE = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_32534E0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
  updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_12;
  size = updatedSkinnedMeshs->fields._size;
  v15 = updatedSkinnedMeshs->fields._version + 1;
  updatedSkinnedMeshs->fields._size = 0;
  updatedSkinnedMeshs->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)updatedSkinnedMeshs->fields._items, 0, size, 0LL);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_object__int___Clear(
          (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
          (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 3) = -1;
  *((_BYTE *)p_touchedCollision + 8) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *battleActorCamera; // x20
  __int64 v41; // x1
  UnityEngine_Object_o *battleUICamera; // x20
  __int64 v43; // x1
  __int64 v44; // x1
  UnityEngine_Object_o *selectedObject; // x20
  __int64 enemyInputRoot; // x0
  __int64 v47; // x1
  UICamera_c *v48; // x0
  UnityEngine_Object_o *fallThrough; // x20
  __int64 v50; // x1
  UnityEngine_Object_o *v51; // x21
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v61; // w9
  float fieldOfView; // s0
  float v63; // s11
  int v64; // s0
  int v67; // s0
  float v70; // s0
  float v71; // s1
  float v72; // s2
  float v73; // s8
  float v74; // s9
  float v75; // s10
  unsigned int v76; // s0
  int v77; // s1
  int v78; // s2
  __int64 v79; // x2
  UnityEngine_Transform_o *v80; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v82; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  __int64 v90; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v92; // w21
  struct UnityEngine_Collider_o **v93; // x20
  __int64 v94; // x1
  struct UnityEngine_Collider_o *v95; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Collider_o *v97; // x22
  UnityEngine_Camera_o *v98; // x22
  UnityEngine_Vector2_o v99; // kr00_8
  int v100; // s2
  float distance; // s8
  _BOOL8 v102; // x0
  __int64 v103; // x1
  struct UnityEngine_BoxCollider_array *v104; // x8
  struct UnityEngine_Collider_o *v105; // x22
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  UnityEngine_Object_o *v113; // x22
  __int64 v114; // x1
  int64_t v115; // x2
  __int64 v116; // x3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v122; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v124; // x22
  UnityEngine_Vector2_o v125; // kr08_8
  int v126; // s2
  float v127; // s8
  _BOOL8 v128; // x0
  __int64 v129; // x1
  Il2CppObject *key; // x22
  __int64 v131; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v133; // x0
  const MethodInfo *v134; // x3
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  UnityEngine_Camera_o *v141; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v143; // s2
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v151; // x3
  UnityEngine_Camera_o *v152; // x21
  il2cpp_array_size_t v153; // w22
  UnityEngine_Vector2_o v154; // kr18_8
  int v155; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  __int128 *v157; // x1
  UnityEngine_Ray_o v158; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v159; // [xsp+30h] [xbp-390h] BYREF
  __int128 v160; // [xsp+50h] [xbp-370h] BYREF
  __int64 v161; // [xsp+60h] [xbp-360h]
  __int128 v162; // [xsp+70h] [xbp-350h] BYREF
  __int64 v163; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v165; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v166; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v167; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v168[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v169; // [xsp+1C0h] [xbp-200h]
  __int64 v170; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v171; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v172; // [xsp+200h] [xbp-1C0h]
  __int64 v173; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v174; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v176; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v177; // [xsp+2E0h] [xbp-E0h] BYREF
  int v178; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v179; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v180; // [xsp+320h] [xbp-A0h] BYREF
  int v181; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B186C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindIndex_BoxCollider___, method, v2);
    sub_1BCA7E0(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v30, v31);
    sub_1BCA7E0(&UnityEngine_MeshCollider_TypeInfo, v32, v33);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v34, v35);
    sub_1BCA7E0(&System_Predicate_BoxCollider__TypeInfo, v36, v37);
    sub_1BCA7E0(&UICamera_TypeInfo, v38, v39);
    byte_4B186C2 = 1;
  }
  v172 = 0uLL;
  v173 = 0LL;
  memset(&v171, 0, sizeof(v171));
  v169 = 0uLL;
  v170 = 0LL;
  memset(&v168[1].fields._version, 0, 24);
  memset(&v176, 0, sizeof(v176));
  memset(&dest, 0, sizeof(dest));
  memset(&v174, 0, sizeof(v174));
  memset(v168, 0, 40);
  memset(&v167, 0, sizeof(v167));
  memset(&v166, 0, sizeof(v166));
  memset(&v165, 0, sizeof(v165));
  battleActorCamera = (UnityEngine_Object_o *)this->fields.battleActorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(battleActorCamera, 0LL, 0LL) )
  {
    battleUICamera = (UnityEngine_Object_o *)this->fields.battleUICamera;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( !UnityEngine_Object__op_Equality(battleUICamera, 0LL, 0LL) )
    {
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v43);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
      enemyInputRoot = UnityEngine_Object__op_Inequality(selectedObject, 0LL, 0LL);
      if ( (enemyInputRoot & 1) != 0 )
      {
        v48 = UICamera_TypeInfo;
        if ( !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v47);
          v48 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v48->static_fields->fallThrough;
        v51 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
        enemyInputRoot = UnityEngine_Object__op_Inequality(fallThrough, v51, 0LL);
        if ( (enemyInputRoot & 1) != 0 )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_1BCA784((PartyOrganizationUtility_o *)p_touchedCollision, 0LL, v52, v53, v54, v55, v56, v57);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v61 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v61;
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
      v63 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v63 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v64 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)enemyInputRoot,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Camera__WorldToScreenPoint_69960448(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v64,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Camera__ScreenToWorldPoint_69960472(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v67,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v73 = v70;
        v74 = v71;
        v75 = v72;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0LL);
        *(_OWORD *)&v176.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v176.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v176.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v176.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v182.fields.x = v73;
        v182.fields.y = v74;
        v182.fields.z = v75;
        v76 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v176, v182, 0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v77 = 0;
        v78 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v76,
          0LL);
        v80 = this->fields.enemyInputRoot;
        if ( !byte_4B109C6 )
        {
          enemyInputRoot = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v47, v79);
          byte_4B109C6 = 1;
        }
        if ( !v80 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v183.fields.z = v63 * static_fields->oneVector.fields.z;
        v183.fields.y = v63 * static_fields->oneVector.fields.y;
        v183.fields.x = v63 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v80, v183, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v82 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v82;
        if ( !*v82 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v82;
        if ( !*v82 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0LL) )
        {
LABEL_50:
          this->fields.touchedCollision = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v84, v85, v86, v87, v88, v89);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v92 = 0;
        v93 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v92, 0LL);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0LL) == this->fields.touchFinderID )
            {
              v95 = *v93;
              if ( *v93
                && (methodPtr_low = LOBYTE(UnityEngine_MeshCollider_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v95->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (UnityEngine_MeshCollider_c *)v95->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v97 = *v93;
                else
                  v97 = 0LL;
              }
              else
              {
                v97 = 0LL;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v94);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v97, 0LL, 0LL) )
              {
                v141 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&dest, 0LL);
                if ( !v141 )
                  goto LABEL_124;
                v143 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_69960936(
                                            (UnityEngine_Ray_o *)&src,
                                            v141,
                                            *(UnityEngine_Vector3_o *)&position.fields.x,
                                            0LL);
                v172 = *(_OWORD *)&src.fields.m_FingerId;
                v173 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v97 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v97, 0LL);
                v178 = 0;
                *(_QWORD *)&v171.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v171.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v172;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v173;
                v177 = v171;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v177, (float *)&v178, 0LL) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v97,
                         (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v97,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v151);
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v97,
                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v97,
                                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1BCAA3C(enemyInputRoot, v47);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                  goto LABEL_122;
                v157 = &v162;
                v163 = v173;
                v162 = v172;
                enemyInputRoot = (__int64)v97;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_70479624(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       (UnityEngine_Ray_o *)v157,
                       &v174,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0LL;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                  0LL,
                  v144,
                  v145,
                  v146,
                  v147,
                  v148,
                  v149);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v113 = (UnityEngine_Object_o *)*v93;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v112);
              if ( UnityEngine_Object__op_Inequality(v113, 0LL, 0LL) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v122 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                       System_Predicate_BoxCollider__TypeInfo,
                                                       v114,
                                                       v115,
                                                       v116);
                System_Predicate_object____ctor(
                  v122,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  0LL);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v122,
                                 (const MethodInfo_300D674 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v152 = this->fields.battleUICamera;
                  v153 = Index_object;
                  v154 = UnityEngine_Touch__get_position(&dest, 0LL);
                  if ( !v152 )
                    goto LABEL_124;
                  v155 = 0;
                  UnityEngine_Camera__ScreenPointToRay_69960936(
                    (UnityEngine_Ray_o *)&src,
                    v152,
                    *(UnityEngine_Vector3_o *)&v154.fields.x,
                    0LL);
                  v169 = *(_OWORD *)&src.fields.m_FingerId;
                  v170 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0LL);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v153 >= uiColliderAction->max_length )
                      sub_1BCAA44(enemyInputRoot, v47);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v153];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0LL);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v93;
                  *(_OWORD *)&src.fields.m_FingerId = v169;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v170;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v157 = &v160;
                  v161 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v160 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                0LL,
                v115,
                v116,
                v117,
                v118,
                v119,
                v120);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0LL) != 3 && UnityEngine_Touch__get_phase(&dest, 0LL) != 4 )
          {
            v98 = this->fields.battleUICamera;
            v99 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v98 )
              goto LABEL_124;
            v100 = 0;
            UnityEngine_Camera__ScreenPointToRay_69960936(
              (UnityEngine_Ray_o *)&src,
              v98,
              *(UnityEngine_Vector3_o *)&v99.fields.x,
              0LL);
            *(_OWORD *)&v168[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v168[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_325C908 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v168[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v168[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v168[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v102 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                       v168,
                       (const MethodInfo_33627FC *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v102 )
                break;
              v104 = this->fields.uiCollider;
              if ( !v104 )
                sub_1BCAA3C(v102, v103);
              if ( LODWORD(v168[0].fields._current.fields.value) >= v104->max_length )
                sub_1BCAA44(v102, v103);
              v105 = (struct UnityEngine_Collider_o *)v104->m_Items[SLODWORD(v168[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v168[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v168[1].fields._current.fields.value;
              if ( !v105 )
                sub_1BCAA3C(v102, v103);
              *(_OWORD *)&v159.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v159.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_70479624(v105, &v159, &v167, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v167, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v167, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v105;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                    (int64_t)v105,
                    v106,
                    v107,
                    v108,
                    v109,
                    v110,
                    v111);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v168,
              (const MethodInfo_3362920 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v124 = this->fields.battleActorCamera;
            v125 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v124 )
              goto LABEL_124;
            v126 = 0;
            UnityEngine_Camera__ScreenPointToRay_69960936(
              (UnityEngine_Ray_o *)&src,
              v124,
              *(UnityEngine_Vector3_o *)&v125.fields.x,
              0LL);
            *(_OWORD *)&v168[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v168[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v127 = 3.4028e38;
            *(_OWORD *)&v166.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v166.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v166.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v128 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                       &v166,
                       (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v128 )
                break;
              key = v166.fields._current.fields.key;
              if ( !v166.fields._current.fields.key )
                sub_1BCAA3C(v128, v129);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v166.fields._current.fields.key,
                0LL);
              v181 = 0;
              *(_OWORD *)&v171.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v171.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v180 = *(UnityEngine_Ray_o *)&v168[1].fields._version;
              *(_OWORD *)&v179.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v179.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v180, &v179, (float *)&v181, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1BCAA3C(0LL, v131);
                v133 = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                         key,
                         (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v133,
                  v134);
                v158 = *(UnityEngine_Ray_o *)&v168[1].fields._version;
                if ( UnityEngine_Collider__Raycast_70479624((UnityEngine_Collider_o *)key, &v158, &v165, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                  if ( v127 > UnityEngine_RaycastHit__get_distance(&v165, 0LL) )
                  {
                    *v93 = (struct UnityEngine_Collider_o *)key;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&this->fields.touchedCollision,
                      (int64_t)key,
                      v135,
                      v136,
                      v137,
                      v138,
                      v139,
                      v140);
                    this->fields.isTouched = 1;
                    v127 = UnityEngine_RaycastHit__get_distance(&v165, 0LL);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v166,
              (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v92;
        }
        while ( v92 < UnityEngine_Input__get_touchCount(0LL) );
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *touchedCollision; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B186C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, collider, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B186C0 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_32548B8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_325D9C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_325D9C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.touchedCollision, 0LL, v26, v27, v28, v29, v30, v31);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  sub_1BCA784(
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

  if ( (byte_4B186C4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B186C4 = 1;
  }
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, touchedCollision, 0LL);
}


System_Int32_array *__fastcall BattleCameraHitJudgment__get_XScaleApplySvtId(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B186BD & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_15905/*"X_SCALE_APPLY_SVTIDS"*/, v4, v5);
    byte_4B186BD = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (PartyOrganizationUtility_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15905/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v9 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
    else
      v9 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (PartyOrganizationUtility_c *)v9;
    sub_1BCA784(p_xScaleApplySvtId, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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