void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A58C65 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_19024/*"enemyMstFace{0:d5}"*/);
    sub_1B885B0(&StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4A58C65 = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v1,
    v2);
  v3 = StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME, v3, v5, v6);
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
    sub_1B8880C(masterIcon, method);
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
    sub_1B8880C(masterIcon, method);
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

  if ( (byte_4A58C5E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_6830/*"Frame{0}"*/);
    byte_4A58C5E = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v7, v8, v9);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6830/*"Frame{0}"*/, v11, 0LL);
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
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
    v16 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
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
    sub_1B8880C(masterIcon, v6);
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
  const MethodInfo_361E548 *v12; // x2
  int32_t v13; // w2
  int32_t v14; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass *v18; // x1
  Il2CppClass **v19; // x0
  WarBoardTaskBase_array *v20; // x23
  Il2CppObject *v21; // x24
  const MethodInfo_361E548 *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  WarBoardTaskBase_o *v25; // x21
  Il2CppObject *v26; // x21
  ServantStatusBattleListViewItem_o *v27; // x22
  System_Delegate_o *v28; // x23
  WarBoardTaskBase_TaskCallback_o *v29; // x24
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Delegate_o *v33; // x8
  WarBoardTaskBase_TaskCallback_c *v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  struct WarBoardTaskBase_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  Il2CppObject *v41; // x19
  char *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0
  System_Nullable_Vector3__o v46; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v47; // 0:x3.8
  System_Nullable_float__o v48; // 0:x3.8
  System_Nullable_Vector3__o v49; // 0:x0.16
  System_Nullable_Vector3__o v50; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A58C5F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    sub_1B885B0(&StringLiteral_8896/*"MasterBreak"*/);
    byte_4A58C5F = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v49.fields.hasValue = &v46;
        *(_QWORD *)&v46.fields.hasValue = 0LL;
        *(_QWORD *)&v46.fields.value.fields.y = 0LL;
        *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v49, localPosition, v12);
        if ( Instance )
        {
          v47 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v46,
                                v47,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v16 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v18 = (Il2CppClass *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v19[4] = v18;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1B8880C(transform, v11);
    }
    v20 = (WarBoardTaskBase_array *)sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
    v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v52 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v50.fields.hasValue = &v46;
    v46 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v50.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v50, v52, v22);
    if ( !v21 )
      goto LABEL_37;
    v48 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v21, v46, v48, 1, 0, 1, 0LL);
    if ( !v20 )
      goto LABEL_37;
    v25 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (char *)sub_1B886EC(transform, v20->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v20->max_length )
      goto LABEL_38;
    v20->m_Items[0] = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v20->m_Items, (int32_t)v25, v23, v24);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v20, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_8896/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v26 = (Il2CppObject *)transform;
  v27 = (ServantStatusBattleListViewItem_o *)(transform + 40);
  v28 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v29 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v30 = System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0LL);
  v33 = v30;
  if ( !v30 )
    goto LABEL_24;
  v34 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v30->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v27->klass = (ServantStatusBattleListViewItem_c *)v30, (WarBoardTaskBase_TaskCallback_c *)v30->klass != v34) )
  {
    sub_1B88ACC(v30);
LABEL_24:
    v27->klass = (ServantStatusBattleListViewItem_c *)v33;
  }
  sub_1B88554(v27, (int32_t)v33, v31, v32);
  if ( taskList )
  {
    v37 = taskList->fields._items;
    v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v37 )
      goto LABEL_37;
    v39 = taskList->fields._size;
    if ( (unsigned int)v39 >= v37->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v26,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = &v37->obj.klass + v39;
      taskList->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v26, v35, v36);
    }
    goto LABEL_35;
  }
  v41 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v42 = transform;
  transform = (char *)sub_1B886EC(v26, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v45 = sub_1B88830(transform);
    sub_1B886D8(v45, 0LL);
  }
  if ( !*((_DWORD *)v42 + 6) )
