void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct WarBoardMasterPieceComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F8565 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18298/*"enemyMstFace{0:d5}"*/, v8);
    sub_B16FFC(&StringLiteral_5978/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v9);
    byte_40F8565 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5978/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5978/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18298/*"enemyMstFace{0:d5}"*/;
  v12->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18298/*"enemyMstFace{0:d5}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->ENEMY_MASTER_FACE_TEXTURE_NAME, v13, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (transform = UnityEngine_Component__get_transform(masterIcon, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WarBoardMasterPieceComponent__GetIconPosition(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *masterIcon; // x0
  UnityEngine_Transform_o *transform; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon || (transform = UnityEngine_Component__get_transform(masterIcon, 0LL)) == 0LL )
    sub_B170D4();
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_position(transform, 0LL);
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct UITexture_o *masterIcon; // x0
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x1
  struct UITexture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_Material_o *v21; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F855E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, pieceData);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v7);
    sub_B16FFC(&StringLiteral_6765/*"Frame{0}"*/, v8);
    byte_40F855E = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_13;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  v11 = System_String__Format((System_String_o *)StringLiteral_6765/*"Frame{0}"*/, v10, 0LL);
  if ( !frameSprite )
    goto LABEL_13;
  UISprite__set_spriteName(frameSprite, v11, 0LL);
  masterIcon = this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_13;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_get_material.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_set_material.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
  {
    v15 = this->fields.masterIcon;
    v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
    v21 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v17, v18, v19, v20);
    UnityEngine_Material___ctor(v21, v16, 0LL);
    if ( v15 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v15->klass->vtable._25_set_material.method)(
        v15,
        v21,
        v15->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v14);
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
  __int64 v15; // x2
  WebViewManager_o *Instance; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v20; // x23
  WebViewManager_o *v21; // x24
  UnityEngine_Transform_o *v22; // x0
  const MethodInfo_29CF778 *v23; // x2
  WarBoardMapCameraPerformance_o *v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x21
  WarBoardSimpleAnimationPerformance_o *SimpleAnimationPerformance; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x21
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // x23
  WarBoardTaskBase_TaskCallback_o *v41; // x24
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  WebViewManager_o *v49; // x19
  __int64 v50; // x2
  __int64 v51; // x0
  __int64 v52; // x20
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  WebViewManager_o *v58; // x0
  System_Nullable_Vector3__o v59; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v60; // 0:x3.8
  System_Nullable_float__o v61; // 0:x3.8
  System_Nullable_Vector3__o v62; // 0:x0.16
  System_Nullable_Vector3__o v63; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F855F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v13);
    sub_B16FFC(&StringLiteral_8933/*"MasterBreak"*/, v14);
    byte_40F855F = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        *(_QWORD *)&v62.fields.value.fields.x = &v59;
        *(_QWORD *)&v59.fields.value.fields.x = 0LL;
        *(_QWORD *)&v59.fields.value.fields.z = 0LL;
        *(_QWORD *)&v62.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v62, localPosition, v18);
        if ( Instance )
        {
          v60 = cameraSize;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           (WarBoardManager_o *)Instance,
                                                                                           v59,
                                                                                           v60,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
            CameraPerformanceTask,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B170D4();
    }
    v20 = (WarBoardTaskBase_array *)sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v15);
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v22 )
      goto LABEL_28;
    v65 = UnityEngine_Transform__get_localPosition(v22, 0LL);
    *(_QWORD *)&v63.fields.value.fields.x = &v59;
    v59 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v63.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v63, v65, v23);
    if ( !v21 )
      goto LABEL_28;
    v61 = cameraSize;
    v24 = WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v21, v59, v61, 1, 0, 1, 0LL);
    if ( !v20 )
      goto LABEL_28;
    v32 = (System_Int32_array **)v24;
    if ( v24 )
    {
      v24 = (WarBoardMapCameraPerformance_o *)sub_B170BC(v24, v20->obj.klass->_1.element_class);
      if ( !v24 )
        goto LABEL_31;
    }
    if ( !v20->max_length )
      goto LABEL_30;
    v20->m_Items[0] = (WarBoardTaskBase_o *)v32;
    sub_B16F98((BattleServantConfConponent_o *)v20->m_Items, v32, v26, v27, v28, v29, v30, v31);
    if ( !Instance )
      goto LABEL_28;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v20, 0LL);
  }
