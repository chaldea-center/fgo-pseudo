void WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C24C2A & 1) == 0 )
  {
    sub_1C2D490(&WarBoardTreasureComponent_TypeInfo);
    byte_4C24C2A = 1;
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

  if ( (byte_4C24C29 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13016/*"SrareTreasureGet"*/);
    sub_1C2D490(&StringLiteral_4595/*"CommonTreasureGet"*/);
    sub_1C2D490(&StringLiteral_11181/*"RareTreasureGetPlus2"*/);
    sub_1C2D490(&StringLiteral_13018/*"SrareTreasureGetPlus2"*/);
    sub_1C2D490(&StringLiteral_13017/*"SrareTreasureGetPlus"*/);
    sub_1C2D490(&StringLiteral_11179/*"RareTreasureGet"*/);
    sub_1C2D490(&StringLiteral_4597/*"CommonTreasureGetPlus2"*/);
    sub_1C2D490(&StringLiteral_4596/*"CommonTreasureGetPlus"*/);
    sub_1C2D490(&StringLiteral_11180/*"RareTreasureGetPlus"*/);
    byte_4C24C29 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C2D6EC(0, method);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0) - 1;
  if ( (unsigned int)v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4595/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_4651628 + v4);
  return *v5;
}


void WarBoardTreasureComponent__Initialize(
        WarBoardTreasureComponent_o *this,
        WarBoardTreasureData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  char *treasureData; // x0
  UISprite_o *itemIcon; // x20
  int32_t treasureIconId; // w0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  WarBoardTreasureComponent_c *v16; // x8
  int32_t v17; // w21
  Il2CppObject *v18; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v20; // x8
  UnityEngine_Transform_array *v21; // x20
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *v24; // x21
  const MethodInfo *v25; // x2
  struct WarBoardTreasureData_o *v26; // x8
  __int64 v27; // x0
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C24C23 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&UnityEngine_Transform___TypeInfo);
    sub_1C2D490(&WarBoardTreasureComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_20172/*"icon_drop_item_L_{0:00}"*/);
    byte_4C24C23 = 1;
  }
  this->fields.treasureData = data;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.treasureData, (int32_t)data, (int32_t)itemIconAtlas, method);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(treasureData + 48), (int32_t)this, v8, v9);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0);
  v16 = WarBoardTreasureComponent_TypeInfo;
  v17 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v16 = WarBoardTreasureComponent_TypeInfo;
  }
  v28 = v17 % v16->static_fields->RARITY_TYPE + 1;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20172/*"icon_drop_item_L_{0:00}"*/, v18, 0);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v20 = this->fields.treasureData;
  if ( !v20 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)treasureData,
                     v20->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v21 = (UnityEngine_Transform_array *)sub_1C2D538(UnityEngine_Transform___TypeInfo, 1);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v21 )
    goto LABEL_19;
  v24 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1C2D5CC(treasureData, v21->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v27 = sub_1C2D710();
      sub_1C2D5B8(v27, 0);
    }
  }
  if ( !LODWORD(v21->max_length) )
    sub_1C2D6F4(treasureData, v7, v22);
  v21->m_Items[0] = v24;
  sub_1C2D434((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v24, v22, v23);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v21, v25);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v26 = this->fields.treasureData;
  if ( !v26 || !treasureData )
