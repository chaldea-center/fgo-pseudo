void ShopCurrencyInfoController___ctor(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.currencySpritePosTypeA.fields.x = xmmword_C0CE40;
  *(_QWORD *)&this->fields.currencySpritePosTypeB.fields.y = 1110441984;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o ShopCurrencyInfoController__GetApSpritePosition(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.currencySpritePosTypeA.fields.x;
  y = this->fields.currencySpritePosTypeA.fields.y;
  z = this->fields.currencySpritePosTypeA.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_String_o *ShopCurrencyInfoController__GetCurrencyNumber(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  int v7; // w8
  UserItemMaster_o *v8; // x19
  int32_t mana; // w19
  LocalizationManager_c *v10; // x0
  __int64 v12; // x8
  int32_t monitor_high; // w2
  int64_t v14; // x20
  int64_t v15; // x1
  UserItemMaster_o *v16; // x0

  if ( (byte_4C33C24 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C33C24 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_90:
    sub_1C32E7C(Instance);
  }
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  v7 = kind - 2;
  v8 = (UserItemMaster_o *)Instance;
  switch ( v7 )
  {
    case 0:
    case 8:
    case 9:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.mana;
      goto LABEL_10;
    case 5:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v8 )
        goto LABEL_90;
      v12 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[5].monitor);
      goto LABEL_60;
    case 6:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v8 )
        goto LABEL_90;
      v12 = *((_QWORD *)Instance + 23);
      monitor_high = (int32_t)MasterData_object[6].klass;
      goto LABEL_60;
    case 7:
    case 12:
    case 19:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = SelfUserGame->fields.rarePri;
LABEL_10:
      v10 = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        goto LABEL_88;
      return LocalizationManager__GetNumberFormat(mana, 0);
    case 11:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v8 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->LvExceedDewDropItemId;
      goto LABEL_83;
    case 14:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v8 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->PurePriItemId;
      goto LABEL_83;
    case 15:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      if ( !MasterData_object || !v8 )
        goto LABEL_90;
      v12 = *((_QWORD *)Instance + 23);
      monitor_high = HIDWORD(MasterData_object[6].klass);
LABEL_60:
      v15 = *(_QWORD *)(v12 + 64);
      v16 = v8;
      goto LABEL_84;
    case 16:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v8 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->ApSeedItemId;
      goto LABEL_83;
    case 17:
      if ( !SelfUserGame )
        goto LABEL_90;
      mana = UserGameEntity__getAct(SelfUserGame, 0);
      goto LABEL_86;
    case 18:
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Instance = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager_TypeInfo;
      }
      v14 = *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL);
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      if ( !v8 )
        goto LABEL_90;
      monitor_high = BalanceConfig_TypeInfo->static_fields->RevivalItemId;
LABEL_83:
      v16 = v8;
      v15 = v14;
LABEL_84:
      Instance = UserItemMaster__GetEntityDefinitely(v16, v15, monitor_high, 0);
      if ( !Instance )
        goto LABEL_90;
      mana = *((_DWORD *)Instance + 7);
LABEL_86:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        v10 = LocalizationManager_TypeInfo;
LABEL_88:
        j_il2cpp_runtime_class_init_0(v10);
      }
      return LocalizationManager__GetNumberFormat(mana, 0);
    default:
      return (System_String_o *)StringLiteral_1122/*"0"*/;
  }
}


