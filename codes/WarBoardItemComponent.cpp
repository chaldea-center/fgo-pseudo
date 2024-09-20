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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 itemData; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
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
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Transform_o *v28; // x21
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *v30; // x20
  __int64 v31; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A58C53 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&UnityEngine_Transform___TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A58C53 = 1;
  }
  this->fields.itemData = data;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.itemData,
    (int32_t)data,
    (int32_t)itemIconAtlas,
    (int32_t)method);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(itemData + 56), (int32_t)this, v8, v9);
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
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v11, v12, v13);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_24983/*"{0}"*/, v17, 0LL);
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
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v25 = (UnityEngine_Transform_array *)sub_1B88658(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v25 )
    goto LABEL_25;
  v28 = (UnityEngine_Transform_o *)itemData;
  if ( itemData )
  {
    itemData = sub_1B886EC(itemData, v25->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v31 = sub_1B88830(0LL);
      sub_1B886D8(v31, 0LL);
    }
  }
  if ( !v25->max_length )
    sub_1B88814(itemData, v7);
  v25->m_Items[0] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v25->m_Items, (int32_t)v28, v26, v27);
  WarBoardItemComponent__SetButtonTweenTarget(this, v25, v29);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.itemData
    || (v30 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0LL),
        !v30) )
  {
LABEL_25:
    sub_1B8880C(itemData, v7);
  }
  UnityEngine_GameObject__SetActive(v30, (itemData & 1) == 0, 0LL);
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
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
  int v14; // s0

  if ( (byte_4A58C57 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardItemComponent_OnClick__);
    byte_4A58C57 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0LL) && this->fields.isSelectable )
  {
    v4 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_WarBoardItemComponent_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v6 )
      {
        OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 24), 0LL);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v7 = this->fields.itemData;
        if ( v7 )
        {
          if ( itemData )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)itemData,
              v7->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(itemData, method);
  }
  v8 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B885C8(Method_WarBoardItemComponent_OnClick__);
  v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v10 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v10 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v9, *(System_String_o **)(v10 + 40), 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v12 = this->fields.itemData;
  v13 = (WarBoardManager_o *)Instance;
  itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !itemData )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL);
  if ( !v13 )
    goto LABEL_22;
  WarBoardManager__ShowItemSimplePopup(v13, v12, *(UnityEngine_Vector3_o *)&v14, 0LL);
}


void __fastcall WarBoardItemComponent__OnGet(
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
  System_Delegate_o *v15; // x8
  WarBoardTaskBase_TaskCallback_c *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  Il2CppObject *Instance; // x19
  __int64 v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x0

  if ( (byte_4A58C5A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1B885B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    sub_1B885B0(&StringLiteral_8112/*"ItemGet"*/);
    byte_4A58C5A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v6 = sub_1B887FC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v6,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8112/*"ItemGet"*/,
    0LL);
  if ( !v6 )
    goto LABEL_19;
  v9 = (System_Delegate_o **)(v6 + 40);
  v10 = *(System_Delegate_o **)(v6 + 40);
  v11 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v11,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v12 = System_Delegate__Combine(v10, (System_Delegate_o *)v11, 0LL);
  v15 = v12;
  if ( !v12 )
    goto LABEL_8;
  v16 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v12->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v9 = v12, (WarBoardTaskBase_TaskCallback_c *)v12->klass != v16) )
  {
    sub_1B88ACC(v12);
LABEL_8:
    *v9 = v15;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)v15, v13, v14);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v7 = sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v7 )
    {
      v24 = v7;
      v25 = sub_1B886EC(v6, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v25 )
      {
        v29 = sub_1B88830(0LL);
        sub_1B886D8(v29, 0LL);
      }
      if ( !*(_DWORD *)(v24 + 24) )
        sub_1B88814(v25, v26);
      *(_QWORD *)(v24 + 32) = v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), v6, v27, v28);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v24, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1B8880C(v7, v8);
  }
  items = taskList->fields._items;
  v20 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), v6, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x20
  __int64 v6; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v8; // x20
  WarBoardManager_o *v9; // x21
  int v10; // s0

  if ( (byte_4A58C58 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardItemComponent_OnLongClick__);
    byte_4A58C58 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  v4 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_WarBoardItemComponent_OnLongClick__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v6 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v5, *(System_String_o **)(v6 + 40), 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v8 = this->fields.itemData,
        v9 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL),
        !v9) )
  {
LABEL_12:
    sub_1B8880C(itemData, method);
  }
  WarBoardManager__ShowItemSimplePopup(v9, v8, *(UnityEngine_Vector3_o *)&v10, 0LL);
}


