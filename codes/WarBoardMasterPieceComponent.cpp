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

  if ( (byte_42132CE & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18424/*"enemyMstFace{0:d5}"*/, v8);
    sub_B0D8A4(&StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v9);
    byte_42132CE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18424/*"enemyMstFace{0:d5}"*/;
  v12->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18424/*"enemyMstFace{0:d5}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->ENEMY_MASTER_FACE_TEXTURE_NAME, v13, v14, v15, v16, v17, v18, v19);
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
    sub_B0D97C(masterIcon);
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
    sub_B0D97C(masterIcon);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v11; // x0
  UnityEngine_Object_o *v12; // x20
  const MethodInfo *v13; // x1
  struct UITexture_o *v14; // x20
  UnityEngine_Shader_o *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Material_o *v18; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42132C7 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, pieceData);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v7);
    sub_B0D8A4(&StringLiteral_6812/*"Frame{0}"*/, v8);
    byte_42132C7 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_13;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6812/*"Frame{0}"*/, v11, 0LL);
  if ( !frameSprite )
    goto LABEL_13;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_13;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_CompareTo.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
  {
    v14 = this->fields.masterIcon;
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
    v18 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v16, v17);
    UnityEngine_Material___ctor(v18, v15, 0LL);
    if ( v14 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v14->klass->vtable._25_set_material.method)(
        v14,
        v18,
        v14->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_12;
    }
LABEL_13:
    sub_B0D97C(masterIcon);
  }
LABEL_12:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v13);
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
  WebViewManager_o *Instance; // x22
  char *transform; // x0
  const MethodInfo_299B944 *v17; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v19; // x23
  WebViewManager_o *v20; // x24
  const MethodInfo_299B944 *v21; // x2
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x21
  BattleServantConfConponent_o *v32; // x22
  System_Delegate_o *v33; // x23
  WarBoardTaskBase_TaskCallback_o *v34; // x24
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WebViewManager_o *v42; // x19
  char *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x0
  System_Nullable_Vector3__o v52; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v53; // 0:x3.8
  System_Nullable_float__o v54; // 0:x3.8
  System_Nullable_Vector3__o v55; // 0:x0.16
  System_Nullable_Vector3__o v56; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42132C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_8986/*"MasterBreak"*/, v14);
    byte_42132C8 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v55.fields.value.fields.x = &v52;
        *(_QWORD *)&v52.fields.value.fields.x = 0LL;
        *(_QWORD *)&v52.fields.value.fields.z = 0LL;
        *(_QWORD *)&v55.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v55, localPosition, v17);
        if ( Instance )
        {
          v53 = cameraSize;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           (WarBoardManager_o *)Instance,
                                                                                           v52,
                                                                                           v53,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
            CameraPerformanceTask,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B0D97C(transform);
    }
    v19 = (WarBoardTaskBase_array *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_28;
    v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v56.fields.value.fields.x = &v52;
    v52 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v56.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v56, v58, v21);
    if ( !v20 )
      goto LABEL_28;
    v54 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v20, v52, v54, 1, 0, 1, 0LL);
    if ( !v19 )
      goto LABEL_28;
    v28 = (System_Int32_array **)transform;
    if ( transform )
    {
      transform = (char *)sub_B0D964(transform, v19->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_31;
    }
    if ( !v19->max_length )
      goto LABEL_30;
    v19->m_Items[0] = (WarBoardTaskBase_o *)v28;
    sub_B0D840((BattleServantConfConponent_o *)v19->m_Items, v28, v22, v23, v24, v25, v26, v27);
    if ( !Instance )
      goto LABEL_28;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v19, 0LL);
  }
