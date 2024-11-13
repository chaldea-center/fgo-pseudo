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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 itemData; // x0
  struct WarBoardItemData_o *v27; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v33; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v35; // x8
  int v36; // s0
  UnityEngine_Transform_array *v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x21
  const MethodInfo *v47; // x2
  UnityEngine_GameObject_o *v48; // x20
  __int64 v49; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B13BAE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, data, itemIconAtlas);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Transform___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v17, v18);
    byte_4B13BAE = 1;
  }
  this->fields.itemData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemData,
    (int64_t)data,
    (int64_t)itemIconAtlas,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  itemData = (__int64)this->fields.itemData;
  if ( !itemData )
    goto LABEL_25;
  *(_QWORD *)(itemData + 56) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(itemData + 56), (int64_t)this, v20, v21, v22, v23, v24, v25);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0LL);
  v27 = this->fields.itemData;
  if ( !v27 )
    goto LABEL_25;
  itemEntity = v27->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_25238/*"{0}"*/, v30, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(baseImageIcon, 0LL, 0LL) )
  {
    itemData = (__int64)this->fields.itemData;
    if ( !itemData )
      goto LABEL_25;
    v33 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0LL);
    if ( !v33 )
      goto LABEL_25;
    UISprite__set_spriteName(v33, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v35 = this->fields.itemData;
  if ( !v35 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v36 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v35->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v36, 0LL);
  v39 = (UnityEngine_Transform_array *)sub_1BCA888(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v39 )
    goto LABEL_25;
  v46 = itemData;
  if ( itemData )
  {
    itemData = sub_1BCA91C(itemData, v39->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v49 = sub_1BCAA60();
      sub_1BCA908(v49, 0LL);
    }
  }
  if ( !v39->max_length )
    sub_1BCAA44(itemData, v19);
  v39->m_Items[0] = (UnityEngine_Transform_o *)v46;
  sub_1BCA784((PartyOrganizationUtility_o *)v39->m_Items, v46, v40, v41, v42, v43, v44, v45);
  WarBoardItemComponent__SetButtonTweenTarget(this, v39, v47);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.itemData
    || (v48 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0LL),
        !v48) )
  {
LABEL_25:
    sub_1BCAA3C(itemData, v19);
  }
  UnityEngine_GameObject__SetActive(v48, (itemData & 1) == 0, 0LL);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardItemData_o *itemData; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x20
  __int64 v9; // x8
  struct WarBoardItemData_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x20
  __int64 v13; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v15; // x20
  WarBoardManager_o *v16; // x21
  int v17; // s0

  if ( (byte_4B13BB2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardItemComponent_OnClick__, v4, v5);
    byte_4B13BB2 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0LL) && this->fields.isSelectable )
  {
    v7 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardItemComponent_OnClick__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v9 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v9 )
      {
        OverwriteAssetSoundName__PlaySe(v8, *(System_String_o **)(v9 + 24), 0LL);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v10 = this->fields.itemData;
        if ( v10 )
        {
          if ( itemData )
          {
            WarBoardManager__SelectedPieceAction(
              (WarBoardManager_o *)itemData,
              v10->fields._squareIndex_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(itemData, method);
  }
  v11 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_WarBoardItemComponent_OnClick__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v13 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v13 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v12, *(System_String_o **)(v13 + 40), 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v15 = this->fields.itemData;
  v16 = (WarBoardManager_o *)Instance;
  itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !itemData )
    goto LABEL_22;
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL);
  if ( !v16 )
    goto LABEL_22;
  WarBoardManager__ShowItemSimplePopup(v16, v15, *(UnityEngine_Vector3_o *)&v17, 0LL);
}


