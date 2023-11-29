void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x9

  if ( (byte_40F9565 & 1) == 0 )
  {
    sub_B16FFC(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_40F9565 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F9564 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F9564 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEventItemIconList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *mEventItemIconList; // x20
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x20

  if ( (byte_40F9563 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F9563 = 1;
  }
  mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_12:
    sub_B170D4();
  v7 = 0LL;
  while ( (__int64)v7 < mEventItemIconList->fields._size )
  {
    if ( v7 >= (unsigned int)mEventItemIconList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v8 = (UnityEngine_Object_o *)mEventItemIconList->fields._items->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v8, 0LL);
    mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.mEventItemIconList;
    ++v7;
    if ( !mEventItemIconList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mEventItemIconList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  const MethodInfo_2A54F38 **v14; // x24
  WebViewManager_o *Instance; // x0
  int64_t MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x26
  __int64 v21; // x28
  unsigned __int64 v22; // x27
  WarEntity_o *Entity; // x22
  WebViewManager_o *v24; // x0
  UserItemMaster_o *v25; // x23
  struct System_Int32_array *v26; // x8
  UserItemEntity_o *EntityDefinitely; // x0
  struct System_Int32_array *nums; // x8
  ItemIconWithConsumptionNumberComponent_o *eventItemIcon; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Transform_o *v37; // x23
  QuestDialogIconImageComponent_c *v38; // x8
  struct System_Int32_array *v39; // x8
  ItemIconComponent_o *v40; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v41; // x21
  WarEntity_o *v42; // x0
  const MethodInfo_2A54F38 *v43; // x8
  const MethodInfo_2A54F38 **v44; // x26
  WarEntity_o *v45; // x24
  WebViewManager_o *v46; // x0
  UserItemMaster_o *v47; // x25
  struct System_Int32_array *v48; // x8
  UserItemEntity_o *v49; // x0
  struct System_Int32_array *v50; // x8
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  UnityEngine_Component_o *itemGrid; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct UIGrid_o *v54; // x20
  struct UIGrid_o *v55; // x8
  struct UIGrid_o *v56; // x8
  struct UIGrid_o *v57; // x0

  if ( (byte_40F9562 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&QuestDialogIconImageComponent_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F9562 = 1;
  }
  v14 = (const MethodInfo_2A54F38 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_64;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_64;
  v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v21 = 8LL;
  while ( 1 )
  {
    v22 = v21 - 8;
    if ( v21 - 8 >= (int)itemIds->max_length )
      break;
    if ( v21 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_65;
      if ( !v20 )
        goto LABEL_64;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v20,
                 itemIds->m_Items[1],
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v24 = SingletonMonoBehaviour_WebViewManager___get_Instance(*v14);
      if ( !v24 )
        goto LABEL_64;
      v25 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v24,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      MasterData_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      v26 = itemConsumeEnt->fields.itemIds;
      if ( !v26 )
        goto LABEL_64;
      if ( !v26->max_length )
        goto LABEL_65;
      if ( !v25 )
        goto LABEL_64;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                           v25,
                           MasterData_WarQuestSelectionMaster,
                           v26->m_Items[1],
                           0LL);
      if ( !Entity )
        goto LABEL_64;
      if ( !EntityDefinitely )
        goto LABEL_64;
      if ( !this->fields.eventItemIcon )
        goto LABEL_64;
      ItemIconComponent__SetItem(
        (ItemIconComponent_o *)this->fields.eventItemIcon,
        (int32_t)Entity->fields.longName,
        EntityDefinitely->fields.num,
        0LL);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_64;
      if ( !nums->max_length )
        goto LABEL_65;
      eventItemIcon = this->fields.eventItemIcon;
      if ( !eventItemIcon )
        goto LABEL_64;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(eventItemIcon, nums->m_Items[1], 0LL);
    }
    else
    {
      v30 = (UnityEngine_Component_o *)this->fields.eventItemIcon;
      if ( !v30 )
        goto LABEL_64;
      gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !v32 )
        goto LABEL_64;
      v33 = v32;
      transform = UnityEngine_GameObject__get_transform(v32, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_64;
      v35 = transform;
      v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v35 )
        goto LABEL_64;
      UnityEngine_Transform__set_parent(v35, v36, 0LL);
      v37 = UnityEngine_GameObject__get_transform(v33, 0LL);
      v38 = QuestDialogIconImageComponent_TypeInfo;
      if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v38 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v37 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v37, v38->static_fields->ITEM_ICON_SIZE, 0LL);
      MasterData_WarQuestSelectionMaster = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v33,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v39 = itemConsumeEnt->fields.itemIds;
      if ( !v39 )
        goto LABEL_64;
      if ( v22 >= v39->max_length )
        goto LABEL_65;
      if ( !v20 )
        goto LABEL_64;
      v40 = (ItemIconComponent_o *)MasterData_WarQuestSelectionMaster;
      v41 = v20;
      v42 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v20,
              *((_DWORD *)&v39->obj.klass + v21),
              (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v43 = *v14;
      v44 = v14;
      v45 = v42;
      v46 = SingletonMonoBehaviour_WebViewManager___get_Instance(v43);
      if ( !v46 )
        goto LABEL_64;
      v47 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v46,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      MasterData_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
      v48 = itemConsumeEnt->fields.itemIds;
      if ( !v48 )
        goto LABEL_64;
      if ( v22 >= v48->max_length )
        goto LABEL_65;
      if ( !v47 )
        goto LABEL_64;
      v49 = UserItemMaster__GetEntityDefinitely(
              v47,
              MasterData_WarQuestSelectionMaster,
              *((_DWORD *)&v48->obj.klass + v21),
              0LL);
      if ( !v45 )
        goto LABEL_64;
      if ( !v49 )
        goto LABEL_64;
      if ( !v40 )
        goto LABEL_64;
      ItemIconComponent__SetItem(v40, (int32_t)v45->fields.longName, v49->fields.num, 0LL);
      v50 = itemConsumeEnt->fields.nums;
      if ( !v50 )
        goto LABEL_64;
      if ( v22 >= v50->max_length )
      {
LABEL_65:
        sub_B17100(MasterData_WarQuestSelectionMaster, v17, v18);
        sub_B170A0();
      }
      v14 = v44;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v40,
        *((_DWORD *)&v50->obj.klass + v21),
        0LL);
      mEventItemIconList = this->fields.mEventItemIconList;
      if ( !mEventItemIconList )
        goto LABEL_64;
      v20 = v41;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mEventItemIconList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v21;
    if ( !itemIds )
      goto LABEL_64;
  }
  itemGrid = (UnityEngine_Component_o *)this->fields.itemGrid;
  if ( !itemGrid )
    goto LABEL_64;
  v53 = UnityEngine_Component__get_gameObject(itemGrid, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(v53, 0.0, 0.0, 0LL);
  v54 = this->fields.itemGrid;
  if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  }
  if ( !v54
    || (v54->fields.cellHeight = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (v55 = this->fields.itemGrid) == 0LL)
    || (*(_DWORD *)&v55->fields.animateSmoothly = 0, (v56 = this->fields.itemGrid) == 0LL)
    || (v56->fields.cellWidth = 0.0, (v57 = this->fields.itemGrid) == 0LL) )
  {
LABEL_64:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v57->klass->vtable._8_Reposition.method)(
    v57,
    v57->klass->vtable._9_ResetPosition.methodPtr);
}