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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 itemData; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct WarBoardItemData_o *v26; // x8
  struct WarBoardItemEntity_o *itemEntity; // x8
  UISprite_o *itemIcon; // x20
  Il2CppObject *v29; // x0
  UnityEngine_Object_o *baseImageIcon; // x20
  UISprite_o *v31; // x20
  UnityEngine_Transform_o *transform; // x20
  struct WarBoardItemData_o *v33; // x8
  int v34; // s0
  UnityEngine_Transform_array *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x21
  const MethodInfo *v45; // x2
  UnityEngine_GameObject_o *v46; // x20
  __int64 v47; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B64541 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, data);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1BE4ACC(&UnityEngine_Transform___TypeInfo, v13);
    sub_1BE4ACC(&StringLiteral_25327/*"{0}"*/, v14);
    byte_4B64541 = 1;
  }
  this->fields.itemData = data;
  sub_1BE4A70(
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
  sub_1BE4A70((PartyOrganizationUtility_o *)(itemData + 56), (int64_t)this, v16, v17, v18, v19, v20, v21);
  itemData = (__int64)this->fields.itemIcon;
  if ( !itemData )
    goto LABEL_25;
  UISprite__set_atlas((UISprite_o *)itemData, itemIconAtlas, 0LL);
  v26 = this->fields.itemData;
  if ( !v26 )
    goto LABEL_25;
  itemEntity = v26->fields.itemEntity;
  if ( !itemEntity )
    goto LABEL_25;
  itemIcon = this->fields.itemIcon;
  iconId = itemEntity->fields.iconId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v23, v24, v25);
  itemData = (__int64)System_String__Format((System_String_o *)StringLiteral_25327/*"{0}"*/, v29, 0LL);
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
    v31 = this->fields.baseImageIcon;
    itemData = (__int64)WarBoardItemData__get_BaseImageSpriteName((WarBoardItemData_o *)itemData, 0LL);
    if ( !v31 )
      goto LABEL_25;
    UISprite__set_spriteName(v31, (System_String_o *)itemData, 0LL);
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  itemData = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v33 = this->fields.itemData;
  if ( !v33 )
    goto LABEL_25;
  if ( !itemData )
    goto LABEL_25;
  *(UnityEngine_Vector3_o *)&v34 = WarBoardManager__GetSquarePosition(
                                     (WarBoardManager_o *)itemData,
                                     v33->fields._squareIndex_k__BackingField,
                                     0LL);
  if ( !transform )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  v37 = (UnityEngine_Transform_array *)sub_1BE4B74(UnityEngine_Transform___TypeInfo, 1LL);
  itemData = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v37 )
    goto LABEL_25;
  v44 = itemData;
  if ( itemData )
  {
    itemData = sub_1BE4C08(itemData, v37->obj.klass->_1.element_class);
    if ( !itemData )
    {
      v47 = sub_1BE4D4C();
      sub_1BE4BF4(v47, 0LL);
    }
  }
  if ( !v37->max_length )
    sub_1BE4D30(itemData, v15);
  v37->m_Items[0] = (UnityEngine_Transform_o *)v44;
  sub_1BE4A70((PartyOrganizationUtility_o *)v37->m_Items, v44, v38, v39, v40, v41, v42, v43);
  WarBoardItemComponent__SetButtonTweenTarget(this, v37, v45);
  itemData = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.itemData
    || (v46 = (UnityEngine_GameObject_o *)itemData,
        itemData = WarBoardItemData__get_Acquired(this->fields.itemData, 0LL),
        !v46) )
  {
LABEL_25:
    sub_1BE4D28(itemData, v15);
  }
  UnityEngine_GameObject__SetActive(v46, (itemData & 1) == 0, 0LL);
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
    sub_1BE4D28(0LL, v3);
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

  if ( (byte_4B64545 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BE4ACC(&Method_WarBoardItemComponent_OnClick__, v3);
    byte_4B64545 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  if ( WarBoardManager__get_isSelectedPiece((WarBoardManager_o *)itemData, 0LL) && this->fields.isSelectable )
  {
    v5 = Method_WarBoardItemComponent_OnClick__;
    if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_WarBoardItemComponent_OnClick__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( itemData )
    {
      v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
      if ( v7 )
      {
        OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 24), 0LL);
        itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BE4D28(itemData, method);
  }
  v9 = Method_WarBoardItemComponent_OnClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BE4AE4(Method_WarBoardItemComponent_OnClick__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData )
    goto LABEL_22;
  v11 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField;
  if ( !v11 )
    goto LABEL_22;
  OverwriteAssetSoundName__PlaySe(v10, *(System_String_o **)(v11 + 40), 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  int64_t v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x22
  System_Delegate_o *v17; // x23
  WarBoardTaskBase_TaskCallback_o *v18; // x24
  System_Delegate_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x8
  WarBoardTaskBase_TaskCallback_c *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  Il2CppObject *Instance; // x19
  __int64 v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x0

  if ( (byte_4B64548 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, taskList);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1BE4ACC(&WarBoardTaskBase_TaskCallback_TypeInfo, v7);
    sub_1BE4ACC(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v8);
    sub_1BE4ACC(&WarBoardSimpleAnimationPerformance_TypeInfo, v9);
    sub_1BE4ACC(&WarBoardTaskBase___TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_8257/*"ItemGet"*/, v11);
    byte_4B64548 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v13 = sub_1BE4D18(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v13,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8257/*"ItemGet"*/,
    0LL);
  if ( !v13 )
    goto LABEL_19;
  v16 = (_QWORD *)(v13 + 40);
  v17 = *(System_Delegate_o **)(v13 + 40);
  v18 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v19 = System_Delegate__Combine(v17, (System_Delegate_o *)v18, 0LL);
  v26 = (int64_t)v19;
  if ( !v19 )
    goto LABEL_8;
  v27 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v19->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v16 = v19, (WarBoardTaskBase_TaskCallback_c *)v19->klass != v27) )
  {
    sub_1BE4FE8(v19);
LABEL_8:
    *v16 = v26;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 40), v26, v20, v21, v22, v23, v24, v25);
  if ( !taskList )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v14 = sub_1BE4B74(WarBoardTaskBase___TypeInfo, 1LL);
    if ( v14 )
    {
      v39 = v14;
      v40 = sub_1BE4C08(v13, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
      if ( !v40 )
      {
        v48 = sub_1BE4D4C();
        sub_1BE4BF4(v48, 0LL);
      }
      if ( !*(_DWORD *)(v39 + 24) )
        sub_1BE4D30(v40, v41);
      *(_QWORD *)(v39 + 32) = v13;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 32), v13, v42, v43, v44, v45, v46, v47);
      if ( Instance )
      {
        WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v39, 0LL);
        return;
      }
    }
