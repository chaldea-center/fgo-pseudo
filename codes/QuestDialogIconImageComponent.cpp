void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32x2_t *static_fields; // x8

  if ( (byte_48DF8BB & 1) == 0 )
  {
    sub_1B00CCC(&QuestDialogIconImageComponent_TypeInfo, v1);
    byte_48DF8BB = 1;
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
  int32_t v6; // w3

  if ( (byte_48DF8BA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_48DF8BA = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mEventItemIconList, (int32_t)v4, v5, v6);
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

  if ( (byte_48DF8B9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DF8B9 = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1B00F28(mEventItemIconList, method);
  v7 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v7 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v7,
             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656((UnityEngine_Object_o *)Item, 0LL);
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
  const MethodInfo_35FBBF0 **v3; // x24
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  __int64 v16; // x1
  struct System_Int32_array *itemIds; // x8
  const MethodInfo_2FE6A4C **v18; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x26
  unsigned __int64 v21; // x28
  Il2CppObject *Entity; // x22
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *v24; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x22
  UnityEngine_GameObject_o *v27; // x22
  UnityEngine_Transform_o *v28; // x23
  QuestDialogIconImageComponent_c *v29; // x8
  UnityEngine_Transform_o *v30; // x23
  struct System_Int32_array *v31; // x8
  ItemIconComponent_o *v32; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x0
  const MethodInfo_2FE6A4C **v34; // x21
  Il2CppObject *v35; // x0
  const MethodInfo_35FBBF0 *v36; // x8
  const MethodInfo_35FBBF0 **v37; // x29
  Il2CppObject *v38; // x24
  Il2CppObject *v39; // x25
  struct System_Int32_array *v40; // x8
  struct System_Int32_array *v41; // x8
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  UnityEngine_GameObject_o *v48; // x0
  struct UIGrid_o *itemGrid; // x20
  __int64 v50; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // [xsp+8h] [xbp-68h]

  v3 = (const MethodInfo_35FBBF0 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_48DF8B8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v12);
    sub_1B00CCC(&QuestDialogIconImageComponent_TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_48DF8B8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_60;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_60;
  v18 = (const MethodInfo_2FE6A4C **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v20 = 8LL;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v21 = v20 - 8;
    if ( v20 - 8 >= (int)itemIds->max_length )
      break;
    if ( v20 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_60;
      Entity = DataMasterBase_object__object__int___GetEntity(v19, itemIds->m_Items[1], *v18);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v3);
      if ( !Instance )
        goto LABEL_60;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v24 = itemConsumeEnt->fields.itemIds;
      if ( !v24 )
        goto LABEL_60;
      if ( !v24->max_length )
        goto LABEL_61;
      if ( !MasterData_object )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)MasterData_object,
                            Instance,
                            v24->m_Items[1],
                            0LL);
      if ( !Entity )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !this->fields.eventItemIcon )
        goto LABEL_60;
      ItemIconComponent__SetItem(
        (ItemIconComponent_o *)this->fields.eventItemIcon,
        (int32_t)Entity[2].monitor,
        *(_DWORD *)(Instance + 28),
        0LL);
      nums = itemConsumeEnt->fields.nums;
      if ( !nums )
        goto LABEL_60;
      if ( !nums->max_length )
        goto LABEL_61;
      Instance = (int64_t)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_60;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)Instance,
        nums->m_Items[1],
        0LL);
    }
    else
    {
      Instance = (int64_t)this->fields.eventItemIcon;
      if ( !Instance )
        goto LABEL_60;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (int64_t)UnityEngine_Object__Instantiate_object_(
                            gameObject,
                            (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_60;
      v27 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_60;
      v28 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v28 )
        goto LABEL_60;
      UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v27, 0LL);
      v29 = QuestDialogIconImageComponent_TypeInfo;
      v30 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v29 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v30 )
        goto LABEL_60;
      UnityEngine_Transform__set_localScale(v30, v29->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                            v27,
                            (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v31 = itemConsumeEnt->fields.itemIds;
      if ( !v31 )
        goto LABEL_60;
      if ( v21 >= v31->max_length )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_60;
      v32 = (ItemIconComponent_o *)Instance;
      v33 = v19;
      v34 = v18;
      v35 = DataMasterBase_object__object__int___GetEntity(v33, *((_DWORD *)&v31->obj.klass + v20), *v18);
      v36 = *v3;
      v37 = v3;
      v38 = v35;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v36);
      if ( !Instance )
        goto LABEL_60;
      v39 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v40 = itemConsumeEnt->fields.itemIds;
      if ( !v40 )
        goto LABEL_60;
      if ( v21 >= v40->max_length )
        goto LABEL_61;
      if ( !v39 )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v39,
                            Instance,
                            *((_DWORD *)&v40->obj.klass + v20),
                            0LL);
      if ( !v38 )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !v32 )
        goto LABEL_60;
      ItemIconComponent__SetItem(v32, (int32_t)v38[2].monitor, *(_DWORD *)(Instance + 28), 0LL);
      v41 = itemConsumeEnt->fields.nums;
      if ( !v41 )
        goto LABEL_60;
      if ( v21 >= v41->max_length )
LABEL_61:
        sub_1B00F30(Instance, v16);
      v3 = v37;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v32,
        *((_DWORD *)&v41->obj.klass + v20),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_60;
      v44 = *(_QWORD *)(Instance + 16);
      v18 = v34;
      v19 = v51;
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v44 )
        goto LABEL_60;
      v46 = *(int *)(Instance + 24);
      if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v27,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * v46;
        *(_DWORD *)(Instance + 24) = v46 + 1;
        *(_QWORD *)(v47 + 32) = v27;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v27, v42, v43);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v20;
    if ( !itemIds )
      goto LABEL_60;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_60;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_32535464(v48, 0.0, 0.0, 0LL);
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_60:
    sub_1B00F28(Instance, v16);
  }
  v50 = *(_QWORD *)Instance;
  *(_DWORD *)(Instance + 52) = 0;
  *(_DWORD *)(Instance + 44) = 0;
  (*(void (__fastcall **)(int64_t, _QWORD))(v50 + 440))(Instance, *(_QWORD *)(v50 + 448));
}