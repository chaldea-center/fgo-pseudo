void EventRewardAnotherPayListViewItem___ctor(
        EventRewardAnotherPayListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        ItemEntity_o *itemEntity,
        bool isAnotherPay,
        int32_t sortPriority,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserItemMaster_o *v13; // x22
  __int64 v14; // x1
  _QWORD *p_image; // x0
  int v16; // w8

  if ( (byte_4CE8E41 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE8E41 = 1;
  }
  ListViewItem___ctor_44325320((ListViewItem_o *)this, index, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  v13 = (UserItemMaster_o *)Master_object;
  sub_1C7BA8C(&this->fields._ItemEntity_k__BackingField, itemEntity);
  this->fields._IsAnotherPay_k__BackingField = isAnotherPay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !itemEntity
    || !v13
    || (p_image = UserItemMaster__GetEntityDefinitely(v13, *(_QWORD *)(p_image[23] + 64LL), itemEntity->fields.id, 0)) == 0 )
  {
    sub_1C7BD40(p_image, v14);
  }
  v16 = *((_DWORD *)p_image + 7);
  this->fields.priority = sortPriority;
  this->fields._IsExchangeable_k__BackingField = v16 > 0;
}


bool EventRewardAnotherPayListViewItem__SetSortValue(
        EventRewardAnotherPayListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL4 IsExchangeable_k__BackingField; // w10
  int64_t priority; // x9
  int64_t v6; // x9
  bool result; // w0

  IsExchangeable_k__BackingField = this->fields._IsExchangeable_k__BackingField;
  priority = this->fields.priority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = priority;
  if ( IsExchangeable_k__BackingField )
    v6 = 10;
  else
    v6 = 0;
  result = 1;
  this->fields.sortValue0 = v6;
  return result;
}


bool EventRewardAnotherPayListViewItem__get_IsAnotherPay(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAnotherPay_k__BackingField;
}


bool EventRewardAnotherPayListViewItem__get_IsExchangeable(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsExchangeable_k__BackingField;
}


ItemEntity_o *EventRewardAnotherPayListViewItem__get_ItemEntity(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}