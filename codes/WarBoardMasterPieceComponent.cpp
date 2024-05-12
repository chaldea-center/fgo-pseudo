void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarBoardMasterPieceComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438AE8D & 1) == 0 )
  {
    sub_B775C4(&WarBoardMasterPieceComponent_TypeInfo);
    sub_B775C4(&StringLiteral_18734/*"enemyMstFace{0:d5}"*/);
    sub_B775C4(&StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_438AE8D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18734/*"enemyMstFace{0:d5}"*/;
  v9->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18734/*"enemyMstFace{0:d5}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->ENEMY_MASTER_FACE_TEXTURE_NAME, v10, v11, v12, v13, v14, v15, v16);
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
    sub_B7769C(masterIcon, method);
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
    sub_B7769C(masterIcon, method);
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
  System_String_o *masterIcon; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *frameSprite; // x21
  Il2CppObject *v9; // x0
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x1
  struct UITexture_o *v12; // x20
  UnityEngine_Shader_o *v13; // x22
  UnityEngine_Material_o *v14; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438AE86 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_4671/*"Custom/SpriteWithMask"*/);
    sub_B775C4(&StringLiteral_6944/*"Frame{0}"*/);
    byte_438AE86 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_13;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v7);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6944/*"Frame{0}"*/, v9, 0LL);
  if ( !frameSprite )
    goto LABEL_13;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_13;
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_CompareTo.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
  {
    v12 = this->fields.masterIcon;
    v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4671/*"Custom/SpriteWithMask"*/, 0LL);
    v14 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v14, v13, 0LL);
    if ( v12 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v12->klass->vtable._25_set_material.method)(
        v12,
        v14,
        v12->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_12;
    }
LABEL_13:
    sub_B7769C(masterIcon, v6);
  }
LABEL_12:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v11);
}


void __fastcall WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x22
  char *transform; // x0
  __int64 v11; // x1
  const MethodInfo_247A004 *v12; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v14; // x23
  WebViewManager_o *v15; // x24
  const MethodInfo_247A004 *v16; // x2
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x21
  BattleServantConfConponent_o *v25; // x22
  System_Delegate_o *v26; // x23
  WarBoardTaskBase_TaskCallback_o *v27; // x24
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  WebViewManager_o *v35; // x19
  char *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x0
  System_Nullable_Vector3__o v45; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v46; // 0:x3.8
  System_Nullable_float__o v47; // 0:x3.8
  System_Nullable_Vector3__o v48; // 0:x0.16
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438AE87 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_B775C4(&WarBoardTaskBase___TypeInfo);
    sub_B775C4(&StringLiteral_9129/*"MasterBreak"*/);
    byte_438AE87 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v48.fields.value.fields.x = &v45;
        *(_QWORD *)&v45.fields.value.fields.x = 0LL;
        *(_QWORD *)&v45.fields.value.fields.z = 0LL;
        *(_QWORD *)&v48.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v48, localPosition, v12);
        if ( Instance )
        {
          v46 = cameraSize;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           (WarBoardManager_o *)Instance,
                                                                                           v45,
                                                                                           v46,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
            CameraPerformanceTask,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B7769C(transform, v11);
    }
    v14 = (WarBoardTaskBase_array *)sub_B775DC(WarBoardTaskBase___TypeInfo, 1LL);
    v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_28;
    v51 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v49.fields.value.fields.x = &v45;
    v45 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v49.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v49, v51, v16);
    if ( !v15 )
      goto LABEL_28;
    v47 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v15, v45, v47, 1, 0, 1, 0LL);
    if ( !v14 )
      goto LABEL_28;
    v23 = (System_Int32_array **)transform;
    if ( transform )
    {
      transform = (char *)sub_B77684(transform, v14->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_31;
    }
    if ( !v14->max_length )
      goto LABEL_30;
    v14->m_Items[0] = (WarBoardTaskBase_o *)v23;
    sub_B77560((BattleServantConfConponent_o *)v14->m_Items, v23, v17, v18, v19, v20, v21, v22);
    if ( !Instance )
      goto LABEL_28;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v14, 0LL);
  }
LABEL_16:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_9129/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_28;
  v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v25 = (BattleServantConfConponent_o *)(transform + 40);
  v26 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v28 = (System_Int32_array **)System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  if ( v28 && *v28 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    transform = (char *)sub_B77990(v28);
LABEL_30:
    v43 = sub_B776C8(transform);
    sub_B77668(v43, 0LL);
  }
  v25->klass = (BattleServantConfConponent_c *)v28;
  sub_B77560(v25, v28, v29, v30, v31, v32, v33, v34);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      v24,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_26;
  }
  v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_B775DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_28;
  v36 = transform;
  transform = (char *)sub_B77684(v24, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_31:
    v44 = sub_B776BC(transform);
    sub_B77668(v44, 0LL);
  }
  if ( !*((_DWORD *)v36 + 6) )
    goto LABEL_30;
  *((_QWORD *)v36 + 4) = v24;
  sub_B77560((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)v24, v37, v38, v39, v40, v41, v42);
  if ( !v35 )
    goto LABEL_28;
  WarBoardManager__InsertTask((WarBoardManager_o *)v35, 0, (WarBoardTaskBase_array *)v36, 0LL);
