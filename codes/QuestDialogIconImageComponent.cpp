void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int32x2_t *static_fields; // x9

  if ( (byte_42E8A9B & 1) == 0 )
  {
    sub_B5D5C4(&QuestDialogIconImageComponent_TypeInfo, v1, v2, v3);
    byte_42E8A9B = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8A9A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E8A9A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mEventItemIconList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestDialogIconImageComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *mEventItemIconList; // x20
  unsigned __int64 v15; // x21
  UnityEngine_Object_o *v16; // x20

  v4 = this;
  if ( (byte_42E8A99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v8, v9, v10);
    this = (QuestDialogIconImageComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E8A99 = 1;
  }
  mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_12:
    sub_B5D69C(this, method);
  v15 = 0LL;
  while ( (__int64)v15 < mEventItemIconList->fields._size )
  {
    if ( v15 >= (unsigned int)mEventItemIconList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v16 = (UnityEngine_Object_o *)mEventItemIconList->fields._items->m_Items[v15];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v16, 0LL);
    mEventItemIconList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->fields.mEventItemIconList;
    ++v15;
    if ( !mEventItemIconList )
      goto LABEL_12;
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    mEventItemIconList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


void __fastcall QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  const MethodInfo_2A2FE60 **v33; // x24
  int64_t Instance; // x0
  __int64 v35; // x1
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x26
  __int64 v38; // x28
  unsigned __int64 v39; // x27
  WarEntity_o *Entity; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x23
  struct System_Int32_array *v42; // x8
  struct System_Int32_array *nums; // x8
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_Transform_o *v46; // x23
  UnityEngine_Transform_o *v47; // x23
  QuestDialogIconImageComponent_c *v48; // x8
  struct System_Int32_array *v49; // x8
  ItemIconComponent_o *v50; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  WarEntity_o *v52; // x0
  const MethodInfo_2A2FE60 *v53; // x8
  const MethodInfo_2A2FE60 **v54; // x26
  WarEntity_o *v55; // x24
  UserItemMaster_o *v56; // x25
  struct System_Int32_array *v57; // x8
  struct System_Int32_array *v58; // x8
  UnityEngine_GameObject_o *v59; // x0
  struct UIGrid_o *itemGrid; // x20
  struct UIGrid_o *v61; // x8
  struct UIGrid_o *v62; // x8
  __int64 v63; // x0

  if ( (byte_42E8A98 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)itemConsumeEnt, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&QuestDialogIconImageComponent_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42E8A98 = 1;
  }
  v33 = (const MethodInfo_2A2FE60 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_64;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_64;
  v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v38 = 8LL;
  while ( 1 )
  {
    v39 = v38 - 8;
    if ( v38 - 8 >= (int)itemIds->max_length )
      break;
    if ( v38 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_65;
      if ( !v37 )
        goto LABEL_64;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 v37,
                 itemIds->m_Items[1],
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(*v33);
      if ( !Instance )
        goto LABEL_64;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v42 = itemConsumeEnt->fields.itemIds;
      if ( !v42 )
        goto LABEL_64;
      if ( !v42->max_length )
        goto LABEL_65;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            MasterData_WarQuestSelectionMaster,
                            Instance,
                            v42->m_Items[1],
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
                            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_64;
      v45 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_64;
      v46 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v46 )
        goto LABEL_64;
      UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v45, 0LL);
      v47 = (UnityEngine_Transform_o *)Instance;
      v48 = QuestDialogIconImageComponent_TypeInfo;
      if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v48 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v47 )
        goto LABEL_64;
      UnityEngine_Transform__set_localScale(v47, v48->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            v45,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v49 = itemConsumeEnt->fields.itemIds;
      if ( !v49 )
        goto LABEL_64;
      if ( v39 >= v49->max_length )
        goto LABEL_65;
      if ( !v37 )
        goto LABEL_64;
      v50 = (ItemIconComponent_o *)Instance;
      v51 = v37;
      v52 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v37,
              *((_DWORD *)&v49->obj.klass + v38),
              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v53 = *v33;
      v54 = v33;
      v55 = v52;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance(v53);
      if ( !Instance )
        goto LABEL_64;
      v56 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = NetworkManager__get_UserId(0LL);
      v57 = itemConsumeEnt->fields.itemIds;
      if ( !v57 )
        goto LABEL_64;
      if ( v39 >= v57->max_length )
        goto LABEL_65;
      if ( !v56 )
        goto LABEL_64;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v56, Instance, *((_DWORD *)&v57->obj.klass + v38), 0LL);
      if ( !v55 )
        goto LABEL_64;
      if ( !Instance )
        goto LABEL_64;
      if ( !v50 )
        goto LABEL_64;
      ItemIconComponent__SetItem(v50, (int32_t)v55->fields.longName, *(_DWORD *)(Instance + 28), 0LL);
      v58 = itemConsumeEnt->fields.nums;
      if ( !v58 )
        goto LABEL_64;
      if ( v39 >= v58->max_length )
      {
LABEL_65:
        v63 = sub_B5D6C8(Instance);
        sub_B5D668(v63, 0LL);
      }
      v33 = v54;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v50,
        *((_DWORD *)&v58->obj.klass + v38),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_64;
      v37 = v51;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v38;
    if ( !itemIds )
      goto LABEL_64;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_64;
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_32430496(v59, 0.0, 0.0, 0LL);
  itemGrid = this->fields.itemGrid;
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  if ( (BYTE3(QuestDialogIconImageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  }
  if ( !itemGrid
    || (itemGrid->fields.cellHeight = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (v61 = this->fields.itemGrid) == 0LL)
    || (*(_DWORD *)&v61->fields.animateSmoothly = 0, (v62 = this->fields.itemGrid) == 0LL)
    || (v62->fields.cellWidth = 0.0, (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_64:
    sub_B5D69C(Instance, v35);
  }
  (*(void (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 440LL))(
    Instance,
    *(_QWORD *)(*(_QWORD *)Instance + 448LL));
}