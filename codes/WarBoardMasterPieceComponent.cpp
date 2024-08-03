void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F9F4D & 1) == 0 )
  {
    sub_1B640C8(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_18951/*"enemyMstFace{0:d5}"*/, v4);
    sub_1B640C8(&StringLiteral_5983/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v5);
    byte_49F9F4D = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_5983/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_5983/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v2,
    v3);
  v6 = StringLiteral_18951/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18951/*"enemyMstFace{0:d5}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME, v6, v8, v9);
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
    sub_1B64324(masterIcon);
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
    sub_1B64324(masterIcon);
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

  if ( (byte_49F9F46 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, pieceData);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v7);
    sub_1B640C8(&StringLiteral_6802/*"Frame{0}"*/, v8);
    byte_49F9F46 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6802/*"Frame{0}"*/, v11, 0LL);
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
    v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v16, v17);
    UnityEngine_Material___ctor(v18, v15, 0LL);
    if ( v14 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v14->klass->vtable._25_set_material.method)(
        v14,
        v18,
        v14->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(masterIcon);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x22
  char *transform; // x0
  const MethodInfo_35D2010 *v17; // x2
  int32_t v18; // w2
  int32_t v19; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass *v23; // x1
  Il2CppClass **v24; // x0
  WarBoardTaskBase_array *v25; // x23
  Il2CppObject *v26; // x24
  const MethodInfo_35D2010 *v27; // x2
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  WarBoardTaskBase_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x21
  ServantStatusBattleListViewItem_o *v35; // x22
  System_Delegate_o *v36; // x23
  WarBoardTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Delegate_o *v41; // x8
  WarBoardTaskBase_TaskCallback_c *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  struct WarBoardTaskBase_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  Il2CppObject *v49; // x19
  char *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x0
  System_Nullable_Vector3__o v54; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v55; // 0:x3.8
  System_Nullable_float__o v56; // 0:x3.8
  System_Nullable_Vector3__o v57; // 0:x0.16
  System_Nullable_Vector3__o v58; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9F47 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v13);
    sub_1B640C8(&StringLiteral_8854/*"MasterBreak"*/, v14);
    byte_49F9F47 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v57.fields.hasValue = &v54;
        *(_QWORD *)&v54.fields.hasValue = 0LL;
        *(_QWORD *)&v54.fields.value.fields.y = 0LL;
        *(_QWORD *)&v57.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v57, localPosition, v17);
        if ( Instance )
        {
          v55 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v54,
                                v55,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v21 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v23 = (Il2CppClass *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v24[4] = v23;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1B64324(transform);
    }
    v25 = (WarBoardTaskBase_array *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v60 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v58.fields.hasValue = &v54;
    v54 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v58.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v58, v60, v27);
    if ( !v26 )
      goto LABEL_37;
    v56 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v26, v54, v56, 1, 0, 1, 0LL);
    if ( !v25 )
      goto LABEL_37;
    v31 = (WarBoardTaskBase_o *)transform;
    if ( transform )
    {
      transform = (char *)sub_1B64204(transform, v25->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v25->max_length )
      goto LABEL_38;
    v25->m_Items[0] = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v25->m_Items, (int32_t)v31, v29, v30);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v25, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_8854/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v34 = (Il2CppObject *)transform;
  v35 = (ServantStatusBattleListViewItem_o *)(transform + 40);
  v36 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v37 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v32, v33);
  WarBoardTaskBase_TaskCallback___ctor(
    v37,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v38 = System_Delegate__Combine(v36, (System_Delegate_o *)v37, 0LL);
  v41 = v38;
  if ( !v38 )
    goto LABEL_24;
  v42 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v38->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v35->klass = (ServantStatusBattleListViewItem_c *)v38, (WarBoardTaskBase_TaskCallback_c *)v38->klass != v42) )
  {
    sub_1B645E4(v38);
LABEL_24:
    v35->klass = (ServantStatusBattleListViewItem_c *)v41;
  }
  sub_1B6406C(v35, (int32_t)v41, v39, v40);
  if ( taskList )
  {
    v45 = taskList->fields._items;
    v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v45 )
      goto LABEL_37;
    v47 = taskList->fields._size;
    if ( (unsigned int)v47 >= v45->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v34,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = &v45->obj.klass + v47;
      taskList->fields._size = v47 + 1;
      v48[4] = (Il2CppClass *)v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v34, v43, v44);
    }
    goto LABEL_35;
  }
  v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v50 = transform;
  transform = (char *)sub_1B64204(v34, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v53 = sub_1B64348(transform);
    sub_1B641F0(v53, 0LL);
  }
  if ( !*((_DWORD *)v50 + 6) )