LABEL_19:
    sub_1BE4D28(v14, v15);
  }
  items = taskList->fields._items;
  v35 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
  ++taskList->fields._version;
  if ( !items )
    goto LABEL_19;
  size = taskList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskList,
      (Il2CppObject *)v13,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + size;
    taskList->fields._size = size + 1;
    v37[4] = (Il2CppClass *)v13;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v37 + 4), v13, v28, v29, v30, v31, v32, v33);
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

  if ( (byte_4B64546 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    sub_1BE4ACC(&Method_WarBoardItemComponent_OnLongClick__, v3);
    byte_4B64546 = 1;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_12;
  if ( WarBoardItemData__get_Acquired(itemData, 0LL) )
    return;
  v5 = Method_WarBoardItemComponent_OnLongClick__;
  if ( (*((_BYTE *)Method_WarBoardItemComponent_OnLongClick__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BE4AE4(Method_WarBoardItemComponent_OnLongClick__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
  itemData = (WarBoardItemData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !itemData
    || (v7 = *(_QWORD *)&itemData[4].fields._squareIndex_k__BackingField) == 0
    || (OverwriteAssetSoundName__PlaySe(v6, *(System_String_o **)(v7 + 40), 0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        v9 = this->fields.itemData,
        v10 = (WarBoardManager_o *)Instance,
        (itemData = (WarBoardItemData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)itemData, 0LL),
        !v10) )
  {
LABEL_12:
    sub_1BE4D28(itemData, method);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Component_object; // x24
  int64_t v28; // x21
  System_Delegate_o **v29; // x24
  System_Delegate_o *v30; // x25
  WarBoardTaskBase_TaskCallback_o *v31; // x26
  System_Delegate_o *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x8
  WarBoardTaskBase_TaskCallback_c *v40; // x1
  System_Delegate_o *v41; // x24
  WarBoardTaskBase_TaskCallback_o *v42; // x25
  System_Delegate_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  WarBoardTaskBase_TaskCallback_c *v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  Il2CppClass **v60; // x0
  Il2CppObject *Instance; // x20
  __int64 v62; // x22
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x0

  if ( (byte_4B64547 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, *(_QWORD *)&squareIndex);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1BE4ACC(&WarBoardTaskBase_TaskCallback_TypeInfo, v11);
    sub_1BE4ACC(&Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__, v12);
    sub_1BE4ACC(&WarBoardItemComponent___c__DisplayClass14_0_TypeInfo, v13);
    sub_1BE4ACC(&Method_WarBoardItemComponent_ItemGetEffectEndCallback__, v14);
    sub_1BE4ACC(&WarBoardSimpleAnimationPerformance_TypeInfo, v15);
    sub_1BE4ACC(&WarBoardTaskBase___TypeInfo, v16);
    sub_1BE4ACC(&StringLiteral_8257/*"ItemGet"*/, v17);
    byte_4B64547 = 1;
  }
  v18 = sub_1BE4D18(WarBoardItemComponent___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_27;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = squareIndex;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v28 = sub_1BE4D18(WarBoardSimpleAnimationPerformance_TypeInfo);
  WarBoardSimpleAnimationPerformance___ctor(
    (WarBoardSimpleAnimationPerformance_o *)v28,
    (SimpleAnimation_o *)Component_object,
    (System_String_o *)StringLiteral_8257/*"ItemGet"*/,
    0LL);
  if ( !v28 )
    goto LABEL_27;
  v29 = (System_Delegate_o **)(v28 + 32);
  v30 = *(System_Delegate_o **)(v28 + 32);
  v31 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v18,
    Method_WarBoardItemComponent___c__DisplayClass14_0__OnUse_b__0__,
    0LL);
  v32 = System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  v39 = (int64_t)v32;
  if ( v32 )
  {
    v40 = WarBoardTaskBase_TaskCallback_TypeInfo;
    if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != WarBoardTaskBase_TaskCallback_TypeInfo )
      goto LABEL_13;
    *v29 = v32;
    if ( (WarBoardTaskBase_TaskCallback_c *)v32->klass != v40 )
      goto LABEL_13;
  }
  else
  {
    *v29 = 0LL;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 32), (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v18 = v28 + 40;
  v41 = *(System_Delegate_o **)(v28 + 40);
  v42 = (WarBoardTaskBase_TaskCallback_o *)sub_1BE4D18(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v42,
    (Il2CppObject *)this,
    Method_WarBoardItemComponent_ItemGetEffectEndCallback__,
    0LL);
  v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  v39 = (int64_t)v43;
  if ( !v43 )
  {
LABEL_14:
    *(_QWORD *)v18 = v39;
    goto LABEL_15;
  }
  v50 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v43->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*(_QWORD *)v18 = v43, (WarBoardTaskBase_TaskCallback_c *)v43->klass != v50) )
  {
LABEL_13:
    sub_1BE4FE8(v39);
    goto LABEL_14;
  }
LABEL_15:
  sub_1BE4A70((PartyOrganizationUtility_o *)v18, v39, v44, v45, v46, v47, v48, v49);
  if ( taskList )
  {
    items = taskList->fields._items;
    v58 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++taskList->fields._version;
    if ( items )
    {
      size = taskList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)taskList,
          (Il2CppObject *)v28,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v60 = &items->obj.klass + size;
        taskList->fields._size = size + 1;
        v60[4] = (Il2CppClass *)v28;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v60 + 4), v28, v51, v52, v53, v54, v55, v56);
      }
      return;
    }
LABEL_27:
    sub_1BE4D28(v19, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v19 = sub_1BE4B74(WarBoardTaskBase___TypeInfo, 1LL);
  if ( !v19 )
    goto LABEL_27;
  v62 = v19;
  v63 = sub_1BE4C08(v28, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
  if ( !v63 )
  {
    v71 = sub_1BE4D4C();
    sub_1BE4BF4(v71, 0LL);
  }
  if ( !*(_DWORD *)(v62 + 24) )
    sub_1BE4D30(v63, v64);
  *(_QWORD *)(v62 + 32) = v28;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 32), v28, v65, v66, v67, v68, v69, v70);
  if ( !Instance )
    goto LABEL_27;
  if ( isInsertTask )
    WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v62, 0LL);
  else
    WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v62, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardItemComponent__Reset(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  WarBoardManager_o *Instance; // x0
  __int64 v5; // x1
  struct WarBoardItemData_o *itemData; // x8
  int v7; // s0

  if ( (byte_4B64549 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B64549 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1BE4D28(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
}


void __fastcall WarBoardItemComponent__Selectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1BE4D28(0LL, method);
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
  int64_t ComponentsInChildren_object; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  unsigned int v14; // w24
  UnityEngine_Component_c *v15; // x8
  int64_t v16; // x22
  unsigned __int64 v17; // x29
  UnityEngine_Object_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  struct UICommonButton_o *button; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B64542 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096, parents);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Contains__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B64542 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
        ComponentsInChildren_object = (int64_t)parents->m_Items[v14];
        if ( !ComponentsInChildren_object )
          goto LABEL_27;
        ComponentsInChildren_object = (int64_t)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)ComponentsInChildren_object,
                                                 1,
                                                 (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
        if ( ComponentsInChildren_object )
        {
          v15 = *(UnityEngine_Component_c **)(ComponentsInChildren_object + 24);
          v16 = ComponentsInChildren_object;
          if ( (int)v15 >= 1 )
            break;
        }
LABEL_23:
        max_length = parents->max_length;
        if ( (int)++v14 >= max_length )
          goto LABEL_24;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)v15 )
      {
        v18 = *(UnityEngine_Object_o **)(v16 + 32 + 8 * v17);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        ComponentsInChildren_object = UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
        if ( (ComponentsInChildren_object & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_27;
          ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v18,
                                                   0LL);
          if ( !v10 )
            goto LABEL_27;
          ComponentsInChildren_object = System_Collections_Generic_List_object___Contains(
                                          v10,
                                          (Il2CppObject *)ComponentsInChildren_object,
                                          (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_GameObject__Contains__);
          if ( (ComponentsInChildren_object & 1) == 0 )
          {
            ComponentsInChildren_object = (int64_t)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v18,
                                                     0LL);
            items = v10->fields._items;
            v26 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v10->fields._size;
            v28 = ComponentsInChildren_object;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)ComponentsInChildren_object,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
            }
          }
        }
        LODWORD(v15) = *(_DWORD *)(v16 + 24);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_23;
      }
