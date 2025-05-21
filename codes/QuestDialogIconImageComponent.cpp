void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x8

  if ( (byte_4B41801 & 1) == 0 )
  {
    sub_1BDB878(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_4B41801 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B41800 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4B41800 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mEventItemIconList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v7; // w20
  int32_t size; // w2
  Il2CppObject *Item; // x21
  int v10; // w8

  if ( (byte_4B417FF & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B417FF = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1BDBAD4(mEventItemIconList, method);
  v7 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v7 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v7,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)Item, 0LL);
    mEventItemIconList = this->fields.mEventItemIconList;
    ++v7;
    if ( !mEventItemIconList )
      goto LABEL_9;
  }
  v10 = mEventItemIconList->fields._version + 1;
  mEventItemIconList->fields._size = 0;
  mEventItemIconList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventItemIconList->fields._items, 0, size, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x25
  __int64 v19; // x27
  unsigned __int64 v20; // x28
  Il2CppObject *Entity; // x23
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *v23; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x23
  UnityEngine_GameObject_o *v26; // x23
  UnityEngine_Transform_o *v27; // x24
  QuestDialogIconImageComponent_c *v28; // x8
  UnityEngine_Transform_o *v29; // x24
  struct System_Int32_array *v30; // x8
  ItemIconComponent_o *v31; // x24
  Il2CppObject *v32; // x25
  Il2CppObject *v33; // x26
  struct System_Int32_array *v34; // x8
  struct System_Int32_array *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  struct UIGrid_o *itemGrid; // x20
  DataManager_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v45; // [xsp+8h] [xbp-68h]

  if ( (byte_4B417FE & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BDB878(&NetworkManager_TypeInfo, v9);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&QuestDialogIconImageComponent_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B417FE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_68;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_68;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v19 = 8LL;
  v45 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v20 = v19 - 8;
    if ( v19 - 8 >= (int)itemIds->max_length )
      break;
    if ( v19 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_69;
      if ( !v18 )
        goto LABEL_68;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v18,
                 itemIds->m_Items[1],
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v15);
        byte_4B3ED56 = 1;
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
      if ( !v23->max_length )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v23->m_Items[1],
                                    0LL);
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
        0LL);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_68;
      if ( !nums->max_length )
        goto LABEL_69;
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_68;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)Instance,
        nums->m_Items[1],
        0LL);
    }
    else
    {
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_68;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    gameObject,
                                    (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_68;
      v26 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_68;
      v27 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemGrid,
                                    0LL);
      if ( !v27 )
        goto LABEL_68;
      UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
      v28 = QuestDialogIconImageComponent_TypeInfo;
      v29 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v28 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v29 )
        goto LABEL_68;
      UnityEngine_Transform__set_localScale(v29, v28->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v26,
                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v30 = itemConsumeEnt->fields.itemIds;
      if ( !v30 )
        goto LABEL_68;
      if ( v20 >= v30->max_length )
        goto LABEL_69;
      if ( !v18 )
        goto LABEL_68;
      v31 = (ItemIconComponent_o *)Instance;
      v32 = DataMasterBase_object__object__int___GetEntity(
              v18,
              *((_DWORD *)&v30->obj.klass + v19),
              (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      v33 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v15);
        byte_4B3ED56 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v34 = itemConsumeEnt->fields.itemIds;
      if ( !v34 )
        goto LABEL_68;
      if ( v20 >= v34->max_length )
        goto LABEL_69;
      if ( !v33 )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v33,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    *((_DWORD *)&v34->obj.klass + v19),
                                    0LL);
      if ( !v32 )
        goto LABEL_68;
      if ( !Instance )
        goto LABEL_68;
      if ( !v31 )
        goto LABEL_68;
      ItemIconComponent__SetItem(
        v31,
        (int32_t)v32[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0LL);
      v35 = itemConsumeEnt->fields.nums;
      if ( !v35 )
        goto LABEL_68;
      if ( v20 >= v35->max_length )
LABEL_69:
        sub_1BDBADC(Instance, v15, v16);
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v31,
        *((_DWORD *)&v35->obj.klass + v19),
        0LL);
      Instance = (DataManager_o *)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_68;
      v38 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v18 = v45;
      v39 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v38 )
        goto LABEL_68;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v38 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v26,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v41 + 32) = v26;
        sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v26, v36, v37);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v19;
    if ( !itemIds )
      goto LABEL_68;
  }
  Instance = (DataManager_o *)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_68;
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_35211104(v42, 0.0, 0.0, 0LL);
  Instance = (DataManager_o *)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (DataManager_o *)this->fields.itemGrid) == 0LL) )
  {
LABEL_68:
    sub_1BDBAD4(Instance, v15);
  }
  klass = Instance->klass;
  HIDWORD(Instance->fields.lookup) = 0;
  HIDWORD(Instance->fields.datalist) = 0;
  ((void (__fastcall *)(DataManager_o *, Il2CppClass *))klass[1]._1.castClass)(Instance, klass[1]._1.declaringType);
}