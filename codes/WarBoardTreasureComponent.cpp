void WarBoardTreasureComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C54686 & 1) == 0 )
  {
    sub_1C3E564(&WarBoardTreasureComponent_TypeInfo);
    byte_4C54686 = 1;
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

  if ( (byte_4C54685 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_13028/*"SrareTreasureGet"*/);
    sub_1C3E564(&StringLiteral_4603/*"CommonTreasureGet"*/);
    sub_1C3E564(&StringLiteral_11190/*"RareTreasureGetPlus2"*/);
    sub_1C3E564(&StringLiteral_13030/*"SrareTreasureGetPlus2"*/);
    sub_1C3E564(&StringLiteral_13029/*"SrareTreasureGetPlus"*/);
    sub_1C3E564(&StringLiteral_11188/*"RareTreasureGet"*/);
    sub_1C3E564(&StringLiteral_4605/*"CommonTreasureGetPlus2"*/);
    sub_1C3E564(&StringLiteral_4604/*"CommonTreasureGetPlus"*/);
    sub_1C3E564(&StringLiteral_11189/*"RareTreasureGetPlus"*/);
    byte_4C54685 = 1;
  }
  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C3E7C0(0, method);
  v4 = WarBoardTreasureData__get_treasureIconId(treasureData, 0) - 1;
  if ( (unsigned int)v4 > 7 )
    v5 = (System_String_o **)&StringLiteral_4603/*"CommonTreasureGet"*/;
  else
    v5 = (System_String_o **)*(&off_467CCB8 + v4);
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
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  WarBoardTreasureComponent_c *v19; // x8
  int32_t v20; // w21
  Il2CppObject *v21; // x0
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardTreasureData_o *v23; // x8
  UnityEngine_Transform_array *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Transform_o *v27; // x21
  const MethodInfo *v28; // x2
  struct WarBoardTreasureData_o *v29; // x8
  __int64 v30; // x0
  int v31; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5467F & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&UnityEngine_Transform___TypeInfo);
    sub_1C3E564(&WarBoardTreasureComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_20205/*"icon_drop_item_L_{0:00}"*/);
    byte_4C5467F = 1;
  }
  this->fields.treasureData = data;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.treasureData, (int32_t)data, (int32_t)itemIconAtlas, method);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  *((_QWORD *)treasureData + 6) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(treasureData + 48), (int32_t)this, v8, v9);
  treasureData = (char *)this->fields.itemIcon;
  if ( !treasureData )
    goto LABEL_19;
  UISprite__set_atlas((UISprite_o *)treasureData, itemIconAtlas, 0);
  treasureData = (char *)this->fields.treasureData;
  if ( !treasureData )
    goto LABEL_19;
  itemIcon = this->fields.itemIcon;
  treasureIconId = WarBoardTreasureData__get_treasureIconId((WarBoardTreasureData_o *)treasureData, 0);
  v19 = WarBoardTreasureComponent_TypeInfo;
  v20 = treasureIconId;
  if ( !WarBoardTreasureComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardTreasureComponent_TypeInfo);
    v19 = WarBoardTreasureComponent_TypeInfo;
  }
  v31 = v20 % v19->static_fields->RARITY_TYPE + 1;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15, v16, v17, v18);
  treasureData = (char *)System_String__Format((System_String_o *)StringLiteral_20205/*"icon_drop_item_L_{0:00}"*/, v21, 0);
  if ( !itemIcon )
    goto LABEL_19;
  UISprite__set_spriteName(itemIcon, (System_String_o *)treasureData, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  treasureData = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v23 = this->fields.treasureData;
  if ( !v23 )
    goto LABEL_19;
  if ( !treasureData )
    goto LABEL_19;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)treasureData,
                     v23->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v24 = (UnityEngine_Transform_array *)sub_1C3E60C(UnityEngine_Transform___TypeInfo, 1);
  treasureData = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v24 )
    goto LABEL_19;
  v27 = (UnityEngine_Transform_o *)treasureData;
  if ( treasureData )
  {
    treasureData = (char *)sub_1C3E6A0(treasureData, v24->obj.klass->_1.element_class);
    if ( !treasureData )
    {
      v30 = sub_1C3E7E4();
      sub_1C3E68C(v30, 0);
    }
  }
  if ( !LODWORD(v24->max_length) )
    sub_1C3E7C8(treasureData, v7);
  v24->m_Items[0] = v27;
  sub_1C3E508((CGThumbnailListItem_o *)v24->m_Items, (int32_t)v27, v25, v26);
  WarBoardTreasureComponent__SetButtonTweenTarget(this, v24, v28);
  treasureData = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v29 = this->fields.treasureData;
  if ( !v29 || !treasureData )
