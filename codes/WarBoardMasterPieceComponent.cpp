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
  __int64 v9; // x1
  int64_t v10; // x1
  struct WarBoardMasterPieceComponent_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB206D & 1) == 0 )
  {
    sub_1C13D24(&WarBoardMasterPieceComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_19323/*"endPoint"*/, v8);
    sub_1C13D24(&StringLiteral_6154/*"Endroll"*/, v9);
    byte_4BB206D = 1;
  }
  WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6154/*"Endroll"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)WarBoardMasterPieceComponent_TypeInfo->static_fields,
    StringLiteral_6154/*"Endroll"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19323/*"endPoint"*/;
  static_fields = WarBoardMasterPieceComponent_TypeInfo->static_fields;
  static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19323/*"endPoint"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
    sub_1C13F80(masterIcon, method);
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
    sub_1C13F80(masterIcon, method);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UISprite_o *frameSprite; // x21
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x1
  struct UITexture_o *v18; // x20
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x21
  int32_t forceId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB2066 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, pieceData);
    sub_1C13D24(&UnityEngine_Material_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_5068/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/, v7);
    sub_1C13D24(&StringLiteral_6991/*"FrameInFinish"*/, v8);
    byte_4BB2066 = 1;
  }
  WarBoardPieceBaseComponent__Initialize((WarBoardPieceBaseComponent_o *)this, pieceData, method);
  if ( !pieceData )
    goto LABEL_12;
  frameSprite = this->fields.frameSprite;
  forceId_k__BackingField = pieceData->fields._forceId_k__BackingField;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &forceId_k__BackingField, v11, v12, v13);
  masterIcon = System_String__Format((System_String_o *)StringLiteral_6991/*"FrameInFinish"*/, v15, 0LL);
  if ( !frameSprite )
    goto LABEL_12;
  UISprite__set_spriteName(frameSprite, masterIcon, 0LL);
  masterIcon = (System_String_o *)this->fields.masterIcon;
  if ( !masterIcon )
    goto LABEL_12;
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._24_ToString.method)(
                                  masterIcon,
                                  masterIcon->klass->vtable._25_System_IConvertible_ToType.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
  {
    v18 = this->fields.masterIcon;
    v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5068/*"Custom/Sprite-ScriptActionFigureSummonCombine"*/, 0LL);
    v20 = (UnityEngine_Material_o *)sub_1C13F70(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v20, v19, 0LL);
    if ( v18 )
    {
      ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))v18->klass->vtable._25_set_material.method)(
        v18,
        v20,
        v18->klass->vtable._26_get_mainTexture.methodPtr);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C13F80(masterIcon, v10);
  }
LABEL_11:
  WarBoardMasterPieceComponent__SetMasterIcon(this, v17);
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
  __int64 v17; // x1
  const MethodInfo_374D684 *v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  WarBoardTaskBase_array *v30; // x23
  Il2CppObject *v31; // x24
  const MethodInfo_374D684 *v32; // x2
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x21
  Il2CppObject *v40; // x21
  PartyOrganizationUtility_o *v41; // x22
  System_Delegate_o *v42; // x23
  WarBoardTaskBase_TaskCallback_o *v43; // x24
  System_Delegate_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x8
  WarBoardTaskBase_TaskCallback_c *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct WarBoardTaskBase_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  Il2CppObject *v63; // x19
  char *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x0
  System_Nullable_Vector3__o v72; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_float__o v73; // 0:x3.8
  System_Nullable_float__o v74; // 0:x3.8
  System_Nullable_Vector3__o v75; // 0:x0.16
  System_Nullable_Vector3__o v76; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB2067 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, cameraSize);
    sub_1C13D24(&Method_System_Nullable_Vector3___ctor__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1C13D24(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1C13D24(&Method_WarBoardMasterPieceComponent__OnDead_b__11_0__, v12);
    sub_1C13D24(&WarBoardTaskBase___TypeInfo, v13);
    sub_1C13D24(&StringLiteral_9070/*"Maroon"*/, v14);
    byte_4BB2067 = 1;
  }
  if ( cameraMove )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( taskList )
    {
      transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( transform )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
        *(_QWORD *)&v75.fields.hasValue = &v72;
        *(_QWORD *)&v72.fields.hasValue = 0LL;
        *(_QWORD *)&v72.fields.value.fields.y = 0LL;
        *(_QWORD *)&v75.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        System_Nullable_Vector3____ctor(v75, localPosition, v18);
        if ( Instance )
        {
          v73 = cameraSize;
          transform = (char *)WarBoardManager__GetCameraPerformanceTask(
                                (WarBoardManager_o *)Instance,
                                v72,
                                v73,
                                1,
                                0,
                                1,
                                0LL);
          items = taskList->fields._items;
          v26 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
          ++taskList->fields._version;
          if ( items )
          {
            size = taskList->fields._size;
            v28 = (int64_t)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)transform,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
            goto LABEL_19;
          }
        }
      }
