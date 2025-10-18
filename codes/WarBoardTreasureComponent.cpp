void WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C408E9 & 1) == 0 )
  {
    sub_1C37058(&WarBoardTreasureComponent_TypeInfo);
    byte_4C408E9 = 1;
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

  if ( (byte_4C408E8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13020/*"SrareTreasureGet"*/);
    sub_1C37058(&StringLiteral_4603/*"CommonTreasureGet"*/);
    sub_1C37058(&StringLiteral_11188/*"RareTreasureGetPlus2"*/);
    sub_1C37058(&StringLiteral_13022/*"SrareTreasureGetPlus2"*/);
    sub_1C37058(&StringLiteral_13021/*"SrareTreasureGetPlus"*/);
    sub_1C37058(&StringLiteral_11186/*"RareTreasureGet"*/);
    sub_1C37058(&StringLiteral_4605/*"CommonTreasureGetPlus2"*/);
    sub_1C37058(&StringLiteral_4604/*"CommonTreasureGetPlus"*/);
    sub_1C37058(&StringLiteral_11187/*"RareTreasureGetPlus"*/);
    byte_4C408E8 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C372B4(0);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0) - 1;
  if ( (unsigned int)v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4603/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_466A818 + v4);
  return *v5;
}


void WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  WarBoardTreasureComponent_c *v18; // x8
  int32_t v19; // w21
  Il2CppObject *v20; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v22; // x8
  UnityEngine_Transform_array *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x2
  struct WarBoardTreasureData_o *v28; // x8
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C408E2 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&UnityEngine_Transform___TypeInfo);
    sub_1C37058(&WarBoardTreasureComponent_TypeInfo);
    sub_1C37058(&StringLiteral_20187/*"icon_drop_item_L_{0:00}"*/);
    byte_4C408E2 = 1;
  }
  this->fields.treasureData = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.treasureData, (int32_t)data, (int32_t)itemIconAtlas, method);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(treasureData + 48), (int32_t)this, v7, v8);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0);
  v18 = WarBoardTreasureComponent_TypeInfo;
  v19 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v18 = WarBoardTreasureComponent_TypeInfo;
  }
  v30 = v19 % v18->static_fields->RARITY_TYPE + 1;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v12, v13, v14, v15, v16, v17);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20187/*"icon_drop_item_L_{0:00}"*/, v20, 0);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v22 = this->fields.treasureData;
  if ( !v22 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)treasureData,
                     v22->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v23 = (UnityEngine_Transform_array *)sub_1C37100(UnityEngine_Transform___TypeInfo, 1);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v23 )
    goto LABEL_19;
  v26 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1C37194(treasureData, v23->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v29 = sub_1C372D8();
      sub_1C37180(v29, 0);
    }
  }
  if ( !LODWORD(v23->max_length) )
    sub_1C372BC(treasureData);
  v23->m_Items[0] = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)v23->m_Items, (int32_t)v26, v24, v25);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v23, v27);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v28 = this->fields.treasureData;
  if ( !v28 || !treasureData )
LABEL_19:
    sub_1C372B4(treasureData);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v28->fields._isUse_k__BackingField, 0);
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
  if ( (byte_4C408E6 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_1C37058(&Method_WarBoardTreasureComponent_OnClick__);
    byte_4C408E6 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
    {
      v4 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C37070(Method_WarBoardTreasureComponent_OnClick__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        m_CachedPtr = this[5].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(m_CachedPtr + 24), 0, 0);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1C372B4(this);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  WarBoardMessageMaster_o *v19; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v22; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v24; // x21
  System_Delegate_o **v25; // x22
  System_Delegate_o *v26; // x23
  WarBoardTaskBase_TaskCallback_o *v27; // x24
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x21
  WarBoardTaskBase_TaskCallback_o *v40; // x22
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4C408E7 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C37058(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C37058(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C37058(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_1C37058(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_1C37058(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C37058(&WarBoardCallbackTask_TypeInfo);
    sub_1C37058(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C408E7 = 1;
  }
  v6 = sub_1C372A4(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_32;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 24), (int32_t)endCallback, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v6 + 40) = playedStageReinforcementsList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 40), (int32_t)playedStageReinforcementsList, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), (int32_t)Master_object, v17, v18);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_32;
  v19 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0);
  if ( !v19 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v19, (int32_t)Instance, 5, 0, 0, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0, 0);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v22);
  v24 = sub_1C372A4(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v24,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0);
  if ( !v24 )
LABEL_32:
    sub_1C372B4(Instance);
  v25 = (System_Delegate_o **)(v24 + 40);
  v26 = *(System_Delegate_o **)(v24 + 40);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1C372A4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0);
  v31 = v28;
  if ( v28 )
  {
    v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v25 = v28;
      if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass == v32 )
        goto LABEL_20;
    }
    sub_1C37574(v28);
  }
  *v25 = v31;
LABEL_20:
  sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 40), (int32_t)v31, v29, v30);
  if ( !v12 )
    goto LABEL_32;
  items = v12->fields._items;
  v36 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v24,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 4), v24, v33, v34);
  }
  v39 = sub_1C372A4(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v39, 0, 0);
  v40 = (WarBoardTaskBase_TaskCallback_o *)sub_1C372A4(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v40,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0);
  if ( !v39 )
    goto LABEL_32;
  *(_QWORD *)(v39 + 32) = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 32), (int32_t)v40, v41, v42);
  v45 = v12->fields._items;
  v46 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v12->fields._version;
  if ( !v45 )
    goto LABEL_32;
  v47 = v12->fields._size;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v39,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v12->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v39;
    sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 4), v39, v43, v44);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_38070192(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v12,
    0);
}


void WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C372B4(this);
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
  int max_length; // w8
  unsigned int v7; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v9; // x22
  unsigned __int64 v10; // x29
  UnityEngine_Object_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v17; // x1
  Il2CppClass **v18; // x0
  struct UICommonButton_o *button; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C408E3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C408E3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v7];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v9 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v7 >= max_length )
          goto LABEL_24;
      }
      v10 = 0;
      while ( v10 < (unsigned int)klass )
      {
        v11 = (UnityEngine_Object_o *)*((_QWORD *)&v9[1].monitor + v10);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v11,
                                                                     0);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v11,
                                                                       0);
            items = v4->fields._items;
            v15 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v17 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v17;
              sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
            }
          }
        }
        LODWORD(klass) = v9[1].klass;
        if ( (__int64)++v10 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C372BC(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C372B4(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v20, v21);
}


void WarBoardTreasureComponent__SetColliderEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4C408E5 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C408E5 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C372B4(0);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0);
  }
}


void WarBoardTreasureComponent__SetTouchEnable(
        WarBoardTreasureComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_4C408E4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C408E4 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C372B4(0);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0);
  }
}


void WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C372B4(this);
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
    sub_1C372B4(_4__this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.endCallback, 0);
}


void WarBoardTreasureComponent___c__DisplayClass13_0___OnUse_g__AddAfterTask_0(
        WarBoardTreasureComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  WarBoardData_o *warBoardData; // x0
  WarBoardMessageMaster_o *messageMaster; // x20
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x0
  Il2CppObject *Instance; // x20

  if ( (byte_4C408EA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C37058(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C408EA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0);
      return;
    }
LABEL_11:
    sub_1C372B4(warBoardData);
  }
}