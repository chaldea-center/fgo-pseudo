void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  int32x2_t *static_fields; // x8

  if ( (byte_4A58151 & 1) == 0 )
  {
    sub_1B885B0(&QuestDialogIconImageComponent_TypeInfo);
    byte_4A58151 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A58150 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A58150 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mEventItemIconList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  Il2CppObject *Item; // x21
  int v7; // w8

  if ( (byte_4A5814F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5814F = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1B8880C(mEventItemIconList, method);
  v4 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v4,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Item, 0LL);
    mEventItemIconList = this->fields.mEventItemIconList;
    ++v4;
    if ( !mEventItemIconList )
      goto LABEL_9;
  }
  v7 = mEventItemIconList->fields._version + 1;
  mEventItemIconList->fields._size = 0;
  mEventItemIconList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventItemIconList->fields._items, 0, size, 0LL);
}


void __fastcall QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  const MethodInfo_3739718 **v3; // x24
  int64_t Instance; // x0
  __int64 v7; // x1
  struct System_Int32_array *itemIds; // x8
  const MethodInfo_311D934 **v9; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x26
  unsigned __int64 v12; // x28
  Il2CppObject *Entity; // x22
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *nums; // x8
  Il2CppObject *gameObject; // x22
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  QuestDialogIconImageComponent_c *v20; // x8
  UnityEngine_Transform_o *v21; // x23
  struct System_Int32_array *v22; // x8
  ItemIconComponent_o *v23; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x0
  const MethodInfo_311D934 **v25; // x21
  Il2CppObject *v26; // x0
  const MethodInfo_3739718 *v27; // x8
  const MethodInfo_3739718 **v28; // x29
  Il2CppObject *v29; // x24
  Il2CppObject *v30; // x25
  struct System_Int32_array *v31; // x8
  struct System_Int32_array *v32; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct UIGrid_o *itemGrid; // x20
  __int64 v41; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v42; // [xsp+8h] [xbp-68h]

  v3 = (const MethodInfo_3739718 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4A5814E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestDialogIconImageComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5814E = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_60;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_60;
  v9 = (const MethodInfo_311D934 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 8LL;
  v42 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v12 = v11 - 8;
    if ( v11 - 8 >= (int)itemIds->max_length )
      break;
    if ( v11 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_61;
      if ( !v10 )
        goto LABEL_60;
      Entity = DataMasterBase_object__object__int___GetEntity(v10, itemIds->m_Items[1], *v9);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v3);
      if ( !Instance )
        goto LABEL_60;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v15 = itemConsumeEnt->fields.itemIds;
      if ( !v15 )
        goto LABEL_60;
      if ( !v15->max_length )
        goto LABEL_61;
      if ( !MasterData_object )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)MasterData_object,
                            Instance,
                            v15->m_Items[1],
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
                            (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_60;
      v18 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_60;
      v19 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v19 )
        goto LABEL_60;
      UnityEngine_Transform__set_parent(v19, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v18, 0LL);
      v20 = QuestDialogIconImageComponent_TypeInfo;
      v21 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
        v20 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_60;
      UnityEngine_Transform__set_localScale(v21, v20->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                            v18,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v22 = itemConsumeEnt->fields.itemIds;
      if ( !v22 )
        goto LABEL_60;
      if ( v12 >= v22->max_length )
        goto LABEL_61;
      if ( !v10 )
        goto LABEL_60;
      v23 = (ItemIconComponent_o *)Instance;
      v24 = v10;
      v25 = v9;
      v26 = DataMasterBase_object__object__int___GetEntity(v24, *((_DWORD *)&v22->obj.klass + v11), *v9);
      v27 = *v3;
      v28 = v3;
      v29 = v26;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v27);
      if ( !Instance )
        goto LABEL_60;
      v30 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = NetworkManager__get_UserId(0LL);
      v31 = itemConsumeEnt->fields.itemIds;
      if ( !v31 )
        goto LABEL_60;
      if ( v12 >= v31->max_length )
        goto LABEL_61;
      if ( !v30 )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v30,
                            Instance,
                            *((_DWORD *)&v31->obj.klass + v11),
                            0LL);
      if ( !v29 )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !v23 )
        goto LABEL_60;
      ItemIconComponent__SetItem(v23, (int32_t)v29[2].monitor, *(_DWORD *)(Instance + 28), 0LL);
      v32 = itemConsumeEnt->fields.nums;
      if ( !v32 )
        goto LABEL_60;
      if ( v12 >= v32->max_length )
LABEL_61:
        sub_1B88814(Instance, v7);
      v3 = v28;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v23,
        *((_DWORD *)&v32->obj.klass + v11),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_60;
      v35 = *(_QWORD *)(Instance + 16);
      v9 = v25;
      v10 = v42;
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v35 )
        goto LABEL_60;
      v37 = *(int *)(Instance + 24);
      if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = v35 + 8 * v37;
        *(_DWORD *)(Instance + 24) = v37 + 1;
        *(_QWORD *)(v38 + 32) = v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)v18, v33, v34);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v11;
    if ( !itemIds )
      goto LABEL_60;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_60;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_33724120(v39, 0.0, 0.0, 0LL);
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_60:
    sub_1B8880C(Instance, v7);
  }
  v41 = *(_QWORD *)Instance;
  *(_DWORD *)(Instance + 52) = 0;
  *(_DWORD *)(Instance + 44) = 0;
  (*(void (__fastcall **)(int64_t, _QWORD))(v41 + 440))(Instance, *(_QWORD *)(v41 + 448));
}