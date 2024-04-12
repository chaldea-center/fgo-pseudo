void __fastcall EventItemComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42B1126 & 1) == 0 )
  {
    sub_B52984(&EventItemComponent_TypeInfo);
    sub_B52984(&StringLiteral_19772/*"img_shopbg04"*/);
    byte_42B1126 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventItemComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19772/*"img_shopbg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19772/*"img_shopbg04"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall EventItemComponent___ctor(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventItemComponent__Awake(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  UIAtlas_o *UIAtlas; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v8; // x20
  UISprite_o *v9; // x20

  if ( (byte_42B111B & 1) == 0 )
  {
    sub_B52984(&EventItemComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_UIAtlas___);
    sub_B52984(&StringLiteral_12936/*"Shop/Atlas/ShopAtlas"*/);
    byte_42B111B = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UIAtlas = (UIAtlas_o *)UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL);
  if ( ((unsigned __int8)UIAtlas & 1) != 0 )
  {
    v6 = this->fields.baseSp;
    if ( !v6 )
      goto LABEL_20;
    mAtlas = (UnityEngine_Object_o *)v6->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v8 = this->fields.baseSp;
      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                  (System_String_o *)StringLiteral_12936/*"Shop/Atlas/ShopAtlas"*/,
                  (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v8 )
      {
        UISprite__set_atlas(v8, UIAtlas, 0LL);
        v9 = this->fields.baseSp;
        UIAtlas = (UIAtlas_o *)EventItemComponent_TypeInfo;
        if ( (BYTE3(EventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        }
        if ( v9 )
        {
          UISprite__set_spriteName(v9, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0LL);
          UIAtlas = (UIAtlas_o *)this->fields.baseSp;
          if ( UIAtlas )
          {
            ((void (__fastcall *)(UIAtlas_o *, void *))UIAtlas->klass[2]._1.typeMetadataHandle)(
              UIAtlas,
              UIAtlas->klass[2]._1.interopData);
            return;
          }
        }
      }
LABEL_20:
      sub_B52A5C(UIAtlas, v5);
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_42B111D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B111D = 1;
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
    sub_B52A5C(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_42B111C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B111C = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v5 = this->fields.baseSp;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    UISprite__set_atlas(v5, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__Set(EventItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  int64_t baseObject; // x0
  ItemMaster_o *v6; // x21
  int64_t v7; // x21
  int32_t v8; // w23
  BalanceConfig_c *v9; // x0
  int32_t QpMax; // w20
  UserGameEntity_o *v11; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v13; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v15; // x21
  int32_t v16; // w23
  BalanceConfig_c *v17; // x0
  UILabel_o *dataLabel; // x19

  if ( (byte_42B111E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B111E = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = (int64_t)this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_56;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 0LL);
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_56;
  v6 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0LL) )
  {
    baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseObject )
      goto LABEL_56;
    v7 = baseObject;
    v8 = *(_DWORD *)(baseObject + 96);
    v9 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v9 = BalanceConfig_TypeInfo;
    }
    QpMax = v9->static_fields->QpMax;
    if ( v8 >= QpMax )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      QpMax = *(_DWORD *)(v7 + 96);
    }
    goto LABEL_51;
  }
  if ( !ItemMaster__isFriendPoint(v6, itemId, 0LL) )
  {
    baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)baseObject,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      baseObject = NetworkManager__get_UserId(0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        baseObject = (int64_t)UserItemMaster__GetEntityDefinitely(
                                MasterData_WarQuestSelectionMaster,
                                baseObject,
                                itemId,
                                0LL);
        if ( baseObject )
        {
          v15 = baseObject;
          v16 = *(_DWORD *)(baseObject + 28);
          v17 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v17 = BalanceConfig_TypeInfo;
          }
          QpMax = v17->static_fields->UserEventItemMax;
          if ( v16 >= QpMax )
          {
            if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v17);
              QpMax = BalanceConfig_TypeInfo->static_fields->UserEventItemMax;
            }
          }
          else
          {
            QpMax = *(_DWORD *)(v15 + 28);
          }
          goto LABEL_51;
        }
      }
    }
LABEL_56:
    sub_B52A5C(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseObject )
    goto LABEL_56;
  v11 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0LL);
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  QpMax = v13->static_fields->FriendPointMax;
  if ( FriendPoint >= QpMax )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      QpMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    QpMax = UserGameEntity__GetFriendPoint(v11, 0LL);
  }
