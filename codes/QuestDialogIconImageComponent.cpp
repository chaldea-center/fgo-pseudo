void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x9

  if ( (byte_4186E57 & 1) == 0 )
  {
    sub_B2C35C(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_4186E57 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4186E56 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4186E56 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mEventItemIconList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4186E55 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    this = (QuestDialogIconImageComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186E55 = 1;
  }
  mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_12:
    sub_B2C434(this, method);
  v7 = 0LL;
  while ( (__int64)v7 < mEventItemIconList->fields._size )
  {
    if ( v7 >= (unsigned int)mEventItemIconList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v8 = (UnityEngine_Object_o *)mEventItemIconList->fields._items->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v8, 0LL);
    mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->fields.mEventItemIconList;
    ++v7;
    if ( !mEventItemIconList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mEventItemIconList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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
  const MethodInfo_2841668 **v14; // x24
  int64_t Instance; // x0
  __int64 v16; // x1
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x26
  __int64 v19; // x28
  unsigned __int64 v20; // x27
  WarEntity_o *Entity; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *v23; // x8
  struct System_Int32_array *nums; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Transform_o *v28; // x23
  QuestDialogIconImageComponent_c *v29; // x8
  struct System_Int32_array *v30; // x8
  ItemIconComponent_o *v31; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x21
  WarEntity_o *v33; // x0
  const MethodInfo_2841668 *v34; // x8
  const MethodInfo_2841668 **v35; // x26
  WarEntity_o *v36; // x24
  UserItemMaster_o *v37; // x25
  struct System_Int32_array *v38; // x8
  struct System_Int32_array *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct UIGrid_o *itemGrid; // x20
  struct UIGrid_o *v42; // x8
  struct UIGrid_o *v43; // x8
  __int64 v44; // x0

  if ( (byte_4186E54 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&QuestDialogIconImageComponent_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4186E54 = 1;
  }
  v14 = (const MethodInfo_2841668 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_64;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_64;
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v19 = 8LL;
  while ( 1 )
  {
    v20 = v19 - 8;
    if ( v19 - 8 >= (int)itemIds->max_length )
      break;
    if ( v19 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_65;
      if ( !v18 )
        goto LABEL_64;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v18,
                 itemIds->m_Items[1],
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(*v14);
      if ( !Instance )
        goto LABEL_64;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v23 = itemConsumeEnt->fields.itemIds;
      if ( !v23 )
        goto LABEL_64;
      if ( !v23->max_length )
        goto LABEL_65;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            v23->m_Items[1],
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
                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_64;
      v26 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_64;
      v27 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v27 )
        goto LABEL_64;
      UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v26, 0LL);
      v28 = (UnityEngine_Transform_o *)Instance;
      v29 = QuestDialogIconImageComponent_TypeInfo;
      if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v29 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v28 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v28, v29->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v26,
                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v30 = itemConsumeEnt->fields.itemIds;
      if ( !v30 )
        goto LABEL_64;
      if ( v20 >= v30->max_length )
        goto LABEL_65;
      if ( !v18 )
        goto LABEL_64;
      v31 = (ItemIconComponent_o *)Instance;
      v32 = v18;
      v33 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v18,
              *((_DWORD *)&v30->obj.klass + v19),
              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v34 = *v14;
      v35 = v14;
      v36 = v33;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(v34);
      if ( !Instance )
        goto LABEL_64;
      v37 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v38 = itemConsumeEnt->fields.itemIds;
      if ( !v38 )
        goto LABEL_64;
      if ( v20 >= v38->max_length )
        goto LABEL_65;
      if ( !v37 )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v37, Instance, *((_DWORD *)&v38->obj.klass + v19), 0LL);
      if ( !v36 )
        goto LABEL_64;
      if ( !Instance )
        goto LABEL_64;
      if ( !v31 )
        goto LABEL_64;
      ItemIconComponent__SetItem(v31, (int32_t)v36->fields.longName, *(_DWORD *)(Instance + 28), 0LL);
      v39 = itemConsumeEnt->fields.nums;
      if ( !v39 )
        goto LABEL_64;
      if ( v20 >= v39->max_length )
      {
LABEL_65:
        v44 = sub_B2C460(Instance);
        sub_B2C400(v44, 0LL);
      }
      v14 = v35;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v31,
        *((_DWORD *)&v39->obj.klass + v19),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_64;
      v18 = v32;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v19;
    if ( !itemIds )
      goto LABEL_64;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_64;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(v40, 0.0, 0.0, 0LL);
  itemGrid = this->fields.itemGrid;
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  }
  if ( !itemGrid
    || (itemGrid->fields.cellHeight = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (v42 = this->fields.itemGrid) == 0LL)
    || (*(_DWORD *)&v42->fields.animateSmoothly = 0, (v43 = this->fields.itemGrid) == 0LL)
    || (v43->fields.cellWidth = 0.0, (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_64:
    sub_B2C434(Instance, v16);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 448LL));
}