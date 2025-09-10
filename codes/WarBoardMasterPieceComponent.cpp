void WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C24AF9 & 1) == 0 )
  {
    sub_1C2D490(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19024/*"enemyMstFace{0:d5}"*/);
    sub_1C2D490(&StringLiteral_6036/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4C24AF9 = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6036/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields, StringLiteral_6036/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v1, v2);
  v3 = StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME, v3, v5, v6);
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
    sub_1C2D6EC(masterIcon, method);
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)masterIcon, 0);
}


UnityEngine_Vector3_o WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0)) == 0 )
    sub_1C2D6EC(masterIcon, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)masterIcon, 0);
}


void WarBoardMasterPieceComponent__Initialize(
        WarBoardMasterPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *masterIcon; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UISprite_o *frameSprite; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  struct UITexture_o *v14; // x20
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C24AF2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    sub_1C2D490(&StringLiteral_6855/*"Frame{0}"*/);
    byte_4C24AF2 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v7, v8, v9);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6855/*"Frame{0}"*/, v11, 0);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))masterIcon->klass->vtable._24_ToString.methodPtr)(
                                  masterIcon,
                                  masterIcon->klass->vtable._24_ToString.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
  {
    v14 = this->fields.masterIcon;
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
    v16 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0);
    if ( v14 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))v14->klass->vtable._25_set_material.methodPtr)(
        v14,
        v16,
        v14->klass->vtable._25_set_material.method);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C2D6EC(masterIcon, v6);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v13);
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
  const MethodInfo_38B3EC8 *v12; // x2
  System_Nullable_float__o v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v19; // x1
  Il2CppClass **v20; // x0
  WarBoardTaskBase_array *v21; // x23
  Il2CppObject *v22; // x24
  const MethodInfo_38B3EC8 *v23; // x2
  System_Nullable_float__o v24; // x3
  __int64 v25; // x2
  const MethodInfo *v26; // x3
  WarBoardTaskBase_o *v27; // x21
  Il2CppObject *v28; // x21
  CGThumbnailListItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v31; // x24
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Delegate_o *v35; // x8
  WarBoardTaskBase_TaskCallback_c *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct WarBoardTaskBase_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  Il2CppObject *v43; // x19
  UnityEngine_Transform_o *v44; // x20
  const MethodInfo *v45; // x3
  __int64 v46; // x0
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24AF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_1C2D490(&WarBoardTaskBase___TypeInfo);
    sub_1C2D490(&StringLiteral_8932/*"MasterBreak"*/);
    byte_4C24AF3 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        System_Nullable_Vector3____ctor(v48, localPosition, v12);
        if ( Instance )
        {
          v13 = cameraSize;
          transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                                   (WarBoardManager_o *)Instance,
                                                   v47,
                                                   v13,
                                                   1,
                                                   0,
                                                   1,
                                                   0);
          items = taskList->fields._items;
          v17 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v19 = transform;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1C2D6EC(transform, v11);
    }
    v21 = (WarBoardTaskBase_array *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
    v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_37;
    v51 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v49.fields.hasValue = &v47;
    v47 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v49, v51, v23);
    if ( !v22 )
      goto LABEL_37;
    v24 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v22,
                                             v47,
                                             v24,
                                             1,
                                             0,
                                             1,
                                             0);
    if ( !v21 )
      goto LABEL_37;
    v27 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (UnityEngine_Transform_o *)sub_1C2D5CC(transform, v21->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !LODWORD(v21->max_length) )
      goto LABEL_38;
    v21->m_Items[0] = v27;
    sub_1C2D434((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v27, v25, v26);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v21, 0);
  }
LABEL_19:
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_8932/*"MasterBreak"*/,
                                           (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v28 = (Il2CppObject *)transform;
  p_fields = (CGThumbnailListItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0);
  v32 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v31, 0);
  v35 = v32;
  if ( !v32 )
    goto LABEL_24;
  v36 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (p_fields->klass = (CGThumbnailListItem_c *)v32, (WarBoardTaskBase_TaskCallback_c *)v32->klass != v36) )
  {
    sub_1C2D9AC(v32);
LABEL_24:
    p_fields->klass = (CGThumbnailListItem_c *)v35;
  }
  sub_1C2D434(p_fields, (int32_t)v35, v33, v34);
  if ( taskList )
  {
    v39 = taskList->fields._items;
    v40 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v39 )
      goto LABEL_37;
    v41 = taskList->fields._size;
    if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v28,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &v39->obj.klass + v41;
      taskList->fields._size = v41 + 1;
      v42[4] = (Il2CppClass *)v28;
      sub_1C2D434((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v28, v37, v38);
    }
    goto LABEL_35;
  }
  v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)sub_1C2D538(WarBoardTaskBase___TypeInfo, 1);
  if ( !transform )
    goto LABEL_37;
  v44 = transform;
  transform = (UnityEngine_Transform_o *)sub_1C2D5CC(v28, transform->klass->_1.element_class);
  if ( !transform )
  {
LABEL_39:
    v46 = sub_1C2D710();
    sub_1C2D5B8(v46, 0);
  }
  if ( !LODWORD(v44[1].klass) )