System_String_o *ShopCurrencyInfoController__GetCurrencySprite(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_o **v4; // x8

  if ( (byte_4C33C23 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20327/*"img_bg_seed"*/);
    sub_1C32C20(&StringLiteral_20320/*"img_bg_mp"*/);
    sub_1C32C20(&StringLiteral_20311/*"img_bg_evocation"*/);
    sub_1C32C20(&StringLiteral_20312/*"img_bg_fragments"*/);
    sub_1C32C20(&StringLiteral_20322/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_1C32C20(&StringLiteral_20302/*"img_bg_ap"*/);
    sub_1C32C20(&StringLiteral_20324/*"img_bg_rp"*/);
    sub_1C32C20(&StringLiteral_20319/*"img_bg_hgd"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_20329/*"img_bg_spsummon"*/);
    sub_1C32C20(&StringLiteral_20570/*"img_shopbg04"*/);
    byte_4C33C23 = 1;
  }
  if ( (unsigned int)(kind - 2) > 0x15 )
    v4 = (System_String_o **)&StringLiteral_1/*""*/;
  else
    v4 = (System_String_o **)*(&off_465FEF0 + kind - 2);
  return *v4;
}


UnityEngine_Vector3_o ShopCurrencyInfoController__GetCurrencySpritePosition(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v6; // s2
  float v7; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (unsigned int)kind > 0x15 || ((1 << kind) & 0x3F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
  }
  v6 = *p_z;
  v7 = *p_y;
  x = p_currencySpritePosTypeA->fields.x;
  result.fields.z = v6;
  result.fields.y = v7;
  result.fields.x = x;
  return result;
}


bool ShopCurrencyInfoController__GetIsRarePriShopPurchased(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *v6; // x20
  bool IsTimeStatusRecord; // w0
  bool v8; // w19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33C28 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33C28 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_22;
  v6 = UserEventMaster__GetEntity(
         (UserEventMaster_o *)MasterData_object,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         eventId,
         0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         eventId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
    {
      IsTimeStatusRecord = EventDetailEntity__IsTimeStatusRecord((EventDetailEntity_o *)entity, 0);
      if ( !v6 || IsTimeStatusRecord )
        return 0;
      goto LABEL_19;
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
  if ( !v6 )
    return 0;
LABEL_19:
  v8 = 1;
  if ( !UserEventEntity__getEventFlag(v6, 1, 0) )
    return 0;
  return v8;
}


bool ShopCurrencyInfoController__GetIsShowCurrencyWindow(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  _BOOL4 v3; // w0

  if ( (unsigned int)(kind - 2) > 0x13 )
    LOBYTE(v3) = 0;
  else
    return (0xD5BE1u >> (kind - 2)) & 1;
  return v3;
}


UnityEngine_Vector3_o ShopCurrencyInfoController__GetRestLabelPosition(
        ShopCurrencyInfoController_o *this,
        bool isRarepriShopPurchased,
        bool isFinished,
        int32_t textCount,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = -59.0;
  if ( !isRarepriShopPurchased && !isFinished )
  {
    v5 = 0.0;
    if ( (unsigned int)(textCount - 2) <= 2 )
      v5 = flt_C45680[textCount - 2];
  }
  v6 = -1.7;
  v7 = 0.0;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


void ShopCurrencyInfoController__RefreshCurrencyInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t state,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shopEventItemWindow; // x22
  void *gameObject; // x0
  UnityEngine_Object_o *shopEventItemLimitOverWindow; // x22
  UnityEngine_Object_o *currencyWindow; // x22
  UnityEngine_Object_o *currencySprite; // x22
  UnityEngine_Object_o *currencyLabel; // x22
  UnityEngine_Object_o *baseAtlas; // x23
  UIAtlas_o **p_baseAtlas; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISprite_o *v17; // x8
  UIAtlas_o *mAtlas; // x1
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x23
  bool IsShowCurrencyWindow; // w0
  UnityEngine_Object_o *overCurrencyWindow; // x23
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  struct UISprite_o *v25; // x22
  UISprite_o *v26; // x0
  System_String_o *v27; // x1
  struct UISprite_o *v28; // x22
  int32_t v29; // w1
  System_String_o *v30; // x23
  UISprite_o *v31; // x22
  ShopCurrencyInfoController_o *v32; // x0
  const MethodInfo *v33; // x2
  struct UnityEngine_Vector3_o *p_currencySpritePosTypeA; // x8
  float *p_y; // x9
  float *p_z; // x10
  ShopCurrencyInfoController_o *v37; // x0
  UILabel_o *v38; // x22
  const MethodInfo *v39; // x2
  UnityEngine_Object_o *itemInfo1; // x21
  UnityEngine_Object_o *itemInfo2; // x21
  int v42; // w21
  _BOOL4 v43; // w20
  unsigned int v44; // w20
  ShopCurrencyInfoController_o *v45; // x0
  const MethodInfo *v46; // x2
  UISprite_o *currencySprite2; // x20
  ShopCurrencyInfoController_o *v48; // x0
  const MethodInfo *v49; // x2
  int32_t v50; // w20
  Il2CppObject *Master_object; // x20
  ItemEntity_array *EntityList; // x21
  const MethodInfo *v53; // x2
  int max_length; // w8
  System_String_o *v55; // x23
  unsigned int v56; // w27
  struct ShopCurrencyInfoController_OverCurrencyInfoObject_array *overCurrencyInfos; // x9
  unsigned int v58; // w10
  ItemEntity_o *v59; // x8
  ShopCurrencyInfoController_OverCurrencyInfoObject_o *v60; // x26
  int32_t id; // w25
  UILabel_o *v62; // x25
  int32_t v63; // w26
  UISprite_o *v64; // x20
  System_String_o *v65; // x21
  UISprite_o *v66; // x20
  System_String_o *v67; // x21
  ShopCurrencyInfoController_o *v68; // x0
  UILabel_o *currencyLabel2; // x19
  const MethodInfo *v70; // x2
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C33C21 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_20321/*"img_bg_pp"*/);
    byte_4C33C21 = 1;
  }
  this->fields.kind = kind;
  shopEventItemWindow = (UnityEngine_Object_o *)this->fields.shopEventItemWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemWindow, 0, 0) )
  {
    gameObject = this->fields.shopEventItemWindow;
    if ( !gameObject )
      goto LABEL_116;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  shopEventItemLimitOverWindow = (UnityEngine_Object_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shopEventItemLimitOverWindow, 0, 0) )
  {
    gameObject = this->fields.shopEventItemLimitOverWindow;
    if ( !gameObject )
      goto LABEL_116;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_116;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencyWindow, 0, 0) )
    return;
  currencySprite = (UnityEngine_Object_o *)this->fields.currencySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencySprite, 0, 0) )
    return;
  currencyLabel = (UnityEngine_Object_o *)this->fields.currencyLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currencyLabel, 0, 0) )
    return;
  baseAtlas = (UnityEngine_Object_o *)this->fields.baseAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_baseAtlas = &this->fields.baseAtlas;
  gameObject = (void *)UnityEngine_Object__op_Equality(baseAtlas, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v17 = this->fields.currencySprite;
    if ( !v17 )
      goto LABEL_116;
    mAtlas = v17->fields.mAtlas;
    *p_baseAtlas = mAtlas;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v15, v16);
  }
  gameObject = this->fields.shopEventItemWindowPanel;
  if ( !gameObject
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0),
        (gameObject = this->fields.currencyWindow) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_116:
    sub_1C32E7C(gameObject);
  }
  v20 = (UnityEngine_GameObject_o *)gameObject;
  IsShowCurrencyWindow = ShopCurrencyInfoController__GetIsShowCurrencyWindow(
                           (ShopCurrencyInfoController_o *)gameObject,
                           kind,
                           v19);
  UnityEngine_GameObject__SetActive(v20, IsShowCurrencyWindow, 0);
  overCurrencyWindow = (UnityEngine_Object_o *)this->fields.overCurrencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__op_Inequality(overCurrencyWindow, 0, 0);
  if ( !v23 )
    goto LABEL_40;
  if ( state == 22 && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.overCurrencyInfos, 0) )
  {
    gameObject = this->fields.overCurrencyWindow;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
      gameObject = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ItemMaster___);
      if ( gameObject )
      {
        EntityList = ItemMaster__GetEntityList((ItemMaster_o *)gameObject, 41, 0);
        gameObject = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)EntityList, 23, v53);
        if ( EntityList )
        {
          max_length = EntityList->max_length;
          if ( max_length < 1 )
            return;
          v55 = (System_String_o *)gameObject;
          v56 = 0;
          while ( 1 )
          {
            overCurrencyInfos = this->fields.overCurrencyInfos;
            if ( !overCurrencyInfos )
              break;
            v58 = overCurrencyInfos->max_length;
            if ( (int)v56 >= (int)v58 )
              return;
            if ( v56 >= max_length )
              goto LABEL_117;
            v59 = EntityList->m_Items[v56];
            if ( !v59 )
              goto LABEL_116;
            if ( v56 >= v58 )
LABEL_117:
              sub_1C32E84(gameObject);
            v60 = overCurrencyInfos->m_Items[v56];
            if ( !v60 )
              break;
            gameObject = v60->fields.itemIcon;
            if ( !gameObject )
              break;
            id = v59->fields.id;
            ItemIconComponent__SetItem((ItemIconComponent_o *)gameObject, id, -1, 1, 0);
            gameObject = v60->fields.currencySprite;
            if ( !gameObject )
              break;
            UISprite__set_atlas((UISprite_o *)gameObject, *p_baseAtlas, 0);
            gameObject = v60->fields.currencySprite;
            if ( !gameObject )
              break;
            UISprite__set_spriteName((UISprite_o *)gameObject, v55, 0);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C31812 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C31812 = 1;
            }
            gameObject = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              gameObject = NetworkManager_TypeInfo;
            }
            if ( !Master_object )
              break;
            gameObject = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)Master_object,
                           *(_QWORD *)(*((_QWORD *)gameObject + 23) + 64LL),
                           id,
                           0);
            if ( !gameObject )
              break;
            v62 = v60->fields.currencyLabel;
            v63 = *((_DWORD *)gameObject + 7);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = LocalizationManager__GetNumberFormat(v63, 0);
            if ( !v62 )
              break;
            UILabel__set_text(v62, (System_String_o *)gameObject, 0);
            max_length = EntityList->max_length;
            if ( (int)++v56 >= max_length )
              return;
          }
        }
      }
    }
    goto LABEL_116;
  }
  gameObject = this->fields.overCurrencyWindow;
  if ( !gameObject )
    goto LABEL_116;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
