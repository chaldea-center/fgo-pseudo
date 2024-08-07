void __fastcall EventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FDFD7 & 1) == 0 )
  {
    sub_1B64A00(&EventItemComponent_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_20384/*"img_shopbg04"*/, v4);
    byte_49FDFD7 = 1;
  }
  EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME = (struct System_String_o *)StringLiteral_20384/*"img_shopbg04"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)EventItemComponent_TypeInfo->static_fields,
    StringLiteral_20384/*"img_shopbg04"*/,
    v2,
    v3);
}


void __fastcall EventItemComponent___ctor(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemComponent__Awake(EventItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *object; // x0
  __int64 v8; // x1
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v11; // x20
  UISprite_o *v12; // x20

  if ( (byte_49FDFCC & 1) == 0 )
  {
    sub_1B64A00(&EventItemComponent_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&Method_UnityEngine_Resources_Load_UIAtlas___, v4);
    sub_1B64A00(&StringLiteral_12686/*"Shop/Atlas/ShopAtlas"*/, v5);
    byte_49FDFCC = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  object = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL);
  if ( ((unsigned __int8)object & 1) != 0 )
  {
    v9 = this->fields.baseSp;
    if ( !v9 )
      goto LABEL_17;
    mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v11 = this->fields.baseSp;
      object = (UIAtlas_o *)UnityEngine_Resources__Load_object_(
                              (System_String_o *)StringLiteral_12686/*"Shop/Atlas/ShopAtlas"*/,
                              (const MethodInfo_2ECE99C *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v11 )
      {
        UISprite__set_atlas(v11, object, 0LL);
        v12 = this->fields.baseSp;
        object = (UIAtlas_o *)EventItemComponent_TypeInfo;
        if ( !EventItemComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        if ( v12 )
        {
          UISprite__set_spriteName(v12, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0LL);
          object = (UIAtlas_o *)this->fields.baseSp;
          if ( object )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))object->klass[2]._1.typeMetadataHandle)(
              object,
              object->klass[2]._1.interopData);
            return;
          }
        }
      }
LABEL_17:
      sub_1B64C5C(object, v8);
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_49FDFCE & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_49FDFCE = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, method),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0LL) )
  {
    sub_1B64C5C(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_49FDFCD & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FDFCD = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_1B64C5C(0LL, v4);
    UISprite__set_atlas(v5, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__Set(EventItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t baseObject; // x0
  const MethodInfo *v11; // x3
  ItemMaster_o *v12; // x21
  int32_t *p_QpMax; // x20
  int32_t v14; // w22
  BalanceConfig_c *v15; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserGameEntity_o *v17; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v19; // x8
  int32_t FriendPointMax; // w20
  Il2CppObject *MasterData_object; // x21
  int32_t v22; // w22
  BalanceConfig_c *v23; // x0
  struct BalanceConfig_StaticFields *v24; // x8
  UILabel_o *dataLabel; // x19

  if ( (byte_49FDFCF & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, *(_QWORD *)&itemId);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FDFCF = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (int64_t)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_49;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_49;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_49;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_49;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_49;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, v11);
  baseObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_49;
  baseObject = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_49;
  v12 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0LL) )
  {
    baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseObject )
      goto LABEL_49;
    p_QpMax = (int32_t *)(baseObject + 96);
    v14 = *(_DWORD *)(baseObject + 96);
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    static_fields = v15->static_fields;
    if ( v14 >= static_fields->QpMax )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      p_QpMax = &static_fields->QpMax;
    }
    goto LABEL_42;
  }
  if ( !ItemMaster__isFriendPoint(v12, itemId, 0LL) )
  {
    baseObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)baseObject,
                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      baseObject = NetworkManager__get_UserId(0LL);
      if ( MasterData_object )
      {
        baseObject = (int64_t)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)MasterData_object,
                                baseObject,
                                itemId,
                                0LL);
        if ( baseObject )
        {
          p_QpMax = (int32_t *)(baseObject + 28);
          v22 = *(_DWORD *)(baseObject + 28);
          v23 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v23 = BalanceConfig_TypeInfo;
          }
          v24 = v23->static_fields;
          if ( v22 >= v24->UserEventItemMax )
          {
            if ( !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23);
              v24 = BalanceConfig_TypeInfo->static_fields;
            }
            p_QpMax = &v24->UserEventItemMax;
          }
