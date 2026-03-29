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
  UserItemMaster_o *v14; // x23
  __int64 v15; // x1
  _QWORD *p_image; // x0
  int v17; // w8

  if ( (byte_4D2B104 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B104 = 1;
  }
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  v14 = (UserItemMaster_o *)Master_object;
  sub_1C93A78(&this->fields._ItemEntity_k__BackingField, itemEntity);
  this->fields._IsAnotherPay_k__BackingField = isAnotherPay;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
    sub_1C93D2C(p_image, v15);
  }
  v17 = *((_DWORD *)p_image + 7);
  this->fields.priority = sortPriority;
  this->fields._EventId_k__BackingField = eventId;
  this->fields._IsExchangeable_k__BackingField = v17 > 0;
}


void EventRewardAnotherPayListViewItem___ctor_32925980(
        EventRewardAnotherPayListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        ItemEntity_o *itemEntity,
        SkillEntity_o *skillEntity,
        int32_t sortPriority,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserItemMaster_o *v14; // x24
  __int64 v15; // x1
  _QWORD *p_image; // x0
  int v17; // w8
  struct SkillEntity_o **p_SkillEntity_k__BackingField; // x21

  if ( (byte_4D2B105 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2B105 = 1;
  }
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  v14 = (UserItemMaster_o *)Master_object;
  sub_1C93A78(&this->fields._ItemEntity_k__BackingField, itemEntity);
  this->fields._IsAnotherPay_k__BackingField = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
    sub_1C93D2C(p_image, v15);
  }
  v17 = *((_DWORD *)p_image + 7);
  this->fields._SkillEntity_k__BackingField = skillEntity;
  p_SkillEntity_k__BackingField = &this->fields._SkillEntity_k__BackingField;
  *((_DWORD *)p_SkillEntity_k__BackingField - 1) = sortPriority;
  *((_BYTE *)p_SkillEntity_k__BackingField - 7) = v17 > 0;
  sub_1C93A78(p_SkillEntity_k__BackingField, skillEntity);
  *((_DWORD *)p_SkillEntity_k__BackingField + 2) = eventId;
}


bool EventRewardAnotherPayListViewItem__SetSortValue(
        EventRewardAnotherPayListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL4 IsExchangeable_k__BackingField; // w10
  int64_t priority; // x9
  int64_t v5; // x9

  IsExchangeable_k__BackingField = this->fields._IsExchangeable_k__BackingField;
  priority = this->fields.priority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = priority;
  if ( IsExchangeable_k__BackingField )
    v5 = 10;
  else
    v5 = 0;
  this->fields.sortValue0 = v5;
  return 1;
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


SkillEntity_o *EventRewardAnotherPayListViewItem__get_SkillEntity(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillEntity_k__BackingField;
}