LABEL_16:
  SimpleAnimationPerformance = WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                                 (WarBoardPieceBaseComponent_o *)this,
                                 (System_String_o *)StringLiteral_8933/*"MasterBreak"*/,
                                 (const MethodInfo *)taskList);
  if ( !SimpleAnimationPerformance )
    goto LABEL_28;
  v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)SimpleAnimationPerformance;
  p_EndCallback = (BattleServantConfConponent_o *)&SimpleAnimationPerformance->fields.EndCallback;
  EndCallback = (System_Delegate_o *)SimpleAnimationPerformance->fields.EndCallback;
  v41 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v34, v35, v36, v37);
  WarBoardTaskBase_TaskCallback___ctor(
    v41,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v42 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v41, 0LL);
  if ( v42 && *v42 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v24 = (WarBoardMapCameraPerformance_o *)sub_B173C8(v42);
LABEL_30:
    sub_B17100(v24, v25, v26);
    sub_B170A0();
  }
  p_EndCallback->klass = (BattleServantConfConponent_c *)v42;
  sub_B16F98(p_EndCallback, v42, v43, v44, v45, v46, v47, v48);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      v38,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_26;
  }
  v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v51 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v50);
  if ( !v51 )
    goto LABEL_28;
  v52 = v51;
  v24 = (WarBoardMapCameraPerformance_o *)sub_B170BC(v38, *(_QWORD *)(*(_QWORD *)v51 + 64LL));
  if ( !v24 )
  {
LABEL_31:
    sub_B170F4(v24);
    sub_B170A0();
  }
  if ( !*(_DWORD *)(v52 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v52 + 32) = v38;
  sub_B16F98((BattleServantConfConponent_o *)(v52 + 32), (System_Int32_array **)v38, v26, v53, v54, v55, v56, v57);
  if ( !v49 )
    goto LABEL_28;
  WarBoardManager__InsertTask((WarBoardManager_o *)v49, 0, (WarBoardTaskBase_array *)v52, 0LL);
LABEL_26:
  v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v58 )
    goto LABEL_28;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)v58, 0LL);
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

  if ( (byte_40F8564 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F8564 = 1;
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
    AssetManager__releaseAsset_29947584(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_B16F98(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  WebViewManager_o *Instance; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v21; // x0
  WebViewManager_o *v22; // x22
  UnityEngine_Transform_o *v23; // x0
  const MethodInfo_29CF778 *v24; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  WarBoardBreakPointComponent_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct WarBoardPieceData_o *v36; // x8
  __int64 v37; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v39; // x20
  const MethodInfo *v40; // x2
  WebViewManager_o *v41; // x0
  WebViewManager_o *v42; // x0
  System_Nullable_Vector3__o v43; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v44; // 0:x3.8
  System_Nullable_Vector3__o v45; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8560 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v9);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&WarBoardParallelSchedule_TypeInfo, v12);
    byte_40F8560 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  taskList,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
    goto LABEL_20;
  if ( !Instance )
    goto LABEL_20;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)Instance,
                     pieceData->fields._nowSquareIndex_k__BackingField,
                     0LL);
  x = SquarePosition.fields.x;
  y = SquarePosition.fields.y;
  z = SquarePosition.fields.z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !transform )
    goto LABEL_20;
  v47.fields.x = x;
  v47.fields.y = y;
  v47.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v47, 0LL);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(v23, 0LL);
  *(_QWORD *)&v45.fields.value.fields.x = &v43;
  *(_QWORD *)&v43.fields.value.fields.x = 0LL;
  *(_QWORD *)&v43.fields.value.fields.z = 0LL;
  *(_QWORD *)&v45.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v45, localPosition, v24);
  if ( !v22 )
    goto LABEL_20;
  v44 = 0LL;
  CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                   (WarBoardManager_o *)v22,
                                                                                   v43,
                                                                                   v44,
                                                                                   1,
                                                                                   0,
                                                                                   1,
                                                                                   0LL);
  if ( !v13 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    CameraPerformanceTask,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v36 = this->fields.pieceData;
  if ( !v36 )
    goto LABEL_20;
  v37 = 0LL;
  while ( (int)v37 < v36->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v37 >= breakPoints->max_length )
      {
        sub_B17100(v31, v32, v33);
        sub_B170A0();
      }
      v31 = breakPoints->m_Items[v37];
      if ( v31 )
      {
        if ( !v31->fields._isActive_k__BackingField )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            v31,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v30,
            0LL);
          v36 = this->fields.pieceData;
        }
        ++v37;
        if ( v36 )
          continue;
      }
    }
    goto LABEL_20;
  }
  v39 = (WarBoardParallelSchedule_o *)sub_B170CC(WarBoardParallelSchedule_TypeInfo, v32, v33, v34, v35);
  WarBoardParallelSchedule___ctor_22127580(v39, (System_Collections_Generic_List_WarBoardTaskBase__o *)v30, v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v13,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( taskList )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  else
  {
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v41 )
      goto LABEL_20;
    WarBoardManager__InsertTask_18091616(
      (WarBoardManager_o *)v41,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
      0LL);
  }
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v42 )
LABEL_20:
    sub_B170D4();
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)v42, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetCommandSpellRemain(
        WarBoardMasterPieceComponent_o *this,
        int32_t remain,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *commandSpellIconComponent; // x0

  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  if ( !commandSpellIconComponent )
    sub_B170D4();
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
  UnityEngine_Component_o *masterIcon; // x0
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v10; // x0
  UIWidget_o *v11; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8563 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B16FFC(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_B16FFC(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_40F8563 = 1;
  }
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(commandSpellIconRoot, 0, 0LL);
  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_16;
  transform = UnityEngine_Component__get_transform(masterIcon, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localEulerAngles(transform, this->fields.enemyMasterIconAngle, 0LL);
  v10 = (UIWidget_o *)this->fields.masterIcon;
  if ( !v10 )
    goto LABEL_16;
  UIWidget__set_width(v10, this->fields.enemyMasterIconSize, 0LL);
  v11 = (UIWidget_o *)this->fields.masterIcon;
  if ( !v11 )
    goto LABEL_16;
  UIWidget__set_height(v11, this->fields.enemyMasterIconSize, 0LL);
  if ( (BYTE3(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_16:
    sub_B170D4();
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v15 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v14, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v16, v17, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v15, v20, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  UserGameEntity_o *SelfUserGame; // x0
  UnityEngine_Component_o *masterIcon; // x0
  UnityEngine_Transform_o *transform; // x0
  UIWidget_o *v21; // x0
  UIWidget_o *v22; // x0
  UserGameEntity_o *v23; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  System_Int32_array **AssetName; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x21

  if ( (byte_40F8562 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v7);
    sub_B16FFC(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v8);
    byte_40F8562 = 1;
  }
  v9 = sub_B170CC(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, method, v2, v3, v4);
  WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
    (WarBoardMasterPieceComponent___c__DisplayClass16_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  commandSpellIconRoot = this->fields.commandSpellIconRoot;
  if ( !commandSpellIconRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(commandSpellIconRoot, 1, 0LL);
  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !commandSpellIconComponent )
    goto LABEL_16;
  CommandSpellIconComponent__SetData(commandSpellIconComponent, SelfUserGame, 0LL);
  masterIcon = (UnityEngine_Component_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_16;
  transform = UnityEngine_Component__get_transform(masterIcon, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localEulerAngles(transform, this->fields.playerMasterIconAngle, 0LL),
        (v21 = (UIWidget_o *)this->fields.masterIcon) == 0LL)
    || (UIWidget__set_width(v21, this->fields.playerMasterIconSize, 0LL),
        (v22 = (UIWidget_o *)this->fields.masterIcon) == 0LL)
    || (UIWidget__set_height(v22, this->fields.playerMasterIconSize, 0LL),
        (v23 = UserGameMaster__getSelfUserGame(0LL)) == 0LL)
    || (pieceData = this->fields.pieceData) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  AssetName = (System_Int32_array **)MasterFaceManager__GetAssetName(
                                       1,
                                       v23->fields.genderType,
                                       pieceData->fields._iconId_k__BackingField,
                                       0LL);
  *(_QWORD *)(v9 + 24) = AssetName;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), AssetName, v26, v27, v28, v29, v30, v31);
  v32 = *(System_String_array **)(v9 + 24);
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v9,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(v32, v37, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_40F8561 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8561 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  WarBoardManager__HideSimplePopup((WarBoardManager_o *)Instance, 0LL, 0LL);
  return 0;
}


void __fastcall WarBoardMasterPieceComponent___OnDead_b__11_0(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UIWidget_o *v29; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8566 & 1) == 0 )
  {
    sub_B16FFC(&AssetData___TypeInfo, asset);
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_40F8566 = 1;
  }
  v8 = sub_B17014(AssetData___TypeInfo, 1LL, method);
  if ( !v8 )
    goto LABEL_15;
  v16 = v8;
  if ( asset )
  {
    v8 = sub_B170BC(asset, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v16 + 24) )
  {
    sub_B17100(v8, v9, v10);
    sub_B170A0();
  }
  *(_QWORD *)(v16 + 32) = asset;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)asset, v10, v11, v12, v13, v14, v15);
  this->fields.assetDatas = (struct AssetData_array *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetDatas,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  masterIcon = this->fields.masterIcon;
  if ( (BYTE3(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  }
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        v27 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v26, 0LL),
        !asset)
    || (Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           asset,
                                           v27,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, WarBoardWaitTimeSetting_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_WarBoardWaitTimeSetting,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v29 = (UIWidget_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  UIWidget__SetDirty(v29, 0LL);
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
  System_Int32_array **AssetStorage_29955104; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct AssetData_array *assetDatas; // x9
  AssetData_o *v19; // x0
  struct UITexture_o *masterIcon; // x20
  UnityEngine_Texture2D_o *Object_Texture2D; // x0
  struct WarBoardMasterPieceComponent_o *v22; // x8
  struct UITexture_o *v23; // x0
  struct WarBoardMasterPieceComponent_o *v24; // x8
  struct AssetData_array *v25; // x8
  UnityEngine_Material_o *v26; // x20
  AssetData_o *v27; // x0
  UnityEngine_Texture_o *v28; // x0
  struct WarBoardMasterPieceComponent_o *v29; // x8
  UIWidget_o *v30; // x0

  if ( (byte_40F7846 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D___, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v4);
    byte_40F7846 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_29955104 = (System_Int32_array **)AssetManager__getAssetStorage_29955104(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.assetDatas = (struct AssetData_array *)AssetStorage_29955104;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.assetDatas,
    AssetStorage_29955104,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_22;
  assetDatas = v17->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_22;
  if ( !assetDatas->max_length )
    goto LABEL_23;
  v19 = assetDatas->m_Items[0];
  if ( !v19 )
    goto LABEL_22;
  masterIcon = v17->fields.masterIcon;
  Object_Texture2D = AssetData__GetObject_Texture2D_(
                       v19,
                       (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_Texture2D,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v22 = this->fields.__4__this) == 0LL)
    || (v23 = v22->fields.masterIcon) == 0LL
    || (v14 = ((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v23->klass->vtable._24_get_material.method)(
                v23,
                v23->klass->vtable._25_set_material.methodPtr),
        (v24 = this->fields.__4__this) == 0LL)
    || (v25 = v24->fields.assetDatas) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( v25->max_length <= 1 )
  {
LABEL_23:
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v26 = (UnityEngine_Material_o *)v14;
  v27 = v25->m_Items[1];
  if ( !v27 )
    goto LABEL_22;
  v28 = (UnityEngine_Texture_o *)AssetData__GetObject_Texture2D_(
                                   v27,
                                   (const MethodInfo_18AFB5C *)Method_AssetData_GetObject_Texture2D___);
  if ( !v26 )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(v26, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, v28, 0LL);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_22;
  v30 = (UIWidget_o *)v29->fields.masterIcon;
  if ( !v30 )
    goto LABEL_22;
  UIWidget__SetDirty(v30, 0LL);
}