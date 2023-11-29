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

  if ( (byte_40F8835 & 1) == 0 )
  {
    sub_B16FFC(&EventItemComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19551, v8);
    byte_40F8835 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventItemComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19551;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19551;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  struct UISprite_o *v7; // x8
  UnityEngine_Object_o *mAtlas; // x20
  UISprite_o *v9; // x20
  UIAtlas_o *UIAtlas; // x0
  UISprite_o *v11; // x20
  struct UISprite_o *v12; // x0

  if ( (byte_40F882A & 1) == 0 )
  {
    sub_B16FFC(&EventItemComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_UIAtlas___, v4);
    sub_B16FFC(&StringLiteral_12783, v5);
    byte_40F882A = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v7 = this->fields.baseSp;
    if ( !v7 )
      goto LABEL_20;
    mAtlas = (UnityEngine_Object_o *)v7->fields.mAtlas;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(mAtlas, 0LL, 0LL) )
    {
      v9 = this->fields.baseSp;
      UIAtlas = UnityEngine_Resources__Load_UIAtlas_(
                  (System_String_o *)StringLiteral_12783,
                  (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_UIAtlas___);
      if ( v9 )
      {
        UISprite__set_atlas(v9, UIAtlas, 0LL);
        v11 = this->fields.baseSp;
        if ( (BYTE3(EventItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventItemComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventItemComponent_TypeInfo);
        }
        if ( v11 )
        {
          UISprite__set_spriteName(v11, EventItemComponent_TypeInfo->static_fields->BASE_SPRITE_DEFAULT_NAME, 0LL);
          v12 = this->fields.baseSp;
          if ( v12 )
          {
            ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
              v12,
              v12->klass->vtable._34_get_minWidth.methodPtr);
            return;
          }
        }
      }
LABEL_20:
      sub_B170D4();
    }
  }
}