LABEL_37:
      sub_1C13F80(transform, v17);
    }
    v30 = (WarBoardTaskBase_array *)sub_1C13DCC(WarBoardTaskBase___TypeInfo, 1LL);
    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_37;
    v78 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    *(_QWORD *)&v76.fields.hasValue = &v72;
    v72 = (System_Nullable_Vector3__o)0LL;
    *(_QWORD *)&v76.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    System_Nullable_Vector3____ctor(v76, v78, v32);
    if ( !v31 )
      goto LABEL_37;
    v74 = cameraSize;
    transform = (char *)WarBoardManager__GetCameraPerformanceTask((WarBoardManager_o *)v31, v72, v74, 1, 0, 1, 0LL);
    if ( !v30 )
      goto LABEL_37;
    v39 = (int64_t)transform;
    if ( transform )
    {
      transform = (char *)sub_1C13E60(transform, v30->obj.klass->_1.element_class);
      if ( !transform )
        goto LABEL_39;
    }
    if ( !v30->max_length )
      goto LABEL_38;
    v30->m_Items[0] = (WarBoardTaskBase_o *)v39;
    sub_1C13CC8((PartyOrganizationUtility_o *)v30->m_Items, v39, v33, v34, v35, v36, v37, v38);
    if ( !Instance )
      goto LABEL_37;
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, v30, 0LL);
  }
LABEL_19:
  transform = (char *)WarBoardPieceBaseComponent__GetSimpleAnimationPerformance(
                        (WarBoardPieceBaseComponent_o *)this,
                        (System_String_o *)StringLiteral_9070/*"Maroon"*/,
                        (const MethodInfo *)taskList);
  if ( !transform )
    goto LABEL_37;
  v40 = (Il2CppObject *)transform;
  v41 = (PartyOrganizationUtility_o *)(transform + 40);
  v42 = (System_Delegate_o *)*((_QWORD *)transform + 5);
  v43 = (WarBoardTaskBase_TaskCallback_o *)sub_1C13F70(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v43,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__OnDead_b__11_0__,
    0LL);
  v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0LL);
  v51 = (int64_t)v44;
  if ( !v44 )
    goto LABEL_24;
  v52 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v44->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (v41->klass = (PartyOrganizationUtility_c *)v44, (WarBoardTaskBase_TaskCallback_c *)v44->klass != v52) )
  {
    sub_1C14240(v44);
LABEL_24:
    v41->klass = (PartyOrganizationUtility_c *)v51;
  }
  sub_1C13CC8(v41, v51, v45, v46, v47, v48, v49, v50);
  if ( taskList )
  {
    v59 = taskList->fields._items;
    v60 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( !v59 )
      goto LABEL_37;
    v61 = taskList->fields._size;
    if ( (unsigned int)v61 >= v59->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)taskList,
        v40,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &v59->obj.klass + v61;
      taskList->fields._size = v61 + 1;
      v62[4] = (Il2CppClass *)v40;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v62 + 4), (int64_t)v40, v53, v54, v55, v56, v57, v58);
    }
    goto LABEL_35;
  }
  v63 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  transform = (char *)sub_1C13DCC(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !transform )
    goto LABEL_37;
  v64 = transform;
  transform = (char *)sub_1C13E60(v40, *(_QWORD *)(*(_QWORD *)transform + 64LL));
  if ( !transform )
  {
LABEL_39:
    v71 = sub_1C13FA4();
    sub_1C13E4C(v71, 0LL);
  }
  if ( !*((_DWORD *)v64 + 6) )
LABEL_38:
    sub_1C13F88(transform, v17);
  *((_QWORD *)v64 + 4) = v40;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v64 + 32), (int64_t)v40, v65, v66, v67, v68, v69, v70);
  if ( !v63 )
    goto LABEL_37;
  WarBoardManager__InsertTask((WarBoardManager_o *)v63, 0, (WarBoardTaskBase_array *)v64, 0LL);
