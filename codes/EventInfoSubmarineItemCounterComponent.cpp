void __fastcall EventInfoSubmarineItemCounterComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17820 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoSubmarineItemCounterComponent_TypeInfo, v1, v2);
    byte_4B17820 = 1;
  }
  LODWORD(EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME) = (struct EventInfoSubmarineItemCounterComponent_StaticFields)1056964608;
}


void __fastcall EventInfoSubmarineItemCounterComponent___ctor(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSubmarineItemCounterComponent__AddCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct UICounterLabel_o *countLabel; // x8

  countLabel = this->fields.countLabel;
  if ( !countLabel )
    sub_1BCAA3C(this, *(_QWORD *)&count);
  countLabel->fields._AddCount_k__BackingField = count;
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *__fastcall EventInfoSubmarineItemCounterComponent__GetUserItemEntity(
        EventInfoSubmarineItemCounterComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1781F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1781F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  UserItemMaster__TryGetEntity((UserItemMaster_o *)MasterData_object, &entity, (int64_t)Instance, itemId, 0LL);
  return entity;
}


void __fastcall EventInfoSubmarineItemCounterComponent__PlayAnimation(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *countLabel; // x20
  struct UICounterLabel_o *v5; // x0
  __int64 v6; // x1
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  UserItemEntity_o *UserItemEntity; // x0
  int32_t num; // w8

  if ( (byte_4B1781D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1781D = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v5 = (struct UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v8 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v8, (int32_t)v8, v9)) == 0LL)
          ? (num = 0)
          : (num = UserItemEntity->fields.num),
            (v5 = this->fields.countLabel) == 0LL) )
      {
        sub_1BCAA3C(v5, v6);
      }
      v5->fields._AddCount_k__BackingField = num - v5->fields._MainCount_k__BackingField;
      UICounterLabel__PlayAnimation(v5, 0LL);
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__Setup(
        EventInfoSubmarineItemCounterComponent_o *this,
        EventUiValueEntity_o *eventUiValueEntity,
        EventInfoSubmarineItemCounterCotrol_ItemData_o *itemData,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct EventUiValueEntity_o **p_eventUiValueEntity; // x21
  void *ItemInfo; // x0
  __int64 v19; // x1
  UISprite_o *iconSprite; // x22
  System_String_o *value; // x23
  EventInfoSubmarineItemCounterComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  UserItemEntity_o *UserItemEntity; // x0
  __int64 v25; // x1
  UserItemEntity_o *v26; // x21
  UnityEngine_Object_o *countLabel; // x22
  int32_t num; // w22
  UICounterLabel_o *v29; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *nameLabel; // x22
  UnityEngine_GameObject_o *v32; // x0

  if ( (byte_4B1781C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventUiValueEntity, itemData);
    sub_1BCA7E0(&EventInfoSubmarineItemCounterComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v15, v16);
    byte_4B1781C = 1;
  }
  this->fields.eventUiValueEntity = eventUiValueEntity;
  p_eventUiValueEntity = &this->fields.eventUiValueEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventUiValueEntity,
    (int64_t)eventUiValueEntity,
    (int64_t)itemData,
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
  ItemInfo = (void *)AtlasManager__SetEventUI(iconSprite, value, 0LL);
  if ( !*p_eventUiValueEntity )
    goto LABEL_30;
  v22 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse((*p_eventUiValueEntity)->fields.value, 0LL);
  UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v22, (int32_t)v22, v23);
  if ( itemData )
  {
    v26 = UserItemEntity;
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(countLabel, 0LL, 0LL) )
    {
      if ( v26 )
        num = v26->fields.num;
      else
        num = 0;
      v29 = this->fields.countLabel;
      ItemInfo = EventInfoSubmarineItemCounterComponent_TypeInfo;
      if ( !EventInfoSubmarineItemCounterComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoSubmarineItemCounterComponent_TypeInfo, v19);
      if ( !v29 )
        goto LABEL_30;
      UICounterLabel__Setup(
        v29,
        num,
        EventInfoSubmarineItemCounterComponent_TypeInfo->static_fields->ANIMATION_TIME,
        (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
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
      GameObjectExtensions__SetLocalPosition_34330940(gameObject, itemData->fields.CountPosition, 0LL);
    }
    nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
    {
      if ( v26 )
      {
        ItemInfo = UserItemEntity__getItemInfo(v26, 0LL);
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
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ItemInfo, 0LL);
        GameObjectExtensions__SetLocalPosition_34330940(v32, itemData->fields.namePosition, 0LL);
        return;
      }
LABEL_30:
      sub_1BCAA3C(ItemInfo, v19);
    }
  }
}


void __fastcall EventInfoSubmarineItemCounterComponent__UpdateCount(
        EventInfoSubmarineItemCounterComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *countLabel; // x20
  UICounterLabel_o *v5; // x0
  __int64 num; // x1
  struct EventUiValueEntity_o *eventUiValueEntity; // x8
  EventInfoSubmarineItemCounterComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  UserItemEntity_o *UserItemEntity; // x0

  if ( (byte_4B1781E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1781E = 1;
  }
  if ( this->fields.eventUiValueEntity )
  {
    countLabel = (UnityEngine_Object_o *)this->fields.countLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v5 = (UICounterLabel_o *)UnityEngine_Object__op_Equality(countLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      eventUiValueEntity = this->fields.eventUiValueEntity;
      if ( !eventUiValueEntity
        || ((v8 = (EventInfoSubmarineItemCounterComponent_o *)System_Int32__Parse(eventUiValueEntity->fields.value, 0LL),
             (UserItemEntity = EventInfoSubmarineItemCounterComponent__GetUserItemEntity(v8, (int32_t)v8, v9)) == 0LL)
          ? (num = 0LL)
          : (num = (unsigned int)UserItemEntity->fields.num),
            (v5 = this->fields.countLabel) == 0LL) )
      {
        sub_1BCAA3C(v5, num);
      }
      UICounterLabel__SetCountLabel(v5, num, 0LL);
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
    sub_1BCAA3C(0LL, method);
  return UICounterLabel__get_IsAnimFinished(countLabel, 0LL);
}