void __fastcall EventItemComponent__Clear(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *dataLabel; // x0
  UILabel_o *textLabel; // x0

  if ( (byte_40F882C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F882C = 1;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject
    || (UnityEngine_GameObject__SetActive(baseObject, 0, 0LL), (itemIcon = this->fields.itemIcon) == 0LL)
    || (ItemIconComponent__Clear(itemIcon, 0LL), (dataLabel = this->fields.dataLabel) == 0LL)
    || (UILabel__set_text(dataLabel, (System_String_o *)StringLiteral_1, 0LL),
        (textLabel = this->fields.textLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(textLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall EventItemComponent__OnDestroy(EventItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSp; // x20
  UISprite_o *v4; // x0

  if ( (byte_40F882B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F882B = 1;
  }
  baseSp = (UnityEngine_Object_o *)this->fields.baseSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSp, 0LL, 0LL) )
  {
    v4 = this->fields.baseSp;
    if ( !v4 )
      sub_B170D4();
    UISprite__set_atlas(v4, 0LL, 0LL);
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
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v18; // x0
  ItemIconComponent_o *v19; // x0
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemMaster_o *v22; // x21
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v24; // x21
  int32_t qp; // w23
  BalanceConfig_c *v26; // x0
  int32_t QpMax; // w20
  UserGameEntity_o *v28; // x0
  UserGameEntity_o *v29; // x21
  int32_t FriendPoint; // w22
  BalanceConfig_c *v31; // x8
  WebViewManager_o *v32; // x0
  UserItemMaster_o *v33; // x21
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  UserItemEntity_o *v36; // x21
  int32_t num; // w23
  BalanceConfig_c *v38; // x0
  UILabel_o *v39; // x19
  System_String_o *NumberFormat; // x0

  if ( (byte_40F882D & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F882D = 1;
  }
  this->fields.dataItemId = itemId;
  if ( itemId < 1 )
  {
    EventItemComponent__Clear(this, *(const MethodInfo **)&itemId);
    return;
  }
  baseObject = this->fields.baseObject;
  if ( !baseObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_56;
  gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_56;
  v14 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  if ( !v14 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v14, 1, 0LL);
  dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
  if ( !dataLabel )
    goto LABEL_56;
  v16 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  if ( !v16 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_56;
  v18 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
  if ( !v18 )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
  v19 = this->fields.itemIcon;
  if ( !v19 )
    goto LABEL_56;
  ItemIconComponent__SetItem(v19, itemId, -1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_56;
  v22 = MasterData_WarQuestSelectionMaster;
  if ( ItemMaster__isQP(MasterData_WarQuestSelectionMaster, itemId, 0LL) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_56;
    v24 = SelfUserGame;
    qp = SelfUserGame->fields.qp;
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    QpMax = v26->static_fields->QpMax;
    if ( qp >= QpMax )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
    }
    else
    {
      QpMax = v24->fields.qp;
    }
    goto LABEL_51;
  }
  if ( !ItemMaster__isFriendPoint(v22, itemId, 0LL) )
  {
    v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v32 )
    {
      v33 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v32,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( v33 )
      {
        EntityDefinitely = UserItemMaster__GetEntityDefinitely(v33, UserId, itemId, 0LL);
        if ( EntityDefinitely )
        {
          v36 = EntityDefinitely;
          num = EntityDefinitely->fields.num;
          v38 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v38 = BalanceConfig_TypeInfo;
          }
          QpMax = v38->static_fields->UserEventItemMax;
          if ( num >= QpMax )
          {
            if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v38);
              QpMax = BalanceConfig_TypeInfo->static_fields->UserEventItemMax;
            }
          }
          else
          {
            QpMax = v36->fields.num;
          }
          goto LABEL_51;
        }
      }
    }
LABEL_56:
    sub_B170D4();
  }
  v28 = UserGameMaster__getSelfUserGame(0LL);
  if ( !v28 )
    goto LABEL_56;
  v29 = v28;
  FriendPoint = UserGameEntity__GetFriendPoint(v28, 0LL);
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  QpMax = v31->static_fields->FriendPointMax;
  if ( FriendPoint >= QpMax )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      QpMax = BalanceConfig_TypeInfo->static_fields->FriendPointMax;
    }
  }
  else
  {
    QpMax = UserGameEntity__GetFriendPoint(v29, 0LL);
  }
LABEL_51:
  v39 = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(QpMax, 0LL);
  if ( !v39 )
    goto LABEL_56;
  UILabel__set_text(v39, NumberFormat, 0LL);
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
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v19; // x0
  UserEventMissionMaster_o *v20; // x0
  UILabel_o *v21; // x20
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t DailyMissionAchiveNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8831 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_871, v7);
    byte_40F8831 = 1;
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
    baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
    if ( !baseSp )
      goto LABEL_21;
    gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_21;
    v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
    if ( !v12 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
    if ( !dataLabel )
      goto LABEL_21;
    v14 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
    if ( !v14 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
    textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_21;
    v16 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v16, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v19 )
      goto LABEL_21;
    v20 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v19,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !v20
      || (v21 = this->fields.textLabel,
          DailyMissionAchiveNum = UserEventMissionMaster__getDailyMissionAchiveNum(v20, eventId, 0LL),
          v22 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          !MasterData_WarQuestSelectionMaster)
      || (v23 = v22,
          DailyMissionAchiveNum = EventMissionMaster__getDailyEventMissionNum(
                                    MasterData_WarQuestSelectionMaster,
                                    eventId,
                                    0LL),
          v24 = System_Int32__ToString((int32_t)&DailyMissionAchiveNum, 0LL),
          v25 = System_String__Concat_43746016(v23, (System_String_o *)StringLiteral_871, v24, 0LL),
          !v21) )
    {
LABEL_21:
      sub_B170D4();
    }
    UILabel__set_text(v21, v25, 0LL);
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
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v20; // x0
  ItemIconComponent_o *v21; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t Script; // w0
  int32_t v25; // w20
  int32_t v26; // w21
  WebViewManager_o *v27; // x0
  UserEventPointMaster_o *v28; // x22
  int64_t UserId; // x0
  int64_t Point; // x20
  UILabel_o *v31; // x19
  System_String_o *NumberFormatLong; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F882E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_18403, v10);
    sub_B16FFC(&StringLiteral_18402, v11);
    byte_40F882E = 1;
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
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(baseObject, 1, 0LL);
  baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
  if ( !baseSp )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
  if ( !itemIcon )
    goto LABEL_33;
  v16 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
  if ( !v16 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
  if ( !dataLabel )
    goto LABEL_33;
  v18 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  if ( !v18 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v18, 1, 0LL);
  textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
  if ( !textLabel )
    goto LABEL_33;
  v20 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
  if ( !v20 )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(v20, 0, 0LL);
  v21 = this->fields.itemIcon;
  if ( !v21 )
    goto LABEL_33;
  ItemIconComponent__SetItem(v21, itemId, -1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    if ( entity )
    {
      Script = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18403, 0, 0LL);
      if ( entity )
      {
        v25 = Script;
        v26 = ItemEntity__getScript((ItemEntity_o *)entity, (System_String_o *)StringLiteral_18402, 0, 0LL);
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v27 )
        {
          v28 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v27,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          if ( v28 )
          {
            Point = UserEventPointMaster__GetPoint(v28, UserId, v25, v26, 0LL);
            goto LABEL_27;
          }
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
  Point = 0LL;
LABEL_27:
  v31 = this->fields.dataLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(Point, 0LL);
  if ( !v31 )
    goto LABEL_33;
  UILabel__set_text(v31, NumberFormatLong, 0LL);
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
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionEntity_array *EventMissionList; // x21
  WebViewManager_o *v20; // x0
  UserEventMissionMaster_o *v21; // x0
  UILabel_o *v22; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8830 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_871, v7);
    byte_40F8830 = 1;
  }
  v27 = 0LL;
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
    baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
    if ( !baseSp )
      goto LABEL_21;
    gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
    if ( !gameObject )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_21;
    v12 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
    if ( !v12 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v12, 0, 0LL);
    dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
    if ( !dataLabel )
      goto LABEL_21;
    v14 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
    if ( !v14 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
    textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_21;
    v16 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
    if ( !v16 )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(v16, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_21;
    EventMissionList = EventMissionMaster__getEventMissionList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v20 )
      goto LABEL_21;
    v21 = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v20,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !v21
      || (HIDWORD(v27) = UserEventMissionMaster__getAchiveMissionNum(v21, eventId, 0LL),
          v22 = this->fields.textLabel,
          v23 = System_Int32__ToString((int32_t)&v27 + 4, 0LL),
          !EventMissionList)
      || (v24 = v23,
          LODWORD(v27) = *(_QWORD *)&EventMissionList->max_length,
          v25 = System_Int32__ToString((int32_t)&v27, 0LL),
          v26 = System_String__Concat_43746016(v24, (System_String_o *)StringLiteral_871, v25, 0LL),
          !v22) )
    {
LABEL_21:
      sub_B170D4();
    }
    UILabel__set_text(v22, v26, 0LL);
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
  System_String_o *NumberFormat_23125544; // x0
  UIWidget_o *v12; // x0
  int32_t v13; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v13 = num;
  if ( (byte_40F8833 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&num);
    byte_40F8833 = 1;
  }
  dataLabel = this->fields.dataLabel;
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat_23125544 = LocalizationManager__GetNumberFormat_23125544(v10, 0LL);
  if ( !dataLabel
    || (UILabel__set_text(dataLabel, NumberFormat_23125544, 0LL), (v12 = (UIWidget_o *)this->fields.dataLabel) == 0LL) )
  {
    sub_B170D4();
  }
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UIWidget__set_color(v12, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventItemComponent__SetPointEvent(
        EventItemComponent_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseObject; // x0
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v15; // x0
  ItemIconComponent_o *v16; // x0
  UILabel_o *v17; // x21
  int64_t EventPoint; // x19
  System_String_o *NumberFormatLong; // x0

  if ( (byte_40F882F & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&eventId);
    byte_40F882F = 1;
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
    baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
    if ( !baseSp )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_20;
    v11 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
    if ( !v11 )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(v11, 1, 0LL);
    dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
    if ( !dataLabel )
      goto LABEL_20;
    v13 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
    if ( !v13 )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
    textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_20;
    v15 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
    if ( !v15 )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(v15, 0, 0LL);
    v16 = this->fields.itemIcon;
    if ( !v16 )
      goto LABEL_20;
    ItemIconComponent__SetPointEvent(v16, eventId, 0LL);
    v17 = this->fields.dataLabel;
    EventPoint = UserEventPointMaster__GetEventPoint(eventId, groupId, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(EventPoint, 0LL);
    if ( !v17 )
LABEL_20:
      sub_B170D4();
    UILabel__set_text(v17, NumberFormatLong, 0LL);
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
  UnityEngine_Component_o *baseSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemIcon; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *dataLabel; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *textLabel; // x0
  UnityEngine_GameObject_o *v17; // x0
  ItemIconComponent_o *v18; // x0
  WebViewManager_o *Instance; // x0
  UserEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t v21; // x0
  UILabel_o *v22; // x19
  System_String_o *v23; // x20
  System_String_o *NumberFormat_23125544; // x0
  int64_t v25; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8832 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaidMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F8832 = 1;
  }
  v25 = 0LL;
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
    baseSp = (UnityEngine_Component_o *)this->fields.baseSp;
    if ( !baseSp )
      goto LABEL_26;
    gameObject = UnityEngine_Component__get_gameObject(baseSp, 0LL);
    if ( !gameObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    itemIcon = (UnityEngine_Component_o *)this->fields.itemIcon;
    if ( !itemIcon )
      goto LABEL_26;
    v13 = UnityEngine_Component__get_gameObject(itemIcon, 0LL);
    if ( !v13 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v13, 1, 0LL);
    dataLabel = (UnityEngine_Component_o *)this->fields.dataLabel;
    if ( !dataLabel )
      goto LABEL_26;
    v15 = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
    if ( !v15 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v15, 1, 0LL);
    textLabel = (UnityEngine_Component_o *)this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_26;
    v17 = UnityEngine_Component__get_gameObject(textLabel, 0LL);
    if ( !v17 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v17, 0, 0LL);
    v18 = this->fields.itemIcon;
    if ( !v18 )
      goto LABEL_26;
    ItemIconComponent__SetRaidEvent(v18, eventId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    v21 = day
        ? UserEventRaidMaster__getDamagePoint(MasterData_WarQuestSelectionMaster, eventId, day, 0LL)
        : UserEventRaidMaster__getTotalDamagePoint(MasterData_WarQuestSelectionMaster, eventId, 0LL);
    v25 = v21;
    v22 = this->fields.dataLabel;
    v23 = System_Int64__ToString((int64_t)&v25, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat_23125544 = LocalizationManager__GetNumberFormat_23125544(v23, 0LL);
    if ( !v22 )
LABEL_26:
      sub_B170D4();
    UILabel__set_text(v22, NumberFormat_23125544, 0LL);
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
  struct UISprite_o *v6; // x0

  if ( (byte_40F8834 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spName);
    byte_40F8834 = 1;
  }
  baseSp = this->fields.baseSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(baseSp, spName, 0LL);
  v6 = this->fields.baseSp;
  if ( !v6 )
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
    v6,
    v6->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall EventItemComponent__setFontSizeDataLabel(
        EventItemComponent_o *this,
        int32_t size,
        const MethodInfo *method)
{
  UILabel_o *dataLabel; // x0

  dataLabel = this->fields.dataLabel;
  if ( !dataLabel )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject(dataLabel, 0LL);
  GameObjectExtensions__SetLocalPosition_27419968(gameObject, x, y, 0LL);
}


void __fastcall EventItemComponent__setLocalPositionXItemIcon(
        EventItemComponent_o *this,
        float x,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B170D4();
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
    sub_B170D4();
  UIWidget__set_rawPivot(dataLabel, pivot, 0LL);
}


void __fastcall EventItemComponent__setScaleItemIcon(EventItemComponent_o *this, float scale, const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( !itemIcon )
    sub_B170D4();
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
    sub_B170D4();
  UIWidget__set_width(dataLabel, width, 0LL);
}