LABEL_38:
    sub_1C2D6F4(transform, v11, v25);
  v44[1].monitor = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v44[1].monitor, (int32_t)v28, v25, v45);
  if ( !v43 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v43, 0, (WarBoardTaskBase_array *)v44, 0);
LABEL_35:
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4C24AF8 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C24AF8 = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (CGThumbnailListItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313308(assetDatas, 0);
    p_assetDatas->klass = 0;
    sub_1C2D434(p_assetDatas, 0, v5, v6);
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
  const MethodInfo_38B3EC8 *v13; // x2
  System_Nullable_float__o v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  WarBoardManager_o *v20; // x1
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_object__o *v22; // x22
  const MethodInfo *v23; // x2
  struct WarBoardPieceData_o *v24; // x8
  __int64 v25; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  System_Nullable_Vector3__o v34; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v35; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24AF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_System_Nullable_Vector3___ctor__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardParallelSchedule_TypeInfo);
    byte_4C24AF4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v37, 0);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  *(_QWORD *)&v35.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v35.fields.hasValue = &v34;
  *(_QWORD *)&v34.fields.hasValue = 0;
  *(_QWORD *)&v34.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v35, localPosition, v13);
  if ( !v12 )
    goto LABEL_24;
  v14 = 0;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v12,
                                    v34,
                                    v14,
                                    1,
                                    0,
                                    1,
                                    0);
  if ( !v5 )
    goto LABEL_24;
  items = v5->fields._items;
  v18 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v5->fields._size;
  v20 = Instance;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Instance,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = this->fields.pieceData;
  if ( !v24 )
    goto LABEL_24;
  v25 = 0;
  while ( (int)v25 < v24->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v25 >= LODWORD(breakPoints->max_length) )
        sub_1C2D6F4(Instance, v7, v23);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v25];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v22,
            v23);
          v24 = this->fields.pieceData;
        }
        ++v25;
        if ( v24 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v27 = (WarBoardParallelSchedule_o *)sub_1C2D6DC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_38062196(v27, (System_Collections_Generic_List_WarBoardTaskBase__o *)v22, 0);
  v30 = v5->fields._items;
  v31 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v30 )
LABEL_24:
    sub_1C2D6EC(Instance, v7);
  v32 = v5->fields._size;
  if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v27,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v33 = &v30->obj.klass + v32;
    v5->fields._size = v32 + 1;
    v33[4] = (Il2CppClass *)v27;
    sub_1C2D434((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v27, v28, v29);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_37848248(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C2D6EC(0, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0);
}


void WarBoardMasterPieceComponent__SetEnemyMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C24AF7 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_1C2D490(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4C24AF7 = 1;
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
    sub_1C2D6EC(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v4, v5, v6);
  v10 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v9, 0);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v10, v11, 1, 0);
}


void WarBoardMasterPieceComponent__SetMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v7; // x3
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_array *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_4C24AF6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_1C2D490(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_4C24AF6 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandSpellIconRoot, 1, 0);
  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0);
  if ( !commandSpellIconComponent )
    goto LABEL_15;
  CommandSpellIconComponent__SetData(commandSpellIconComponent, (UserGameEntity_o *)commandSpellIconRoot, 0);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_15;
  commandSpellIconRoot = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commandSpellIconRoot, 0);
  if ( !commandSpellIconRoot
    || (UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)commandSpellIconRoot,
          this->fields.playerMasterIconAngle,
          0),
        (commandSpellIconRoot = this->fields.masterIcon) == 0)
    || (UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0),
        (commandSpellIconRoot = this->fields.masterIcon) == 0)
    || (UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0),
        (commandSpellIconRoot = UserGameMaster__getSelfUserGame(0)) == 0)
    || (pieceData = this->fields.pieceData) == 0 )
  {
LABEL_15:
    sub_1C2D6EC(commandSpellIconRoot, v5);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)AssetName, v11, v12);
  v13 = *(System_String_array **)(v3 + 24);
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40319912(v13, v14, 1, 0);
}


