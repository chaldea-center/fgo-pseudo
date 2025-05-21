void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B42317 & 1) == 0 )
  {
    sub_1BDB878(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_19041/*"enemyMstFace{0:d5}"*/, v4);
    sub_1BDB878(&StringLiteral_6055/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v5);
    byte_4B42317 = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6055/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields, StringLiteral_6055/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v2, v3);
  v6 = StringLiteral_19041/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19041/*"enemyMstFace{0:d5}"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME, v6, v8, v9);
}


void __fastcall WarBoardMasterPieceComponent___ctor(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  this->fields.playerMasterIconSize = 170;
  this->fields.enemyMasterIconSize = 120;
  WarBoardPieceBaseComponent___ctor((WarBoardPieceBaseComponent_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardMasterPieceComponent__GetIconLocalPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon
    || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0LL)) == 0LL )
  {
    sub_1BDBAD4(masterIcon, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)masterIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon
    || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0LL)) == 0LL )
  {
    sub_1BDBAD4(masterIcon, method);
  }
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)masterIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


void __fastcall WarBoardMasterPieceComponent__Initialize(
        WarBoardMasterPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *masterIcon; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UISprite_o *frameSprite; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x1
  struct UITexture_o *v18; // x20
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B42310 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, pieceData);
    sub_1BDB878(&UnityEngine_Material_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_4979/*"Custom/SpriteWithMask"*/, v7);
    sub_1BDB878(&StringLiteral_6870/*"Frame{0}"*/, v8);
    byte_4B42310 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v11, v12, v13);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6870/*"Frame{0}"*/, v15, 0LL);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_ToString.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_IConvertible_ToType.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
  {
    v18 = this->fields.masterIcon;
    v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4979/*"Custom/SpriteWithMask"*/, 0LL);
    v20 = (UnityEngine_Material_o *)sub_1BDBAC4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v20, v19, 0LL);
    if ( v18 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v18->klass->vtable._25_set_material.method)(
        v18,
        v20,
        v18->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BDBAD4(masterIcon, v10);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v17);
}


