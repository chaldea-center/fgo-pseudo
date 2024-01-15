void __fastcall EventInfoSubmarineItemCounterComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA183 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoSubmarineItemCounterComponent_TypeInfo, v1);
    byte_40FA183 = 1;
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA182 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FA182 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, itemId, 0LL);
  return entity;
}


void __fastcall EventInfoSubmarineItemCounterComponent__PlayAnimation(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *countLabel; // x20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  UserItemEntity_o *UserItemEntity; // x0
  int32_t num; // w8
  struct UICounterLabel_o *v9; // x9
  UICounterLabel_o *v10; // x0

  if ( (byte_40FA180 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA180 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL) )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v5 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v5, (int32_t)v5, v6)) == 0LL)
          ? (num = 0)
          : (num = UserItemEntity->fields.num),
            (v9 = this->fields.countLabel) == 0LL
         || (v9->fields._AddCount_k__BackingField = num - v9->fields._MainCount_k__BackingField,
             (v10 = this->fields.countLabel) == 0LL)) )
      {
        sub_B170D4();
      }
      UICounterLabel__PlayAnimation(v10, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventUiValueEntity_o **p_eventUiValueEntity; // x21
  UISprite_o *iconSprite; // x22
  System_String_o *value; // x23
  EventInfoSubmarineItemCounterComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  UserItemEntity_o *UserItemEntity; // x0
  UserItemEntity_o *v20; // x21
  UnityEngine_Object_o *countLabel; // x22
  int32_t num; // w22
  UICounterLabel_o *v23; // x23
  UICounterLabel_o *v24; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *nameLabel; // x22
  ItemEntity_o *ItemInfo; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0

  if ( (byte_40FA17F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventUiValueEntity);
    sub_B16FFC(&EventInfoSubmarineItemCounterComponent_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v13);
    byte_40FA17F = 1;
  }
  this->fields.eventUiValueEntity = eventUiValueEntity;
  p_eventUiValueEntity = &this->fields.eventUiValueEntity;
  sub_B16F98(
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
  AtlasManager__SetEventUI(iconSprite, value, 0LL);
  if ( !*p_eventUiValueEntity )
    goto LABEL_34;
  v17 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse((*p_eventUiValueEntity)->fields.value, 0LL);
  UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v17, (int32_t)v17, v18);
  if ( itemData )
  {
    v20 = UserItemEntity;
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(countLabel, 0LL, 0LL) )
    {
      if ( v20 )
        num = v20->fields.num;
      else
        num = 0;
      v23 = this->fields.countLabel;
      if ( (BYTE3(EventInfoSubmarineItemCounterComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoSubmarineItemCounterComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterComponent_TypeInfo);
      }
      if ( !v23 )
        goto LABEL_34;
      UICounterLabel__Setup(
        v23,
        num,
        EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME,
        (System_String_o *)StringLiteral_23395/*"{0:#,0}"*/,
        1,
        0LL);
      v24 = this->fields.countLabel;
      if ( !v24 )
        goto LABEL_34;
      UICounterLabel__SetCountLabel(v24, num, 0LL);
      v25 = (UnityEngine_Component_o *)this->fields.countLabel;
      if ( !v25 )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
      GameObjectExtensions__SetLocalPosition_27419860(gameObject, itemData->fields.CountPosition, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      if ( v20 )
      {
        ItemInfo = UserItemEntity__getItemInfo(v20, 0LL);
        if ( ItemInfo )
        {
          if ( !this->fields.nameLabel )
            goto LABEL_34;
          UILabel__set_text(this->fields.nameLabel, ItemInfo->fields.name, 0LL);
        }
      }
      v29 = (UnityEngine_Component_o *)this->fields.nameLabel;
      if ( v29 )
      {
        v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
        GameObjectExtensions__SetLocalPosition_27419860(v30, itemData->fields.namePosition, 0LL);
        return;
      }
LABEL_34:
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__UpdateCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *countLabel; // x20
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v5; // x0
  const MethodInfo *v6; // x2
  UserItemEntity_o *UserItemEntity; // x0
  int32_t num; // w1
  UICounterLabel_o *v9; // x0

  if ( (byte_40FA181 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA181 = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL) )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v5 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v5, (int32_t)v5, v6)) == 0LL)
          ? (num = 0)
          : (num = UserItemEntity->fields.num),
            (v9 = this->fields.countLabel) == 0LL) )
      {
        sub_B170D4();
      }
      UICounterLabel__SetCountLabel(v9, num, 0LL);
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
    sub_B170D4();
  return UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
}