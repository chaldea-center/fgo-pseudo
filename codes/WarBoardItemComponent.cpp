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
  __int64 itemData; // x0
  struct WarBoardItemData_o *v19; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v22; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v24; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v26; // x8
  UnityEngine_Transform_array *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Transform_o *v34; // x21
  const MethodInfo *v35; // x2
  UnityEngine_GameObject_o *v36; // x20
  __int64 v37; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC4C4F & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&UnityEngine_Transform___TypeInfo);
    sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    byte_4CC4C4F = 1;
  }
  this->fields.itemData = data;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(itemData + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0);
  v19 = this->fields.itemData;
  if ( !v19 )
    goto LABEL_25;
  itemEntity = v19->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_25231/*"{0}"*/, v22, 0);
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
    v24 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0);
    if ( !v24 )
      goto LABEL_25;
    UISprite__set_spriteName(v24, (System_String_o *)itemData, 0);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v26 = this->fields.itemData;
  if ( !v26 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)itemData,
                     v26->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v27 = (UnityEngine_Transform_array *)sub_1C71458(UnityEngine_Transform___TypeInfo, 1);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v27 )
    goto LABEL_25;
  v34 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_1C714EC(itemData, v27->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v37 = sub_1C7162C();
      sub_1C714D8(v37, 0);
    }
  }
  if ( !LODWORD(v27->max_length) )
    sub_1C71610(itemData);
  v27->m_Items[0] = v34;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v27->m_Items, (int32_t)v34, v28, v29, v30, v31, v32, v33);
  WarBoardItemComponent__SetButtonTweenTarget(this, v27, v35);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.itemData
    || (v36 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0),
        !v36) )
  {
LABEL_25:
    sub_1C71608(itemData, v11);
  }
  UnityEngine_GameObject__SetActive(v36, (itemData & 1) == 0, 0);
  this->fields.isSelectable = 0;
}


void WarBoardItemComponent__ItemGetEffectEndCallback(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v3);
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

  if ( (byte_4CC4C53 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardItemComponent_OnClick__);
    byte_4CC4C53 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0) && this->fields.isSelectable )
  {
    v4 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_WarBoardItemComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v6 )
      {
        OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 24), 0, 0);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C71608(itemData, method);
  }
  v8 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C713C8(Method_WarBoardItemComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C71394(v8, v8[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v10 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)(v10 + 40), 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v8; // x1
  System_Delegate_o **v9; // x22
  System_Delegate_o *v10; // x23
  WarBoardTaskBase_TaskCallback_o *v11; // x24
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Delegate_o *v19; // x8
  WarBoardTaskBase_TaskCallback_c *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  Il2CppObject *Instance; // x19
  __int64 v32; // x21
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  __int64 v40; // x0

  if ( (byte_4CC4C56 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1C713B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1C713B0(&WarBoardTaskBase___TypeInfo);
    sub_1C713B0(&StringLiteral_8141/*"ItemGet"*/);
    byte_4CC4C56 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = sub_1C715FC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v6,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8141/*"ItemGet"*/,
    0);
  if ( !v6 )
    goto LABEL_19;
  v9 = (System_Delegate_o **)(v6 + 40);
  v10 = *(System_Delegate_o **)(v6 + 40);
  v11 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v12 = System_Delegate__Combine(v10, (System_Delegate_o *)v11, 0);
  v19 = v12;
  if ( !v12 )
    goto LABEL_8;
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v12->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v9 = v12, (WarBoardTaskBase_TaskCallback_c *)v12->klass != v20) )
  {
    sub_1C719A4(v12);
LABEL_8:
    *v9 = v19;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 40), (int32_t)v19, v13, v14, v15, v16, v17, v18);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = sub_1C71458(WarBoardTaskBase___TypeInfo, 1);
    if ( v7 )
    {
      v32 = v7;
      v33 = sub_1C714EC(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v33 )
      {
        v40 = sub_1C7162C();
        sub_1C714D8(v40, 0);
      }
      if ( !*(_DWORD *)(v32 + 24) )
        sub_1C71610(v33);
      *(_QWORD *)(v32 + 32) = v6;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v32 + 32), v6, v34, v35, v36, v37, v38, v39);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v32, 0);
        return;
      }
    }
