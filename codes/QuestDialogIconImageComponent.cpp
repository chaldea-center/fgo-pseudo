void QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int32x2_t *static_fields; // x8

  if ( (byte_4C346E7 & 1) == 0 )
  {
    sub_1C32C20(&QuestDialogIconImageComponent_TypeInfo);
    byte_4C346E7 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C346E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C346E6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mEventItemIconList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestDialogIconImageComponent__DestroyIcon(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  Il2CppObject *Item; // x21
  int v7; // w8

  if ( (byte_4C346E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C346E5 = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1C32E7C(mEventItemIconList);
  v4 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v4,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640((UnityEngine_Object_o *)Item, 0);
    mEventItemIconList = this->fields.mEventItemIconList;
    ++v4;
    if ( !mEventItemIconList )
      goto LABEL_9;
  }
  v7 = mEventItemIconList->fields._version + 1;
  mEventItemIconList->fields._size = 0;
  mEventItemIconList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventItemIconList->fields._items, 0, size, 0);
}


void QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x25
  __int64 v8; // x27
  unsigned __int64 v9; // x28
  Il2CppObject *Entity; // x23
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *v12; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x23
  UnityEngine_GameObject_o *v15; // x23
  UnityEngine_Transform_o *v16; // x24
  QuestDialogIconImageComponent_c *v17; // x8
  UnityEngine_Transform_o *v18; // x24
  struct System_Int32_array *v19; // x8
  ItemIconComponent_o *v20; // x24
  Il2CppObject *v21; // x25
  Il2CppObject *v22; // x26
  struct System_Int32_array *v23; // x8
  struct System_Int32_array *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  struct UIGrid_o *itemGrid; // x20
  DataManager_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // [xsp+8h] [xbp-68h]

  if ( (byte_4C346E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestDialogIconImageComponent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C346E4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_68;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_68;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 8;
  v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v9 = v8 - 8;
    if ( v8 - 8 >= SLODWORD(itemIds->max_length) )
      break;
    if ( v8 == 8 )
    {
      if ( !LODWORD(itemIds->max_length) )
        goto LABEL_69;
      if ( !v7 )
        goto LABEL_68;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v7,
                 itemIds->m_Items[0],
                 (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v12 = itemConsumeEnt->fields.itemIds;
      if ( !v12 )
        goto LABEL_68;
      if ( !LODWORD(v12->max_length) )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v12->m_Items[0],
                                    0);
      if ( !Entity )
        goto LABEL_68;
      if ( !Instance )
        goto LABEL_68;
      if ( !this->fields.eventItemIcon )
        goto LABEL_68;
      ItemIconComponent__SetItem(
        (ItemIconComponent_o *)this->fields.eventItemIcon,
        (int32_t)Entity[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_68;
      if ( !LODWORD(nums->max_length) )
        goto LABEL_69;
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_68;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)Instance,
        nums->m_Items[0],
        0);
    }
    else
    {
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_68;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    gameObject,
                                    (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_68;
      v15 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemGrid )
        goto LABEL_68;
      v16 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemGrid,
                                    0);
      if ( !v16 )
        goto LABEL_68;
      UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v15, 0);
      v17 = QuestDialogIconImageComponent_TypeInfo;
      v18 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v17 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_68;
      UnityEngine_Transform__set_localScale(v18, v17->static_fields->ITEM_ICON_SIZE, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v15,
                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v19 = itemConsumeEnt->fields.itemIds;
      if ( !v19 )
        goto LABEL_68;
      if ( v9 >= LODWORD(v19->max_length) )
        goto LABEL_69;
      if ( !v7 )
        goto LABEL_68;
      v20 = (ItemIconComponent_o *)Instance;
      v21 = DataMasterBase_object__object__int___GetEntity(
              v7,
              *((_DWORD *)&v19->obj.klass + v8),
              (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      v22 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v23 = itemConsumeEnt->fields.itemIds;
      if ( !v23 )
        goto LABEL_68;
      if ( v9 >= LODWORD(v23->max_length) )
        goto LABEL_69;
      if ( !v22 )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v22,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    *((_DWORD *)&v23->obj.klass + v8),
                                    0);
      if ( !v21 )
        goto LABEL_68;
      if ( !Instance )
        goto LABEL_68;
      if ( !v20 )
        goto LABEL_68;
      ItemIconComponent__SetItem(
        v20,
        (int32_t)v21[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0);
      v24 = itemConsumeEnt->fields.nums;
      if ( !v24 )
        goto LABEL_68;
      if ( v9 >= LODWORD(v24->max_length) )
LABEL_69:
        sub_1C32E84(Instance);
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v20,
        *((_DWORD *)&v24->obj.klass + v8),
        0);
      Instance = (DataManager_o *)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_68;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v7 = v34;
      v28 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_68;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v15,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v30 + 32) = v15;
        sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v15, v25, v26);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v8;
    if ( !itemIds )
      goto LABEL_68;
  }
  Instance = (DataManager_o *)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_68;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition_36036760(v31, 0.0, 0.0, 0);
  Instance = (DataManager_o *)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (DataManager_o *)this->fields.itemGrid) == 0) )
  {
LABEL_68:
    sub_1C32E7C(Instance);
  }
  klass = Instance->klass;
  HIDWORD(Instance->fields.lookup) = 0;
  HIDWORD(Instance->fields.datalist) = 0;
  ((void (__fastcall *)(DataManager_o *, Il2CppClass *))klass[1]._1.element_class)(Instance, klass[1]._1.castClass);
}