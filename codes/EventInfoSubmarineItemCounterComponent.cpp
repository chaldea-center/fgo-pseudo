void __fastcall EventInfoSubmarineItemCounterComponent___cctor(const MethodInfo *method)
{
  if ( (byte_42B109A & 1) == 0 )
  {
    sub_B52984(&EventInfoSubmarineItemCounterComponent_TypeInfo);
    byte_42B109A = 1;
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
    sub_B52A5C(this, count);
  countLabel->fields._AddCount_k__BackingField = count;
}


UserItemEntity_o *__fastcall EventInfoSubmarineItemCounterComponent__GetUserItemEntity(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1099 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1099 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B52A5C(Instance, v5);
  UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, itemId, 0LL);
  return entity;
}


void __fastcall EventInfoSubmarineItemCounterComponent__PlayAnimation(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *countLabel; // x20
  UICounterLabel_o *UserItemEntity; // x0
  __int64 v5; // x1
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v7; // x0
  const MethodInfo *v8; // x2
  int countLabel_high; // w8
  struct UICounterLabel_o *v10; // x9

  if ( (byte_42B1097 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1097 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UserItemEntity = (UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL);
    if ( ((unsigned __int8)UserItemEntity & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v7 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = (UICounterLabel_o *)EventInfoSubmarineItemCounterComponent__GetUserItemEntity(
                                                     v7,
                                                     (int32_t)v7,
                                                     v8)) == 0LL)
          ? (countLabel_high = 0)
          : (countLabel_high = HIDWORD(UserItemEntity->fields.countLabel)),
            (v10 = this->fields.countLabel) == 0LL
         || (v10->fields._AddCount_k__BackingField = countLabel_high - v10->fields._MainCount_k__BackingField,
             (UserItemEntity = this->fields.countLabel) == 0LL)) )
      {
        sub_B52A5C(UserItemEntity, v5);
      }
      UICounterLabel__PlayAnimation(UserItemEntity, 0LL);
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__Setup(
        EventInfoSubmarineItemCounterComponent_o *this,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *itemData,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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

  if ( (byte_42B1096 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventInfoSubmarineItemCounterComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B1096 = 1;
  }
  this->fields.eventUiValueEntity = eventUiValueEntity;
  p_eventUiValueEntity = &this->fields.eventUiValueEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventUiValueEntity,
    (System_Int32_array **)eventUiValueEntity,
    (System_String_array **)itemData,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.eventUiValueEntity )
    goto LABEL_34;
  iconSprite = this->fields.iconSprite;
  value = this->fields.eventUiValueEntity->fields.value;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  ItemInfo = (void *)AtlasManager__SetEventUI(iconSprite, value, 0LL);
  if ( !*p_eventUiValueEntity )
    goto LABEL_34;
  v16 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse((*p_eventUiValueEntity)->fields.value, 0LL);
  UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v16, (int32_t)v16, v17);
  if ( itemData )
  {
    v19 = UserItemEntity;
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(countLabel, 0LL, 0LL) )
    {
      if ( v19 )
        num = v19->fields.num;
      else
        num = 0;
      v22 = this->fields.countLabel;
      ItemInfo = EventInfoSubmarineItemCounterComponent_TypeInfo;
      if ( (BYTE3(EventInfoSubmarineItemCounterComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoSubmarineItemCounterComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterComponent_TypeInfo);
      }
      if ( !v22 )
        goto LABEL_34;
      UICounterLabel__Setup(
        v22,
        num,
        EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME,
        (System_String_o *)StringLiteral_23682/*"{0:#,0}"*/,
        1,
        0LL);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_34;
      UICounterLabel__SetCountLabel((UICounterLabel_o *)ItemInfo, num, 0LL);
      ItemInfo = this->fields.countLabel;
      if ( !ItemInfo )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0LL);
      GameObjectExtensions__SetLocalPosition_32084952(gameObject, itemData->fields.CountPosition, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      if ( v19 )
      {
        ItemInfo = UserItemEntity__getItemInfo(v19, 0LL);
        if ( ItemInfo )
        {
          if ( !this->fields.nameLabel )
            goto LABEL_34;
          UILabel__set_text(this->fields.nameLabel, *((System_String_o **)ItemInfo + 3), 0LL);
        }
      }
      ItemInfo = this->fields.nameLabel;
      if ( ItemInfo )
      {
        v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0LL);
        GameObjectExtensions__SetLocalPosition_32084952(v25, itemData->fields.namePosition, 0LL);
        return;
      }
LABEL_34:
      sub_B52A5C(ItemInfo, v13);
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

  if ( (byte_42B1098 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1098 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        sub_B52A5C(v4, num);
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
    sub_B52A5C(0LL, method);
  return UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
}