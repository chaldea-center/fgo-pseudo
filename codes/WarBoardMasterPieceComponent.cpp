void WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2A00F & 1) == 0 )
  {
    sub_1C94098(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1C94098(&StringLiteral_19179/*"enemyMstFace{0:d5}"*/);
    sub_1C94098(&StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4D2A00F = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19179/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19179/*"enemyMstFace{0:d5}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void WarBoardMasterPieceComponent___ctor(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.playerMasterIconSize = 170;
  this->fields.enemyMasterIconSize = 120;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, method);
}


UnityEngine_Vector3_o WarBoardMasterPieceComponent__GetIconLocalPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0)) == 0 )
    sub_1C942F0(masterIcon, method);
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)masterIcon, 0);
}


UnityEngine_Vector3_o WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0)) == 0 )
    sub_1C942F0(masterIcon, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)masterIcon, 0);
}


void WarBoardMasterPieceComponent__Initialize(
        WarBoardMasterPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *masterIcon; // x0
  __int64 v6; // x1
  UISprite_o *frameSprite; // x21
  Il2CppObject *v8; // x0
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x1
  struct UITexture_o *v11; // x20
  UnityEngine_Shader_o *v12; // x22
  UnityEngine_Material_o *v13; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2A008 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_4943/*"Custom/SpriteWithMask"*/);
    sub_1C94098(&StringLiteral_6869/*"Frame{0}"*/);
    byte_4D2A008 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6869/*"Frame{0}"*/, v8, 0);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))masterIcon->klass->vtable._24_ToString.methodPtr)(
                                 masterIcon,
                                 masterIcon->klass->vtable._24_ToString.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    v11 = this->fields.masterIcon;
    v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4943/*"Custom/SpriteWithMask"*/, 0);
    v13 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0);
    if ( v11 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v11->klass->vtable._25_set_material.methodPtr)(
        v11,
        v13,
        v11->klass->vtable._25_set_material.method);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(masterIcon, v6);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v10);
}


void WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo_3997FB0 *v12; // x2
  System_Nullable_float__o v13; // x3
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v23; // x1
  Il2CppClass **v24; // x0
  WarBoardTaskBase_array *v25; // x23
  Il2CppObject *v26; // x24
  const MethodInfo_3997FB0 *v27; // x2
  System_Nullable_float__o v28; // x3
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  WarBoardTaskBase_o *v35; // x21
  Il2CppObject *v36; // x21
  GrandQuestFolderBoardItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v39; // x24
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Delegate_o *v47; // x8
  WarBoardTaskBase_TaskCallback_c *v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct WarBoardTaskBase_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  Il2CppObject *v59; // x19
  UnityEngine_Transform_o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  __int64 v67; // x0
  System_Nullable_Vector3__o v68; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v69; // 0:x0.16
  System_Nullable_Vector3__o v70; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A009 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Nullable_Vector3___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    sub_1C94098(&StringLiteral_8959/*"MasterBreak"*/);
    byte_4D2A009 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        *(_QWORD *)&v69.fields.hasValue = &v68;
        *(_QWORD *)&v68.fields.hasValue = 0;
        *(_QWORD *)&v68.fields.value.fields.y = 0;
        *(_QWORD *)&v69.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v69, localPosition, v12);
        if ( Instance )
        {
          v13 = cameraSize;
          transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                                   (WarBoardManager_o *)Instance,
                                                   v68,
                                                   v13,
                                                   1,
                                                   0,
                                                   1,
                                                   0);
          items = taskList->fields._items;
          v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v23 = transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1C942F0(transform, v11);
    }
    v25 = (WarBoardTaskBase_array *)sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_37;
    v72 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v70.fields.hasValue = &v68;
    v68 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v70.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v70, v72, v27);
    if ( !v26 )
      goto LABEL_37;
    v28 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v26,
                                             v68,
                                             v28,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v25 )
      goto LABEL_37;
    v35 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (UnityEngine_Transform_o *)sub_1C941D4(transform, v25->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !LODWORD(v25->max_length) )
      goto LABEL_38;
    v25->m_Items[0] = v35;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)v25->m_Items, (int32_t)v35, v29, v30, v31, v32, v33, v34);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v25, 0);
  }
