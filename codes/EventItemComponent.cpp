void __fastcall EventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB3B37 & 1) == 0 )
  {
    sub_1C13D24(&EventItemComponent_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_20799/*"img_shop_13"*/, v8);
    byte_4BB3B37 = 1;
  }
  EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME = (struct System_String_o *)StringLiteral_20799/*"img_shop_13"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventItemComponent_TypeInfo->static_fields,
    StringLiteral_20799/*"img_shop_13"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4BB3B2C & 1) == 0 )
  {
    sub_1C13D24(&EventItemComponent_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_UnityEngine_Resources_Load_UIAtlas___, v4);
    sub_1C13D24(&StringLiteral_12971/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/, v5);
    byte_4BB3B2C = 1;
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
                              (System_String_o *)StringLiteral_12971/*"SetupSkinnedMeshRenderer -> sharedMesh from SkinnedMeshRenderer returned null value"*/,
                              (const MethodInfo_30245D8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
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
      sub_1C13F80(object, v8);
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4BB3B2E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB3B2E = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__Clear((ItemIconComponent_o *)baseObject, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel) == 0LL) )
  {
    sub_1C13F80(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_4BB3B2D & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB3B2D = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_1C13F80(0LL, v4);
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
  char *baseObject; // x0
  ItemMaster_o *v11; // x21
  int32_t *p_QpMax; // x20
  int32_t v13; // w22
  BalanceConfig_c *v14; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  UserGameEntity_o *v16; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v18; // x8
  int32_t FriendPointMax; // w20
  Il2CppObject *MasterData_object; // x21
  int32_t v21; // w22
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *v23; // x8
  UILabel_o *dataLabel; // x19

  if ( (byte_4BB3B2F & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&itemId);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BB3B2F = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (char *)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (char *)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_53;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (char *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_53;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (char *)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_53;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (char *)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_53;
  baseObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (char *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_53;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, 0LL);
  baseObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_53;
  baseObject = (char *)DataManager__GetMasterData_object_(
                         (DataManager_o *)baseObject,
                         (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_53;
  v11 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0LL) )
  {
    baseObject = (char *)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseObject )
      goto LABEL_53;
    p_QpMax = (int32_t *)(baseObject + 96);
    v13 = *((_DWORD *)baseObject + 24);
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    static_fields = v14->static_fields;
    if ( v13 >= static_fields->QpMax )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BalanceConfig_TypeInfo->static_fields;
      }
      p_QpMax = &static_fields->QpMax;
    }
    goto LABEL_46;
  }
  if ( !ItemMaster__isFriendPoint(v11, itemId, 0LL) )
  {
    baseObject = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)baseObject,
                            (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BAF1E5 )
      {
        sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&itemId);
        byte_4BAF1E5 = 1;
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
                               0LL);
        if ( baseObject )
        {
          p_QpMax = (int32_t *)(baseObject + 28);
          v21 = *((_DWORD *)baseObject + 7);
          v22 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          v23 = v22->static_fields;
          if ( v21 >= v23->UserEventItemMax )
          {
            if ( !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              v23 = BalanceConfig_TypeInfo->static_fields;
            }
            p_QpMax = &v23->UserEventItemMax;
          }
LABEL_46:
          FriendPointMax = *p_QpMax;
          goto LABEL_47;
        }
      }
    }
LABEL_53:
    sub_1C13F80(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (char *)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseObject )
    goto LABEL_53;
  v16 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  FriendPointMax = v18->static_fields->FriendPointMax;
  if ( FriendPoint >= FriendPointMax )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      FriendPointMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    FriendPointMax = UserGameEntity__GetFriendPoint(v16, 0LL);
  }
