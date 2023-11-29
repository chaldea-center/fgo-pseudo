void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v70; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7

  if ( (byte_40FD462 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v14);
    byte_40FD462 = 1;
  }
  v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v15,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetColliderAction,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo,
                                                                                        v22,
                                                                                        v23,
                                                                                        v24,
                                                                                        v25);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v26,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSkinnedMesh,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                            v33,
                                                                            v34,
                                                                            v35,
                                                                            v36);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v37,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetColliderUIColliderIndex,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v48 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo,
                                                                            v44,
                                                                            v45,
                                                                            v46,
                                                                            v47);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v48,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetSvtId,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                                                                  v55,
                                                                                                  v56,
                                                                                                  v57,
                                                                                                  v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.updatedSkinnedMeshs,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v70 = (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)sub_B170CC(
                                                                                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo,
                                                                                  v66,
                                                                                  v67,
                                                                                  v68,
                                                                                  v69);
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds____ctor(
    v70,
    (const MethodInfo_2D9756C *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = v70;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.prevSkinnedMeshBounds,
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
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
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *targetColliderAction; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *v22; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetSvtId; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *v26; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *v27; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *v28; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *v29; // x0

  if ( (byte_40FD45E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__, collider);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v20);
    byte_40FD45E = 1;
  }
  targetColliderAction = this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetColliderAction,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    v22 = this->fields.targetColliderAction;
    if ( !v22 )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetSkinnedMesh = this->fields.targetSkinnedMesh;
    if ( !targetSkinnedMesh )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetSkinnedMesh,
      (System_Xml_XmlQualifiedName_o *)collider,
      (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderUIColliderIndex )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderUIColliderIndex,
      (System_Type_o *)collider,
      (const MethodInfo_2D9DBDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetSvtId = this->fields.targetSvtId;
    if ( !targetSvtId )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_Type__int___Remove(
      (System_Collections_Generic_Dictionary_Type__int__o *)targetSvtId,
      (System_Type_o *)collider,
      (const MethodInfo_2D9DBDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  }
  if ( clickAction )
  {
    v26 = this->fields.targetColliderAction;
    if ( v26 )
    {
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26,
        (System_Xml_XmlQualifiedName_o *)collider,
        (System_Xml_Schema_XmlSchemaObject_o *)clickAction,
        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      v27 = this->fields.targetSkinnedMesh;
      if ( v27 )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v27,
          (System_Xml_XmlQualifiedName_o *)collider,
          (System_Xml_Schema_XmlSchemaObject_o *)skinnedMesh,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          v28 = this->fields.targetColliderUIColliderIndex;
          if ( !v28 )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)v28,
            (UIPanel_o *)collider,
            uiColliderIndex,
            (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        v29 = this->fields.targetSvtId;
        if ( v29 )
        {
          System_Collections_Generic_Dictionary_UIPanel__int___Add(
            (System_Collections_Generic_Dictionary_UIPanel__int__o *)v29,
            (UIPanel_o *)collider,
            svtId,
            (const MethodInfo_2D9C1BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall BattleCameraHitJudgment__Awake(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *enemyInputRoot; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  enemyInputRoot = this->fields.enemyInputRoot;
  if ( !enemyInputRoot
    || (localPosition = UnityEngine_Transform__get_localPosition(enemyInputRoot, 0LL),
        v4 = this->fields.enemyInputRoot,
        this->fields.enemyInputRootDefaultPosition = localPosition,
        !v4) )
  {
    sub_B170D4();
  }
  this->fields.enemyInputRootDefaultScale = UnityEngine_Transform__get_localScale(v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCameraHitJudgment__BakeMesh(
        BattleCameraHitJudgment_o *this,
        UnityEngine_MeshCollider_o *meshCollider,
        UnityEngine_SkinnedMeshRenderer_o *skinnedMesh,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  BattleCameraHitJudgment___c__DisplayClass28_0_o *v19; // x22
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x0
  float v22; // s0
  float v23; // s1
  float v24; // s2
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v25; // x0
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float v29; // s8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v33; // x0
  float v34; // s9
  float v35; // s10
  float v36; // s11
  float v37; // s0
  float BakeMeshThresholdValue; // s1
  UnityEngine_Mesh_o *sharedMesh; // x23
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v44; // x24
  int v45; // s0
  System_Collections_Generic_Dictionary_string__int__o *targetSvtId; // x0
  int32_t Item; // w0
  const MethodInfo *v50; // x1
  System_Int32_array *XScaleApplySvtId; // x24
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Predicate_int__o *v56; // x25
  UnityEngine_Material_o *material; // x0
  UnityEngine_Material_o *v58; // x0
  float Float; // s11
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Transform_o *v61; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *v62; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v63; // x0
  UnityEngine_Bounds_o v64; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Bounds_o v65; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o min; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o max; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FD460 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_int___, meshCollider);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v13);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v14);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v15);
    sub_B16FFC(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__, v16);
    sub_B16FFC(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_16145, v18);
    byte_40FD460 = 1;
  }
  memset(&v64, 0, sizeof(v64));
  v19 = (BattleCameraHitJudgment___c__DisplayClass28_0_o *)sub_B170CC(
                                                             BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo,
                                                             meshCollider,
                                                             skinnedMesh,
                                                             method,
                                                             v4);
  BattleCameraHitJudgment___c__DisplayClass28_0___ctor(v19, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_32;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         updatedSkinnedMeshs,
         (WarBoardManager_TaskList_o *)skinnedMesh,
         (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
  if ( !prevSkinnedMeshBounds )
    goto LABEL_32;
  if ( !System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ContainsKey(
          prevSkinnedMeshBounds,
          skinnedMesh,
          (const MethodInfo_2D98550 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__) )
    goto LABEL_35;
  if ( !skinnedMesh )
    goto LABEL_32;
  UnityEngine_Renderer__get_bounds(&v65, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v64 = v65;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Bounds__get_min(&v64, 0LL);
  v25 = this->fields.prevSkinnedMeshBounds;
  if ( !v25 )
    goto LABEL_32;
  v26 = v22;
  v27 = v23;
  v28 = v24;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v65,
    v25,
    skinnedMesh,
    (const MethodInfo_2D980C8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v64 = v65;
  min = UnityEngine_Bounds__get_min(&v64, 0LL);
  v66.fields.x = v26;
  v66.fields.y = v27;
  v66.fields.z = v28;
  v29 = UnityEngine_Vector3__Distance(v66, min, 0LL);
  UnityEngine_Renderer__get_bounds(&v65, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  v64 = v65;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Bounds__get_max(&v64, 0LL);
  v33 = this->fields.prevSkinnedMeshBounds;
  if ( !v33 )
    goto LABEL_32;
  v34 = v30;
  v35 = v31;
  v36 = v32;
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___get_Item(
    &v65,
    v33,
    skinnedMesh,
    (const MethodInfo_2D980C8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v64 = v65;
  max = UnityEngine_Bounds__get_max(&v64, 0LL);
  v67.fields.x = v34;
  v67.fields.y = v35;
  v67.fields.z = v36;
  v37 = UnityEngine_Vector3__Distance(v67, max, 0LL);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v29 >= BakeMeshThresholdValue || v37 >= BakeMeshThresholdValue )
  {
LABEL_35:
    if ( meshCollider )
    {
      sharedMesh = UnityEngine_MeshCollider__get_sharedMesh(meshCollider, 0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
      if ( transform )
      {
        localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
        x = localScale.fields.x;
        y = localScale.fields.y;
        z = localScale.fields.z;
        v44 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
        if ( v44 )
        {
          UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
          targetSvtId = (System_Collections_Generic_Dictionary_string__int__o *)this->fields.targetSvtId;
          if ( targetSvtId )
          {
            Item = System_Collections_Generic_Dictionary_string__int___get_Item(
                     targetSvtId,
                     (System_String_o *)meshCollider,
                     (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v19 )
            {
              v19->fields.svtId = Item;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v50);
              v56 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v52, v53, v54, v55);
              System_Predicate_int____ctor(
                v56,
                (Il2CppObject *)v19,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
              if ( (System_Array__FindIndex_int_(
                      XScaleApplySvtId,
                      (System_Predicate_T__o *)v56,
                      (const MethodInfo_2044748 *)Method_System_Array_FindIndex_int___) & 0x80000000) != 0 )
              {
                if ( !skinnedMesh )
                  goto LABEL_32;
              }
              else
              {
                if ( !skinnedMesh )
                  goto LABEL_32;
                material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( !material )
                  goto LABEL_32;
                if ( UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_16145, 0LL) )
                {
                  v58 = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                  if ( !v58 )
                    goto LABEL_32;
                  Float = UnityEngine_Material__GetFloat(v58, (System_String_o *)StringLiteral_16145, 0LL);
                  if ( !UnityEngine_Mathf__Approximately(Float, 1.0, 0LL) )
                  {
                    v60 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
                    if ( !v60 )
                      goto LABEL_32;
                    v69.fields.y = 1.0;
                    v69.fields.x = Float;
                    v69.fields.z = 1.0;
                    UnityEngine_Transform__set_localScale(v60, v69, 0LL);
                  }
                }
              }
              UnityEngine_SkinnedMeshRenderer__BakeMesh(skinnedMesh, sharedMesh, 0LL);
              UnityEngine_MeshCollider__set_sharedMesh(meshCollider, sharedMesh, 0LL);
              v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)meshCollider, 0LL);
              if ( v61 )
              {
                v70.fields.x = x;
                v70.fields.y = y;
                v70.fields.z = z;
                UnityEngine_Transform__set_localScale(v61, v70, 0LL);
                v62 = this->fields.prevSkinnedMeshBounds;
                UnityEngine_Renderer__get_bounds(&v65, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
                if ( v62 )
                {
                  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___set_Item(
                    v62,
                    skinnedMesh,
                    &v65,
                    (const MethodInfo_2D98174 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_29:
  v63 = this->fields.updatedSkinnedMeshs;
  if ( !v63 )
    goto LABEL_32;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v63,
    (EventMissionProgressRequest_Argument_ProgressData_o *)skinnedMesh,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *targetColliderAction; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetSvtId; // x0

  if ( (byte_40FD45D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v6);
    byte_40FD45D = 1;
  }
  targetColliderAction = this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetColliderAction,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetSkinnedMesh = this->fields.targetSkinnedMesh;
  if ( !targetSkinnedMesh )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetSkinnedMesh,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
  if ( !prevSkinnedMeshBounds
    || (System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Clear(
          prevSkinnedMeshBounds,
          (const MethodInfo_2D984B8 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__),
        (updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs) == 0LL)
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)updatedSkinnedMeshs,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__),
        (targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex) == 0LL)
    || (System_Collections_Generic_Dictionary_UIPanel__int___Clear(
          (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetColliderUIColliderIndex,
          (const MethodInfo_2D9C398 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetSvtId = this->fields.targetSvtId) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)targetSvtId,
    (const MethodInfo_2D9C398 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x0
  UnityEngine_Transform_o *enemyInputRoot; // x0
  UnityEngine_Transform_o *v38; // x0
  UnityEngine_Camera_o *v39; // x0
  float fieldOfView; // s0
  float v41; // s11
  BattlePerformance_o *battlePerformance; // x0
  UnityEngine_Transform_o *RepopEnemyTacicalPos; // x0
  int v44; // s0
  UnityEngine_Camera_o *v47; // x0
  int v48; // s0
  UnityEngine_Camera_o *v51; // x0
  float v52; // s0
  float v53; // s1
  float v54; // s2
  UnityEngine_Transform_o *v55; // x0
  float v56; // s8
  float v57; // s9
  float v58; // s10
  UnityEngine_Transform_o *parent; // x0
  unsigned int v60; // s0
  UnityEngine_Transform_o *v61; // x0
  int v62; // s1
  int v63; // s2
  UnityEngine_Transform_o *v64; // x20
  float v65; // s0
  float v66; // s1
  float v67; // s2
  UnityEngine_Component_o **v68; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_GameObject_o *v77; // x0
  int v78; // w25
  int32_t v79; // w21
  struct UnityEngine_Collider_o **v80; // x20
  struct UnityEngine_Collider_o *v81; // x8
  __int64 v82; // x11
  UnityEngine_Collider_o *v83; // x22
  UnityEngine_Camera_o *v84; // x22
  UnityEngine_Vector2_o v85; // kr00_8
  int v86; // s2
  System_Collections_Generic_Dictionary_string__int__o *targetColliderUIColliderIndex; // x0
  float distance; // s9
  _BOOL8 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  struct UnityEngine_BoxCollider_array *v92; // x8
  struct UnityEngine_Collider_o *v93; // x22
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_Object_c *v100; // x0
  UnityEngine_Object_c *v101; // x0
  UnityEngine_Object_o *v102; // x22
  __int64 v103; // x1
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  WarBoardPieceData_array *uiCollider; // x22
  UnityEngine_Object_c **v111; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v112; // x23
  System_Predicate_T__o *v113; // x1
  int32_t Index_WarBoardPieceData; // w0
  int v115; // w25
  int v116; // w8
  UnityEngine_Camera_o *v117; // x22
  UnityEngine_Vector2_o v118; // kr08_8
  int v119; // s2
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *v120; // x0
  float v121; // s9
  Il2CppObject *key; // x22
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *v123; // x0
  UnityEngine_SkinnedMeshRenderer_o *v124; // x0
  const MethodInfo *v125; // x3
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  int v132; // w8
  UnityEngine_Camera_o *v133; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v135; // s2
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  const MethodInfo *v144; // x3
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *targetColliderAction; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *v146; // x0
  System_Action_o *v147; // x0
  UnityEngine_Camera_o *v148; // x21
  unsigned int v149; // w22
  UnityEngine_Vector2_o v150; // kr18_8
  int v151; // s2
  __int64 phase; // x0
  __int64 v153; // x1
  __int64 v154; // x2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  BattleValueButtonComponent_o *v156; // x0
  UnityEngine_Ray_o *v157; // x1
  UnityEngine_Collider_o *v158; // x0
  UnityEngine_Ray_o v159; // [xsp+10h] [xbp-390h] BYREF
  UnityEngine_Ray_o v160; // [xsp+30h] [xbp-370h] BYREF
  UnityEngine_Ray_o v161; // [xsp+50h] [xbp-350h] BYREF
  __int128 v162; // [xsp+70h] [xbp-330h] BYREF
  __int64 v163; // [xsp+80h] [xbp-320h]
  UnityEngine_Ray_o v164; // [xsp+90h] [xbp-310h] BYREF
  UnityEngine_Ray_o v165; // [xsp+B0h] [xbp-2F0h] BYREF
  _QWORD v166[11]; // [xsp+D0h] [xbp-2D0h] BYREF
  int v167; // [xsp+128h] [xbp-278h]
  UnityEngine_RaycastHit_o v168; // [xsp+130h] [xbp-270h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v169; // [xsp+160h] [xbp-240h] BYREF
  UnityEngine_RaycastHit_o v170; // [xsp+190h] [xbp-210h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_string__int__o v171[2]; // [xsp+1C0h] [xbp-1E0h] BYREF
  __int128 v172; // [xsp+210h] [xbp-190h]
  __int64 v173; // [xsp+220h] [xbp-180h]
  _BYTE v174[56]; // [xsp+230h] [xbp-170h] BYREF
  UnityEngine_RaycastHit_o v175; // [xsp+268h] [xbp-138h] BYREF
  UnityEngine_Touch_o v176; // [xsp+298h] [xbp-108h] BYREF
  UnityEngine_Matrix4x4_o v177; // [xsp+2E0h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD461 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_BoxCollider___, method);
    sub_B16FFC(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__, v16);
    sub_B16FFC(&UnityEngine_MeshCollider_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_BoxCollider___ctor__, v19);
    sub_B16FFC(&System_Predicate_BoxCollider__TypeInfo, v20);
    sub_B16FFC(&UICamera_TypeInfo, v21);
    byte_40FD461 = 1;
  }
  memset(&v177, 0, sizeof(v177));
  memset(&v176, 0, sizeof(v176));
  memset(&v175, 0, sizeof(v175));
  memset(&v174[32], 0, 24);
  memset(v174, 0, 24);
  v173 = 0LL;
  v172 = 0u;
  memset(&v171[1].fields.version, 0, 24);
  memset(v171, 0, 40);
  memset(&v170, 0, sizeof(v170));
  memset(&v169, 0, sizeof(v169));
  v22 = &UnityEngine_Object_TypeInfo;
  memset(&v168, 0, sizeof(v168));
  v167 = 0;
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
          sub_B16F98((BattleServantConfConponent_o *)p_touchedCollision, 0LL, v29, v30, v31, v32, v33, v34);
          *((_DWORD *)p_touchedCollision + 2) = -1;
          *((_BYTE *)p_touchedCollision - 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_136;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)updatedSkinnedMeshs,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
      enemyInputRoot = this->fields.enemyInputRoot;
      if ( !enemyInputRoot )
        goto LABEL_136;
      UnityEngine_Transform__set_localPosition(enemyInputRoot, this->fields.enemyInputRootDefaultPosition, 0LL);
      v38 = this->fields.enemyInputRoot;
      if ( !v38 )
        goto LABEL_136;
      UnityEngine_Transform__set_localScale(v38, this->fields.enemyInputRootDefaultScale, 0LL);
      v39 = this->fields.battleActorCamera;
      if ( !v39 )
        goto LABEL_136;
      fieldOfView = UnityEngine_Camera__get_fieldOfView(v39, 0LL);
      v41 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v41 < 1.0 )
      {
        battlePerformance = this->fields.battlePerformance;
        if ( !battlePerformance )
          goto LABEL_136;
        RepopEnemyTacicalPos = BattlePerformance__getRepopEnemyTacicalPos(battlePerformance, 0, 0LL);
        if ( !RepopEnemyTacicalPos )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_position(RepopEnemyTacicalPos, 0LL);
        v47 = this->fields.battleActorCamera;
        if ( !v47 )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Camera__WorldToScreenPoint_40663544(
                                           v47,
                                           *(UnityEngine_Vector3_o *)&v44,
                                           0LL);
        v51 = this->fields.battleUICamera;
        if ( !v51 )
          goto LABEL_136;
        *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Camera__ScreenToWorldPoint_40663568(
                                           v51,
                                           *(UnityEngine_Vector3_o *)&v48,
                                           0LL);
        v55 = this->fields.enemyInputRoot;
        if ( !v55 )
          goto LABEL_136;
        v56 = v52;
        v57 = v53;
        v58 = v54;
        parent = UnityEngine_Transform__get_parent(v55, 0LL);
        if ( !parent )
          goto LABEL_136;
        UnityEngine_Transform__get_worldToLocalMatrix((UnityEngine_Matrix4x4_o *)v166, parent, 0LL);
        v177 = *(UnityEngine_Matrix4x4_o *)v166;
        v178.fields.x = v56;
        v178.fields.y = v57;
        v178.fields.z = v58;
        v60 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v177, v178, 0LL);
        v61 = this->fields.enemyInputRoot;
        if ( !v61 )
          goto LABEL_136;
        v62 = 0;
        v63 = 0;
        UnityEngine_Transform__set_localPosition(v61, *(UnityEngine_Vector3_o *)&v60, 0LL);
        v64 = this->fields.enemyInputRoot;
        *(UnityEngine_Vector3_o *)&v65 = UnityEngine_Vector3__get_one(0LL);
        if ( !v64 )
          goto LABEL_136;
        v179.fields.x = v41 * v65;
        v179.fields.y = v41 * v66;
        v179.fields.z = v41 * v67;
        UnityEngine_Transform__set_localScale(v64, v179, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v68 = (UnityEngine_Component_o **)&this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_54;
        if ( !*v68 )
          goto LABEL_136;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v68, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_54;
        if ( !*v68 )
          goto LABEL_136;
        v77 = UnityEngine_Component__get_gameObject(*v68, 0LL);
        if ( !v77 )
          goto LABEL_136;
        if ( !UnityEngine_GameObject__get_activeInHierarchy(v77, 0LL) )
        {
LABEL_54:
          this->fields.touchedCollision = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v70, v71, v72, v73, v74, v75);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v78 = 0;
        v79 = 0;
        v80 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch((UnityEngine_Touch_o *)v166, v79, 0LL);
          memcpy(&v176, v166, sizeof(v176));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&v176, 0LL) == this->fields.touchFinderID )
            {
              v81 = *v80;
              if ( *v80
                && (v82 = *(&UnityEngine_MeshCollider_TypeInfo->_2.bitflags2 + 1),
                    *(&v81->klass->_2.bitflags2 + 1) >= (unsigned int)v82) )
              {
                if ( (UnityEngine_MeshCollider_c *)v81->klass->_2.typeHierarchy[v82 - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v83 = *v80;
                else
                  v83 = 0LL;
              }
              else
              {
                v83 = 0LL;
              }
              v100 = *v22;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v100);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v83, 0LL, 0LL) )
              {
                v133 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&v176, 0LL);
                if ( !v133 )
                  goto LABEL_136;
                v135 = 0;
                UnityEngine_Camera__ScreenPointToRay_40664072(
                  (UnityEngine_Ray_o *)v166,
                  v133,
                  *(UnityEngine_Vector3_o *)&position.fields.x,
                  0LL);
                *(UnityEngine_Ray_o *)&v174[32] = *(UnityEngine_Ray_o *)v166;
                if ( !v83 )
                  goto LABEL_136;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)v166, v83, 0LL);
                *(UnityEngine_Bounds_o *)v174 = *(UnityEngine_Bounds_o *)v166;
                v165 = *(UnityEngine_Ray_o *)&v174[32];
                if ( !UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v174, &v165, 0LL) )
                  goto LABEL_134;
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  goto LABEL_136;
                Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetSkinnedMesh,
                                                              (System_Type_o *)v83,
                                                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)v83, Item, v144);
                if ( UnityEngine_Touch__get_phase(&v176, 0LL) == 3 )
                {
                  targetColliderAction = this->fields.targetColliderAction;
                  if ( targetColliderAction )
                  {
                    if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)targetColliderAction,
                            (System_Type_o *)v83,
                            (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_134;
                    v146 = this->fields.targetColliderAction;
                    if ( v146 )
                    {
                      v147 = (System_Action_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v146,
                                                  (System_Type_o *)v83,
                                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
                      if ( v147 )
                      {
                        System_Action__Invoke(v147, 0LL);
                        goto LABEL_134;
                      }
                    }
                  }
LABEL_136:
                  sub_B170D4();
                }
                if ( UnityEngine_Touch__get_phase(&v176, 0LL) == 4 )
                  goto LABEL_134;
                v157 = &v164;
                v164 = *(UnityEngine_Ray_o *)&v174[32];
                v158 = v83;
LABEL_133:
                if ( UnityEngine_Collider__Raycast_16523972(v158, v157, &v175, 3.4028e38, 0LL) )
                  return;
LABEL_134:
                this->fields.touchedCollision = 0LL;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                  0LL,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v101 = *v22;
              v102 = (UnityEngine_Object_o *)*v80;
              if ( (BYTE3((*v22)->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v101);
              if ( UnityEngine_Object__op_Inequality(v102, 0LL, 0LL) )
              {
                uiCollider = (WarBoardPieceData_array *)this->fields.uiCollider;
                v111 = v22;
                v112 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                  System_Predicate_BoxCollider__TypeInfo,
                                                                                  v103,
                                                                                  v104,
                                                                                  v105,
                                                                                  v106);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v112,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  (const MethodInfo_2B0B204 *)Method_System_Predicate_BoxCollider___ctor__);
                v113 = (System_Predicate_T__o *)v112;
                v22 = v111;
                Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                            uiCollider,
                                            v113,
                                            (const MethodInfo_20448A4 *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
                {
                  v148 = this->fields.battleUICamera;
                  v149 = Index_WarBoardPieceData;
                  v150 = UnityEngine_Touch__get_position(&v176, 0LL);
                  if ( !v148 )
                    goto LABEL_136;
                  v151 = 0;
                  UnityEngine_Camera__ScreenPointToRay_40664072(
                    (UnityEngine_Ray_o *)v166,
                    v148,
                    *(UnityEngine_Vector3_o *)&v150.fields.x,
                    0LL);
                  v173 = v166[2];
                  v172 = *(_OWORD *)v166;
                  phase = UnityEngine_Touch__get_phase(&v176, 0LL);
                  if ( (_DWORD)phase == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_136;
                    if ( v149 >= uiColliderAction->max_length )
                    {
                      sub_B17100(phase, v153, v154);
                      sub_B170A0();
                    }
                    v156 = uiColliderAction->m_Items[v149];
                    if ( !v156 )
                      goto LABEL_136;
                    BattleValueButtonComponent__OnClickTarget(v156, 0LL);
                    goto LABEL_134;
                  }
                  if ( UnityEngine_Touch__get_phase(&v176, 0LL) == 4 )
                    goto LABEL_134;
                  v158 = *v80;
                  v166[2] = v173;
                  *(_OWORD *)v166 = v172;
                  if ( !v158 )
                    goto LABEL_136;
                  v157 = (UnityEngine_Ray_o *)&v162;
                  v163 = v166[2];
                  v162 = *(_OWORD *)v166;
                  goto LABEL_133;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                0LL,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&v176, 0LL) != 3 && UnityEngine_Touch__get_phase(&v176, 0LL) != 4 )
          {
            v84 = this->fields.battleUICamera;
            v85 = UnityEngine_Touch__get_position(&v176, 0LL);
            if ( !v84 )
              goto LABEL_136;
            v86 = 0;
            UnityEngine_Camera__ScreenPointToRay_40664072(
              (UnityEngine_Ray_o *)v166,
              v84,
              *(UnityEngine_Vector3_o *)&v85.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v171[1].fields.version = *(UnityEngine_Ray_o *)v166;
            targetColliderUIColliderIndex = (System_Collections_Generic_Dictionary_string__int__o *)this->fields.targetColliderUIColliderIndex;
            if ( !targetColliderUIColliderIndex )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_string__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v166,
              targetColliderUIColliderIndex,
              (const MethodInfo_2D9C750 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            v171[0] = *(System_Collections_Generic_Dictionary_Enumerator_string__int__o *)v166;
            while ( 1 )
            {
              v89 = System_Collections_Generic_Dictionary_Enumerator_string__int___MoveNext(
                      v171,
                      (const MethodInfo_26BB7E0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v89 )
                break;
              v92 = this->fields.uiCollider;
              if ( !v92 )
                sub_B170D4();
              if ( LODWORD(v171[0].fields.current.fields.value) >= v92->max_length )
              {
                sub_B17100(v89, v90, v91);
                sub_B170A0();
              }
              v93 = (struct UnityEngine_Collider_o *)v92->m_Items[SLODWORD(v171[0].fields.current.fields.value)];
              *(UnityEngine_Ray_o *)v166 = *(UnityEngine_Ray_o *)&v171[1].fields.version;
              if ( !v93 )
                sub_B170D4();
              v161 = *(UnityEngine_Ray_o *)v166;
              if ( UnityEngine_Collider__Raycast_16523972(v93, &v161, &v170, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v176, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v170, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v170, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v93;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                    (System_Int32_array **)v93,
                    v94,
                    v95,
                    v96,
                    v97,
                    v98,
                    v99);
                }
              }
            }
            *((_DWORD *)&v166[10] + v78) = 943;
            v115 = ++v167;
            System_Collections_Generic_Dictionary_Enumerator_string__int___Dispose(
              v171,
              (const MethodInfo_26BB94C *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( v115 )
            {
              v116 = v115 - 1;
              if ( *((_DWORD *)&v166[9] + v115 + 1) == 943 )
              {
                --v115;
                v167 = v116;
              }
            }
            if ( this->fields.isTouched )
              return;
            v117 = this->fields.battleActorCamera;
            v118 = UnityEngine_Touch__get_position(&v176, 0LL);
            if ( !v117 )
              goto LABEL_136;
            v119 = 0;
            UnityEngine_Camera__ScreenPointToRay_40664072(
              (UnityEngine_Ray_o *)v166,
              v117,
              *(UnityEngine_Vector3_o *)&v118.fields.x,
              0LL);
            *(UnityEngine_Ray_o *)&v171[1].fields.version = *(UnityEngine_Ray_o *)v166;
            v120 = this->fields.targetColliderAction;
            if ( !v120 )
              goto LABEL_136;
            System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v166,
              (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v120,
              (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v121 = 3.4028e38;
            v169 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v166;
            while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
                      &v169,
                      (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__) )
            {
              key = v169.fields.current.fields.key;
              if ( !v169.fields.current.fields.key )
                sub_B170D4();
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)v166,
                (UnityEngine_Collider_o *)v169.fields.current.fields.key,
                0LL);
              *(UnityEngine_Bounds_o *)v174 = *(UnityEngine_Bounds_o *)v166;
              v160 = *(UnityEngine_Ray_o *)&v171[1].fields.version;
              if ( UnityEngine_Bounds__IntersectRay((UnityEngine_Bounds_o *)v174, &v160, 0LL) )
              {
                v123 = this->fields.targetSkinnedMesh;
                if ( !v123 )
                  sub_B170D4();
                v124 = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v123,
                                                              (System_Type_o *)key,
                                                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(this, (UnityEngine_MeshCollider_o *)key, v124, v125);
                v159 = *(UnityEngine_Ray_o *)&v171[1].fields.version;
                if ( UnityEngine_Collider__Raycast_16523972((UnityEngine_Collider_o *)key, &v159, &v168, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&v176, 0LL);
                  if ( v121 > UnityEngine_RaycastHit__get_distance(&v168, 0LL) )
                  {
                    *v80 = (struct UnityEngine_Collider_o *)key;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.touchedCollision,
                      (System_Int32_array **)key,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130,
                      v131);
                    this->fields.isTouched = 1;
                    v121 = UnityEngine_RaycastHit__get_distance(&v168, 0LL);
                  }
                }
              }
            }
            *((_DWORD *)&v166[10] + v115) = 1173;
            v78 = ++v167;
            System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
              &v169,
              (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( v78 )
            {
              v132 = v78 - 1;
              if ( *((_DWORD *)&v166[9] + v78 + 1) == 1173 )
              {
                --v78;
                v167 = v132;
              }
            }
            if ( this->fields.isTouched )
              return;
          }
          ++v79;
        }
        while ( v79 < UnityEngine_Input__get_touchCount(0LL) );
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
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *targetColliderAction; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *v14; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *v16; // x0
  System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *prevSkinnedMeshBounds; // x21
  UnityEngine_SkinnedMeshRenderer_o *Item; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *v19; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *updatedSkinnedMeshs; // x21
  UnityEngine_Purchasing_IStoreExtension_o *v21; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *v22; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetColliderUIColliderIndex; // x0
  struct System_Collections_Generic_Dictionary_MeshCollider__int__o *targetSvtId; // x0
  UnityEngine_Object_o *touchedCollision; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FD45F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__, collider);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FD45F = 1;
  }
  targetColliderAction = this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetColliderAction,
          (System_Xml_XmlQualifiedName_o *)collider,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  v14 = this->fields.targetColliderAction;
  if ( !v14 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetSkinnedMesh = this->fields.targetSkinnedMesh;
  if ( !targetSkinnedMesh )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)targetSkinnedMesh,
         (System_Xml_XmlQualifiedName_o *)collider,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    v16 = this->fields.targetSkinnedMesh;
    if ( v16 )
    {
      prevSkinnedMeshBounds = this->fields.prevSkinnedMeshBounds;
      Item = (UnityEngine_SkinnedMeshRenderer_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
                                                    (System_Type_o *)collider,
                                                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___Remove(
          prevSkinnedMeshBounds,
          Item,
          (const MethodInfo_2D99DEC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        v19 = this->fields.targetSkinnedMesh;
        if ( v19 )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.updatedSkinnedMeshs;
          v21 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v19,
                  (System_Type_o *)collider,
                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
              updatedSkinnedMeshs,
              (WarBoardManager_TaskList_o *)v21,
              (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_13:
  v22 = this->fields.targetSkinnedMesh;
  if ( !v22 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22,
    (System_Xml_XmlQualifiedName_o *)collider,
    (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderUIColliderIndex = this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderUIColliderIndex )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetColliderUIColliderIndex,
    (System_Type_o *)collider,
    (const MethodInfo_2D9DBDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetSvtId = this->fields.targetSvtId;
  if ( !targetSvtId )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_Type__int___Remove(
    (System_Collections_Generic_Dictionary_Type__int__o *)targetSvtId,
    (System_Type_o *)collider,
    (const MethodInfo_2D9DBDC *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.touchedCollision, 0LL, v26, v27, v28, v29, v30, v31);
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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

  if ( (byte_40FD463 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40FD463 = 1;
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
  __int64 v7; // x2
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FD45C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_15512, v3);
    byte_40FD45C = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (BattleServantConfConponent_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15512, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v8 = (System_Int32_array **)sub_B17014(int___TypeInfo, 0LL, v7);
    else
      v8 = (System_Int32_array **)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_xScaleApplySvtId, v8, v9, v10, v11, v12, v13, v14);
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