LABEL_19:
    sub_1C2D6EC(treasureData, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v26->fields._isUse_k__BackingField, 0);
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
  if ( (byte_4C24C27 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_1C2D490(&Method_WarBoardTreasureComponent_OnClick__);
    byte_4C24C27 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
    {
      v4 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_WarBoardTreasureComponent_OnClick__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        m_CachedPtr = this[5].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(m_CachedPtr + 24), 0, 0);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1C2D6EC(this, method);
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
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  Il2CppObject *Master_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  WarBoardMessageMaster_o *v20; // x22
  System_Collections_Generic_List_WarBoardTaskBase__o *MessageTasks; // x22
  Il2CppObject *Component_object; // x22
  const MethodInfo *v23; // x1
  System_String_o *AnimationNameByRarity; // x23
  __int64 v25; // x21
  System_Delegate_o **v26; // x22
  System_Delegate_o *v27; // x23
  WarBoardTaskBase_TaskCallback_o *v28; // x24
  System_Delegate_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Delegate_o *v32; // x8
  WarBoardTaskBase_TaskCallback_c *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  __int64 v40; // x21
  WarBoardTaskBase_TaskCallback_o *v41; // x22
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0

  if ( (byte_4C24C28 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C2D490(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_1C2D490(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_1C2D490(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C2D490(&WarBoardCallbackTask_TypeInfo);
    sub_1C2D490(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C24C28 = 1;
  }
  v6 = sub_1C2D6DC(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_32;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 24), (int32_t)endCallback, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v6 + 40) = playedStageReinforcementsList;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), (int32_t)playedStageReinforcementsList, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)Master_object, v18, v19);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_32;
  v20 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0);
  if ( !v20 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v20, (int32_t)Instance, 5, 0, 0, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0, 0);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v23);
  v25 = sub_1C2D6DC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v25,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0);
  if ( !v25 )
LABEL_32:
    sub_1C2D6EC(Instance, v8);
  v26 = (System_Delegate_o **)(v25 + 40);
  v27 = *(System_Delegate_o **)(v25 + 40);
  v28 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v28,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__,
    0);
  v29 = System_Delegate__Combine(v27, (System_Delegate_o *)v28, 0);
  v32 = v29;
  if ( v29 )
  {
    v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v29->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *v26 = v29;
      if ( (WarBoardTaskBase_TaskCallback_c *)v29->klass == v33 )
        goto LABEL_20;
    }
    sub_1C2D9AC(v29);
  }
  *v26 = v32;
LABEL_20:
  sub_1C2D434((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v32, v30, v31);
  if ( !v13 )
    goto LABEL_32;
  items = v13->fields._items;
  v37 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v25,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v25;
    sub_1C2D434((CGThumbnailListItem_o *)(v39 + 4), v25, v34, v35);
  }
  v40 = sub_1C2D6DC(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v40, 0, 0);
  v41 = (WarBoardTaskBase_TaskCallback_o *)sub_1C2D6DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v41,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0);
  if ( !v40 )
    goto LABEL_32;
  *(_QWORD *)(v40 + 32) = v41;
  sub_1C2D434((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v41, v42, v43);
  v46 = v13->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++v13->fields._version;
  if ( !v46 )
    goto LABEL_32;
  v48 = v13->fields._size;
  if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v40,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v13->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v40;
    sub_1C2D434((CGThumbnailListItem_o *)(v49 + 4), v40, v44, v45);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_37855764(
    (WarBoardManager_o *)Instance,
    0,
    (System_Collections_Generic_List_WarBoardTaskBase__o *)v13,
    0);
}


void WarBoardTreasureComponent__Selectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C2D6EC(this, method);
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
  __int64 v7; // x2
  int max_length; // w8
  unsigned int v9; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v11; // x22
  unsigned __int64 v12; // x29
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v19; // x1
  Il2CppClass **v20; // x0
  struct UICommonButton_o *button; // x19
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C24C24 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C24 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v9];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_30C5E44 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78016632);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v11 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_24;
      }
      v12 = 0;
      while ( v12 < (unsigned int)klass )
      {
        v13 = (UnityEngine_Object_o *)*((_QWORD *)&v11[1].monitor + v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                                                     (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v13,
                                                                       0);
            items = v4->fields._items;
            v17 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v19 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C2D6F4(ComponentsInChildren_object, v6, v7);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C2D6EC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C2D434((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v22, v23);
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

  if ( (byte_4C24C26 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C26 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C24C25 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C24C25 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(_4__this, method);
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

  if ( (byte_4C24C2B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24C2B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0);
      return;
    }
LABEL_11:
    sub_1C2D6EC(warBoardData, v4);
  }
}