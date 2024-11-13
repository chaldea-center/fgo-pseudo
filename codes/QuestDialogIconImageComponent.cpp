void __fastcall QuestDialogIconImageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32x2_t *static_fields; // x8

  if ( (byte_4B13108 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestDialogIconImageComponent_TypeInfo, v1, v2);
    byte_4B13108 = 1;
  }
  static_fields = (int32x2_t *)QuestDialogIconImageComponent_TypeInfo->static_fields;
  static_fields->n64_u64[0] = vdup_n_s32(0x3F333333u).n64_u64[0];
  static_fields[1].n64_u32[0] = 1065353216;
  QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON = 161;
}


void __fastcall QuestDialogIconImageComponent___ctor(QuestDialogIconImageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13107 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B13107 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.mEventItemIconList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mEventItemIconList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestDialogIconImageComponent__DestroyIcon(
        QuestDialogIconImageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_GameObject__o *mEventItemIconList; // x0
  int32_t v11; // w20
  int32_t size; // w2
  __int64 v13; // x1
  Il2CppObject *Item; // x21
  int v15; // w8

  if ( (byte_4B13106 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B13106 = 1;
  }
  mEventItemIconList = this->fields.mEventItemIconList;
  if ( !mEventItemIconList )
LABEL_9:
    sub_1BCAA3C(mEventItemIconList, method);
  v11 = 0;
  while ( 1 )
  {
    size = mEventItemIconList->fields._size;
    if ( v11 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)mEventItemIconList,
             v11,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)Item, 0LL);
    mEventItemIconList = this->fields.mEventItemIconList;
    ++v11;
    if ( !mEventItemIconList )
      goto LABEL_9;
  }
  v15 = mEventItemIconList->fields._version + 1;
  mEventItemIconList->fields._size = 0;
  mEventItemIconList->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mEventItemIconList->fields._items, 0, size, 0LL);
}


void __fastcall QuestDialogIconImageComponent__SetIconData(
        QuestDialogIconImageComponent_o *this,
        QuestConsumeItemEntity_o *itemConsumeEnt,
        const MethodInfo *method)
{
  const MethodInfo_37DEB14 **v3; // x24
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t Instance; // x0
  __int64 v25; // x1
  struct System_Int32_array *itemIds; // x8
  const MethodInfo_31B2E40 **v27; // x29
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x21
  __int64 v29; // x26
  unsigned __int64 v30; // x28
  Il2CppObject *Entity; // x22
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x23
  struct System_Int32_array *v34; // x8
  struct System_Int32_array *nums; // x8
  __int64 v36; // x1
  Il2CppObject *gameObject; // x22
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_Transform_o *v39; // x23
  QuestDialogIconImageComponent_c *v40; // x8
  UnityEngine_Transform_o *v41; // x23
  struct System_Int32_array *v42; // x8
  ItemIconComponent_o *v43; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x0
  const MethodInfo_31B2E40 **v45; // x21
  Il2CppObject *v46; // x0
  const MethodInfo_37DEB14 *v47; // x8
  const MethodInfo_37DEB14 **v48; // x29
  Il2CppObject *v49; // x24
  __int64 v50; // x1
  Il2CppObject *v51; // x25
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  UnityEngine_GameObject_o *v64; // x0
  struct UIGrid_o *itemGrid; // x20
  __int64 v66; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // [xsp+8h] [xbp-68h]

  v3 = (const MethodInfo_37DEB14 **)&Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  if ( (byte_4B13105 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, itemConsumeEnt, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&QuestDialogIconImageComponent_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    byte_4B13105 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemConsumeEnt )
    goto LABEL_60;
  itemIds = itemConsumeEnt->fields.itemIds;
  if ( !itemIds )
    goto LABEL_60;
  v27 = (const MethodInfo_31B2E40 **)&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__;
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = 8LL;
  v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  while ( 1 )
  {
    v30 = v29 - 8;
    if ( v29 - 8 >= (int)itemIds->max_length )
      break;
    if ( v29 == 8 )
    {
      if ( !itemIds->max_length )
        goto LABEL_61;
      if ( !v28 )
        goto LABEL_60;
      Entity = DataMasterBase_object__object__int___GetEntity(v28, itemIds->m_Items[1], *v27);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(*v3);
      if ( !Instance )
        goto LABEL_60;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
      Instance = NetworkManager__get_UserId(0LL);
      v34 = itemConsumeEnt->fields.itemIds;
      if ( !v34 )
        goto LABEL_60;
      if ( !v34->max_length )
        goto LABEL_61;
      if ( !MasterData_object )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)MasterData_object,
                            Instance,
                            v34->m_Items[1],
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
      Instance = (int64_t)UnityEngine_Object__Instantiate_object_(
                            gameObject,
                            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Instance )
        goto LABEL_60;
      v38 = (UnityEngine_GameObject_o *)Instance;
      Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !this->fields.itemGrid )
        goto LABEL_60;
      v39 = (UnityEngine_Transform_o *)Instance;
      Instance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.itemGrid, 0LL);
      if ( !v39 )
        goto LABEL_60;
      UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)Instance, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__get_transform(v38, 0LL);
      v40 = QuestDialogIconImageComponent_TypeInfo;
      v41 = (UnityEngine_Transform_o *)Instance;
      if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo, v25);
        v40 = QuestDialogIconImageComponent_TypeInfo;
      }
      if ( !v41 )
        goto LABEL_60;
      UnityEngine_Transform__set_localScale(v41, v40->static_fields->ITEM_ICON_SIZE, 0LL);
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                            v38,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemIconWithConsumptionNumberComponent___);
      v42 = itemConsumeEnt->fields.itemIds;
      if ( !v42 )
        goto LABEL_60;
      if ( v30 >= v42->max_length )
        goto LABEL_61;
      if ( !v28 )
        goto LABEL_60;
      v43 = (ItemIconComponent_o *)Instance;
      v44 = v28;
      v45 = v27;
      v46 = DataMasterBase_object__object__int___GetEntity(v44, *((_DWORD *)&v42->obj.klass + v29), *v27);
      v47 = *v3;
      v48 = v3;
      v49 = v46;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v47);
      if ( !Instance )
        goto LABEL_60;
      v51 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
      Instance = NetworkManager__get_UserId(0LL);
      v52 = itemConsumeEnt->fields.itemIds;
      if ( !v52 )
        goto LABEL_60;
      if ( v30 >= v52->max_length )
        goto LABEL_61;
      if ( !v51 )
        goto LABEL_60;
      Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                            (UserItemMaster_o *)v51,
                            Instance,
                            *((_DWORD *)&v52->obj.klass + v29),
                            0LL);
      if ( !v49 )
        goto LABEL_60;
      if ( !Instance )
        goto LABEL_60;
      if ( !v43 )
        goto LABEL_60;
      ItemIconComponent__SetItem(v43, (int32_t)v49[2].monitor, *(_DWORD *)(Instance + 28), 0LL);
      v53 = itemConsumeEnt->fields.nums;
      if ( !v53 )
        goto LABEL_60;
      if ( v30 >= v53->max_length )