void __fastcall WarBoardItemComponent__OnUse(
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
  Il2CppObject *Component_object; // x24
  __int64 v15; // x21
  System_Delegate_o **v16; // x24
  System_Delegate_o *v17; // x25
  WarBoardTaskBase_TaskCallback_o *v18; // x26
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Delegate_o *v22; // x8
  WarBoardTaskBase_TaskCallback_c *v23; // x1
  System_Delegate_o *v24; // x24
  WarBoardTaskBase_TaskCallback_o *v25; // x25
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  WarBoardTaskBase_TaskCallback_c *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *Instance; // x20
  __int64 v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x0

  if ( (byte_4A58C59 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__);
    sub_1B885B0(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__);
    sub_1B885B0(&WarBoardSimpleAnimationPerformance_TypeInfo);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    sub_1B885B0(&StringLiteral_8112/*"ItemGet"*/);
    byte_4A58C59 = 1;
  }
  v9 = sub_1B887FC(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = sub_1B887FC(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v15,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8112/*"ItemGet"*/,
    0LL);
  if ( !v15 )
    goto LABEL_27;
  v16 = (System_Delegate_o **)(v15 + 32);
  v17 = *(System_Delegate_o **)(v15 + 32);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  v22 = v19;
  if ( v19 )
  {
    v23 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v16 = v19;
    if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != v23 )
      goto LABEL_13;
  }
  else
  {
    *v16 = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v19, v20, v21);
  v9 = v15 + 40;
  v24 = *(System_Delegate_o **)(v15 + 40);
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v26 = System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  v22 = v26;
  if ( !v26 )
  {
LABEL_14:
    *(_QWORD *)v9 = v22;
    goto LABEL_15;
  }
  v29 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v9 = v26, (WarBoardTaskBase_TaskCallback_c *)v26->klass != v29) )
  {
LABEL_13:
    sub_1B88ACC(v22);
    goto LABEL_14;
  }
LABEL_15:
  sub_1B88554((ServantStatusBattleListViewItem_o *)v9, (int32_t)v22, v27, v28);
  if ( taskList )
  {
    items = taskList->fields._items;
    v33 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v15,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v15;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 4), v15, v30, v31);
      }
      return;
    }
LABEL_27:
    sub_1B8880C(v10, v11);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v10 = sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_27;
  v37 = v10;
  v38 = sub_1B886EC(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
  if ( !v38 )
  {
    v42 = sub_1B88830(0LL);
    sub_1B886D8(v42, 0LL);
  }
  if ( !*(_DWORD *)(v37 + 24) )
    sub_1B88814(v38, v39);
  *(_QWORD *)(v37 + 32) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 32), v15, v40, v41);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v37, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardItemData_o *itemData; // x8
  int v7; // s0

  if ( (byte_4A58C5B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C5B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B8880C(0LL, method);
  if ( !WarBoardItemData__get_Acquired(itemData, 0LL) )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  UnityEngine_Component_o *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w24
  UnityEngine_Component_c *klass; // x8
  UnityEngine_Component_o *v10; // x22
  unsigned __int64 v11; // x29
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v18; // x1
  Il2CppClass **v19; // x0
  struct UICommonButton_o *button; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A58C54 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C54 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
                                                                   (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
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
      v11 = 0LL;
      while ( v11 < (unsigned int)klass )
      {
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&v10[1].monitor + v11);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)v12,
                                                                     0LL);
          if ( !v4 )
            goto LABEL_27;
          ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___Contains(
                                                                     v4,
                                                                     (Il2CppObject *)ComponentsInChildren_object,
                                                                     (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)v12,
                                                                       0LL);
            items = v4->fields._items;
            v16 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v4->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v4->fields._size;
            v18 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v4,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
            }
            else
            {
              v19 = &items->obj.klass + size;
              v4->fields._size = size + 1;
              v19[4] = (Il2CppClass *)v18;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
            }
          }
        }
        LODWORD(klass) = v10[1].klass;
        if ( (__int64)++v11 >= (int)klass )
          goto LABEL_23;
      }
LABEL_28:
      sub_1B88814(ComponentsInChildren_object, v6);
    }
  }
LABEL_24:
  if ( !v4
    || (button = this->fields.button,
        ComponentsInChildren_object = (UnityEngine_Component_o *)System_Collections_Generic_List_object___ToArray(
                                                                   v4,
                                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1B8880C(ComponentsInChildren_object, v6);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&button->fields.tweenTargets,
    (int32_t)ComponentsInChildren_object,
    v21,
    v22);
}


void __fastcall WarBoardItemComponent__SetColliderEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  struct UICommonButton_o *v7; // x0
  bool v8; // w1

  if ( (byte_4A58C56 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C56 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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


void __fastcall WarBoardItemComponent__SetTouchEnable(
        WarBoardItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *button; // x21
  __int64 v6; // x1
  UICommonButton_o *v7; // x0

  if ( (byte_4A58C55 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58C55 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1B8880C(0LL, method);
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
  if ( (byte_4A58C5C & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    byte_4A58C5C = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76107672);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1B88554(
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
        sub_1B88814(this, *(_QWORD *)&value);
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
    sub_1B8880C(this, *(_QWORD *)&value);
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

  if ( (byte_4A58C5D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58C5D = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_1B8880C(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}