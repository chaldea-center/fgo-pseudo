void WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3526F & 1) == 0 )
  {
    sub_1C32C20(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_19033/*"enemyMstFace{0:d5}"*/);
    sub_1C32C20(&StringLiteral_6044/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4C3526F = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6044/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields, StringLiteral_6044/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v1, v2);
  v3 = StringLiteral_19033/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19033/*"enemyMstFace{0:d5}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME, v3, v5, v6);
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
    sub_1C32E7C(masterIcon);
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)masterIcon, 0);
}


UnityEngine_Vector3_o WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0)) == 0 )
    sub_1C32E7C(masterIcon);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)masterIcon, 0);
}


void WarBoardMasterPieceComponent__Initialize(
        WarBoardMasterPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *masterIcon; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  UISprite_o *frameSprite; // x21
  Il2CppObject *v13; // x0
  UnityEngine_Object_o *v14; // x20
  const MethodInfo *v15; // x1
  struct UITexture_o *v16; // x20
  UnityEngine_Shader_o *v17; // x22
  UnityEngine_Material_o *v18; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C35268 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Material_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C32C20(&StringLiteral_6860/*"Frame{0}"*/);
    byte_4C35268 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v6, v7, v8, v9, v10, v11);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6860/*"Frame{0}"*/, v13, 0);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))masterIcon->klass->vtable._24_ToString.methodPtr)(
                                  masterIcon,
                                  masterIcon->klass->vtable._24_ToString.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v14, 0, 0) )
  {
    v16 = this->fields.masterIcon;
    v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
    v18 = (UnityEngine_Material_o *)sub_1C32E6C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0);
    if ( v16 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v16->klass->vtable._25_set_material.methodPtr)(
        v16,
        v18,
        v16->klass->vtable._25_set_material.method);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C32E7C(masterIcon);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v15);
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
  const MethodInfo_38C2B00 *v11; // x2
  System_Nullable_float__o v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v18; // x1
  Il2CppClass **v19; // x0
  WarBoardTaskBase_array *v20; // x23
  Il2CppObject *v21; // x24
  const MethodInfo_38C2B00 *v22; // x2
  System_Nullable_float__o v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  WarBoardTaskBase_o *v26; // x21
  Il2CppObject *v27; // x21
  CGThumbnailListItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v30; // x24
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Delegate_o *v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct WarBoardTaskBase_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  Il2CppObject *v42; // x19
  UnityEngine_Transform_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35269 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    sub_1C32C20(&StringLiteral_8938/*"MasterBreak"*/);
    byte_4C35269 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        *(_QWORD *)&v48.fields.hasValue = &v47;
        *(_QWORD *)&v47.fields.hasValue = 0;
        *(_QWORD *)&v47.fields.value.fields.y = 0;
        *(_QWORD *)&v48.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v48, localPosition, v11);
        if ( Instance )
        {
          v12 = cameraSize;
          transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                                   (WarBoardManager_o *)Instance,
                                                   v47,
                                                   v12,
                                                   1,
                                                   0,
                                                   1,
                                                   0);
          items = taskList->fields._items;
          v16 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v18 = transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v18;
              sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1C32E7C(transform);
    }
    v20 = (WarBoardTaskBase_array *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_37;
    v51 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v49.fields.hasValue = &v47;
    v47 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v49, v51, v22);
    if ( !v21 )
      goto LABEL_37;
    v23 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v21,
                                             v47,
                                             v23,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v20 )
      goto LABEL_37;
    v26 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (UnityEngine_Transform_o *)sub_1C32D5C(transform, v20->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !LODWORD(v20->max_length) )
      goto LABEL_38;
    v20->m_Items[0] = v26;
    sub_1C32BC4((CGThumbnailListItem_o *)v20->m_Items, (int32_t)v26, v24, v25);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v20, 0);
  }
LABEL_19:
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_8938/*"MasterBreak"*/,
                                           (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v27 = (Il2CppObject *)transform;
  p_fields = (CGThumbnailListItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0);
  v31 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v30, 0);
  v34 = v31;
  if ( !v31 )
    goto LABEL_24;
  v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (p_fields->klass = (CGThumbnailListItem_c *)v31, (WarBoardTaskBase_TaskCallback_c *)v31->klass != v35) )
  {
    sub_1C3313C(v31);
LABEL_24:
    p_fields->klass = (CGThumbnailListItem_c *)v34;
  }
  sub_1C32BC4(p_fields, (int32_t)v34, v32, v33);
  if ( taskList )
  {
    v38 = taskList->fields._items;
    v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v38 )
      goto LABEL_37;
    v40 = taskList->fields._size;
    if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v27,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &v38->obj.klass + v40;
      taskList->fields._size = v40 + 1;
      v41[4] = (Il2CppClass *)v27;
      sub_1C32BC4((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v27, v36, v37);
    }
    goto LABEL_35;
  }
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
  if ( !transform )
    goto LABEL_37;
  v43 = transform;
  transform = (UnityEngine_Transform_o *)sub_1C32D5C(v27, transform->klass->_1.element_class);
  if ( !transform )
  {
LABEL_39:
    v46 = sub_1C32EA0();
    sub_1C32D48(v46, 0);
  }
  if ( !LODWORD(v43[1].klass) )