LABEL_16:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_8986/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_28;
  v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v32 = (BattleServantConfConponent_o *)(transform + 40);
  v33 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v29, v30);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v35 = (System_Int32_array **)System_Delegate__Combine(v33, (System_Delegate_o *)v34, 0LL);
  if ( v35 && *v35 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    transform = (char *)sub_B0DC70(v35);
LABEL_30:
    v50 = sub_B0D9A8(transform);
    sub_B0D948(v50, 0LL);
  }
  v32->klass = (BattleServantConfConponent_c *)v35;
  sub_B0D840(v32, v35, v36, v37, v38, v39, v40, v41);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      v31,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_26;
  }
  v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_28;
  v43 = transform;
  transform = (char *)sub_B0D964(v31, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_31:
    v51 = sub_B0D99C();
    sub_B0D948(v51, 0LL);
  }
  if ( !*((_DWORD *)v43 + 6) )
    goto LABEL_30;
  *((_QWORD *)v43 + 4) = v31;
  sub_B0D840((BattleServantConfConponent_o *)(v43 + 32), (System_Int32_array **)v31, v44, v45, v46, v47, v48, v49);
  if ( !v42 )
    goto LABEL_28;
  WarBoardManager__InsertTask((WarBoardManager_o *)v42, 0, (WarBoardTaskBase_array *)v43, 0LL);