LABEL_38:
    sub_1B88814(transform, v11);
  *((_QWORD *)v42 + 4) = v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)v26, v43, v44);
  if ( !v41 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v41, 0, (WarBoardTaskBase_array *)v42, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  AssetData_array *assetDatas; // x19
  ServantStatusBattleListViewItem_o *p_assetDatas; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A58C64 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A58C64 = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (ServantStatusBattleListViewItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37790864(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1B88554(p_assetDatas, 0, v5, v6);
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
  const MethodInfo_361E548 *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
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
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  System_Nullable_Vector3__o v33; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v34; // 0:x3.8
  System_Nullable_Vector3__o v35; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A58C60 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardParallelSchedule_TypeInfo);
    byte_4A58C60 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v37, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v35.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v35.fields.hasValue = &v33;
  *(_QWORD *)&v33.fields.hasValue = 0LL;
  *(_QWORD *)&v33.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v35, localPosition, v13);
  if ( !v12 )
    goto LABEL_24;
  v34 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v12,
                                    v33,
                                    v34,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v5 )
    goto LABEL_24;
  items = v5->fields._items;
  v17 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v5->fields._size;
  v19 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)Instance,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v23 = this->fields.pieceData;
  if ( !v23 )
    goto LABEL_24;
  v24 = 0LL;
  while ( (int)v24 < v23->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v24 >= breakPoints->max_length )
        sub_1B88814(Instance, v7);
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
  v26 = (WarBoardParallelSchedule_o *)sub_1B887FC(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_35774572(v26, (System_Collections_Generic_List_WarBoardTaskBase__o *)v21, 0LL);
  v29 = v5->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v5->fields._version;
  if ( !v29 )
LABEL_24:
    sub_1B8880C(Instance, v7);
  v31 = v5->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v26,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v5->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v26, v27, v28);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v5,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_35479312(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v5, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(0LL, remain);
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

  if ( (byte_4A58C63 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__);
    sub_1B885B0(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4A58C63 = 1;
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
    sub_1B8880C(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v4, v5, v6);
  v10 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v9, 0LL);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1B8880C(0LL, method);
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
  int32_t v6; // w2
  int32_t v7; // w3
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_array *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_4A58C62 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__);
    sub_1B885B0(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
    byte_4A58C62 = 1;
  }
  v3 = sub_1B887FC(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_15;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
    sub_1B8880C(commandSpellIconRoot, v5);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v3 + 24) = AssetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)AssetName, v11, v12);
  v13 = *(System_String_array **)(v3 + 24);
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(v13, v14, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A58C61 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  System_String_o *Object_object__48635516; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58C66 & 1) == 0 )
  {
    sub_1B885B0(&AssetData___TypeInfo);
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4A58C66 = 1;
  }
  Object_object__48635516 = (System_String_o *)sub_1B88658(AssetData___TypeInfo, 1LL);
  if ( !Object_object__48635516 )
    goto LABEL_14;
  v9 = Object_object__48635516;
  if ( asset )
  {
    Object_object__48635516 = (System_String_o *)sub_1B886EC(asset, Object_object__48635516->klass->_1.element_class);
    if ( !Object_object__48635516 )
    {
      v19 = sub_1B88830(0LL);
      sub_1B886D8(v19, 0LL);
    }
  }
  if ( !LODWORD(v9[1].klass) )
    sub_1B88814(Object_object__48635516, v6);
  v9[1].monitor = asset;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9[1].monitor, (int32_t)asset, v7, v8);
  this->fields.assetDatas = (struct AssetData_array *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetDatas, (int32_t)v9, v10, v11);
  Object_object__48635516 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v12, v13, v14),
        Object_object__48635516 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v18, 0LL),
        !asset)
    || (Object_object__48635516 = (System_String_o *)AssetData__GetObject_object__48635516(
                                                       asset,
                                                       Object_object__48635516,
                                                       (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__48635516,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__48635516 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(Object_object__48635516, v6);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__48635516, 0LL);
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
  AssetData_array *AssetStorage_37798664; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardMasterPieceComponent_o *v9; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v12; // x8
  struct WarBoardMasterPieceComponent_o *v13; // x8
  struct AssetData_array *v14; // x8
  UnityEngine_Material_o *v15; // x20
  struct WarBoardMasterPieceComponent_o *v16; // x8

  if ( (byte_4A58C67 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A58C67 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_37798664 = AssetManager__getAssetStorage_37798664(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_37798664;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetDatas, (int32_t)AssetStorage_37798664, v7, v8);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_21;
  assetDatas = v9->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_37798664 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_37798664 )
    goto LABEL_21;
  masterIcon = v9->fields.masterIcon;
  AssetStorage_37798664 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_37798664,
                                               (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_37798664 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_37798664,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v12 = this->fields.__4__this) == 0LL)
    || (AssetStorage_37798664 = (AssetData_array *)v12->fields.masterIcon) == 0LL
    || (AssetStorage_37798664 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_37798664->obj.klass->vtable[24].method)(
                                                     AssetStorage_37798664,
                                                     AssetStorage_37798664->obj.klass->vtable[25].methodPtr),
        (v13 = this->fields.__4__this) == 0LL)
    || (v14 = v13->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1B8880C(AssetStorage_37798664, v6);
  }
  if ( v14->max_length <= 1 )
LABEL_22:
    sub_1B88814(AssetStorage_37798664, v6);
  v15 = (UnityEngine_Material_o *)AssetStorage_37798664;
  AssetStorage_37798664 = (AssetData_array *)v14->m_Items[1];
  if ( !AssetStorage_37798664 )
    goto LABEL_21;
  AssetStorage_37798664 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_37798664,
                                               (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v15 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v15,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_37798664,
    0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_21;
  AssetStorage_37798664 = (AssetData_array *)v16->fields.masterIcon;
  if ( !AssetStorage_37798664 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_37798664, 0LL);
}