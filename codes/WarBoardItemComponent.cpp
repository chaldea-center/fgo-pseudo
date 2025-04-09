void __fastcall WarBoardItemComponent___ctor(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardItemComponent__AssertSerializeFieldNotNull(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Initialize(
        WarBoardItemComponent_o *this,
        WarBoardItemData_o *data,
        UIAtlas_o *itemIconAtlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 itemData; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct WarBoardItemData_o *v18; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v21; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v23; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v25; // x8
  int v26; // s0
  UnityEngine_Transform_array *v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Transform_o *v32; // x21
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *v34; // x20
  __int64 v35; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49B8877 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, data);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B4CF90(&UnityEngine_Transform___TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_24692/*"{0}"*/, v10);
    byte_49B8877 = 1;
  }
  this->fields.itemData = data;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)data, (int32_t)itemIconAtlas, method);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(itemData + 56), (int32_t)this, v12, v13);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0LL);
  v18 = this->fields.itemData;
  if ( !v18 )
    goto LABEL_25;
  itemEntity = v18->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v15, v16, v17);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_24692/*"{0}"*/, v21, 0LL);
  if ( !itemIcon )
    goto LABEL_25;
  UISprite__set_spriteName(itemIcon, (System_String_o *)itemData, 0LL);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)itemData + 840LL))(
    itemData,
    *(_QWORD *)(*(_QWORD *)itemData + 848LL));
  baseImageIcon = (UnityEngine_Object_o *)this->fields.baseImageIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0LL, 0LL) )
  {
    itemData = (__int64)this->fields.itemData;
    if ( !itemData )
      goto LABEL_25;
    v23 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0LL);
    if ( !v23 )
      goto LABEL_25;
    UISprite__set_spriteName(v23, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v25 = this->fields.itemData;
  if ( !v25 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v26 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v25->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v29 = (UnityEngine_Transform_array *)sub_1B4D038(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v29 )
    goto LABEL_25;
  v32 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_1B4D0CC(itemData, v29->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v35 = sub_1B4D210();
      sub_1B4D0B8(v35, 0LL);
    }
  }
  if ( !v29->max_length )
    sub_1B4D1F4(itemData, v11);
  v29->m_Items[0] = v32;
  sub_1B4CF34((CGThumbnailListItem_o *)v29->m_Items, (int32_t)v32, v30, v31);
  WarBoardItemComponent__SetButtonTweenTarget(this, v29, v33);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.itemData
    || (v34 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0LL),
        !v34) )
  {
LABEL_25:
    sub_1B4D1EC(itemData, v11);
  }
  UnityEngine_GameObject__SetActive(v34, (itemData & 1) == 0, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardItemComponent__ItemGetEffectEndCallback(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardItemData_o *itemData; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  __int64 v7; // x8
  struct WarBoardItemData_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x20
  __int64 v11; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v13; // x20
  WarBoardManager_o *v14; // x21
  int v15; // s0

  if ( (byte_49B887B & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B4CF90(&Method_WarBoardItemComponent_OnClick__, v3);
    byte_49B887B = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0LL) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_WarBoardItemComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v7 )
      {
        OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0, 0LL);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v8 = this->fields.itemData;
        if ( v8 )
        {
          if ( itemData )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)itemData,
              v8->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1B4D1EC(itemData, method);
  }
  v9 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B4CFA8(Method_WarBoardItemComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v11 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)(v11 + 40), 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v13 = this->fields.itemData;
  v14 = (WarBoardManager_o *)Instance;
  itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !itemData )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL);
  if ( !v14 )
    goto LABEL_22;
  WarBoardManager__ShowItemSimplePopup(v14, v13, *(UnityEngine_Vector3_o *)&v15, 0LL);
}


