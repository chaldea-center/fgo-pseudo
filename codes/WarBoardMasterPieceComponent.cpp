void __fastcall WarBoardMasterPieceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13BC0 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardMasterPieceComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19221/*"enemyMstFace{0:d5}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v10, v11);
    byte_4B13BC0 = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_19221/*"enemyMstFace{0:d5}"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19221/*"enemyMstFace{0:d5}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
    sub_1BCAA3C(masterIcon, method);
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
    sub_1BCAA3C(masterIcon, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *masterIcon; // x0
  __int64 v14; // x1
  UISprite_o *frameSprite; // x21
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  const MethodInfo *v19; // x1
  struct UITexture_o *v20; // x20
  UnityEngine_Shader_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  UnityEngine_Material_o *v25; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13BB9 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, pieceData, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_6953/*"Frame{0}"*/, v11, v12);
    byte_4B13BB9 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6953/*"Frame{0}"*/, v16, 0LL);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v18 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_ToString.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_IConvertible_ToType.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
  {
    v20 = this->fields.masterIcon;
    v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
    v25 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
    UnityEngine_Material___ctor(v25, v21, 0LL);
    if ( v20 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v20->klass->vtable._25_set_material.method)(
        v20,
        v25,
        v20->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(masterIcon, v14);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v19);
}


