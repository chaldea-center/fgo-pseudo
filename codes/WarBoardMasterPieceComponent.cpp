void WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DF2C & 1) == 0 )
  {
    sub_2213A60(&WarBoardMasterPieceComponent_TypeInfo);
    sub_2213A60(&StringLiteral_19924/*"enemyMstFace{0:d5}"*/);
    sub_2213A60(&StringLiteral_6302/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_596DF2C = 1;
  }
  v7 = StringLiteral_6302/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6302/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_19924/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19924/*"enemyMstFace{0:d5}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
    sub_2213CDC(masterIcon, method);
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)masterIcon, 0);
}


UnityEngine_Vector3_o WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (masterIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(masterIcon, 0)) == 0 )
    sub_2213CDC(masterIcon, method);
  return UnityEngine_Transform__get_position((UnityEngine_Transform_o *)masterIcon, 0);
}


void WarBoardMasterPieceComponent__Initialize(
        WarBoardMasterPieceComponent_o *this,
        WarBoardPieceData_o *pieceData,
        const MethodInfo *method)
{
  System_String_o *masterIcon; // x0
  __int64 v6; // x1
  int32_t forceId_k__BackingField; // w9
  UISprite_o *frameSprite; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  struct UITexture_o *v14; // x20
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596DF25 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_7151/*"Frame{0}"*/);
    byte_596DF25 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  frameSprite = this->fields.frameSprite;
  v17 = forceId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_7151/*"Frame{0}"*/, v9, 0);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))masterIcon->klass->vtable._24_ToString.methodPtr)(
                                  masterIcon,
                                  masterIcon->klass->vtable._24_ToString.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
  {
    v14 = this->fields.masterIcon;
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
    v16 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
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
    sub_2213CDC(masterIcon, v6);
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
  const MethodInfo_45E9150 *v12; // x2
  System_Nullable_float__o v13; // x3
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v23; // x1
  Il2CppClass **v24; // x0
  WarBoardTaskBase_array *v25; // x23
  Il2CppObject *v26; // x24
  const MethodInfo_45E9150 *v27; // x2
  System_Nullable_float__o v28; // x3
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  WarBoardTaskBase_o *v35; // x21
  __int64 v36; // x1
  Il2CppObject *v37; // x21
  MissionNaviTransitionBoardItem_o *p_fields; // x22
  System_Delegate_o *m_CachedPtr; // x23
  WarBoardTaskBase_TaskCallback_o *v40; // x24
  System_Delegate_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w8
  WarBoardTaskBase_TaskCallback_c *v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct WarBoardTaskBase_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  Il2CppObject *v60; // x19
  UnityEngine_Transform_o *v61; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  __int64 v68; // x0
  System_Nullable_Vector3__o v69; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v70; // 0:x0.16
  System_Nullable_Vector3__o v71; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF26 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_2213A60(&WarBoardTaskBase___TypeInfo);
    sub_2213A60(&StringLiteral_9307/*"MasterBreak"*/);
    byte_596DF26 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        *(_QWORD *)&v70.fields.hasValue = &v69;
        *(_QWORD *)&v69.fields.hasValue = 0;
        *(_QWORD *)&v69.fields.value.fields.y = 0;
        *(_QWORD *)&v70.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v70, localPosition, v12);
        if ( Instance )
        {
          v13 = cameraSize;
          transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                                   (WarBoardManager_o *)Instance,
                                                   v69,
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_2213CDC(transform, v11);
    }
    v25 = (WarBoardTaskBase_array *)sub_2213B20(WarBoardTaskBase___TypeInfo, 1);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_37;
    v73 = UnityEngine_Transform__get_localPosition(transform, 0);
    *(_QWORD *)&v71.fields.hasValue = &v69;
    v69 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v71.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v71, v73, v27);
    if ( !v26 )
      goto LABEL_37;
    v28 = cameraSize;
    transform = (UnityEngine_Transform_o *)WarBoardManager__GetCameraPerformanceTask(
                                             (WarBoardManager_o *)v26,
                                             v69,
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
      transform = (UnityEngine_Transform_o *)sub_2213BB4(transform, v25->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !LODWORD(v25->max_length) )
      goto LABEL_38;
    v25->m_Items[0] = v35;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)v25->m_Items, (int32_t)v35, v29, v30, v31, v32, v33, v34);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v25, 0);
  }
