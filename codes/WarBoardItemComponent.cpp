void WarBoardItemComponent___ctor(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardItemComponent__AssertSerializeFieldNotNull(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  ;
}


void WarBoardItemComponent__Initialize(
        WarBoardItemComponent_o *this,
        WarBoardItemData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 itemData; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  struct WarBoardItemData_o *v16; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v21; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v23; // x8
  UnityEngine_Transform_array *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Transform_o *v27; // x21
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x20
  __int64 v30; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3525D & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&UnityEngine_Transform___TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C3525D = 1;
  }
  this->fields.itemData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)data, (int32_t)itemIconAtlas, method);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(itemData + 56), (int32_t)this, v7, v8);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0);
  v16 = this->fields.itemData;
  if ( !v16 )
    goto LABEL_25;
  itemEntity = v16->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v10, v11, v12, v13, v14, v15);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_25096/*"{0}"*/, v19, 0);
  if ( !itemIcon )
    goto LABEL_25;
  UISprite__set_spriteName(itemIcon, (System_String_o *)itemData, 0);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)itemData + 840LL))(
    itemData,
    *(_QWORD *)(*(_QWORD *)itemData + 848LL));
  baseImageIcon = (UnityEngine_Object_o *)this->fields.baseImageIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0, 0) )
  {
    itemData = (__int64)this->fields.itemData;
    if ( !itemData )
      goto LABEL_25;
    v21 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0);
    if ( !v21 )
      goto LABEL_25;
    UISprite__set_spriteName(v21, (System_String_o *)itemData, 0);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v23 = this->fields.itemData;
  if ( !v23 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)itemData,
                     v23->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v24 = (UnityEngine_Transform_array *)sub_1C32CC8(UnityEngine_Transform___TypeInfo, 1);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v24 )
    goto LABEL_25;
  v27 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_1C32D5C(itemData, v24->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v30 = sub_1C32EA0();
      sub_1C32D48(v30, 0);
    }
  }
  if ( !LODWORD(v24->max_length) )
    sub_1C32E84(itemData);
  v24->m_Items[0] = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)v24->m_Items, (int32_t)v27, v25, v26);
  WarBoardItemComponent__SetButtonTweenTarget(this, v24, v28);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.itemData
    || (v29 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0),
        !v29) )
  {
LABEL_25:
    sub_1C32E7C(itemData);
  }
  UnityEngine_GameObject__SetActive(v29, (itemData & 1) == 0, 0);
  this->fields.isSelectable = 0;
}


void WarBoardItemComponent__ItemGetEffectEndCallback(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  __int64 v6; // x8
  struct WarBoardItemData_o *v7; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x20
  __int64 v10; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v12; // x20
  WarBoardManager_o *v13; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35261 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardItemComponent_OnClick__);
    byte_4C35261 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0) && this->fields.isSelectable )
  {
    v4 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_WarBoardItemComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v6 )
      {
        OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 24), 0, 0);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v7 = this->fields.itemData;
        if ( v7 )
        {
          if ( itemData )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)itemData,
              v7->fields._squareIndex_k__BackingField,
              0);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1C32E7C(itemData);
  }
  v8 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C32C38(Method_WarBoardItemComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v10 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)(v10 + 40), 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = this->fields.itemData;
  v13 = (WarBoardManager_o *)Instance;
  itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !itemData )
    goto LABEL_22;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0);
  if ( !v13 )
    goto LABEL_22;
  WarBoardManager__ShowItemSimplePopup(v13, v12, position, 0);
}


void WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x22
  __int64 v6; // x20
  __int64 v7; // x0
  System_Delegate_o **v8; // x22
  System_Delegate_o *v9; // x23
  WarBoardTaskBase_TaskCallback_o *v10; // x24
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Delegate_o *v14; // x8
  WarBoardTaskBase_TaskCallback_c *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  Il2CppObject *Instance; // x19
  __int64 v23; // x21
  __int64 v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0

  if ( (byte_4C35264 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1C32C20(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    sub_1C32C20(&StringLiteral_8138/*"ItemGet"*/);
    byte_4C35264 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = sub_1C32E6C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v6,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8138/*"ItemGet"*/,
    0);
  if ( !v6 )
    goto LABEL_19;
  v8 = (System_Delegate_o **)(v6 + 40);
  v9 = *(System_Delegate_o **)(v6 + 40);
  v10 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v11 = System_Delegate__Combine(v9, (System_Delegate_o *)v10, 0);
  v14 = v11;
  if ( !v11 )
    goto LABEL_8;
  v15 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v11->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v8 = v11, (WarBoardTaskBase_TaskCallback_c *)v11->klass != v15) )
  {
    sub_1C3313C(v11);
LABEL_8:
    *v8 = v14;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 40), (int32_t)v14, v12, v13);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
    if ( v7 )
    {
      v23 = v7;
      v24 = sub_1C32D5C(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v24 )
      {
        v27 = sub_1C32EA0();
        sub_1C32D48(v27, 0);
      }
      if ( !*(_DWORD *)(v23 + 24) )
        sub_1C32E84(v24);
      *(_QWORD *)(v23 + 32) = v6;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 32), v6, v25, v26);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v23, 0);
        return;
      }
    }
LABEL_19:
    sub_1C32E7C(v7);
  }
  items = taskList->fields._items;
  v19 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), v6, v16, v17);
  }
}


void WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  __int64 v6; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35262 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardItemComponent_OnLongClick__);
    byte_4C35262 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  v4 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_WarBoardItemComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 40), 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = this->fields.itemData,
        v9 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0), !v9) )
  {
LABEL_12:
    sub_1C32E7C(itemData);
  }
  WarBoardManager__ShowItemSimplePopup(v9, v8, position, 0);
}


void WarBoardItemComponent__OnUse(
        WarBoardItemComponent_o *this,
        int32_t squareIndex,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Component_object; // x24
  __int64 v14; // x21
  System_Delegate_o **v15; // x24
  System_Delegate_o *v16; // x25
  WarBoardTaskBase_TaskCallback_o *v17; // x26
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Delegate_o *v21; // x8
  WarBoardTaskBase_TaskCallback_c *v22; // x1
  System_Delegate_o *v23; // x24
  WarBoardTaskBase_TaskCallback_o *v24; // x25
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  WarBoardTaskBase_TaskCallback_c *v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  Il2CppObject *Instance; // x20
  __int64 v36; // x22
  __int64 v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x0

  if ( (byte_4C35263 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C32C20(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__);
    sub_1C32C20(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C32C20(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1C32C20(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1C32C20(&WarBoardTaskBase___TypeInfo);
    sub_1C32C20(&StringLiteral_8138/*"ItemGet"*/);
    byte_4C35263 = 1;
  }
  v9 = sub_1C32E6C(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v9 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v14 = sub_1C32E6C(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v14,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8138/*"ItemGet"*/,
    0);
  if ( !v14 )
    goto LABEL_27;
  v15 = (System_Delegate_o **)(v14 + 32);
  v16 = *(System_Delegate_o **)(v14 + 32);
  v17 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0);
  v18 = System_Delegate__Combine(v16, (System_Delegate_o *)v17, 0);
  v21 = v18;
  if ( v18 )
  {
    v22 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v15 = v18;
    if ( (WarBoardTaskBase_TaskCallback_c *)v18->klass != v22 )
      goto LABEL_13;
  }
  else
  {
    *v15 = 0;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v18, v19, v20);
  v9 = v14 + 40;
  v23 = *(System_Delegate_o **)(v14 + 40);
  v24 = (WarBoardTaskBase_TaskCallback_o *)sub_1C32E6C(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0);
  v21 = v25;
  if ( !v25 )
  {
LABEL_14:
    *(_QWORD *)v9 = v21;
    goto LABEL_15;
  }
  v28 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v25->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v9 = v25, (WarBoardTaskBase_TaskCallback_c *)v25->klass != v28) )
  {
LABEL_13:
    sub_1C3313C(v21);
    goto LABEL_14;
  }
LABEL_15:
  sub_1C32BC4((CGThumbnailListItem_o *)v9, (int32_t)v21, v26, v27);
  if ( taskList )
  {
    items = taskList->fields._items;
    v32 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), v14, v29, v30);
      }
      return;
    }
LABEL_27:
    sub_1C32E7C(v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = sub_1C32CC8(WarBoardTaskBase___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_27;
  v36 = v10;
  v37 = sub_1C32D5C(v14, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v37 )
  {
    v40 = sub_1C32EA0();
    sub_1C32D48(v40, 0);
  }
  if ( !*(_DWORD *)(v36 + 24) )
    sub_1C32E84(v37);
  *(_QWORD *)(v36 + 32) = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 32), v14, v38, v39);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v36, 0);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v36, 0);
}


void WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  struct WarBoardItemData_o *itemData; // x8
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35265 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35265 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (SquarePosition = WarBoardManager__GetSquarePosition(Instance, itemData->fields._squareIndex_k__BackingField, 0),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
}


void WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1C32E7C(0);
  if ( !WarBoardItemData__get_Acquired(itemData, 0) )
    this->fields.isSelectable = 1;
}


void WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
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

  if ( (byte_4C3525E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3525E = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
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
                                                                     (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_GameObject__Contains__);
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
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v18 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v18[4] = (Il2CppClass *)v17;
              sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
            }
          }
        }
        LODWORD(klass) = v9[1].klass;
        if ( (__int64)++v10 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1C32E84(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1C32E7C(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v20, v21);
}


void WarBoardItemComponent__SetColliderEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_4C35260 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35260 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C32E7C(0);
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


void WarBoardItemComponent__SetTouchEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_4C3525F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3525F = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1C32E7C(0);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0);
  }
}


void WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1C32E7C(0);
  if ( !WarBoardItemData__get_Acquired(itemData, 0) )
    this->fields.isSelectable = 0;
}


void WarBoardItemComponent__WidgetDepthIncrement(
        WarBoardItemComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardItemComponent_o *v4; // x21
  struct UIWidget_array *uIWidgets; // x8
  struct UIWidget_array **p_uIWidgets; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int max_length; // w21
  unsigned int v11; // w22

  v4 = this;
  if ( (byte_4C35266 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    byte_4C35266 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78081984);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.uIWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= LODWORD(uIWidgets->max_length) )
        sub_1C32E84(this);
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v11];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.m_CachedPtr) + value, 0);
      if ( max_length == ++v11 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1C32E7C(this);
  }
}


void WarBoardItemComponent___c__DisplayClass14_0___ctor(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardItemComponent___c__DisplayClass14_0___OnUse_b__0(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35267 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35267 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)_4__this, this->fields.squareIndex, 0),
        !transform) )
  {
    sub_1C32E7C(_4__this);
  }
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
}