LABEL_26:
  transform = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_42132CD & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    byte_42132CD = 1;
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
    AssetManager__releaseAsset_29516608(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_B0D840(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  WarBoardManager_o *Instance; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  WebViewManager_o *v17; // x22
  const MethodInfo_299B944 *v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  struct WarBoardPieceData_o *v24; // x8
  __int64 v25; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v27; // x20
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  System_Nullable_Vector3__o v30; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v31; // 0:x3.8
  System_Nullable_Vector3__o v32; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42132C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&WarBoardParallelSchedule_TypeInfo, v10);
    byte_42132C9 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  taskList,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v34, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v32.fields.value.fields.x = &v30;
  *(_QWORD *)&v30.fields.value.fields.x = 0LL;
  *(_QWORD *)&v30.fields.value.fields.z = 0LL;
  *(_QWORD *)&v32.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v32, localPosition, v18);
  if ( !v17 )
    goto LABEL_20;
  v31 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v17,
                                    v30,
                                    v31,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v11 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v24 = this->fields.pieceData;
  if ( !v24 )
    goto LABEL_20;
  v25 = 0LL;
  while ( (int)v25 < v24->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v25 >= breakPoints->max_length )
      {
        v29 = sub_B0D9A8(Instance);
        sub_B0D948(v29, 0LL);
      }
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v25];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
            0LL);
          v24 = this->fields.pieceData;
        }
        ++v25;
        if ( v24 )
          continue;
      }
    }
    goto LABEL_20;
  }
  v27 = (WarBoardParallelSchedule_o *)sub_B0D974(WarBoardParallelSchedule_TypeInfo, v22, v23);
  WarBoardParallelSchedule___ctor_21941716(v27, (System_Collections_Generic_List_WarBoardTaskBase__o *)v21, v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( taskList )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__InsertTask_17743264(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
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
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  AssetLoader_LoadEndDataHandler_o *v14; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42132CC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B0D8A4(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_B0D8A4(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_42132CC = 1;
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
    sub_B0D97C(commandSpellIconRoot);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v11 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v10, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v14, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_B0D97C(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  void *commandSpellIconRoot; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_Int32_array **AssetName; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x21

  if ( (byte_42132CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v4);
    sub_B0D8A4(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v5);
    sub_B0D8A4(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v6);
    byte_42132CB = 1;
  }
  v7 = sub_B0D974(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, method, v2);
  WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
    (WarBoardMasterPieceComponent___c__DisplayClass16_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
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
    sub_B0D97C(commandSpellIconRoot);
  }
  AssetName = (System_Int32_array **)MasterFaceManager__GetAssetName(
                                       1,
                                       *((_DWORD *)commandSpellIconRoot + 19),
                                       pieceData->fields._iconId_k__BackingField,
                                       0LL);
  *(_QWORD *)(v7 + 24) = AssetName;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), AssetName, v18, v19, v20, v21, v22, v23);
  v24 = *(System_String_array **)(v7 + 24);
  v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(v24, v27, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0

  if ( (byte_42132CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42132CA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  System_String_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42132CF & 1) == 0 )
  {
    sub_B0D8A4(&AssetData___TypeInfo, asset);
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_42132CF = 1;
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B0D8BC(AssetData___TypeInfo, 1LL);
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  v15 = Object_WarBoardWaitTimeSetting;
  if ( asset )
  {
    Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B0D964(
                                                          asset,
                                                          Object_WarBoardWaitTimeSetting->klass->_1.element_class);
    if ( !Object_WarBoardWaitTimeSetting )
    {
      v27 = sub_B0D99C();
      sub_B0D948(v27, 0LL);
    }
  }
  if ( !LODWORD(v15[1].klass) )
  {
    v26 = sub_B0D9A8(Object_WarBoardWaitTimeSetting);
    sub_B0D948(v26, 0LL);
  }
  v15[1].monitor = asset;
  sub_B0D840((BattleServantConfConponent_o *)&v15[1].monitor, (System_Int32_array **)asset, v9, v10, v11, v12, v13, v14);
  this->fields.assetDatas = (struct AssetData_array *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetDatas,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_WarBoardWaitTimeSetting = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v25, 0LL),
        !asset)
    || (Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              asset,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_WarBoardWaitTimeSetting,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_WarBoardWaitTimeSetting = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(Object_WarBoardWaitTimeSetting);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  System_Int32_array **AssetStorage_29524128; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct WarBoardMasterPieceComponent_o *v14; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct AssetData_array *v19; // x8
  UnityEngine_Material_o *v20; // x20
  struct WarBoardMasterPieceComponent_o *v21; // x8
  __int64 v22; // x0

  if ( (byte_421386D & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D___, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v4);
    byte_421386D = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_29524128 = (System_Int32_array **)AssetManager__getAssetStorage_29524128(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.assetDatas = (struct AssetData_array *)AssetStorage_29524128;
  sub_B0D840(
    (BattleServantConfConponent_o *)&_4__this->fields.assetDatas,
    AssetStorage_29524128,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_22;
  assetDatas = v14->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_22;
  if ( !assetDatas->max_length )
    goto LABEL_23;
  AssetStorage_29524128 = (System_Int32_array **)assetDatas->m_Items[0];
  if ( !AssetStorage_29524128 )
    goto LABEL_22;
  masterIcon = v14->fields.masterIcon;
  AssetStorage_29524128 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_29524128,
                                                   (const MethodInfo_1700CCC *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_29524128 = (System_Int32_array **)((__int64 (__fastcall *)(struct UITexture_o *, System_Int32_array **, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                         masterIcon,
                                                         AssetStorage_29524128,
                                                         masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v17 = this->fields.__4__this) == 0LL)
    || (AssetStorage_29524128 = (System_Int32_array **)v17->fields.masterIcon) == 0LL
    || (AssetStorage_29524128 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*AssetStorage_29524128)->m_Items[167])(
                                                         AssetStorage_29524128,
                                                         *(_QWORD *)&(*AssetStorage_29524128)->m_Items[169]),
        (v18 = this->fields.__4__this) == 0LL)
    || (v19 = v18->fields.assetDatas) == 0LL )
  {
LABEL_22:
    sub_B0D97C(AssetStorage_29524128);
  }
  if ( v19->max_length <= 1 )
  {
LABEL_23:
    v22 = sub_B0D9A8(AssetStorage_29524128);
    sub_B0D948(v22, 0LL);
  }
  v20 = (UnityEngine_Material_o *)AssetStorage_29524128;
  AssetStorage_29524128 = (System_Int32_array **)v19->m_Items[1];
  if ( !AssetStorage_29524128 )
    goto LABEL_22;
  AssetStorage_29524128 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_29524128,
                                                   (const MethodInfo_1700CCC *)Method_AssetData_GetObject_Texture2D___);
  if ( !v20 )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    v20,
    (System_String_o *)StringLiteral_16063/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_29524128,
    0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_22;
  AssetStorage_29524128 = (System_Int32_array **)v21->fields.masterIcon;
  if ( !AssetStorage_29524128 )
    goto LABEL_22;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_29524128, 0LL);
}