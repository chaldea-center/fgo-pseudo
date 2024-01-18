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

  if ( (byte_418651C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18367/*"enemyMstFace{0:d5}"*/, v8);
    sub_B2C35C(&StringLiteral_5996/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v9);
    byte_418651C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_5996/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5996/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18367/*"enemyMstFace{0:d5}"*/;
  v12->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18367/*"enemyMstFace{0:d5}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->ENEMY_MASTER_FACE_TEXTURE_NAME, v13, v14, v15, v16, v17, v18, v19);
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
    sub_B2C434(masterIcon, method);
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
    sub_B2C434(masterIcon, method);
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
  UISprite_o *frameSprite; // x21
  Il2CppObject *v12; // x0
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x1
  struct UITexture_o *v15; // x20
  UnityEngine_Shader_o *v16; // x22
  UnityEngine_Material_o *v17; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186515 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, pieceData);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v7);
    sub_B2C35C(&StringLiteral_6793/*"Frame{0}"*/, v8);
    byte_4186515 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_13;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6793/*"Frame{0}"*/, v12, 0LL);
  if ( !frameSprite )
    goto LABEL_13;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_13;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_CompareTo.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v13, 0LL, 0LL) )
  {
    v15 = this->fields.masterIcon;
    v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
    v17 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v17, v16, 0LL);
    if ( v15 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v15->klass->vtable._25_set_material.method)(
        v15,
        v17,
        v15->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(masterIcon, v10);
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
  WebViewManager_o *Instance; // x22
  char *transform; // x0
  __int64 v17; // x1
  const MethodInfo_2155668 *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x0
  WarBoardTaskBase_array *v20; // x23
  WebViewManager_o *v21; // x24
  const MethodInfo_2155668 *v22; // x2
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x21
  BattleServantConfConponent_o *v31; // x22
  System_Delegate_o *v32; // x23
  WarBoardTaskBase_TaskCallback_o *v33; // x24
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  WebViewManager_o *v41; // x19
  char *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x0
  System_Nullable_Vector3__o v51; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v52; // 0:x3.8
  System_Nullable_float__o v53; // 0:x3.8
  System_Nullable_Vector3__o v54; // 0:x0.16
  System_Nullable_Vector3__o v55; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186516 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v13);
    sub_B2C35C(&StringLiteral_8963/*"MasterBreak"*/, v14);
    byte_4186516 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v54.fields.value.fields.x = &v51;
        *(_QWORD *)&v51.fields.value.fields.x = 0LL;
        *(_QWORD *)&v51.fields.value.fields.z = 0LL;
        *(_QWORD *)&v54.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v54, localPosition, v18);
        if ( Instance )
        {
          v52 = cameraSize;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           (WarBoardManager_o *)Instance,
                                                                                           v51,
                                                                                           v52,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
            CameraPerformanceTask,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          goto LABEL_16;
        }
      }
LABEL_28:
      sub_B2C434(transform, v17);
    }
    v20 = (WarBoardTaskBase_array *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
    v21 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_28;
    v57 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v55.fields.value.fields.x = &v51;
    v51 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v55.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v55, v57, v22);
    if ( !v21 )
      goto LABEL_28;
    v53 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v21, v51, v53, 1, 0, 1, 0LL);
    if ( !v20 )
      goto LABEL_28;
    v29 = (System_Int32_array **)transform;
    if ( transform )
    {
      transform = (char *)sub_B2C41C(transform, v20->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_31;
    }
    if ( !v20->max_length )
      goto LABEL_30;
    v20->m_Items[0] = (WarBoardTaskBase_o *)v29;
    sub_B2C2F8((BattleServantConfConponent_o *)v20->m_Items, v29, v23, v24, v25, v26, v27, v28);
    if ( !Instance )
      goto LABEL_28;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v20, 0LL);
  }
