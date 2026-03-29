void EventItemComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2FDC0 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_20806/*"img_shopbg04"*/);
    byte_4D2FDC0 = 1;
  }
  EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME = (struct System_String_o *)StringLiteral_20806/*"img_shopbg04"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventItemComponent_TypeInfo->static_fields,
    StringLiteral_20806/*"img_shopbg04"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventItemComponent___ctor(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventItemComponent__Awake(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *object; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v8; // x20
  UISprite_o *v9; // x20

  if ( (byte_4D2FDB5 & 1) == 0 )
  {
    sub_1C93AD4(&EventItemComponent_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_1C93AD4(&StringLiteral_12944/*"Shop/Atlas/ShopAtlas"*/);
    byte_4D2FDB5 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0, 0);
  if ( ((unsigned __int8)object & 1) != 0 )
  {
    v6 = this->fields.baseSp;
    if ( !v6 )
      goto LABEL_17;
    mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0, 0) )
    {
      v8 = this->fields.baseSp;
      object = (UIAtlas_o *)UnityEngine_Resources__Load_object_(
                              (System_String_o *)StringLiteral_12944/*"Shop/Atlas/ShopAtlas"*/,
                              (const MethodInfo_324111C *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v8 )
      {
        UISprite__set_atlas(v8, object, 0);
        v9 = this->fields.baseSp;
        object = (UIAtlas_o *)EventItemComponent_TypeInfo;
        if ( !EventItemComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        if ( v9 )
        {
          UISprite__set_spriteName(v9, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0);
          object = (UIAtlas_o *)this->fields.baseSp;
          if ( object )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))object->klass[2]._1.parent)(
              object,
              object->klass[2]._1.generic_class);
            return;
          }
        }
      }
LABEL_17:
      sub_1C93D2C(object, v5);
    }
  }
}


void EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4D2FDB7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FDB7 = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, method),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0) )
  {
    sub_1C93D2C(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_4D2FDB6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2FDB6 = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0, 0) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    UISprite__set_atlas(v5, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__Set(EventItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  char *baseObject; // x0
  const MethodInfo *v6; // x4
  ItemMaster_o *v7; // x21
  int64_t *p_QpMax; // x20
  int64_t v9; // x22
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int64_t v12; // x20
  UserGameEntity_o *v13; // x20
  int32_t FriendPoint; // w21
  BalanceConfig_c *v15; // x8
  int32_t FriendPointMax; // w0
  Il2CppObject *MasterData_object; // x21
  int32_t *p_UserEventItemMax; // x20
  int32_t v19; // w22
  BalanceConfig_c *v20; // x0
  struct BalanceConfig_StaticFields *v21; // x8
  UILabel_o *dataLabel; // x19

  if ( (byte_4D2FDB8 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FDB8 = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (char *)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
  baseObject = (char *)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_55;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
  baseObject = (char *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_55;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
  baseObject = (char *)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_55;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0);
  baseObject = (char *)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_55;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0);
  baseObject = (char *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_55;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, v6);
  baseObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_55;
  baseObject = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)baseObject,
                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_55;
  v7 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0) )
  {
    baseObject = (char *)UserGameMaster__getSelfUserGame(0);
    if ( !baseObject )
      goto LABEL_55;
    p_QpMax = (int64_t *)(baseObject + 96);
    v9 = *((_QWORD *)baseObject + 12);
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    static_fields = v10->static_fields;
    if ( v9 >= static_fields->QpMax )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      p_QpMax = &static_fields->QpMax;
    }
    v12 = *p_QpMax;
    goto LABEL_51;
  }
  if ( !ItemMaster__isFriendPoint(v7, itemId, 0) )
  {
    baseObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)baseObject,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      baseObject = (char *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        baseObject = (char *)NetworkManager_TypeInfo;
      }
      if ( MasterData_object )
      {
        baseObject = (char *)UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)MasterData_object,
                               *(_QWORD *)(*((_QWORD *)baseObject + 23) + 64LL),
                               itemId,
                               0);
        if ( baseObject )
        {
          p_UserEventItemMax = (int32_t *)(baseObject + 28);
          v19 = *((_DWORD *)baseObject + 7);
          v20 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v20 = BalanceConfig_TypeInfo;
          }
          v21 = v20->static_fields;
          if ( v19 >= v21->UserEventItemMax )
          {
            if ( !v20->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v20);
              v21 = BalanceConfig_TypeInfo->static_fields;
            }
            p_UserEventItemMax = &v21->UserEventItemMax;
          }
          v12 = *p_UserEventItemMax;
          goto LABEL_51;
        }
      }
    }