LABEL_38:
    sub_1C32E84(transform);
  v43[1].monitor = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&v43[1].monitor, (int32_t)v27, v44, v45);
  if ( !v42 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v42, 0, (WarBoardTaskBase_array *)v43, 0);
LABEL_35:
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0);
}


void WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  CGThumbnailListItem_o *p_assetDatas; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3526E & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C3526E = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (CGThumbnailListItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435536(assetDatas, 0);
    p_assetDatas->klass = 0;
    sub_1C32BC4(p_assetDatas, 0, v5, v6);
  }
}


void WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  WarBoardManager_o *Instance; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v11; // x22
  const MethodInfo_38C2B00 *v12; // x2
  System_Nullable_float__o v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  WarBoardManager_o *v19; // x1
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *v21; // x22
  const MethodInfo *v22; // x2
  struct WarBoardPieceData_o *v23; // x8
  __int64 v24; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  System_Nullable_Vector3__o v33; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v34; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3526A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C32C20(&Method_System_Nullable_Vector3___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardParallelSchedule_TypeInfo);
    byte_4C3526A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v36, 0);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v34.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v34.fields.hasValue = &v33;
  *(_QWORD *)&v33.fields.hasValue = 0;
  *(_QWORD *)&v33.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v34, localPosition, v12);
  if ( !v11 )
    goto LABEL_24;
  v13 = 0;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v11,
                                    v33,
                                    v13,
                                    1,
                                    0,
                                    1,
                                    0);
  if ( !v5 )
    goto LABEL_24;
  items = v5->fields._items;
  v17 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v5->fields._size;
  v19 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Instance,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v23 = this->fields.pieceData;
  if ( !v23 )
    goto LABEL_24;
  v24 = 0;
  while ( (int)v24 < v23->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v24 >= LODWORD(breakPoints->max_length) )
        sub_1C32E84(Instance);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v24];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
            v22);
          v23 = this->fields.pieceData;
        }
        ++v24;
        if ( v23 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v26 = (WarBoardParallelSchedule_o *)sub_1C32E6C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_38181212(v26, (System_Collections_Generic_List_WarBoardTaskBase__o *)v21, 0);
  v29 = v5->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v29 )
LABEL_24:
    sub_1C32E7C(Instance);
  v31 = v5->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v26,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v5->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v26;
    sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_37966928(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C32E7C(0);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0);
}


void WarBoardMasterPieceComponent__SetEnemyMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3526D & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_1C32C20(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4C3526D = 1;
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
    sub_1C32E7C(commandSpellIconRoot);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v4, v5, v6, v7, v8, v9);
  v13 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v12, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v13, v14, 1, 0);
}


void WarBoardMasterPieceComponent__SetMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C32E7C(0);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
}


void WarBoardMasterPieceComponent__SetPlayerMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  void *commandSpellIconRoot; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  long double v8; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x20
  __int64 v14; // x21
  System_String_array *AssetName; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_array *v18; // x20
  System_Action_o *v19; // x21
  EquipEntity_o *fixedEquipEntity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4C3526C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C32C20(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_1C32C20(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_4C3526C = 1;
  }
  fixedEquipEntity = 0;
  v3 = sub_1C32E6C(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v5, v6);
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
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C83334(v8);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C83334(v8);
  commandSpellIconRoot = **(void ***)(v12 + 184);
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
    v14 = *(_QWORD *)&fixedEquipEntity->fields.id.fields.currentCryptoKey;
    v13 = *(_QWORD *)&fixedEquipEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v21.fields.currentCryptoKey = v14;
    *(_QWORD *)&v21.fields.fakeValue = v13;
    iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
  }
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0);
  if ( !commandSpellIconRoot )