LABEL_40:
  switch ( kind )
  {
    case 20:
      v28 = this->fields.currencySprite;
      v29 = 20;
LABEL_48:
      v30 = ShopCurrencyInfoController__GetCurrencySprite((ShopCurrencyInfoController_o *)v23, v29, v24);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v26 = v28;
      v27 = v30;
      goto LABEL_51;
    case 18:
      v28 = this->fields.currencySprite;
      v29 = 18;
      goto LABEL_48;
    case 16:
      v25 = this->fields.currencySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      v26 = v25;
      v27 = (System_String_o *)StringLiteral_20321/*"img_bg_pp"*/;
LABEL_51:
      AtlasManager__SetShopBanner_40509152(v26, v27, 0);
      goto LABEL_55;
  }
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_116;
  UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
  v31 = this->fields.currencySprite;
  gameObject = ShopCurrencyInfoController__GetCurrencySprite(v32, kind, v33);
  if ( !v31 )
    goto LABEL_116;
  UISprite__set_spriteName(v31, (System_String_o *)gameObject, 0);
LABEL_55:
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_116;
  gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
  if ( (unsigned int)kind > 0x15 || ((1 << kind) & 0x3F2E04) != 0 || ((1 << kind) & 0x180) == 0 )
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeA;
    p_y = &this->fields.currencySpritePosTypeA.fields.y;
    p_z = &this->fields.currencySpritePosTypeA.fields.z;
    if ( !gameObject )
      goto LABEL_116;
  }
  else
  {
    p_currencySpritePosTypeA = &this->fields.currencySpritePosTypeB;
    p_y = &this->fields.currencySpritePosTypeB.fields.y;
    p_z = &this->fields.currencySpritePosTypeB.fields.z;
    if ( !gameObject )
      goto LABEL_116;
  }
  v71.fields.x = p_currencySpritePosTypeA->fields.x;
  v71.fields.y = *p_y;
  v71.fields.z = *p_z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v71, 0);
  gameObject = this->fields.currencySprite;
  if ( !gameObject )
    goto LABEL_116;
  v37 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject + 840LL))(
                                          gameObject,
                                          *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
  v38 = this->fields.currencyLabel;
  gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v37, kind, v39);
  if ( !v38 )
    goto LABEL_116;
  UILabel__set_text(v38, (System_String_o *)gameObject, 0);
  itemInfo1 = (UnityEngine_Object_o *)this->fields.itemInfo1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemInfo1, 0, 0) )
  {
    itemInfo2 = (UnityEngine_Object_o *)this->fields.itemInfo2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(itemInfo2, 0, 0) )
    {
      v42 = state - 15;
      v43 = (unsigned int)(state - 15) < 7;
      GameObjectExtensions__SetLocalPosition_36036760(this->fields.itemInfo1, 0.0, 0.0, 0);
      gameObject = this->fields.itemInfo2;
      if ( !gameObject )
        goto LABEL_116;
      v44 = (0x59u >> v42) & v43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v44, 0);
      if ( v44 )
      {
        GameObjectExtensions__SetLocalPosition_36036760(this->fields.itemInfo1, -90.0, 0.0, 0);
        GameObjectExtensions__SetLocalPosition_36036760(this->fields.itemInfo2, 90.0, 0.0, 0);
        switch ( v42 )
        {
          case 0:
          case 6:
            gameObject = this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_116;
            UISprite__set_atlas((UISprite_o *)gameObject, this->fields.baseAtlas, 0);
            currencySprite2 = this->fields.currencySprite2;
            gameObject = ShopCurrencyInfoController__GetCurrencySprite(v48, 2, v49);
            if ( !currencySprite2 )
              goto LABEL_116;
            UISprite__set_spriteName(currencySprite2, (System_String_o *)gameObject, 0);
            v50 = 2;
LABEL_111:
            gameObject = this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_116;
            gameObject = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
            if ( !gameObject )
              goto LABEL_116;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)gameObject,
              this->fields.currencySpritePosTypeA,
              0);
            gameObject = this->fields.currencySprite2;
            if ( !gameObject )
              goto LABEL_116;
            v68 = (ShopCurrencyInfoController_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)gameObject
                                                                                            + 840LL))(
                                                    gameObject,
                                                    *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
            currencyLabel2 = this->fields.currencyLabel2;
            gameObject = ShopCurrencyInfoController__GetCurrencyNumber(v68, v50, v70);
            if ( !currencyLabel2 )
              goto LABEL_116;
            UILabel__set_text(currencyLabel2, (System_String_o *)gameObject, 0);
            break;
          case 3:
            v64 = this->fields.currencySprite2;
            v65 = ShopCurrencyInfoController__GetCurrencySprite(v45, 17, v46);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_40509152(v64, v65, 0);
            v50 = 17;
            goto LABEL_111;
          case 4:
            v66 = this->fields.currencySprite2;
            v67 = ShopCurrencyInfoController__GetCurrencySprite(v45, 19, v46);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetShopBanner_40509152(v66, v67, 0);
            v50 = 19;
            goto LABEL_111;
          default:
            return;
        }
      }
    }
  }
}