LABEL_26:
  transform = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_28;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  BattleServantConfConponent_o *p_assetDatas; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438AE8C & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438AE8C = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (BattleServantConfConponent_o *)&this->fields.assetDatas;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAsset_24402684(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_B77560(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  WarBoardManager_o *Instance; // x0
  __int64 v7; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  WebViewManager_o *v12; // x22
  const MethodInfo_247A004 *v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22
  struct WarBoardPieceData_o *v15; // x8
  __int64 v16; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v18; // x20
  const MethodInfo *v19; // x2
  __int64 v20; // x0
  System_Nullable_Vector3__o v21; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v22; // 0:x3.8
  System_Nullable_Vector3__o v23; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438AE88 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardParallelSchedule_TypeInfo);
    byte_438AE88 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  if ( !Instance )
    goto LABEL_20;
  SquarePosition = WarBoardManager__GetSquarePosition(Instance, pieceData->fields._nowSquareIndex_k__BackingField, 0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  Instance = (WarBoardManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_20;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v25, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v23.fields.value.fields.x = &v21;
  *(_QWORD *)&v21.fields.value.fields.x = 0LL;
  *(_QWORD *)&v21.fields.value.fields.z = 0LL;
  *(_QWORD *)&v23.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v23, localPosition, v13);
  if ( !v12 )
    goto LABEL_20;
  v22 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v12,
                                    v21,
                                    v22,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v5 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v15 = this->fields.pieceData;
  if ( !v15 )
    goto LABEL_20;
  v16 = 0LL;
  while ( (int)v16 < v15->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v16 >= breakPoints->max_length )
      {
        v20 = sub_B776C8(Instance);
        sub_B77668(v20, 0LL);
      }
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v16];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v14,
            0LL);
          v15 = this->fields.pieceData;
        }
        ++v16;
        if ( v15 )
          continue;
      }
    }
    goto LABEL_20;
  }
  v18 = (WarBoardParallelSchedule_o *)sub_B77694(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_24866044(v18, (System_Collections_Generic_List_WarBoardTaskBase__o *)v14, v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( taskList )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v5,
      (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__InsertTask_18992016(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0LL);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B7769C(Instance, v7);
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
    sub_B7769C(0LL, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetEnemyMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  __int64 v4; // x2
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v7; // x0
  System_String_o *v8; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438AE8B & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_B775C4(&WarBoardMasterPieceComponent_TypeInfo);
    byte_438AE8B = 1;
  }
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(commandSpellIconRoot, 0, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  commandSpellIconRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)commandSpellIconRoot,
                                                       0LL);
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UnityEngine_Transform__set_localEulerAngles(
    (UnityEngine_Transform_o *)commandSpellIconRoot,
    this->fields.enemyMasterIconAngle,
    0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UIWidget__set_width((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UIWidget__set_height((UIWidget_o *)commandSpellIconRoot, this->fields.enemyMasterIconSize, 0LL);
  commandSpellIconRoot = (UnityEngine_GameObject_o *)WarBoardMasterPieceComponent_TypeInfo;
  if ( (BYTE3(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_16:
    sub_B7769C(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v4);
  v8 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v7, 0LL);
  v9 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v9,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, v9, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_B7769C(this, method);
  if ( pieceData->fields._forceId_k__BackingField
    || pieceData->fields._groupId_k__BackingField
    || pieceData->fields._type_k__BackingField != 1 )
  {
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, method);
  }
  else
  {
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, method);
  }
}


void __fastcall WarBoardMasterPieceComponent__SetPlayerMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  void *commandSpellIconRoot; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_Int32_array **AssetName; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array *v21; // x20
  System_Action_o *v22; // x21

  if ( (byte_438AE8A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_B775C4(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_438AE8A = 1;
  }
  v3 = sub_B77694(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
    (WarBoardMasterPieceComponent___c__DisplayClass16_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v3 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)commandSpellIconRoot, 1, 0LL);
  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  commandSpellIconRoot = UserGameMaster__getSelfUserGame(0LL);
  if ( !commandSpellIconComponent )
    goto LABEL_16;
  CommandSpellIconComponent__SetData(commandSpellIconComponent, (UserGameEntity_o *)commandSpellIconRoot, 0LL);
  commandSpellIconRoot = this->fields.masterIcon;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
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
LABEL_16:
    sub_B7769C(commandSpellIconRoot, v5);
  }
  AssetName = (System_Int32_array **)MasterFaceManager__GetAssetName(
                                       1,
                                       *((_DWORD *)commandSpellIconRoot + 19),
                                       pieceData->fields._iconId_k__BackingField,
                                       0LL);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), AssetName, v15, v16, v17, v18, v19, v20);
  v21 = *(System_String_array **)(v3 + 24);
  v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_24408996(v21, v22, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_438AE89 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AE89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
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
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438AE8E & 1) == 0 )
  {
    sub_B775C4(&AssetData___TypeInfo);
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&WarBoardMasterPieceComponent_TypeInfo);
    byte_438AE8E = 1;
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B775DC(AssetData___TypeInfo, 1LL);
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  v13 = Object_WarBoardWaitTimeSetting;
  if ( asset )
  {
    Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B77684(
                                                          asset,
                                                          Object_WarBoardWaitTimeSetting->klass->_1.element_class);
    if ( !Object_WarBoardWaitTimeSetting )
    {
      v26 = sub_B776BC(0LL);
      sub_B77668(v26, 0LL);
    }
  }
  if ( !LODWORD(v13[1].klass) )
  {
    v25 = sub_B776C8(Object_WarBoardWaitTimeSetting);
    sub_B77668(v25, 0LL);
  }
  v13[1].monitor = asset;
  sub_B77560((BattleServantConfConponent_o *)&v13[1].monitor, (System_Int32_array **)asset, v7, v8, v9, v10, v11, v12);
  this->fields.assetDatas = (struct AssetData_array *)v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.assetDatas,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  masterIcon = this->fields.masterIcon;
  Object_WarBoardWaitTimeSetting = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  if ( (BYTE3(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v20),
        Object_WarBoardWaitTimeSetting = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v24, 0LL),
        !asset)
    || (Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              asset,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_WarBoardWaitTimeSetting,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_WarBoardWaitTimeSetting = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_15:
    sub_B7769C(Object_WarBoardWaitTimeSetting, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_WarBoardWaitTimeSetting, 0LL);
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
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  System_Int32_array **AssetStorage_24410204; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct WarBoardMasterPieceComponent_o *v13; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v16; // x8
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct AssetData_array *v18; // x8
  UnityEngine_Material_o *v19; // x20
  struct WarBoardMasterPieceComponent_o *v20; // x8
  __int64 v21; // x0

  if ( (byte_4389255 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D___);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&StringLiteral_16313/*"_MaskTex"*/);
    byte_4389255 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_24410204 = (System_Int32_array **)AssetManager__getAssetStorage_24410204(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.assetDatas = (struct AssetData_array *)AssetStorage_24410204;
  sub_B77560(
    (BattleServantConfConponent_o *)&_4__this->fields.assetDatas,
    AssetStorage_24410204,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_22;
  assetDatas = v13->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_22;
  if ( !assetDatas->max_length )
    goto LABEL_23;
  AssetStorage_24410204 = (System_Int32_array **)assetDatas->m_Items[0];
  if ( !AssetStorage_24410204 )
    goto LABEL_22;
  masterIcon = v13->fields.masterIcon;
  AssetStorage_24410204 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_24410204,
                                                   (const MethodInfo_1C5FCD8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_24410204 = (System_Int32_array **)((__int64 (__fastcall *)(struct UITexture_o *, System_Int32_array **, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                         masterIcon,
                                                         AssetStorage_24410204,
                                                         masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v16 = this->fields.__4__this) == 0LL)
    || (AssetStorage_24410204 = (System_Int32_array **)v16->fields.masterIcon) == 0LL
    || (AssetStorage_24410204 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*AssetStorage_24410204)->m_Items[167])(
                                                         AssetStorage_24410204,
                                                         *(_QWORD *)&(*AssetStorage_24410204)->m_Items[169]),
        (v17 = this->fields.__4__this) == 0LL)
    || (v18 = v17->fields.assetDatas) == 0LL )
  {
LABEL_22:
    sub_B7769C(AssetStorage_24410204, v6);
  }
  if ( v18->max_length <= 1 )
  {
LABEL_23:
    v21 = sub_B776C8(AssetStorage_24410204);
    sub_B77668(v21, 0LL);
  }
  v19 = (UnityEngine_Material_o *)AssetStorage_24410204;
  AssetStorage_24410204 = (System_Int32_array **)v18->m_Items[1];
  if ( !AssetStorage_24410204 )
    goto LABEL_22;
  AssetStorage_24410204 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_24410204,
                                                   (const MethodInfo_1C5FCD8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v19 )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    v19,
    (System_String_o *)StringLiteral_16313/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_24410204,
    0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_22;
  AssetStorage_24410204 = (System_Int32_array **)v20->fields.masterIcon;
  if ( !AssetStorage_24410204 )
    goto LABEL_22;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_24410204, 0LL);
}