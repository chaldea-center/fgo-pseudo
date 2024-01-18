void __fastcall EventItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4188D3B & 1) == 0 )
  {
    sub_B2C35C(&EventItemComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19625/*"img_shopbg04"*/, v8);
    byte_4188D3B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19625/*"img_shopbg04"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19625/*"img_shopbg04"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  UIAtlas_o *UIAtlas; // x0
  __int64 v8; // x1
  struct UISprite_o *v9; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v11; // x20
  UISprite_o *v12; // x20

  if ( (byte_4188D30 & 1) == 0 )
  {
    sub_B2C35C(&EventItemComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_UIAtlas___, v4);
    sub_B2C35C(&StringLiteral_12839/*"Shop/Atlas/ShopAtlas"*/, v5);
    byte_4188D30 = 1;
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
    v9 = this->fields.baseSp;
    if ( !v9 )
      goto LABEL_20;
    mAtlas = (UnityEngine_Object_o *)v9->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v11 = this->fields.baseSp;
      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                  (System_String_o *)StringLiteral_12839/*"Shop/Atlas/ShopAtlas"*/,
                  (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v11 )
      {
        UISprite__set_atlas(v11, UIAtlas, 0LL);
        v12 = this->fields.baseSp;
        UIAtlas = (UIAtlas_o *)EventItemComponent_TypeInfo;
        if ( (BYTE3(EventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        }
        if ( v12 )
        {
          UISprite__set_spriteName(v12, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0LL);
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
      sub_B2C434(UIAtlas, v8);
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0

  if ( (byte_4188D32 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4188D32 = 1;
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
    sub_B2C434(baseObject, method);
  }
  UILabel__set_text((UILabel_o *)baseObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  __int64 v4; // x1
  UISprite_o *v5; // x0

  if ( (byte_4188D31 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188D31 = 1;
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
      sub_B2C434(0LL, v4);
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
  ItemMaster_o *v11; // x21
  int64_t v12; // x21
  int32_t v13; // w23
  BalanceConfig_c *v14; // x0
  int32_t QpMax; // w20
  UserGameEntity_o *v16; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v18; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int64_t v20; // x21
  int32_t v21; // w23
  BalanceConfig_c *v22; // x0
  UILabel_o *dataLabel; // x19

  if ( (byte_4188D33 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&itemId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4188D33 = 1;
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
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_56;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_56;
  v11 = (ItemMaster_o *)baseObject;
  if ( ItemMaster__isQP((ItemMaster_o *)baseObject, itemId, 0LL) )
  {
    baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !baseObject )
      goto LABEL_56;
    v12 = baseObject;
    v13 = *(_DWORD *)(baseObject + 96);
    v14 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    QpMax = v14->static_fields->QpMax;
    if ( v13 >= QpMax )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      QpMax = *(_DWORD *)(v12 + 96);
    }
    goto LABEL_51;
  }
  if ( !ItemMaster__isFriendPoint(v11, itemId, 0LL) )
  {
    baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( baseObject )
    {
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)baseObject,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
          v20 = baseObject;
          v21 = *(_DWORD *)(baseObject + 28);
          v22 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v22 = BalanceConfig_TypeInfo;
          }
          QpMax = v22->static_fields->UserEventItemMax;
          if ( v21 >= QpMax )
          {
            if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              QpMax = BalanceConfig_TypeInfo->static_fields->UserEventItemMax;
            }
          }
          else
          {
            QpMax = *(_DWORD *)(v20 + 28);
          }
          goto LABEL_51;
        }
      }
    }
LABEL_56:
    sub_B2C434(baseObject, *(_QWORD *)&itemId);
  }
  baseObject = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !baseObject )
    goto LABEL_56;
  v16 = (UserGameEntity_o *)baseObject;
  FriendPoint = UserGameEntity__GetFriendPoint((UserGameEntity_o *)baseObject, 0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  QpMax = v18->static_fields->FriendPointMax;
  if ( FriendPoint >= QpMax )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      QpMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    QpMax = UserGameEntity__GetFriendPoint(v16, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  UILabel_o *textLabel; // x20
  System_String_o *v11; // x22
  System_String_o *v12; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4188D37 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v7);
    byte_4188D37 = 1;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)baseObject,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (textLabel = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(
                                    (UserEventMissionMaster_o *)baseObject,
                                    eventId,
                                    0LL),
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          !MasterData_WarQuestSelectionMaster)
      || (v11 = (System_String_o *)baseObject,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    0LL),
          v12 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44307816(
                                                     v11,
                                                     (System_String_o *)StringLiteral_872/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B2C434(baseObject, *(_QWORD *)&eventId);
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
  int32_t v13; // w20
  int32_t Script; // w21
  UserEventPointMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t Point; // x20
  UILabel_o *dataLabel; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4188D34 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_18472/*"eventId"*/, v10);
    sub_B2C35C(&StringLiteral_18471/*"eventGroupId"*/, v11);
    byte_4188D34 = 1;
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
  baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseObject )
    goto LABEL_33;
  baseObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)baseObject,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !baseObject )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)baseObject,
         &entity,
         itemId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    baseObject = (int64_t)entity;
    if ( entity )
    {
      baseObject = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18472/*"eventId"*/, 0, 0LL);
      if ( entity )
      {
        v13 = baseObject;
        Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18471/*"eventGroupId"*/, 0, 0LL);
        baseObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( baseObject )
        {
          MasterData_WarQuestSelectionMaster = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)baseObject,
                                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          baseObject = NetworkManager__get_UserId(0LL);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Point = UserEventPointMaster__GetPoint(MasterData_WarQuestSelectionMaster, baseObject, v13, Script, 0LL);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_33:
    sub_B2C434(baseObject, *(_QWORD *)&itemId);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *baseObject; // x0
  EventMissionEntity_array *EventMissionList; // x21
  UILabel_o *textLabel; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  __int64 v13; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188D36 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v7);
    byte_4188D36 = 1;
  }
  v13 = 0LL;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !baseObject )
      goto LABEL_21;
    EventMissionList = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)baseObject, eventId, 0LL);
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_21;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !baseObject
      || (HIDWORD(v13) = UserEventMissionMaster__getAchiveMissionNum(
                           (UserEventMissionMaster_o *)baseObject,
                           eventId,
                           0LL),
          textLabel = this->fields.textLabel,
          baseObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&v13 + 4, 0LL),
          !EventMissionList)
      || (v11 = (System_String_o *)baseObject,
          LODWORD(v13) = *(_QWORD *)&EventMissionList->max_length,
          v12 = System_Int32__ToString((int32_t)&v13, 0LL),
          baseObject = (UnityEngine_GameObject_o *)System_String__Concat_44307816(
                                                     v11,
                                                     (System_String_o *)StringLiteral_872/*"/"*/,
                                                     v12,
                                                     0LL),
          !textLabel) )
    {
LABEL_21:
      sub_B2C434(baseObject, *(_QWORD *)&eventId);
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
  System_String_o *NumberFormat_33986032; // x0
  __int64 v12; // x1
  int32_t v13; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v13 = num;
  if ( (byte_4188D39 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&num);
    byte_4188D39 = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat_33986032 = LocalizationManager__GetNumberFormat_33986032(v10, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_33986032, 0LL),
        (NumberFormat_33986032 = (System_String_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_B2C434(NumberFormat_33986032, v12);
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color((UIWidget_o *)NumberFormat_33986032, v14, 0LL);
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

  if ( (byte_4188D35 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4188D35 = 1;
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
      sub_B2C434(baseObject, *(_QWORD *)&eventId);
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

  if ( (byte_4188D38 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventRaidMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4188D38 = 1;
  }
  v13 = 0LL;
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
    baseObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !baseObject )
      goto LABEL_26;
    baseObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)baseObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !baseObject )
      goto LABEL_26;
    v10 = day
        ? UserEventRaidMaster__getDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, day, 0LL)
        : UserEventRaidMaster__getTotalDamagePoint((UserEventRaidMaster_o *)baseObject, eventId, 0LL);
    v13 = v10;
    dataLabel = this->fields.dataLabel;
    v12 = System_Int64__ToString((int64_t)&v13, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    baseObject = (UnityEngine_GameObject_o *)LocalizationManager__GetNumberFormat_33986032(v12, 0LL);
    if ( !dataLabel )
LABEL_26:
      sub_B2C434(baseObject, *(_QWORD *)&eventId);
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

  if ( (byte_4188D3A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spName);
    byte_4188D3A = 1;
  }
  baseSp = this->fields.baseSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v7 = this->fields.baseSp;
  if ( !v7 )
    sub_B2C434(0LL, v6);
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
    sub_B2C434(0LL, size);
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
    sub_B2C434(0LL, height);
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
    sub_B2C434(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_31325924(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, pivot);
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, width);
  UIWidget__set_width(dataLabel, width, 0LL);
}