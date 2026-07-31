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
  __int64 itemData; // x0
  struct WarBoardItemData_o *v19; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v26; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v28; // x8
  UnityEngine_Transform_array *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  UnityEngine_Transform_o *v36; // x21
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  UnityEngine_GameObject_o *v39; // x20
  __int64 v40; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935E58 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&UnityEngine_Transform___TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    byte_5935E58 = 1;
  }
  this->fields.itemData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemData,
    (int32_t)data,
    (System_String_o *)itemIconAtlas,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(itemData + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
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
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &iconId);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_26433/*"{0}"*/, v22, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0, 0) )
  {
    itemData = (__int64)this->fields.itemData;
    if ( !itemData )
      goto LABEL_25;
    v26 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0);
    if ( !v26 )
      goto LABEL_25;
    UISprite__set_spriteName(v26, (System_String_o *)itemData, 0);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v28 = this->fields.itemData;
  if ( !v28 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  SquarePosition = WarBoardManager__GetSquarePosition(
                     (WarBoardManager_o *)itemData,
                     v28->fields._squareIndex_k__BackingField,
                     0);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
  v29 = (UnityEngine_Transform_array *)sub_21FFD10(UnityEngine_Transform___TypeInfo, 1);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v29 )
    goto LABEL_25;
  v36 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_21FFDA4(itemData, v29->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v40 = sub_21FFEF0(0, v37);
      sub_21FFD90(v40, 0);
    }
  }
  if ( !LODWORD(v29->max_length) )
    sub_21FFED4(itemData);
  v29->m_Items[0] = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v29->m_Items, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  WarBoardItemComponent__SetButtonTweenTarget(this, v29, v38);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.itemData
    || (v39 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0),
        !v39) )
  {
LABEL_25:
    sub_21FFECC(itemData, v11);
  }
  UnityEngine_GameObject__SetActive(v39, (itemData & 1) == 0, 0);
  this->fields.isSelectable = 0;
}


void WarBoardItemComponent__ItemGetEffectEndCallback(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
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

  if ( (byte_5935E5C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardItemComponent_OnClick__);
    byte_5935E5C = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0) && this->fields.isSelectable )
  {
    v4 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_WarBoardItemComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v6 )
      {
        OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 24), 0, 0);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_21FFECC(itemData, method);
  }
  v8 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_21FFC68(Method_WarBoardItemComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_21FFC34(v8, v8[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v10 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)(v10 + 40), 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w8
  WarBoardTaskBase_TaskCallback_c *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  Il2CppObject *Instance; // x19
  __int64 v32; // x21
  __int64 v33; // x0
  __int64 v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x0

  if ( (byte_5935E5F & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_21FFC50(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    sub_21FFC50(&StringLiteral_8473/*"ItemGet"*/);
    byte_5935E5F = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = sub_21FFEBC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v6,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8473/*"ItemGet"*/,
    0);
  if ( !v6 )
    goto LABEL_19;
  v9 = (System_Delegate_o **)(v6 + 40);
  v10 = *(System_Delegate_o **)(v6 + 40);
  v11 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v12 = System_Delegate__Combine(v10, (System_Delegate_o *)v11, 0);
  v19 = (int)v12;
  if ( !v12 )
    goto LABEL_8;
  v20 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v12->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v9 = v12, (WarBoardTaskBase_TaskCallback_c *)v12->klass != v20) )
  {
    sub_220024C(v12, v20, v13, v14);
LABEL_8:
    *v9 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 40), v19, v13, v14, v15, v16, v17, v18);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
    if ( v7 )
    {
      v32 = v7;
      v33 = sub_21FFDA4(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v33 )
      {
        v41 = sub_21FFEF0(0, v34);
        sub_21FFD90(v41, 0);
      }
      if ( !*(_DWORD *)(v32 + 24) )
        sub_21FFED4(v33);
      *(_QWORD *)(v32 + 32) = v6;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), v6, v35, v36, v37, v38, v39, v40);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v32, 0);
        return;
      }
    }