LABEL_35:
  transform = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_4BB206C & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    byte_4BB206C = 1;
  }
  assetDatas = this->fields.assetDatas;
  if ( assetDatas )
  {
    p_assetDatas = (PartyOrganizationUtility_o *)&this->fields.assetDatas;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38935528(assetDatas, 0LL);
    p_assetDatas->klass = 0LL;
    sub_1C13CC8(p_assetDatas, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x1
  struct WarBoardPieceData_o *pieceData; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  Il2CppObject *v18; // x22
  const MethodInfo_374D684 *v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *v31; // x22
  const MethodInfo *v32; // x2
  struct WarBoardPieceData_o *v33; // x8
  __int64 v34; // x27
  struct WarBoardBreakPointComponent_array *breakPoints; // x9
  WarBoardParallelSchedule_o *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_float__o v48; // 0:x3.8
  System_Nullable_Vector3__o v49; // 0:x0.16
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB2068 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, taskList);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_1C13D24(&Method_System_Nullable_Vector3___ctor__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_1C13D24(&WarBoardParallelSchedule_TypeInfo, v10);
    byte_4BB2068 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v51, 0LL);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  Instance = (WarBoardManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  *(_QWORD *)&v49.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v49.fields.hasValue = &v47;
  *(_QWORD *)&v47.fields.hasValue = 0LL;
  *(_QWORD *)&v47.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v49, localPosition, v19);
  if ( !v18 )
    goto LABEL_24;
  v48 = 0LL;
  Instance = (WarBoardManager_o *)WarBoardManager__GetCameraPerformanceTask(
                                    (WarBoardManager_o *)v18,
                                    v47,
                                    v48,
                                    1,
                                    0,
                                    1,
                                    0LL);
  if ( !v11 )
    goto LABEL_24;
  items = v11->fields._items;
  v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_24;
  size = v11->fields._size;
  v29 = (int64_t)Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)Instance,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v29;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), v29, v20, v21, v22, v23, v24, v25);
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v33 = this->fields.pieceData;
  if ( !v33 )
    goto LABEL_24;
  v34 = 0LL;
  while ( (int)v34 < v33->fields._breakPointMax_k__BackingField )
  {
    breakPoints = this->fields.breakPoints;
    if ( breakPoints )
    {
      if ( (unsigned int)v34 >= breakPoints->max_length )
        sub_1C13F88(Instance, v13);
      Instance = (WarBoardManager_o *)breakPoints->m_Items[v34];
      if ( Instance )
      {
        if ( !HIBYTE(Instance->fields.cutInRoot) )
        {
          WarBoardBreakPointComponent__ShowMasterRechargeEffect(
            (WarBoardBreakPointComponent_o *)Instance,
            (System_Collections_Generic_List_WarBoardTaskBase__o *)v31,
            v32);
          v33 = this->fields.pieceData;
        }
        ++v34;
        if ( v33 )
          continue;
      }
    }
    goto LABEL_24;
  }
  v36 = (WarBoardParallelSchedule_o *)sub_1C13F70(WarBoardParallelSchedule_TypeInfo);
  WarBoardParallelSchedule___ctor_36788052(v36, (System_Collections_Generic_List_WarBoardTaskBase__o *)v31, 0LL);
  v43 = v11->fields._items;
  v44 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v11->fields._version;
  if ( !v43 )
LABEL_24:
    sub_1C13F80(Instance, v13);
  v45 = v11->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v36,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    if ( taskList )
      goto LABEL_28;
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v11->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v36;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v36, v37, v38, v39, v40, v41, v42);
    if ( taskList )
    {
LABEL_28:
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)taskList,
        (System_Collections_Generic_IEnumerable_T__o *)v11,
        (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
      goto LABEL_32;
    }
  }
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  WarBoardManager__InsertTask_36574336(Instance, 0, (System_Collections_Generic_List_WarBoardTaskBase__o *)v11, 0LL);
LABEL_32:
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C13F80(0LL, remain);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB206B & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&int_TypeInfo, v3);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v4);
    sub_1C13D24(&Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__, v5);
    sub_1C13D24(&WarBoardMasterPieceComponent_TypeInfo, v6);
    byte_4BB206B = 1;
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
    sub_1C13F80(commandSpellIconRoot, method);
  ENEMY_MASTER_FACE_ASSET_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_ASSET_NAME;
  iconId_k__BackingField = pieceData->fields._iconId_k__BackingField;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v8, v9, v10);
  v14 = System_String__Format(ENEMY_MASTER_FACE_ASSET_NAME, v13, 0LL);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardMasterPieceComponent__SetEnemyMasterIcon_b__17_0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v14, v15, 1, 0LL);
}


