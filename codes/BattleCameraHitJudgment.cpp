void __fastcall BattleCameraHitJudgment___ctor(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_object__int__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_object__int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  UnityEngine_Vector3_c *v21; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v24; // x8
  __int64 v25; // d0
  float v26; // s1

  if ( (byte_4A5D5E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    byte_4A5D5E3 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_MeshCollider__Action__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action___ctor__);
  this->fields.targetColliderAction = (struct System_Collections_Generic_Dictionary_MeshCollider__Action__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetColliderAction, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer___ctor__);
  this->fields.targetSkinnedMesh = (struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetSkinnedMesh, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v9,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetColliderUIColliderIndex = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetColliderUIColliderIndex, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_MeshCollider__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v12,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int___ctor__);
  this->fields.targetSvtId = (struct System_Collections_Generic_Dictionary_MeshCollider__int__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetSvtId, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor__);
  this->fields.updatedSkinnedMeshs = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.updatedSkinnedMeshs, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__TypeInfo);
  System_Collections_Generic_Dictionary_object__Bounds____ctor(
    v18,
    (const MethodInfo_31B77CC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds___ctor__);
  this->fields.prevSkinnedMeshBounds = (struct System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prevSkinnedMeshBounds, (int32_t)v18, v19, v20);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.enemyInputRootDefaultPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.enemyInputRootDefaultPosition.fields.z = z;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v21 = UnityEngine_Vector3_TypeInfo;
    byte_4A55CE6 = 1;
  }
  v24 = v21->static_fields;
  v25 = *(_QWORD *)&v24->oneVector.fields.x;
  v26 = v24->oneVector.fields.z;
  this->fields.BakeMeshThresholdValue = 0.5;
  *(_QWORD *)&this->fields.enemyInputRootDefaultScale.fields.x = v25;
  this->fields.enemyInputRootDefaultScale.fields.z = v26;
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

  if ( (byte_4A5D5DF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    byte_4A5D5DF = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__object___Remove(
      targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_31BF78C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
    if ( !targetColliderAction )
      goto LABEL_19;
    System_Collections_Generic_Dictionary_object__int___Remove(
      (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
      (Il2CppObject *)collider,
      (const MethodInfo_31BF78C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
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
        (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Add__);
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
      if ( targetColliderAction )
      {
        System_Collections_Generic_Dictionary_object__object___Add(
          targetColliderAction,
          (Il2CppObject *)collider,
          (Il2CppObject *)skinnedMesh,
          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Add__);
        if ( isEnableUiCollider )
        {
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
          if ( !targetColliderAction )
            goto LABEL_19;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            uiColliderIndex,
            (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
        }
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
        if ( targetColliderAction )
        {
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
            (Il2CppObject *)collider,
            svtId,
            (const MethodInfo_31BE2E0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Add__);
          return;
        }
      }
    }
LABEL_19:
    sub_1B8880C(targetColliderAction, collider);
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
    sub_1B8880C(enemyInputRoot, method);
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
  int32_t v20; // w2
  int32_t v21; // w3
  float v22; // s12
  float32x2_t v23; // d13
  float v24; // s14
  float32x2_t v25; // d15
  float v26; // s8
  float BakeMeshThresholdValue; // s0
  float32x2_t v28; // d2
  unsigned __int64 v29; // d2
  UnityEngine_Mesh_o *sharedMesh; // x23
  float v31; // s8
  float v32; // s9
  float v33; // s10
  UnityEngine_Transform_o *v34; // x24
  System_Int32_array *XScaleApplySvtId; // x24
  System_Predicate_int__o *v36; // x25
  float Float; // s11
  float v38; // s0
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *prevSkinnedMeshBounds; // x21
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  float v45; // [xsp+0h] [xbp-D0h]
  float v46; // [xsp+4h] [xbp-CCh]
  float y; // [xsp+8h] [xbp-C8h]
  float x; // [xsp+Ch] [xbp-C4h]
  float v49; // [xsp+Ch] [xbp-C4h]
  UnityEngine_Bounds_o v50; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D5E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindIndex_int___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__);
    sub_1B885B0(&BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
    sub_1B885B0(&StringLiteral_16606/*"_xscale"*/);
    byte_4A5D5E1 = 1;
  }
  v7 = sub_1B887FC(BattleCameraHitJudgment___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  if ( System_Collections_Generic_List_object___Contains(
         updatedSkinnedMeshs,
         (Il2CppObject *)skinnedMesh,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__) )
  {
    return;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__Bounds___ContainsKey(
                                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
                                                                       (Il2CppObject *)skinnedMesh,
                                                                       (const MethodInfo_31B84FC *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__ContainsKey__);
  if ( ((unsigned __int8)updatedSkinnedMeshs & 1) == 0 )
    goto LABEL_52;
  if ( !skinnedMesh )
    goto LABEL_49;
  UnityEngine_Renderer__get_bounds(&v50, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  z = v50.fields.m_Extents.fields.z;
  y = v50.fields.m_Center.fields.y;
  x = v50.fields.m_Center.fields.x;
  v11 = v50.fields.m_Extents.fields.y;
  v45 = v50.fields.m_Extents.fields.x;
  v46 = v50.fields.m_Center.fields.z;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v50,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_31B8144 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v12 = *(_QWORD *)&v50.fields.m_Center.fields.x;
  v13 = *(_QWORD *)&v50.fields.m_Center.fields.z;
  v14 = *(_QWORD *)&v50.fields.m_Extents.fields.y;
  if ( !byte_4A55CDF )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CDF = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  UnityEngine_Renderer__get_bounds(&v50, (UnityEngine_Renderer_o *)skinnedMesh, 0LL);
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  v15.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Center.fields.y;
  v16 = v50.fields.m_Extents.fields.x;
  v17.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Extents.fields.y;
  v18 = (float)((float)((float)(x - v45) - (float)(*(float *)&v12 - *((float *)&v13 + 1)))
              * (float)((float)(x - v45) - (float)(*(float *)&v12 - *((float *)&v13 + 1))))
      + (float)((float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14))
              * (float)((float)(y - v11) - (float)(*((float *)&v12 + 1) - *(float *)&v14)));
  v49 = v50.fields.m_Center.fields.x;
  v19 = (float)((float)((float)(v46 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1)))
              * (float)((float)(v46 - z) - (float)(*(float *)&v13 - *((float *)&v14 + 1))))
      + v18;
  System_Collections_Generic_Dictionary_object__Bounds___get_Item(
    &v50,
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)updatedSkinnedMeshs,
    (Il2CppObject *)skinnedMesh,
    (const MethodInfo_31B8144 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__get_Item__);
  v22 = v50.fields.m_Center.fields.x;
  v23.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Center.fields.y;
  v24 = v50.fields.m_Extents.fields.x;
  v25.n64_u64[0] = *(unsigned __int64 *)&v50.fields.m_Extents.fields.y;
  if ( !byte_4A55CDF )
  {
    sub_1B885B0(&System_Math_TypeInfo);
    byte_4A55CDF = 1;
  }
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Math_TypeInfo;
  v26 = sqrtf(v19);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  BakeMeshThresholdValue = this->fields.BakeMeshThresholdValue;
  if ( v26 >= BakeMeshThresholdValue
    || (v28.n64_u64[0] = vsub_f32(vadd_f32(v15, v17), vadd_f32(v23, v25)).n64_u64[0],
        v29 = vmul_f32(v28, v28).n64_u64[0],
        sqrtf(
          *((float *)&v29 + 1)
        + (float)((float)((float)((float)(v49 + v16) - (float)(v22 + v24))
                        * (float)((float)(v49 + v16) - (float)(v22 + v24)))
                + *(float *)&v29)) >= BakeMeshThresholdValue) )
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
        v31 = localScale.fields.x;
        v32 = localScale.fields.y;
        v33 = localScale.fields.z;
        updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                             (UnityEngine_Component_o *)meshCollider,
                                                                             0LL);
        v34 = (UnityEngine_Transform_o *)updatedSkinnedMeshs;
        if ( !byte_4A55CE6 )
        {
          updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( v34 )
        {
          UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.targetSvtId;
          if ( updatedSkinnedMeshs )
          {
            updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                 (System_Collections_Generic_Dictionary_object__int__o *)updatedSkinnedMeshs,
                                                                                 (Il2CppObject *)meshCollider,
                                                                                 (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__get_Item__);
            if ( v7 )
            {
              *(_DWORD *)(v7 + 16) = (_DWORD)updatedSkinnedMeshs;
              XScaleApplySvtId = BattleCameraHitJudgment__get_XScaleApplySvtId(this, v8);
              v36 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
              System_Predicate_int____ctor(
                v36,
                (Il2CppObject *)v7,
                Method_BattleCameraHitJudgment___c__DisplayClass28_0__BakeMesh_b__0__,
                0LL);
              updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)System_Array__FindIndex_int_(
                                                                                   XScaleApplySvtId,
                                                                                   (System_Predicate_T__o *)v36,
                                                                                   (const MethodInfo_2F78F14 *)Method_System_Array_FindIndex_int___);
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
                if ( UnityEngine_Material__HasProperty_69325648(
                       (UnityEngine_Material_o *)updatedSkinnedMeshs,
                       (System_String_o *)StringLiteral_16606/*"_xscale"*/,
                       0LL) )
                {
                  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_material(
                                                                                       (UnityEngine_Renderer_o *)skinnedMesh,
                                                                                       0LL);
                  if ( !updatedSkinnedMeshs )
                    goto LABEL_49;
                  Float = UnityEngine_Material__GetFloat(
                            (UnityEngine_Material_o *)updatedSkinnedMeshs,
                            (System_String_o *)StringLiteral_16606/*"_xscale"*/,
                            0LL);
                  if ( !byte_4A55CE5 )
                  {
                    sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
                    byte_4A55CE5 = 1;
                  }
                  v38 = fmaxf(fabsf(Float), 1.0) * 0.000001;
                  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
                  if ( v38 <= (float)(static_fields->Epsilon * 8.0) )
                    v38 = static_fields->Epsilon * 8.0;
                  if ( vabds_f32(1.0, Float) >= v38 )
                  {
                    updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                                         (UnityEngine_Component_o *)meshCollider,
                                                                                         0LL);
                    if ( !updatedSkinnedMeshs )
                      goto LABEL_49;
                    v52.fields.y = 1.0;
                    v52.fields.z = 1.0;
                    v52.fields.x = Float;
                    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v52, 0LL);
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
                v53.fields.x = v31;
                v53.fields.y = v32;
                v53.fields.z = v33;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)updatedSkinnedMeshs, v53, 0LL);
                prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
                updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)UnityEngine_Renderer__get_bounds(
                                                                                     &v50,
                                                                                     (UnityEngine_Renderer_o *)skinnedMesh,
                                                                                     0LL);
                if ( prevSkinnedMeshBounds )
                {
                  System_Collections_Generic_Dictionary_object__Bounds___set_Item(
                    prevSkinnedMeshBounds,
                    (Il2CppObject *)skinnedMesh,
                    &v50,
                    (const MethodInfo_31B81C4 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__set_Item__);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1B8880C(updatedSkinnedMeshs, v8);
  }
LABEL_43:
  updatedSkinnedMeshs = (System_Collections_Generic_List_object__o *)this->fields.updatedSkinnedMeshs;
  if ( !updatedSkinnedMeshs )
    goto LABEL_49;
  items = updatedSkinnedMeshs->fields._items;
  v42 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
  ++updatedSkinnedMeshs->fields._version;
  if ( !items )
    goto LABEL_49;
  size = updatedSkinnedMeshs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      updatedSkinnedMeshs,
      (Il2CppObject *)skinnedMesh,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    updatedSkinnedMeshs->fields._size = size + 1;
    v44[4] = (Il2CppClass *)skinnedMesh;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)skinnedMesh, v20, v21);
  }
}


void __fastcall BattleCameraHitJudgment__Clear(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *targetColliderAction; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4A5D5DE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    byte_4A5D5DE = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__object___Clear(
    targetColliderAction,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Clear__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.prevSkinnedMeshBounds;
  if ( !targetColliderAction )
    goto LABEL_12;
  System_Collections_Generic_Dictionary_object__Bounds___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)targetColliderAction,
    (const MethodInfo_31B8490 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Clear__);
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
          (const MethodInfo_31BE468 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__),
        (targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(targetColliderAction, method);
  }
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (const MethodInfo_31BE468 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Clear__);
}


void __fastcall BattleCameraHitJudgment__ClearTouchInfo(BattleCameraHitJudgment_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19

  this->fields.touchedCollision = 0LL;
  p_touchedCollision = &this->fields.touchedCollision;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision, 0, v2, v3);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_Collider_o **p_touchedCollision; // x19
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *updatedSkinnedMeshs; // x8
  int32_t size; // w2
  int v16; // w9
  float fieldOfView; // s0
  float v18; // s11
  int v19; // s0
  int v22; // s0
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s8
  float v29; // s9
  float v30; // s10
  unsigned int v31; // s0
  int v32; // s1
  int v33; // s2
  UnityEngine_Transform_o *v34; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Collider_o **v36; // x20
  UnityEngine_Object_o *touchedCollision; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_Object_o *gameObject; // x21
  int32_t v41; // w21
  struct UnityEngine_Collider_o **v42; // x20
  struct UnityEngine_Collider_o *v43; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Collider_o *v45; // x22
  UnityEngine_Camera_o *v46; // x22
  UnityEngine_Vector2_o v47; // kr00_8
  int v48; // s2
  float distance; // s8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  struct UnityEngine_BoxCollider_array *v52; // x8
  struct UnityEngine_Collider_o *v53; // x22
  int32_t v54; // w2
  int32_t v55; // w3
  UnityEngine_Object_o *v56; // x22
  int32_t v57; // w2
  int32_t v58; // w3
  System_Object_array *uiCollider; // x22
  System_Predicate_object__o *v60; // x23
  int32_t Index_object; // w0
  UnityEngine_Camera_o *v62; // x22
  UnityEngine_Vector2_o v63; // kr08_8
  int v64; // s2
  float v65; // s8
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *key; // x22
  __int64 v69; // x1
  struct System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__o *targetSkinnedMesh; // x0
  Il2CppObject *v71; // x0
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  int32_t v74; // w3
  UnityEngine_Camera_o *v75; // x21
  UnityEngine_Vector2_o position; // kr10_8
  int v77; // s2
  int32_t v78; // w2
  int32_t v79; // w3
  Il2CppObject *Item; // x0
  const MethodInfo *v81; // x3
  UnityEngine_Camera_o *v82; // x21
  il2cpp_array_size_t v83; // w22
  UnityEngine_Vector2_o v84; // kr18_8
  int v85; // s2
  struct BattleValueButtonComponent_array *uiColliderAction; // x8
  __int128 *v87; // x1
  UnityEngine_Ray_o v88; // [xsp+10h] [xbp-3B0h] BYREF
  UnityEngine_Ray_o v89; // [xsp+30h] [xbp-390h] BYREF
  __int128 v90; // [xsp+50h] [xbp-370h] BYREF
  __int64 v91; // [xsp+60h] [xbp-360h]
  __int128 v92; // [xsp+70h] [xbp-350h] BYREF
  __int64 v93; // [xsp+80h] [xbp-340h]
  UnityEngine_Touch_o src; // [xsp+90h] [xbp-330h] BYREF
  UnityEngine_RaycastHit_o v95; // [xsp+E0h] [xbp-2E0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v96; // [xsp+110h] [xbp-2B0h] BYREF
  UnityEngine_RaycastHit_o v97; // [xsp+140h] [xbp-280h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98[2]; // [xsp+170h] [xbp-250h] BYREF
  __int128 v99; // [xsp+1C0h] [xbp-200h]
  __int64 v100; // [xsp+1D0h] [xbp-1F0h]
  UnityEngine_Bounds_o v101; // [xsp+1E0h] [xbp-1E0h] BYREF
  __int128 v102; // [xsp+200h] [xbp-1C0h]
  __int64 v103; // [xsp+210h] [xbp-1B0h]
  UnityEngine_RaycastHit_o v104; // [xsp+220h] [xbp-1A0h] BYREF
  UnityEngine_Touch_o dest; // [xsp+250h] [xbp-170h] BYREF
  UnityEngine_Matrix4x4_o v106; // [xsp+2A0h] [xbp-120h] BYREF
  UnityEngine_Bounds_o v107; // [xsp+2E0h] [xbp-E0h] BYREF
  int v108; // [xsp+2FCh] [xbp-C4h] BYREF
  UnityEngine_Bounds_o v109; // [xsp+300h] [xbp-C0h] BYREF
  UnityEngine_Ray_o v110; // [xsp+320h] [xbp-A0h] BYREF
  int v111; // [xsp+33Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D5E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindIndex_BoxCollider___);
    sub_1B885B0(&Method_BattleCameraHitJudgment__LateUpdate_b__29_0__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__Action__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_MeshCollider__int__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Clear__);
    sub_1B885B0(&UnityEngine_MeshCollider_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_BoxCollider__TypeInfo);
    sub_1B885B0(&UICamera_TypeInfo);
    byte_4A5D5E2 = 1;
  }
  v102 = 0uLL;
  v103 = 0LL;
  memset(&v101, 0, sizeof(v101));
  v99 = 0uLL;
  v100 = 0LL;
  memset(&v98[1].fields._version, 0, 24);
  memset(&v106, 0, sizeof(v106));
  memset(&dest, 0, sizeof(dest));
  memset(&v104, 0, sizeof(v104));
  memset(v98, 0, 40);
  memset(&v97, 0, sizeof(v97));
  memset(&v96, 0, sizeof(v96));
  memset(&v95, 0, sizeof(v95));
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)p_touchedCollision, 0, v11, v12);
          *((_DWORD *)p_touchedCollision + 3) = -1;
          *((_BYTE *)p_touchedCollision + 8) = 0;
          return;
        }
      }
      updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
      if ( !updatedSkinnedMeshs )
        goto LABEL_124;
      size = updatedSkinnedMeshs->fields._size;
      v16 = updatedSkinnedMeshs->fields._version + 1;
      updatedSkinnedMeshs->fields._size = 0;
      updatedSkinnedMeshs->fields._version = v16;
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
      v18 = 0.46631 / tanf((float)(fieldOfView * 0.5) * 0.017453);
      if ( v18 < 1.0 )
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
        *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)enemyInputRoot,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleActorCamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Camera__WorldToScreenPoint_69265672(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v19,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.battleUICamera;
        if ( !enemyInputRoot )
          goto LABEL_124;
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Camera__ScreenToWorldPoint_69265696(
                                           (UnityEngine_Camera_o *)enemyInputRoot,
                                           *(UnityEngine_Vector3_o *)&v22,
                                           0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v28 = v25;
        v29 = v26;
        v30 = v27;
        enemyInputRoot = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        UnityEngine_Transform__get_worldToLocalMatrix(
          (UnityEngine_Matrix4x4_o *)&src,
          (UnityEngine_Transform_o *)enemyInputRoot,
          0LL);
        *(_OWORD *)&v106.fields.m00 = *(_OWORD *)&src.fields.m_FingerId;
        *(_OWORD *)&v106.fields.m01 = *(_OWORD *)&src.fields.m_RawPosition.fields.y;
        *(_OWORD *)&v106.fields.m02 = *(_OWORD *)&src.fields.m_TapCount;
        *(_OWORD *)&v106.fields.m03 = *(_OWORD *)&src.fields.m_maximumPossiblePressure;
        v112.fields.x = v28;
        v112.fields.y = v29;
        v112.fields.z = v30;
        v31 = (unsigned int)UnityEngine_Matrix4x4__MultiplyPoint(&v106, v112, 0LL);
        enemyInputRoot = (__int64)this->fields.enemyInputRoot;
        if ( !enemyInputRoot )
          goto LABEL_124;
        v32 = 0;
        v33 = 0;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)enemyInputRoot,
          *(UnityEngine_Vector3_o *)&v31,
          0LL);
        v34 = this->fields.enemyInputRoot;
        if ( !byte_4A55CE6 )
        {
          enemyInputRoot = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v34 )
          goto LABEL_124;
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v113.fields.z = v18 * static_fields->oneVector.fields.z;
        v113.fields.y = v18 * static_fields->oneVector.fields.y;
        v113.fields.x = v18 * static_fields->oneVector.fields.x;
        UnityEngine_Transform__set_localScale(v34, v113, 0LL);
      }
      if ( this->fields.isTouched && (this->fields.touchFinderID & 0x80000000) == 0 )
      {
        v36 = &this->fields.touchedCollision;
        touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(touchedCollision, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v36;
        if ( !*v36 )
          goto LABEL_124;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)enemyInputRoot,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
          goto LABEL_50;
        enemyInputRoot = (__int64)*v36;
        if ( !*v36 )
          goto LABEL_124;
        enemyInputRoot = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)enemyInputRoot, 0LL);
        if ( !enemyInputRoot )
          goto LABEL_124;
        if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)enemyInputRoot, 0LL) )
        {
LABEL_50:
          this->fields.touchedCollision = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision, 0, v38, v39);
          this->fields.touchFinderID = -1;
          this->fields.isTouched = 0;
        }
      }
      if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
      {
        v41 = 0;
        v42 = &this->fields.touchedCollision;
        do
        {
          UnityEngine_Input__GetTouch(&src, v41, 0LL);
          memcpy(&dest, &src, sizeof(dest));
          if ( this->fields.isTouched )
          {
            if ( UnityEngine_Touch__get_fingerId(&dest, 0LL) == this->fields.touchFinderID )
            {
              v43 = *v42;
              if ( *v42
                && (methodPtr_low = LOBYTE(UnityEngine_MeshCollider_TypeInfo->vtable._0_Equals.methodPtr),
                    LOBYTE(v43->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
              {
                if ( (UnityEngine_MeshCollider_c *)v43->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_MeshCollider_TypeInfo )
                  v45 = *v42;
                else
                  v45 = 0LL;
              }
              else
              {
                v45 = 0LL;
              }
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
              {
                v75 = this->fields.battleActorCamera;
                position = UnityEngine_Touch__get_position(&dest, 0LL);
                if ( !v75 )
                  goto LABEL_124;
                v77 = 0;
                enemyInputRoot = (__int64)UnityEngine_Camera__ScreenPointToRay_69266160(
                                            (UnityEngine_Ray_o *)&src,
                                            v75,
                                            *(UnityEngine_Vector3_o *)&position.fields.x,
                                            0LL);
                v102 = *(_OWORD *)&src.fields.m_FingerId;
                v103 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                if ( !v45 )
                  goto LABEL_124;
                UnityEngine_Collider__get_bounds((UnityEngine_Bounds_o *)&src, v45, 0LL);
                v108 = 0;
                *(_QWORD *)&v101.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                *(_OWORD *)&v101.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
                *(_OWORD *)&src.fields.m_FingerId = v102;
                *(_QWORD *)&src.fields.m_RawPosition.fields.y = v103;
                v107 = v101;
                if ( !UnityEngine_Bounds__IntersectRayAABB((UnityEngine_Ray_o *)&src, &v107, (float *)&v108, 0LL) )
                  goto LABEL_122;
                enemyInputRoot = (__int64)this->fields.targetSkinnedMesh;
                if ( !enemyInputRoot )
                  goto LABEL_124;
                Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                         (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                         (Il2CppObject *)v45,
                         (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)v45,
                  (UnityEngine_SkinnedMeshRenderer_o *)Item,
                  v81);
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 3 )
                {
                  enemyInputRoot = (__int64)this->fields.targetColliderAction;
                  if ( enemyInputRoot )
                  {
                    if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
                            (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                            (Il2CppObject *)v45,
                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__) )
                      goto LABEL_122;
                    enemyInputRoot = (__int64)this->fields.targetColliderAction;
                    if ( enemyInputRoot )
                    {
                      enemyInputRoot = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                  (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
                                                  (Il2CppObject *)v45,
                                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__get_Item__);
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
                  sub_1B8880C(enemyInputRoot, v7);
                }
                if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                  goto LABEL_122;
                v87 = &v92;
                v93 = v103;
                v92 = v102;
                enemyInputRoot = (__int64)v45;
LABEL_121:
                if ( UnityEngine_Collider__Raycast_69784800(
                       (UnityEngine_Collider_o *)enemyInputRoot,
                       (UnityEngine_Ray_o *)v87,
                       &v104,
                       3.4028e38,
                       0LL) )
                {
                  return;
                }
LABEL_122:
                this->fields.touchedCollision = 0LL;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision, 0, v78, v79);
                this->fields.touchFinderID = -1;
                this->fields.isTouched = 0;
                return;
              }
              v56 = (UnityEngine_Object_o *)*v42;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
              {
                uiCollider = (System_Object_array *)this->fields.uiCollider;
                v60 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BoxCollider__TypeInfo);
                System_Predicate_object____ctor(
                  v60,
                  (Il2CppObject *)this,
                  Method_BattleCameraHitJudgment__LateUpdate_b__29_0__,
                  0LL);
                Index_object = System_Array__FindIndex_object_(
                                 uiCollider,
                                 (System_Predicate_T__o *)v60,
                                 (const MethodInfo_2F790AC *)Method_System_Array_FindIndex_BoxCollider___);
                if ( (Index_object & 0x80000000) == 0 )
                {
                  v82 = this->fields.battleUICamera;
                  v83 = Index_object;
                  v84 = UnityEngine_Touch__get_position(&dest, 0LL);
                  if ( !v82 )
                    goto LABEL_124;
                  v85 = 0;
                  UnityEngine_Camera__ScreenPointToRay_69266160(
                    (UnityEngine_Ray_o *)&src,
                    v82,
                    *(UnityEngine_Vector3_o *)&v84.fields.x,
                    0LL);
                  v99 = *(_OWORD *)&src.fields.m_FingerId;
                  v100 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  enemyInputRoot = UnityEngine_Touch__get_phase(&dest, 0LL);
                  if ( (_DWORD)enemyInputRoot == 3 )
                  {
                    uiColliderAction = this->fields.uiColliderAction;
                    if ( !uiColliderAction )
                      goto LABEL_124;
                    if ( v83 >= uiColliderAction->max_length )
                      sub_1B88814(enemyInputRoot, v7);
                    enemyInputRoot = (__int64)uiColliderAction->m_Items[v83];
                    if ( !enemyInputRoot )
                      goto LABEL_124;
                    BattleValueButtonComponent__OnClickTarget((BattleValueButtonComponent_o *)enemyInputRoot, 0LL);
                    goto LABEL_122;
                  }
                  if ( UnityEngine_Touch__get_phase(&dest, 0LL) == 4 )
                    goto LABEL_122;
                  enemyInputRoot = (__int64)*v42;
                  *(_OWORD *)&src.fields.m_FingerId = v99;
                  *(_QWORD *)&src.fields.m_RawPosition.fields.y = v100;
                  if ( !enemyInputRoot )
                    goto LABEL_124;
                  v87 = &v90;
                  v91 = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
                  v90 = *(_OWORD *)&src.fields.m_FingerId;
                  goto LABEL_121;
                }
              }
              this->fields.touchedCollision = 0LL;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision, 0, v57, v58);
              this->fields.touchFinderID = -1;
              this->fields.isTouched = 0;
            }
          }
          else if ( UnityEngine_Touch__get_phase(&dest, 0LL) != 3 && UnityEngine_Touch__get_phase(&dest, 0LL) != 4 )
          {
            v46 = this->fields.battleUICamera;
            v47 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v46 )
              goto LABEL_124;
            v48 = 0;
            UnityEngine_Camera__ScreenPointToRay_69266160(
              (UnityEngine_Ray_o *)&src,
              v46,
              *(UnityEngine_Vector3_o *)&v47.fields.x,
              0LL);
            *(_OWORD *)&v98[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v98[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderUIColliderIndex;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__int___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__int__o *)enemyInputRoot,
              (const MethodInfo_31BE6D0 *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__GetEnumerator__);
            distance = 3.4028e38;
            *(_OWORD *)&v98[0].fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v98[0].fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v98[0].fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v50 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
                      v98,
                      (const MethodInfo_32C244C *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__MoveNext__);
              if ( !v50 )
                break;
              v52 = this->fields.uiCollider;
              if ( !v52 )
                sub_1B8880C(v50, v51);
              if ( LODWORD(v98[0].fields._current.fields.value) >= v52->max_length )
                sub_1B88814(v50, v51);
              v53 = (struct UnityEngine_Collider_o *)v52->m_Items[SLODWORD(v98[0].fields._current.fields.value)];
              *(_OWORD *)&src.fields.m_FingerId = *(_OWORD *)&v98[1].fields._version;
              *(_QWORD *)&src.fields.m_RawPosition.fields.y = v98[1].fields._current.fields.value;
              if ( !v53 )
                sub_1B8880C(v50, v51);
              *(_OWORD *)&v89.fields.m_Origin.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v89.fields.m_Direction.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Collider__Raycast_69784800(v53, &v89, &v97, 3.4028e38, 0LL) )
              {
                this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                if ( distance > UnityEngine_RaycastHit__get_distance(&v97, 0LL) )
                {
                  distance = UnityEngine_RaycastHit__get_distance(&v97, 0LL);
                  this->fields.isTouched = 1;
                  this->fields.touchedCollision = v53;
                  sub_1B88554(
                    (ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision,
                    (int32_t)v53,
                    v54,
                    v55);
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
              v98,
              (const MethodInfo_32C2570 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__int__Dispose__);
            if ( this->fields.isTouched )
              return;
            v62 = this->fields.battleActorCamera;
            v63 = UnityEngine_Touch__get_position(&dest, 0LL);
            if ( !v62 )
              goto LABEL_124;
            v64 = 0;
            UnityEngine_Camera__ScreenPointToRay_69266160(
              (UnityEngine_Ray_o *)&src,
              v62,
              *(UnityEngine_Vector3_o *)&v63.fields.x,
              0LL);
            *(_OWORD *)&v98[1].fields._version = *(_OWORD *)&src.fields.m_FingerId;
            v98[1].fields._current.fields.value = *(Il2CppObject **)&src.fields.m_RawPosition.fields.y;
            enemyInputRoot = (__int64)this->fields.targetColliderAction;
            if ( !enemyInputRoot )
              goto LABEL_124;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&src,
              (System_Collections_Generic_Dictionary_object__object__o *)enemyInputRoot,
              (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__GetEnumerator__);
            v65 = 3.4028e38;
            *(_OWORD *)&v96.fields._dictionary = *(_OWORD *)&src.fields.m_FingerId;
            v96.fields._current = *(struct System_Collections_Generic_KeyValuePair_TKey__TValue__o *)&src.fields.m_RawPosition.fields.y;
            *(_QWORD *)&v96.fields._getEnumeratorRetType = *(_QWORD *)&src.fields.m_TapCount;
            while ( 1 )
            {
              v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v96,
                      (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__MoveNext__);
              if ( !v66 )
                break;
              key = v96.fields._current.fields.key;
              if ( !v96.fields._current.fields.key )
                sub_1B8880C(v66, v67);
              UnityEngine_Collider__get_bounds(
                (UnityEngine_Bounds_o *)&src,
                (UnityEngine_Collider_o *)v96.fields._current.fields.key,
                0LL);
              v111 = 0;
              *(_OWORD *)&v101.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v101.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              v110 = *(UnityEngine_Ray_o *)&v98[1].fields._version;
              *(_OWORD *)&v109.fields.m_Center.fields.x = *(_OWORD *)&src.fields.m_FingerId;
              *(_QWORD *)&v109.fields.m_Extents.fields.y = *(_QWORD *)&src.fields.m_RawPosition.fields.y;
              if ( UnityEngine_Bounds__IntersectRayAABB(&v110, &v109, (float *)&v111, 0LL) )
              {
                targetSkinnedMesh = this->fields.targetSkinnedMesh;
                if ( !targetSkinnedMesh )
                  sub_1B8880C(0LL, v69);
                v71 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)targetSkinnedMesh,
                        key,
                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
                BattleCameraHitJudgment__BakeMesh(
                  this,
                  (UnityEngine_MeshCollider_o *)key,
                  (UnityEngine_SkinnedMeshRenderer_o *)v71,
                  v72);
                v88 = *(UnityEngine_Ray_o *)&v98[1].fields._version;
                if ( UnityEngine_Collider__Raycast_69784800((UnityEngine_Collider_o *)key, &v88, &v95, 3.4028e38, 0LL) )
                {
                  this->fields.touchFinderID = UnityEngine_Touch__get_fingerId(&dest, 0LL);
                  if ( v65 > UnityEngine_RaycastHit__get_distance(&v95, 0LL) )
                  {
                    *v42 = (struct UnityEngine_Collider_o *)key;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision,
                      (int32_t)key,
                      v73,
                      v74);
                    this->fields.isTouched = 1;
                    v65 = UnityEngine_RaycastHit__get_distance(&v95, 0LL);
                  }
                }
              }
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v96,
              (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_MeshCollider__Action__Dispose__);
            if ( this->fields.isTouched )
              return;
          }
          ++v41;
        }
        while ( v41 < UnityEngine_Input__get_touchCount(0LL) );
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D5E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D5E0 = 1;
  }
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          targetColliderAction,
          (Il2CppObject *)collider,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__ContainsKey__) )
    return;
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderAction;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__Action__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         targetColliderAction,
         (Il2CppObject *)collider,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__ContainsKey__) )
  {
    targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
    if ( targetColliderAction )
    {
      prevSkinnedMeshBounds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.prevSkinnedMeshBounds;
      targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                          targetColliderAction,
                                                                                          (Il2CppObject *)collider,
                                                                                          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
      if ( prevSkinnedMeshBounds )
      {
        System_Collections_Generic_Dictionary_object__Bounds___Remove(
          prevSkinnedMeshBounds,
          (Il2CppObject *)targetColliderAction,
          (const MethodInfo_31B9868 *)Method_System_Collections_Generic_Dictionary_SkinnedMeshRenderer__Bounds__Remove__);
        targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
        if ( targetColliderAction )
        {
          updatedSkinnedMeshs = this->fields.updatedSkinnedMeshs;
          targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                              targetColliderAction,
                                                                                              (Il2CppObject *)collider,
                                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__get_Item__);
          if ( updatedSkinnedMeshs )
          {
            System_Collections_Generic_List_object___Remove(
              (System_Collections_Generic_List_object__o *)updatedSkinnedMeshs,
              (Il2CppObject *)targetColliderAction,
              (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
            goto LABEL_13;
          }
        }
      }
    }
LABEL_21:
    sub_1B8880C(targetColliderAction, collider);
  }
LABEL_13:
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSkinnedMesh;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__object___Remove(
    targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_MeshCollider__SkinnedMeshRenderer__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetColliderUIColliderIndex;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_31BF78C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  targetColliderAction = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.targetSvtId;
  if ( !targetColliderAction )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)targetColliderAction,
    (Il2CppObject *)collider,
    (const MethodInfo_31BF78C *)Method_System_Collections_Generic_Dictionary_MeshCollider__int__Remove__);
  touchedCollision = (UnityEngine_Object_o *)this->fields.touchedCollision;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(touchedCollision, (UnityEngine_Object_o *)collider, 0LL) )
  {
    this->fields.touchedCollision = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchedCollision, 0, v9, v10);
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

  this->fields.battlePerformance = battlePerformance;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.battlePerformance,
    (int32_t)battlePerformance,
    (int32_t)method,
    v3);
}


