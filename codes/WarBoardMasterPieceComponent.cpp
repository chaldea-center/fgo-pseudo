void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct WarBoardMasterPieceComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E75A2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMasterPieceComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18596/*"enemyMstFace{0:d5}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v11, v12, v13);
    byte_42E75A2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18596/*"enemyMstFace{0:d5}"*/;
  v16->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18596/*"enemyMstFace{0:d5}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->ENEMY_MASTER_FACE_TEXTURE_NAME, v17, v18, v19, v20, v21, v22, v23);
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
    sub_B5D69C(masterIcon, method);
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
    sub_B5D69C(masterIcon, method);
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
  System_String_o *masterIcon; // x0
  __int64 v19; // x1
  UISprite_o *frameSprite; // x21
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *v22; // x20
  const MethodInfo *v23; // x1
  struct UITexture_o *v24; // x20
  UnityEngine_Shader_o *v25; // x22
  UnityEngine_Material_o *v26; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E759B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)pieceData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6875/*"Frame{0}"*/, v15, v16, v17);
    byte_42E759B = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_13;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6875/*"Frame{0}"*/, v21, 0LL);
  if ( !frameSprite )
    goto LABEL_13;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_13;
  v22 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_CompareTo.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
  {
    v24 = this->fields.masterIcon;
    v25 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
    v26 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v26, v25, 0LL);
    if ( v24 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v24->klass->vtable._25_set_material.method)(
        v24,
        v26,
        v24->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(masterIcon, v19);
  }
LABEL_12:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
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
  WebViewManager_o *Instance; // x22
  char *transform; // x0
  __int64 v29; // x1
  const MethodInfo_234ED3C *v30; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v32; // x23
  WebViewManager_o *v33; // x24
  const MethodInfo_234ED3C *v34; // x2
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x21
  BattleServantConfConponent_o *v43; // x22
  System_Delegate_o *v44; // x23
  WarBoardTaskBase_TaskCallback_o *v45; // x24
  System_Int32_array **v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WebViewManager_o *v53; // x19
  char *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x0
  System_Nullable_Vector3__o v63; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v64; // 0:x3.8
  System_Nullable_float__o v65; // 0:x3.8
  System_Nullable_Vector3__o v66; // 0:x0.16
  System_Nullable_Vector3__o v67; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E759C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__Add__,
      LODWORD(cameraSize.fields.value),
      (_DWORD)taskList,
      cameraMove);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v18, v19, v20);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9056/*"MasterBreak"*/, v24, v25, v26);
    byte_42E759C = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v66.fields.value.fields.x = &v63;
        *(_QWORD *)&v63.fields.value.fields.x = 0LL;
        *(_QWORD *)&v63.fields.value.fields.z = 0LL;
        *(_QWORD *)&v66.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v66, localPosition, v30);
        if ( Instance )
        {
          v64 = cameraSize;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           (WarBoardManager_o *)Instance,
                                                                                           v63,
                                                                                           v64,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
            CameraPerformanceTask,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B5D69C(transform, v29);
    }
    v32 = (WarBoardTaskBase_array *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
    v33 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_28;
    v69 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v67.fields.value.fields.x = &v63;
    v63 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v67.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v67, v69, v34);
    if ( !v33 )
      goto LABEL_28;
    v65 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v33, v63, v65, 1, 0, 1, 0LL);
    if ( !v32 )
      goto LABEL_28;
    v41 = (System_Int32_array **)transform;
    if ( transform )
    {
      transform = (char *)sub_B5D684(transform, v32->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_31;
    }
    if ( !v32->max_length )
      goto LABEL_30;
    v32->m_Items[0] = (WarBoardTaskBase_o *)v41;
    sub_B5D560((BattleServantConfConponent_o *)v32->m_Items, v41, v35, v36, v37, v38, v39, v40);
    if ( !Instance )
      goto LABEL_28;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v32, 0LL);
  }