LABEL_19:
    sub_1C71608(v7, v8);
  }
  items = taskList->fields._items;
  v28 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v6,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), v6, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_4CC4C54 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardItemComponent_OnLongClick__);
    byte_4CC4C54 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  v4 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C713C8(Method_WarBoardItemComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 40), 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = this->fields.itemData,
        v9 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0), !v9) )
  {
LABEL_12:
    sub_1C71608(itemData, method);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Component_object; // x24
  __int64 v19; // x21
  System_Delegate_o **v20; // x24
  System_Delegate_o *v21; // x25
  WarBoardTaskBase_TaskCallback_o *v22; // x26
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Delegate_o *v30; // x8
  WarBoardTaskBase_TaskCallback_c *v31; // x1
  System_Delegate_o *v32; // x24
  WarBoardTaskBase_TaskCallback_o *v33; // x25
  System_Delegate_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  WarBoardTaskBase_TaskCallback_c *v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  Il2CppObject *Instance; // x20
  __int64 v53; // x22
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x0

  if ( (byte_4CC4C55 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C713B0(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__);
    sub_1C713B0(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C713B0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1C713B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1C713B0(&WarBoardTaskBase___TypeInfo);
    sub_1C713B0(&StringLiteral_8141/*"ItemGet"*/);
    byte_4CC4C55 = 1;
  }
  v9 = sub_1C715FC(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v19 = sub_1C715FC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v19,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8141/*"ItemGet"*/,
    0);
  if ( !v19 )
    goto LABEL_27;
  v20 = (System_Delegate_o **)(v19 + 32);
  v21 = *(System_Delegate_o **)(v19 + 32);
  v22 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0);
  v30 = v23;
  if ( v23 )
  {
    v31 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v20 = v23;
    if ( (WarBoardTaskBase_TaskCallback_c *)v23->klass != v31 )
      goto LABEL_13;
  }
  else
  {
    *v20 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v9 = v19 + 40;
  v32 = *(System_Delegate_o **)(v19 + 40);
  v33 = (WarBoardTaskBase_TaskCallback_o *)sub_1C715FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0);
  v30 = v34;
  if ( !v34 )
  {
LABEL_14:
    *(_QWORD *)v9 = v30;
    goto LABEL_15;
  }
  v41 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v34->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v9 = v34, (WarBoardTaskBase_TaskCallback_c *)v34->klass != v41) )
  {
LABEL_13:
    sub_1C719A4(v30);
    goto LABEL_14;
  }
LABEL_15:
  sub_1C71354((GrandQuestFolderBoardItem_o *)v9, (int32_t)v30, v35, v36, v37, v38, v39, v40);
  if ( taskList )
  {
    items = taskList->fields._items;
    v49 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v19,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v19;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 4), v19, v42, v43, v44, v45, v46, v47);
      }
      return;
    }
LABEL_27:
    sub_1C71608(v10, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = sub_1C71458(WarBoardTaskBase___TypeInfo, 1);
  if ( !v10 )
    goto LABEL_27;
  v53 = v10;
  v54 = sub_1C714EC(v19, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v54 )
  {
    v61 = sub_1C7162C();
    sub_1C714D8(v61, 0);
  }
  if ( !*(_DWORD *)(v53 + 24) )
    sub_1C71610(v54);
  *(_QWORD *)(v53 + 32) = v19;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v53 + 32), v19, v55, v56, v57, v58, v59, v60);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v53, 0);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v53, 0);
}


void WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardItemData_o *itemData; // x8
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC4C57 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC4C57 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (SquarePosition = WarBoardManager__GetSquarePosition(Instance, itemData->fields._squareIndex_k__BackingField, 0),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
}


void WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1C71608(0, method);
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

  if ( (byte_4CC4C50 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4C50 = 1;
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


void WarBoardItemComponent__SetColliderEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4CC4C52 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4C52 = 1;
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


void WarBoardItemComponent__SetTouchEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4CC4C51 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC4C51 = 1;
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


void WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1C71608(0, method);
  if ( !WarBoardItemData__get_Acquired(itemData, 0) )
    this->fields.isSelectable = 0;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int max_length; // w21
  unsigned int v15; // w22

  v4 = this;
  if ( (byte_4CC4C58 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    byte_4CC4C58 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v4->fields.uIWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_11;
  }
  max_length = uIWidgets->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= LODWORD(uIWidgets->max_length) )
        sub_1C71610(this);
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v15];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.m_CachedPtr) + value, 0);
      if ( max_length == ++v15 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1C71608(this, *(_QWORD *)&value);
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

  if ( (byte_4CC4C59 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC4C59 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)_4__this, this->fields.squareIndex, 0),
        !transform) )
  {
    sub_1C71608(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
}