LABEL_19:
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_8959/*"MasterBreak"*/,
                                           (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v36 = (Il2CppObject *)transform;
  p_fields = (GrandQuestFolderBoardItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0);
  v40 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v39, 0);
  v47 = v40;
  if ( !v40 )
    goto LABEL_24;
  v48 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (p_fields->klass = (GrandQuestFolderBoardItem_c *)v40, (WarBoardTaskBase_TaskCallback_c *)v40->klass != v48) )
  {
    sub_1C9468C(v40);
LABEL_24:
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v47;
  }
  sub_1C9403C(p_fields, (int32_t)v47, v41, v42, v43, v44, v45, v46);
  if ( taskList )
  {
    v55 = taskList->fields._items;
    v56 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v55 )
      goto LABEL_37;
    v57 = taskList->fields._size;
    if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v36,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
    }
    else
    {
      v58 = &v55->obj.klass + v57;
      taskList->fields._size = v57 + 1;
      v58[4] = (Il2CppClass *)v36;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v36, v49, v50, v51, v52, v53, v54);
    }
    goto LABEL_35;
  }
  v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
  if ( !transform )
    goto LABEL_37;
  v60 = transform;
  transform = (UnityEngine_Transform_o *)sub_1C941D4(v36, transform->klass->_1.element_class);
  if ( !transform )
  {
LABEL_39:
    v67 = sub_1C94314();
    sub_1C941C0(v67, 0);
  }
  if ( !LODWORD(v60[1].klass) )
LABEL_38:
    sub_1C942F8(transform);
  v60[1].monitor = v36;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v60[1].monitor, (int32_t)v36, v61, v62, v63, v64, v65, v66);
  if ( !v59 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v59, 0, (WarBoardTaskBase_array *)v60, 0);
LABEL_35:
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0);
}


void WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  GrandQuestFolderBoardItem_o *p_assetDatas; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2A00E & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2A00E = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (GrandQuestFolderBoardItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285516(assetDatas, 0);
    p_assetDatas->klass = 0;
    sub_1C9403C(p_assetDatas, 0, v5, v6, v7, v8, v9, v10);
  }
}


void WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v7; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v12; // x22
  const MethodInfo_3997FB0 *v13; // x2
  System_Nullable_float__o v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardManager_o *v24; // x1
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x22
  const MethodInfo *v27; // x2
  struct WarBoardPieceData_o *v28; // x8
  __int64 v29; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Nullable_Vector3__o v42; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A00A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C94098(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C94098(&Method_System_Nullable_Vector3___ctor__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardParallelSchedule_TypeInfo);
    byte_4D2A00A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_24;
  if ( !Instance )
    goto LABEL_24;
  SquarePosition = WarBoardManager__GetSquarePosition(Instance, pieceData->fields._nowSquareIndex_k__BackingField, 0);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  Instance = (WarBoardManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_24;
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v45, 0);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v43.fields.hasValue = &v42;
  *(_QWORD *)&v42.fields.hasValue = 0;
  *(_QWORD *)&v42.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v43, localPosition, v13);
  if ( !v12 )
    goto LABEL_24;
  v14 = 0;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v12,
                                    v42,
                                    v14,
                                    1,
                                    0,
                                    1,
                                    0);
  if ( !v5 )
    goto LABEL_24;
  items = v5->fields._items;
  v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v5->fields._size;
  v24 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Instance,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v24;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v24, v15, v16, v17, v18, v19, v20);
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v28 = this->fields.pieceData;
  if ( !v28 )
    goto LABEL_24;
  v29 = 0;
  while ( (int)v29 < v28->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v29 >= LODWORD(breakPoints->max_length) )
        sub_1C942F8(Instance);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v29];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v26,
            v27);
          v28 = this->fields.pieceData;
        }
        ++v29;
        if ( v28 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v31 = (WarBoardParallelSchedule_o *)sub_1C942E4(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_38927880(v31, (System_Collections_Generic_List_WarBoardTaskBase__o *)v26, 0);
  v38 = v5->fields._items;
  v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v38 )
LABEL_24:
    sub_1C942F0(Instance, v7);
  v40 = v5->fields._size;
  if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v31,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v5->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v31;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_38713568(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__UpdateAlivePiecesWidgetDepth(Instance, 0);
}


void WarBoardMasterPieceComponent__SetCommandSpellRemain(
        WarBoardMasterPieceComponent_o *this,
        int32_t remain,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *commandSpellIconComponent; // x0

  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  if ( !commandSpellIconComponent )
    sub_1C942F0(0, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0);
}


void WarBoardMasterPieceComponent__SetEnemyMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  System_String_o *v7; // x20
  AssetLoader_LoadEndDataHandler_o *v8; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2A00D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_1C94098(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4D2A00D = 1;
  }
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(commandSpellIconRoot, 0, 0);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  commandSpellIconRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)commandSpellIconRoot,
                                                       0);
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UnityEngine_Transform__set_localEulerAngles(
    (UnityEngine_Transform_o *)commandSpellIconRoot,
    this->fields.enemyMasterIconAngle,
    0);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)WarBoardMasterPieceComponent_TypeInfo;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_14:
    sub_1C942F0(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v7 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v6, 0);
  v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v7, v8, 1, 0);
}