LABEL_16:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_9056/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_28;
  v42 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v43 = (BattleServantConfConponent_o *)(transform + 40);
  v44 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v46 = (System_Int32_array **)System_Delegate__Combine(v44, (System_Delegate_o *)v45, 0LL);
  if ( v46 && *v46 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    transform = (char *)sub_B5D990(v46);
LABEL_30:
    v61 = sub_B5D6C8(transform);
    sub_B5D668(v61, 0LL);
  }
  v43->klass = (BattleServantConfConponent_c *)v46;
  sub_B5D560(v43, v46, v47, v48, v49, v50, v51, v52);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      v42,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_26;
  }
  v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_28;
  v54 = transform;
  transform = (char *)sub_B5D684(v42, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_31:
    v62 = sub_B5D6BC();
    sub_B5D668(v62, 0LL);
  }
  if ( !*((_DWORD *)v54 + 6) )
    goto LABEL_30;
  *((_QWORD *)v54 + 4) = v42;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), (System_Int32_array **)v42, v55, v56, v57, v58, v59, v60);
  if ( !v53 )
    goto LABEL_28;
  WarBoardManager__InsertTask((WarBoardManager_o *)v53, 0, (WarBoardTaskBase_array *)v54, 0LL);
LABEL_26:
  transform = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_28;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetData_array *assetDatas; // x19
  BattleServantConfConponent_o *p_assetDatas; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E75A1 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75A1 = 1;
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
    AssetManager__releaseAsset_30657772(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_B5D560(p_assetDatas, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  WarBoardManager_o *Instance; // x0
  __int64 v26; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  WebViewManager_o *v31; // x22
  const MethodInfo_234ED3C *v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  struct WarBoardPieceData_o *v34; // x8
  __int64 v35; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v37; // x20
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  System_Nullable_Vector3__o v40; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v41; // 0:x3.8
  System_Nullable_Vector3__o v42; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E759D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__,
      (_DWORD)taskList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&WarBoardParallelSchedule_TypeInfo, v21, v22, v23);
    byte_42E759D = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v44.fields.x = x;
  v44.fields.y = y;
  v44.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v44, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v42.fields.value.fields.x = &v40;
  *(_QWORD *)&v40.fields.value.fields.x = 0LL;
  *(_QWORD *)&v40.fields.value.fields.z = 0LL;
  *(_QWORD *)&v42.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v42, localPosition, v32);
  if ( !v31 )
    goto LABEL_20;
  v41 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v31,
                                    v40,
                                    v41,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v24 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v34 = this->fields.pieceData;
  if ( !v34 )
    goto LABEL_20;
  v35 = 0LL;
  while ( (int)v35 < v34->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v35 >= breakPoints->max_length )
      {
        v39 = sub_B5D6C8(Instance);
        sub_B5D668(v39, 0LL);
      }
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v35];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v33,
            0LL);
          v34 = this->fields.pieceData;
        }
        ++v35;
        if ( v34 )
          continue;
      }
    }
    goto LABEL_20;
  }
  v37 = (WarBoardParallelSchedule_o *)sub_B5D694(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_22972048(v37, (System_Collections_Generic_List_WarBoardTaskBase__o *)v33, v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( taskList )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v24,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__InsertTask_18800572(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v24, 0LL);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B5D69C(Instance, v26);
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
    sub_B5D69C(0LL, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetEnemyMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
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
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  AssetLoader_LoadEndDataHandler_o *v22; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E75A0 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v11, v12, v13);
    sub_B5D5C4(&WarBoardMasterPieceComponent_TypeInfo, v14, v15, v16);
    byte_42E75A0 = 1;
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
    sub_B5D69C(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v21 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v20, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_B5D69C(this, method);
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
  __int64 v14; // x19
  void *commandSpellIconRoot; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_Int32_array **AssetName; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x20
  System_Action_o *v33; // x21

  if ( (byte_42E759F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v8, v9, v10);
    sub_B5D5C4(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v11, v12, v13);
    byte_42E759F = 1;
  }
  v14 = sub_B5D694(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
    (WarBoardMasterPieceComponent___c__DisplayClass16_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
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
    sub_B5D69C(commandSpellIconRoot, v16);
  }
  AssetName = (System_Int32_array **)MasterFaceManager__GetAssetName(
                                       1,
                                       *((_DWORD *)commandSpellIconRoot + 19),
                                       pieceData->fields._iconId_k__BackingField,
                                       0LL);
  *(_QWORD *)(v14 + 24) = AssetName;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 24), AssetName, v26, v27, v28, v29, v30, v31);
  v32 = *(System_String_array **)(v14 + 24);
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(v32, v33, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E759E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E759E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
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
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E75A3 & 1) == 0 )
  {
    sub_B5D5C4(&AssetData___TypeInfo, (_DWORD)asset, (_DWORD)method, v3);
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&WarBoardMasterPieceComponent_TypeInfo, v12, v13, v14);
    byte_42E75A3 = 1;
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B5D5DC(AssetData___TypeInfo, 1LL);
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  v23 = Object_WarBoardWaitTimeSetting;
  if ( asset )
  {
    Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B5D684(
                                                          asset,
                                                          Object_WarBoardWaitTimeSetting->klass->_1.element_class);
    if ( !Object_WarBoardWaitTimeSetting )
    {
      v35 = sub_B5D6BC();
      sub_B5D668(v35, 0LL);
    }
  }
  if ( !LODWORD(v23[1].klass) )
  {
    v34 = sub_B5D6C8(Object_WarBoardWaitTimeSetting);
    sub_B5D668(v34, 0LL);
  }
  v23[1].monitor = asset;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v23[1].monitor,
    (System_Int32_array **)asset,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.assetDatas = (struct AssetData_array *)v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetDatas,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_WarBoardWaitTimeSetting = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v33, 0LL),
        !asset)
    || (Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              asset,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_WarBoardWaitTimeSetting,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_WarBoardWaitTimeSetting = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(Object_WarBoardWaitTimeSetting, v16);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  AssetData_o *AssetStorage_30665292; // x0
  __int64 v14; // x1
  struct WarBoardMasterPieceComponent_o *v15; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct WarBoardMasterPieceComponent_o *v19; // x8
  struct AssetData_array *v20; // x8
  UnityEngine_Material_o *v21; // x20
  struct WarBoardMasterPieceComponent_o *v22; // x8
  __int64 v23; // x0

  if ( (byte_42E5FA1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v8, v9, v10);
    byte_42E5FA1 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_30665292 = (AssetData_o *)AssetManager__getAssetStorage_30665292(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.assetDatas = (struct AssetData_array *)AssetStorage_30665292;
  sub_B5D560(&_4__this->fields.assetDatas);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_22;
  assetDatas = v15->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_22;
  if ( !assetDatas->max_length )
    goto LABEL_23;
  AssetStorage_30665292 = assetDatas->m_Items[0];
  if ( !AssetStorage_30665292 )
    goto LABEL_22;
  masterIcon = v15->fields.masterIcon;
  AssetStorage_30665292 = (AssetData_o *)AssetData__GetObject_Texture2D_(
                                           AssetStorage_30665292,
                                           (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_30665292 = (AssetData_o *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                 masterIcon,
                                                 AssetStorage_30665292,
                                                 masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v18 = this->fields.__4__this) == 0LL)
    || (AssetStorage_30665292 = (AssetData_o *)v18->fields.masterIcon) == 0LL
    || (AssetStorage_30665292 = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, Il2CppMethodPointer))AssetStorage_30665292->klass[1].vtable._1_Finalize.method)(
                                                 AssetStorage_30665292,
                                                 AssetStorage_30665292->klass[1].vtable._2_GetHashCode.methodPtr),
        (v19 = this->fields.__4__this) == 0LL)
    || (v20 = v19->fields.assetDatas) == 0LL )
  {
LABEL_22:
    sub_B5D69C(AssetStorage_30665292, v14);
  }
  if ( v20->max_length <= 1 )
  {
LABEL_23:
    v23 = sub_B5D6C8(AssetStorage_30665292);
    sub_B5D668(v23, 0LL);
  }
  v21 = (UnityEngine_Material_o *)AssetStorage_30665292;
  AssetStorage_30665292 = v20->m_Items[1];
  if ( !AssetStorage_30665292 )
    goto LABEL_22;
  AssetStorage_30665292 = (AssetData_o *)AssetData__GetObject_Texture2D_(
                                           AssetStorage_30665292,
                                           (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v21 )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    v21,
    (System_String_o *)StringLiteral_16207/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_30665292,
    0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_22;
  AssetStorage_30665292 = (AssetData_o *)v22->fields.masterIcon;
  if ( !AssetStorage_30665292 )
    goto LABEL_22;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_30665292, 0LL);
}