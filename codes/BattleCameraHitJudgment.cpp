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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_418AD1A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v11);
    byte_418AD1A = 1;
  }
  v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v12,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetColliderAction,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v19,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetSkinnedMesh,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v26,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetColliderUIColliderIndex,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v33,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetSvtId,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.updatedSkinnedMeshs,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)sub_B2C42C(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds____ctor(
    v47,
    (const MethodInfo_2DA5614 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.prevSkinnedMeshBounds,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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

  if ( (byte_418AD16 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, collider);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v20);
    byte_418AD16 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2DABC84 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2DABC84 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (System_Xml_Schema_XmlSchemaObject_o *)skinnedMesh,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            uiColliderIndex,
            (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            svtId,
            (const MethodInfo_2DAA264 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_B2C434(targetColliderAction, collider);
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
    sub_B2C434(enemyInputRoot, method);
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
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s8
  float v25; // s9
  float v26; // s10
  float v27; // s8
  float v28; // s0
  float v29; // s1
  float v30; // s2
  float v31; // s9
  float v32; // s10
  float v33; // s11
  float v34; // s0
  float BakeMeshThresholdValue; // s1
  UnityEngine_Mesh_o *sharedMesh; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *transform; // x24
  int v41; // s0
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v45; // x25
  float Float; // s11
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  UnityEngine_Bounds_o v48; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Bounds_o v49; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o min; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o max; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_418AD18 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_int___, meshCollider);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v12);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v13);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v14);
    sub_B2C35C(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v15);
    sub_B2C35C(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_16210/*"_xscale"*/, v17);
    byte_418AD18 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v18 = (BattleCameraHitJudgment___c__DisplayClass28_0_o *)sub_B2C42C(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor(v18, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         updatedSkinnedMeshs,
         (WarBoardManager_TaskList_o *)skinnedMesh,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
                                                                                         skinnedMesh,
                                                                                         (const MethodInfo_2DA65F8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_35;
  if ( !skinnedMesh )
    goto LABEL_32;
  UnityEngine_Renderer__get_bounds(&v49, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v48 = v49;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Bounds__get_min(&v48, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v24 = v21;
  v25 = v22;
  v26 = v23;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v49,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2DA6170 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v48 = v49;
  min = UnityEngine_Bounds__get_min(&v48, 0LL);
  v50.fields.x = v24;
  v50.fields.y = v25;
  v50.fields.z = v26;
  v27 = UnityEngine_Vector3__Distance(v50, min, 0LL);
  UnityEngine_Renderer__get_bounds(&v49, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v48 = v49;
  *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Bounds__get_max(&v48, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v31 = v28;
  v32 = v29;
  v33 = v30;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v49,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2DA6170 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v48 = v49;
  max = UnityEngine_Bounds__get_max(&v48, 0LL);
  v51.fields.x = v31;
  v51.fields.y = v32;
  v51.fields.z = v33;
  v34 = UnityEngine_Vector3__Distance(v51, max, 0LL);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v27 >= BakeMeshThresholdValue || v34 >= BakeMeshThresholdValue )
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
        *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_one(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v41, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
                                                                                                   (System_String_o *)meshCollider,
                                                                                                   (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v18 )
            {
              v18->fields.svtId = (int)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v19);
              v45 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v45,
                (Il2CppObject *)v18,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
              updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Array__FindIndex_int_(
                                                                                                     XScaleApplySvtId,
                                                                                                     (System_Predicate_T__o *)v45,
                                                                                                     (const MethodInfo_1FFC714 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_40688736(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16210/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_32;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16210/*"_xscale"*/,
                            0LL);
                  if ( !UnityEngine_Mathf__Approximately(Float, 1.0, 0LL) )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_32;
                    v53.fields.y = 1.0;
                    v53.fields.x = Float;
                    v53.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v53, 0LL);
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
                v54.fields.x = x;
                v54.fields.y = y;
                v54.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v54, 0LL);
                prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_bounds(&v49, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    skinnedMesh,
                    &v49,
                    (const MethodInfo_2DA621C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B2C434(updatedSkinnedMeshs, v19);
  }
LABEL_29:
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updatedSkinnedMeshs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)skinnedMesh,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_418AD15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v6);
    byte_418AD15 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Clear(
          (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)targetColliderAction,
          (const MethodInfo_2DA6560 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.updatedSkinnedMeshs) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)targetColliderAction,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex) == 0LL)
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
          (const MethodInfo_2DAA440 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_10:
    sub_B2C434(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
    (const MethodInfo_2DAA440 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v26; // x1
  UICamera_c *v27; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *updatedSkinnedMeshs; // x0
  float fieldOfView; // s0
  float v39; // s11
  int v40; // s0
  int v43; // s0
  float v46; // s0
  float v47; // s1
  float v48; // s2
  float v49; // s8
  float v50; // s9
  float v51; // s10
  unsigned int v52; // s0
  int v53; // s1
  int v54; // s2
  UnityEngine_Transform_o *enemyInputRoot; // x20
  float v56; // s0
  float v57; // s1
  float v58; // s2
  struct UnityEngine_Collider_o **v59; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  UnityEngine_Object_o *gameObject; // x21
  int v68; // w25
  int32_t v69; // w21
  struct UnityEngine_Collider_o **v70; // x20
  struct UnityEngine_Collider_o *v71; // x8
  __int64 v72; // x11
  UnityEngine_Collider_o *v73; // x22
  UnityEngine_Camera_o *v74; // x22
  UnityEngine_Vector2_o v75; // kr00_8
  int v76; // s2
  float distance; // s9
  _BOOL8 v78; // x0
  __int64 v79; // x1
  struct UnityEngine_BoxCollider_array *v80; // x8
  struct UnityEngine_Collider_o *v81; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UnityEngine_Object_c *v88; // x0
  UnityEngine_Object_c *v89; // x0
  UnityEngine_Object_o *v90; // x22
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  WarBoardPieceData_array *uiCollider; // x22
  UnityEngine_Object_c **v98; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v99; // x23
  System_Predicate_T__o *v100; // x1
  int32_t Index_WarBoardPieceData; // w0
  int v102; // w25
  int v103; // w8
  UnityEngine_Camera_o *v104; // x22
  UnityEngine_Vector2_o v105; // kr08_8
  int v106; // s2
  float v107; // s9
  _BOOL8 v108; // x0
  __int64 v109; // x1
  Il2CppObject *key; // x22
  __int64 v111; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  UnityEngine_SkinnedMeshRenderer_o *v113; // x0
  const MethodInfo *v114; // x3
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  int v121; // w8
  __int64 v122; // x0
  UnityEngine_Camera_o *v123; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v125; // s2
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  const MethodInfo *v133; // x3
  UnityEngine_Camera_o *v134; // x21
  unsigned int v135; // w22
  UnityEngine_Vector2_o v136; // kr18_8
  int v137; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v139; // x1
  __int64 v140; // x0
  UnityEngine_Ray_o v141; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Ray_o v142; // [xsp+30h] [xbp-370h] BYREF
  UnityEngine_Ray_o v143; // [xsp+50h] [xbp-350h] BYREF
  __int128 v144; // [xsp+70h] [xbp-330h] BYREF
  __int64 v145; // [xsp+80h] [xbp-320h]
  UnityEngine_Ray_o v146; // [xsp+90h] [xbp-310h] BYREF
  UnityEngine_Ray_o v147; // [xsp+B0h] [xbp-2F0h] BYREF
  _QWORD v148[11]; // [xsp+D0h] [xbp-2D0h] BYREF
  int v149; // [xsp+128h] [xbp-278h]
  UnityEngine_RaycastHit_o v150; // [xsp+130h] [xbp-270h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v151; // [xsp+160h] [xbp-240h] BYREF
  UnityEngine_RaycastHit_o v152; // [xsp+190h] [xbp-210h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__int__o v153[2]; // [xsp+1C0h] [xbp-1E0h] BYREF
  __int128 v154; // [xsp+210h] [xbp-190h]
  __int64 v155; // [xsp+220h] [xbp-180h]
  _BYTE v156[56]; // [xsp+230h] [xbp-170h] BYREF
  UnityEngine_RaycastHit_o v157; // [xsp+268h] [xbp-138h] BYREF
  UnityEngine_Touch_o v158; // [xsp+298h] [xbp-108h] BYREF
  UnityEngine_Matrix4x4_o v159; // [xsp+2E0h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418AD19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_BoxCollider___, method);
    sub_B2C35C(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v16);
    sub_B2C35C(&UnityEngine_MeshCollider_TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_BoxCollider___ctor__, v19);
    sub_B2C35C(&System_Predicate_BoxCollider__TypeInfo, v20);
    sub_B2C35C(&UICamera_TypeInfo, v21);
    byte_418AD19 = 1;
  }
  memset(&v159, 0, sizeof(v159));
  memset(&v158, 0, sizeof(v158));
  memset(&v157, 0, sizeof(v157));
  memset(&v156[32], 0, 24);
  memset(v156, 0, 24);
  v155 = 0LL;
  v154 = 0u;
  memset(&v153[1].fields.version, 0, 24);
  memset(v153, 0, 40);
  memset(&v152, 0, sizeof(v152));
  memset(&v151, 0, sizeof(v151));
  v22 = &UnityEngine_Object_TypeInfo;
  memset(&v150, 0, sizeof(v150));
  v149 = 0;
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
        v27 = UICamera_TypeInfo;
        if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v27 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v27->static_fields->fallThrough;
        v29 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(fallThrough, v29, 0LL) )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_B2C2F8((BattleServantConfConponent_o *)p_touchedCollision, 0LL, v30, v31, v32, v33, v34, v35);
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
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
      v39 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v39 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleActorCamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Camera__WorldToScreenPoint_40630716(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v40,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleUICamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Camera__ScreenToWorldPoint_40630740(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v43,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v49 = v46;
        v50 = v47;
        v51 = v48;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Transform__get_parent(
                                                                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)v148,
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          0LL);
        v159 = *(UnityEngine_Matrix4x4_o *)v148;
        v160.fields.x = v49;
        v160.fields.y = v50;
        v160.fields.z = v51;
        v52 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v159, v160, 0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v53 = 0;
        v54 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          *(UnityEngine_Vector3_o *)&v52,
          0LL);
        enemyInputRoot = this->fields.enemyInputRoot;
        *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
        if ( !enemyInputRoot )
          goto LABEL_136;
        v161.fields.x = v39 * v56;
        v161.fields.y = v39 * v57;
        v161.fields.z = v39 * v58;
        UnityEngine_Transform__set_localScale(enemyInputRoot, v161, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v59 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_54;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v59;
        if ( !*v59 )
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
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v59;
        if ( !*v59 )
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v61, v62, v63, v64, v65, v66);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v68 = 0;
        v69 = 0;
        v70 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)v148, v69, 0LL);
          memcpy(&v158, v148, sizeof(v158));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&v158, 0LL) == this->fields.touchFinderID )
            {
              v71 = *v70;
              if ( *v70
                && (v72 = *(&UnityEngine_MeshCollider_TypeInfo->_2.bitflags2 + 1),
                    *(&v71->klass->_2.bitflags2 + 1) >= (unsigned int)v72) )
              {
                if ( (UnityEngine_MeshCollider_c *)v71->klass->_2.typeHierarchy[v72 - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v73 = *v70;
                else
                  v73 = 0LL;
              }
              else
              {
                v73 = 0LL;
              }
              v88 = *v22;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v88);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0LL, 0LL) )
              {
                v123 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&v158, 0LL);
                if ( !v123 )
                  goto LABEL_136;
                v125 = 0;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Camera__ScreenPointToRay_40631244(
                                                                                                   (UnityEngine_Ray_o *)v148,
                                                                                                   v123,
                                                                                                   *(UnityEngine_Vector3_o *)&position.fields.x,
                                                                                                   0LL);
                *(UnityEngine_Ray_o *)&v156[32] = *(UnityEngine_Ray_o *)v148;
                if ( !v73 )
                  goto LABEL_136;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)v148, v73, 0LL);
                *(UnityEngine_Bounds_o *)v156 = *(UnityEngine_Bounds_o *)v148;
                v147 = *(UnityEngine_Ray_o *)&v156[32];
                if ( !UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v156, &v147, 0LL) )
                  goto LABEL_134;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetSkinnedMesh;
                if ( !updatedSkinnedMeshs )
                  goto LABEL_136;
                Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                                                              (System_Type_o *)v73,
                                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)v73, Item, v133);
                if ( UnityEngine_Touch__get_phase(&v158, 0LL) == 3 )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                  if ( updatedSkinnedMeshs )
                  {
                    if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                            (System_Type_o *)v73,
                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_134;
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                    if ( updatedSkinnedMeshs )
                    {
                      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs, (System_Type_o *)v73, (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( updatedSkinnedMeshs )
                      {
                        System_Action__Invoke((System_Action_o *)updatedSkinnedMeshs, 0LL);
                        goto LABEL_134;
                      }
                    }
                  }
LABEL_136:
                  sub_B2C434(updatedSkinnedMeshs, v26);
                }
                if ( UnityEngine_Touch__get_phase(&v158, 0LL) == 4 )
                  goto LABEL_134;
                v139 = &v146;
                v146 = *(UnityEngine_Ray_o *)&v156[32];
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v73;
LABEL_133:
                if ( UnityEngine_Collider__Raycast_16630136(
                       (UnityEngine_Collider_o *)updatedSkinnedMeshs,
                       v139,
                       &v157,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_134:
                this->fields.touchedCollision = 0LL;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                  0LL,
                  v126,
                  v127,
                  v128,
                  v129,
                  v130,
                  v131);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v89 = *v22;
              v90 = (UnityEngine_Object_o *)*v70;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v89);
              if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
              {
                uiCollider = (WarBoardPieceData_array *)this->fields.uiCollider;
                v98 = v22;
                v99 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v99,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  (const MethodInfo_2952BE4 *)Method_System_Predicate_BoxCollider___ctor__);
                v100 = (System_Predicate_T__o *)v99;
                v22 = v98;
                Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                            uiCollider,
                                            v100,
                                            (const MethodInfo_1FFC870 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
                {
                  v134 = this->fields.battleUICamera;
                  v135 = Index_WarBoardPieceData;
                  v136 = UnityEngine_Touch__get_position(&v158, 0LL);
                  if ( !v134 )
                    goto LABEL_136;
                  v137 = 0;
                  UnityEngine_Camera__ScreenPointToRay_40631244(
                    (UnityEngine_Ray_o *)v148,
                    v134,
                    *(UnityEngine_Vector3_o *)&v136.fields.x,
                    0LL);
                  v155 = v148[2];
                  v154 = *(_OWORD *)v148;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Touch__get_phase(
                                                                                                     &v158,
                                                                                                     0LL);
                  if ( (_DWORD)updatedSkinnedMeshs == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_136;
                    if ( v135 >= uiColliderAction->max_length )
                    {
                      v140 = sub_B2C460(updatedSkinnedMeshs);
                      sub_B2C400(v140, 0LL);
                    }
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)uiColliderAction->m_Items[v135];
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_136;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)updatedSkinnedMeshs, 0LL);
                    goto LABEL_134;
                  }
                  if ( UnityEngine_Touch__get_phase(&v158, 0LL) == 4 )
                    goto LABEL_134;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v70;
                  v148[2] = v155;
                  *(_OWORD *)v148 = v154;
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_136;
                  v139 = (UnityEngine_Ray_o *)&v144;
                  v145 = v148[2];
                  v144 = *(_OWORD *)v148;
                  goto LABEL_133;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                0LL,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&v158, 0LL) != 3 && UnityEngine_Touch__get_phase(&v158, 0LL) != 4 )
          {
            v74 = this->fields.battleUICamera;
            v75 = UnityEngine_Touch__get_position(&v158, 0LL);
            if ( !v74 )
              goto LABEL_136;
            v76 = 0;
            UnityEngine_Camera__ScreenPointToRay_40631244(
              (UnityEngine_Ray_o *)v148,
              v74,
              *(UnityEngine_Vector3_o *)&v75.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v153[1].fields.version = *(UnityEngine_Ray_o *)v148;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderUIColliderIndex;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_string__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v148,
              (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
              (const MethodInfo_2DAA7F8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v153[0] = *(System_Collections_Generic_Dictionary_Enumerator_string__int__o *)v148;
            while ( 1 )
            {
              v78 = System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
                      v153,
                      (const MethodInfo_278A274 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v78 )
                break;
              v80 = this->fields.uiCollider;
              if ( !v80 )
                sub_B2C434(v78, v79);
              if ( LODWORD(v153[0].fields.current.fields.value) >= v80->max_length )
              {
                v122 = sub_B2C460(v78);
                sub_B2C400(v122, 0LL);
              }
              v81 = (struct UnityEngine_Collider_o *)v80->m_Items[SLODWORD(v153[0].fields.current.fields.value)];
              *(UnityEngine_Ray_o *)v148 = *(UnityEngine_Ray_o *)&v153[1].fields.version;
              if ( !v81 )
                sub_B2C434(v78, v79);
              v143 = *(UnityEngine_Ray_o *)v148;
              if ( UnityEngine_Collider__Raycast_16630136(v81, &v143, &v152, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v158, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v152, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v152, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v81;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                    (System_Int32_array **)v81,
                    v82,
                    v83,
                    v84,
                    v85,
                    v86,
                    v87);
                }
              }
            }
            *((_DWORD *)&v148[10] + v68) = 943;
            v102 = ++v149;
            System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
              v153,
              (const MethodInfo_278A3E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( v102 )
            {
              v103 = v102 - 1;
              if ( *((_DWORD *)&v148[9] + v102 + 1) == 943 )
              {
                --v102;
                v149 = v103;
              }
            }
            if ( this->fields.isTouched )
              return;
            v104 = this->fields.battleActorCamera;
            v105 = UnityEngine_Touch__get_position(&v158, 0LL);
            if ( !v104 )
              goto LABEL_136;
            v106 = 0;
            UnityEngine_Camera__ScreenPointToRay_40631244(
              (UnityEngine_Ray_o *)v148,
              v104,
              *(UnityEngine_Vector3_o *)&v105.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v153[1].fields.version = *(UnityEngine_Ray_o *)v148;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v148,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)updatedSkinnedMeshs,
              (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v107 = 3.4028e38;
            v151 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v148;
            while ( 1 )
            {
              v108 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                       &v151,
                       (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v108 )
                break;
              key = v151.fields.current.fields.key;
              if ( !v151.fields.current.fields.key )
                sub_B2C434(v108, v109);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)v148,
                (UnityEngine_Collider_o *)v151.fields.current.fields.key,
                0LL);
              *(UnityEngine_Bounds_o *)v156 = *(UnityEngine_Bounds_o *)v148;
              v142 = *(UnityEngine_Ray_o *)&v153[1].fields.version;
              if ( UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v156, &v142, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_B2C434(0LL, v111);
                v113 = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetSkinnedMesh,
                                                              (System_Type_o *)key,
                                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)key, v113, v114);
                v141 = *(UnityEngine_Ray_o *)&v153[1].fields.version;
                if ( UnityEngine_Collider__Raycast_16630136((UnityEngine_Collider_o *)key, &v141, &v150, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v158, 0LL);
                  if ( v107 > UnityEngine_RaycastHit__get_distance(&v150, 0LL) )
                  {
                    *v70 = (struct UnityEngine_Collider_o *)key;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                      (System_Int32_array **)key,
                      v115,
                      v116,
                      v117,
                      v118,
                      v119,
                      v120);
                    this->fields.isTouched = 1;
                    v107 = UnityEngine_RaycastHit__get_distance(&v150, 0LL);
                  }
                }
              }
            }
            *((_DWORD *)&v148[10] + v102) = 1173;
            v68 = ++v149;
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v151,
              (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( v68 )
            {
              v121 = v68 - 1;
              if ( *((_DWORD *)&v148[9] + v68 + 1) == 1173 )
              {
                --v68;
                v149 = v121;
              }
            }
            if ( this->fields.isTouched )
              return;
          }
          ++v69;
        }
        while ( v69 < UnityEngine_Input__get_touchCount(0LL) );
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

  if ( (byte_418AD17 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, collider);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_418AD17 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Remove(
          prevSkinnedMeshBounds,
          (UnityEngine_SkinnedMeshRenderer_o *)targetColliderAction,
          (const MethodInfo_2DA7E94 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              updatedSkinnedMeshs,
              (WarBoardManager_TaskList_o *)targetColliderAction,
              (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_22:
    sub_B2C434(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2DABC84 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2DABC84 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v17, v18, v19, v20, v21, v22);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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

  if ( (byte_418AD1B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_418AD1B = 1;
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

  if ( (byte_418AD14 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_15575/*"X_SCALE_APPLY_SVTIDS"*/, v3);
    byte_418AD14 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (BattleServantConfConponent_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15575/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v7 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 0LL);
    else
      v7 = (System_Int32_array **)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (BattleServantConfConponent_c *)v7;
    sub_B2C2F8(p_xScaleApplySvtId, v7, v8, v9, v10, v11, v12, v13);
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