void WarBoardMasterPieceComponent__SetMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C942F0(0, method);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
}


void WarBoardMasterPieceComponent__SetPlayerMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  void *commandSpellIconRoot; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  long double v13; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x20
  __int64 v19; // x21
  System_String_array *AssetName; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_array *v27; // x20
  System_Action_o *v28; // x21
  EquipEntity_o *fixedEquipEntity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4D2A00C & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C94098(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_1C94098(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_4D2A00C = 1;
  }
  fixedEquipEntity = 0;
  v3 = sub_1C942E4(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandSpellIconRoot, 1, 0);
  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0);
  if ( !commandSpellIconComponent )
    goto LABEL_25;
  CommandSpellIconComponent__SetData(commandSpellIconComponent, (UserGameEntity_o *)commandSpellIconRoot, 0);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  commandSpellIconRoot = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commandSpellIconRoot, 0);
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  UnityEngine_Transform__set_localEulerAngles(
    (UnityEngine_Transform_o *)commandSpellIconRoot,
    this->fields.playerMasterIconAngle,
    0);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_25;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C6A12C(v13);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C6A12C(v13);
  commandSpellIconRoot = **(void ***)(v17 + 184);
  if ( !commandSpellIconRoot )
    goto LABEL_25;
  commandSpellIconRoot = (void *)WarBoardManager__TryGetFixedMasterEquipInfo(
                                   (WarBoardManager_o *)commandSpellIconRoot,
                                   &fixedEquipEntity,
                                   0);
  if ( ((unsigned __int8)commandSpellIconRoot & 1) != 0 )
  {
    if ( !fixedEquipEntity )
      goto LABEL_25;
    v19 = *(_QWORD *)&fixedEquipEntity->fields.id.fields.currentCryptoKey;
    v18 = *(_QWORD *)&fixedEquipEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v30.fields.currentCryptoKey = v19;
    *(_QWORD *)&v30.fields.fakeValue = v18;
    iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v30, 0);
  }
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0);
  if ( !commandSpellIconRoot )
LABEL_25:
    sub_1C942F0(commandSpellIconRoot, v5);
  AssetName = MasterFaceManager__GetAssetName(1, *((_DWORD *)commandSpellIconRoot + 19), iconId_k__BackingField, 0);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)AssetName, v21, v22, v23, v24, v25, v26);
  v27 = *(System_String_array **)(v3 + 24);
  v28 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41292120(v27, v28, 1, 0);
}


bool WarBoardMasterPieceComponent__ShowStatus(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2A00B & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A00B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  return 0;
}


