void QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int32x2_t *static_fields; // x8

  if ( (byte_4D2D60D & 1) == 0 )
  {
    sub_1C93AD4(&QuestDialogIconImageComponent_TypeInfo);
    byte_4D2D60D = 1;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D60C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2D60C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mEventItemIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestDialogIconImageComponent__DestroyIcon(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  Il2CppObject *Item; // x21
  int v7; // w8

  if ( (byte_4D2D60B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D60B = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1C93D2C(mEventItemIconList, method);
  v4 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v4,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)Item, 0);
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
  __int64 v6; // x1
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x25
  __int64 v9; // x27
  unsigned __int64 v10; // x28
  Il2CppObject *Entity; // x23
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *v13; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x23
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Transform_o *v17; // x24
  QuestDialogIconImageComponent_c *v18; // x8
  UnityEngine_Transform_o *v19; // x24
  struct System_Int32_array *v20; // x8
  ItemIconComponent_o *v21; // x24
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x26
  struct System_Int32_array *v24; // x8
  struct System_Int32_array *v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  struct UIGrid_o *itemGrid; // x20
  DataManager_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v39; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2D60A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&QuestDialogIconImageComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D60A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_68;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_68;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 8;
  v39 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v10 = v9 - 8;
    if ( v9 - 8 >= SLODWORD(itemIds->max_length) )
      break;
    if ( v9 == 8 )
    {
      if ( !LODWORD(itemIds->max_length) )
        goto LABEL_69;
      if ( !v8 )
        goto LABEL_68;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 itemIds->m_Items[0],
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v13 = itemConsumeEnt->fields.itemIds;
      if ( !v13 )
        goto LABEL_68;
      if ( !LODWORD(v13->max_length) )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v13->m_Items[0],
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
                                    (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_68;
      v16 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemGrid )
        goto LABEL_68;
      v17 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemGrid,
                                    0);
      if ( !v17 )
        goto LABEL_68;
      UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v16, 0);
      v18 = QuestDialogIconImageComponent_TypeInfo;
      v19 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v18 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_68;
      UnityEngine_Transform__set_localScale(v19, v18->static_fields->ITEM_ICON_SIZE, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v16,
                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v20 = itemConsumeEnt->fields.itemIds;
      if ( !v20 )
        goto LABEL_68;
      if ( v10 >= LODWORD(v20->max_length) )
        goto LABEL_69;
      if ( !v8 )
        goto LABEL_68;
      v21 = (ItemIconComponent_o *)Instance;
      v22 = DataMasterBase_object__object__int___GetEntity(
              v8,
              *((_DWORD *)&v20->obj.klass + v9),
              (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      v23 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v24 = itemConsumeEnt->fields.itemIds;
      if ( !v24 )
        goto LABEL_68;
      if ( v10 >= LODWORD(v24->max_length) )
        goto LABEL_69;
      if ( !v23 )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v23,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    *((_DWORD *)&v24->obj.klass + v9),
                                    0);
      if ( !v22 )
        goto LABEL_68;
      if ( !Instance )
        goto LABEL_68;
      if ( !v21 )
        goto LABEL_68;
      ItemIconComponent__SetItem(
        v21,
        (int32_t)v22[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0);
      v25 = itemConsumeEnt->fields.nums;
      if ( !v25 )
        goto LABEL_68;
      if ( v10 >= LODWORD(v25->max_length) )
LABEL_69:
        sub_1C93D34(Instance);
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v21,
        *((_DWORD *)&v25->obj.klass + v9),
        0);
      Instance = (DataManager_o *)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_68;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v8 = v39;
      v33 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_68;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v16,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v35 + 32) = v16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v16, v26, v27, v28, v29, v30, v31);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v9;
    if ( !itemIds )
      goto LABEL_68;
  }
  Instance = (DataManager_o *)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_68;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition_36745168(v36, 0.0, 0.0, 0);
  Instance = (DataManager_o *)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (DataManager_o *)this->fields.itemGrid) == 0) )
  {
LABEL_68:
    sub_1C93D2C(Instance, v6);
  }
  klass = Instance->klass;
  HIDWORD(Instance->fields.lookup) = 0;
  HIDWORD(Instance->fields.datalist) = 0;
  ((void (__fastcall *)(DataManager_o *, Il2CppClass *))klass[1]._1.element_class)(Instance, klass[1]._1.castClass);
}