void __fastcall WarBoardItemComponent__OnGet(
        WarBoardItemComponent_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  int64_t v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  _QWORD *v28; // x22
  System_Delegate_o *v29; // x23
  WarBoardTaskBase_TaskCallback_o *v30; // x24
  System_Delegate_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x8
  WarBoardTaskBase_TaskCallback_c *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  Il2CppObject *Instance; // x19
  __int64 v51; // x21
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x0

  if ( (byte_4B13BB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v11, v12);
    sub_1BCA7E0(&WarBoardSimpleAnimationPerformance_TypeInfo, v13, v14);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_8238/*"ItemGet"*/, v17, v18);
    byte_4B13BB5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v23 = sub_1BCAA2C(WarBoardSimpleAnimationPerformance_TypeInfo, v20, v21, v22);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v23,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8238/*"ItemGet"*/,
    0LL);
  if ( !v23 )
    goto LABEL_19;
  v28 = (_QWORD *)(v23 + 40);
  v29 = *(System_Delegate_o **)(v23 + 40);
  v30 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v25, v26, v27);
  WarBoardTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v31 = System_Delegate__Combine(v29, (System_Delegate_o *)v30, 0LL);
  v38 = (int64_t)v31;
  if ( !v31 )
    goto LABEL_8;
  v39 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v31->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v28 = v31, (WarBoardTaskBase_TaskCallback_c *)v31->klass != v39) )
  {
    sub_1BCACFC(v31);
LABEL_8:
    *v28 = v38;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 40), v38, v32, v33, v34, v35, v36, v37);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v24 = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v24 )
    {
      v51 = v24;
      v52 = sub_1BCA91C(v23, *(_QWORD *)(*(_QWORD *)v24 + 64LL));
      if ( !v52 )
      {
        v60 = sub_1BCAA60();
        sub_1BCA908(v60, 0LL);
      }
      if ( !*(_DWORD *)(v51 + 24) )
        sub_1BCAA44(v52, v53);
      *(_QWORD *)(v51 + 32) = v23;
      sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 32), v23, v54, v55, v56, v57, v58, v59);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v51, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(v24, v25);
  }
  items = taskList->fields._items;
  v47 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v23,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v23;
    sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), v23, v40, v41, v42, v43, v44, v45);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__OnLongClick(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardItemData_o *itemData; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x20
  __int64 v9; // x8
  Il2CppObject *Instance; // x0
  WarBoardItemData_o *v11; // x20
  WarBoardManager_o *v12; // x21
  int v13; // s0

  if ( (byte_4B13BB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_WarBoardItemComponent_OnLongClick__, v4, v5);
    byte_4B13BB3 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  v7 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_WarBoardItemComponent_OnLongClick__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v9 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v8, *(System_String_o **)(v9 + 40), 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v11 = this->fields.itemData,
        v12 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL),
        !v12) )
  {
LABEL_12:
    sub_1BCAA3C(itemData, method);
  }
  WarBoardManager__ShowItemSimplePopup(v12, v11, *(UnityEngine_Vector3_o *)&v13, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x23
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Component_object; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x2
  __int64 v42; // x3
  System_Delegate_o **v43; // x24
  System_Delegate_o *v44; // x25
  WarBoardTaskBase_TaskCallback_o *v45; // x26
  System_Delegate_o *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x8
  WarBoardTaskBase_TaskCallback_c *v54; // x1
  System_Delegate_o *v55; // x24
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  WarBoardTaskBase_TaskCallback_o *v59; // x25
  System_Delegate_o *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  WarBoardTaskBase_TaskCallback_c *v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  Il2CppObject *Instance; // x20
  __int64 v79; // x22
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x0

  if ( (byte_4B13BB4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex, taskList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v15, v16);
    sub_1BCA7E0(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v19, v20);
    sub_1BCA7E0(&WarBoardSimpleAnimationPerformance_TypeInfo, v21, v22);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_8238/*"ItemGet"*/, v25, v26);
    byte_4B13BB4 = 1;
  }
  v27 = sub_1BCAA2C(
          WarBoardItemComponent___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&squareIndex,
          taskList,
          isInsertTask);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_27;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)this, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v27 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v40 = sub_1BCAA2C(WarBoardSimpleAnimationPerformance_TypeInfo, v37, v38, v39);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v40,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8238/*"ItemGet"*/,
    0LL);
  if ( !v40 )
    goto LABEL_27;
  v43 = (System_Delegate_o **)(v40 + 32);
  v44 = *(System_Delegate_o **)(v40 + 32);
  v45 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v29, v41, v42);
  WarBoardTaskBase_TaskCallback___ctor(
    v45,
    (Il2CppObject *)v27,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v46 = System_Delegate__Combine(v44, (System_Delegate_o *)v45, 0LL);
  v53 = (int64_t)v46;
  if ( v46 )
  {
    v54 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v46->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v43 = v46;
    if ( (WarBoardTaskBase_TaskCallback_c *)v46->klass != v54 )
      goto LABEL_13;
  }
  else
  {
    *v43 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v46, v47, v48, v49, v50, v51, v52);
  v27 = v40 + 40;
  v55 = *(System_Delegate_o **)(v40 + 40);
  v59 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v56, v57, v58);
  WarBoardTaskBase_TaskCallback___ctor(
    v59,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v60 = System_Delegate__Combine(v55, (System_Delegate_o *)v59, 0LL);
  v53 = (int64_t)v60;
  if ( !v60 )
  {
LABEL_14:
    *(_QWORD *)v27 = v53;
    goto LABEL_15;
  }
  v67 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v60->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v27 = v60, (WarBoardTaskBase_TaskCallback_c *)v60->klass != v67) )
  {
LABEL_13:
    sub_1BCACFC(v53);
    goto LABEL_14;
  }
