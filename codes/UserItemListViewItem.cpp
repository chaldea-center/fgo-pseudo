void UserItemListViewItem___ctor(UserItemListViewItem_o *this, UserItemData_o *usrItemData, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_String_o *name; // x1
  int32_t itemId; // w8
  __int64 v21; // x1
  __int64 v22; // x2
  DataManager_c *v23; // x0
  int v24; // w9
  struct ItemEntity_o *itemEntity; // x8

  if ( (byte_59334F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_59334F3 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemData = usrItemData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemData, (int32_t)usrItemData, v5, v6, v7, v8, v9, v10);
  if ( !usrItemData )
    goto LABEL_11;
  name = usrItemData->fields.name;
  itemId = usrItemData->fields.itemId;
  this->fields.itemName = name;
  this->fields.itemId = itemId;
  *(int32x2_t *)&this->fields.dispPriority = vrev64_s32(*(int32x2_t *)&usrItemData->fields.type);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemName, (int32_t)name, v13, v14, v15, v16, v17, v18);
  v23 = DataManager_TypeInfo;
  v24 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.itemNum = usrItemData->fields.num;
  if ( !v24 )
    j_il2cpp_runtime_class_init_0(v23, v21, v22);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    (Il2CppObject **)&this->fields.itemEntity,
                                    this->fields.itemId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  itemEntity = this->fields.itemEntity;
  if ( !itemEntity )
LABEL_11:
    sub_21FFECC(Master_object, v12);
  this->fields.itemLostTime = itemEntity->fields.endedAt;
}


void UserItemListViewItem__Finalize(UserItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool UserItemListViewItem__SetSortValue(UserItemListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  bool result; // w0
  int64_t dispPriority; // x9

  result = 1;
  dispPriority = this->fields.dispPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = dispPriority;
  return result;
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