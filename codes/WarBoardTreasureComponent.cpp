void WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CC4CF0 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardTreasureComponent_TypeInfo);
    byte_4CC4CF0 = 1;
  }
  WarBoardTreasureComponent_TypeInfo->static_fields->RARITY_TYPE = 3;
}


void WarBoardTreasureComponent___ctor(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_String_o *WarBoardTreasureComponent__GetAnimationNameByRarity(
        WarBoardTreasureComponent_o *this,
        const MethodInfo *method)
{
  WarBoardTreasureData_o *treasureData; // x0
  int v4; // w8
  System_String_o **v5; // x8

  if ( (byte_4CC4CEF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13030/*"SrareTreasureGet"*/);
    sub_1C713B0(&StringLiteral_4596/*"CommonTreasureGet"*/);
    sub_1C713B0(&StringLiteral_11192/*"RareTreasureGetPlus2"*/);
    sub_1C713B0(&StringLiteral_13032/*"SrareTreasureGetPlus2"*/);
    sub_1C713B0(&StringLiteral_13031/*"SrareTreasureGetPlus"*/);
    sub_1C713B0(&StringLiteral_11190/*"RareTreasureGet"*/);
    sub_1C713B0(&StringLiteral_4598/*"CommonTreasureGetPlus2"*/);
    sub_1C713B0(&StringLiteral_4597/*"CommonTreasureGetPlus"*/);
    sub_1C713B0(&StringLiteral_11191/*"RareTreasureGetPlus"*/);
    byte_4CC4CEF = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C71608(0, method);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0) - 1;
  if ( (unsigned int)v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4596/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_46E10F0 + v4);
  return *v5;
}


void WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  WarBoardTreasureComponent_c *v21; // x8
  int32_t v22; // w21
  Il2CppObject *v23; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v25; // x8
  UnityEngine_Transform_array *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  UnityEngine_Transform_o *v33; // x21
  const MethodInfo *v34; // x2
  struct WarBoardTreasureData_o *v35; // x8
  __int64 v36; // x0
  int v37; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC4CE9 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&UnityEngine_Transform___TypeInfo);
    sub_1C713B0(&WarBoardTreasureComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_20263/*"icon_drop_item_L_{0:00}"*/);
    byte_4CC4CE9 = 1;
  }
  this->fields.treasureData = data;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.treasureData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(treasureData + 48), (int32_t)this, v12, v13, v14, v15, v16, v17);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0);
  v21 = WarBoardTreasureComponent_TypeInfo;
  v22 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v21 = WarBoardTreasureComponent_TypeInfo;
  }
  v37 = v22 % v21->static_fields->RARITY_TYPE + 1;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20263/*"icon_drop_item_L_{0:00}"*/, v23, 0);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v25 = this->fields.treasureData;
  if ( !v25 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)treasureData,
                     v25->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v26 = (UnityEngine_Transform_array *)sub_1C71458(UnityEngine_Transform___TypeInfo, 1);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v26 )
    goto LABEL_19;
  v33 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1C714EC(treasureData, v26->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v36 = sub_1C7162C();
      sub_1C714D8(v36, 0);
    }
  }
  if ( !LODWORD(v26->max_length) )
    sub_1C71610(treasureData);
  v26->m_Items[0] = v33;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v26->m_Items, (int32_t)v33, v27, v28, v29, v30, v31, v32);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v26, v34);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v35 = this->fields.treasureData;
  if ( !v35 || !treasureData )
LABEL_19:
    sub_1C71608(treasureData, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v35->fields._isUse_k__BackingField, 0);
  this->fields.isSelectable = 0;
}


void WarBoardTreasureComponent__OnClick(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  WarBoardTreasureComponent_o *v2; // x19
  struct WarBoardTreasureData_o *treasureData; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  intptr_t m_CachedPtr; // x8
  struct WarBoardTreasureData_o *v7; // x8

  v2 = this;
  if ( (byte_4CC4CED & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_1C713B0(&Method_WarBoardTreasureComponent_OnClick__);
    byte_4CC4CED = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
    {
      v4 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C713C8(Method_WarBoardTreasureComponent_OnClick__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        m_CachedPtr = this[5].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(m_CachedPtr + 24), 0, 0);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v7 = v2->fields.treasureData;
          if ( v7 )
          {
            if ( this )
            {
              WarBoardManager__SelectedPieceAction(
                (WarBoardManager_o *)this,
                v7->fields._squareIndex_k__BackingField,
                0);
              return;
            }
          }
        }
      }
LABEL_16:
      sub_1C71608(this, method);
    }
  }
}