LABEL_47:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (char *)LocalizationManager__GetNumberFormat(FriendPointMax, 0LL);
  if ( !dataLabel )
    goto LABEL_53;
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

  if ( (byte_4BB3B33 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v7);
    byte_4BB3B33 = 1;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_62979204(
                                                     v11,
                                                     (System_String_o *)StringLiteral_1123/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_1C13F80(baseObject, *(_QWORD *)&eventId);
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
  UnityEngine_GameObject_o *baseObject; // x0
  int32_t v13; // w20
  int32_t Script; // w21
  Il2CppObject *MasterData_object; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB3B30 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&NetworkManager_TypeInfo, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C13D24(&StringLiteral_19431/*"event/location"*/, v10);
    sub_1C13D24(&StringLiteral_19430/*"event/fortification"*/, v11);
    byte_4BB3B30 = 1;
  }
  entity = 0LL;
  this->fields.dataPointGroupEventId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_34;
  baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
  baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_34;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 1, 0LL);
  baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_34;
  baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)baseObject,
                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_34;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_3238670 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (UnityEngine_GameObject_o *)entity;
    if ( entity )
    {
      baseObject = (UnityEngine_GameObject_o *)ItemEntity__getScript(
                                                 (ItemEntity_o *)entity,
                                                 (System_String_o *)StringLiteral_19431/*"event/location"*/,
                                                 0,
                                                 0LL);
      if ( entity )
      {
        v13 = (int)baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_19430/*"event/fortification"*/, 0, 0LL);
        baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)baseObject,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4BAF1E5 )
          {
            sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&itemId);
            byte_4BAF1E5 = 1;
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
                      *(_QWORD *)(*(_QWORD *)&baseObject[7].fields.m_CachedPtr + 64LL),
                      v13,
                      Script,
                      0LL);
            goto LABEL_30;
          }
        }
      }
    }
LABEL_34:
    sub_1C13F80(baseObject, *(_QWORD *)&itemId);
  }
  Point = 0LL;
LABEL_30:
  dataLabel = this->fields.dataLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(Point, 0LL);
  if ( !dataLabel )
    goto LABEL_34;
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

  if ( (byte_4BB3B32 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v7);
    byte_4BB3B32 = 1;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_22;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_22;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_62979204(
                                                     v11,
                                                     (System_String_o *)StringLiteral_1123/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_22:
      sub_1C13F80(baseObject, *(_QWORD *)&eventId);
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
  System_String_o *NumberFormat_39542644; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v13 = num;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4BB3B35 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&num);
    byte_4BB3B35 = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat_39542644 = LocalizationManager__GetNumberFormat_39542644(v10, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_39542644, 0LL),
        (NumberFormat_39542644 = (System_String_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_1C13F80(NumberFormat_39542644, v12);
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_39542644, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UILabel_o *dataLabel; // x21
  int64_t EventPoint; // x19

  if ( (byte_4BB3B31 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BB3B31 = 1;
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
    ItemIconComponent__SetPointEvent((ItemIconComponent_o *)baseObject, eventId, iconId, 0LL);
    dataLabel = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(EventPoint, 0LL);
    if ( !dataLabel )
LABEL_19:
      sub_1C13F80(baseObject, *(_QWORD *)&eventId);
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
  int64_t v10; // x0
  UILabel_o *dataLabel; // x19
  System_String_o *v12; // x20
  int64_t v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB3B34 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventRaidMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&LocalizationManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BB3B34 = 1;
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
    ItemIconComponent__SetRaidEvent((ItemIconComponent_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_24;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_24;
    v10 = day
        ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0LL)
        : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0LL);
    v13 = v10;
    dataLabel = this->fields.dataLabel;
    v12 = System_Int64__ToString((int64_t)&v13, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_39542644(v12, 0LL);
    if ( !dataLabel )
LABEL_24:
      sub_1C13F80(baseObject, *(_QWORD *)&eventId);
    UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
  }
}


void __fastcall EventItemComponent__UpdateDisp(EventItemComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4BB3B36 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, spName);
    byte_4BB3B36 = 1;
  }
  baseSp = this->fields.baseSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v7 = this->fields.baseSp;
  if ( !v7 )
    sub_1C13F80(0LL, v6);
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
    sub_1C13F80(0LL, size);
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
    sub_1C13F80(0LL, height);
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
    sub_1C13F80(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_34711784(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C13F80(0LL, method);
  ItemIconComponent__setLocalPositionIconSprite(itemIcon, x, 0LL);
}


void __fastcall EventItemComponent__setPivotDataLabel(
        EventItemComponent_o *this,
        int32_t pivot,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C13F80(0LL, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_1C13F80(0LL, method);
  ItemIconComponent__setLocalScaleIconSprite(itemIcon, scale, 0LL);
}


void __fastcall EventItemComponent__setWidthDataLabel(
        EventItemComponent_o *this,
        int32_t width,
        const MethodInfo *method)
{
  UIWidget_o *dataLabel; // x0

  dataLabel = (UIWidget_o *)this->fields.dataLabel;
  if ( !dataLabel )
    sub_1C13F80(0LL, width);
  UIWidget__set_width(dataLabel, width, 0LL);
}