void __fastcall WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x22
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_Delegate_o **v16; // x22
  System_Delegate_o *v17; // x23
  WarBoardTaskBase_TaskCallback_o *v18; // x24
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Delegate_o *v22; // x8
  WarBoardTaskBase_TaskCallback_c *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  Il2CppObject *Instance; // x19
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x0

  if ( (byte_49B887E & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B4CF90(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B4CF90(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v8);
    sub_1B4CF90(&WarBoardSimpleAnimationPerformance_TypeInfo, v9);
    sub_1B4CF90(&WarBoardTaskBase___TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_7947/*"ItemGet"*/, v11);
    byte_49B887E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v13 = sub_1B4D1DC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v13,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_7947/*"ItemGet"*/,
    0LL);
  if ( !v13 )
    goto LABEL_19;
  v16 = (System_Delegate_o **)(v13 + 40);
  v17 = *(System_Delegate_o **)(v13 + 40);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1B4D1DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  v22 = v19;
  if ( !v19 )
    goto LABEL_8;
  v23 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v16 = v19, (WarBoardTaskBase_TaskCallback_c *)v19->klass != v23) )
  {
    sub_1B4D4AC(v19);
LABEL_8:
    *v16 = v22;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v22, v20, v21);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v14 = sub_1B4D038(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v14 )
    {
      v31 = v14;
      v32 = sub_1B4D0CC(v13, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v32 )
      {
        v36 = sub_1B4D210();
        sub_1B4D0B8(v36, 0LL);
      }
      if ( !*(_DWORD *)(v31 + 24) )
        sub_1B4D1F4(v32, v33);
      *(_QWORD *)(v31 + 32) = v13;
      sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 32), v13, v34, v35);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v31, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B4D1EC(v14, v15);
  }
  items = taskList->fields._items;
  v27 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v13,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v13;
    sub_1B4CF34((CGThumbnailListItem_o *)(v29 + 4), v13, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardItemData_o *itemData; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x20
  __int64 v7; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v9; // x20
  WarBoardManager_o *v10; // x21
  int v11; // s0

  if ( (byte_49B887C & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B4CF90(&Method_WarBoardItemComponent_OnLongClick__, v3);
    byte_49B887C = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  v5 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_WarBoardItemComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 40), 0, 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = this->fields.itemData,
        v10 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL),
        !v10) )
  {
LABEL_12:
    sub_1B4D1EC(itemData, method);
  }
  WarBoardManager__ShowItemSimplePopup(v10, v9, *(UnityEngine_Vector3_o *)&v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnUse(
        WarBoardItemComponent_o *this,
        int32_t squareIndex,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        bool isInsertTask,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Component_object; // x24
  __int64 v24; // x21
  System_Delegate_o **v25; // x24
  System_Delegate_o *v26; // x25
  WarBoardTaskBase_TaskCallback_o *v27; // x26
  System_Delegate_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  System_Delegate_o *v33; // x24
  WarBoardTaskBase_TaskCallback_o *v34; // x25
  System_Delegate_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  WarBoardTaskBase_TaskCallback_c *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *Instance; // x20
  __int64 v46; // x22
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x0

  if ( (byte_49B887D & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B4CF90(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B4CF90(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v12);
    sub_1B4CF90(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v13);
    sub_1B4CF90(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v14);
    sub_1B4CF90(&WarBoardSimpleAnimationPerformance_TypeInfo, v15);
    sub_1B4CF90(&WarBoardTaskBase___TypeInfo, v16);
    sub_1B4CF90(&StringLiteral_7947/*"ItemGet"*/, v17);
    byte_49B887D = 1;
  }
  v18 = sub_1B4D1DC(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_DWORD *)(v18 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v24 = sub_1B4D1DC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v24,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_7947/*"ItemGet"*/,
    0LL);
  if ( !v24 )
    goto LABEL_27;
  v25 = (System_Delegate_o **)(v24 + 32);
  v26 = *(System_Delegate_o **)(v24 + 32);
  v27 = (WarBoardTaskBase_TaskCallback_o *)sub_1B4D1DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)v18,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0LL);
  v31 = v28;
  if ( v28 )
  {
    v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v25 = v28;
    if ( (WarBoardTaskBase_TaskCallback_c *)v28->klass != v32 )
      goto LABEL_13;
  }
  else
  {
    *v25 = 0LL;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v28, v29, v30);
  v18 = v24 + 40;
  v33 = *(System_Delegate_o **)(v24 + 40);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_1B4D1DC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v35 = System_Delegate__Combine(v33, (System_Delegate_o *)v34, 0LL);
  v31 = v35;
  if ( !v35 )
  {
LABEL_14:
    *(_QWORD *)v18 = v31;
    goto LABEL_15;
  }
  v38 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v18 = v35, (WarBoardTaskBase_TaskCallback_c *)v35->klass != v38) )
  {
LABEL_13:
    sub_1B4D4AC(v31);
    goto LABEL_14;
  }
