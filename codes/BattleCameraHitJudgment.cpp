void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_43554BD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_B70694(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_43554BD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetColliderAction,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetSkinnedMesh,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v17,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetColliderUIColliderIndex,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v24,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.targetSvtId,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.updatedSkinnedMeshs,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)sub_B70764(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds____ctor(
    v38,
    (const MethodInfo_2FAAD68 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.prevSkinnedMeshBounds,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_43554B9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    byte_43554B9 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2FB13D8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2FB13D8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (System_Xml_Schema_XmlSchemaObject_o *)skinnedMesh,
          (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            uiColliderIndex,
            (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            svtId,
            (const MethodInfo_2FAF9B8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_B7076C(targetColliderAction, collider);
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
    sub_B7076C(enemyInputRoot, method);
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
  BattleCameraHitJudgment___c__DisplayClass28_0_o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s8
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s9
  float v21; // s10
  float v22; // s11
  float v23; // s0
  float BakeMeshThresholdValue; // s1
  UnityEngine_Mesh_o *sharedMesh; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *transform; // x24
  int v30; // s0
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v34; // x25
  float Float; // s11
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  UnityEngine_Bounds_o v37; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Bounds_o v38; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o min; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o max; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_43554BB & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindIndex_int___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_B70694(&Method_System_Predicate_int___ctor__);
    sub_B70694(&System_Predicate_int__TypeInfo);
    sub_B70694(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__);
    sub_B70694(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    sub_B70694(&StringLiteral_16448/*"_xscale"*/);
    byte_43554BB = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v7 = (BattleCameraHitJudgment___c__DisplayClass28_0_o *)sub_B70764(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor(v7, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         updatedSkinnedMeshs,
         (WarBoardManager_TaskList_o *)skinnedMesh,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
                                                                                         skinnedMesh,
                                                                                         (const MethodInfo_2FABD4C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_35;
  if ( !skinnedMesh )
    goto LABEL_32;
  UnityEngine_Renderer__get_bounds(&v38, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v37 = v38;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Bounds__get_min(&v37, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v13 = v10;
  v14 = v11;
  v15 = v12;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v38,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2FAB8C4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v37 = v38;
  min = UnityEngine_Bounds__get_min(&v37, 0LL);
  v39.fields.x = v13;
  v39.fields.y = v14;
  v39.fields.z = v15;
  v16 = UnityEngine_Vector3__Distance(v39, min, 0LL);
  UnityEngine_Renderer__get_bounds(&v38, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v37 = v38;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Bounds__get_max(&v37, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v20 = v17;
  v21 = v18;
  v22 = v19;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v38,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2FAB8C4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v37 = v38;
  max = UnityEngine_Bounds__get_max(&v37, 0LL);
  v40.fields.x = v20;
  v40.fields.y = v21;
  v40.fields.z = v22;
  v23 = UnityEngine_Vector3__Distance(v40, max, 0LL);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v16 >= BakeMeshThresholdValue || v23 >= BakeMeshThresholdValue )
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
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
                                                                                                   (System_String_o *)meshCollider,
                                                                                                   (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              v7->fields.svtId = (int)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v34 = (System_Predicate_int__o *)sub_B70764(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v34,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                (const MethodInfo_2BF0CF4 *)Method_System_Predicate_int___ctor__);
              updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Array__FindIndex_int_(
                                                                                                     XScaleApplySvtId,
                                                                                                     (System_Predicate_T__o *)v34,
                                                                                                     (const MethodInfo_1FCB1CC *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_41121140(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16448/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_32;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16448/*"_xscale"*/,
                            0LL);
                  if ( !UnityEngine_Mathf__Approximately(Float, 1.0, 0LL) )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_32;
                    v42.fields.y = 1.0;
                    v42.fields.x = Float;
                    v42.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v42, 0LL);
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
                v43.fields.x = x;
                v43.fields.y = y;
                v43.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v43, 0LL);
                prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_bounds(&v38, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    skinnedMesh,
                    &v38,
                    (const MethodInfo_2FAB970 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B7076C(updatedSkinnedMeshs, v8);
  }
LABEL_29:
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updatedSkinnedMeshs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)skinnedMesh,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_43554B8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_43554B8 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Clear(
          (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)targetColliderAction,
          (const MethodInfo_2FABCB4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.updatedSkinnedMeshs) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)targetColliderAction,
          (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex) == 0LL)
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
          (const MethodInfo_2FAFB94 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_10:
    sub_B7076C(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
    (const MethodInfo_2FAFB94 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 2) = -1;
  *((_BYTE *)p_touchedCollision - 8) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c **v3; // x23
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  __int64 v7; // x1
  UICamera_c *v8; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *updatedSkinnedMeshs; // x0
  float fieldOfView; // s0
  float v20; // s11
  int v21; // s0
  int v24; // s0
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s8
  float v31; // s9
  float v32; // s10
  unsigned int v33; // s0
  int v34; // s1
  int v35; // s2
  UnityEngine_Transform_o *enemyInputRoot; // x20
  float v37; // s0
  float v38; // s1
  float v39; // s2
  struct UnityEngine_Collider_o **v40; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Object_o *gameObject; // x21
  int v49; // w25
  int32_t v50; // w21
  struct UnityEngine_Collider_o **v51; // x20
  struct UnityEngine_Collider_o *v52; // x8
  __int64 v53; // x11
  UnityEngine_Collider_o *v54; // x22
  UnityEngine_Camera_o *v55; // x22
  UnityEngine_Vector2_o v56; // kr00_8
  int v57; // s2
  float distance; // s9
  _BOOL8 v59; // x0
  __int64 v60; // x1
  struct UnityEngine_BoxCollider_array *v61; // x8
  struct UnityEngine_Collider_o *v62; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  UnityEngine_Object_c *v69; // x0
  UnityEngine_Object_c *v70; // x0
  UnityEngine_Object_o *v71; // x22
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  WarBoardPieceData_array *uiCollider; // x22
  UnityEngine_Object_c **v79; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v80; // x23
  System_Predicate_T__o *v81; // x1
  int32_t Index_WarBoardPieceData; // w0
  int v83; // w25
  int v84; // w8
  UnityEngine_Camera_o *v85; // x22
  UnityEngine_Vector2_o v86; // kr08_8
  int v87; // s2
  float v88; // s9
  _BOOL8 v89; // x0
  __int64 v90; // x1
  Il2CppObject *key; // x22
  __int64 v92; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  UnityEngine_SkinnedMeshRenderer_o *v94; // x0
  const MethodInfo *v95; // x3
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  int v102; // w8
  __int64 v103; // x0
  UnityEngine_Camera_o *v104; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v106; // s2
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  const MethodInfo *v114; // x3
  UnityEngine_Camera_o *v115; // x21
  unsigned int v116; // w22
  UnityEngine_Vector2_o v117; // kr18_8
  int v118; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v120; // x1
  __int64 v121; // x0
  UnityEngine_Ray_o v122; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Ray_o v123; // [xsp+30h] [xbp-370h] BYREF
  UnityEngine_Ray_o v124; // [xsp+50h] [xbp-350h] BYREF
  __int128 v125; // [xsp+70h] [xbp-330h] BYREF
  __int64 v126; // [xsp+80h] [xbp-320h]
  UnityEngine_Ray_o v127; // [xsp+90h] [xbp-310h] BYREF
  UnityEngine_Ray_o v128; // [xsp+B0h] [xbp-2F0h] BYREF
  _QWORD v129[11]; // [xsp+D0h] [xbp-2D0h] BYREF
  int v130; // [xsp+128h] [xbp-278h]
  UnityEngine_RaycastHit_o v131; // [xsp+130h] [xbp-270h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v132; // [xsp+160h] [xbp-240h] BYREF
  UnityEngine_RaycastHit_o v133; // [xsp+190h] [xbp-210h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__int__o v134[2]; // [xsp+1C0h] [xbp-1E0h] BYREF
  __int128 v135; // [xsp+210h] [xbp-190h]
  __int64 v136; // [xsp+220h] [xbp-180h]
  _BYTE v137[56]; // [xsp+230h] [xbp-170h] BYREF
  UnityEngine_RaycastHit_o v138; // [xsp+268h] [xbp-138h] BYREF
  UnityEngine_Touch_o v139; // [xsp+298h] [xbp-108h] BYREF
  UnityEngine_Matrix4x4_o v140; // [xsp+2E0h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43554BC & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindIndex_BoxCollider___);
    sub_B70694(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_B70694(&UnityEngine_MeshCollider_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_BoxCollider___ctor__);
    sub_B70694(&System_Predicate_BoxCollider__TypeInfo);
    sub_B70694(&UICamera_TypeInfo);
    byte_43554BC = 1;
  }
  memset(&v140, 0, sizeof(v140));
  memset(&v139, 0, sizeof(v139));
  memset(&v138, 0, sizeof(v138));
  memset(&v137[32], 0, 24);
  memset(v137, 0, 24);
  v136 = 0LL;
  v135 = 0u;
  memset(&v134[1].fields.version, 0, 24);
  memset(v134, 0, 40);
  memset(&v133, 0, sizeof(v133));
  memset(&v132, 0, sizeof(v132));
  v3 = &UnityEngine_Object_TypeInfo;
  memset(&v131, 0, sizeof(v131));
  v130 = 0;
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
        v8 = UICamera_TypeInfo;
        if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v8 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v8->static_fields->fallThrough;
        v10 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(fallThrough, v10, 0LL) )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_B70630((BattleServantConfConponent_o *)p_touchedCollision, 0LL, v11, v12, v13, v14, v15, v16);
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
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
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
      v20 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v20 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleActorCamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Camera__WorldToScreenPoint_41062476(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v21,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleUICamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Camera__ScreenToWorldPoint_41062500(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v24,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v30 = v27;
        v31 = v28;
        v32 = v29;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Transform__get_parent(
                                                                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)v129,
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          0LL);
        v140 = *(UnityEngine_Matrix4x4_o *)v129;
        v141.fields.x = v30;
        v141.fields.y = v31;
        v141.fields.z = v32;
        v33 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v140, v141, 0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v34 = 0;
        v35 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          *(UnityEngine_Vector3_o *)&v33,
          0LL);
        enemyInputRoot = this->fields.enemyInputRoot;
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
        if ( !enemyInputRoot )
          goto LABEL_136;
        v142.fields.x = v20 * v37;
        v142.fields.y = v20 * v38;
        v142.fields.z = v20 * v39;
        UnityEngine_Transform__set_localScale(enemyInputRoot, v142, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v40 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_54;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v40;
        if ( !*v40 )
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
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v40;
        if ( !*v40 )
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
          sub_B70630((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v42, v43, v44, v45, v46, v47);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v49 = 0;
        v50 = 0;
        v51 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)v129, v50, 0LL);
          memcpy(&v139, v129, sizeof(v139));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&v139, 0LL) == this->fields.touchFinderID )
            {
              v52 = *v51;
              if ( *v51
                && (v53 = *(&UnityEngine_MeshCollider_TypeInfo->_2.bitflags2 + 1),
                    *(&v52->klass->_2.bitflags2 + 1) >= (unsigned int)v53) )
              {
                if ( (UnityEngine_MeshCollider_c *)v52->klass->_2.typeHierarchy[v53 - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v54 = *v51;
                else
                  v54 = 0LL;
              }
              else
              {
                v54 = 0LL;
              }
              v69 = *v3;
              if ( (BYTE3((*v3)->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v69);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0LL, 0LL) )
              {
                v104 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&v139, 0LL);
                if ( !v104 )
                  goto LABEL_136;
                v106 = 0;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Camera__ScreenPointToRay_41063004(
                                                                                                   (UnityEngine_Ray_o *)v129,
                                                                                                   v104,
                                                                                                   *(UnityEngine_Vector3_o *)&position.fields.x,
                                                                                                   0LL);
                *(UnityEngine_Ray_o *)&v137[32] = *(UnityEngine_Ray_o *)v129;
                if ( !v54 )
                  goto LABEL_136;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)v129, v54, 0LL);
                *(UnityEngine_Bounds_o *)v137 = *(UnityEngine_Bounds_o *)v129;
                v128 = *(UnityEngine_Ray_o *)&v137[32];
                if ( !UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v137, &v128, 0LL) )
                  goto LABEL_134;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetSkinnedMesh;
                if ( !updatedSkinnedMeshs )
                  goto LABEL_136;
                Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                                                              (System_Type_o *)v54,
                                                              (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)v54, Item, v114);
                if ( UnityEngine_Touch__get_phase(&v139, 0LL) == 3 )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                  if ( updatedSkinnedMeshs )
                  {
                    if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                            (System_Type_o *)v54,
                            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_134;
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                    if ( updatedSkinnedMeshs )
                    {
                      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs, (System_Type_o *)v54, (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( updatedSkinnedMeshs )
                      {
                        System_Action__Invoke((System_Action_o *)updatedSkinnedMeshs, 0LL);
                        goto LABEL_134;
                      }
                    }
                  }
LABEL_136:
                  sub_B7076C(updatedSkinnedMeshs, v7);
                }
                if ( UnityEngine_Touch__get_phase(&v139, 0LL) == 4 )
                  goto LABEL_134;
                v120 = &v127;
                v127 = *(UnityEngine_Ray_o *)&v137[32];
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v54;
LABEL_133:
                if ( UnityEngine_Collider__Raycast_16812340(
                       (UnityEngine_Collider_o *)updatedSkinnedMeshs,
                       v120,
                       &v138,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_134:
                this->fields.touchedCollision = 0LL;
                sub_B70630(
                  (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                  0LL,
                  v107,
                  v108,
                  v109,
                  v110,
                  v111,
                  v112);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v70 = *v3;
              v71 = (UnityEngine_Object_o *)*v51;
              if ( (BYTE3((*v3)->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v70);
              if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
              {
                uiCollider = (WarBoardPieceData_array *)this->fields.uiCollider;
                v79 = v3;
                v80 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v80,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  (const MethodInfo_2BF23B8 *)Method_System_Predicate_BoxCollider___ctor__);
                v81 = (System_Predicate_T__o *)v80;
                v3 = v79;
                Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                            uiCollider,
                                            v81,
                                            (const MethodInfo_1FCB328 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
                {
                  v115 = this->fields.battleUICamera;
                  v116 = Index_WarBoardPieceData;
                  v117 = UnityEngine_Touch__get_position(&v139, 0LL);
                  if ( !v115 )
                    goto LABEL_136;
                  v118 = 0;
                  UnityEngine_Camera__ScreenPointToRay_41063004(
                    (UnityEngine_Ray_o *)v129,
                    v115,
                    *(UnityEngine_Vector3_o *)&v117.fields.x,
                    0LL);
                  v136 = v129[2];
                  v135 = *(_OWORD *)v129;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Touch__get_phase(
                                                                                                     &v139,
                                                                                                     0LL);
                  if ( (_DWORD)updatedSkinnedMeshs == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_136;
                    if ( v116 >= uiColliderAction->max_length )
                    {
                      v121 = sub_B70798(updatedSkinnedMeshs);
                      sub_B70738(v121, 0LL);
                    }
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)uiColliderAction->m_Items[v116];
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_136;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)updatedSkinnedMeshs, 0LL);
                    goto LABEL_134;
                  }
                  if ( UnityEngine_Touch__get_phase(&v139, 0LL) == 4 )
                    goto LABEL_134;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v51;
                  v129[2] = v136;
                  *(_OWORD *)v129 = v135;
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_136;
                  v120 = (UnityEngine_Ray_o *)&v125;
                  v126 = v129[2];
                  v125 = *(_OWORD *)v129;
                  goto LABEL_133;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                0LL,
                v72,
                v73,
                v74,
                v75,
                v76,
                v77);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&v139, 0LL) != 3 && UnityEngine_Touch__get_phase(&v139, 0LL) != 4 )
          {
            v55 = this->fields.battleUICamera;
            v56 = UnityEngine_Touch__get_position(&v139, 0LL);
            if ( !v55 )
              goto LABEL_136;
            v57 = 0;
            UnityEngine_Camera__ScreenPointToRay_41063004(
              (UnityEngine_Ray_o *)v129,
              v55,
              *(UnityEngine_Vector3_o *)&v56.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v134[1].fields.version = *(UnityEngine_Ray_o *)v129;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderUIColliderIndex;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_string__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v129,
              (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
              (const MethodInfo_2FAFF4C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v134[0] = *(System_Collections_Generic_Dictionary_Enumerator_string__int__o *)v129;
            while ( 1 )
            {
              v59 = System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
                      v134,
                      (const MethodInfo_2779170 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v59 )
                break;
              v61 = this->fields.uiCollider;
              if ( !v61 )
                sub_B7076C(v59, v60);
              if ( LODWORD(v134[0].fields.current.fields.value) >= v61->max_length )
              {
                v103 = sub_B70798(v59);
                sub_B70738(v103, 0LL);
              }
              v62 = (struct UnityEngine_Collider_o *)v61->m_Items[SLODWORD(v134[0].fields.current.fields.value)];
              *(UnityEngine_Ray_o *)v129 = *(UnityEngine_Ray_o *)&v134[1].fields.version;
              if ( !v62 )
                sub_B7076C(v59, v60);
              v124 = *(UnityEngine_Ray_o *)v129;
              if ( UnityEngine_Collider__Raycast_16812340(v62, &v124, &v133, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v139, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v133, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v133, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v62;
                  sub_B70630(
                    (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                    (System_Int32_array **)v62,
                    v63,
                    v64,
                    v65,
                    v66,
                    v67,
                    v68);
                }
              }
            }
            *((_DWORD *)&v129[10] + v49) = 943;
            v83 = ++v130;
            System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
              v134,
              (const MethodInfo_27792DC *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( v83 )
            {
              v84 = v83 - 1;
              if ( *((_DWORD *)&v129[9] + v83 + 1) == 943 )
              {
                --v83;
                v130 = v84;
              }
            }
            if ( this->fields.isTouched )
              return;
            v85 = this->fields.battleActorCamera;
            v86 = UnityEngine_Touch__get_position(&v139, 0LL);
            if ( !v85 )
              goto LABEL_136;
            v87 = 0;
            UnityEngine_Camera__ScreenPointToRay_41063004(
              (UnityEngine_Ray_o *)v129,
              v85,
              *(UnityEngine_Vector3_o *)&v86.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v134[1].fields.version = *(UnityEngine_Ray_o *)v129;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v129,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)updatedSkinnedMeshs,
              (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v88 = 3.4028e38;
            v132 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v129;
            while ( 1 )
            {
              v89 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      &v132,
                      (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v89 )
                break;
              key = v132.fields.current.fields.key;
              if ( !v132.fields.current.fields.key )
                sub_B7076C(v89, v90);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)v129,
                (UnityEngine_Collider_o *)v132.fields.current.fields.key,
                0LL);
              *(UnityEngine_Bounds_o *)v137 = *(UnityEngine_Bounds_o *)v129;
              v123 = *(UnityEngine_Ray_o *)&v134[1].fields.version;
              if ( UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v137, &v123, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_B7076C(0LL, v92);
                v94 = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetSkinnedMesh,
                                                             (System_Type_o *)key,
                                                             (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)key, v94, v95);
                v122 = *(UnityEngine_Ray_o *)&v134[1].fields.version;
                if ( UnityEngine_Collider__Raycast_16812340((UnityEngine_Collider_o *)key, &v122, &v131, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v139, 0LL);
                  if ( v88 > UnityEngine_RaycastHit__get_distance(&v131, 0LL) )
                  {
                    *v51 = (struct UnityEngine_Collider_o *)key;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                      (System_Int32_array **)key,
                      v96,
                      v97,
                      v98,
                      v99,
                      v100,
                      v101);
                    this->fields.isTouched = 1;
                    v88 = UnityEngine_RaycastHit__get_distance(&v131, 0LL);
                  }
                }
              }
            }
            *((_DWORD *)&v129[10] + v83) = 1173;
            v49 = ++v130;
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v132,
              (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( v49 )
            {
              v102 = v49 - 1;
              if ( *((_DWORD *)&v129[9] + v49 + 1) == 1173 )
              {
                --v49;
                v130 = v102;
              }
            }
            if ( this->fields.isTouched )
              return;
          }
          ++v50;
        }
        while ( v50 < UnityEngine_Input__get_touchCount(0LL) );
      }
    }
  }
}


void __fastcall BattleCameraHitJudgment__RemoveCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_43554BA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554BA = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Remove(
          prevSkinnedMeshBounds,
          (UnityEngine_SkinnedMeshRenderer_o *)targetColliderAction,
          (const MethodInfo_2FAD5E8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              updatedSkinnedMeshs,
              (WarBoardManager_TaskList_o *)targetColliderAction,
              (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_22:
    sub_B7076C(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2FB13D8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2FB13D8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v9, v10, v11, v12, v13, v14);
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(
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

  if ( (byte_43554BE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554BE = 1;
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
  BattleServantConfConponent_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_43554B7 & 1) == 0 )
  {
    sub_B70694(&int___TypeInfo);
    sub_B70694(&StringLiteral_15796/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_43554B7 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (BattleServantConfConponent_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15796/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v6 = (System_Int32_array **)sub_B706AC(int___TypeInfo, 0LL);
    else
      v6 = (System_Int32_array **)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (BattleServantConfConponent_c *)v6;
    sub_B70630(p_xScaleApplySvtId, v6, v7, v8, v9, v10, v11, v12);
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