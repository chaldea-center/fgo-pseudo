void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x8

  if ( (byte_4BFA5C9 & 1) == 0 )
  {
    sub_1C2E12C(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_4BFA5C9 = 1;
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFA5C8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BFA5C8 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.mEventItemIconList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BFA5C7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4BFA5C7 = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1C2E388(mEventItemIconList, method);
  v7 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v7 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v7,
             (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720((UnityEngine_Object_o *)Item, 0LL);
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
  struct System_Int32_array *itemIds; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x25
  __int64 v18; // x27
  unsigned __int64 v19; // x28
  Il2CppObject *Entity; // x23
  Il2CppObject *MasterData_object; // x24
  struct System_Int32_array *v22; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x23
  UnityEngine_GameObject_o *v25; // x23
  UnityEngine_Transform_o *v26; // x24
  QuestDialogIconImageComponent_c *v27; // x8
  UnityEngine_Transform_o *v28; // x24
  struct System_Int32_array *v29; // x8
  ItemIconComponent_o *v30; // x24
  Il2CppObject *v31; // x25
  Il2CppObject *v32; // x26
  struct System_Int32_array *v33; // x8
  struct System_Int32_array *v34; // x8
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  struct UIGrid_o *itemGrid; // x20
  DataManager_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v48; // [xsp+8h] [xbp-68h]

  if ( (byte_4BFA5C6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1C2E12C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&QuestDialogIconImageComponent_TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BFA5C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_68;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_68;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v18 = 8LL;
  v48 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v19 = v18 - 8;
    if ( v18 - 8 >= (int)itemIds->max_length )
      break;
    if ( v18 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_69;
      if ( !v17 )
        goto LABEL_68;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v17,
                 itemIds->m_Items[1],
                 (const MethodInfo_327B180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      MasterData_object = DataManager__GetMasterData_object_(
                            Instance,
                            (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v15);
        byte_4BF81D5 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v22 = itemConsumeEnt->fields.itemIds;
      if ( !v22 )
        goto LABEL_68;
      if ( !v22->max_length )
        goto LABEL_69;
      if ( !MasterData_object )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    v22->m_Items[1],
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
                                    (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_68;
      v25 = (UnityEngine_GameObject_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_68;
      v26 = (UnityEngine_Transform_o *)Instance;
      Instance = (DataManager_o *)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)this->fields.itemGrid,
                                    0LL);
      if ( !v26 )
        goto LABEL_68;
      UnityEngine_Transform__set_parent(v26, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
      v27 = QuestDialogIconImageComponent_TypeInfo;
      v28 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v27 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v28 )
        goto LABEL_68;
      UnityEngine_Transform__set_localScale(v28, v27->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                    v25,
                                    (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v29 = itemConsumeEnt->fields.itemIds;
      if ( !v29 )
        goto LABEL_68;
      if ( v19 >= v29->max_length )
        goto LABEL_69;
      if ( !v17 )
        goto LABEL_68;
      v30 = (ItemIconComponent_o *)Instance;
      v31 = DataMasterBase_object__object__int___GetEntity(
              v17,
              *((_DWORD *)&v29->obj.klass + v18),
              (const MethodInfo_327B180 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      v32 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BF81D5 )
      {
        sub_1C2E12C(&NetworkManager_TypeInfo, v15);
        byte_4BF81D5 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v33 = itemConsumeEnt->fields.itemIds;
      if ( !v33 )
        goto LABEL_68;
      if ( v19 >= v33->max_length )
        goto LABEL_69;
      if ( !v32 )
        goto LABEL_68;
      Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)v32,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    *((_DWORD *)&v33->obj.klass + v18),
                                    0LL);
      if ( !v31 )
        goto LABEL_68;
      if ( !Instance )
        goto LABEL_68;
      if ( !v30 )
        goto LABEL_68;
      ItemIconComponent__SetItem(
        v30,
        (int32_t)v31[2].monitor,
        HIDWORD(Instance->fields.m_CancellationTokenSource),
        1,
        0LL);
      v34 = itemConsumeEnt->fields.nums;
      if ( !v34 )
        goto LABEL_68;
      if ( v19 >= v34->max_length )
LABEL_69:
        sub_1C2E390(Instance, v15);
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v30,
        *((_DWORD *)&v34->obj.klass + v18),
        0LL);
      Instance = (DataManager_o *)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_68;
      v41 = *(_QWORD *)&Instance->fields.m_CachedPtr;
      v17 = v48;
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v41 )
        goto LABEL_68;
      m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v41 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v25,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = v41 + 8 * m_CancellationTokenSource_low;
        LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v44 + 32) = v25;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v44 + 32), (int64_t)v25, v35, v36, v37, v38, v39, v40);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v18;
    if ( !itemIds )
      goto LABEL_68;
  }
  Instance = (DataManager_o *)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_68;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_34857788(v45, 0.0, 0.0, 0LL);
  Instance = (DataManager_o *)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (DataManager_o *)this->fields.itemGrid) == 0LL) )
  {
LABEL_68:
    sub_1C2E388(Instance, v15);
  }
  klass = Instance->klass;
  HIDWORD(Instance->fields.lookup) = 0;
  HIDWORD(Instance->fields.datalist) = 0;
  ((void (__fastcall *)(DataManager_o *, Il2CppClass *))klass[1]._1.castClass)(Instance, klass[1]._1.declaringType);
}