void __fastcall WarBoardMasterPieceComponent__SetMasterIcon(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *pieceData; // x0
  const MethodInfo *v4; // x1

  pieceData = this->fields.pieceData;
  if ( !pieceData )
    sub_1C13F80(0LL, method);
  if ( WarBoardPieceData__get_isPlayerMaster(pieceData, 0LL) )
    WarBoardMasterPieceComponent__SetPlayerMasterIcon(this, v4);
  else
    WarBoardMasterPieceComponent__SetEnemyMasterIcon(this, v4);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  CommandSpellIconComponent_o *commandSpellIconComponent; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_array *AssetName; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_array *v24; // x20
  System_Action_o *v25; // x21

  if ( (byte_4BB206A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AssetManager_TypeInfo, v3);
    sub_1C13D24(&Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__, v4);
    sub_1C13D24(&WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo, v5);
    byte_4BB206A = 1;
  }
  v6 = sub_1C13F70(WarBoardMasterPieceComponent___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_15;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)this, v9, v10, v11, v12, v13, v14);
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
    sub_1C13F80(commandSpellIconRoot, v8);
  }
  AssetName = MasterFaceManager__GetAssetName(
                1,
                *((_DWORD *)commandSpellIconRoot + 19),
                pieceData->fields._iconId_k__BackingField,
                0LL);
  *(_QWORD *)(v6 + 24) = AssetName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v6 + 24), (int64_t)AssetName, v18, v19, v20, v21, v22, v23);
  v24 = *(System_String_array **)(v6 + 24);
  v25 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v6,
    Method_WarBoardMasterPieceComponent___c__DisplayClass16_0__SetPlayerMasterIcon_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38941952(v24, v25, 1, 0LL);
}