LABEL_25:
    sub_1C32E7C(commandSpellIconRoot);
  AssetName = MasterFaceManager__GetAssetName(1, *((_DWORD *)commandSpellIconRoot + 19), iconId_k__BackingField, 0);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AssetName, v16, v17);
  v18 = *(System_String_array **)(v3 + 24);
  v19 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40442140(v18, v19, 1, 0);
}


bool WarBoardMasterPieceComponent__ShowStatus(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3526B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C3526B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  return 0;
}


void WarBoardMasterPieceComponent___OnDead_b__11_0(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__51111776; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v20; // x0
  __int64 v21; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C35270 & 1) == 0 )
  {
    sub_1C32C20(&AssetData___TypeInfo);
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D____78059424);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4C35270 = 1;
  }
  Object_object__51111776 = (System_String_o *)sub_1C32CC8(AssetData___TypeInfo, 1);
  if ( !Object_object__51111776 )
    goto LABEL_14;
  v8 = Object_object__51111776;
  if ( asset )
  {
    Object_object__51111776 = (System_String_o *)sub_1C32D5C(asset, Object_object__51111776->klass->_1.element_class);
    if ( !Object_object__51111776 )
    {
      v21 = sub_1C32EA0();
      sub_1C32D48(v21, 0);
    }
  }
  if ( !LODWORD(v8[1].klass) )
    sub_1C32E84(Object_object__51111776);
  v8[1].monitor = asset;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8[1].monitor, (int32_t)asset, v6, v7);
  this->fields.assetDatas = (struct AssetData_array *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetDatas, (int32_t)v8, v9, v10);
  Object_object__51111776 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v11, v12, v13, v14, v15, v16),
        Object_object__51111776 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v20, 0),
        !asset)
    || (Object_object__51111776 = (System_String_o *)AssetData__GetObject_object__51111776(
                                                       asset,
                                                       Object_object__51111776,
                                                       (const MethodInfo_30BE760 *)Method_AssetData_GetObject_Texture2D____78059424),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
          masterIcon,
          Object_object__51111776,
          masterIcon->klass->vtable._27_set_mainTexture.method),
        (Object_object__51111776 = (System_String_o *)this->fields.masterIcon) == 0) )
  {
LABEL_14:
    sub_1C32E7C(Object_object__51111776);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__51111776, 0);
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
  AssetData_array *AssetStorage_40443500; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct WarBoardMasterPieceComponent_o *v8; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v11; // x8
  struct WarBoardMasterPieceComponent_o *v12; // x8
  struct AssetData_array *v13; // x8
  UnityEngine_Material_o *v14; // x20
  struct WarBoardMasterPieceComponent_o *v15; // x8

  if ( (byte_4C35271 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_Texture2D___);
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4C35271 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40443500 = AssetManager__getAssetStorage_40443500(loadAssets, 0);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_40443500;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.assetDatas, (int32_t)AssetStorage_40443500, v6, v7);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_21;
  assetDatas = v8->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !LODWORD(assetDatas->max_length) )
    goto LABEL_22;
  AssetStorage_40443500 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_40443500 )
    goto LABEL_21;
  masterIcon = v8->fields.masterIcon;
  AssetStorage_40443500 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_40443500,
                                               (const MethodInfo_30BE658 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_40443500 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
                                                     masterIcon,
                                                     AssetStorage_40443500,
                                                     masterIcon->klass->vtable._27_set_mainTexture.method),
        (v11 = this->fields.__4__this) == 0)
    || (AssetStorage_40443500 = (AssetData_array *)v11->fields.masterIcon) == 0
    || (AssetStorage_40443500 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, const MethodInfo *))AssetStorage_40443500->obj.klass->vtable[24].methodPtr)(
                                                     AssetStorage_40443500,
                                                     AssetStorage_40443500->obj.klass->vtable[24].method),
        (v12 = this->fields.__4__this) == 0)
    || (v13 = v12->fields.assetDatas) == 0 )
  {
LABEL_21:
    sub_1C32E7C(AssetStorage_40443500);
  }
  if ( LODWORD(v13->max_length) <= 1 )
LABEL_22:
    sub_1C32E84(AssetStorage_40443500);
  v14 = (UnityEngine_Material_o *)AssetStorage_40443500;
  AssetStorage_40443500 = (AssetData_array *)v13->m_Items[1];
  if ( !AssetStorage_40443500 )
    goto LABEL_21;
  AssetStorage_40443500 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_40443500,
                                               (const MethodInfo_30BE658 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v14 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v14,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_40443500,
    0);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_21;
  AssetStorage_40443500 = (AssetData_array *)v15->fields.masterIcon;
  if ( !AssetStorage_40443500 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_40443500, 0);
}