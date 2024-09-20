void __fastcall UserItemListViewItem___ctor(
        UserItemListViewItem_o *this,
        UserItemData_o *usrItemData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  int8x16_t v7; // q0
  struct System_String_o *name; // x1
  struct ItemEntity_o **p_itemEntity; // x20

  if ( (byte_4A56761 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    byte_4A56761 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemData = usrItemData;
  Master_object = (Il2CppObject *)sub_1B88554(&this->fields.itemData, usrItemData);
  if ( !usrItemData )
    goto LABEL_11;
  v7 = vuzp1q_s32(
         *(int32x4_t *)&usrItemData->fields.type,
         vextq_s8(*(int8x16_t *)&usrItemData->fields.type, *(int8x16_t *)&usrItemData->fields.type, 0xCuLL));
  *(int8x16_t *)&this->fields.dispPriority = vextq_s8(v7, v7, 0xCuLL);
  name = usrItemData->fields.name;
  this->fields.itemName = name;
  sub_1B88554(&this->fields.itemName, name);
  this->fields.itemNum = usrItemData->fields.num;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_11;
  p_itemEntity = &this->fields.itemEntity;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    (Il2CppObject **)&this->fields.itemEntity,
                                    this->fields.itemId,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !*p_itemEntity )
LABEL_11:
    sub_1B8880C(Master_object, v6);
  this->fields.itemLostTime = (*p_itemEntity)->fields.endedAt;
}


void __fastcall UserItemListViewItem__Finalize(UserItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall UserItemListViewItem__SetSortValue(
        UserItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int64_t dispPriority; // x9
  bool result; // w0

  dispPriority = this->fields.dispPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  result = 1;
  this->fields.sortValue1 = dispPriority;
  return result;
}


int32_t __fastcall UserItemListViewItem__get_DispPriority(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispPriority;
}


ItemEntity_o *__fastcall UserItemListViewItem__get_ItemEntity(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


int32_t __fastcall UserItemListViewItem__get_ItemId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemId;
}


int32_t __fastcall UserItemListViewItem__get_ItemImgId(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


int64_t __fastcall UserItemListViewItem__get_ItemLostTime(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemLostTime;
}


System_String_o *__fastcall UserItemListViewItem__get_ItemName(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemName;
}


int32_t __fastcall UserItemListViewItem__get_ItemNum(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemNum;
}


int32_t __fastcall UserItemListViewItem__get_ItemType(UserItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemType;
}


UserItemData_o *__fastcall UserItemListViewItem__get_userItemData(
        UserItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemData;
}