LABEL_19:
  transform = (UnityEngine_Transform_o *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                           (WarBoardPieceBaseComponent_o *)this,
                                           (System_String_o *)StringLiteral_9307/*"MasterBreak"*/,
                                           (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v37 = (Il2CppObject *)transform;
  p_fields = (MissionNaviTransitionBoardItem_o *)&transform[1].fields;
  m_CachedPtr = (System_Delegate_o *)transform[1].fields.m_CachedPtr;
  v40 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0);
  v41 = System_Delegate__Combine(m_CachedPtr, (System_Delegate_o *)v40, 0);
  v48 = (int)v41;
  if ( !v41 )
    goto LABEL_24;
  v49 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v41->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (p_fields->klass = (MissionNaviTransitionBoardItem_c *)v41, (WarBoardTaskBase_TaskCallback_c *)v41->klass != v49) )
  {
    sub_221405C(v41, v49, v42, v43);
LABEL_24:
    p_fields->klass = 0;
  }
  sub_2213A04(p_fields, v48, v42, v43, v44, v45, v46, v47);
  if ( taskList )
  {
    v56 = taskList->fields._items;
    v57 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v56 )
      goto LABEL_37;
    v58 = taskList->fields._size;
    if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v37,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v59 = &v56->obj.klass + v58;
      taskList->fields._size = v58 + 1;
      v59[4] = (Il2CppClass *)v37;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)v37, v50, v51, v52, v53, v54, v55);
    }
    goto LABEL_35;
  }
  v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (UnityEngine_Transform_o *)sub_2213B20(WarBoardTaskBase___TypeInfo, 1);
  if ( !transform )
    goto LABEL_37;
  v61 = transform;
  transform = (UnityEngine_Transform_o *)sub_2213BB4(v37, transform->klass->_1.element_class);
  if ( !transform )
  {
LABEL_39:
    v68 = sub_2213D00(transform, v36);
    sub_2213BA0(v68, 0);
  }
  if ( !LODWORD(v61[1].klass) )
LABEL_38:
    sub_2213CE4(transform);
  v61[1].monitor = v37;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v61[1].monitor, (int32_t)v37, v62, v63, v64, v65, v66, v67);
  if ( !v60 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v60, 0, (WarBoardTaskBase_array *)v61, 0);
LABEL_35:
  transform = (UnityEngine_Transform_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0);
}


void WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_array *assetDatas; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596DF2B & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596DF2B = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47497180(assetDatas, 0);
    this->fields.assetDatas = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetDatas, 0, v5, v6, v7, v8, v9, v10);
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
  const MethodInfo_45E9150 *v13; // x2
  System_Nullable_float__o v14; // x3
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardManager_o *v24; // x1
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_object__o *v26; // x22
  const MethodInfo *v27; // x2
  struct WarBoardPieceData_o *v28; // x8
  int32_t v29; // w27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Nullable_Vector3__o v42; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardParallelSchedule_TypeInfo);
    byte_596DF27 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v24, v15, v16, v17, v18, v19, v20);
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v28 = this->fields.pieceData;
  if ( !v28 )
    goto LABEL_24;
  v29 = 0;
  while ( v29 < v28->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v29 >= LODWORD(breakPoints->max_length) )
        sub_2213CE4(Instance);
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
  v31 = (WarBoardParallelSchedule_o *)sub_2213CCC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_45176824(v31, (System_Collections_Generic_List_WarBoardTaskBase__o *)v26, 0);
  v38 = v5->fields._items;
  v39 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v38 )
LABEL_24:
    sub_2213CDC(Instance, v7);
  v40 = v5->fields._size;
  if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v31,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v5->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_44964336(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__UpdateAlivePiecesWidgetDepth(Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardMasterPieceComponent__SetCommandSpellRemain(
        WarBoardMasterPieceComponent_o *this,
        int32_t remain,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *commandSpellIconComponent; // x0

  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  if ( !commandSpellIconComponent )
    sub_2213CDC(0, *(_QWORD *)&remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0);
}


void WarBoardMasterPieceComponent__SetEnemyMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  __int64 v4; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596DF2A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_2213A60(&WarBoardMasterPieceComponent_TypeInfo);
    byte_596DF2A = 1;
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
  if ( !*(&WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo, method, v4);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_14:
    sub_2213CDC(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId_k__BackingField);
  v8 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v7, 0);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
  AssetManager__loadAssetStorage(v8, v9, 1, 0, 0);
}


void WarBoardMasterPieceComponent__SetMasterIcon(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_2213CDC(0, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  long double v13; // q0
  struct WarBoardPieceData_o *pieceData; // x8
  int32_t iconId_k__BackingField; // w20
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x20
  __int64 v20; // x21
  System_String_array *AssetName; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_array *v28; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  EquipEntity_o *fixedEquipEntity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_596DF29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_2213A60(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_596DF29 = 1;
  }
  fixedEquipEntity = 0;
  v3 = sub_2213CCC(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908(v13);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908(v13);
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
    v20 = *(_QWORD *)&fixedEquipEntity->fields.id.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v18);
    *(_QWORD *)&v33.fields.currentCryptoKey = v19;
    *(_QWORD *)&v33.fields.fakeValue = v20;
    iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v33, 0);
  }
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0);
  if ( !commandSpellIconRoot )