void ShopCurrencyInfoController__RefreshEventItemInfo(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t eventId,
        bool isEventShop,
        System_Int32_array *eventItemList,
        bool isForcedAdjustment,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currencyWindow; // x25
  EventItemComponent_o *gameObject; // x0
  const MethodInfo *v15; // x1
  EventItemDisplayEntity_array *ListByEventIdAndScreenFlag; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  int max_length; // w8
  unsigned int v19; // w25
  EventItemDisplayEntity_o *v20; // x8
  int32_t targetId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v25; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  signed __int64 v29; // x23
  char v30; // w25
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  UIWidget_o *shopEventItemWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawList; // x8
  unsigned __int64 v35; // x24
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v37; // x8
  EventItemComponent_o *v38; // x25
  struct EventItemComponent_array *v39; // x8
  UnityEngine_Transform_o *transform; // x25
  UIWidget_o *shopEventItemLimitOverWindow; // x24
  struct EventItemComponent_array *shopEventItemDrawLimitOverList; // x8
  unsigned __int64 v43; // x24
  unsigned __int64 v44; // x9
  Il2CppClass **v45; // x8
  EventItemComponent_o *v46; // x25
  struct EventItemComponent_array *v47; // x8
  UnityEngine_Transform_o *v48; // x25
  UnityEngine_Object_o *infoPanel; // x20
  float v50; // s8
  float ItemBaseWindowX; // s0
  int32_t ItemBaseWindowHeight_k__BackingField; // s10
  float v53; // s9
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PanelPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o EventItemPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C33C20 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventItemDisplayMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&EventItemWindowMaker_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33C20 = 1;
  }
  this->fields.eventId = eventId;
  currencyWindow = (UnityEngine_Object_o *)this->fields.currencyWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (EventItemComponent_o *)UnityEngine_Object__op_Inequality(currencyWindow, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !eventItemList )
      goto LABEL_109;
    if ( !eventItemList->max_length )
    {
      if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
      switch ( ShopBuyItemListViewManager__GetPayType(eventId, v15) )
      {
        case 4:
          v55 = 2;
          goto LABEL_108;
        case 8:
          v55 = 7;
          goto LABEL_108;
        case 9:
          v55 = 8;
          goto LABEL_108;
        case 10:
          v55 = 9;
          goto LABEL_108;
        case 12:
          v55 = 13;
LABEL_108:
          ShopCurrencyInfoController__RefreshCurrencyInfo(this, v55, 0, v54);
          return;
        default:
          break;
      }
    }
    gameObject = (EventItemComponent_o *)this->fields.currencyWindow;
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_109;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  this->fields.kind = kind;
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventItemDisplayMaster___);
  if ( !gameObject )
    goto LABEL_109;
  ListByEventIdAndScreenFlag = EventItemDisplayMaster__GetListByEventIdAndScreenFlag(
                                 (EventItemDisplayMaster_o *)gameObject,
                                 eventId,
                                 8,
                                 0,
                                 0);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !ListByEventIdAndScreenFlag )
    goto LABEL_109;
  max_length = ListByEventIdAndScreenFlag->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