void WarBoardTreasureComponent__OnUse(
        WarBoardTreasureComponent_o *this,
        int32_t squareIndex,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v6; // x20
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  WarBoardMessageMaster_o *v36; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v39; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v41; // x21
  System_Delegate_o **v42; // x22
  System_Delegate_o *v43; // x23
  WarBoardTaskBase_TaskCallback_o *v44; // x24
  System_Delegate_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Delegate_o *v52; // x8
  WarBoardTaskBase_TaskCallback_c *v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x21
  WarBoardTaskBase_TaskCallback_o *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0

  if ( (byte_4CC4CEE & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_1C713B0(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_1C713B0(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C713B0(&WarBoardCallbackTask_TypeInfo);
    sub_1C713B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4CC4CEE = 1;
  }
  v6 = sub_1C715FC(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_32;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)endCallback, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v6 + 40) = playedStageReinforcementsList;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)(v6 + 40),
    (int32_t)playedStageReinforcementsList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 32), (int32_t)Master_object, v30, v31, v32, v33, v34, v35);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_32;
  v36 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0);
  if ( !v36 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v36, (int32_t)Instance, 5, 0, 0, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0, 0);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v39);
  v41 = sub_1C715FC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v41,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0);
  if ( !v41 )
LABEL_32:
    sub_1C71608(Instance, v8);
  v42 = (System_Delegate_o **)(v41 + 40);
  v43 = *(System_Delegate_o **)(v41 + 40);
  v44 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v44,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0);
  v45 = System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0);
  v52 = v45;
  if ( v45 )
  {
    v53 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v42 = v45;
      if ( (WarBoardTaskBase_TaskCallback_c *)v45->klass == v53 )
        goto LABEL_20;
    }
    sub_1C719A4(v45);
  }
  *v42 = v52;
LABEL_20:
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v41 + 40), (int32_t)v52, v46, v47, v48, v49, v50, v51);
  if ( !v21 )
    goto LABEL_32;
  items = v21->fields._items;
  v61 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v21->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v41,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
  }
  else
  {
    v63 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v63[4] = (Il2CppClass *)v41;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v63 + 4), v41, v54, v55, v56, v57, v58, v59);
  }
  v64 = sub_1C715FC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v64, 0, 0);
  v65 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v65,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0);
  if ( !v64 )
    goto LABEL_32;
  *(_QWORD *)(v64 + 32) = v65;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v64 + 32), (int32_t)v65, v66, v67, v68, v69, v70, v71);
  v78 = v21->fields._items;
  v79 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v78 )
    goto LABEL_32;
  v80 = v21->fields._size;
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v64,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v78->obj.klass + v80;
    v21->fields._size = v80 + 1;
    v81[4] = (Il2CppClass *)v64;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v81 + 4), v64, v72, v73, v74, v75, v76, v77);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_38334132(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v21,
    0);
}


void WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C71608(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 1;
}


void WarBoardTreasureComponent__SetButtonTweenTarget(
        WarBoardTreasureComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v22; // x1
  Il2CppClass **v23; // x0
  struct UICommonButton_o *button; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC4CEA & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CEA = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v10 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_24;
      }
      v11 = 0;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v20 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v22 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v22;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C71610(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C71608(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4CC4CEC & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CEC = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C71608(0, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


void WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4CC4CEB & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4CEB = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C71608(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C71608(this, method);
  if ( !treasureData->fields._isUse_k__BackingField )
    this->fields.isSelectable = 0;
}


void WarBoardTreasureComponent___c__DisplayClass13_0___ctor(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_b__1(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0

  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0 )
    sub_1C71608(_4__this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.endCallback, 0);
}


void WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4CC4CF1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC4CF1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    goto LABEL_11;
  messageMaster = this->fields.messageMaster;
  warBoardData = (WarBoardData_o *)WarBoardData__get_id(warBoardData, 0);
  if ( !messageMaster )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)WarBoardMessageMaster__GetMessageTasks(
                                     messageMaster,
                                     (int32_t)warBoardData,
                                     6,
                                     0,
                                     0,
                                     0);
  if ( !v3 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)warBoardData,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0);
      return;
    }
LABEL_11:
    sub_1C71608(warBoardData, v4);
  }
}