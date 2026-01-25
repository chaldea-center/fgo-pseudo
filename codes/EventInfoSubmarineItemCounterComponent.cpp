void EventInfoSubmarineItemCounterComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4CF0480 & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoSubmarineItemCounterComponent_TypeInfo);
    byte_4CF0480 = 1;
  }
  LODWORD(EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME) = (struct EventInfoSubmarineItemCounterComponent_StaticFields)1056964608;
}


void EventInfoSubmarineItemCounterComponent___ctor(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoSubmarineItemCounterComponent__AddCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UICounterLabel_o *countLabel; // x8

  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C7BD40(this, count);
  countLabel->fields._AddCount_k__BackingField = count;
}


UserItemEntity_o *EventInfoSubmarineItemCounterComponent__GetUserItemEntity(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF047F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF047F = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C7BD40(Instance, v5);
  UserItemMaster__TryGetEntity(
    (UserItemMaster_o *)MasterData_object,
    &entity,
    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
    itemId,
    0);
  return entity;
}


void EventInfoSubmarineItemCounterComponent__PlayAnimation(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *countLabel; // x20
  struct UICounterLabel_o *v4; // x0
  __int64 v5; // x1
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  UserItemEntity_o *UserItemEntity; // x0
  int32_t num; // w8

  if ( (byte_4CF047D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF047D = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (struct UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0, 0);
    if ( ((unsigned __int8)v4 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v7 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v7, (int32_t)v7, v8)) == 0)
          ? (num = 0)
          : (num = UserItemEntity->fields.num),
            (v4 = this->fields.countLabel) == 0) )
      {
        sub_1C7BD40(v4, v5);
      }
      v4->fields._AddCount_k__BackingField = num - v4->fields._MainCount_k__BackingField;
      UICounterLabel__PlayAnimation(v4, 0);
    }
  }
}


void EventInfoSubmarineItemCounterComponent__Setup(
        EventInfoSubmarineItemCounterComponent_o *this,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *itemData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventUiValueEntity_o **p_eventUiValueEntity; // x21
  void *ItemInfo; // x0
  __int64 v13; // x1
  UISprite_o *iconSprite; // x22
  System_String_o *value; // x23
  EventInfoSubmarineItemCounterComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  UserItemEntity_o *UserItemEntity; // x0
  UserItemEntity_o *v19; // x21
  UnityEngine_Object_o *countLabel; // x22
  int32_t num; // w22
  UICounterLabel_o *v22; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *nameLabel; // x22
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_4CF047C & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&EventInfoSubmarineItemCounterComponent_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25307/*"{0:#,0}"*/);
    byte_4CF047C = 1;
  }
  this->fields.eventUiValueEntity = eventUiValueEntity;
  p_eventUiValueEntity = &this->fields.eventUiValueEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiValueEntity,
    (int32_t)eventUiValueEntity,
    (int32_t)itemData,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.eventUiValueEntity )
    goto LABEL_30;
  iconSprite = this->fields.iconSprite;
  value = this->fields.eventUiValueEntity->fields.value;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  ItemInfo = (void *)AtlasManager__SetEventUI(iconSprite, value, 0);
  if ( !*p_eventUiValueEntity )
    goto LABEL_30;
  v16 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse((*p_eventUiValueEntity)->fields.value, 0);
  UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v16, (int32_t)v16, v17);
  if ( itemData )
  {
    v19 = UserItemEntity;
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(countLabel, 0, 0) )
    {
      if ( v19 )
        num = v19->fields.num;
      else
        num = 0;
      v22 = this->fields.countLabel;
      ItemInfo = EventInfoSubmarineItemCounterComponent_TypeInfo;
      if ( !EventInfoSubmarineItemCounterComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterComponent_TypeInfo);
      if ( !v22 )
        goto LABEL_30;
      UICounterLabel__Setup(
        v22,
        num,
        EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME,
        (System_String_o *)StringLiteral_25307/*"{0:#,0}"*/,
        1,
        0);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_30;
      UICounterLabel__SetCountLabel((UICounterLabel_o *)ItemInfo, num, 0);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0);
      GameObjectExtensions__SetLocalPosition_36523220(gameObject, itemData->fields.CountPosition, 0);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0, 0) )
    {
      if ( v19 )
      {
        ItemInfo = UserItemEntity__getItemInfo(v19, 0);
        if ( ItemInfo )
        {
          if ( !this->fields.nameLabel )
            goto LABEL_30;
          UILabel__set_text(this->fields.nameLabel, *((System_String_o **)ItemInfo + 3), 0);
        }
      }
      ItemInfo = this->fields.nameLabel;
      if ( ItemInfo )
      {
        v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0);
        GameObjectExtensions__SetLocalPosition_36523220(v25, itemData->fields.namePosition, 0);
        return;
      }
LABEL_30:
      sub_1C7BD40(ItemInfo, v13);
    }
  }
}


void EventInfoSubmarineItemCounterComponent__UpdateCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *countLabel; // x20
  UICounterLabel_o *v4; // x0
  __int64 num; // x1
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  UserItemEntity_o *UserItemEntity; // x0

  if ( (byte_4CF047E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF047E = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0, 0);
    if ( ((unsigned __int8)v4 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v7 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v7, (int32_t)v7, v8)) == 0)
          ? (num = 0)
          : (num = (unsigned int)UserItemEntity->fields.num),
            (v4 = this->fields.countLabel) == 0) )
      {
        sub_1C7BD40(v4, num);
      }
      UICounterLabel__SetCountLabel(v4, num, 0);
    }
  }
}


bool EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UICounterLabel_o *countLabel; // x0

  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1C7BD40(0, method);
  return UICounterLabel__get_IsAnimFinished(countLabel, 0);
}