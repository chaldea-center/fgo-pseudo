void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int32x2_t *static_fields; // x9

  if ( (byte_42B01AA & 1) == 0 )
  {
    sub_B52984(&QuestDialogIconImageComponent_TypeInfo);
    byte_42B01AA = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B01A9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42B01A9 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mEventItemIconList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  QuestDialogIconImageComponent_o *v2; // x19
  System_Collections_Generic_List_XWeaponTrail_Element__o *mEventItemIconList; // x20
  unsigned __int64 v4; // x21
  UnityEngine_Object_o *v5; // x20

  v2 = this;
  if ( (byte_42B01A8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    this = (QuestDialogIconImageComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B01A8 = 1;
  }
  mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_12:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( (__int64)v4 < mEventItemIconList->fields._size )
  {
    if ( v4 >= (unsigned int)mEventItemIconList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v5 = (UnityEngine_Object_o *)mEventItemIconList->fields._items->m_Items[v4];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
    mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
    ++v4;
    if ( !mEventItemIconList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mEventItemIconList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  const MethodInfo_2B75DB0 **v5; // x24
  int64_t Instance; // x0
  __int64 v7; // x1
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x26
  __int64 v10; // x28
  unsigned __int64 v11; // x27
  WarEntity_o *Entity; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *nums; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Transform_o *v18; // x23
  UnityEngine_Transform_o *v19; // x23
  QuestDialogIconImageComponent_c *v20; // x8
  struct System_Int32_array *v21; // x8
  ItemIconComponent_o *v22; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  WarEntity_o *v24; // x0
  const MethodInfo_2B75DB0 *v25; // x8
  const MethodInfo_2B75DB0 **v26; // x26
  WarEntity_o *v27; // x24
  UserItemMaster_o *v28; // x25
  struct System_Int32_array *v29; // x8
  struct System_Int32_array *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  struct UIGrid_o *itemGrid; // x20
  struct UIGrid_o *v33; // x8
  struct UIGrid_o *v34; // x8
  __int64 v35; // x0

  if ( (byte_42B01A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestDialogIconImageComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B01A7 = 1;
  }
  v5 = (const MethodInfo_2B75DB0 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_64;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_64;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v10 = 8LL;
  while ( 1 )
  {
    v11 = v10 - 8;
    if ( v10 - 8 >= (int)itemIds->max_length )
      break;
    if ( v10 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_65;
      if ( !v9 )
        goto LABEL_64;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v9,
                 itemIds->m_Items[1],
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(*v5);
      if ( !Instance )
        goto LABEL_64;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v14 = itemConsumeEnt->fields.itemIds;
      if ( !v14 )
        goto LABEL_64;
      if ( !v14->max_length )
        goto LABEL_65;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            v14->m_Items[1],
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
                            (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_64;
      v17 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_64;
      v18 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v18 )
        goto LABEL_64;
      UnityEngine_Transform__set_parent(v18, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v17, 0LL);
      v19 = (UnityEngine_Transform_o *)Instance;
      v20 = QuestDialogIconImageComponent_TypeInfo;
      if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v20 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v19, v20->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v17,
                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v21 = itemConsumeEnt->fields.itemIds;
      if ( !v21 )
        goto LABEL_64;
      if ( v11 >= v21->max_length )
        goto LABEL_65;
      if ( !v9 )
        goto LABEL_64;
      v22 = (ItemIconComponent_o *)Instance;
      v23 = v9;
      v24 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v9,
              *((_DWORD *)&v21->obj.klass + v10),
              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v25 = *v5;
      v26 = v5;
      v27 = v24;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(v25);
      if ( !Instance )
        goto LABEL_64;
      v28 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v29 = itemConsumeEnt->fields.itemIds;
      if ( !v29 )
        goto LABEL_64;
      if ( v11 >= v29->max_length )
        goto LABEL_65;
      if ( !v28 )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v28, Instance, *((_DWORD *)&v29->obj.klass + v10), 0LL);
      if ( !v27 )
        goto LABEL_64;
      if ( !Instance )
        goto LABEL_64;
      if ( !v22 )
        goto LABEL_64;
      ItemIconComponent__SetItem(v22, (int32_t)v27->fields.longName, *(_DWORD *)(Instance + 28), 0LL);
      v30 = itemConsumeEnt->fields.nums;
      if ( !v30 )
        goto LABEL_64;
      if ( v11 >= v30->max_length )
      {
LABEL_65:
        v35 = sub_B52A88(Instance);
        sub_B52A28(v35, 0LL);
      }
      v5 = v26;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v22,
        *((_DWORD *)&v30->obj.klass + v10),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_64;
      v9 = v23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v10;
    if ( !itemIds )
      goto LABEL_64;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_64;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_32085060(v31, 0.0, 0.0, 0LL);
  itemGrid = this->fields.itemGrid;
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  }
  if ( !itemGrid
    || (itemGrid->fields.cellHeight = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (v33 = this->fields.itemGrid) == 0LL)
    || (*(_DWORD *)&v33->fields.animateSmoothly = 0, (v34 = this->fields.itemGrid) == 0LL)
    || (v34->fields.cellWidth = 0.0, (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_64:
    sub_B52A5C(Instance, v7);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 448LL));
}