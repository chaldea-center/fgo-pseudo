void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v53; // x20
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v67; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7

  if ( (byte_42EC1BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v29, v30, v31);
    byte_42EC1BD = 1;
  }
  v32 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v32,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetColliderAction,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v39,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSkinnedMesh,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v46,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetColliderUIColliderIndex,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v53,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetSvtId,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.updatedSkinnedMeshs,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)sub_B5D694(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds____ctor(
    v67,
    (const MethodInfo_2F167F4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = v67;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.prevSkinnedMeshBounds,
    (System_Int32_array **)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  this->fields.enemyInputRootDefaultPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.enemyInputRootDefaultScale = UnityEngine_Vector3__get_one(0LL);
  this->fields.BakeMeshThresholdValue = 0.5;
  this->fields.touchFinderID = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_42EC1B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__,
      (_DWORD)collider,
      (_DWORD)skinnedMesh,
      *(_QWORD *)&uiColliderIndex);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v30, v31, v32);
    byte_42EC1B9 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      targetColliderAction,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2F1CE64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
      (System_Type_o *)collider,
      (const MethodInfo_2F1CE64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (System_Xml_Schema_XmlSchemaObject_o *)skinnedMesh,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            uiColliderIndex,
            (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
            (UIPanel_o *)collider,
            svtId,
            (const MethodInfo_2F1B444 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_B5D69C(targetColliderAction, collider);
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
    sub_B5D69C(enemyInputRoot, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  BattleCameraHitJudgment___c__DisplayClass28_0_o *v40; // x22
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x0
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s8
  float v47; // s9
  float v48; // s10
  float v49; // s8
  float v50; // s0
  float v51; // s1
  float v52; // s2
  float v53; // s9
  float v54; // s10
  float v55; // s11
  float v56; // s0
  float BakeMeshThresholdValue; // s1
  UnityEngine_Mesh_o *sharedMesh; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *transform; // x24
  int v63; // s0
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v67; // x25
  float Float; // s11
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  UnityEngine_Bounds_o v70; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Bounds_o v71; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o min; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o max; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42EC1BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_int___, (_DWORD)meshCollider, (_DWORD)skinnedMesh, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v31, v32, v33);
    sub_B5D5C4(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_16404/*"_xscale"*/, v37, v38, v39);
    byte_42EC1BB = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v40 = (BattleCameraHitJudgment___c__DisplayClass28_0_o *)sub_B5D694(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor(v40, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         updatedSkinnedMeshs,
         (WarBoardManager_TaskList_o *)skinnedMesh,
         (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
                                                                                         skinnedMesh,
                                                                                         (const MethodInfo_2F177D8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_35;
  if ( !skinnedMesh )
    goto LABEL_32;
  UnityEngine_Renderer__get_bounds(&v71, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v70 = v71;
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Bounds__get_min(&v70, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v46 = v43;
  v47 = v44;
  v48 = v45;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v71,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2F17350 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v70 = v71;
  min = UnityEngine_Bounds__get_min(&v70, 0LL);
  v72.fields.x = v46;
  v72.fields.y = v47;
  v72.fields.z = v48;
  v49 = UnityEngine_Vector3__Distance(v72, min, 0LL);
  UnityEngine_Renderer__get_bounds(&v71, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v70 = v71;
  *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Bounds__get_max(&v70, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  v53 = v50;
  v54 = v51;
  v55 = v52;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v71,
    (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)updatedSkinnedMeshs,
    skinnedMesh,
    (const MethodInfo_2F17350 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v70 = v71;
  max = UnityEngine_Bounds__get_max(&v70, 0LL);
  v73.fields.x = v53;
  v73.fields.y = v54;
  v73.fields.z = v55;
  v56 = UnityEngine_Vector3__Distance(v73, max, 0LL);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v49 >= BakeMeshThresholdValue || v56 >= BakeMeshThresholdValue )
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
        *(UnityEngine_Vector3_o *)&v63 = UnityEngine_Vector3__get_one(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v63, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                                                   (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
                                                                                                   (System_String_o *)meshCollider,
                                                                                                   (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v40 )
            {
              v40->fields.svtId = (int)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v41);
              v67 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v67,
                (Il2CppObject *)v40,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
              updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Array__FindIndex_int_(
                                                                                                     XScaleApplySvtId,
                                                                                                     (System_Predicate_T__o *)v67,
                                                                                                     (const MethodInfo_1FC0954 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_41623368(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16404/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_32;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16404/*"_xscale"*/,
                            0LL);
                  if ( !UnityEngine_Mathf__Approximately(Float, 1.0, 0LL) )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_32;
                    v75.fields.y = 1.0;
                    v75.fields.x = Float;
                    v75.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v75, 0LL);
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
                v76.fields.x = x;
                v76.fields.y = y;
                v76.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v76, 0LL);
                prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UnityEngine_Renderer__get_bounds(&v71, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    skinnedMesh,
                    &v71,
                    (const MethodInfo_2F173FC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B5D69C(updatedSkinnedMeshs, v41);
  }
LABEL_29:
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)updatedSkinnedMeshs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)skinnedMesh,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0

  if ( (byte_42EC1B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v14, v15, v16);
    byte_42EC1B8 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    targetColliderAction,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction
    || (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Clear(
          (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)targetColliderAction,
          (const MethodInfo_2F17740 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.updatedSkinnedMeshs) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)targetColliderAction,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex) == 0LL)
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
          (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderAction,
    (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_touchedCollision + 2) = -1;
  *((_BYTE *)p_touchedCollision - 8) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__LateUpdate(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  UnityEngine_Object_c **v62; // x23
  UnityEngine_Object_o *battleActorCamera; // x20
  UnityEngine_Object_o *battleUICamera; // x20
  UnityEngine_Object_o *selectedObject; // x20
  __int64 v66; // x1
  UICamera_c *v67; // x0
  UnityEngine_Object_o *fallThrough; // x20
  UnityEngine_Object_o *v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *updatedSkinnedMeshs; // x0
  float fieldOfView; // s0
  float v79; // s11
  int v80; // s0
  int v83; // s0
  float v86; // s0
  float v87; // s1
  float v88; // s2
  float v89; // s8
  float v90; // s9
  float v91; // s10
  unsigned int v92; // s0
  int v93; // s1
  int v94; // s2
  UnityEngine_Transform_o *enemyInputRoot; // x20
  float v96; // s0
  float v97; // s1
  float v98; // s2
  struct UnityEngine_Collider_o **v99; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  UnityEngine_Object_o *gameObject; // x21
  int v108; // w25
  int32_t v109; // w21
  struct UnityEngine_Collider_o **v110; // x20
  struct UnityEngine_Collider_o *v111; // x8
  __int64 v112; // x11
  UnityEngine_Collider_o *v113; // x22
  UnityEngine_Camera_o *v114; // x22
  UnityEngine_Vector2_o v115; // kr00_8
  int v116; // s2
  float distance; // s9
  _BOOL8 v118; // x0
  __int64 v119; // x1
  struct UnityEngine_BoxCollider_array *v120; // x8
  struct UnityEngine_Collider_o *v121; // x22
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  UnityEngine_Object_c *v128; // x0
  UnityEngine_Object_c *v129; // x0
  UnityEngine_Object_o *v130; // x22
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  WarBoardPieceData_array *uiCollider; // x22
  UnityEngine_Object_c **v138; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v139; // x23
  System_Predicate_T__o *v140; // x1
  int32_t Index_WarBoardPieceData; // w0
  int v142; // w25
  int v143; // w8
  UnityEngine_Camera_o *v144; // x22
  UnityEngine_Vector2_o v145; // kr08_8
  int v146; // s2
  float v147; // s9
  _BOOL8 v148; // x0
  __int64 v149; // x1
  Il2CppObject *key; // x22
  __int64 v151; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  UnityEngine_SkinnedMeshRenderer_o *v153; // x0
  const MethodInfo *v154; // x3
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  int v161; // w8
  __int64 v162; // x0
  UnityEngine_Camera_o *v163; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v165; // s2
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  const MethodInfo *v173; // x3
  UnityEngine_Camera_o *v174; // x21
  unsigned int v175; // w22
  UnityEngine_Vector2_o v176; // kr18_8
  int v177; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  UnityEngine_Ray_o *v179; // x1
  __int64 v180; // x0
  UnityEngine_Ray_o v181; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Ray_o v182; // [xsp+30h] [xbp-370h] BYREF
  UnityEngine_Ray_o v183; // [xsp+50h] [xbp-350h] BYREF
  __int128 v184; // [xsp+70h] [xbp-330h] BYREF
  __int64 v185; // [xsp+80h] [xbp-320h]
  UnityEngine_Ray_o v186; // [xsp+90h] [xbp-310h] BYREF
  UnityEngine_Ray_o v187; // [xsp+B0h] [xbp-2F0h] BYREF
  _QWORD v188[11]; // [xsp+D0h] [xbp-2D0h] BYREF
  int v189; // [xsp+128h] [xbp-278h]
  UnityEngine_RaycastHit_o v190; // [xsp+130h] [xbp-270h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v191; // [xsp+160h] [xbp-240h] BYREF
  UnityEngine_RaycastHit_o v192; // [xsp+190h] [xbp-210h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__int__o v193[2]; // [xsp+1C0h] [xbp-1E0h] BYREF
  __int128 v194; // [xsp+210h] [xbp-190h]
  __int64 v195; // [xsp+220h] [xbp-180h]
  _BYTE v196[56]; // [xsp+230h] [xbp-170h] BYREF
  UnityEngine_RaycastHit_o v197; // [xsp+268h] [xbp-138h] BYREF
  UnityEngine_Touch_o v198; // [xsp+298h] [xbp-108h] BYREF
  UnityEngine_Matrix4x4_o v199; // [xsp+2E0h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v200; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v201; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC1BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_BoxCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v29, v30, v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_MeshCollider_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Predicate_BoxCollider___ctor__, v53, v54, v55);
    sub_B5D5C4(&System_Predicate_BoxCollider__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UICamera_TypeInfo, v59, v60, v61);
    byte_42EC1BC = 1;
  }
  memset(&v199, 0, sizeof(v199));
  memset(&v198, 0, sizeof(v198));
  memset(&v197, 0, sizeof(v197));
  memset(&v196[32], 0, 24);
  memset(v196, 0, 24);
  v195 = 0LL;
  v194 = 0u;
  memset(&v193[1].fields.version, 0, 24);
  memset(v193, 0, 40);
  memset(&v192, 0, sizeof(v192));
  memset(&v191, 0, sizeof(v191));
  v62 = &UnityEngine_Object_TypeInfo;
  memset(&v190, 0, sizeof(v190));
  v189 = 0;
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
        v67 = UICamera_TypeInfo;
        if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          v67 = UICamera_TypeInfo;
        }
        fallThrough = (UnityEngine_Object_o *)v67->static_fields->fallThrough;
        v69 = (UnityEngine_Object_o *)UICamera__get_selectedObject(0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(fallThrough, v69, 0LL) )
        {
          this->fields.touchedCollision = 0LL;
          p_touchedCollision = &this->fields.touchedCollision;
          sub_B5D560((BattleServantConfConponent_o *)p_touchedCollision, 0LL, v70, v71, v72, v73, v74, v75);
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
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
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
      v79 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v79 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleActorCamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Camera__WorldToScreenPoint_41565348(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v80,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleUICamera;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Camera__ScreenToWorldPoint_41565372(
                                           (UnityEngine_Camera_o *)updatedSkinnedMeshs,
                                           *(UnityEngine_Vector3_o *)&v83,
                                           0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v89 = v86;
        v90 = v87;
        v91 = v88;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Transform__get_parent(
                                                                                           (UnityEngine_Transform_o *)updatedSkinnedMeshs,
                                                                                           0LL);
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)v188,
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          0LL);
        v199 = *(UnityEngine_Matrix4x4_o *)v188;
        v200.fields.x = v89;
        v200.fields.y = v90;
        v200.fields.z = v91;
        v92 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v199, v200, 0LL);
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.enemyInputRoot;
        if ( !updatedSkinnedMeshs )
          goto LABEL_136;
        v93 = 0;
        v94 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)updatedSkinnedMeshs,
          *(UnityEngine_Vector3_o *)&v92,
          0LL);
        enemyInputRoot = this->fields.enemyInputRoot;
        *(UnityEngine_Vector3_o *)&v96 = UnityEngine_Vector3__get_one(0LL);
        if ( !enemyInputRoot )
          goto LABEL_136;
        v201.fields.x = v79 * v96;
        v201.fields.y = v79 * v97;
        v201.fields.z = v79 * v98;
        UnityEngine_Transform__set_localScale(enemyInputRoot, v201, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v99 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_54;
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v99;
        if ( !*v99 )
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
        updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v99;
        if ( !*v99 )
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
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.touchedCollision,
            0LL,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v108 = 0;
        v109 = 0;
        v110 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)v188, v109, 0LL);
          memcpy(&v198, v188, sizeof(v198));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&v198, 0LL) == this->fields.touchFinderID )
            {
              v111 = *v110;
              if ( *v110
                && (v112 = *(&UnityEngine_MeshCollider_TypeInfo->_2.bitflags2 + 1),
                    *(&v111->klass->_2.bitflags2 + 1) >= (unsigned int)v112) )
              {
                if ( (UnityEngine_MeshCollider_c *)v111->klass->_2.typeHierarchy[v112 - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v113 = *v110;
                else
                  v113 = 0LL;
              }
              else
              {
                v113 = 0LL;
              }
              v128 = *v62;
              if ( (BYTE3((*v62)->vtable._0_Equals.methodPtr) & 4) != 0 && !v128->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v128);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v113, 0LL, 0LL) )
              {
                v163 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&v198, 0LL);
                if ( !v163 )
                  goto LABEL_136;
                v165 = 0;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Camera__ScreenPointToRay_41565876(
                                                                                                   (UnityEngine_Ray_o *)v188,
                                                                                                   v163,
                                                                                                   *(UnityEngine_Vector3_o *)&position.fields.x,
                                                                                                   0LL);
                *(UnityEngine_Ray_o *)&v196[32] = *(UnityEngine_Ray_o *)v188;
                if ( !v113 )
                  goto LABEL_136;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)v188, v113, 0LL);
                *(UnityEngine_Bounds_o *)v196 = *(UnityEngine_Bounds_o *)v188;
                v187 = *(UnityEngine_Ray_o *)&v196[32];
                if ( !UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v196, &v187, 0LL) )
                  goto LABEL_134;
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetSkinnedMesh;
                if ( !updatedSkinnedMeshs )
                  goto LABEL_136;
                Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                                                              (System_Type_o *)v113,
                                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)v113, Item, v173);
                if ( UnityEngine_Touch__get_phase(&v198, 0LL) == 3 )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                  if ( updatedSkinnedMeshs )
                  {
                    if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs,
                            (System_Type_o *)v113,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_134;
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
                    if ( updatedSkinnedMeshs )
                    {
                      updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)updatedSkinnedMeshs, (System_Type_o *)v113, (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( updatedSkinnedMeshs )
                      {
                        System_Action__Invoke((System_Action_o *)updatedSkinnedMeshs, 0LL);
                        goto LABEL_134;
                      }
                    }
                  }
LABEL_136:
                  sub_B5D69C(updatedSkinnedMeshs, v66);
                }
                if ( UnityEngine_Touch__get_phase(&v198, 0LL) == 4 )
                  goto LABEL_134;
                v179 = &v186;
                v186 = *(UnityEngine_Ray_o *)&v196[32];
                updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v113;
LABEL_133:
                if ( UnityEngine_Collider__Raycast_16823656(
                       (UnityEngine_Collider_o *)updatedSkinnedMeshs,
                       v179,
                       &v197,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_134:
                this->fields.touchedCollision = 0LL;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                  0LL,
                  v166,
                  v167,
                  v168,
                  v169,
                  v170,
                  v171);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v129 = *v62;
              v130 = (UnityEngine_Object_o *)*v110;
              if ( (BYTE3((*v62)->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v129);
              if ( UnityEngine_Object__op_Inequality(v130, 0LL, 0LL) )
              {
                uiCollider = (WarBoardPieceData_array *)this->fields.uiCollider;
                v138 = v62;
                v139 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v139,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  (const MethodInfo_2B9320C *)Method_System_Predicate_BoxCollider___ctor__);
                v140 = (System_Predicate_T__o *)v139;
                v62 = v138;
                Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                            uiCollider,
                                            v140,
                                            (const MethodInfo_1FC0AB0 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
                {
                  v174 = this->fields.battleUICamera;
                  v175 = Index_WarBoardPieceData;
                  v176 = UnityEngine_Touch__get_position(&v198, 0LL);
                  if ( !v174 )
                    goto LABEL_136;
                  v177 = 0;
                  UnityEngine_Camera__ScreenPointToRay_41565876(
                    (UnityEngine_Ray_o *)v188,
                    v174,
                    *(UnityEngine_Vector3_o *)&v176.fields.x,
                    0LL);
                  v195 = v188[2];
                  v194 = *(_OWORD *)v188;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Touch__get_phase(
                                                                                                     &v198,
                                                                                                     0LL);
                  if ( (_DWORD)updatedSkinnedMeshs == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_136;
                    if ( v175 >= uiColliderAction->max_length )
                    {
                      v180 = sub_B5D6C8(updatedSkinnedMeshs);
                      sub_B5D668(v180, 0LL);
                    }
                    updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)uiColliderAction->m_Items[v175];
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_136;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)updatedSkinnedMeshs, 0LL);
                    goto LABEL_134;
                  }
                  if ( UnityEngine_Touch__get_phase(&v198, 0LL) == 4 )
                    goto LABEL_134;
                  updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*v110;
                  v188[2] = v195;
                  *(_OWORD *)v188 = v194;
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_136;
                  v179 = (UnityEngine_Ray_o *)&v184;
                  v185 = v188[2];
                  v184 = *(_OWORD *)v188;
                  goto LABEL_133;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                0LL,
                v131,
                v132,
                v133,
                v134,
                v135,
                v136);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&v198, 0LL) != 3 && UnityEngine_Touch__get_phase(&v198, 0LL) != 4 )
          {
            v114 = this->fields.battleUICamera;
            v115 = UnityEngine_Touch__get_position(&v198, 0LL);
            if ( !v114 )
              goto LABEL_136;
            v116 = 0;
            UnityEngine_Camera__ScreenPointToRay_41565876(
              (UnityEngine_Ray_o *)v188,
              v114,
              *(UnityEngine_Vector3_o *)&v115.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v193[1].fields.version = *(UnityEngine_Ray_o *)v188;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderUIColliderIndex;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_string__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v188,
              (System_Collections_Generic_Dictionary_string__int__o *)updatedSkinnedMeshs,
              (const MethodInfo_2F1B9D8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v193[0] = *(System_Collections_Generic_Dictionary_Enumerator_string__int__o *)v188;
            while ( 1 )
            {
              v118 = System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
                       v193,
                       (const MethodInfo_27659D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v118 )
                break;
              v120 = this->fields.uiCollider;
              if ( !v120 )
                sub_B5D69C(v118, v119);
              if ( LODWORD(v193[0].fields.current.fields.value) >= v120->max_length )
              {
                v162 = sub_B5D6C8(v118);
                sub_B5D668(v162, 0LL);
              }
              v121 = (struct UnityEngine_Collider_o *)v120->m_Items[SLODWORD(v193[0].fields.current.fields.value)];
              *(UnityEngine_Ray_o *)v188 = *(UnityEngine_Ray_o *)&v193[1].fields.version;
              if ( !v121 )
                sub_B5D69C(v118, v119);
              v183 = *(UnityEngine_Ray_o *)v188;
              if ( UnityEngine_Collider__Raycast_16823656(v121, &v183, &v192, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v198, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v192, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v192, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v121;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                    (System_Int32_array **)v121,
                    v122,
                    v123,
                    v124,
                    v125,
                    v126,
                    v127);
                }
              }
            }
            *((_DWORD *)&v188[10] + v108) = 943;
            v142 = ++v189;
            System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
              v193,
              (const MethodInfo_2765B3C *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( v142 )
            {
              v143 = v142 - 1;
              if ( *((_DWORD *)&v188[9] + v142 + 1) == 943 )
              {
                --v142;
                v189 = v143;
              }
            }
            if ( this->fields.isTouched )
              return;
            v144 = this->fields.battleActorCamera;
            v145 = UnityEngine_Touch__get_position(&v198, 0LL);
            if ( !v144 )
              goto LABEL_136;
            v146 = 0;
            UnityEngine_Camera__ScreenPointToRay_41565876(
              (UnityEngine_Ray_o *)v188,
              v144,
              *(UnityEngine_Vector3_o *)&v145.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v193[1].fields.version = *(UnityEngine_Ray_o *)v188;
            updatedSkinnedMeshs = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.targetColliderAction;
            if ( !updatedSkinnedMeshs )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v188,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)updatedSkinnedMeshs,
              (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v147 = 3.4028e38;
            v191 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v188;
            while ( 1 )
            {
              v148 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                       &v191,
                       (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v148 )
                break;
              key = v191.fields.current.fields.key;
              if ( !v191.fields.current.fields.key )
                sub_B5D69C(v148, v149);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)v188,
                (UnityEngine_Collider_o *)v191.fields.current.fields.key,
                0LL);
              *(UnityEngine_Bounds_o *)v196 = *(UnityEngine_Bounds_o *)v188;
              v182 = *(UnityEngine_Ray_o *)&v193[1].fields.version;
              if ( UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v196, &v182, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_B5D69C(0LL, v151);
                v153 = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetSkinnedMesh,
                                                              (System_Type_o *)key,
                                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)key, v153, v154);
                v181 = *(UnityEngine_Ray_o *)&v193[1].fields.version;
                if ( UnityEngine_Collider__Raycast_16823656((UnityEngine_Collider_o *)key, &v181, &v190, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v198, 0LL);
                  if ( v147 > UnityEngine_RaycastHit__get_distance(&v190, 0LL) )
                  {
                    *v110 = (struct UnityEngine_Collider_o *)key;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                      (System_Int32_array **)key,
                      v155,
                      v156,
                      v157,
                      v158,
                      v159,
                      v160);
                    this->fields.isTouched = 1;
                    v147 = UnityEngine_RaycastHit__get_distance(&v190, 0LL);
                  }
                }
              }
            }
            *((_DWORD *)&v188[10] + v142) = 1173;
            v108 = ++v189;
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v191,
              (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( v108 )
            {
              v161 = v108 - 1;
              if ( *((_DWORD *)&v188[9] + v108 + 1) == 1173 )
              {
                --v108;
                v189 = v161;
              }
            }
            if ( this->fields.isTouched )
              return;
          }
          ++v109;
        }
        while ( v109 < UnityEngine_Input__get_touchCount(0LL) );
      }
    }
  }
}