void __fastcall WarBoardMasterPieceComponent__OnDead(
        WarBoardMasterPieceComponent_o *this,
        System_Nullable_float__o cameraSize,
        WarBoardManager_TaskList_o *taskList,
        bool cameraMove,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x22
  char *transform; // x0
  __int64 v23; // x1
  const MethodInfo_36C2D28 *v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  int64_t v34; // x1
  Il2CppClass **v35; // x0
  WarBoardTaskBase_array *v36; // x23
  Il2CppObject *v37; // x24
  const MethodInfo_36C2D28 *v38; // x2
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *v48; // x21
  PartyOrganizationUtility_o *v49; // x22
  System_Delegate_o *v50; // x23
  WarBoardTaskBase_TaskCallback_o *v51; // x24
  System_Delegate_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x8
  WarBoardTaskBase_TaskCallback_c *v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct WarBoardTaskBase_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  Il2CppObject *v71; // x19
  char *v72; // x20
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  __int64 v79; // x0
  System_Nullable_Vector3__o v80; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v81; // 0:x3.8
  System_Nullable_float__o v82; // 0:x3.8
  System_Nullable_Vector3__o v83; // 0:x0.16
  System_Nullable_Vector3__o v84; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13BBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize, taskList);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v15, v16);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_9025/*"MasterBreak"*/, v19, v20);
    byte_4B13BBA = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v83.fields.hasValue = &v80;
        *(_QWORD *)&v80.fields.hasValue = 0LL;
        *(_QWORD *)&v80.fields.value.fields.y = 0LL;
        *(_QWORD *)&v83.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v83, localPosition, v24);
        if ( Instance )
        {
          v81 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v80,
                                v81,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v34 = (int64_t)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v34;
              sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), v34, v25, v26, v27, v28, v29, v30);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1BCAA3C(transform, v23);
    }
    v36 = (WarBoardTaskBase_array *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    v37 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v86 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v84.fields.hasValue = &v80;
    v80 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v84.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v84, v86, v38);
    if ( !v37 )
      goto LABEL_37;
    v82 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v37, v80, v82, 1, 0, 1, 0LL);
    if ( !v36 )
      goto LABEL_37;
    v45 = (int64_t)transform;
    if ( transform )
    {
      transform = (char *)sub_1BCA91C(transform, v36->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v36->max_length )
      goto LABEL_38;
    v36->m_Items[0] = (WarBoardTaskBase_o *)v45;
    sub_1BCA784((PartyOrganizationUtility_o *)v36->m_Items, v45, v39, v40, v41, v42, v43, v44);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v36, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_9025/*"MasterBreak"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v48 = (Il2CppObject *)transform;
  v49 = (PartyOrganizationUtility_o *)(transform + 40);
  v50 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v51 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v23, v46, v47);
  WarBoardTaskBase_TaskCallback___ctor(
    v51,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v52 = System_Delegate__Combine(v50, (System_Delegate_o *)v51, 0LL);
  v59 = (int64_t)v52;
  if ( !v52 )
    goto LABEL_24;
  v60 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v52->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v49->klass = (PartyOrganizationUtility_c *)v52, (WarBoardTaskBase_TaskCallback_c *)v52->klass != v60) )
  {
    sub_1BCACFC(v52);
LABEL_24:
    v49->klass = (PartyOrganizationUtility_c *)v59;
  }
  sub_1BCA784(v49, v59, v53, v54, v55, v56, v57, v58);
  if ( taskList )
  {
    v67 = taskList->fields._items;
    v68 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v67 )
      goto LABEL_37;
    v69 = taskList->fields._size;
    if ( (unsigned int)v69 >= v67->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v48,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->obj.klass + v69;
      taskList->fields._size = v69 + 1;
      v70[4] = (Il2CppClass *)v48;
      sub_1BCA784((PartyOrganizationUtility_o *)(v70 + 4), (int64_t)v48, v61, v62, v63, v64, v65, v66);
    }
    goto LABEL_35;
  }
  v71 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v72 = transform;
  transform = (char *)sub_1BCA91C(v48, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v79 = sub_1BCAA60();
    sub_1BCA908(v79, 0LL);
  }
  if ( !*((_DWORD *)v72 + 6) )
LABEL_38:
    sub_1BCAA44(transform, v23);
  *((_QWORD *)v72 + 4) = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)v48, v73, v74, v75, v76, v77, v78);
  if ( !v71 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v71, 0, (WarBoardTaskBase_array *)v72, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !transform )
    goto LABEL_37;
  WarBoardManager__UpdateAlivePiecesWidgetDepth((WarBoardManager_o *)transform, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__OnDestroy(WarBoardMasterPieceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_array *assetDatas; // x19
  PartyOrganizationUtility_o *p_assetDatas; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B13BBF & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B13BBF = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (PartyOrganizationUtility_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_38505912(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1BCA784(p_assetDatas, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall WarBoardMasterPieceComponent__OnRevive(
        WarBoardMasterPieceComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v20; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v25; // x22
  const MethodInfo_36C2D28 *v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  int64_t v36; // x1
  Il2CppClass **v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x22
  const MethodInfo *v42; // x2
  __int64 v43; // x3
  struct WarBoardPieceData_o *v44; // x8
  __int64 v45; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  System_Nullable_Vector3__o v58; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v59; // 0:x3.8
  System_Nullable_Vector3__o v60; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13BBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&WarBoardParallelSchedule_TypeInfo, v16, v17);
    byte_4B13BBB = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       taskList,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v62.fields.x = x;
  v62.fields.y = y;
  v62.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v62, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v60.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v60.fields.hasValue = &v58;
  *(_QWORD *)&v58.fields.hasValue = 0LL;
  *(_QWORD *)&v58.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v60, localPosition, v26);
  if ( !v25 )
    goto LABEL_24;
  v59 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v25,
                                    v58,
                                    v59,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v18 )
    goto LABEL_24;
  items = v18->fields._items;
  v34 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v18->fields._size;
  v36 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v36;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v36, v27, v28, v29, v30, v31, v32);
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v44 = this->fields.pieceData;
  if ( !v44 )
    goto LABEL_24;
  v45 = 0LL;
  while ( (int)v45 < v44->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v45 >= breakPoints->max_length )
        sub_1BCAA44(Instance, v20);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v45];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v41,
            v42);
          v44 = this->fields.pieceData;
        }
        ++v45;
        if ( v44 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v47 = (WarBoardParallelSchedule_o *)sub_1BCAA2C(WarBoardParallelSchedule_TypeInfo, v20, v42, v43);
  WarBoardParallelSchedule___ctor_36387696(v47, (System_Collections_Generic_List_WarBoardTaskBase__o *)v41, 0LL);
  v54 = v18->fields._items;
  v55 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v18->fields._version;
  if ( !v54 )
LABEL_24:
    sub_1BCAA3C(Instance, v20);
  v56 = v18->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)v47,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v18->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v47;
    sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v18,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_36174040(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v18, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__UpdateAlivePiecesWidgetDepth(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMasterPieceComponent__SetCommandSpellRemain(
        WarBoardMasterPieceComponent_o *this,
        int32_t remain,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *commandSpellIconComponent; // x0

  commandSpellIconComponent = this->fields.commandSpellIconComponent;
  if ( !commandSpellIconComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&remain);
  CommandSpellIconComponent__SetRemain(commandSpellIconComponent, remain, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetEnemyMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *commandSpellIconRoot; // x0
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AssetLoader_LoadEndDataHandler_o *v20; // x21
  __int64 v21; // x1
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B13BBE & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v8, v9);
    sub_1BCA7E0(&WarBoardMasterPieceComponent_TypeInfo, v10, v11);
    byte_4B13BBE = 1;
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
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo, method);
  pieceData = this->fields.pieceData;
  if ( !pieceData )
LABEL_14:
    sub_1BCAA3C(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField);
  v16 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v15, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18, v19);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
  AssetManager__loadAssetStorage(v16, v20, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1BCAA3C(0LL, method);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  void *commandSpellIconRoot; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_array *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x21
  __int64 v34; // x1

  if ( (byte_4B13BBD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v7, v8);
    sub_1BCA7E0(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v9, v10);
    byte_4B13BBD = 1;
  }
  v11 = sub_1BCAA2C(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
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
    sub_1BCAA3C(commandSpellIconRoot, v13);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v11 + 24) = AssetName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)AssetName, v23, v24, v25, v26, v27, v28);
  v29 = *(System_String_array **)(v11 + 24);
  v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v11,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v34);
  AssetManager__loadAssetStorage_38512336(v29, v33, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B13BBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BBC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall WarBoardMasterPieceComponent___SetEnemyMasterIcon_b__17_0(
        WarBoardMasterPieceComponent_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *Object_object__49237568; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v29; // x0
  __int64 v30; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13BC1 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetData___TypeInfo, asset, method);
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&WarBoardMasterPieceComponent_TypeInfo, v9, v10);
    byte_4B13BC1 = 1;
  }
  Object_object__49237568 = (System_String_o *)sub_1BCA888(AssetData___TypeInfo, 1LL);
  if ( !Object_object__49237568 )
    goto LABEL_14;
  v19 = (int64_t)Object_object__49237568;
  if ( asset )
  {
    Object_object__49237568 = (System_String_o *)sub_1BCA91C(asset, Object_object__49237568->klass->_1.element_class);
    if ( !Object_object__49237568 )
    {
      v30 = sub_1BCAA60();
      sub_1BCA908(v30, 0LL);
    }
  }
  if ( !*(_DWORD *)(v19 + 24) )
    sub_1BCAA44(Object_object__49237568, v12);
  *(_QWORD *)(v19 + 32) = asset;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)asset, v13, v14, v15, v16, v17, v18);
  this->fields.assetDatas = (struct AssetData_array *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetDatas, v19, v20, v21, v22, v23, v24, v25);
  Object_object__49237568 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo, v12);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField),
        Object_object__49237568 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v29, 0LL),
        !asset)
    || (Object_object__49237568 = (System_String_o *)AssetData__GetObject_object__49237568(
                                                       asset,
                                                       Object_object__49237568,
                                                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__49237568,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__49237568 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(Object_object__49237568, v12);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__49237568, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_array *loadAssets; // x20
  struct WarBoardMasterPieceComponent_o *_4__this; // x21
  AssetData_array *AssetStorage_38513712; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v21; // x8
  struct WarBoardMasterPieceComponent_o *v22; // x8
  struct AssetData_array *v23; // x8
  UnityEngine_Material_o *v24; // x20
  struct WarBoardMasterPieceComponent_o *v25; // x8

  if ( (byte_4B13BC2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D___, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v6, v7);
    byte_4B13BC2 = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage_38513712 = AssetManager__getAssetStorage_38513712(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_38513712;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetDatas,
    (int64_t)AssetStorage_38513712,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_21;
  assetDatas = v18->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_38513712 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_38513712 )
    goto LABEL_21;
  masterIcon = v18->fields.masterIcon;
  AssetStorage_38513712 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_38513712,
                                               (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_38513712 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_38513712,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v21 = this->fields.__4__this) == 0LL)
    || (AssetStorage_38513712 = (AssetData_array *)v21->fields.masterIcon) == 0LL
    || (AssetStorage_38513712 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_38513712->obj.klass->vtable[24].method)(
                                                     AssetStorage_38513712,
                                                     AssetStorage_38513712->obj.klass->vtable[25].methodPtr),
        (v22 = this->fields.__4__this) == 0LL)
    || (v23 = v22->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(AssetStorage_38513712, v11);
  }
  if ( v23->max_length <= 1 )
LABEL_22:
    sub_1BCAA44(AssetStorage_38513712, v11);
  v24 = (UnityEngine_Material_o *)AssetStorage_38513712;
  AssetStorage_38513712 = (AssetData_array *)v23->m_Items[1];
  if ( !AssetStorage_38513712 )
    goto LABEL_21;
  AssetStorage_38513712 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_38513712,
                                               (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v24 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v24,
    (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)AssetStorage_38513712,
    0LL);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_21;
  AssetStorage_38513712 = (AssetData_array *)v25->fields.masterIcon;
  if ( !AssetStorage_38513712 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_38513712, 0LL);
}