LABEL_19:
    sub_1C3E7C0(treasureData, v7);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)treasureData, !v29->fields._isUse_k__BackingField, 0);
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
  if ( (byte_4C54683 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardTreasureComponent_o *)sub_1C3E564(&Method_WarBoardTreasureComponent_OnClick__);
    byte_4C54683 = 1;
  }
  treasureData = v2->fields.treasureData;
  if ( !treasureData )
    goto LABEL_16;
  if ( !treasureData->fields._isUse_k__BackingField )
  {
    this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !this )
      goto LABEL_16;
    if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)this, 0) && v2->fields.isSelectable )
    {
      v4 = Method_WarBoardTreasureComponent_OnClick__;
      if ( (*((_BYTE *)Method_WarBoardTreasureComponent_OnClick__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C3E57C(Method_WarBoardTreasureComponent_OnClick__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
      this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        m_CachedPtr = this[5].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(m_CachedPtr + 24), 0, 0);
          this = (WarBoardTreasureComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1C3E7C0(this, method);
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

  if ( (byte_4C54684 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C3E564(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C3E564(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_b__1__);
    sub_1C3E564(&Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__);
    sub_1C3E564(&WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C3E564(&WarBoardCallbackTask_TypeInfo);
    sub_1C3E564(&WarBoardSimpleAnimationPerformance_TypeInfo);
    byte_4C54684 = 1;
  }
  v6 = sub_1C3E7B0(WarBoardTreasureComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_32;
  *(_QWORD *)(v6 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v6 + 24) = endCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 24), (int32_t)endCallback, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v6 + 40) = playedStageReinforcementsList;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 40), (int32_t)playedStageReinforcementsList, v14, v15);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
  *(_QWORD *)(v6 + 32) = Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 32), (int32_t)Master_object, v18, v19);
  Instance = *(WarBoardData_o **)(v6 + 40);
  if ( !Instance )
    goto LABEL_32;
  v20 = *(WarBoardMessageMaster_o **)(v6 + 32);
  Instance = (WarBoardData_o *)WarBoardData__get_id(Instance, 0);
  if ( !v20 )
    goto LABEL_32;
  MessageTasks = WarBoardMessageMaster__GetMessageTasks(v20, (int32_t)Instance, 5, 0, 0, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (WarBoardData_o *)WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 8, 0, 0);
  if ( !MessageTasks )
    goto LABEL_32;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)MessageTasks,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  Instance = (WarBoardData_o *)System_Linq_Enumerable__Any_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)MessageTasks,
                                 (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_32;
    System_Collections_Generic_List_object___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)MessageTasks,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  AnimationNameByRarity = WarBoardTreasureComponent__GetAnimationNameByRarity(this, v23);
  v25 = sub_1C3E7B0(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v25,
    (SimpleAnimation_o *)Component_object,
    AnimationNameByRarity,
    0);
  if ( !v25 )
LABEL_32:
    sub_1C3E7C0(Instance, v8);
  v26 = (System_Delegate_o **)(v25 + 40);
  v27 = *(System_Delegate_o **)(v25 + 40);
  v28 = (WarBoardTaskBase_TaskCallback_o *)sub_1C3E7B0(WarBoardTaskBase_TaskCallback_TypeInfo);
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
    sub_1C3EA80(v29);
  }
  *v26 = v32;
LABEL_20:
  sub_1C3E508((CGThumbnailListItem_o *)(v25 + 40), (int32_t)v32, v30, v31);
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v25;
    sub_1C3E508((CGThumbnailListItem_o *)(v39 + 4), v25, v34, v35);
  }
  v40 = sub_1C3E7B0(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v40, 0, 0);
  v41 = (WarBoardTaskBase_TaskCallback_o *)sub_1C3E7B0(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v41,
    (Il2CppObject *)v6,
    Method_WarBoardTreasureComponent___c__DisplayClass13_0__OnUse_g__AddAfterTask_0__,
    0);
  if ( !v40 )
    goto LABEL_32;
  *(_QWORD *)(v40 + 32) = v41;
  sub_1C3E508((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v41, v42, v43);
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v13->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)v40;
    sub_1C3E508((CGThumbnailListItem_o *)(v49 + 4), v40, v44, v45);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  WarBoardManager__AddTask_38114996(
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
    sub_1C3E7C0(this, method);
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
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v18; // x1
  Il2CppClass **v19; // x0
  struct UICommonButton_o *button; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C54680 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78207768);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54680 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78207768);
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
                                                                     (const MethodInfo_37B57F0 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0);
            items = v4->fields._items;
            v16 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v18 = ComponentsInChildren_object;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v18;
              sub_1C3E508((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C3E7C8(ComponentsInChildren_object, v6);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C3E7C0(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C3E508((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v21, v22);
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

  if ( (byte_4C54682 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54682 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
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

  if ( (byte_4C54681 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C54681 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardTreasureComponent__Unselectable(WarBoardTreasureComponent_o *this, const MethodInfo *method)
{
  struct WarBoardTreasureData_o *treasureData; // x8

  treasureData = this->fields.treasureData;
  if ( !treasureData )
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(_4__this, method);
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

  if ( (byte_4C54687 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C54687 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  warBoardData = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !warBoardData )
    goto LABEL_11;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)warBoardData, 9, 0, 0);
  System_Collections_Generic_List_object___AddRange(
    v3,
    (System_Collections_Generic_IEnumerable_T__o *)EventTasks,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    warBoardData = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__ToArray__);
    if ( Instance )
    {
      WarBoardManager__InsertRunningTask((WarBoardManager_o *)Instance, (WarBoardTaskBase_array *)warBoardData, 0);
      return;
    }
LABEL_11:
    sub_1C3E7C0(warBoardData, v4);
  }
}