LABEL_110:
        sub_1C32E84(gameObject);
      v20 = ListByEventIdAndScreenFlag->m_Items[v19];
      if ( !v20 )
        break;
      if ( v20->fields.pointType == 1 )
      {
        if ( !v17 )
          break;
        targetId = v20->fields.targetId;
        items = v17->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            targetId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size] = targetId;
        }
      }
      max_length = ListByEventIdAndScreenFlag->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_25;
    }
LABEL_109:
    sub_1C32E7C(gameObject);
  }
LABEL_25:
  if ( isEventShop )
  {
    gameObject = (EventItemComponent_o *)this->fields.shopEventItemWindowPanel;
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !this->fields.shopEventItemWindowPanel )
      goto LABEL_109;
    v25 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.shopEventItemWindowPanel,
                                           0);
    if ( !gameObject )
      goto LABEL_109;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    v57.fields.x = x;
    v57.fields.y = y;
    v57.fields.z = z;
    PanelPosition = EventItemWindowMaker__GetPanelPosition(v57, 0);
    if ( !v25 )
      goto LABEL_109;
    UnityEngine_Transform__set_localPosition(v25, PanelPosition, 0);
  }
  if ( !v17 )
    goto LABEL_109;
  v29 = v17->fields._size;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetIsLimitOverWindow(v29, isForcedAdjustment, 0);
  if ( !this->fields.shopEventItemWindow )
    goto LABEL_109;
  v30 = (char)gameObject;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)this->fields.shopEventItemWindow,
                                         0);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, (v30 & 1) == 0, 0);
  gameObject = (EventItemComponent_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v30 & 1, 0);
  gameObject = (EventItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)gameObject,
                                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !gameObject )
    goto LABEL_109;
  gameObject = (EventItemComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                         eventId,
                                         (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_109;
  if ( EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x4000000000LL, 0) )
  {
    ShopCurrencyInfoController__ResetEventEnableTime(this, v30 & 1, v31);
    if ( (v30 & 1) == 0 )
    {
LABEL_45:
      shopEventItemWindow = (UIWidget_o *)this->fields.shopEventItemWindow;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                             isEventShop,
                                             v29,
                                             isForcedAdjustment,
                                             0);
      if ( !shopEventItemWindow )
        goto LABEL_109;
      UIWidget__set_height(shopEventItemWindow, (int32_t)gameObject, 0);
      shopEventItemDrawList = this->fields.shopEventItemDrawList;
      if ( !shopEventItemDrawList )
        goto LABEL_109;
      v35 = 0;
      while ( 1 )
      {
        max_length_low = LODWORD(shopEventItemDrawList->max_length);
        if ( (__int64)v35 >= (int)max_length_low )
          goto LABEL_86;
        if ( v35 >= max_length_low )
          goto LABEL_110;
        v37 = &shopEventItemDrawList->obj.klass + v35;
        v38 = (EventItemComponent_o *)v37[4];
        if ( (__int64)v35 >= v29 )
        {
          if ( !v38 )
            goto LABEL_109;
          EventItemComponent__Clear((EventItemComponent_o *)v37[4], 0);
        }
        else
        {
          gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                                 v17,
                                                 v35,
                                                 (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v38 )
            goto LABEL_109;
          EventItemComponent__Set(v38, (int32_t)gameObject, 0);
          v39 = this->fields.shopEventItemDrawList;
          if ( !v39 )
            goto LABEL_109;
          if ( v35 >= LODWORD(v39->max_length) )
            goto LABEL_110;
          gameObject = v39->m_Items[v35];
          if ( !gameObject )
            goto LABEL_109;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
          if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
          EventItemPosition = EventItemWindowMaker__GetEventItemPosition(isEventShop, v35, v29, isForcedAdjustment, 0);
          if ( !transform )
            goto LABEL_109;
          UnityEngine_Transform__set_localPosition(transform, EventItemPosition, 0);
        }
        shopEventItemDrawList = this->fields.shopEventItemDrawList;
        ++v35;
        if ( !shopEventItemDrawList )
          goto LABEL_109;
      }
    }
  }
  else
  {
    ShopCurrencyInfoController__SetEventEnableTime(this, eventId, v30 & 1, v32);
    if ( (v30 & 1) == 0 )
      goto LABEL_45;
  }
  shopEventItemLimitOverWindow = (UIWidget_o *)this->fields.shopEventItemLimitOverWindow;
  if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
  gameObject = (EventItemComponent_o *)EventItemWindowMaker__GetEventItemWindowHeight(
                                         isEventShop,
                                         v29,
                                         isForcedAdjustment,
                                         0);
  if ( !shopEventItemLimitOverWindow )
    goto LABEL_109;
  UIWidget__set_height(shopEventItemLimitOverWindow, (int32_t)gameObject, 0);
  shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
  if ( !shopEventItemDrawLimitOverList )
    goto LABEL_109;
  v43 = 0;
  while ( 1 )
  {
    v44 = LODWORD(shopEventItemDrawLimitOverList->max_length);
    if ( (__int64)v43 >= (int)v44 )
      break;
    if ( v43 >= v44 )
      goto LABEL_110;
    v45 = &shopEventItemDrawLimitOverList->obj.klass + v43;
    v46 = (EventItemComponent_o *)v45[4];
    if ( (__int64)v43 >= v29 )
    {
      if ( !v46 )
        goto LABEL_109;
      EventItemComponent__Clear((EventItemComponent_o *)v45[4], 0);
    }
    else
    {
      gameObject = (EventItemComponent_o *)System_Collections_Generic_List_int___get_Item(
                                             v17,
                                             v43,
                                             (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v46 )
        goto LABEL_109;
      EventItemComponent__Set(v46, (int32_t)gameObject, 0);
      v47 = this->fields.shopEventItemDrawLimitOverList;
      if ( !v47 )
        goto LABEL_109;
      if ( v43 >= LODWORD(v47->max_length) )
        goto LABEL_110;
      gameObject = v47->m_Items[v43];
      if ( !gameObject )
        goto LABEL_109;
      v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      v60 = EventItemWindowMaker__GetEventItemPosition(isEventShop, v43, v29, isForcedAdjustment, 0);
      if ( !v48 )
        goto LABEL_109;
      UnityEngine_Transform__set_localPosition(v48, v60, 0);
    }
    shopEventItemDrawLimitOverList = this->fields.shopEventItemDrawLimitOverList;
    ++v43;
    if ( !shopEventItemDrawLimitOverList )
      goto LABEL_109;
  }
LABEL_86:
  if ( isEventShop )
  {
    if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
    this->fields._ItemBaseWindowHeight_k__BackingField = EventItemWindowMaker__GetItemBaseWindowHeight(
                                                           v29,
                                                           isForcedAdjustment,
                                                           0);
    infoPanel = (UnityEngine_Object_o *)this->fields.infoPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(infoPanel, 0, 0) )
    {
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_109;
      v61 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
      v50 = v61.fields.z;
      if ( !EventItemWindowMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventItemWindowMaker_TypeInfo);
      ItemBaseWindowX = EventItemWindowMaker__GetItemBaseWindowX(0);
      gameObject = (EventItemComponent_o *)this->fields.infoPanel;
      if ( !gameObject )
        goto LABEL_109;
      ItemBaseWindowHeight_k__BackingField = this->fields._ItemBaseWindowHeight_k__BackingField;
      v53 = ItemBaseWindowX;
      gameObject = (EventItemComponent_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0);
      if ( !gameObject )
        goto LABEL_109;
      v62.fields.x = v53;
      v62.fields.z = v50;
      v62.fields.y = (float)ItemBaseWindowHeight_k__BackingField;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v62, 0);
    }
  }
}


