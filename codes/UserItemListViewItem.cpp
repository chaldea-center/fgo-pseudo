void UserItemListViewItem___ctor(UserItemListViewItem_o *this, UserItemData_o *usrItemData, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int8x16_t v11; // q0
  struct System_String_o *name; // x1
  struct ItemEntity_o **p_itemEntity; // x20

  if ( (byte_4C51DD7 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4C51DD7 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemData = usrItemData;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)usrItemData, v5, v6);
  if ( !usrItemData )
    goto LABEL_11;
  v11 = vuzp1q_s32(
          *(int32x4_t *)&usrItemData->fields.type,
          vextq_s8(*(int8x16_t *)&usrItemData->fields.type, *(int8x16_t *)&usrItemData->fields.type, 0xCu));
  *(int8x16_t *)&this->fields.dispPriority = vextq_s8(v11, v11, 0xCu);
  name = usrItemData->fields.name;
  this->fields.itemName = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.itemName, (int32_t)name, v9, v10);
  this->fields.itemNum = usrItemData->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_11;
  p_itemEntity = &this->fields.itemEntity;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    (Il2CppObject **)&this->fields.itemEntity,
                                    this->fields.itemId,
                                    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !*p_itemEntity )
LABEL_11:
    sub_1C3E7C0(Master_object, v8);
  this->fields.itemLostTime = (*p_itemEntity)->fields.endedAt;
}


void UserItemListViewItem__Finalize(UserItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool UserItemListViewItem__SetSortValue(UserItemListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  int64_t dispPriority; // x9
  bool result; // w0

  dispPriority = this->fields.dispPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  result = 1;
  this->fields.sortValue1 = dispPriority;
  return result;
}


int32_t UserItemListViewItem__get_DispPriority(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispPriority;
}


ItemEntity_o *UserItemListViewItem__get_ItemEntity(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


int32_t UserItemListViewItem__get_ItemId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


int32_t UserItemListViewItem__get_ItemImgId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
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