void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_4217E95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v12);
    byte_4217E95 = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v13;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetColliderAction,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo,
                                                                                        v20,
                                                                                        v21);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v22,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetSkinnedMesh,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                            v29,
                                                                            v30);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v31,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetColliderUIColliderIndex,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v40 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                            v38,
                                                                            v39);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v40,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v40;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.targetSvtId,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                                                                  v47,
                                                                                                  v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.updatedSkinnedMeshs,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v58 = (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)sub_B0D974(
                                                                                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo,
                                                                                  v56,
                                                                                  v57);
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds____ctor(
    v58,
    (const MethodInfo_2E3E5BC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = v58;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.prevSkinnedMeshBounds,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.enemyInputRootDefaultPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.enemyInputRootDefaultScale = UnityEngine_Vector3__get_one(0LL);
  this->fields.BakeMeshThresholdValue = 0.5;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_4217E91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, collider);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v20);
    byte_4217E91 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2E44C2C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2E44C2C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  }
  if ( clickAction )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
    if ( targetColliderAction )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        targetColliderAction,
        (System_Xml_XmlQualifiedName_o *)collider,
        (System_Xml_Schema_XmlSchemaObject_o *)clickAction,
        (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (System_Xml_Schema_XmlSchemaObject_o *)skinnedMesh,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            uiColliderIndex,
            (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            svtId,
            (const MethodInfo_2E4320C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_B0D97C(targetColliderAction);
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
    sub_B0D97C(enemyInputRoot);
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(enemyInputRoot, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  BattleCameraHitJudgment___c__DisplayClass28_0_o *v18; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x0
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s8
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s9
  float v31; // s10
  float v32; // s11
  float v33; // s0
  float BakeMeshThresholdValue; // s1
  UnityEngine_Mesh_o *sharedMesh; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *transform; // x24
  int v40; // s0
  const MethodInfo *v43; // x1
  System_Int32_array *XScaleApplySvtId; // x24
  __int64 v45; // x1
  __int64 v46; // x2
  System_Predicate_int__o *v47; // x25
  float Float; // s11
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  UnityEngine_Bounds_o v50; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Bounds_o v51; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o min; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o max; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4217E93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_int___, meshCollider);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v12);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v13);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v14);
    sub_B0D8A4(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v15);
    sub_B0D8A4(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_16258/*"_xscale"*/, v17);
    byte_4217E93 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v18 = (BattleCameraHitJudgment___c__DisplayClass28_0_o *)sub_B0D974(
                                                             BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo,
                                                             meshCollider,
                                                             skinnedMesh);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor(v18, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         updatedSkinnedMeshs,
         (WarBoardManager_TaskList_o *)skinnedMesh,
         (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
                                                                                         skinnedMesh,
                                                                                         (const MethodInfo_2E3F5A0 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_35;
  if ( !skinnedMesh )
    goto LABEL_32;
  UnityEngine_Renderer__get_bounds(&v51, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v50 = v51;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Bounds__get_min(&v50, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v23 = v20;
  v24 = v21;
  v25 = v22;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v51,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2E3F118 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v50 = v51;
  min = UnityEngine_Bounds__get_min(&v50, 0LL);
  v52.fields.x = v23;
  v52.fields.y = v24;
  v52.fields.z = v25;
  v26 = UnityEngine_Vector3__Distance(v52, min, 0LL);
  UnityEngine_Renderer__get_bounds(&v51, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v50 = v51;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Bounds__get_max(&v50, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v30 = v27;
  v31 = v28;
  v32 = v29;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v51,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2E3F118 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v50 = v51;
  max = UnityEngine_Bounds__get_max(&v50, 0LL);
  v53.fields.x = v30;
  v53.fields.y = v31;
  v53.fields.z = v32;
  v33 = UnityEngine_Vector3__Distance(v53, max, 0LL);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v26 >= BakeMeshThresholdValue || v33 >= BakeMeshThresholdValue )
  {
LABEL_35:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform(
                                                                                             (UnityEngine_Component_o *)meshCollider,
                                                                                             0LL);
      if ( updatedSkinnedMeshs )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, 0LL);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_one(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v40, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
                                                                                                   (System_String_o *)meshCollider,
                                                                                                   (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v18 )
            {
              v18->fields.svtId = (int)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v43);
              v47 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v45, v46);
              System_Predicate_int____ctor(
                v47,
                (Il2CppObject *)v18,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
              updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Array__FindIndex_int_(
                                                                                                     XScaleApplySvtId,
                                                                                                     (System_Predicate_T__o *)v47,
                                                                                                     (const MethodInfo_1F68D08 *)Method_System_Array_FindIndex_int___);
              if ( ((unsigned int)updatedSkinnedMeshs & 0x80000000) != 0 )
              {
                if ( !skinnedMesh )
                  goto LABEL_32;
              }
              else
              {
                if ( !skinnedMesh )
                  goto LABEL_32;
                updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( !updatedSkinnedMeshs )
                  goto LABEL_32;
                if ( UnityEngine_Material__HasProperty_40813076(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16258/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_32;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16258/*"_xscale"*/,
                            0LL);
                  if ( !UnityEngine_Mathf__Approximately(Float, 1.0, 0LL) )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_32;
                    v55.fields.y = 1.0;
                    v55.fields.x = Float;
                    v55.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v55, 0LL);
                  }
                }
              }
              UnityEngine_SkinnedMeshRenderer__BakeMesh(skinnedMesh, sharedMesh, 0LL);
              UnityEngine_MeshCollider__set_sharedMesh(meshCollider, sharedMesh, 0LL);
              updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform(
                                                                                                     (UnityEngine_Component_o *)meshCollider,
                                                                                                     0LL);
              if ( updatedSkinnedMeshs )
              {
                v56.fields.x = x;
                v56.fields.y = y;
                v56.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v56, 0LL);
                prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_bounds(&v51, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    skinnedMesh,
                    &v51,
                    (const MethodInfo_2E3F1C4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B0D97C(updatedSkinnedMeshs);
  }
LABEL_29:
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updatedSkinnedMeshs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)skinnedMesh,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_4217E90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v6);
    byte_4217E90 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Clear(
          (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)targetColliderAction,
          (const MethodInfo_2E3F508 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.updatedSkinnedMeshs) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)targetColliderAction,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex) == 0LL)
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
          (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(targetColliderAction);
  }
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
    (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void __fastcall BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0LL;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 2) = -1;
  *((_BYTE *)p_touchedCollision - 8) = 0;
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
  __int64 v21; // x1
  UnityEngine_Object_c **v22; // x23
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  UICamera_c *v26; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *updatedSkinnedMeshs; // x0
  float fieldOfView; // s0
  float v38; // s11
  int v39; // s0
  int v42; // s0
  float v45; // s0
  float v46; // s1
  float v47; // s2
  float v48; // s8
  float v49; // s9
  float v50; // s10
  unsigned int v51; // s0
  int v52; // s1
  int v53; // s2
  UnityEngine_Transform_o *enemyInputRoot; // x20
  float v55; // s0
  float v56; // s1
  float v57; // s2
  struct UnityEngine_Collider_o **v58; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  UnityEngine_Object_o *gameObject; // x21
  int v67; // w25
  int32_t v68; // w21
  struct UnityEngine_Collider_o **v69; // x20
  struct UnityEngine_Collider_o *v70; // x8
  __int64 v71; // x11
  UnityEngine_Collider_o *v72; // x22
  UnityEngine_Camera_o *v73; // x22
  UnityEngine_Vector2_o v74; // kr00_8
  int v75; // s2
  float distance; // s9
  _BOOL8 v77; // x0
  struct UnityEngine_BoxCollider_array *v78; // x8
  struct UnityEngine_Collider_o *v79; // x22
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  UnityEngine_Object_c *v86; // x0
  UnityEngine_Object_c *v87; // x0
  UnityEngine_Object_o *v88; // x22
  __int64 v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  WarBoardPieceData_array *uiCollider; // x22
  UnityEngine_Object_c **v97; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v98; // x23
  System_Predicate_T__o *v99; // x1
  int32_t Index_WarBoardPieceData; // w0
  int v101; // w25
  int v102; // w8
  UnityEngine_Camera_o *v103; // x22
  UnityEngine_Vector2_o v104; // kr08_8
  int v105; // s2
  float v106; // s9
  _BOOL8 v107; // x0
  Il2CppObject *key; // x22
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  UnityEngine_SkinnedMeshRenderer_o *v110; // x0
  const MethodInfo *v111; // x3
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  int v118; // w8
  __int64 v119; // x0
  UnityEngine_Camera_o *v120; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v122; // s2
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  const MethodInfo *v130; // x3
  UnityEngine_Camera_o *v131; // x21
  unsigned int v132; // w22
  UnityEngine_Vector2_o v133; // kr18_8
  int v134; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v136; // x1
  __int64 v137; // x0
  UnityEngine_Ray_o v138; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Ray_o v139; // [xsp+30h] [xbp-370h] BYREF
  UnityEngine_Ray_o v140; // [xsp+50h] [xbp-350h] BYREF
  __int128 v141; // [xsp+70h] [xbp-330h] BYREF
  __int64 v142; // [xsp+80h] [xbp-320h]
  UnityEngine_Ray_o v143; // [xsp+90h] [xbp-310h] BYREF
  UnityEngine_Ray_o v144; // [xsp+B0h] [xbp-2F0h] BYREF
  _QWORD v145[11]; // [xsp+D0h] [xbp-2D0h] BYREF
  int v146; // [xsp+128h] [xbp-278h]
  UnityEngine_RaycastHit_o v147; // [xsp+130h] [xbp-270h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v148; // [xsp+160h] [xbp-240h] BYREF
  UnityEngine_RaycastHit_o v149; // [xsp+190h] [xbp-210h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__int__o v150[2]; // [xsp+1C0h] [xbp-1E0h] BYREF
  __int128 v151; // [xsp+210h] [xbp-190h]
  __int64 v152; // [xsp+220h] [xbp-180h]
  _BYTE v153[56]; // [xsp+230h] [xbp-170h] BYREF
  UnityEngine_RaycastHit_o v154; // [xsp+268h] [xbp-138h] BYREF
  UnityEngine_Touch_o v155; // [xsp+298h] [xbp-108h] BYREF
  UnityEngine_Matrix4x4_o v156; // [xsp+2E0h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217E94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_BoxCollider___, method);
    sub_B0D8A4(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v16);
    sub_B0D8A4(&UnityEngine_MeshCollider_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_BoxCollider___ctor__, v19);
    sub_B0D8A4(&System_Predicate_BoxCollider__TypeInfo, v20);
    sub_B0D8A4(&UICamera_TypeInfo, v21);
    byte_4217E94 = 1;
  }
  memset(&v156, 0, sizeof(v156));
  memset(&v155, 0, sizeof(v155));
  memset(&v154, 0, sizeof(v154));
  memset(&v153[32], 0, 24);
  memset(v153, 0, 24);
  v152 = 0LL;
  v151 = 0u;
  memset(&v150[1].fields.version, 0, 24);
  memset(v150, 0, 40);
  memset(&v149, 0, sizeof(v149));
  memset(&v148, 0, sizeof(v148));
  v22 = &UnityEngine_Object_TypeInfo;
  memset(&v147, 0, sizeof(v147));
  v146 = 0;
  battleActorCamera = (UnityEngine_Object_o *)this->fields.battleActorCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(battleActorCamera, 0LL, 0LL) )
  {
    battleUICamera = (UnityEngine_Object_o *)this->fields.battleUICamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(battleUICamera, 0LL, 0LL) )
    {
      if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(selectedObject, 0LL, 0LL) )
      {
        v26 = UICamera_TypeInfo;
        if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v26 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v26->static_fields->fallThrough;
        v28 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(fallThrough, v28, 0LL) )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_B0D840((BattleServantConfConponent_o *)p_touchedCollision, 0LL, v29, v30, v31, v32, v33, v34);
          *((_DWORD *)p_touchedCollision + 2) = -1;
          *((_BYTE *)p_touchedCollision - 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_136;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        updatedSkinnedMeshs,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
      if ( !updatedSkinnedMeshs )
        goto LABEL_136;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)updatedSkinnedMeshs,
        this->fields.enemyInputRootDefaultPosition,
        0LL);
      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
      if ( !updatedSkinnedMeshs )
        goto LABEL_136;
      UnityEngine_Transform__set_localScale(
        (UnityEngine_Transform_o *)updatedSkinnedMeshs,
        this->fields.enemyInputRootDefaultScale,
        0LL);
      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleActorCamera;
      if ( !updatedSkinnedMeshs )
        goto LABEL_136;
      fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)updatedSkinnedMeshs, 0LL);
      v38 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v38 < 1.0 )
      {
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battlePerformance;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattlePerformance__getRepopEnemyTacicalPos(
                                                                                           (BattlePerformance_o *)updatedSkinnedMeshs,
                                                                                           0,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleActorCamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Camera__WorldToScreenPoint_40755056(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v39,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleUICamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Camera__ScreenToWorldPoint_40755080(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v42,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v48 = v45;
        v49 = v46;
        v50 = v47;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Transform__get_parent(
                                                                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)v145,
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          0LL);
        v156 = *(UnityEngine_Matrix4x4_o *)v145;
        v157.fields.x = v48;
        v157.fields.y = v49;
        v157.fields.z = v50;
        v51 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v156, v157, 0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v52 = 0;
        v53 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          *(UnityEngine_Vector3_o *)&v51,
          0LL);
        enemyInputRoot = this->fields.enemyInputRoot;
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL);
        if ( !enemyInputRoot )
          goto LABEL_136;
        v158.fields.x = v38 * v55;
        v158.fields.y = v38 * v56;
        v158.fields.z = v38 * v57;
        UnityEngine_Transform__set_localScale(enemyInputRoot, v158, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v58 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_54;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v58;
        if ( !*v58 )
          goto LABEL_136;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)updatedSkinnedMeshs,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_54;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v58;
        if ( !*v58 )
          goto LABEL_136;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                           (UnityEngine_Component_o *)updatedSkinnedMeshs,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)updatedSkinnedMeshs, 0LL) )
        {
LABEL_54:
          this->fields.touchedCollision = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v60, v61, v62, v63, v64, v65);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v67 = 0;
        v68 = 0;
        v69 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)v145, v68, 0LL);
          memcpy(&v155, v145, sizeof(v155));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&v155, 0LL) == this->fields.touchFinderID )
            {
              v70 = *v69;
              if ( *v69
                && (v71 = *(&UnityEngine_MeshCollider_TypeInfo->_2.bitflags2 + 1),
                    *(&v70->klass->_2.bitflags2 + 1) >= (unsigned int)v71) )
              {
                if ( (UnityEngine_MeshCollider_c *)v70->klass->_2.typeHierarchy[v71 - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v72 = *v69;
                else
                  v72 = 0LL;
              }
              else
              {
                v72 = 0LL;
              }
              v86 = *v22;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v86);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v72, 0LL, 0LL) )
              {
                v120 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&v155, 0LL);
                if ( !v120 )
                  goto LABEL_136;
                v122 = 0;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Camera__ScreenPointToRay_40755584(
                                                                                                   (UnityEngine_Ray_o *)v145,
                                                                                                   v120,
                                                                                                   *(UnityEngine_Vector3_o *)&position.fields.x,
                                                                                                   0LL);
                *(UnityEngine_Ray_o *)&v153[32] = *(UnityEngine_Ray_o *)v145;
                if ( !v72 )
                  goto LABEL_136;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)v145, v72, 0LL);
                *(UnityEngine_Bounds_o *)v153 = *(UnityEngine_Bounds_o *)v145;
                v144 = *(UnityEngine_Ray_o *)&v153[32];
                if ( !UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v153, &v144, 0LL) )
                  goto LABEL_134;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetSkinnedMesh;
                if ( !updatedSkinnedMeshs )
                  goto LABEL_136;
                Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                                                              (System_Type_o *)v72,
                                                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)v72, Item, v130);
                if ( UnityEngine_Touch__get_phase(&v155, 0LL) == 3 )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                  if ( updatedSkinnedMeshs )
                  {
                    if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                            (System_Type_o *)v72,
                            (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_134;
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                    if ( updatedSkinnedMeshs )
                    {
                      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs, (System_Type_o *)v72, (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( updatedSkinnedMeshs )
                      {
                        System_Action__Invoke((System_Action_o *)updatedSkinnedMeshs, 0LL);
                        goto LABEL_134;
                      }
                    }
                  }
LABEL_136:
                  sub_B0D97C(updatedSkinnedMeshs);
                }
                if ( UnityEngine_Touch__get_phase(&v155, 0LL) == 4 )
                  goto LABEL_134;
                v136 = &v143;
                v143 = *(UnityEngine_Ray_o *)&v153[32];
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v72;
LABEL_133:
                if ( UnityEngine_Collider__Raycast_16024112(
                       (UnityEngine_Collider_o *)updatedSkinnedMeshs,
                       v136,
                       &v154,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_134:
                this->fields.touchedCollision = 0LL;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                  0LL,
                  v123,
                  v124,
                  v125,
                  v126,
                  v127,
                  v128);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v87 = *v22;
              v88 = (UnityEngine_Object_o *)*v69;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v87);
              if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
              {
                uiCollider = (WarBoardPieceData_array *)this->fields.uiCollider;
                v97 = v22;
                v98 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                 System_Predicate_BoxCollider__TypeInfo,
                                                                                 v89,
                                                                                 v90);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v98,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  (const MethodInfo_2AF7E30 *)Method_System_Predicate_BoxCollider___ctor__);
                v99 = (System_Predicate_T__o *)v98;
                v22 = v97;
                Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                            uiCollider,
                                            v99,
                                            (const MethodInfo_1F68E64 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
                {
                  v131 = this->fields.battleUICamera;
                  v132 = Index_WarBoardPieceData;
                  v133 = UnityEngine_Touch__get_position(&v155, 0LL);
                  if ( !v131 )
                    goto LABEL_136;
                  v134 = 0;
                  UnityEngine_Camera__ScreenPointToRay_40755584(
                    (UnityEngine_Ray_o *)v145,
                    v131,
                    *(UnityEngine_Vector3_o *)&v133.fields.x,
                    0LL);
                  v152 = v145[2];
                  v151 = *(_OWORD *)v145;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Touch__get_phase(
                                                                                                     &v155,
                                                                                                     0LL);
                  if ( (_DWORD)updatedSkinnedMeshs == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_136;
                    if ( v132 >= uiColliderAction->max_length )
                    {
                      v137 = sub_B0D9A8(updatedSkinnedMeshs);
                      sub_B0D948(v137, 0LL);
                    }
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)uiColliderAction->m_Items[v132];
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_136;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)updatedSkinnedMeshs, 0LL);
                    goto LABEL_134;
                  }
                  if ( UnityEngine_Touch__get_phase(&v155, 0LL) == 4 )
                    goto LABEL_134;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v69;
                  v145[2] = v152;
                  *(_OWORD *)v145 = v151;
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_136;
                  v136 = (UnityEngine_Ray_o *)&v141;
                  v142 = v145[2];
                  v141 = *(_OWORD *)v145;
                  goto LABEL_133;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                0LL,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&v155, 0LL) != 3 && UnityEngine_Touch__get_phase(&v155, 0LL) != 4 )
          {
            v73 = this->fields.battleUICamera;
            v74 = UnityEngine_Touch__get_position(&v155, 0LL);
            if ( !v73 )
              goto LABEL_136;
            v75 = 0;
            UnityEngine_Camera__ScreenPointToRay_40755584(
              (UnityEngine_Ray_o *)v145,
              v73,
              *(UnityEngine_Vector3_o *)&v74.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v150[1].fields.version = *(UnityEngine_Ray_o *)v145;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderUIColliderIndex;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_string__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v145,
              (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
              (const MethodInfo_2E437A0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v150[0] = *(System_Collections_Generic_Dictionary_Enumerator_string__int__o *)v145;
            while ( 1 )
            {
              v77 = System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
                      v150,
                      (const MethodInfo_26C7B10 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v77 )
                break;
              v78 = this->fields.uiCollider;
              if ( !v78 )
                sub_B0D97C(v77);
              if ( LODWORD(v150[0].fields.current.fields.value) >= v78->max_length )
              {
                v119 = sub_B0D9A8(v77);
                sub_B0D948(v119, 0LL);
              }
              v79 = (struct UnityEngine_Collider_o *)v78->m_Items[SLODWORD(v150[0].fields.current.fields.value)];
              *(UnityEngine_Ray_o *)v145 = *(UnityEngine_Ray_o *)&v150[1].fields.version;
              if ( !v79 )
                sub_B0D97C(v77);
              v140 = *(UnityEngine_Ray_o *)v145;
              if ( UnityEngine_Collider__Raycast_16024112(v79, &v140, &v149, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v155, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v149, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v149, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v79;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                    (System_Int32_array **)v79,
                    v80,
                    v81,
                    v82,
                    v83,
                    v84,
                    v85);
                }
              }
            }
            *((_DWORD *)&v145[10] + v67) = 943;
            v101 = ++v146;
            System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
              v150,
              (const MethodInfo_26C7C7C *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( v101 )
            {
              v102 = v101 - 1;
              if ( *((_DWORD *)&v145[9] + v101 + 1) == 943 )
              {
                --v101;
                v146 = v102;
              }
            }
            if ( this->fields.isTouched )
              return;
            v103 = this->fields.battleActorCamera;
            v104 = UnityEngine_Touch__get_position(&v155, 0LL);
            if ( !v103 )
              goto LABEL_136;
            v105 = 0;
            UnityEngine_Camera__ScreenPointToRay_40755584(
              (UnityEngine_Ray_o *)v145,
              v103,
              *(UnityEngine_Vector3_o *)&v104.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v150[1].fields.version = *(UnityEngine_Ray_o *)v145;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v145,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)updatedSkinnedMeshs,
              (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v106 = 3.4028e38;
            v148 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v145;
            while ( 1 )
            {
              v107 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                       &v148,
                       (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v107 )
                break;
              key = v148.fields.current.fields.key;
              if ( !v148.fields.current.fields.key )
                sub_B0D97C(v107);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)v145,
                (UnityEngine_Collider_o *)v148.fields.current.fields.key,
                0LL);
              *(UnityEngine_Bounds_o *)v153 = *(UnityEngine_Bounds_o *)v145;
              v139 = *(UnityEngine_Ray_o *)&v150[1].fields.version;
              if ( UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v153, &v139, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_B0D97C(0LL);
                v110 = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetSkinnedMesh,
                                                              (System_Type_o *)key,
                                                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)key, v110, v111);
                v138 = *(UnityEngine_Ray_o *)&v150[1].fields.version;
                if ( UnityEngine_Collider__Raycast_16024112((UnityEngine_Collider_o *)key, &v138, &v147, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v155, 0LL);
                  if ( v106 > UnityEngine_RaycastHit__get_distance(&v147, 0LL) )
                  {
                    *v69 = (struct UnityEngine_Collider_o *)key;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                      (System_Int32_array **)key,
                      v112,
                      v113,
                      v114,
                      v115,
                      v116,
                      v117);
                    this->fields.isTouched = 1;
                    v106 = UnityEngine_RaycastHit__get_distance(&v147, 0LL);
                  }
                }
              }
            }
            *((_DWORD *)&v145[10] + v101) = 1173;
            v67 = ++v146;
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v148,
              (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( v67 )
            {
              v118 = v67 - 1;
              if ( *((_DWORD *)&v145[9] + v67 + 1) == 1173 )
              {
                --v67;
                v146 = v118;
              }
            }
            if ( this->fields.isTouched )
              return;
          }
          ++v68;
        }
        while ( v68 < UnityEngine_Input__get_touchCount(0LL) );
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_4217E92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, collider);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4217E92 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Remove(
          prevSkinnedMeshBounds,
          (UnityEngine_SkinnedMeshRenderer_o *)targetColliderAction,
          (const MethodInfo_2E40E3C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              updatedSkinnedMeshs,
              (WarBoardManager_TaskList_o *)targetColliderAction,
              (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(targetColliderAction);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2E44C2C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2E44C2C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v17, v18, v19, v20, v21, v22);
    this->fields.touchFinderID = -1;
    this->fields.isTouched = 0;
  }
}


void __fastcall BattleCameraHitJudgment__SetBattlePerformance(
        BattleCameraHitJudgment_o *this,
        BattlePerformance_o *battlePerformance,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.battlePerformance = battlePerformance;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battlePerformance,
    (System_Int32_array **)battlePerformance,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.battleActorCamera = camera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleActorCamera,
    (System_Int32_array **)camera,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.battleUICamera = camera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleUICamera,
    (System_Int32_array **)camera,
    (System_String_array **)method,
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

  if ( (byte_4217E96 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4217E96 = 1;
  }
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, touchedCollision, 0LL);
}


System_Int32_array *__fastcall BattleCameraHitJudgment__get_XScaleApplySvtId(
        BattleCameraHitJudgment_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4217E8F & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15622/*"X_SCALE_APPLY_SVTIDS"*/, v3);
    byte_4217E8F = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (BattleServantConfConponent_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15622/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v7 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, 0LL);
    else
      v7 = (System_Int32_array **)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (BattleServantConfConponent_c *)v7;
    sub_B0D840(p_xScaleApplySvtId, v7, v8, v9, v10, v11, v12, v13);
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