LABEL_42:
          FriendPointMax = *p_QpMax;
          goto LABEL_43;
        }
      }
    }
LABEL_49:
    sub_1B64C5C(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseObject )
    goto LABEL_49;
  v17 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0LL);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  FriendPointMax = v19->static_fields->FriendPointMax;
  if ( FriendPoint >= FriendPointMax )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      FriendPointMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    FriendPointMax = UserGameEntity__GetFriendPoint(v17, 0LL);
  }
LABEL_43:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (int64_t)LocalizationManager__GetNumberFormat(FriendPointMax, 0LL);
  if ( !dataLabel )
    goto LABEL_49;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetDailyMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  Il2CppObject *MasterData_object; // x21
  UILabel_o *textLabel; // x20
  System_String_o *v11; // x22
  System_String_o *v12; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FDFD3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v7);
    byte_49FDFD3 = 1;
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
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_21;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (textLabel = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(
                                    (UserEventMissionMaster_o *)baseObject,
                                    eventId,
                                    0LL),
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          !MasterData_object)
      || (v11 = (System_String_o *)baseObject,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    (EventMissionMaster_o *)MasterData_object,
                                    eventId,
                                    0LL),
          v12 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_61396396(
                                                     v11,
                                                     (System_String_o *)StringLiteral_1124/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_1B64C5C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetGroupPointEvent(
        EventItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t baseObject; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // w20
  int32_t Script; // w21
  Il2CppObject *MasterData_object; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDFD0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&NetworkManager_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B64A00(&StringLiteral_19062/*"eventId"*/, v10);
    sub_1B64A00(&StringLiteral_19061/*"eventGroupId"*/, v11);
    byte_49FDFD0 = 1;
  }
  entity = 0LL;
  this->fields.dataPointGroupEventId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (int64_t)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_30;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_30;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_30;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_30;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_30;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, v13);
  baseObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_30;
  baseObject = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_30;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_30D67EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (int64_t)entity;
    if ( entity )
    {
      baseObject = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19062/*"eventId"*/, 0, 0LL);
      if ( entity )
      {
        v14 = baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19061/*"eventGroupId"*/, 0, 0LL);
        baseObject = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)baseObject,
                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          baseObject = NetworkManager__get_UserId(0LL);
          if ( MasterData_object )
          {
            Point = UserEventPointMaster__GetPoint(
                      (UserEventPointMaster_o *)MasterData_object,
                      baseObject,
                      v14,
                      Script,
                      0LL);
            goto LABEL_26;
          }
        }
      }
    }
LABEL_30:
    sub_1B64C5C(baseObject, *(_QWORD *)&itemId);
  }
  Point = 0LL;