void __fastcall WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x22
  char *transform; // x0
  __int64 v17; // x1
  const MethodInfo_37F9FB0 *v18; // x2
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0
  WarBoardTaskBase_array *v26; // x23
  Il2CppObject *v27; // x24
  const MethodInfo_37F9FB0 *v28; // x2
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  WarBoardTaskBase_o *v31; // x21
  Il2CppObject *v32; // x21
  CGThumbnailListItem_o *v33; // x22
  System_Delegate_o *v34; // x23
  WarBoardTaskBase_TaskCallback_o *v35; // x24
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Delegate_o *v39; // x8
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct WarBoardTaskBase_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *v47; // x19
  char *v48; // x20
  const MethodInfo *v49; // x3
  __int64 v50; // x0
  System_Nullable_Vector3__o v51; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v52; // 0:x3.8
  System_Nullable_float__o v53; // 0:x3.8
  System_Nullable_Vector3__o v54; // 0:x0.16
  System_Nullable_Vector3__o v55; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B42311 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1BDB878(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1BDB878(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_1BDB878(&WarBoardTaskBase___TypeInfo, v13);
    sub_1BDB878(&StringLiteral_8931/*"MasterBreak"*/, v14);
    byte_4B42311 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v54.fields.hasValue = &v51;
        *(_QWORD *)&v51.fields.hasValue = 0LL;
        *(_QWORD *)&v51.fields.value.fields.y = 0LL;
        *(_QWORD *)&v54.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v54, localPosition, v18);
        if ( Instance )
        {
          v52 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v51,
                                v52,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v24 = (Il2CppClass *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v25[4] = v24;
              sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1BDBAD4(transform, v17);
    }
    v26 = (WarBoardTaskBase_array *)sub_1BDB920(WarBoardTaskBase___TypeInfo, 1LL);
    v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v57 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v55.fields.hasValue = &v51;
    v51 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v55.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v55, v57, v28);
    if ( !v27 )
      goto LABEL_37;
    v53 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v27, v51, v53, 1, 0, 1, 0LL);
    if ( !v26 )
      goto LABEL_37;
    v31 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (char *)sub_1BDB9B4(transform, v26->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v26->max_length )
      goto LABEL_38;
    v26->m_Items[0] = v31;
    sub_1BDB81C((CGThumbnailListItem_o *)v26->m_Items, (int32_t)v31, v29, v30);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v26, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_8931/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v32 = (Il2CppObject *)transform;
  v33 = (CGThumbnailListItem_o *)(transform + 40);
  v34 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v35 = (WarBoardTaskBase_TaskCallback_o *)sub_1BDBAC4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  v39 = v36;
  if ( !v36 )
    goto LABEL_24;
  v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v36->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v33->klass = (CGThumbnailListItem_c *)v36, (WarBoardTaskBase_TaskCallback_c *)v36->klass != v40) )
  {
    sub_1BDBD94(v36);
LABEL_24:
    v33->klass = (CGThumbnailListItem_c *)v39;
  }
  sub_1BDB81C(v33, (int32_t)v39, v37, v38);
  if ( taskList )
  {
    v43 = taskList->fields._items;
    v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v43 )
      goto LABEL_37;
    v45 = taskList->fields._size;
    if ( (unsigned int)v45 >= v43->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v32,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &v43->obj.klass + v45;
      taskList->fields._size = v45 + 1;
      v46[4] = (Il2CppClass *)v32;
      sub_1BDB81C((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v32, v41, v42);
    }
    goto LABEL_35;
  }
  v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1BDB920(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v48 = transform;
  transform = (char *)sub_1BDB9B4(v32, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v50 = sub_1BDBAF8();
    sub_1BDB9A0(v50, 0LL);
  }
  if ( !*((_DWORD *)v48 + 6) )
LABEL_38:
    sub_1BDBADC(transform, v17, v29);
  *((_QWORD *)v48 + 4) = v32;
  sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 32), (int32_t)v32, v29, v49);
  if ( !v47 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v47, 0, (WarBoardTaskBase_array *)v48, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  CGThumbnailListItem_o *p_assetDatas; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B42316 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    byte_4B42316 = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (CGThumbnailListItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39554380(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1BDB81C(p_assetDatas, 0, v5, v6);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v13; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v18; // x22
  const MethodInfo_37F9FB0 *v19; // x2
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  WarBoardManager_o *v25; // x1
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *v27; // x22
  const MethodInfo *v28; // x2
  struct WarBoardPieceData_o *v29; // x8
  __int64 v30; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_Nullable_Vector3__o v39; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v40; // 0:x3.8
  System_Nullable_Vector3__o v41; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B42312 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1BDB878(&WarBoardParallelSchedule_TypeInfo, v10);
    byte_4B42312 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_24;
  if ( !Instance )
    goto LABEL_24;
  SquarePosition = WarBoardManager__GetSquarePosition(Instance, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  Instance = (WarBoardManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_24;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v43, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v41.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v41.fields.hasValue = &v39;
  *(_QWORD *)&v39.fields.hasValue = 0LL;
  *(_QWORD *)&v39.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v41, localPosition, v19);
  if ( !v18 )
    goto LABEL_24;
  v40 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v18,
                                    v39,
                                    v40,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v11 )
    goto LABEL_24;
  items = v11->fields._items;
  v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v11->fields._size;
  v25 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Instance,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v25;
    sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v29 = this->fields.pieceData;
  if ( !v29 )
    goto LABEL_24;
  v30 = 0LL;
  while ( (int)v30 < v29->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v30 >= breakPoints->max_length )
        sub_1BDBADC(Instance, v13, v28);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v30];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v27,
            v28);
          v29 = this->fields.pieceData;
        }
        ++v30;
        if ( v29 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v32 = (WarBoardParallelSchedule_o *)sub_1BDBAC4(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_37337940(v32, (System_Collections_Generic_List_WarBoardTaskBase__o *)v27, 0LL);
  v35 = v11->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v35 )
LABEL_24:
    sub_1BDBAD4(Instance, v13);
  v37 = v11->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v32,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v11->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v32;
    sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_37039328(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__UpdateAlivePiecesWidgetDepth(Instance, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetCommandSpellRemain(
        WarBoardMasterPieceComponent_o *this,
        int32_t remain,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *commandSpellIconComponent; // x0

  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  if ( !commandSpellIconComponent )
    sub_1BDBAD4(0LL, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetEnemyMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B42315 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v3);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1BDB878(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_1BDB878(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_4B42315 = 1;
  }
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(commandSpellIconRoot, 0, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  commandSpellIconRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)commandSpellIconRoot,
                                                       0LL);
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UnityEngine_Transform__set_localEulerAngles(
    (UnityEngine_Transform_o *)commandSpellIconRoot,
    this->fields.enemyMasterIconAngle,
    0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_14;
  UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)WarBoardMasterPieceComponent_TypeInfo;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_14:
    sub_1BDBAD4(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v8, v9, v10);
  v14 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v13, 0LL);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, v15, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1BDBAD4(0LL, method);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0LL) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
}


void __fastcall WarBoardMasterPieceComponent__SetPlayerMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  void *commandSpellIconRoot; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_array *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4B42314 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AssetManager_TypeInfo, v3);
    sub_1BDB878(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v4);
    sub_1BDB878(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v5);
    byte_4B42314 = 1;
  }
  v6 = sub_1BDBAC4(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_15;
  *(_QWORD *)(v6 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandSpellIconRoot, 1, 0LL);
  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0LL);
  if ( !commandSpellIconComponent )
    goto LABEL_15;
  CommandSpellIconComponent__SetData(commandSpellIconComponent, (UserGameEntity_o *)commandSpellIconRoot, 0LL);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_15;
  commandSpellIconRoot = UnityEngine_Component__get_transform((UnityEngine_Component_o *)commandSpellIconRoot, 0LL);
  if ( !commandSpellIconRoot
    || (UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)commandSpellIconRoot,
          this->fields.playerMasterIconAngle,
          0LL),
        (commandSpellIconRoot = this->fields.masterIcon) == 0LL)
    || (UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0LL),
        (commandSpellIconRoot = this->fields.masterIcon) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.playerMasterIconSize, 0LL),
        (commandSpellIconRoot = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (pieceData = this->fields.pieceData) == 0LL )
  {
LABEL_15:
    sub_1BDBAD4(commandSpellIconRoot, v8);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v6 + 24) = AssetName;
  sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 24), (int32_t)AssetName, v14, v15);
  v16 = *(System_String_array **)(v6 + 24);
  v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v6,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39560804(v16, v17, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B42313 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B42313 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v3);
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  return 0;
}


