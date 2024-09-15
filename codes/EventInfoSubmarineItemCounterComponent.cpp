void __fastcall EventInfoSubmarineItemCounterComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2F675 & 1) == 0 )
  {
    sub_1B761C0(&EventInfoSubmarineItemCounterComponent_TypeInfo, v1);
    byte_4A2F675 = 1;
  }
  LODWORD(EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME) = (struct EventInfoSubmarineItemCounterComponent_StaticFields)1056964608;
}


void __fastcall EventInfoSubmarineItemCounterComponent___ctor(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoSubmarineItemCounterComponent__AddCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UICounterLabel_o *countLabel; // x8

  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1B7641C(this, count);
  countLabel->fields._AddCount_k__BackingField = count;
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall EventInfoSubmarineItemCounterComponent__GetUserItemEntity(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2F674 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&itemId);
    sub_1B761C0(&NetworkManager_TypeInfo, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A2F674 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B7641C(Instance, v7);
  UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, (int64_t)Instance, itemId, 0LL);
  return entity;
}


void __fastcall EventInfoSubmarineItemCounterComponent__PlayAnimation(
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

  if ( (byte_4A2F672 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2F672 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (struct UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v7 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v7, (int32_t)v7, v8)) == 0LL)
          ? (num = 0)
          : (num = UserItemEntity->fields.num),
            (v4 = this->fields.countLabel) == 0LL) )
      {
        sub_1B7641C(v4, v5);
      }
      v4->fields._AddCount_k__BackingField = num - v4->fields._MainCount_k__BackingField;
      UICounterLabel__PlayAnimation(v4, 0LL);
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__Setup(
        EventInfoSubmarineItemCounterComponent_o *this,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *itemData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventUiValueEntity_o **p_eventUiValueEntity; // x21
  void *ItemInfo; // x0
  __int64 v12; // x1
  UISprite_o *iconSprite; // x22
  System_String_o *value; // x23
  EventInfoSubmarineItemCounterComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  UserItemEntity_o *UserItemEntity; // x0
  UserItemEntity_o *v18; // x21
  UnityEngine_Object_o *countLabel; // x22
  int32_t num; // w22
  UICounterLabel_o *v21; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *nameLabel; // x22
  UnityEngine_GameObject_o *v24; // x0

  if ( (byte_4A2F671 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, eventUiValueEntity);
    sub_1B761C0(&EventInfoSubmarineItemCounterComponent_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_24920/*"{0:#,0}"*/, v9);
    byte_4A2F671 = 1;
  }
  this->fields.eventUiValueEntity = eventUiValueEntity;
  p_eventUiValueEntity = &this->fields.eventUiValueEntity;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventUiValueEntity,
    (int32_t)eventUiValueEntity,
    (int32_t)itemData,
    (int32_t)method);
  if ( !this->fields.eventUiValueEntity )
    goto LABEL_30;
  iconSprite = this->fields.iconSprite;
  value = this->fields.eventUiValueEntity->fields.value;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  ItemInfo = (void *)AtlasManager__SetEventUI(iconSprite, value, 0LL);
  if ( !*p_eventUiValueEntity )
    goto LABEL_30;
  v15 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse((*p_eventUiValueEntity)->fields.value, 0LL);
  UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v15, (int32_t)v15, v16);
  if ( itemData )
  {
    v18 = UserItemEntity;
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(countLabel, 0LL, 0LL) )
    {
      if ( v18 )
        num = v18->fields.num;
      else
        num = 0;
      v21 = this->fields.countLabel;
      ItemInfo = EventInfoSubmarineItemCounterComponent_TypeInfo;
      if ( !EventInfoSubmarineItemCounterComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterComponent_TypeInfo);
      if ( !v21 )
        goto LABEL_30;
      UICounterLabel__Setup(
        v21,
        num,
        EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME,
        (System_String_o *)StringLiteral_24920/*"{0:#,0}"*/,
        1,
        0LL);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_30;
      UICounterLabel__SetCountLabel((UICounterLabel_o *)ItemInfo, num, 0LL);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0LL);
      GameObjectExtensions__SetLocalPosition_33551944(gameObject, itemData->fields.CountPosition, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      if ( v18 )
      {
        ItemInfo = UserItemEntity__getItemInfo(v18, 0LL);
        if ( ItemInfo )
        {
          if ( !this->fields.nameLabel )
            goto LABEL_30;
          UILabel__set_text(this->fields.nameLabel, *((System_String_o **)ItemInfo + 3), 0LL);
        }
      }
      ItemInfo = this->fields.nameLabel;
      if ( ItemInfo )
      {
        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0LL);
        GameObjectExtensions__SetLocalPosition_33551944(v24, itemData->fields.namePosition, 0LL);
        return;
      }
LABEL_30:
      sub_1B7641C(ItemInfo, v12);
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__UpdateCount(
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

  if ( (byte_4A2F673 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2F673 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v7 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v7, (int32_t)v7, v8)) == 0LL)
          ? (num = 0LL)
          : (num = (unsigned int)UserItemEntity->fields.num),
            (v4 = this->fields.countLabel) == 0LL) )
      {
        sub_1B7641C(v4, num);
      }
      UICounterLabel__SetCountLabel(v4, num, 0LL);
    }
  }
}


bool __fastcall EventInfoSubmarineItemCounterComponent__get_IsAnimFinished(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UICounterLabel_o *countLabel; // x0

  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1B7641C(0LL, method);
  return UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
}