void ShopCurrencyInfoController__RefreshEventItemWindow(
        ShopCurrencyInfoController_o *this,
        int32_t kind,
        int32_t eventId,
        bool isEventShop,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Int32_array *EventItemList; // x22
  bool IsForcedAdjustmentDialog; // w5
  const MethodInfo *v12; // x6

  if ( (byte_4C33C1F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33C1F = 1;
  }
  if ( kind == 6 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___)) == 0
      || (EventItemList = ShopMaster__GetEventItemList((ShopMaster_o *)Instance, eventId, 0),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       eventId,
                       (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    IsForcedAdjustmentDialog = EventDetailEntity__IsForcedAdjustmentDialog((EventDetailEntity_o *)Instance, 0);
    ShopCurrencyInfoController__RefreshEventItemInfo(
      this,
      6,
      eventId,
      isEventShop,
      EventItemList,
      IsForcedAdjustmentDialog,
      v12);
  }
}


void ShopCurrencyInfoController__ResetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        bool isLimitOver,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopCurrencyInfoController_o *v5; // x19
  __int64 v6; // x8
  struct UILabel_o *v7; // x1
  ShopCurrencyInfoController_o **p_eventItemTimeLabel; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  CGThumbnailListItem_o *p_eventItemRestLabel; // x19

  v5 = this;
  if ( (byte_4C33C26 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33C26 = 1;
  }
  v6 = 160;
  if ( isLimitOver )
    v6 = 176;
  if ( !v5 )
    goto LABEL_11;
  v7 = *(struct UILabel_o **)((char *)&v5->klass + v6);
  v5->fields.eventItemTimeLabel = v7;
  p_eventItemTimeLabel = (ShopCurrencyInfoController_o **)&v5->fields.eventItemTimeLabel;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->fields.eventItemTimeLabel, (int32_t)v7, (int32_t)method, v3);
  v11 = 168;
  if ( isLimitOver )
    v11 = 184;
  v12 = *(struct UILabel_o **)((char *)&v5->klass + v11);
  v5->fields.eventItemRestLabel = v12;
  p_eventItemRestLabel = (CGThumbnailListItem_o *)&v5->fields.eventItemRestLabel;
  sub_1C32BC4(p_eventItemRestLabel, (int32_t)v12, v9, v10);
  this = *p_eventItemTimeLabel;
  if ( !*p_eventItemTimeLabel
    || (UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0),
        (this = (ShopCurrencyInfoController_o *)p_eventItemRestLabel->klass) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ShopCurrencyInfoController__SetEventEnableTime(
        ShopCurrencyInfoController_o *this,
        int32_t eventId,
        bool isLimitOver,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *v6; // x19
  __int64 v7; // x8
  struct UILabel_o *v8; // x1
  char v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  struct UILabel_o *v12; // x1
  ShopCurrencyInfoController_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  v6 = this;
  if ( (byte_4C33C25 & 1) == 0 )
  {
    this = (ShopCurrencyInfoController_o *)sub_1C32C20(&StringLiteral_15190/*"UpdateRemainTime"*/);
    byte_4C33C25 = 1;
  }
  v7 = 160;
  if ( isLimitOver )
    v7 = 176;
  if ( !v6 )
    sub_1C32E7C(this);
  v8 = *(struct UILabel_o **)((char *)&v6->klass + v7);
  v6->fields.eventItemTimeLabel = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.eventItemTimeLabel, (int32_t)v8, isLimitOver, method);
  v11 = 168;
  if ( isLimitOver )
    v11 = 184;
  v12 = *(struct UILabel_o **)((char *)&v6->klass + v11);
  v6->fields.eventItemRestLabel = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.eventItemRestLabel, (int32_t)v12, v9, v10);
  v6->fields.isRarePriShopPurchased = ShopCurrencyInfoController__GetIsRarePriShopPurchased(v13, eventId, v14);
  ShopCurrencyInfoController__UpdateRemainTime(v6, v15);
  UnityEngine_MonoBehaviour__CancelInvoke_71208520(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_15190/*"UpdateRemainTime"*/,
    0);
  UnityEngine_MonoBehaviour__InvokeRepeating(
    (UnityEngine_MonoBehaviour_o *)v6,
    (System_String_o *)StringLiteral_15190/*"UpdateRemainTime"*/,
    1.0,
    1.0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ShopCurrencyInfoController__SetEventItemRestTimeLabels(
        ShopCurrencyInfoController_o *this,
        UILabel_o *restLabel,
        UILabel_o *timeLabel,
        const MethodInfo *method)
{
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_o **p_eventEntity; // x23
  DataManager_o *Instance; // x0
  int64_t finishedAt; // x22
  System_Collections_Generic_IEnumerable_TSource__o *EventEntitiyList; // x23
  ShopCurrencyInfoController___c_c *v12; // x8
  System_Func_object__long__o *_9__51_0; // x24
  Il2CppObject *v14; // x25
  struct ShopCurrencyInfoController___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int64_t v18; // x0
  int64_t Time; // x23
  _BOOL4 v21; // w24
  System_String_o **v22; // x8
  struct System_String_o *mText; // x8
  float v24; // s0 OVERLAPPED
  unsigned int v25; // w8
  int v26; // s1
  int v27; // s2

  if ( (byte_4C33C2A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Max_ShopEntity___);
    sub_1C32C20(&System_Func_ShopEntity__long__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__51_0__);
    sub_1C32C20(&ShopCurrencyInfoController___c_TypeInfo);
    sub_1C32C20(&StringLiteral_13394/*"TIME_OVER_EVENTREWARD"*/);
    sub_1C32C20(&StringLiteral_12127/*"SHOP_INDEFINITE_PERIOD"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_13416/*"TIME_REST_EVENTREWARD"*/);
    byte_4C33C2A = 1;
  }
  if ( this->fields.kind != 6 )
    return;
  p_eventEntity = &this->fields.eventEntity;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity || eventEntity->fields.id != this->fields.eventId )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields.eventEntity,
                                  this->fields.eventId,
                                  (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !timeLabel )
        goto LABEL_50;
      UILabel__set_text(timeLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( !restLabel )
        goto LABEL_50;
      UILabel__set_text(restLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
    eventEntity = *p_eventEntity;
    if ( !*p_eventEntity )
      goto LABEL_50;
  }
  finishedAt = eventEntity->fields.finishedAt;
  if ( this->fields.isRarePriShopPurchased )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SHOP_INDEFINITE_PERIOD"*/, 0);
    if ( !timeLabel )
      goto LABEL_50;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ShopMaster___);
    if ( !*p_eventEntity || !Instance )
      goto LABEL_50;
    EventEntitiyList = (System_Collections_Generic_IEnumerable_TSource__o *)ShopMaster__GetEventEntitiyList(
                                                                              (ShopMaster_o *)Instance,
                                                                              (*p_eventEntity)->fields.id,
                                                                              0);
    v12 = ShopCurrencyInfoController___c_TypeInfo;
    if ( !ShopCurrencyInfoController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopCurrencyInfoController___c_TypeInfo);
      v12 = ShopCurrencyInfoController___c_TypeInfo;
    }
    _9__51_0 = (System_Func_object__long__o *)v12->static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = ShopCurrencyInfoController___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__51_0 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_ShopEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__51_0,
        v14,
        Method_ShopCurrencyInfoController___c__SetEventItemRestTimeLabels_b__51_0__,
        0);
      static_fields = ShopCurrencyInfoController___c_TypeInfo->static_fields;
      static_fields->__9__51_0 = (struct System_Func_ShopEntity__long__o *)_9__51_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v16, v17);
    }
    v18 = System_Linq_Enumerable__Max_object__51427176(
            EventEntitiyList,
            (System_Func_TSource__long__o *)_9__51_0,
            (const MethodInfo_310B768 *)Method_System_Linq_Enumerable_Max_ShopEntity___);
    if ( finishedAt > v18 && v18 > 0 )
      finishedAt = v18;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager__GetRestTime2(finishedAt, -1, 0);
    if ( !timeLabel )