void __fastcall WarBoardMasterPieceComponent___OnDead_b__11_0(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *Object_object__50417328; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B42318 & 1) == 0 )
  {
    sub_1BDB878(&AssetData___TypeInfo, asset);
    sub_1BDB878(&Method_AssetData_GetObject_Texture2D____77074040, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_4B42318 = 1;
  }
  Object_object__50417328 = (System_String_o *)sub_1BDB920(AssetData___TypeInfo, 1LL);
  if ( !Object_object__50417328 )
    goto LABEL_14;
  v12 = Object_object__50417328;
  if ( asset )
  {
    Object_object__50417328 = (System_String_o *)sub_1BDB9B4(asset, Object_object__50417328->klass->_1.element_class);
    if ( !Object_object__50417328 )
    {
      v22 = sub_1BDBAF8();
      sub_1BDB9A0(v22, 0LL);
    }
  }
  if ( !LODWORD(v12[1].klass) )
    sub_1BDBADC(Object_object__50417328, v9, v10);
  v12[1].monitor = asset;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12[1].monitor, (int32_t)asset, v10, v11);
  this->fields.assetDatas = (struct AssetData_array *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.assetDatas, (int32_t)v12, v13, v14);
  Object_object__50417328 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v15, v16, v17),
        Object_object__50417328 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v21, 0LL),
        !asset)
    || (Object_object__50417328 = (System_String_o *)AssetData__GetObject_object__50417328(
                                                       asset,
                                                       Object_object__50417328,
                                                       (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_Texture2D____77074040),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__50417328,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__50417328 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(Object_object__50417328, v9);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__50417328, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
        WarBoardMasterPieceComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___c__DisplayClass16_0___SetPlayerMasterIcon_b__0(
        WarBoardMasterPieceComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  AssetData_array *AssetStorage_39562180; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  struct WarBoardMasterPieceComponent_o *v12; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v15; // x8
  struct WarBoardMasterPieceComponent_o *v16; // x8
  struct AssetData_array *v17; // x8
  UnityEngine_Material_o *v18; // x20
  struct WarBoardMasterPieceComponent_o *v19; // x8

  if ( (byte_4B42319 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_Texture2D___, method);
    sub_1BDB878(&AssetManager_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_16248/*"_MaskTex"*/, v4);
    byte_4B42319 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_39562180 = AssetManager__getAssetStorage_39562180(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_39562180;
  sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.assetDatas, (int32_t)AssetStorage_39562180, v9, v10);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_21;
  assetDatas = v12->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_39562180 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_39562180 )
    goto LABEL_21;
  masterIcon = v12->fields.masterIcon;
  AssetStorage_39562180 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_39562180,
                                               (const MethodInfo_3014DA8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_39562180 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_39562180,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v15 = this->fields.__4__this) == 0LL)
    || (AssetStorage_39562180 = (AssetData_array *)v15->fields.masterIcon) == 0LL
    || (AssetStorage_39562180 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_39562180->obj.klass->vtable[24].method)(
                                                     AssetStorage_39562180,
                                                     AssetStorage_39562180->obj.klass->vtable[25].methodPtr),
        (v16 = this->fields.__4__this) == 0LL)
    || (v17 = v16->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1BDBAD4(AssetStorage_39562180, v8);
  }
  if ( v17->max_length <= 1 )
LABEL_22:
    sub_1BDBADC(AssetStorage_39562180, v8, v11);
  v18 = (UnityEngine_Material_o *)AssetStorage_39562180;
  AssetStorage_39562180 = (AssetData_array *)v17->m_Items[1];
  if ( !AssetStorage_39562180 )
    goto LABEL_21;
  AssetStorage_39562180 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_39562180,
                                               (const MethodInfo_3014DA8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v18 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v18,
    (System_String_o *)StringLiteral_16248/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_39562180,
    0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_21;
  AssetStorage_39562180 = (AssetData_array *)v19->fields.masterIcon;
  if ( !AssetStorage_39562180 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_39562180, 0LL);
}