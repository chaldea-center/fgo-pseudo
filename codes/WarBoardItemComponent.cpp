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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 itemData; // x0
  struct WarBoardItemData_o *v14; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v19; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v21; // x8
  int v22; // s0
  UnityEngine_Transform_array *v25; // x20
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_Transform_o *v29; // x21
  const MethodInfo *v30; // x2
  UnityEngine_GameObject_o *v31; // x20
  __int64 v32; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F9F3B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, data);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B640C8(&UnityEngine_Transform___TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v10);
    byte_49F9F3B = 1;
  }
  this->fields.itemData = data;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.itemData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(itemData + 56), (int32_t)this, v11, v12);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0LL);
  v14 = this->fields.itemData;
  if ( !v14 )
    goto LABEL_25;
  itemEntity = v14->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_24883/*"{0}"*/, v17, 0LL);
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
    v19 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0LL);
    if ( !v19 )
      goto LABEL_25;
    UISprite__set_spriteName(v19, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v21 = this->fields.itemData;
  if ( !v21 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v22 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v21->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = (UnityEngine_Transform_array *)sub_1B64170(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v25 )
    goto LABEL_25;
  v29 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_1B64204(itemData, v25->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v32 = sub_1B64348(0LL);
      sub_1B641F0(v32, 0LL);
    }
  }
  if ( !v25->max_length )
    sub_1B6432C(itemData, v26);
  v25->m_Items[0] = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v25->m_Items, (int32_t)v29, v27, v28);
  WarBoardItemComponent__SetButtonTweenTarget(this, v25, v30);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.itemData
    || (v31 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0LL),
        !v31) )
  {
LABEL_25:
    sub_1B64324(itemData);
  }
  UnityEngine_GameObject__SetActive(v31, (itemData & 1) == 0, 0LL);
  this->fields.isSelectable = 0;
}


void __fastcall WarBoardItemComponent__ItemGetEffectEndCallback(
        WarBoardItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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

  if ( (byte_49F9F3F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&Method_WarBoardItemComponent_OnClick__, v3);
    byte_49F9F3F = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0LL) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_WarBoardItemComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v7 )
      {
        OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0LL);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B64324(itemData);
  }
  v9 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_WarBoardItemComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v11 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)(v11 + 40), 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Delegate_o **v19; // x22
  System_Delegate_o *v20; // x23
  WarBoardTaskBase_TaskCallback_o *v21; // x24
  System_Delegate_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Delegate_o *v25; // x8
  WarBoardTaskBase_TaskCallback_c *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  Il2CppObject *Instance; // x19
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x0

  if ( (byte_49F9F42 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v8);
    sub_1B640C8(&WarBoardSimpleAnimationPerformance_TypeInfo, v9);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_8074/*"ItemGet"*/, v11);
    byte_49F9F42 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = sub_1B64314(WarBoardSimpleAnimationPerformance_TypeInfo, v13, v14);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v15,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8074/*"ItemGet"*/,
    0LL);
  if ( !v15 )
    goto LABEL_19;
  v19 = (System_Delegate_o **)(v15 + 40);
  v20 = *(System_Delegate_o **)(v15 + 40);
  v21 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v17, v18);
  WarBoardTaskBase_TaskCallback___ctor(
    v21,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v22 = System_Delegate__Combine(v20, (System_Delegate_o *)v21, 0LL);
  v25 = v22;
  if ( !v22 )
    goto LABEL_8;
  v26 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v22->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v19 = v22, (WarBoardTaskBase_TaskCallback_c *)v22->klass != v26) )
  {
    sub_1B645E4(v22);
LABEL_8:
    *v19 = v25;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 40), (int32_t)v25, v23, v24);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v16 = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v16 )
    {
      v34 = v16;
      v35 = sub_1B64204(v15, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
      if ( !v35 )
      {
        v39 = sub_1B64348(0LL);
        sub_1B641F0(v39, 0LL);
      }
      if ( !*(_DWORD *)(v34 + 24) )
        sub_1B6432C(v35, v36);
      *(_QWORD *)(v34 + 32) = v15;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), v15, v37, v38);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v34, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B64324(v16);
  }
  items = taskList->fields._items;
  v30 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v15,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), v15, v27, v28);
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

  if ( (byte_49F9F40 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1B640C8(&Method_WarBoardItemComponent_OnLongClick__, v3);
    byte_49F9F40 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  v5 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_WarBoardItemComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 40), 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = this->fields.itemData,
        v10 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL),
        !v10) )
  {
LABEL_12:
    sub_1B64324(itemData);
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
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Component_object; // x24
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Delegate_o **v28; // x24
  System_Delegate_o *v29; // x25
  WarBoardTaskBase_TaskCallback_o *v30; // x26
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Delegate_o *v34; // x8
  WarBoardTaskBase_TaskCallback_c *v35; // x1
  System_Delegate_o *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  WarBoardTaskBase_TaskCallback_o *v39; // x25
  System_Delegate_o *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  WarBoardTaskBase_TaskCallback_c *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  Il2CppObject *Instance; // x20
  __int64 v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x0

  if ( (byte_49F9F41 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1B640C8(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1B640C8(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v12);
    sub_1B640C8(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v14);
    sub_1B640C8(&WarBoardSimpleAnimationPerformance_TypeInfo, v15);
    sub_1B640C8(&WarBoardTaskBase___TypeInfo, v16);
    sub_1B640C8(&StringLiteral_8074/*"ItemGet"*/, v17);
    byte_49F9F41 = 1;
  }
  v18 = sub_1B64314(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&squareIndex, taskList);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v20, v21);
  *(_DWORD *)(v18 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v25 = sub_1B64314(WarBoardSimpleAnimationPerformance_TypeInfo, v23, v24);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v25,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8074/*"ItemGet"*/,
    0LL);
  if ( !v25 )
    goto LABEL_27;
  v28 = (System_Delegate_o **)(v25 + 32);
  v29 = *(System_Delegate_o **)(v25 + 32);
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v26, v27);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v18,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v31 = System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0LL);
  v34 = v31;
  if ( v31 )
  {
    v35 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v28 = v31;
    if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != v35 )
      goto LABEL_13;
  }
  else
  {
    *v28 = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v31, v32, v33);
  v18 = v25 + 40;
  v36 = *(System_Delegate_o **)(v25 + 40);
  v39 = (WarBoardTaskBase_TaskCallback_o *)sub_1B64314(WarBoardTaskBase_TaskCallback_TypeInfo, v37, v38);
  WarBoardTaskBase_TaskCallback___ctor(
    v39,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v40 = System_Delegate__Combine(v36, (System_Delegate_o *)v39, 0LL);
  v34 = v40;
  if ( !v40 )
  {
LABEL_14:
    *(_QWORD *)v18 = v34;
    goto LABEL_15;
  }
  v43 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v40->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v18 = v40, (WarBoardTaskBase_TaskCallback_c *)v40->klass != v43) )
  {
LABEL_13:
    sub_1B645E4(v34);
    goto LABEL_14;
  }