LABEL_51:
  dataLabel = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseObject = (int64_t)LocalizationManager__GetNumberFormat(QpMax, 0LL);
  if ( !dataLabel )
    goto LABEL_56;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetDailyMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UILabel_o *textLabel; // x20
  System_String_o *v8; // x22
  System_String_o *v9; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B1122 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B1122 = 1;
  }
  DailyMissionAchiveNum = 0;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)baseObject,
                                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (textLabel = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(
                                    (UserEventMissionMaster_o *)baseObject,
                                    eventId,
                                    0LL),
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          !MasterData_WarQuestSelectionMaster)
      || (v8 = (System_String_o *)baseObject,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    0LL),
          v9 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44570600(
                                                     v8,
                                                     (System_String_o *)StringLiteral_886/*"/"*/,
                                                     v9,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B52A5C(baseObject, *(_QWORD *)&eventId);
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
  int64_t baseObject; // x0
  int32_t v6; // w20
  int32_t Script; // w21
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B111F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_18606/*"eventId"*/);
    sub_B52984(&StringLiteral_18605/*"eventGroupId"*/);
    byte_42B111F = 1;
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
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.baseSp;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.dataLabel;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 1, 0LL);
  baseObject = (int64_t)this->fields.textLabel;
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
  if ( !baseObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseObject, 0, 0LL);
  baseObject = (int64_t)this->fields.itemIcon;
  if ( !baseObject )
    goto LABEL_33;
  ItemIconComponent__SetItem((ItemIconComponent_o *)baseObject, itemId, -1, 0LL);
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (int64_t)entity;
    if ( entity )
    {
      baseObject = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18606/*"eventId"*/, 0, 0LL);
      if ( entity )
      {
        v6 = baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18605/*"eventGroupId"*/, 0, 0LL);
        baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)baseObject,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          baseObject = NetworkManager__get_UserId(0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, baseObject, v6, Script, 0LL);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_33:
    sub_B52A5C(baseObject, *(_QWORD *)&itemId);
  }
  Point = 0LL;
LABEL_27:
  dataLabel = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  baseObject = (int64_t)LocalizationManager__GetNumberFormatLong(Point, 0LL);
  if ( !dataLabel )
    goto LABEL_33;
  UILabel__set_text(dataLabel, (System_String_o *)baseObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetMissionEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionEntity_array *EventMissionList; // x21
  UILabel_o *textLabel; // x19
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1121 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B1121 = 1;
  }
  v10 = 0LL;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_21;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (HIDWORD(v10) = UserEventMissionMaster__getAchiveMissionNum(
                           (UserEventMissionMaster_o *)baseObject,
                           eventId,
                           0LL),
          textLabel = this->fields.textLabel,
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v10 + 4, 0LL),
          !EventMissionList)
      || (v8 = (System_String_o *)baseObject,
          LODWORD(v10) = *(_QWORD *)&EventMissionList->max_length,
          v9 = System_Int32__ToString((int32_t)&v10, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44570600(
                                                     v8,
                                                     (System_String_o *)StringLiteral_886/*"/"*/,
                                                     v9,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B52A5C(baseObject, *(_QWORD *)&eventId);
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
  System_String_o *NumberFormat_34073440; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v13 = num;
  if ( (byte_42B1124 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B1124 = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat_34073440 = LocalizationManager__GetNumberFormat_34073440(v10, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_34073440, 0LL),
        (NumberFormat_34073440 = (System_String_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_B52A5C(NumberFormat_34073440, v12);
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_34073440, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UILabel_o *dataLabel; // x21
  int64_t EventPoint; // x19

  if ( (byte_42B1120 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42B1120 = 1;
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
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_20;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_20;
    ItemIconComponent__SetPointEvent((ItemIconComponent_o *)baseObject, eventId, 0LL);
    dataLabel = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormatLong(EventPoint, 0LL);
    if ( !dataLabel )
LABEL_20:
      sub_B52A5C(baseObject, *(_QWORD *)&eventId);
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
  UnityEngine_GameObject_o *baseObject; // x0
  int64_t v8; // x0
  UILabel_o *dataLabel; // x19
  System_String_o *v10; // x20
  int64_t v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B1123 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1123 = 1;
  }
  v11 = 0LL;
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
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.baseSp;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.dataLabel;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.textLabel;
    if ( !baseObject )
      goto LABEL_26;
    baseObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseObject, 0LL);
    if ( !baseObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(baseObject, 0, 0LL);
    baseObject = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !baseObject )
      goto LABEL_26;
    ItemIconComponent__SetRaidEvent((ItemIconComponent_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_26;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_26;
    v8 = day
       ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0LL)
       : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0LL);
    v11 = v8;
    dataLabel = this->fields.dataLabel;
    v10 = System_Int64__ToString((int64_t)&v11, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_34073440(v10, 0LL);
    if ( !dataLabel )
LABEL_26:
      sub_B52A5C(baseObject, *(_QWORD *)&eventId);
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

  if ( (byte_42B1125 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42B1125 = 1;
  }
  baseSp = this->fields.baseSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v7 = this->fields.baseSp;
  if ( !v7 )
    sub_B52A5C(0LL, v6);
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
    sub_B52A5C(0LL, size);
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
    sub_B52A5C(0LL, height);
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
    sub_B52A5C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_32085060(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, width);
  UIWidget__set_width(dataLabel, width, 0LL);
}