bool WarBoardMasterPieceComponent__ShowStatus(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24AF5 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24AF5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  return 0;
}


void WarBoardMasterPieceComponent___OnDead_b__11_0(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__51051712; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  System_String_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C24AFA & 1) == 0 )
  {
    sub_1C2D490(&AssetData___TypeInfo);
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4C24AFA = 1;
  }
  Object_object__51051712 = (System_String_o *)sub_1C2D538(AssetData___TypeInfo, 1);
  if ( !Object_object__51051712 )
    goto LABEL_14;
  v9 = Object_object__51051712;
  if ( asset )
  {
    Object_object__51051712 = (System_String_o *)sub_1C2D5CC(asset, Object_object__51051712->klass->_1.element_class);
    if ( !Object_object__51051712 )
    {
      v19 = sub_1C2D710();
      sub_1C2D5B8(v19, 0);
    }
  }
  if ( !LODWORD(v9[1].klass) )
    sub_1C2D6F4(Object_object__51051712, v6, v7);
  v9[1].monitor = asset;
  sub_1C2D434((CGThumbnailListItem_o *)&v9[1].monitor, (int32_t)asset, v7, v8);
  this->fields.assetDatas = (struct AssetData_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assetDatas, (int32_t)v9, v10, v11);
  Object_object__51051712 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v12, v13, v14),
        Object_object__51051712 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v18, 0),
        !asset)
    || (Object_object__51051712 = (System_String_o *)AssetData__GetObject_object__51051712(
                                                       asset,
                                                       Object_object__51051712,
                                                       (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
          masterIcon,
          Object_object__51051712,
          masterIcon->klass->vtable._27_set_mainTexture.method),
        (Object_object__51051712 = (System_String_o *)this->fields.masterIcon) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(Object_object__51051712, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__51051712, 0);
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
  AssetData_array *AssetStorage_40321272; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x2
  struct WarBoardMasterPieceComponent_o *v10; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v13; // x8
  struct WarBoardMasterPieceComponent_o *v14; // x8
  struct AssetData_array *v15; // x8
  UnityEngine_Material_o *v16; // x20
  struct WarBoardMasterPieceComponent_o *v17; // x8

  if ( (byte_4C24AFB & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D___);
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C24AFB = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_40321272 = AssetManager__getAssetStorage_40321272(loadAssets, 0);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_40321272;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.assetDatas, (int32_t)AssetStorage_40321272, v7, v8);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_21;
  assetDatas = v10->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !LODWORD(assetDatas->max_length) )
    goto LABEL_22;
  AssetStorage_40321272 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_40321272 )
    goto LABEL_21;
  masterIcon = v10->fields.masterIcon;
  AssetStorage_40321272 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_40321272,
                                               (const MethodInfo_30AFBB8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_40321272 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
                                                     masterIcon,
                                                     AssetStorage_40321272,
                                                     masterIcon->klass->vtable._27_set_mainTexture.method),
        (v13 = this->fields.__4__this) == 0)
    || (AssetStorage_40321272 = (AssetData_array *)v13->fields.masterIcon) == 0
    || (AssetStorage_40321272 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, const MethodInfo *))AssetStorage_40321272->obj.klass->vtable[24].methodPtr)(
                                                     AssetStorage_40321272,
                                                     AssetStorage_40321272->obj.klass->vtable[24].method),
        (v14 = this->fields.__4__this) == 0)
    || (v15 = v14->fields.assetDatas) == 0 )
  {
LABEL_21:
    sub_1C2D6EC(AssetStorage_40321272, v6);
  }
  if ( LODWORD(v15->max_length) <= 1 )
LABEL_22:
    sub_1C2D6F4(AssetStorage_40321272, v6, v9);
  v16 = (UnityEngine_Material_o *)AssetStorage_40321272;
  AssetStorage_40321272 = (AssetData_array *)v15->m_Items[1];
  if ( !AssetStorage_40321272 )
    goto LABEL_21;
  AssetStorage_40321272 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_40321272,
                                               (const MethodInfo_30AFBB8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v16 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v16,
    (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_40321272,
    0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_21;
  AssetStorage_40321272 = (AssetData_array *)v17->fields.masterIcon;
  if ( !AssetStorage_40321272 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_40321272, 0);
}