LABEL_55:
    sub_1C93D2C(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (char *)UserGameMaster__getSelfUserGame(0);
  if ( !baseObject )
    goto LABEL_55;
  v13 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0);
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  FriendPointMax = v15->static_fields->FriendPointMax;
  if ( FriendPoint >= FriendPointMax )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      FriendPointMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    FriendPointMax = UserGameEntity__GetFriendPoint(v13, 0);
  }
  v12 = FriendPointMax;
LABEL_51:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (char *)LocalizationManager__GetNumberFormatLong(v12, 0);
  if ( !dataLabel )
    goto LABEL_55;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__SetDailyMissionEvent(EventItemComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  Il2CppObject *MasterData_object; // x21
  UILabel_o *textLabel; // x20
  System_String_o *v8; // x22
  System_String_o *v9; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2FDBC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D2FDBC = 1;
  }
  this->fields.dataMissionEventId = eventId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (textLabel = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(
                                    (UserEventMissionMaster_o *)baseObject,
                                    eventId,
                                    0),
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0),
          !MasterData_object)
      || (v8 = (System_String_o *)baseObject,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    (EventMissionMaster_o *)MasterData_object,
                                    eventId,
                                    0),
          v9 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_64463988(
                                                     v8,
                                                     (System_String_o *)StringLiteral_1042/*"/"*/,
                                                     v9,
                                                     0),
          !textLabel) )
    {
LABEL_21:
      sub_1C93D2C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__SetGroupPointEvent(EventItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  const MethodInfo *v6; // x4
  int32_t v7; // w20
  int32_t Script; // w21
  Il2CppObject *MasterData_object; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2FDB9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_19339/*"eventId"*/);
    sub_1C93AD4(&StringLiteral_19338/*"eventGroupId"*/);
    byte_4D2FDB9 = 1;
  }
  entity = 0;
  this->fields.dataPointGroupEventId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0);
  baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_34;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, v6);
  baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_34;
  baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)baseObject,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_34;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (UnityEngine_GameObject_o *)entity;
    if ( entity )
    {
      baseObject = (UnityEngine_GameObject_o *)ItemEntity__getScript(
                                                 (ItemEntity_o *)entity,
                                                 (System_String_o *)StringLiteral_19339/*"eventId"*/,
                                                 0,
                                                 0);
      if ( entity )
      {
        v7 = (int)baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19338/*"eventGroupId"*/, 0, 0);
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)baseObject,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4D2A55B )
          {
            sub_1C93AD4(&NetworkManager_TypeInfo);
            byte_4D2A55B = 1;
          }
          baseObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            baseObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
          }
          if ( MasterData_object )
          {
            Point = UserEventPointMaster__GetPoint(
                      (UserEventPointMaster_o *)MasterData_object,
                      *(_QWORD *)(baseObject[7].fields.m_CachedPtr + 64),
                      v7,
                      Script,
                      0);
            goto LABEL_30;
          }
        }
      }
    }
LABEL_34:
    sub_1C93D2C(baseObject, *(_QWORD *)&itemId);
  }
  Point = 0;
LABEL_30:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(Point, 0);
  if ( !dataLabel )
    goto LABEL_34;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__SetMissionEvent(EventItemComponent_o *this, int32_t eventId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionEntity_array *EventMissionList; // x21
  UILabel_o *textLabel; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int max_length; // [xsp+8h] [xbp-28h] BYREF
  int32_t AchiveMissionNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FDBB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1042/*"/"*/);
    byte_4D2FDBB = 1;
  }
  max_length = 0;
  this->fields.dataMissionEventId = eventId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_22;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(
                               (UserEventMissionMaster_o *)baseObject,
                               eventId,
                               0),
          textLabel = this->fields.textLabel,
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&AchiveMissionNum, 0),
          !EventMissionList)
      || (v8 = (System_String_o *)baseObject,
          max_length = EventMissionList->max_length,
          v9 = System_Int32__ToString((int32_t)&max_length, 0),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_64463988(
                                                     v8,
                                                     (System_String_o *)StringLiteral_1042/*"/"*/,
                                                     v9,
                                                     0),
          !textLabel) )
    {
LABEL_22:
      sub_1C93D2C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0);
  }
}


