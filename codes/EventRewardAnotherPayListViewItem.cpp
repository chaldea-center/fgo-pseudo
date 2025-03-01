// local variable allocation has failed, the output may be wrong!
void __fastcall EventRewardAnotherPayListViewItem___ctor(
        EventRewardAnotherPayListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        ItemEntity_o *itemEntity,
        bool isAnotherPay,
        int32_t sortPriority,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  UserItemMaster_o *v16; // x22
  __int64 v17; // x1
  _QWORD *p_image; // x0
  int v19; // w8

  if ( (byte_4BF8571 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_UserItemMaster___, *(_QWORD *)&index);
    sub_1C2E12C(&DataManager_TypeInfo, v13);
    sub_1C2E12C(&NetworkManager_TypeInfo, v14);
    byte_4BF8571 = 1;
  }
  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  v16 = (UserItemMaster_o *)Master_object;
  this->fields._EventId_k__BackingField = eventId;
  sub_1C2E0D0(&this->fields._ItemEntity_k__BackingField);
  this->fields._IsAnotherPay_k__BackingField = isAnotherPay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v17);
    byte_4BF81D5 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !itemEntity
    || !v16
    || (p_image = UserItemMaster__GetEntityDefinitely(v16, *(_QWORD *)(p_image[23] + 64LL), itemEntity->fields.id, 0LL)) == 0LL )
  {
    sub_1C2E388(p_image, v17);
  }
  v19 = *((_DWORD *)p_image + 7);
  this->fields.priority = sortPriority;
  this->fields._IsExchangeable_k__BackingField = v19 > 0;
}


bool __fastcall EventRewardAnotherPayListViewItem__SetSortValue(
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
    v6 = 10LL;
  else
    v6 = 0LL;
  result = 1;
  this->fields.sortValue0 = v6;
  return result;
}


int32_t __fastcall EventRewardAnotherPayListViewItem__get_EventId(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


bool __fastcall EventRewardAnotherPayListViewItem__get_IsAnotherPay(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAnotherPay_k__BackingField;
}


bool __fastcall EventRewardAnotherPayListViewItem__get_IsExchangeable(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsExchangeable_k__BackingField;
}


ItemEntity_o *__fastcall EventRewardAnotherPayListViewItem__get_ItemEntity(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemEntity_k__BackingField;
}