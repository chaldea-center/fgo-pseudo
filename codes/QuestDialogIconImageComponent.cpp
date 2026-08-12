void QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int32x2_t *static_fields; // x8

  if ( (byte_596D2F7 & 1) == 0 )
  {
    sub_2213A60(&QuestDialogIconImageComponent_TypeInfo);
    byte_596D2F7 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields[1].n64_u32[0] = 1065353216;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596D2F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596D2F6 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mEventItemIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void QuestDialogIconImageComponent__DestroyIcon(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Item; // x21
  int v9; // w8

  if ( (byte_596D2F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D2F5 = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_2213CDC(mEventItemIconList, method);
  v4 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v4,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)Item, 0);
    mEventItemIconList = this->fields.mEventItemIconList;
    ++v4;
    if ( !mEventItemIconList )
      goto LABEL_9;
  }
  v9 = mEventItemIconList->fields._version + 1;
  mEventItemIconList->fields._size = 0;
  mEventItemIconList->fields._version = v9;
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
  __int64 v9; // x28
  unsigned __int64 v10; // x27
  Il2CppObject *Entity; // x23
  __int64 v12; // x2
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *nums; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *gameObject; // x23
  UnityEngine_GameObject_o *v19; // x23
  UnityEngine_Transform_o *v20; // x24
  __int64 v21; // x2
  UnityEngine_Transform_o *v22; // x24
  struct System_Int32_array *v23; // x8
  ItemIconComponent_o *v24; // x24
  Il2CppObject *v25; // x25
  __int64 v26; // x2
  Il2CppObject *v27; // x26
  struct System_Int32_array *v28; // x8
  struct System_Int32_array *v29; // x8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v37; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x2
  struct UIGrid_o *itemGrid; // x20
  DataManager_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_596D2F4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestDialogIconImageComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596D2F4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_60;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_60;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 8;
  v44 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v10 = v9 - 8;
    if ( v9 - 8 >= SLODWORD(itemIds->max_length) )
      break;
    if ( v9 == 8 )
    {
      if ( !v8 )
        goto LABEL_60;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v8,
                 itemIds->m_Items[0],
                 (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_60;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v12);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v12);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v14 = itemConsumeEnt->fields.itemIds;
      if ( !v14 )
        goto LABEL_60;
      if ( !LODWORD(v14->max_length) )
        goto LABEL_67;
      if ( !MasterData_object )
        goto LABEL_60;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v14->m_Items[0],
                                    0);
      if ( !Entity )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !this->fields.eventItemIcon )
        goto LABEL_60;
      ItemIconComponent__SetItem(
        (ItemIconComponent_o *)this->fields.eventItemIcon,
        (int32_t)Entity[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_60;
      if ( !LODWORD(nums->max_length) )
        goto LABEL_67;
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_60;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)Instance,
        nums->m_Items[0],
        0);
    }
    else
    {
      Instance = (DataManager_o *)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_60;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                    gameObject,
                                    (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_60;
      v19 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !this->fields.itemGrid )
        goto LABEL_60;
      v20 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemGrid,
                                    0);
      if ( !v20 )
        goto LABEL_60;
      UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)Instance, 0);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v19, 0);
      v22 = (UnityEngine_Transform_o *)Instance;
      if ( !*(&QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo, v6, v21);
      if ( !v22 )
        goto LABEL_60;
      UnityEngine_Transform__set_localScale(
        v22,
        QuestDialogIconImageComponent_TypeInfo->static_fields->ITEM_ICON_SIZE,
        0);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v19,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v23 = itemConsumeEnt->fields.itemIds;
      if ( !v23 )
        goto LABEL_60;
      if ( v10 >= LODWORD(v23->max_length) )
        goto LABEL_67;
      if ( !v8 )
        goto LABEL_60;
      v24 = (ItemIconComponent_o *)Instance;
      v25 = DataMasterBase_object__object__int___GetEntity(
              v8,
              *((_DWORD *)&v23->obj.klass + v9),
              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_60;
      v27 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v26);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v26);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v28 = itemConsumeEnt->fields.itemIds;
      if ( !v28 )
        goto LABEL_60;
      if ( v10 >= LODWORD(v28->max_length) )
        goto LABEL_67;
      if ( !v27 )
        goto LABEL_60;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v27,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    *((_DWORD *)&v28->obj.klass + v9),
                                    0);
      if ( !v25 )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !v24 )
        goto LABEL_60;
      ItemIconComponent__SetItem(
        v24,
        (int32_t)v25[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0);
      v29 = itemConsumeEnt->fields.nums;
      if ( !v29 )
        goto LABEL_60;
      if ( v10 >= LODWORD(v29->max_length) )
LABEL_67:
        sub_2213CE4(Instance);
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v24,
        *((_DWORD *)&v29->obj.klass + v9),
        0);
      Instance = (DataManager_o *)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_60;
      m_CachedPtr = Instance->fields.m_CachedPtr;
      v8 = v44;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_60;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v39 + 32) = v19;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 32), (int32_t)v19, v30, v31, v32, v33, v34, v35);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v9;
    if ( !itemIds )
      goto LABEL_60;
  }
  Instance = (DataManager_o *)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_60;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPosition_42891516(v40, 0.0, 0.0, 0);
  Instance = (DataManager_o *)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !*(&QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo, v6, v41);
  if ( !itemGrid
    || (Instance = (DataManager_o *)this->fields.itemGrid,
        itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        !Instance) )
  {
LABEL_60:
    sub_2213CDC(Instance, v6);
  }
  klass = Instance->klass;
  HIDWORD(Instance->fields.lookup) = 0;
  HIDWORD(Instance->fields.datalist) = 0;
  ((void (__fastcall *)(DataManager_o *, Il2CppClass *))klass[1]._1.element_class)(Instance, klass[1]._1.castClass);
}