void EventItemComponent__SetNum(
        EventItemComponent_o *this,
        int32_t num,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UILabel_o *dataLabel; // x20
  System_String_o *v10; // x21
  System_String_o *NumberFormat_42000268; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = num;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4D2FDBE & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2FDBE = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_42000268 = LocalizationManager__GetNumberFormat_42000268(v10, 0);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_42000268, 0),
        (NumberFormat_42000268 = (System_String_o *)this->fields.dataLabel) == 0) )
  {
    sub_1C93D2C(NumberFormat_42000268, v12);
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_42000268, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  const MethodInfo *v10; // x3
  UILabel_o *dataLabel; // x21
  int64_t EventPoint; // x19

  if ( (byte_4D2FDBA & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2FDBA = 1;
  }
  this->fields.dataPointEventId = eventId;
  this->fields.dataPointEventGroupId = groupId;
  this->fields.dataPointEventIconId = iconId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    ItemIconComponent__SetPointEvent((ItemIconComponent_o *)baseObject, eventId, iconId, v10);
    dataLabel = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(EventPoint, 0);
    if ( !dataLabel )
LABEL_19:
      sub_1C93D2C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventItemComponent__SetRaidEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  const MethodInfo *v8; // x2
  int64_t v9; // x0
  UILabel_o *dataLabel; // x19
  System_String_o *v11; // x20
  int64_t v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2FDBD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2FDBD = 1;
  }
  this->fields.dataRaidEventId = eventId;
  this->fields.dataRaidDay = day;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_24;
    ItemIconComponent__SetRaidEvent((ItemIconComponent_o *)baseObject, eventId, v8);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_24;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_24;
    v9 = day
       ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0)
       : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0);
    v12 = v9;
    dataLabel = this->fields.dataLabel;
    v11 = System_Int64__ToString((int64_t)&v12, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_42000268(v11, 0);
    if ( !dataLabel )
LABEL_24:
      sub_1C93D2C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0);
  }
}


void EventItemComponent__UpdateDisp(EventItemComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x4
  int dataItemId; // w1
  int dataPointEventId; // w1
  int dataMissionEventId; // w1
  int dataRaidEventId; // w1
  int dataPointGroupEventId; // w1

  dataItemId = this->fields.dataItemId;
  if ( dataItemId >= 1 )
    EventItemComponent__Set(this, dataItemId, v2);
  dataPointEventId = this->fields.dataPointEventId;
  if ( dataPointEventId >= 1 )
    EventItemComponent__SetPointEvent(
      this,
      dataPointEventId,
      this->fields.dataPointEventGroupId,
      this->fields.dataPointEventIconId,
      v4);
  dataMissionEventId = this->fields.dataMissionEventId;
  if ( dataMissionEventId >= 1 )
    EventItemComponent__SetMissionEvent(this, dataMissionEventId, v2);
  dataRaidEventId = this->fields.dataRaidEventId;
  if ( dataRaidEventId >= 1 )
    EventItemComponent__SetRaidEvent(this, dataRaidEventId, this->fields.dataRaidDay, v3);
  dataPointGroupEventId = this->fields.dataPointGroupEventId;
  if ( dataPointGroupEventId >= 1 )
    EventItemComponent__SetGroupPointEvent(this, dataPointGroupEventId, v2);
}


UISprite_o *EventItemComponent__get_BackgroundSprite(EventItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.baseSp;
}


void EventItemComponent__setBaseSpriteDownloadAtlas(
        EventItemComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *baseSp; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_4D2FDBF & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D2FDBF = 1;
  }
  baseSp = this->fields.baseSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0);
  v7 = this->fields.baseSp;
  if ( !v7 )
    sub_1C93D2C(0, v6);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
    v7,
    v7->klass->vtable._33_MakePixelPerfect.method);
}


void EventItemComponent__setFontSizeDataLabel(EventItemComponent_o *this, int32_t size, const MethodInfo *method)
{
  UILabel_o *dataLabel; // x0

  dataLabel = this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C93D2C(0, size);
  UILabel__set_fontSize(dataLabel, size, 0);
}


void EventItemComponent__setHeightDataLabel(EventItemComponent_o *this, int32_t height, const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C93D2C(0, height);
  UIWidget__set_height(dataLabel, height, 0);
}


void EventItemComponent__setLocalPositionDataLabel(
        EventItemComponent_o *this,
        float x,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C93D2C(0, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0);
  GameObjectExtensions__SetLocalPosition_36745168(gameObject, x, y, 0);
}


void EventItemComponent__setLocalPositionXItemIcon(EventItemComponent_o *this, float x, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C93D2C(0, method);
  ItemIconComponent__setLocalPositionIconSprite(itemIcon, x, method);
}


void EventItemComponent__setPivotDataLabel(EventItemComponent_o *this, int32_t pivot, const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C93D2C(0, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0);
}


void EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C93D2C(0, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, method);
}


void EventItemComponent__setWidthDataLabel(EventItemComponent_o *this, int32_t width, const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C93D2C(0, width);
  UIWidget__set_width(dataLabel, width, 0);
}