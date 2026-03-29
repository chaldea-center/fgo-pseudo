void UserItemListViewItem___ctor(UserItemListViewItem_o *this, UserItemData_o *usrItemData, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_String_o *name; // x1
  struct ItemEntity_o **p_itemEntity; // x20

  if ( (byte_4D2B9A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4D2B9A8 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemData = usrItemData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemData, (int32_t)usrItemData, v5, v6, v7, v8, v9, v10);
  if ( !usrItemData )
    goto LABEL_11;
  this->fields.itemId = usrItemData->fields.itemId;
  *(int32x2_t *)&this->fields.dispPriority = vrev64_s32(*(int32x2_t *)&usrItemData->fields.type);
  name = usrItemData->fields.name;
  this->fields.itemName = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemName, (int32_t)name, v13, v14, v15, v16, v17, v18);
  this->fields.itemNum = usrItemData->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_11;
  p_itemEntity = &this->fields.itemEntity;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    (Il2CppObject **)&this->fields.itemEntity,
                                    this->fields.itemId,
                                    (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !*p_itemEntity )
LABEL_11:
    sub_1C93D2C(Master_object, v12);
  this->fields.itemLostTime = (*p_itemEntity)->fields.endedAt;
}


void UserItemListViewItem__Finalize(UserItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool UserItemListViewItem__SetSortValue(UserItemListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  int64_t dispPriority; // x9

  dispPriority = this->fields.dispPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = dispPriority;
  return 1;
}


ItemEntity_o *UserItemListViewItem__get_ItemEntity(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


int32_t UserItemListViewItem__get_ItemId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


int64_t UserItemListViewItem__get_ItemLostTime(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemLostTime;
}


System_String_o *UserItemListViewItem__get_ItemName(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemName;
}


int32_t UserItemListViewItem__get_ItemNum(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemNum;
}


int32_t UserItemListViewItem__get_ItemType(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemType;
}


UserItemData_o *UserItemListViewItem__get_userItemData(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemData;
}