LABEL_61:
        sub_1BCAA44(Instance, v25);
      v3 = v48;
      ItemIconWithConsumptionNumberComponent__SetConsumptionNumber(
        (ItemIconWithConsumptionNumberComponent_o *)v43,
        *((_DWORD *)&v53->obj.klass + v29),
        0LL);
      Instance = (int64_t)this->fields.mEventItemIconList;
      if ( !Instance )
        goto LABEL_60;
      v60 = *(_QWORD *)(Instance + 16);
      v27 = v45;
      v28 = v67;
      v61 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(Instance + 28);
      if ( !v60 )
        goto LABEL_60;
      v62 = *(int *)(Instance + 24);
      if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Instance,
          (Il2CppObject *)v38,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = v60 + 8 * v62;
        *(_DWORD *)(Instance + 24) = v62 + 1;
        *(_QWORD *)(v63 + 32) = v38;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), (int64_t)v38, v54, v55, v56, v57, v58, v59);
      }
    }
    itemIds = itemConsumeEnt->fields.itemIds;
    ++v29;
    if ( !itemIds )
      goto LABEL_60;
  }
  Instance = (int64_t)this->fields.itemGrid;
  if ( !Instance )
    goto LABEL_60;
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v64, 0.0, 0.0, 0LL);
  Instance = (int64_t)QuestDialogIconImageComponent_TypeInfo;
  itemGrid = this->fields.itemGrid;
  if ( !QuestDialogIconImageComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestDialogIconImageComponent_TypeInfo, v25);
  if ( !itemGrid
    || (itemGrid->fields.cellWidth = (float)QuestDialogIconImageComponent_TypeInfo->static_fields->INTERVAL_OF_MESSAGE_AND_ITEM_ICON,
        (Instance = (int64_t)this->fields.itemGrid) == 0) )
  {
LABEL_60:
    sub_1BCAA3C(Instance, v25);
  }
  v66 = *(_QWORD *)Instance;
  *(_DWORD *)(Instance + 52) = 0;
  *(_DWORD *)(Instance + 44) = 0;
  (*(void (__fastcall **)(int64_t, _QWORD))(v66 + 440))(Instance, *(_QWORD *)(v66 + 448));
}