LABEL_19:
    sub_21FFECC(v7, v8);
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v30[4] = (Il2CppClass *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 4), v6, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_5935E5D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardItemComponent_OnLongClick__);
    byte_5935E5D = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0) )
    return;
  v4 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_WarBoardItemComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 40), 0, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = this->fields.itemData,
        v9 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0), !v9) )
  {
LABEL_12:
    sub_21FFECC(itemData, method);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo_37ED7E0 *v18; // x1
  Il2CppObject *Component_object; // x24
  __int64 v20; // x21
  System_Delegate_o **v21; // x24
  System_Delegate_o *v22; // x25
  WarBoardTaskBase_TaskCallback_o *v23; // x26
  System_Delegate_o *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Delegate_o *v31; // x8
  WarBoardTaskBase_TaskCallback_c *v32; // x1
  System_Delegate_o *v33; // x24
  WarBoardTaskBase_TaskCallback_o *v34; // x25
  System_Delegate_o *v35; // x0
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  Il2CppObject *Instance; // x19
  __int64 v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x0

  if ( (byte_5935E5E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__);
    sub_21FFC50(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_21FFC50(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    sub_21FFC50(&StringLiteral_8473/*"ItemGet"*/);
    byte_5935E5E = 1;
  }
  v9 = sub_21FFEBC(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_31;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___;
  *(_DWORD *)(v9 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v18);
  v20 = sub_21FFEBC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v20,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8473/*"ItemGet"*/,
    0);
  if ( !v20 )
    goto LABEL_31;
  v21 = (System_Delegate_o **)(v20 + 32);
  v22 = *(System_Delegate_o **)(v20 + 32);
  v23 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0);
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0);
  v31 = v24;
  if ( v24 )
  {
    v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v21 = v24;
    if ( (WarBoardTaskBase_TaskCallback_c *)v24->klass != v32 )
      goto LABEL_13;
  }
  else
  {
    *v21 = 0;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v9 = v20 + 40;
  v33 = *(System_Delegate_o **)(v20 + 40);
  v34 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v34,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0);
  v35 = System_Delegate__Combine(v33, (System_Delegate_o *)v34, 0);
  v31 = v35;
  if ( !v35 )
  {
LABEL_14:
    *(_QWORD *)v9 = 0;
    goto LABEL_15;
  }
  v32 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v35->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v9 = v35, (WarBoardTaskBase_TaskCallback_c *)v35->klass != v32) )
  {
LABEL_13:
    sub_220024C(v31, v32, v25, v26);
    goto LABEL_14;
  }
LABEL_15:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9, (int32_t)v31, v25, v26, v36, v37, v38, v39);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v10 = sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
    v51 = v10;
    if ( isInsertTask )
    {
      if ( !v10 )
        goto LABEL_31;
      v52 = sub_21FFDA4(v20, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
      if ( v52 )
      {
        if ( *(_DWORD *)(v51 + 24) )
        {
          *(_QWORD *)(v51 + 32) = v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 32), v20, v54, v55, v56, v57, v58, v59);
          if ( Instance )
          {
            WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v51, 0);
            return;
          }
          goto LABEL_31;
        }
        goto LABEL_33;
      }
    }
    else
    {
      if ( !v10 )
        goto LABEL_31;
      v52 = sub_21FFDA4(v20, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
      if ( v52 )
      {
        if ( *(_DWORD *)(v51 + 24) )
        {
          *(_QWORD *)(v51 + 32) = v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 32), v20, v60, v61, v62, v63, v64, v65);
          if ( Instance )
          {
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v51, 0);
            return;
          }
LABEL_31:
          sub_21FFECC(v10, v11);
        }
LABEL_33:
        sub_21FFED4(v52);
      }
    }
    v66 = sub_21FFEF0(v52, v53);
    sub_21FFD90(v66, 0);
  }
  items = taskList->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_31;
  size = taskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v20,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v20;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), v20, v40, v41, v42, v43, v44, v45);
  }
}


void WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardItemData_o *itemData; // x8
  UnityEngine_Vector3_o SquarePosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935E60 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E60 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (SquarePosition = WarBoardManager__GetSquarePosition(Instance, itemData->fields._squareIndex_k__BackingField, 0),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
}


void WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_21FFECC(0, method);
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

  if ( (byte_5935E59 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E59 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
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
                                                                     (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_GameObject__Contains__);
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
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v23;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
            }
          }
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_21FFED4(ComponentsInChildren_object);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_21FFECC(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_21FFBF4(
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
void WarBoardItemComponent__SetColliderEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_5935E5B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E5B = 1;
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
      sub_21FFECC(v7, v6);
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
void WarBoardItemComponent__SetTouchEnable(WarBoardItemComponent_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_5935E5A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E5A = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable, method);
  if ( UnityEngine_Object__op_Inequality(button, 0, 0) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0);
  }
}


void WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_21FFECC(0, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  il2cpp_array_size_t max_length; // x21
  __int64 v15; // x22
  struct UIWidget_array *v16; // x8

  v4 = this;
  if ( (byte_5935E61 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    byte_5935E61 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91505760);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.uIWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    uIWidgets = v4->fields.uIWidgets;
    if ( !uIWidgets )
      goto LABEL_12;
  }
  max_length = uIWidgets->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = *p_uIWidgets;
      if ( !*p_uIWidgets )
        break;
      if ( (unsigned int)v15 >= LODWORD(v16->max_length) )
        sub_21FFED4(this);
      this = (WarBoardItemComponent_o *)v16->m_Items[v15];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, LODWORD(this[2].fields.m_CachedPtr) + value, 0);
      if ( (_DWORD)max_length == (_DWORD)++v15 )
        return;
    }
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&value);
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

  if ( (byte_5935E62 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5935E62 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (SquarePosition = WarBoardManager__GetSquarePosition((WarBoardManager_o *)_4__this, this->fields.squareIndex, 0),
        !transform) )
  {
    sub_21FFECC(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, SquarePosition, 0);
}