LABEL_50:
      sub_1C32E7C(Instance);
  }
  UILabel__set_text(timeLabel, (System_String_o *)Instance, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v21 = this->fields.isRarePriShopPurchased || finishedAt < Time;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = (System_String_o **)&StringLiteral_13416/*"TIME_REST_EVENTREWARD"*/;
  if ( v21 )
    v22 = (System_String_o **)&StringLiteral_13394/*"TIME_OVER_EVENTREWARD"*/;
  Instance = (DataManager_o *)LocalizationManager__Get(*v22, 0);
  if ( !restLabel )
    goto LABEL_50;
  UILabel__set_text(restLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)restLabel, 0);
  mText = timeLabel->fields.mText;
  if ( !mText )
    goto LABEL_50;
  v24 = -59.0;
  if ( finishedAt >= Time && !this->fields.isRarePriShopPurchased )
  {
    v24 = 0.0;
    v25 = mText->fields._stringLength - 2;
    if ( v25 <= 2 )
      v24 = flt_C45680[v25];
  }
  if ( !Instance )
    goto LABEL_50;
  v26 = -1076258406;
  v27 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, *(UnityEngine_Vector3_o *)&v24, 0);
}


void ShopCurrencyInfoController__SetObjectList(
        ShopCurrencyInfoController_o *this,
        System_Collections_Generic_List_ShopBuyItemListViewObject__o *objectList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.objectList = objectList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)objectList, (int32_t)method, v3);
}