LABEL_15:
  sub_1BCA784((PartyOrganizationUtility_o *)v27, v53, v61, v62, v63, v64, v65, v66);
  if ( taskList )
  {
    items = taskList->fields._items;
    v75 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v40,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
      }
      else
      {
        v77 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v77[4] = (Il2CppClass *)v40;
        sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), v40, v68, v69, v70, v71, v72, v73);
      }
      return;
    }
LABEL_27:
    sub_1BCAA3C(v28, v29);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v28 = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v28 )
    goto LABEL_27;
  v79 = v28;
  v80 = sub_1BCA91C(v40, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
  if ( !v80 )
  {
    v88 = sub_1BCAA60();
    sub_1BCA908(v88, 0LL);
  }
  if ( !*(_DWORD *)(v79 + 24) )
    sub_1BCAA44(v80, v81);
  *(_QWORD *)(v79 + 32) = v40;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 32), v40, v82, v83, v84, v85, v86, v87);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v79, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v79, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardItemData_o *itemData; // x8
  int v8; // s0

  if ( (byte_4B13BB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BB6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  itemData = this->fields.itemData;
  if ( !itemData
    || !Instance
    || (*(UnityEngine_Vector3_o *)&v8 = WarBoardManager__GetSquarePosition(
                                          Instance,
                                          itemData->fields._squareIndex_k__BackingField,
                                          0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL),
        (Instance = (WarBoardManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1BCAA3C(0LL, method);
  if ( !WarBoardItemData__get_Acquired(itemData, 0LL) )
    this->fields.isSelectable = 1;
}


void __fastcall WarBoardItemComponent__SetButtonTweenTarget(
        WarBoardItemComponent_o *this,
        UnityEngine_Transform_array *parents,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t ComponentsInChildren_object; // x0
  __int64 v19; // x1
  signed int max_length; // w8
  unsigned int v21; // w24
  UnityEngine_Component_c *v22; // x8
  int64_t v23; // x22
  unsigned __int64 v24; // x29
  UnityEngine_Object_o *v25; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int64_t v35; // x1
  Il2CppClass **v36; // x0
  struct UICommonButton_o *button; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B13BAF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184, parents, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Contains__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B13BAF = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       parents,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( parents )
  {
    max_length = parents->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          goto LABEL_28;
        ComponentsInChildren_object = (int64_t)parents->m_Items[v21];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
        if ( ComponentsInChildren_object )
        {
          v22 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v23 = ComponentsInChildren_object;
          if ( (int)v22 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_24;
      }
      v24 = 0LL;
      while ( v24 < (unsigned int)v22 )
      {
        v25 = *(UnityEngine_Object_o **)(v23 + 32 + 8 * v24);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v25 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v25,
                                                   0LL);
          if ( !v17 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v17,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v25,
                                                     0LL);
            items = v17->fields._items;
            v33 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v17->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v17->fields._size;
            v35 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v36[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v35, v26, v27, v28, v29, v30, v31);
            }
          }
        }
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BCAA44(ComponentsInChildren_object, v19);
    }
  }
LABEL_24:
  if ( !v17
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v17,
                                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BCAA3C(ComponentsInChildren_object, v19);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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

  if ( (byte_4B13BB1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13BB1 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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

  if ( (byte_4B13BB0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, enable, method);
    byte_4B13BB0 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1BCAA3C(0LL, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int max_length; // w21
  il2cpp_array_size_t v15; // w22

  v4 = this;
  if ( (byte_4B13BB7 & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1BCA7E0(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184,
                                        *(_QWORD *)&value,
                                        method);
    byte_4B13BB7 = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____76859184);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v4->fields.uIWidgets,
      (int64_t)ComponentsInChildren_object,
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
      if ( v15 >= uIWidgets->max_length )
        sub_1BCAA44(this, *(_QWORD *)&value);
      this = (WarBoardItemComponent_o *)uIWidgets->m_Items[v15];
      if ( !this )
        break;
      UIWidget__set_depth((UIWidget_o *)this, this[2].fields.m_CachedPtr + value, 0LL);
      if ( max_length == ++v15 )
        return;
      uIWidgets = *p_uIWidgets;
    }
    while ( *p_uIWidgets );
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&value);
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
  __int64 v2; // x2
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x20
  int v6; // s0

  if ( (byte_4B13BB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13BB8 = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v6 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL);
}