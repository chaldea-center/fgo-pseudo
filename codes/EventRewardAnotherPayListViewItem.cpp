void EventRewardAnotherPayListViewItem___ctor(
        EventRewardAnotherPayListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        ItemEntity_o *itemEntity,
        bool isAnotherPay,
        int32_t sortPriority,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_c *v24; // x0
  _QWORD *p_image; // x0
  int v26; // w8

  if ( (byte_596ABE1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596ABE1 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = NetworkManager_TypeInfo;
  this->fields._IsAnotherPay_k__BackingField = isAnotherPay;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !itemEntity
    || !Master_object
    || (p_image = UserItemMaster__GetEntityDefinitely(
                    (UserItemMaster_o *)Master_object,
                    *(_QWORD *)(p_image[23] + 64LL),
                    itemEntity->fields.id,
                    0)) == 0 )
  {
    sub_2213CDC(p_image, v22);
  }
  v26 = *((_DWORD *)p_image + 7);
  this->fields.priority = sortPriority;
  this->fields._EventId_k__BackingField = eventId;
  this->fields._IsExchangeable_k__BackingField = v26 > 0;
}


void EventRewardAnotherPayListViewItem___ctor_38844764(
        EventRewardAnotherPayListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        ItemEntity_o *itemEntity,
        SkillEntity_o *skillEntity,
        int32_t sortPriority,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Master_object; // x24
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_c *v24; // x0
  _QWORD *p_image; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int v32; // w8
  struct SkillEntity_o **p_SkillEntity_k__BackingField; // x22

  if ( (byte_596ABE2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596ABE2 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  this->fields._ItemEntity_k__BackingField = itemEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemEntity_k__BackingField,
    (int32_t)itemEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = NetworkManager_TypeInfo;
  this->fields._IsAnotherPay_k__BackingField = 1;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22, v23);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  p_image = &NetworkManager_TypeInfo->_1.image;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22, v23);
    p_image = &NetworkManager_TypeInfo->_1.image;
  }
  if ( !itemEntity
    || !Master_object
    || (p_image = UserItemMaster__GetEntityDefinitely(
                    (UserItemMaster_o *)Master_object,
                    *(_QWORD *)(p_image[23] + 64LL),
                    itemEntity->fields.id,
                    0)) == 0 )
  {
    sub_2213CDC(p_image, v22);
  }
  v32 = *((_DWORD *)p_image + 7);
  this->fields._SkillEntity_k__BackingField = skillEntity;
  p_SkillEntity_k__BackingField = &this->fields._SkillEntity_k__BackingField;
  *((_DWORD *)p_SkillEntity_k__BackingField - 1) = sortPriority;
  *((_BYTE *)p_SkillEntity_k__BackingField - 7) = v32 > 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_SkillEntity_k__BackingField,
    (int32_t)skillEntity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *((_DWORD *)p_SkillEntity_k__BackingField + 2) = eventId;
}


bool EventRewardAnotherPayListViewItem__SetSortValue(
        EventRewardAnotherPayListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  _BOOL4 IsExchangeable_k__BackingField; // w10
  int64_t priority; // x11
  int64_t v5; // x9
  bool result; // w0

  IsExchangeable_k__BackingField = this->fields._IsExchangeable_k__BackingField;
  priority = this->fields.priority;
  v5 = 10;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = priority;
  result = 1;
  if ( !IsExchangeable_k__BackingField )
    v5 = 0;
  this->fields.sortValue0 = v5;
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


SkillEntity_o *EventRewardAnotherPayListViewItem__get_SkillEntity(
        EventRewardAnotherPayListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillEntity_k__BackingField;
}