LABEL_28:
      sub_1BE4D30(ComponentsInChildren_object, v12);
    }
  }
LABEL_24:
  if ( !v10
    || (button = this->fields.button,
        ComponentsInChildren_object = (int64_t)System_Collections_Generic_List_object___ToArray(
                                                 v10,
                                                 (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__),
        !button) )
  {
LABEL_27:
    sub_1BE4D28(ComponentsInChildren_object, v12);
  }
  button->fields.tweenTargets = (struct UnityEngine_GameObject_array *)ComponentsInChildren_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&button->fields.tweenTargets,
    ComponentsInChildren_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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

  if ( (byte_4B64544 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B64544 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
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

  if ( (byte_4B64543 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, enable);
    byte_4B64543 = 1;
  }
  button = (UnityEngine_Object_o *)this->fields.button;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(button, 0LL, 0LL) )
  {
    v7 = this->fields.button;
    if ( !v7 )
      sub_1BE4D28(0LL, v6);
    UICommonButton__SetButtonEnableAndKeepState(v7, enable, 0, 0LL);
  }
}


void __fastcall WarBoardItemComponent__Unselectable(WarBoardItemComponent_o *this, const MethodInfo *method)
{
  WarBoardItemData_o *itemData; // x0

  itemData = this->fields.itemData;
  if ( !itemData )
    sub_1BE4D28(0LL, method);
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
  if ( (byte_4B6454A & 1) == 0 )
  {
    this = (WarBoardItemComponent_o *)sub_1BE4ACC(
                                        &Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096,
                                        *(_QWORD *)&value);
    byte_4B6454A = 1;
  }
  p_uIWidgets = &v4->fields.uIWidgets;
  uIWidgets = v4->fields.uIWidgets;
  if ( !uIWidgets )
  {
    ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                    (UnityEngine_Component_o *)v4,
                                    1,
                                    (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____77181096);
    v4->fields.uIWidgets = (struct UIWidget_array *)ComponentsInChildren_object;
    sub_1BE4A70(
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
        sub_1BE4D30(this, *(_QWORD *)&value);
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
    sub_1BE4D28(this, *(_QWORD *)&value);
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

  if ( (byte_4B6454B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B6454B = 1;
  }
  _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(_4__this, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
        (_4__this = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL)
    || (transform = UnityEngine_Component__get_transform(_4__this, 0LL),
        (_4__this = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v5 = WarBoardManager__GetSquarePosition(
                                          (WarBoardManager_o *)_4__this,
                                          this->fields.squareIndex,
                                          0LL),
        !transform) )
  {
    sub_1BE4D28(_4__this, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL);
}