void ShopCurrencyInfoController__StopUpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( (byte_4C33C27 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15190/*"UpdateRemainTime"*/);
    byte_4C33C27 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_71208520(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_15190/*"UpdateRemainTime"*/,
    0);
}


void ShopCurrencyInfoController__Update(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  if ( this->fields.kind == 18 )
    ShopCurrencyInfoController__UpdateApLabel(this, method);
}


void ShopCurrencyInfoController__UpdateApLabel(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currencyLabel2; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  UILabel_o *v6; // x19
  System_String_o *CurrencyNumber; // x0

  if ( (byte_4C33C22 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33C22 = 1;
  }
  currencyLabel2 = (UnityEngine_Object_o *)this->fields.currencyLabel2;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(currencyLabel2, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.currencyLabel2;
    CurrencyNumber = ShopCurrencyInfoController__GetCurrencyNumber((ShopCurrencyInfoController_o *)v4, 19, v5);
    if ( !v6 )
      sub_1C32E7C(CurrencyNumber);
    UILabel__set_text(v6, CurrencyNumber, 0);
  }
}


void ShopCurrencyInfoController__UpdateRemainTime(ShopCurrencyInfoController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *objectList; // x0
  int32_t v5; // w20
  Il2CppObject *Item; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4C33C29 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33C29 = 1;
  }
  ShopCurrencyInfoController__SetEventItemRestTimeLabels(
    this,
    this->fields.eventItemRestLabel,
    this->fields.eventItemTimeLabel,
    v2);
  objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
  if ( !objectList )
LABEL_13:
    sub_1C32E7C(objectList);
  v5 = 0;
  while ( v5 < objectList->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             objectList,
             v5,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
      if ( !objectList )
        goto LABEL_13;
      objectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  objectList,
                                                                  v5,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ShopBuyItemListViewObject__get_Item__);
      if ( !objectList )
        goto LABEL_13;
      ShopBuyItemListViewObject__UpdateRemaingTime((ShopBuyItemListViewObject_o *)objectList, v7);
    }
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    ++v5;
    if ( !objectList )
      goto LABEL_13;
  }
}


int32_t ShopCurrencyInfoController__get_ItemBaseWindowHeight(
        ShopCurrencyInfoController_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemBaseWindowHeight_k__BackingField;
}


void ShopCurrencyInfoController__set_ItemBaseWindowHeight(
        ShopCurrencyInfoController_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ItemBaseWindowHeight_k__BackingField = value;
}


void ShopCurrencyInfoController_OverCurrencyInfoObject___ctor(
        ShopCurrencyInfoController_OverCurrencyInfoObject_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopCurrencyInfoController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33C2B & 1) == 0 )
  {
    sub_1C32C20(&ShopCurrencyInfoController___c_TypeInfo);
    byte_4C33C2B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(ShopCurrencyInfoController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopCurrencyInfoController___c_TypeInfo->static_fields->__9 = (struct ShopCurrencyInfoController___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)ShopCurrencyInfoController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ShopCurrencyInfoController___c___ctor(ShopCurrencyInfoController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t ShopCurrencyInfoController___c___SetEventItemRestTimeLabels_b__51_0(
        ShopCurrencyInfoController___c_o *this,
        ShopEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.closedAt;
}