void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x9

  if ( (byte_4213C81 & 1) == 0 )
  {
    sub_B0D8A4(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_4213C81 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4213C80 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4213C80 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mEventItemIconList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  QuestDialogIconImageComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *mEventItemIconList; // x20
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  v2 = this;
  if ( (byte_4213C7F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (QuestDialogIconImageComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4213C7F = 1;
  }
  mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_12:
    sub_B0D97C(this);
  v7 = 0LL;
  while ( (__int64)v7 < mEventItemIconList->fields._size )
  {
    if ( v7 >= (unsigned int)mEventItemIconList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = (UnityEngine_Object_o *)mEventItemIconList->fields._items->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v8, 0LL);
    mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
    ++v7;
    if ( !mEventItemIconList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mEventItemIconList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo_2A71064 **v14; // x24
  int64_t Instance; // x0
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x26
  __int64 v18; // x28
  unsigned __int64 v19; // x27
  WarEntity_o *Entity; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *v22; // x8
  struct System_Int32_array *nums; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Transform_o *v26; // x23
  UnityEngine_Transform_o *v27; // x23
  QuestDialogIconImageComponent_c *v28; // x8
  struct System_Int32_array *v29; // x8
  ItemIconComponent_o *v30; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  WarEntity_o *v32; // x0
  const MethodInfo_2A71064 *v33; // x8
  const MethodInfo_2A71064 **v34; // x26
  WarEntity_o *v35; // x24
  UserItemMaster_o *v36; // x25
  struct System_Int32_array *v37; // x8
  struct System_Int32_array *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct UIGrid_o *itemGrid; // x20
  struct UIGrid_o *v41; // x8
  struct UIGrid_o *v42; // x8
  __int64 v43; // x0

  if ( (byte_4213C7E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&QuestDialogIconImageComponent_TypeInfo, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4213C7E = 1;
  }
  v14 = (const MethodInfo_2A71064 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_64;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_64;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v18 = 8LL;
  while ( 1 )
  {
    v19 = v18 - 8;
    if ( v18 - 8 >= (int)itemIds->max_length )
      break;
    if ( v18 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_65;
      if ( !v17 )
        goto LABEL_64;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v17,
                 itemIds->m_Items[1],
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(*v14);
      if ( !Instance )
        goto LABEL_64;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v22 = itemConsumeEnt->fields.itemIds;
      if ( !v22 )
        goto LABEL_64;
      if ( !v22->max_length )
        goto LABEL_65;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            v22->m_Items[1],
                            0LL);
      if ( !Entity )
        goto LABEL_64;
      if ( !Instance )
        goto LABEL_64;
      if ( !this->fields.eventItemIcon )
        goto LABEL_64;
      ItemIconComponent__SetItem(
        (ItemIconComponent_o *)this->fields.eventItemIcon,
        (int32_t)Entity->fields.longName,
        *(_DWORD *)(Instance + 28),
        0LL);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_64;
      if ( !nums->max_length )
        goto LABEL_65;
      Instance = (int64_t)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_64;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)Instance,
        nums->m_Items[1],
        0LL);
    }
    else
    {
      Instance = (int64_t)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_64;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (int64_t)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                            (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_64;
      v25 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_64;
      v26 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v26 )
        goto LABEL_64;
      UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v25, 0LL);
      v27 = (UnityEngine_Transform_o *)Instance;
      v28 = QuestDialogIconImageComponent_TypeInfo;
      if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v28 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v27 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v27, v28->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v25,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v29 = itemConsumeEnt->fields.itemIds;
      if ( !v29 )
        goto LABEL_64;
      if ( v19 >= v29->max_length )
        goto LABEL_65;
      if ( !v17 )
        goto LABEL_64;
      v30 = (ItemIconComponent_o *)Instance;
      v31 = v17;
      v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v17,
              *((_DWORD *)&v29->obj.klass + v18),
              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v33 = *v14;
      v34 = v14;
      v35 = v32;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(v33);
      if ( !Instance )
        goto LABEL_64;
      v36 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v37 = itemConsumeEnt->fields.itemIds;
      if ( !v37 )
        goto LABEL_64;
      if ( v19 >= v37->max_length )
        goto LABEL_65;
      if ( !v36 )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v36, Instance, *((_DWORD *)&v37->obj.klass + v18), 0LL);
      if ( !v35 )
        goto LABEL_64;
      if ( !Instance )
        goto LABEL_64;
      if ( !v30 )
        goto LABEL_64;
      ItemIconComponent__SetItem(v30, (int32_t)v35->fields.longName, *(_DWORD *)(Instance + 28), 0LL);
      v38 = itemConsumeEnt->fields.nums;
      if ( !v38 )
        goto LABEL_64;
      if ( v19 >= v38->max_length )
      {
LABEL_65:
        v43 = sub_B0D9A8(Instance);
        sub_B0D948(v43, 0LL);
      }
      v14 = v34;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v30,
        *((_DWORD *)&v38->obj.klass + v18),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_64;
      v17 = v31;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v18;
    if ( !itemIds )
      goto LABEL_64;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_64;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_31178688(v39, 0.0, 0.0, 0LL);
  itemGrid = this->fields.itemGrid;
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  }
  if ( !itemGrid
    || (itemGrid->fields.cellHeight = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (v41 = this->fields.itemGrid) == 0LL)
    || (*(_DWORD *)&v41->fields.animateSmoothly = 0, (v42 = this->fields.itemGrid) == 0LL)
    || (v42->fields.cellWidth = 0.0, (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_64:
    sub_B0D97C(Instance);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 448LL));
}