void __fastcall BattleCameraHitJudgment__RemoveCollider(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *collider,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *targetColliderAction; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x21
  UnityEngine_Object_o *touchedCollision; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42EC1BA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__,
      (_DWORD)collider,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    byte_42EC1BA = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Remove(
          prevSkinnedMeshBounds,
          (UnityEngine_SkinnedMeshRenderer_o *)targetColliderAction,
          (const MethodInfo_2F19074 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item((System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction, (System_Type_o *)collider, (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              updatedSkinnedMeshs,
              (WarBoardManager_TaskList_o *)targetColliderAction,
              (const MethodInfo_305896C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    targetColliderAction,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2F1CE64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderAction,
    (System_Type_o *)collider,
    (const MethodInfo_2F1CE64 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v34, v35, v36, v37, v38, v39);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  __int64 v3; // x3
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_42EC1BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42EC1BE = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EC1B7 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15765/*"X_SCALE_APPLY_SVTIDS"*/, v5, v6, v7);
    byte_42EC1B7 = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (BattleServantConfConponent_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15765/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v11 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 0LL);
    else
      v11 = (System_Int32_array **)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (BattleServantConfConponent_c *)v11;
    sub_B5D560(p_xScaleApplySvtId, v11, v12, v13, v14, v15, v16, v17);
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