LABEL_38:
    sub_1B6432C(transform, v28);
  *((_QWORD *)v50 + 4) = v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 32), (int32_t)v34, v51, v52);
  if ( !v49 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v49, 0, (WarBoardTaskBase_array *)v50, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_49F9F4C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49F9F4C = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (ServantStatusBattleListViewItem_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_37477672(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1B6406C(p_assetDatas, 0, v5, v6);
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
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v17; // x22
  const MethodInfo_35D2010 *v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  WarBoardManager_o *v24; // x1
  Il2CppClass **v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_object__o *v28; // x22
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  struct WarBoardPieceData_o *v31; // x8
  __int64 v32; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
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

  if ( (byte_49F9F48 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1B640C8(&WarBoardParallelSchedule_TypeInfo, v10);
    byte_49F9F48 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       taskList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v43.fields.hasValue = &v41;
  *(_QWORD *)&v41.fields.hasValue = 0LL;
  *(_QWORD *)&v41.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v43, localPosition, v18);
  if ( !v17 )
    goto LABEL_24;
  v42 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v17,
                                    v41,
                                    v42,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v11 )
    goto LABEL_24;
  items = v11->fields._items;
  v22 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v11->fields._size;
  v24 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Instance,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v25[4] = (Il2CppClass *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v26,
                                                       v27);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v31 = this->fields.pieceData;
  if ( !v31 )
    goto LABEL_24;
  v32 = 0LL;
  while ( (int)v32 < v31->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v32 >= breakPoints->max_length )
        sub_1B6432C(Instance, v29);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v32];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v28,
            v30);
          v31 = this->fields.pieceData;
        }
        ++v32;
        if ( v31 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v34 = (WarBoardParallelSchedule_o *)sub_1B64314(WarBoardParallelSchedule_TypeInfo, v29, v30);
  WarBoardParallelSchedule___ctor_35394124(v34, (System_Collections_Generic_List_WarBoardTaskBase__o *)v28, 0LL);
  v37 = v11->fields._items;
  v38 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v37 )
LABEL_24:
    sub_1B64324(Instance);
  v39 = v11->fields._size;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v34,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v40 = &v37->obj.klass + v39;
    v11->fields._size = v39 + 1;
    v40[4] = (Il2CppClass *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v34, v35, v36);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_35180484(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64324(0LL);
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
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9F4B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_1B640C8(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_49F9F4B = 1;
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
    sub_1B64324(commandSpellIconRoot);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v11 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v10, 0LL);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v11, v14, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1B64324(0LL);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0LL) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
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
  int32_t v9; // w2
  int32_t v10; // w3
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_array *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21

  if ( (byte_49F9F4A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    sub_1B640C8(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v5);
    sub_1B640C8(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v6);
    byte_49F9F4A = 1;
  }
  v7 = sub_1B64314(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
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
    sub_1B64324(commandSpellIconRoot);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v7 + 24) = AssetName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)AssetName, v14, v15);
  v16 = *(System_String_array **)(v7 + 24);
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(v16, v19, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F9F49 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  System_String_o *Object_object__48347676; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9F4E & 1) == 0 )
  {
    sub_1B640C8(&AssetData___TypeInfo, asset);
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_49F9F4E = 1;
  }
  Object_object__48347676 = (System_String_o *)sub_1B64170(AssetData___TypeInfo, 1LL);
  if ( !Object_object__48347676 )
    goto LABEL_14;
  v12 = Object_object__48347676;
  if ( asset )
  {
    Object_object__48347676 = (System_String_o *)sub_1B64204(asset, Object_object__48347676->klass->_1.element_class);
    if ( !Object_object__48347676 )
    {
      v19 = sub_1B64348(0LL);
      sub_1B641F0(v19, 0LL);
    }
  }
  if ( !LODWORD(v12[1].klass) )
    sub_1B6432C(Object_object__48347676, v9);
  v12[1].monitor = asset;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12[1].monitor, (int32_t)asset, v10, v11);
  this->fields.assetDatas = (struct AssetData_array *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetDatas, (int32_t)v12, v13, v14);
  Object_object__48347676 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_object__48347676 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v18, 0LL),
        !asset)
    || (Object_object__48347676 = (System_String_o *)AssetData__GetObject_object__48347676(
                                                       asset,
                                                       Object_object__48347676,
                                                       (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__48347676,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__48347676 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1B64324(Object_object__48347676);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__48347676, 0LL);
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
  AssetData_array *AssetStorage_37485472; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  struct WarBoardMasterPieceComponent_o *v11; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v14; // x8
  struct WarBoardMasterPieceComponent_o *v15; // x8
  struct AssetData_array *v16; // x8
  UnityEngine_Material_o *v17; // x20
  struct WarBoardMasterPieceComponent_o *v18; // x8

  if ( (byte_49F9F4F & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D___, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v4);
    byte_49F9F4F = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_37485472 = AssetManager__getAssetStorage_37485472(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_37485472;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.assetDatas, (int32_t)AssetStorage_37485472, v8, v9);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_21;
  assetDatas = v11->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_37485472 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_37485472 )
    goto LABEL_21;
  masterIcon = v11->fields.masterIcon;
  AssetStorage_37485472 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_37485472,
                                               (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_37485472 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_37485472,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v14 = this->fields.__4__this) == 0LL)
    || (AssetStorage_37485472 = (AssetData_array *)v14->fields.masterIcon) == 0LL
    || (AssetStorage_37485472 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_37485472->obj.klass->vtable[24].method)(
                                                     AssetStorage_37485472,
                                                     AssetStorage_37485472->obj.klass->vtable[25].methodPtr),
        (v15 = this->fields.__4__this) == 0LL)
    || (v16 = v15->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1B64324(AssetStorage_37485472);
  }
  if ( v16->max_length <= 1 )
LABEL_22:
    sub_1B6432C(AssetStorage_37485472, v10);
  v17 = (UnityEngine_Material_o *)AssetStorage_37485472;
  AssetStorage_37485472 = (AssetData_array *)v16->m_Items[1];
  if ( !AssetStorage_37485472 )
    goto LABEL_21;
  AssetStorage_37485472 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_37485472,
                                               (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v17 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v17,
    (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_37485472,
    0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_21;
  AssetStorage_37485472 = (AssetData_array *)v18->fields.masterIcon;
  if ( !AssetStorage_37485472 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_37485472, 0LL);
}