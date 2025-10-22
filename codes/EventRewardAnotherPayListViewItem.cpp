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
  UserItemMaster_o *v14; // x22
  __int64 v15; // x1
  _QWORD *p_image; // x0
  int v17; // w8

  if ( (byte_4C51551 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C51551 = 1;
  }
  ListViewItem___ctor_43860152((ListViewItem_o *)this, index, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  v14 = (UserItemMaster_o *)Master_object;
  this->fields._EventId_k__BackingField = eventId;
  sub_1C3E508(&this->fields._ItemEntity_k__BackingField, itemEntity);
  this->fields._IsAnotherPay_k__BackingField = isAnotherPay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !itemEntity
    || !v14
    || (p_image = UserItemMaster__GetEntityDefinitely(v14, *(_QWORD *)(p_image[23] + 64LL), itemEntity->fields.id, 0)) == 0 )
  {
    sub_1C3E7C0(p_image, v15);
  }
  v17 = *((_DWORD *)p_image + 7);
  this->fields.priority = sortPriority;
  this->fields._IsExchangeable_k__BackingField = v17 > 0;
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


int32_t EventRewardAnotherPayListViewItem__get_EventId(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
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