void WarBoardMasterPieceComponent___OnDead_b__11_0(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__51893132; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_String_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v23; // x0
  __int64 v24; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2A010 & 1) == 0 )
  {
    sub_1C94098(&AssetData___TypeInfo);
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4D2A010 = 1;
  }
  Object_object__51893132 = (System_String_o *)sub_1C94140(AssetData___TypeInfo, 1);
  if ( !Object_object__51893132 )
    goto LABEL_14;
  v13 = Object_object__51893132;
  if ( asset )
  {
    Object_object__51893132 = (System_String_o *)sub_1C941D4(asset, Object_object__51893132->klass->_1.element_class);
    if ( !Object_object__51893132 )
    {
      v24 = sub_1C94314();
      sub_1C941C0(v24, 0);
    }
  }
  if ( !LODWORD(v13[1].klass) )
    sub_1C942F8(Object_object__51893132);
  v13[1].monitor = asset;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13[1].monitor, (int32_t)asset, v7, v8, v9, v10, v11, v12);
  this->fields.assetDatas = (struct AssetData_array *)v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetDatas, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  Object_object__51893132 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_object__51893132 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v23, 0),
        !asset)
    || (Object_object__51893132 = (System_String_o *)AssetData__GetObject_object__51893132(
                                                       asset,
                                                       Object_object__51893132,
                                                       (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
          masterIcon,
          Object_object__51893132,
          masterIcon->klass->vtable._27_set_mainTexture.method),
        (Object_object__51893132 = (System_String_o *)this->fields.masterIcon) == 0) )
  {
LABEL_14:
    sub_1C942F0(Object_object__51893132, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__51893132, 0);
}


void WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
        WarBoardMasterPieceComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardMasterPieceComponent___c__DisplayClass16_0___SetPlayerMasterIcon_b__0(
        WarBoardMasterPieceComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  AssetData_array *AssetStorage_41293480; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct WarBoardMasterPieceComponent_o *v13; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v16; // x8
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct AssetData_array *v18; // x8
  UnityEngine_Material_o *v19; // x20
  struct WarBoardMasterPieceComponent_o *v20; // x8

  if ( (byte_4D2A011 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D___);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    byte_4D2A011 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_41293480 = AssetManager__getAssetStorage_41293480(loadAssets, 0);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_41293480;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.assetDatas,
    (int32_t)AssetStorage_41293480,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_21;
  assetDatas = v13->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !LODWORD(assetDatas->max_length) )
    goto LABEL_22;
  AssetStorage_41293480 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_41293480 )
    goto LABEL_21;
  masterIcon = v13->fields.masterIcon;
  AssetStorage_41293480 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_41293480,
                                               (const MethodInfo_317D284 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_41293480 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
                                                     masterIcon,
                                                     AssetStorage_41293480,
                                                     masterIcon->klass->vtable._27_set_mainTexture.method),
        (v16 = this->fields.__4__this) == 0)
    || (AssetStorage_41293480 = (AssetData_array *)v16->fields.masterIcon) == 0
    || (AssetStorage_41293480 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, const MethodInfo *))AssetStorage_41293480->obj.klass->vtable[24].methodPtr)(
                                                     AssetStorage_41293480,
                                                     AssetStorage_41293480->obj.klass->vtable[24].method),
        (v17 = this->fields.__4__this) == 0)
    || (v18 = v17->fields.assetDatas) == 0 )
  {
LABEL_21:
    sub_1C942F0(AssetStorage_41293480, v6);
  }
  if ( LODWORD(v18->max_length) <= 1 )
LABEL_22:
    sub_1C942F8(AssetStorage_41293480);
  v19 = (UnityEngine_Material_o *)AssetStorage_41293480;
  AssetStorage_41293480 = (AssetData_array *)v18->m_Items[1];
  if ( !AssetStorage_41293480 )
    goto LABEL_21;
  AssetStorage_41293480 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_41293480,
                                               (const MethodInfo_317D284 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v19 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v19,
    (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_41293480,
    0);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_21;
  AssetStorage_41293480 = (AssetData_array *)v20->fields.masterIcon;
  if ( !AssetStorage_41293480 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_41293480, 0);
}