void __fastcall BattleCameraHitJudgment__SetCamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.battleActorCamera = camera;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleActorCamera,
    (int32_t)camera,
    (int32_t)method,
    v3);
}


void __fastcall BattleCameraHitJudgment__SetUICamera(
        BattleCameraHitJudgment_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.battleUICamera = camera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleUICamera, (int32_t)camera, (int32_t)method, v3);
}


bool __fastcall BattleCameraHitJudgment___LateUpdate_b__29_0(
        BattleCameraHitJudgment_o *this,
        UnityEngine_BoxCollider_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *touchedCollision; // x20

  if ( (byte_4A5D5E4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D5E4 = 1;
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
  ServantStatusBattleListViewItem_o *p_xScaleApplySvtId; // x19
  struct System_Int32_array *xScaleApplySvtId; // t1
  System_String_o *Value; // x20
  System_Int32_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D5DD & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_15738/*"X_SCALE_APPLY_SVTIDS"*/);
    byte_4A5D5DD = 1;
  }
  xScaleApplySvtId = this->fields.xScaleApplySvtId;
  p_xScaleApplySvtId = (ServantStatusBattleListViewItem_o *)&this->fields.xScaleApplySvtId;
  if ( !xScaleApplySvtId )
  {
    Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15738/*"X_SCALE_APPLY_SVTIDS"*/, 0LL);
    if ( System_String__IsNullOrEmpty(Value, 0LL) )
      v6 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
    else
      v6 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
    p_xScaleApplySvtId->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B88554(p_xScaleApplySvtId, (int32_t)v6, v7, v8);
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