bool __fastcall WarBoardMasterPieceComponent__ShowStatus(
        WarBoardMasterPieceComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BB2069 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BB2069 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v3);
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
    sub_1C13F80(0LL, v3);
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
  System_String_o *Object_object__49747248; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct UITexture_o *masterIcon; // x21
  struct WarBoardPieceData_o *pieceData; // x8
  System_String_o *ENEMY_MASTER_FACE_TEXTURE_NAME; // x22
  Il2CppObject *v29; // x0
  __int64 v30; // x0
  int32_t iconId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB206E & 1) == 0 )
  {
    sub_1C13D24(&AssetData___TypeInfo, asset);
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D____77466824, v5);
    sub_1C13D24(&int_TypeInfo, v6);
    sub_1C13D24(&WarBoardMasterPieceComponent_TypeInfo, v7);
    byte_4BB206E = 1;
  }
  Object_object__49747248 = (System_String_o *)sub_1C13DCC(AssetData___TypeInfo, 1LL);
  if ( !Object_object__49747248 )
    goto LABEL_14;
  v16 = (int64_t)Object_object__49747248;
  if ( asset )
  {
    Object_object__49747248 = (System_String_o *)sub_1C13E60(asset, Object_object__49747248->klass->_1.element_class);
    if ( !Object_object__49747248 )
    {
      v30 = sub_1C13FA4();
      sub_1C13E4C(v30, 0LL);
    }
  }
  if ( !*(_DWORD *)(v16 + 24) )
    sub_1C13F88(Object_object__49747248, v9);
  *(_QWORD *)(v16 + 32) = asset;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)asset, v10, v11, v12, v13, v14, v15);
  this->fields.assetDatas = (struct AssetData_array *)v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.assetDatas, v16, v17, v18, v19, v20, v21, v22);
  Object_object__49747248 = (System_String_o *)WarBoardMasterPieceComponent_TypeInfo;
  masterIcon = this->fields.masterIcon;
  if ( !WarBoardMasterPieceComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardMasterPieceComponent_TypeInfo);
  pieceData = this->fields.pieceData;
  if ( !pieceData
    || (ENEMY_MASTER_FACE_TEXTURE_NAME = WarBoardMasterPieceComponent_TypeInfo->static_fields->ENEMY_MASTER_FACE_TEXTURE_NAME,
        iconId_k__BackingField = pieceData->fields._iconId_k__BackingField,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId_k__BackingField, v23, v24, v25),
        Object_object__49747248 = System_String__Format(ENEMY_MASTER_FACE_TEXTURE_NAME, v29, 0LL),
        !asset)
    || (Object_object__49747248 = (System_String_o *)AssetData__GetObject_object__49747248(
                                                       asset,
                                                       Object_object__49747248,
                                                       (const MethodInfo_2F71530 *)Method_AssetData_GetObject_Texture2D____77466824),
        !masterIcon)
    || (((void (__fastcall *)(struct UITexture_o *, System_String_o *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
          masterIcon,
          Object_object__49747248,
          masterIcon->klass->vtable._28_get_shader.methodPtr),
        (Object_object__49747248 = (System_String_o *)this->fields.masterIcon) == 0LL) )
  {
LABEL_14:
    sub_1C13F80(Object_object__49747248, v9);
  }
  UIWidget__SetDirty((UIWidget_o *)Object_object__49747248, 0LL);
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
  AssetData_array *AssetStorage_38943328; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct WarBoardMasterPieceComponent_o *v15; // x8
  struct AssetData_array *assetDatas; // x9
  struct UITexture_o *masterIcon; // x20
  struct WarBoardMasterPieceComponent_o *v18; // x8
  struct WarBoardMasterPieceComponent_o *v19; // x8
  struct AssetData_array *v20; // x8
  UnityEngine_Material_o *v21; // x20
  struct WarBoardMasterPieceComponent_o *v22; // x8

  if ( (byte_4BB206F & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D___, method);
    sub_1C13D24(&AssetManager_TypeInfo, v3);
    sub_1C13D24(&StringLiteral_16520/*"_L"*/, v4);
    byte_4BB206F = 1;
  }
  _4__this = this->fields.__4__this;
  loadAssets = this->fields.loadAssets;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage_38943328 = AssetManager__getAssetStorage_38943328(loadAssets, 0LL);
  if ( !_4__this )
    goto LABEL_21;
  _4__this->fields.assetDatas = AssetStorage_38943328;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&_4__this->fields.assetDatas,
    (int64_t)AssetStorage_38943328,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_21;
  assetDatas = v15->fields.assetDatas;
  if ( !assetDatas )
    goto LABEL_21;
  if ( !assetDatas->max_length )
    goto LABEL_22;
  AssetStorage_38943328 = (AssetData_array *)assetDatas->m_Items[0];
  if ( !AssetStorage_38943328 )
    goto LABEL_21;
  masterIcon = v15->fields.masterIcon;
  AssetStorage_38943328 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_38943328,
                                               (const MethodInfo_2F71428 *)Method_AssetData_GetObject_Texture2D___);
  if ( !masterIcon
    || (AssetStorage_38943328 = (AssetData_array *)((__int64 (__fastcall *)(struct UITexture_o *, AssetData_array *, Il2CppMethodPointer))masterIcon->klass->vtable._27_set_mainTexture.method)(
                                                     masterIcon,
                                                     AssetStorage_38943328,
                                                     masterIcon->klass->vtable._28_get_shader.methodPtr),
        (v18 = this->fields.__4__this) == 0LL)
    || (AssetStorage_38943328 = (AssetData_array *)v18->fields.masterIcon) == 0LL
    || (AssetStorage_38943328 = (AssetData_array *)((__int64 (__fastcall *)(AssetData_array *, Il2CppMethodPointer))AssetStorage_38943328->obj.klass->vtable[24].method)(
                                                     AssetStorage_38943328,
                                                     AssetStorage_38943328->obj.klass->vtable[25].methodPtr),
        (v19 = this->fields.__4__this) == 0LL)
    || (v20 = v19->fields.assetDatas) == 0LL )
  {
LABEL_21:
    sub_1C13F80(AssetStorage_38943328, v8);
  }
  if ( v20->max_length <= 1 )
LABEL_22:
    sub_1C13F88(AssetStorage_38943328, v8);
  v21 = (UnityEngine_Material_o *)AssetStorage_38943328;
  AssetStorage_38943328 = (AssetData_array *)v20->m_Items[1];
  if ( !AssetStorage_38943328 )
    goto LABEL_21;
  AssetStorage_38943328 = (AssetData_array *)AssetData__GetObject_object_(
                                               (AssetData_o *)AssetStorage_38943328,
                                               (const MethodInfo_2F71428 *)Method_AssetData_GetObject_Texture2D___);
  if ( !v21 )
    goto LABEL_21;
  UnityEngine_Material__SetTexture(
    v21,
    (System_String_o *)StringLiteral_16520/*"_L"*/,
    (UnityEngine_Texture_o *)AssetStorage_38943328,
    0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_21;
  AssetStorage_38943328 = (AssetData_array *)v22->fields.masterIcon;
  if ( !AssetStorage_38943328 )
    goto LABEL_21;
  UIWidget__SetDirty((UIWidget_o *)AssetStorage_38943328, 0LL);
}