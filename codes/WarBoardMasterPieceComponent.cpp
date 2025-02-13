void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD9EBA & 1) == 0 )
  {
    sub_1C21E38(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_19352/*"enemyMstFace{0:d5}"*/);
    sub_1C21E38(&StringLiteral_6168/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4BD9EBA = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6168/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_6168/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19352/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19352/*"enemyMstFace{0:d5}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
    sub_1C22094(masterIcon, method);
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
    sub_1C22094(masterIcon, method);
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

  if ( (byte_4BD9EB3 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5081/*"Custom/SpriteWithMask"*/);
    sub_1C21E38(&StringLiteral_7004/*"Frame{0}"*/);
    byte_4BD9EB3 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v7, v8, v9);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_7004/*"Frame{0}"*/, v11, 0LL);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_ToString.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_IConvertible_ToType.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v12, 0LL, 0LL) )
  {
    v14 = this->fields.masterIcon;
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5081/*"Custom/SpriteWithMask"*/, 0LL);
    v16 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v16, v15, 0LL);
    if ( v14 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v14->klass->vtable._25_set_material.method)(
        v14,
        v16,
        v14->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C22094(masterIcon, v6);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v13);
}


void __fastcall WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  char *transform; // x0
  __int64 v11; // x1
  const MethodInfo_376FA28 *v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  int64_t v22; // x1
  Il2CppClass **v23; // x0
  WarBoardTaskBase_array *v24; // x23
  Il2CppObject *v25; // x24
  const MethodInfo_376FA28 *v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x21
  Il2CppObject *v34; // x21
  PartyOrganizationUtility_o *v35; // x22
  System_Delegate_o *v36; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x8
  WarBoardTaskBase_TaskCallback_c *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct WarBoardTaskBase_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  Il2CppObject *v57; // x19
  char *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x0
  System_Nullable_Vector3__o v66; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v67; // 0:x3.8
  System_Nullable_float__o v68; // 0:x3.8
  System_Nullable_Vector3__o v69; // 0:x0.16
  System_Nullable_Vector3__o v70; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9EB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_1C21E38(&WarBoardTaskBase___TypeInfo);
    sub_1C21E38(&StringLiteral_9086/*"MasterBreak"*/);
    byte_4BD9EB4 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v69.fields.hasValue = &v66;
        *(_QWORD *)&v66.fields.hasValue = 0LL;
        *(_QWORD *)&v66.fields.value.fields.y = 0LL;
        *(_QWORD *)&v69.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v69, localPosition, v12);
        if ( Instance )
        {
          v67 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v66,
                                v67,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v22 = (int64_t)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v22, v13, v14, v15, v16, v17, v18);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1C22094(transform, v11);
    }
    v24 = (WarBoardTaskBase_array *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
    v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v72 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v70.fields.hasValue = &v66;
    v66 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v70.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v70, v72, v26);
    if ( !v25 )
      goto LABEL_37;
    v68 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v25, v66, v68, 1, 0, 1, 0LL);
    if ( !v24 )
      goto LABEL_37;
    v33 = (int64_t)transform;
    if ( transform )
    {
      transform = (char *)sub_1C21F74(transform, v24->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v24->max_length )
      goto LABEL_38;
    v24->m_Items[0] = (WarBoardTaskBase_o *)v33;
    sub_1C21DDC((PartyOrganizationUtility_o *)v24->m_Items, v33, v27, v28, v29, v30, v31, v32);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v24, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_9086/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v34 = (Il2CppObject *)transform;
  v35 = (PartyOrganizationUtility_o *)(transform + 40);
  v36 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v37 = (WarBoardTaskBase_TaskCallback_o *)sub_1C22084(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v38 = System_Delegate__Combine(v36, (System_Delegate_o *)v37, 0LL);
  v45 = (int64_t)v38;
  if ( !v38 )
    goto LABEL_24;
  v46 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v35->klass = (PartyOrganizationUtility_c *)v38, (WarBoardTaskBase_TaskCallback_c *)v38->klass != v46) )
  {
    sub_1C22354(v38);
LABEL_24:
    v35->klass = (PartyOrganizationUtility_c *)v45;
  }
  sub_1C21DDC(v35, v45, v39, v40, v41, v42, v43, v44);
  if ( taskList )
  {
    v53 = taskList->fields._items;
    v54 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v53 )
      goto LABEL_37;
    v55 = taskList->fields._size;
    if ( (unsigned int)v55 >= v53->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v34,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->obj.klass + v55;
      taskList->fields._size = v55 + 1;
      v56[4] = (Il2CppClass *)v34;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)v34, v47, v48, v49, v50, v51, v52);
    }
    goto LABEL_35;
  }
  v57 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1C21EE0(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v58 = transform;
  transform = (char *)sub_1C21F74(v34, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v65 = sub_1C220B8();
    sub_1C21F60(v65, 0LL);
  }
  if ( !*((_DWORD *)v58 + 6) )
LABEL_38:
    sub_1C2209C(transform, v11);
  *((_QWORD *)v58 + 4) = v34;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v58 + 32), (int64_t)v34, v59, v60, v61, v62, v63, v64);
  if ( !v57 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v57, 0, (WarBoardTaskBase_array *)v58, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  PartyOrganizationUtility_o *p_assetDatas; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BD9EB9 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BD9EB9 = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (PartyOrganizationUtility_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39035080(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1C21DDC(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
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
  const MethodInfo_376FA28 *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_object__o *v25; // x22
  const MethodInfo *v26; // x2
  struct WarBoardPieceData_o *v27; // x8
  __int64 v28; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  System_Nullable_Vector3__o v41; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v42; // 0:x3.8
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9EB5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C21E38(&WarBoardParallelSchedule_TypeInfo);
    byte_4BD9EB5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v45, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v43.fields.hasValue = &v41;
  *(_QWORD *)&v41.fields.hasValue = 0LL;
  *(_QWORD *)&v41.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v43, localPosition, v13);
  if ( !v12 )
    goto LABEL_24;
  v42 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v12,
                                    v41,
                                    v42,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v5 )
    goto LABEL_24;
  items = v5->fields._items;
  v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v5->fields._size;
  v23 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Instance,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v27 = this->fields.pieceData;
  if ( !v27 )
    goto LABEL_24;
  v28 = 0LL;
  while ( (int)v28 < v27->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v28 >= breakPoints->max_length )
        sub_1C2209C(Instance, v7);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v28];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v25,
            v26);
          v27 = this->fields.pieceData;
        }
        ++v28;
        if ( v27 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v30 = (WarBoardParallelSchedule_o *)sub_1C22084(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_36876472(v30, (System_Collections_Generic_List_WarBoardTaskBase__o *)v25, 0LL);
  v37 = v5->fields._items;
  v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v37 )
LABEL_24:
    sub_1C22094(Instance, v7);
  v39 = v5->fields._size;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v30,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    v5->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)v30;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v30, v31, v32, v33, v34, v35, v36);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_36662756(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C22094(0LL, remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetEnemyMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
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

  if ( (byte_4BD9EB8 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_1C21E38(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4BD9EB8 = 1;
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
    sub_1C22094(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v4, v5, v6);
  v10 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v9, 0LL);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v10, v11, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C22094(0LL, method);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0LL) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
}


void __fastcall WarBoardMasterPieceComponent__SetPlayerMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  void *commandSpellIconRoot; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_array *v21; // x20
  System_Action_o *v22; // x21

  if ( (byte_4BD9EB7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_1C21E38(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_4BD9EB7 = 1;
  }
  v3 = sub_1C22084(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
    sub_1C22094(commandSpellIconRoot, v5);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)AssetName, v15, v16, v17, v18, v19, v20);
  v21 = *(System_String_array **)(v3 + 24);
  v22 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39041504(v21, v22, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD9EB6 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4BD9EB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
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
    sub_1C22094(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__49880776; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v26; // x0
  __int64 v27; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD9EBB & 1) == 0 )
  {
    sub_1C21E38(&AssetData___TypeInfo);
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4BD9EBB = 1;
  }
  Object_object__49880776 = (System_String_o *)sub_1C21EE0(AssetData___TypeInfo, 1LL);
  if ( !Object_object__49880776 )
    goto LABEL_14;
  v13 = (int64_t)Object_object__49880776;
  if ( asset )
  {
    Object_object__49880776 = (System_String_o *)sub_1C21F74(asset, Object_object__49880776->klass->_1.element_class);
    if ( !Object_object__49880776 )
    {
      v27 = sub_1C220B8();
      sub_1C21F60(v27, 0LL);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1C2209C(Object_object__49880776, v6);
  *(_QWORD *)(v13 + 32) = asset;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)asset, v7, v8, v9, v10, v11, v12);
  this->fields.assetDatas = (struct AssetData_array *)v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetDatas, v13, v14, v15, v16, v17, v18, v19);
  Object_object__49880776 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v20, v21, v22),
        Object_object__49880776 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v26, 0LL),
        !asset)
    || (Object_object__49880776 = (System_String_o *)AssetData__GetObject_object__49880776(
                                                       asset,
                                                       Object_object__49880776,
                                                       (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__49880776,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__49880776 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1C22094(Object_object__49880776, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__49880776, 0LL);
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
  AssetData_array *AssetStorage_39042880; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct WarBoardMasterPieceComponent_o *v13; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v16; // x8
  struct WarBoardMasterPieceComponent_o *v17; // x8
  struct AssetData_array *v18; // x8
  UnityEngine_Material_o *v19; // x20
  struct WarBoardMasterPieceComponent_o *v20; // x8

  if ( (byte_4BD9EBC & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D___);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BD9EBC = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_39042880 = AssetManager__getAssetStorage_39042880(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_39042880;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetDatas,
    (int64_t)AssetStorage_39042880,
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
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_39042880 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_39042880 )
    goto LABEL_21;
  masterIcon = v13->fields.masterIcon;
  AssetStorage_39042880 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_39042880,
                                               (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_39042880 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_39042880,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v16 = this->fields.__4__this) == 0LL)
    || (AssetStorage_39042880 = (AssetData_array *)v16->fields.masterIcon) == 0LL
    || (AssetStorage_39042880 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_39042880->obj.klass->vtable[24].method)(
                                                     AssetStorage_39042880,
                                                     AssetStorage_39042880->obj.klass->vtable[25].methodPtr),
        (v17 = this->fields.__4__this) == 0LL)
    || (v18 = v17->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1C22094(AssetStorage_39042880, v6);
  }
  if ( v18->max_length <= 1 )
LABEL_22:
    sub_1C2209C(AssetStorage_39042880, v6);
  v19 = (UnityEngine_Material_o *)AssetStorage_39042880;
  AssetStorage_39042880 = (AssetData_array *)v18->m_Items[1];
  if ( !AssetStorage_39042880 )
    goto LABEL_21;
  AssetStorage_39042880 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_39042880,
                                               (const MethodInfo_2F91DC0 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v19 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v19,
    (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_39042880,
    0LL);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_21;
  AssetStorage_39042880 = (AssetData_array *)v20->fields.masterIcon;
  if ( !AssetStorage_39042880 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_39042880, 0LL);
}