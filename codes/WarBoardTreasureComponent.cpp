void WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_596E053 & 1) == 0 )
  {
    sub_2213A60(&WarBoardTreasureComponent_TypeInfo);
    byte_596E053 = 1;
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
  unsigned int v4; // w8
  System_String_o **v5; // x8

  if ( (byte_596E052 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13569/*"SrareTreasureGet"*/);
    sub_2213A60(&StringLiteral_4780/*"CommonTreasureGet"*/);
    sub_2213A60(&StringLiteral_11676/*"RareTreasureGetPlus2"*/);
    sub_2213A60(&StringLiteral_13571/*"SrareTreasureGetPlus2"*/);
    sub_2213A60(&StringLiteral_13570/*"SrareTreasureGetPlus"*/);
    sub_2213A60(&StringLiteral_11674/*"RareTreasureGet"*/);
    sub_2213A60(&StringLiteral_4782/*"CommonTreasureGetPlus2"*/);
    sub_2213A60(&StringLiteral_4781/*"CommonTreasureGetPlus"*/);
    sub_2213A60(&StringLiteral_11675/*"RareTreasureGetPlus"*/);
    byte_596E052 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_2213CDC(0, method);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0) - 1;
  if ( v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4780/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_52CA680 + v4);
  return *v5;
}


void WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  WarBoardTreasureComponent_c *v23; // x8
  int32_t v24; // w21
  Il2CppObject *v25; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v27; // x8
  UnityEngine_Transform_array *v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UnityEngine_Transform_o *v35; // x21
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  struct WarBoardTreasureData_o *v38; // x8
  __int64 v39; // x0
  int v40; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E04C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&UnityEngine_Transform___TypeInfo);
    sub_2213A60(&WarBoardTreasureComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21158/*"icon_drop_item_L_{0:00}"*/);
    byte_596E04C = 1;
  }
  this->fields.treasureData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.treasureData,
    (int32_t)data,
    (System_String_o *)itemIconAtlas,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(treasureData + 48), (int32_t)this, v12, v13, v14, v15, v16, v17);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0);
  v23 = WarBoardTreasureComponent_TypeInfo;
  v24 = treasureIconId;
  if ( !*(&WarBoardTreasureComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo, v21, v22);
    v23 = WarBoardTreasureComponent_TypeInfo;
  }
  v40 = v24 % v23->static_fields->RARITY_TYPE + 1;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v40);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_21158/*"icon_drop_item_L_{0:00}"*/, v25, 0);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v27 = this->fields.treasureData;
  if ( !v27 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)treasureData,
                     v27->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v28 = (UnityEngine_Transform_array *)sub_2213B20(UnityEngine_Transform___TypeInfo, 1);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v28 )
    goto LABEL_19;
  v35 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_2213BB4(treasureData, v28->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v39 = sub_2213D00(0, v36);
      sub_2213BA0(v39, 0);
    }
  }
  if ( !LODWORD(v28->max_length) )
    sub_2213CE4(treasureData);
  v28->m_Items[0] = v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v28->m_Items, (int32_t)v35, v29, v30, v31, v32, v33, v34);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v28, v37);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v38 = this->fields.treasureData;
  if ( !v38 || !treasureData )
LABEL_19:
    sub_2213CDC(treasureData, v11);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v38->fields._isUse_k__BackingField, 0);
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
  if ( (byte_596E050 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_2213A60(&Method_WarBoardTreasureComponent_OnClick__);
    byte_596E050 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
    {
      v4 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_2213A78(Method_WarBoardTreasureComponent_OnClick__);
      v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        m_CachedPtr = this[5].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(m_CachedPtr + 24), 0, 0);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_2213CDC(this, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Master_object; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  WarBoardMessageMaster_o *v38; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v41; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v43; // x21
  System_Delegate_o **v44; // x22
  System_Delegate_o *v45; // x23
  WarBoardTaskBase_TaskCallback_o *v46; // x24
  System_Delegate_o *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w8
  WarBoardTaskBase_TaskCallback_c *v55; // x1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x21
  WarBoardTaskBase_TaskCallback_o *v67; // x22
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0

  if ( (byte_596E051 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_2213A60(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_2213A60(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_2213A60(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_2213A60(&WarBoardCallbackTask_TypeInfo);
    sub_2213A60(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_596E051 = 1;
  }
  v6 = sub_2213CCC(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_32;
  *(_QWORD *)(v6 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)endCallback, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v6 + 40) = playedStageReinforcementsList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v6 + 40),
    (int32_t)playedStageReinforcementsList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)Master_object, v32, v33, v34, v35, v36, v37);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_32;
  v38 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0);
  if ( !v38 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v38, (int32_t)Instance, 5, 0, 0, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0, 0);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v21,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v41);
  v43 = sub_2213CCC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v43,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0);
  if ( !v43 )
LABEL_32:
    sub_2213CDC(Instance, v8);
  v44 = (System_Delegate_o **)(v43 + 40);
  v45 = *(System_Delegate_o **)(v43 + 40);
  v46 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v46,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0);
  v47 = System_Delegate__Combine(v45, (System_Delegate_o *)v46, 0);
  v54 = (int)v47;
  if ( v47 )
  {
    v55 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v47->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v44 = v47;
      if ( (WarBoardTaskBase_TaskCallback_c *)v47->klass == v55 )
        goto LABEL_20;
    }
    sub_221405C(v47, v55, v48, v49);
  }
  *v44 = 0;
LABEL_20:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 40), v54, v48, v49, v50, v51, v52, v53);
  if ( !v21 )
    goto LABEL_32;
  items = v21->fields._items;
  v63 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v21->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v43,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v65[4] = (Il2CppClass *)v43;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v65 + 4), v43, v56, v57, v58, v59, v60, v61);
  }
  v66 = sub_2213CCC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v66, 0, 0);
  v67 = (WarBoardTaskBase_TaskCallback_o *)sub_2213CCC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v67,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0);
  if ( !v66 )
    goto LABEL_32;
  *(_QWORD *)(v66 + 32) = v67;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v66 + 32), (int32_t)v67, v68, v69, v70, v71, v72, v73);
  v80 = v21->fields._items;
  v81 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v21->fields._version;
  if ( !v80 )
    goto LABEL_32;
  v82 = v21->fields._size;
  if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v66,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
  }
  else
  {
    v83 = &v80->obj.klass + v82;
    v21->fields._size = v82 + 1;
    v83[4] = (Il2CppClass *)v66;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v83 + 4), v66, v74, v75, v76, v77, v78, v79);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_44971780(
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
    sub_2213CDC(this, method);
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
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v8; // x28
  __int64 v9; // x2
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v23; // x1
  Il2CppClass **v24; // x0
  struct UICommonButton_o *button; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596E04D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E04D = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length_low = LODWORD(parents->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length_low )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v8];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length_low = LODWORD(parents->max_length);
        if ( (int)++v8 >= (int)max_length_low )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v9);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v13,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v21 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v23 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_2213CE4(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_2213CDC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_596E04F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E04F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( enable )
    {
      if ( v7 )
      {
        v8 = 1;
LABEL_12:
        UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(v7, v6);
    }
    if ( !v7 )
      goto LABEL_14;
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_12;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_596E04E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E04E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_2213CDC(this, method);
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
    sub_2213CDC(_4__this, method);
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

  if ( (byte_596E054 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_596E054 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(warBoardData, v4);
  }
}