LABEL_26:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (int64_t)LocalizationManager__GetNumberFormatLong(Point, 0LL);
  if ( !dataLabel )
    goto LABEL_30;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionEntity_array *EventMissionList; // x21
  UILabel_o *textLabel; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  int v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t AchiveMissionNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FDFD2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v7);
    byte_49FDFD2 = 1;
  }
  v13 = 0;
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
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_22;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_22;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(
                               (UserEventMissionMaster_o *)baseObject,
                               eventId,
                               0LL),
          textLabel = this->fields.textLabel,
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&AchiveMissionNum, 0LL),
          !EventMissionList)
      || (v11 = (System_String_o *)baseObject,
          v13 = *(_QWORD *)&EventMissionList->max_length,
          v12 = System_Int32__ToString((int32_t)&v13, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_61396396(
                                                     v11,
                                                     (System_String_o *)StringLiteral_1124/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_22:
      sub_1B64C5C(baseObject, *(_QWORD *)&eventId);
    }
    UILabel__set_text(textLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetNum(
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
  System_String_o *NumberFormat_38085136; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = num;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_49FDFD5 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&num);
    byte_49FDFD5 = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_38085136 = LocalizationManager__GetNumberFormat_38085136(v10, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_38085136, 0LL),
        (NumberFormat_38085136 = (System_String_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_1B64C5C(NumberFormat_38085136, v12);
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_38085136, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  const MethodInfo *v8; // x2
  UILabel_o *dataLabel; // x21
  int64_t EventPoint; // x19

  if ( (byte_49FDFD1 & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
    byte_49FDFD1 = 1;
  }
  this->fields.dataPointEventId = eventId;
  this->fields.dataPointEventGroupId = groupId;
  if ( eventId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&eventId);
  }
  else
  {
    baseObject = this->fields.baseObject;
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_19;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_19;
    ItemIconComponent__SetPointEvent((ItemIconComponent_o *)baseObject, eventId, v8);
    dataLabel = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(EventPoint, 0LL);
    if ( !dataLabel )
LABEL_19:
      sub_1B64C5C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetRaidEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  const MethodInfo *v10; // x2
  int64_t v11; // x0
  UILabel_o *dataLabel; // x19
  System_String_o *v13; // x20
  int64_t v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FDFD4 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventRaidMaster___, *(_QWORD *)&eventId);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FDFD4 = 1;
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
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_24;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_24;
    ItemIconComponent__SetRaidEvent((ItemIconComponent_o *)baseObject, eventId, v10);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_24;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_24;
    v11 = day
        ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0LL)
        : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0LL);
    v14 = v11;
    dataLabel = this->fields.dataLabel;
    v13 = System_Int64__ToString((int64_t)&v14, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_38085136(v13, 0LL);
    if ( !dataLabel )
LABEL_24:
      sub_1B64C5C(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


void __fastcall EventItemComponent__UpdateDisp(EventItemComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
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
    EventItemComponent__SetPointEvent(this, dataPointEventId, this->fields.dataPointEventGroupId, v3);
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


UISprite_o *__fastcall EventItemComponent__get_BackgroundSprite(EventItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.baseSp;
}


void __fastcall EventItemComponent__setBaseSpriteDownloadAtlas(
        EventItemComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  UISprite_o *baseSp; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0

  if ( (byte_49FDFD6 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, spName);
    byte_49FDFD6 = 1;
  }
  baseSp = this->fields.baseSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v7 = this->fields.baseSp;
  if ( !v7 )
    sub_1B64C5C(0LL, v6);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._33_MakePixelPerfect.method)(
    v7,
    v7->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventItemComponent__setFontSizeDataLabel(
        EventItemComponent_o *this,
        int32_t size,
        const MethodInfo *method)
{
  UILabel_o *dataLabel; // x0

  dataLabel = this->fields.dataLabel;
  if ( !dataLabel )
    sub_1B64C5C(0LL, size);
  UILabel__set_fontSize(dataLabel, size, 0LL);
}


void __fastcall EventItemComponent__setHeightDataLabel(
        EventItemComponent_o *this,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1B64C5C(0LL, height);
  UIWidget__set_height(dataLabel, height, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionDataLabel(
        EventItemComponent_o *this,
        float x,
        float y,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1B64C5C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_33376848(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1B64C5C(0LL, method);
  ItemIconComponent__setLocalPositionIconSprite(itemIcon, x, method);
}


void __fastcall EventItemComponent__setPivotDataLabel(
        EventItemComponent_o *this,
        int32_t pivot,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1B64C5C(0LL, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1B64C5C(0LL, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, method);
}


void __fastcall EventItemComponent__setWidthDataLabel(
        EventItemComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1B64C5C(0LL, width);
  UIWidget__set_width(dataLabel, width, 0LL);
}