LABEL_15:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v18, (int32_t)v34, v41, v42);
  if ( taskList )
  {
    items = taskList->fields._items;
    v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v25,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v49 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v49[4] = (Il2CppClass *)v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), v25, v44, v45);
      }
      return;
    }
LABEL_27:
    sub_1B64324(v19);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = sub_1B64170(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v19 )
    goto LABEL_27;
  v51 = v19;
  v52 = sub_1B64204(v25, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
  if ( !v52 )
  {
    v56 = sub_1B64348(0LL);
    sub_1B641F0(v56, 0LL);
  }
  if ( !*(_DWORD *)(v51 + 24) )
    sub_1B6432C(v52, v53);
  *(_QWORD *)(v51 + 32) = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v51 + 32), v25, v54, v55);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v51, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v51, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  struct WarBoardItemData_o *itemData; // x8
  int v6; // s0

  if ( (byte_49F9F43 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F43 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v6 = WarBoardManager__GetSquarePosition(
                                          Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B64324(0LL);
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
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v24; // x1
  Il2CppClass **v25; // x0
  struct UICommonButton_o *button; // x19
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49F9F3C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176, parents);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49F9F3C = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
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
                                                                     (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_GameObject__Contains__);
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
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
            }
          }
        }
        LODWORD(klass) = v16[1].klass;
        if ( (__int64)++v17 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B6432C(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v10,
                                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B64324(ComponentsInChildren_object);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v27,
    v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  struct UICommonButton_o *v6; // x0
  bool v7; // w1

  if ( (byte_49F9F3E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9F3E = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    if ( enable )
    {
      v7 = 1;
LABEL_11:
      UICommonButton__SetButtonEnableAndKeepState(v6, v7, 0, 0LL);
      return;
    }
    if ( v6->fields.mState )
    {
      v7 = 0;
      goto LABEL_11;
    }
    UICommonButton__SetColliderEnable(v6, 0, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  UICommonButton_o *v6; // x0

  if ( (byte_49F9F3D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, enable);
    byte_49F9F3D = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v6 = this->fields.button;
    if ( !v6 )
      sub_1B64324(0LL);
    UICommonButton__SetButtonEnableAndKeepState(v6, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B64324(0LL);
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
  int32_t v9; // w3
  int max_length; // w21
  il2cpp_array_size_t v11; // w22

  v4 = this;
  if ( (byte_49F9F44 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1B640C8(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176,
                                        *(_QWORD *)&value);
    byte_49F9F44 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____75728176);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&v4->fields.uIWidgets,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9);
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
        sub_1B6432C(this, *(_QWORD *)&value);
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
    sub_1B64324(this);
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

  if ( (byte_49F9F45 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_49F9F45 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_1B64324(_4__this);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}