LABEL_15:
  sub_1B4CF34((CGThumbnailListItem_o *)v18, (int32_t)v31, v36, v37);
  if ( taskList )
  {
    items = taskList->fields._items;
    v42 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v24,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v24;
        sub_1B4CF34((CGThumbnailListItem_o *)(v44 + 4), v24, v39, v40);
      }
      return;
    }
LABEL_27:
    sub_1B4D1EC(v19, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = sub_1B4D038(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v19 )
    goto LABEL_27;
  v46 = v19;
  v47 = sub_1B4D0CC(v24, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
  if ( !v47 )
  {
    v51 = sub_1B4D210();
    sub_1B4D0B8(v51, 0LL);
  }
  if ( !*(_DWORD *)(v46 + 24) )
    sub_1B4D1F4(v47, v48);
  *(_QWORD *)(v46 + 32) = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)(v46 + 32), v24, v49, v50);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v46, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v46, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardItemData_o *itemData; // x8
  int v7; // s0

  if ( (byte_49B887F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49B887F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v7 = WarBoardManager__GetSquarePosition(
                                          Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B4D1EC(0LL, method);
  if ( !WarBoardItemData__get_Acquired(itemData, 0LL) )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_49B8878 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512, parents);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    byte_49B8878 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (UnityEngine_Component_o *)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                                   ComponentsInChildren_object,
                                                                   1,
                                                                   (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512);
        if ( ComponentsInChildren_object )
        {
          klass = ComponentsInChildren_object[1].klass;
          v16 = ComponentsInChildren_object;
          if ( (int)klass >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)klass )
      {
        v18 = (UnityEngine_Object_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v18,
                                                                     0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v10,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_358056C *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v18,
                                                                       0LL);
            items = v10->fields._items;
            v22 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v24 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B4D1F4(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B4D1EC(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&button->fields.tweenTargets, (int32_t)ComponentsInChildren_object, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_49B887A & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, enable);
    byte_49B887A = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    if ( enable )
    {
      v8 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v7, v8, 0, 0LL);
      return;
    }
    if ( v7->fields.mState )
    {
      v8 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v7, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_49B8879 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, enable);
    byte_49B8879 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B4D1EC(0LL, method);
  if ( !WarBoardItemData__get_Acquired(itemData, 0LL) )
    this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__WidgetDepthIncrement(
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
  il2cpp_array_size_t v11; // w22

  v4 = this;
  if ( (byte_49B8880 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1B4CF90(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512,
                                        *(_QWORD *)&value);
    byte_49B8880 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75513512);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields.uIWidgets, (int32_t)ComponentsInChildren_object, v8, v9);
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
      if ( v11 >= uIWidgets->max_length )
        sub_1B4D1F4(this, *(_QWORD *)&value);
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v11];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, this[2].fields.m_CachedPtr + value, 0LL);
      if ( max_length == ++v11 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1B4D1EC(this, *(_QWORD *)&value);
  }
}


void __fastcall WarBoardItemComponent___c__DisplayClass14_0___ctor(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent___c__DisplayClass14_0___OnUse_b__0(
        WarBoardItemComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0

  if ( (byte_49B8881 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49B8881 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_1B4D1EC(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}