LABEL_25:
    sub_2213CDC(commandSpellIconRoot, v5);
  AssetName = MasterFaceManager__GetAssetName(1, *((_DWORD *)commandSpellIconRoot + 19), iconId_k__BackingField, 0);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)AssetName, v22, v23, v24, v25, v26, v27);
  v28 = *(System_String_array **)(v3 + 24);
  v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30, v31);
  AssetManager__loadAssetStorage_47503780(v28, v29, 1, 0);
}


bool WarBoardMasterPieceComponent__ShowStatus(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596DF28 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596DF28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0, 0);
  return 0;
}


void WarBoardMasterPieceComponent___OnDead_b__11_0(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__58532980; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x21
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v25; // x0
  __int64 v26; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596DF2D & 1) == 0 )
  {
    sub_2213A60(&AssetData___TypeInfo);
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&WarBoardMasterPieceComponent_TypeInfo);
    byte_596DF2D = 1;
  }
  Object_object__58532980 = (System_String_o *)sub_2213B20(AssetData___TypeInfo, 1);
  if ( !Object_object__58532980 )
    goto LABEL_14;
  v13 = Object_object__58532980;
  if ( asset )
  {
    Object_object__58532980 = (System_String_o *)sub_2213BB4(asset, Object_object__58532980->klass->_1.element_class);
    if ( !Object_object__58532980 )
    {
      v26 = sub_2213D00(0, v14);
      sub_2213BA0(v26, 0);
    }
  }
  if ( !LODWORD(v13[1].klass) )
    sub_2213CE4(Object_object__58532980);
  v13[1].monitor = asset;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13[1].monitor, (int32_t)asset, v7, v8, v9, v10, v11, v12);
  this->fields.assetDatas = (struct AssetData_array *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetDatas, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  Object_object__58532980 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !*(&WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo, v6, v21);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId_k__BackingField),
        Object_object__58532980 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v25, 0),
        !asset)
    || (Object_object__58532980 = (System_String_o *)AssetData__GetObject_object__58532980(
                                                       asset,
                                                       Object_object__58532980,
                                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
          masterIcon,
          Object_object__58532980,
          masterIcon->klass->vtable._27_set_mainTexture.method),
        (Object_object__58532980 = (System_String_o *)this->fields.masterIcon) == 0) )
  {
LABEL_14:
    sub_2213CDC(Object_object__58532980, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__58532980, 0);
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
  __int64 v2; // x2
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  AssetData_array *AssetStorage_47505140; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct WarBoardMasterPieceComponent_o *v14; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct AssetData_array *v19; // x8
  UnityEngine_Material_o *v20; // x20
  struct WarBoardMasterPieceComponent_o *v21; // x8

  if ( (byte_596DF2E & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596DF2E = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetStorage_47505140 = AssetManager__getAssetStorage_47505140(loadAssets, 0);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_47505140;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.assetDatas,
    (int32_t)AssetStorage_47505140,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_21;
  assetDatas = v14->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !LODWORD(assetDatas->max_length) )
    goto LABEL_22;
  AssetStorage_47505140 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_47505140 )
    goto LABEL_21;
  masterIcon = v14->fields.masterIcon;
  AssetStorage_47505140 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_47505140,
                                               (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_47505140 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, const MethodInfo *))masterIcon->klass->vtable._27_set_mainTexture.methodPtr)(
                                                     masterIcon,
                                                     AssetStorage_47505140,
                                                     masterIcon->klass->vtable._27_set_mainTexture.method),
        (v17 = this->fields.__4__this) == 0)
    || (AssetStorage_47505140 = (AssetData_array *)v17->fields.masterIcon) == 0
    || (AssetStorage_47505140 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, const MethodInfo *))AssetStorage_47505140->obj.klass->vtable[24].methodPtr)(
                                                     AssetStorage_47505140,
                                                     AssetStorage_47505140->obj.klass->vtable[24].method),
        (v18 = this->fields.__4__this) == 0)
    || (v19 = v18->fields.assetDatas) == 0 )
  {
LABEL_21:
    sub_2213CDC(AssetStorage_47505140, v7);
  }
  if ( (v19->max_length & 0xFFFFFFFE) == 0 )
LABEL_22:
    sub_2213CE4(AssetStorage_47505140);
  v20 = (UnityEngine_Material_o *)AssetStorage_47505140;
  AssetStorage_47505140 = (AssetData_array *)v19->m_Items[1];
  if ( !AssetStorage_47505140 )
    goto LABEL_21;
  AssetStorage_47505140 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_47505140,
                                               (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
  if ( !v20 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v20,
    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_47505140,
    0);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_21;
  AssetStorage_47505140 = (AssetData_array *)v21->fields.masterIcon;
  if ( !AssetStorage_47505140 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_47505140, 0);
}