LABEL_16:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_8963/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_28;
  v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform;
  v31 = (BattleServantConfConponent_o *)(transform + 40);
  v32 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v34 = (System_Int32_array **)System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  if ( v34 && *v34 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    transform = (char *)sub_B2C728(v34);
LABEL_30:
    v49 = sub_B2C460(transform);
    sub_B2C400(v49, 0LL);
  }
  v31->klass = (BattleServantConfConponent_c *)v34;
  sub_B2C2F8(v31, v34, v35, v36, v37, v38, v39, v40);
  if ( taskList )
  {
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskList,
      v30,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    goto LABEL_26;
  }
  v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_28;
  v42 = transform;
  transform = (char *)sub_B2C41C(v30, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_31:
    v50 = sub_B2C454();
    sub_B2C400(v50, 0LL);
  }
  if ( !*((_DWORD *)v42 + 6) )
    goto LABEL_30;
  *((_QWORD *)v42 + 4) = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v30, v43, v44, v45, v46, v47, v48);
  if ( !v41 )
    goto LABEL_28;
  WarBoardManager__InsertTask((WarBoardManager_o *)v41, 0, (WarBoardTaskBase_array *)v42, 0LL);
LABEL_26:
  transform = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_418651B & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_418651B = 1;
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
    AssetManager__releaseAsset_30152892(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_B2C2F8(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  WebViewManager_o *v18; // x22
  const MethodInfo_2155668 *v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x22
  struct WarBoardPieceData_o *v21; // x8
  __int64 v22; // x24
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v24; // x20
  const MethodInfo *v25; // x2
  __int64 v26; // x0
  System_Nullable_Vector3__o v27; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v28; // 0:x3.8
  System_Nullable_Vector3__o v29; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186517 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B2C35C(&WarBoardParallelSchedule_TypeInfo, v10);
    byte_4186517 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v31, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v29.fields.value.fields.x = &v27;
  *(_QWORD *)&v27.fields.value.fields.x = 0LL;
  *(_QWORD *)&v27.fields.value.fields.z = 0LL;
  *(_QWORD *)&v29.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v29, localPosition, v19);
  if ( !v18 )
    goto LABEL_20;
  v28 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v18,
                                    v27,
                                    v28,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v11 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v21 = this->fields.pieceData;
  if ( !v21 )
    goto LABEL_20;
  v22 = 0LL;
  while ( (int)v22 < v21->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v22 >= breakPoints->max_length )
      {
        v26 = sub_B2C460(Instance);
        sub_B2C400(v26, 0LL);
      }
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v22];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v20,
            0LL);
          v21 = this->fields.pieceData;
        }
        ++v22;
        if ( v21 )
          continue;
      }
    }
    goto LABEL_20;
  }
  v24 = (WarBoardParallelSchedule_o *)sub_B2C42C(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_22380880(v24, (System_Collections_Generic_List_WarBoardTaskBase__o *)v20, v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
  if ( taskList )
  {
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)taskList,
      (System_Collections_Generic_IEnumerable_T__o *)v11,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  else
  {
    Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__InsertTask_18194508(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B2C434(Instance, v13);
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
    sub_B2C434(0LL, remain);
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
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418651A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_B2C35C(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_418651A = 1;
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
    sub_B2C434(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v11 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v10, 0LL);
  v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v12, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *pieceData; // x8

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  void *commandSpellIconRoot; // x0
  __int64 v8; // x1
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
  System_Action_o *v25; // x21

  if ( (byte_4186519 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v4);
    sub_B2C35C(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v5);
    byte_4186519 = 1;
  }
  v6 = sub_B2C42C(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  WarBoardMasterPieceComponent___c__DisplayClass16_0___ctor(
    (WarBoardMasterPieceComponent___c__DisplayClass16_0_o *)v6,
    0LL);
  if ( !v6 )
    goto LABEL_16;
  *(_QWORD *)(v6 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
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
    sub_B2C434(commandSpellIconRoot, v8);
  }
  AssetName = (System_Int32_array **)MasterFaceManager__GetAssetName(
                                       1,
                                       *((_DWORD *)commandSpellIconRoot + 19),
                                       pieceData->fields._iconId_k__BackingField,
                                       0LL);
  *(_QWORD *)(v6 + 24) = AssetName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 24), AssetName, v18, v19, v20, v21, v22, v23);
  v24 = *(System_String_array **)(v6 + 24);
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v6,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(v24, v25, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4186518 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186518 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
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
    sub_B2C434(0LL, v3);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *v16; // x21
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
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418651D & 1) == 0 )
  {
    sub_B2C35C(&AssetData___TypeInfo, asset);
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_418651D = 1;
  }
  Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B2C374(AssetData___TypeInfo, 1LL);
  if ( !Object_WarBoardWaitTimeSetting )
    goto LABEL_15;
  v16 = Object_WarBoardWaitTimeSetting;
  if ( asset )
  {
    Object_WarBoardWaitTimeSetting = (System_String_o *)sub_B2C41C(
                                                          asset,
                                                          Object_WarBoardWaitTimeSetting->klass->_1.element_class);
    if ( !Object_WarBoardWaitTimeSetting )
    {
      v28 = sub_B2C454();
      sub_B2C400(v28, 0LL);
    }
  }
  if ( !LODWORD(v16[1].klass) )
  {
    v27 = sub_B2C460(Object_WarBoardWaitTimeSetting);
    sub_B2C400(v27, 0LL);
  }
  v16[1].monitor = asset;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16[1].monitor,
    (System_Int32_array **)asset,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.assetDatas = (struct AssetData_array *)v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetDatas,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_WarBoardWaitTimeSetting = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v26, 0LL),
        !asset)
    || (Object_WarBoardWaitTimeSetting = (System_String_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              asset,
                                                              Object_WarBoardWaitTimeSetting,
                                                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_WarBoardWaitTimeSetting,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_WarBoardWaitTimeSetting = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_15:
    sub_B2C434(Object_WarBoardWaitTimeSetting, v9);
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
  System_Int32_array **AssetStorage_30160412; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct WarBoardMasterPieceComponent_o *v15; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct WarBoardMasterPieceComponent_o *v19; // x8
  struct AssetData_array *v20; // x8
  UnityEngine_Material_o *v21; // x20
  struct WarBoardMasterPieceComponent_o *v22; // x8
  __int64 v23; // x0

  if ( (byte_41866F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D___, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v4);
    byte_41866F2 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_30160412 = (System_Int32_array **)AssetManager__getAssetStorage_30160412(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_22;
  _4__this->fields.assetDatas = (struct AssetData_array *)AssetStorage_30160412;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&_4__this->fields.assetDatas,
    AssetStorage_30160412,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_22;
  assetDatas = v15->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_22;
  if ( !assetDatas->max_length )
    goto LABEL_23;
  AssetStorage_30160412 = (System_Int32_array **)assetDatas->m_Items[0];
  if ( !AssetStorage_30160412 )
    goto LABEL_22;
  masterIcon = v15->fields.masterIcon;
  AssetStorage_30160412 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_30160412,
                                                   (const MethodInfo_1720240 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_30160412 = (System_Int32_array **)((__int64 (__fastcall *)(struct UITexture_o *, System_Int32_array **, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                         masterIcon,
                                                         AssetStorage_30160412,
                                                         masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v18 = this->fields.__4__this) == 0LL)
    || (AssetStorage_30160412 = (System_Int32_array **)v18->fields.masterIcon) == 0LL
    || (AssetStorage_30160412 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Int32_array **, _QWORD))&(*AssetStorage_30160412)->m_Items[167])(
                                                         AssetStorage_30160412,
                                                         *(_QWORD *)&(*AssetStorage_30160412)->m_Items[169]),
        (v19 = this->fields.__4__this) == 0LL)
    || (v20 = v19->fields.assetDatas) == 0LL )
  {
LABEL_22:
    sub_B2C434(AssetStorage_30160412, v8);
  }
  if ( v20->max_length <= 1 )
  {
LABEL_23:
    v23 = sub_B2C460(AssetStorage_30160412);
    sub_B2C400(v23, 0LL);
  }
  v21 = (UnityEngine_Material_o *)AssetStorage_30160412;
  AssetStorage_30160412 = (System_Int32_array **)v20->m_Items[1];
  if ( !AssetStorage_30160412 )
    goto LABEL_22;
  AssetStorage_30160412 = (System_Int32_array **)AssetData__GetObject_Texture2D_(
                                                   (AssetData_o *)AssetStorage_30160412,
                                                   (const MethodInfo_1720240 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v21 )
    goto LABEL_22;
  UnityEngine_Material__SetTexture(
    v21,
    (System_String_o *)StringLiteral_16015/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_30160412,
    0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_22;
  AssetStorage_30160412 = (System_Int32_array **)v22->fields.masterIcon;
  if ( !AssetStorage_30160412 )
    goto LABEL_22;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_30160412, 0LL);
}